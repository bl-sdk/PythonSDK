#include "stdafx.h"
#include "CPythonInterface.h"
#include "Logging.h"
#include "Settings.h"
#include "Util.h"
#include <string>
#include <cstdlib>
#include <sstream>

bool VerifyPythonFunction(py::object funcHook) {
	PyObject* obj = funcHook.ptr();
	if (!obj) {
		LOG(ERROR, "Object passed to hook is null!");
		return false;
	}
	if (!PyFunction_Check(obj)) {
		LOG(ERROR, "Object passed to hook is not a function!");
		return false;
	}
	PyCodeObject* code = (PyCodeObject*)PyFunction_GetCode(obj);
	if (!code) {
		LOG(ERROR, "Unable to retrive code from object passed to hook!");
		return false;
	}
	if (code->co_argcount != 3) {
		LOG(ERROR, "Function passed to hook must have exactly 3 arguments!");
		return false;
	}
	return true;
}

void RegisterHook(const std::string& funcName, const std::string& hookName, py::object funcHook) {
	if (!VerifyPythonFunction(funcHook)) {
		return;
	}
	UnrealSDK::RegisterHook(funcName, hookName, [funcHook](UObject* caller, UFunction* function, FStruct* params) {
		try {
			py::object py_caller = cast(caller, py::return_value_policy::reference);
			py::object py_function = cast(function, py::return_value_policy::reference);
			py::object py_params = cast(params, py::return_value_policy::reference);
			py::object ret = funcHook(py_caller, py_function, py_params);
			return ret.cast<bool>();
		} catch (std::exception e) {
			LOG(ERROR, e.what());
		}
		return true;
	});
}

#ifdef UE4 // Console command handling

bool RegisterConsoleCommand(const std::string& ConsoleCommand, py::object funcHook) {
	// Function Verification
	static const char* params[] = { "command"};
	if (!VerifyPythonFunction(funcHook)) { return false; }
	return UnrealSDK::RegisterConsoleCommand(ConsoleCommand, [funcHook](std::string& command)
		{
			try
			{
				py::object py_cmd = cast(command, py::return_value_policy::reference);
				py::object ret = funcHook(py_cmd);
				return ret.cast<bool>();
			}
			catch (std::exception e)
			{
				LOG(ERROR, e.what());
			}
			return true;
		}
	);
}

void RemoveConsoleCommand(const std::string& ConsoleCommand) {
	UnrealSDK::RemoveConsoleCommand(ConsoleCommand);
}
#endif

static void ValidateLogLevel(int level) {
	if (level < Logging::SDKVerbosity::MIN || level > Logging::SDKVerbosity::MAX) {
		throw py::value_error("Log level out of range");
	}
}

namespace py = pybind11;

PYBIND11_EMBEDDED_MODULE(unrealsdk, m)
{
	Export_pystes_gamedefines(m);
	Export_pystes_Core_classes(m);
	Export_pystes_TArray(m);

	m.def("GetVersion", []() { return py::make_tuple(VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH); });
	m.def("Log", [](py::args args, int level) {
		ValidateLogLevel(level);

		std::ostringstream msg;
		for (py::size_t i = 0; i < args.size(); i++) {
			if (i > 0) msg << " ";
			msg << py::str(args[i]);
		}

		PyFrameObject* frame = PyEval_GetFrame();
		std::string filename = py::str(frame->f_code->co_filename);
		int line_number = PyFrame_GetLineNumber(frame);
		loguru::log(level, filename.c_str(), line_number, msg.str().c_str());
	}, py::arg("level") = (int)Logging::SDKVerbosity::INFO);
	m.def("LoadPackage", &UnrealSDK::LoadPackage, py::arg("filename"), py::arg("flags") = 0, py::arg("force") = false);
	m.def("KeepAlive", &UnrealSDK::KeepAlive);
	m.def("GetPackageObject", &UObject::GetPackageObject, py::return_value_policy::reference);
	m.def("FindAll", &UObject::FindAll, py::arg("InStr"), py::arg("IncludeSubclasses") = false,
		py::return_value_policy::reference);
	m.def("FindClass", &UObject::FindClass, py::arg("ClassName"), py::arg("Lookup") = false,
	      py::return_value_policy::reference);
	m.def("FindObject", [](char* ClassName, char* ObjectFullName) { return UObject::Find(ClassName, ObjectFullName); },
	      py::return_value_policy::reference);
	m.def("FindObject", [](UClass* Class, char* ObjectFullName) { return UObject::Find(Class, ObjectFullName); },
	      py::return_value_policy::reference);
	m.def("LoadObject", [](char* ClassName, char* ObjectFullName) { return UObject::Load(ClassName, ObjectFullName); },
	      py::return_value_policy::reference);
	m.def("LoadObject", [](UClass* Class, char* ObjectFullName) { return UObject::Load(Class, ObjectFullName); },
	      py::return_value_policy::reference);
	//m.def("LoadTexture", &UnrealSDK::LoadTexture, py::return_value_policy::reference);
	m.def("ConstructObject", &UnrealSDK::ConstructObject, "Construct Objects", py::arg("Class"),
	      py::arg("Outer") = UnrealSDK::GetEngine()->Outer, py::arg("Name") = FName(), py::arg("SetFlags") = 0x1,
	      py::arg("InternalSetFlags") = 0x00, py::arg("Template") = (UObject*)nullptr,
	      py::arg("Error") = (FOutputDevice *)nullptr, py::arg("InstanceGraph") = (void*)nullptr,
	      py::arg("bAssumeTemplateIsArchetype") = (int)0, py::return_value_policy::reference);
#ifndef UE4
	m.def("ConstructObject", [](char* ClassName, UObject* Outer, FName Name, unsigned int SetFlags,
	                            unsigned int InternalSetFlags, UObject* Template, FOutputDevice* Error,
	                            void* InstanceGraph, int bAssumeTemplateIsArchetype)
	      {
		      return UnrealSDK::ConstructObject(UObject::FindClass(ClassName), Outer, Name, SetFlags, InternalSetFlags,
		                                     Template,
		                                     Error, InstanceGraph, bAssumeTemplateIsArchetype);
	      }, "Construct Objects", py::arg("Class"), py::arg("Outer") = UnrealSDK::GetEngine()->Outer,
	      py::arg("Name") = FName(),
	      py::arg("SetFlags") = 0x1, py::arg("InternalSetFlags") = 0x00, py::arg("Template") = (UObject*)nullptr,
	      py::arg("Error") = (FOutputDevice *)nullptr, py::arg("InstanceGraph") = (void*)nullptr,
	      py::arg("bAssumeTemplateIsArchetype") = (int)0, py::return_value_policy::reference);
#else
	m.def("ConstructObject", [](char* ClassName, UObject* Outer, FName Name, unsigned int SetFlags,
		unsigned int InternalSetFlags, UObject* Template, int CopyTransientsFromDefault,
		void* InstanceGraph, int bAssumeTemplateIsArchetype)
		{
			return UnrealSDK::ConstructObject(UObject::FindClass(ClassName), Outer, Name, SetFlags, InternalSetFlags,
				Template, CopyTransientsFromDefault, InstanceGraph, bAssumeTemplateIsArchetype);
		}, "Construct Objects", py::arg("Class"), py::arg("Outer") = UnrealSDK::GetEngine()->Outer,
			py::arg("Name") = FName(),
			py::arg("SetFlags") = 0x1, py::arg("InternalSetFlags") = 0x00, py::arg("Template") = (UObject*)nullptr,
			py::arg("CopyTransientsFromDefault") = 0x00,
			py::arg("InstanceGraph") = (void*)nullptr, py::arg("bAssumeTemplateIsArchetype") = (int)0, py::return_value_policy::reference);
	m.def("RegisterConsoleCommand", [](std::string& Command, py::object FuncToCall) { RegisterConsoleCommand(Command, FuncToCall); });
	m.def("RemoveConsoleCommand", [](std::string& Command) { RemoveConsoleCommand(Command); });
#endif
	m.def("RegisterHook", &RegisterHook);
	m.def("GetEngine", &UnrealSDK::GetEngine, py::return_value_policy::reference);
	m.def("RemoveHook", [](const std::string& funcName, const std::string& hookName)
	{
		UnrealSDK::RemoveHook(funcName, hookName);
	});
	m.def("RunHook", [](const std::string& funcName, const std::string& hookName, py::object funcHook)
	{
		UnrealSDK::RemoveHook(funcName, hookName);
		RegisterHook(funcName, hookName, funcHook);
	});
	m.def("DoInjectedCallNext", &UnrealSDK::DoInjectedCallNext);
	m.def("LogAllCalls", &UnrealSDK::LogAllCalls);
	m.def("CallPostEdit", [](bool NewValue) { UnrealSDK::gCallPostEdit = NewValue; });

	m.def("SetConsoleLogLevel", [](int level) {
		ValidateLogLevel(level);
		Logging::SetConsoleVerbosity((Logging::SDKVerbosity)level);
	});
	m.def("SetFileLogLevel", [](int level) {
		ValidateLogLevel(level);
		Logging::SetFileVerbosity((Logging::SDKVerbosity)level);
	});
	m.def("SetThreadName", loguru::set_thread_name);
}

#ifdef UE4
// This function is empty in UE4 because its useless, it's way more important to do this in another function
void CPythonInterface::AddToConsoleLog(UConsole* console, const char* input) { }

bool CPythonInterface::RegisterConsoleCommand(const std::string& ConsoleCommand, const std::function<bool(std::string&)>& FuncHook)
{
	char funcNameChar[255];
	strcpy_s(funcNameChar, sizeof(funcNameChar), ConsoleCommand.c_str());

	auto iCommands = m_consoleCommandMap.find(ConsoleCommand);
	if (iCommands != m_consoleCommandMap.end()) {
		return false;
		// iCommands->second.swap(const_cast<std::function<bool(std::string&)>&>(FuncHook));
	}
	else {
		std::function<bool(std::string&)>& z = const_cast<std::function<bool(std::string&)>&>(FuncHook);
		m_consoleCommandMap.emplace(ConsoleCommand, z);
		return true;
	}
	return false;
}

bool CPythonInterface::ProcessCommands(const wchar_t* cmd) {
	const std::string command = Util::Narrow(cmd);

	auto iCommands = m_consoleCommandMap.find(command);
	if (iCommands != m_consoleCommandMap.end()) {
		std::function<bool(std::string&)> functionsToCheck = iCommands->second;
		bool returnVal = functionsToCheck(const_cast<std::string&>(command));
		/*
		bool returnVal = false;
		for (auto& funcsToCall : functionsToCheck) {
			auto result = funcsToCall(const_cast<std::string&>(command));
			returnVal = returnVal || result;
		}
		*/
		return returnVal;
	}
	// Weird way of checking for arguments but meh
	else {
		for (auto& x : m_consoleCommandMap) {

			// Get all commands with possible arguments
			if (x.first.find(" (...)") != std::string::npos) {
				std::vector<std::string> split = Util::Split(x.first, " "); // Split it up to be only the first portion, we've got no way of determining the # of args easily
				auto firstElement = split.at(0).c_str();
				std::string com = command.substr(0, command.find(" "));
				if (strcmp(firstElement, com.c_str()) == 0) {
					bool returnVal = x.second(const_cast<std::string&>(command));
					if (returnVal) {
						return true;
					}
				}
			}
		}
	}

	return false;
}

bool CPythonInterface::RemoveConsoleCommand(const std::string& ConsoleCommand) {
	auto iCommands = m_consoleCommandMap.find(ConsoleCommand);
	if (iCommands != m_consoleCommandMap.end()) {
		m_consoleCommandMap.erase(ConsoleCommand);
		return true;
	}
	else {
		return false;
	}
}

#endif

#ifndef UE4
void AddToConsoleLog(UConsole* console, FString input)
{

	int prev = (console->HistoryTop - 1) % 16;
	if (!console->History[prev].Data || wcscmp(input.AsString(), console->History[prev].AsString()))
	{
		console->PurgeCommandFromHistory(input);
		console->History[console->HistoryTop] = input;
		console->HistoryTop = (console->HistoryTop + 1) % 16;
		if ((console->HistoryBot == -1) || console->HistoryBot == console->HistoryTop)
			console->HistoryBot = (console->HistoryBot + 1) % 16;
	}
	console->HistoryCur = console->HistoryTop;
	console->SaveConfig();
}
#endif

#ifndef UE4
bool CheckPythonCommand(UObject* caller, UFunction* function, FStruct* params)
{
	FString* command = params->GetProperty<UStrProperty>("command");

	const wchar_t* input = command->AsString();
	if (wcsncmp(L"py ", input, 3) == 0)
	{
		auto z = Util::Narrow(input);
		const char* narrow = z.c_str();
		AddToConsoleLog((UConsole*)caller, *command);
		LOG(CONSOLE, ">>> %s <<<", narrow);
		UnrealSDK::Python->DoString(narrow + 3);
	}
	else if (wcsncmp(L"pyexec ", input, 7) == 0)
	{
		const char* narrow = Util::Narrow(input).c_str();
		AddToConsoleLog((UConsole*)caller, *command);
		LOG(CONSOLE, ">>> %s <<<", narrow);
		UnrealSDK::Python->DoFile(narrow + 7);
	}
	else {
		caller->GetProperty<UFunction>("ConsoleCommand")Call<void, UStrProperty>(command);
	}
	return false;
}
#endif

CPythonInterface::CPythonInterface()
{
	m_modulesInitialized = false;
	InitializeState();

	#ifndef UE4
	// This function is only used in UE3, if you want a UE4 version go to UnrealSDK::hkStaticExec();
	UnrealSDK::RegisterHook("Engine.Console.ShippingConsoleCommand", "CheckPythonCommand", &CheckPythonCommand);
	#endif
}

CPythonInterface::~CPythonInterface()
{
	if (m_modulesInitialized)
	{
		CallShutdownFuncs();
	}

	CleanupState();
}

PythonStatus CPythonInterface::ReloadState() {
	try {
		mainModule.reload();
		LOG(INFO, "[Python] Successfully reloaded Python modules");
	}
	catch (std::exception e) {
		LOG(ERROR, "%s", e.what());
		LOG(ERROR, "[Python] Failed to reload Python modules");
		return PythonStatus::PYTHON_MODULE_ERROR;
	}
	return PythonStatus::PYTHON_OK;
}

void CPythonInterface::InitializeState()
{
	try
	{
		py::initialize_interpreter();
		m_mainNamespace = py::module_::import("__main__");
	}
	catch (std::exception e)
	{
		LOG(ERROR, "%s", e.what());
	}
}

void CPythonInterface::CleanupState()
{
	py::finalize_interpreter();
}

std::vector<std::wstring> getSubdirs(const std::wstring& path)
{
	WIN32_FIND_DATA findfiledata;
	HANDLE hFind = INVALID_HANDLE_VALUE;

	wchar_t fullpath[MAX_PATH];
	GetFullPathName(path.c_str(), MAX_PATH, fullpath, nullptr);
	std::wstring fp(fullpath);

	std::vector<std::wstring> output{};
	hFind = FindFirstFile((fp + L"\\*").c_str(), &findfiledata);
	if (hFind != INVALID_HANDLE_VALUE)
	{
		do
		{
			if ((findfiledata.dwFileAttributes | FILE_ATTRIBUTE_DIRECTORY) == FILE_ATTRIBUTE_DIRECTORY
				&& (findfiledata.cFileName[0] != '.') && wcscmp(L"__pycache__", findfiledata.cFileName))
			{
				output.push_back(findfiledata.cFileName);
			}
		}
		while (FindNextFile(hFind, &findfiledata) != 0);
	}
	return output;
}

PythonStatus CPythonInterface::InitializeModules()
{
	m_modulesInitialized = false;
	SetPaths();
	LOG(INFO, "[Python] Version: %d.%d.%d", VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH);

	try
	{
		py::module_::import("unrealsdk");
		mainModule = py::module_::import("Mods");

		// Also make these accessable on console
		DoString("import unrealsdk, Mods");
	}
	catch (std::exception e)
	{
		LOG(ERROR, "%s", e.what());
		LOG(ERROR, "[Python] Failed to initialize Python modules");
		return PythonStatus::PYTHON_MODULE_ERROR;
	}
	LOG(INFO, "[Python] Python initialized (" PYTHON_ABI_STRING ")");
	m_modulesInitialized = true;
	return PythonStatus::PYTHON_OK;
}

void CPythonInterface::SetPaths()
{
	m_PythonPath = Util::Narrow(Settings::GetPythonFile(L""));
}

int CPythonInterface::DoFile(const char* filename)
{
	return DoFileAbsolute(Util::Format("%s\\%s", m_PythonPath.c_str(), filename).c_str());
}

int CPythonInterface::DoString(const char* command)
{
	try
	{
		py::exec(command);
	}
	catch (std::exception e)
	{
		LOG(ERROR, "%s", e.what());
	}
	return 0;
}

int CPythonInterface::DoFileAbsolute(const char* path)
{
	try
	{
		py::eval_file(path);
	}
	catch (std::exception e)
	{
		LOG(ERROR, "%s", e.what());
	}
	return 0;
}

void CPythonInterface::CallShutdownFuncs()
{
}

py::object CPythonInterface::GetPythonNamespace()
{
	return m_mainNamespace;
}
