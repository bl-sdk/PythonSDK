#include "stdafx.h"
#include "CPythonInterface.h"
#include "Logging.h"
#include "Settings.h"
#include "Util.h"
#include <string>
#include <cstdlib>
#include <sstream>


bool VerifyPythonFunction(py::object funcHook, const char** expectedKeys)
{
	PyObject* obj = funcHook.ptr();
	if (!obj)
	{
		Logging::LogF("[Error] Object passed to hook is null\n");
		return false;
	}
	if (!PyFunction_Check(obj))
	{
		Logging::LogF("[Error] Object passed to hook is not a function\n");
		return false;
	}
	PyObject* Annotations = PyFunction_GetAnnotations(obj);
	if (!Annotations || !PyDict_Check(Annotations))
	{
		Logging::LogF("[Error] Function passed to hook does not contain annotations\n");
		return false;
	}
	// Python dicts aren't ordered, but we need to assume this dict is to verify the function args
	PyObject* Keys = PyDict_Keys(Annotations);
	PyObject* Values = PyDict_Values(Annotations);
	if (!PyList_Check(Keys) || !PyList_Check(Values))
	{
		Logging::LogF("[Error] Function passed to hook does not contain annotations\n");
		return false;
	}
	for (int x = 0; x < PyList_GET_SIZE(Keys) - 1; x++)
	{
		PyObject* Key = PyList_GET_ITEM(Keys, x);
		const char* KeyString = PyUnicode_AsUTF8AndSize(Key, nullptr);
		if (strcmp(KeyString, expectedKeys[x]))
		{
			Logging::LogF("[Error] Got unexpected argument '%s'. Expected '%s'.\n", KeyString, expectedKeys[x]);
			return false;
		}
	}
	return true;
}

void RegisterHook(const std::string& funcName, const std::string& hookName, py::object funcHook)
{
	static const char* params[] = {"caller", "function", "params"};
	if (VerifyPythonFunction(funcHook, params))
		UnrealSDK::RegisterHook(funcName, hookName, [funcHook](UObject* caller, UFunction* function, FStruct* params)
			{
				try
				{
					py::object py_caller = cast(caller, py::return_value_policy::reference);
					py::object py_function = cast(function, py::return_value_policy::reference);
					py::object py_params = cast(params, py::return_value_policy::reference);
					py::object ret = funcHook(py_caller, py_function, py_params);
					return ret.cast<bool>();
				}
				catch (std::exception e)
				{
					Logging::LogF(e.what());
				}
				return true;
			}
		);
}

#ifdef UE4 // Console command handling

bool RegisterConsoleCommand(const std::string& ConsoleCommand, py::object funcHook) {
	// Function Verification
	static const char* params[] = { "command"};
	if (!VerifyPythonFunction(funcHook, params)) { return false; }
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
				Logging::LogF(e.what());
			}
			return true;
		}
	);
}

void RemoveConsoleCommand(const std::string& ConsoleCommand) {
	UnrealSDK::RemoveConsoleCommand(ConsoleCommand);
}
#endif

namespace py = pybind11;

PYBIND11_EMBEDDED_MODULE(unrealsdk, m)
{
	Export_pystes_gamedefines(m);
	Export_pystes_Core_structs(m);
	Export_pystes_Core_classes(m);
	Export_pystes_TArray(m);

	m.def("GetVersion", []() { return py::make_tuple(VERSION_MAJOR, VERSION_MINOR, VERSION_PATCH); });
	m.def("Log", [](py::args args) {
		std::ostringstream msg;
		for (py::size_t i = 0; i < args.size(); i++) {
			if (i > 0) msg << " ";
			msg << py::str(args[i]);
		}
		Logging::LogPy(msg.str());
	});
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
	m.def("SetLoggingLevel", &Logging::SetLoggingLevel);
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
}

#ifdef UE4
// This function is empty in UE4 because its useless, it's way more important to do this in another function
void CPythonInterface::AddToConsoleLog(UConsole* console, const char* input) { }

bool CPythonInterface::RegisterConsoleCommand(const std::string& ConsoleCommand, const std::function<bool(std::string&)>& FuncHook)
{
	char funcNameChar[255];
	strcpy(funcNameChar, ConsoleCommand.c_str());

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
	if (!console->History[prev].Data || strcmp(input.AsString(), console->History[prev].AsString()))
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

	FString* command = ((FHelper *)params->base)->GetStrProperty(
		(UProperty *)params->structType->FindChildByName(FName("command")));

	char* input = command->AsString();
	if (strncmp("py ", input, 3) == 0)
	{
		AddToConsoleLog((UConsole*)caller, *command);
		Logging::LogF("\n>>> %s <<<\n", input);
		UnrealSDK::Python->DoString(input + 3);
	}
	else if (strncmp("pyexec ", input, 7) == 0)
	{
		AddToConsoleLog((UConsole*)caller, *command);
		Logging::LogF("\n>>> %s <<<\n", input);
		UnrealSDK::Python->DoFile(input + 7);
	}
	else {
		((UConsole*)caller)->ConsoleCommand(*command);
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
		Logging::Log("[Python] Successfully reloaded Python modules");
	}
	catch (std::exception e) {
		Logging::LogF("%s\n", e.what());
		Logging::Log("[Python] Failed to reload Python modules");
		return PythonStatus::PYTHON_MODULE_ERROR;
	}
	return PythonStatus::PYTHON_OK;
}

void CPythonInterface::InitializeState()
{
	try
	{
		py::initialize_interpreter();
		py::module_::import("unrealsdk");
		m_mainNamespace = py::module_::import("__main__");
	}
	catch (std::exception e)
	{
		Logging::LogF("%s", e.what());
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
	try
	{
		mainModule = py::module_::import("Mods");
	}
	catch (std::exception e)
	{
		Logging::LogF("%s\n", e.what());
		Logging::Log("[Python] Failed to initialize Python modules\n");
		return PythonStatus::PYTHON_MODULE_ERROR;
	}
	Logging::Log("[Python] Python initialized (" PYTHON_ABI_STRING ")\n");
	m_modulesInitialized = true;
	return PythonStatus::PYTHON_OK;
}

void CPythonInterface::SetPaths()
{
	m_PythonPath = Util::Narrow(Settings::GetPythonFile(L""));
	const char* fmt = "import sys;sys.path.append(r'%s\\')";
	size_t needed = strlen(fmt) + strlen(m_PythonPath.c_str()) - 1;
	char* buffer = (char *)malloc(needed);
	sprintf(buffer, fmt, m_PythonPath.c_str());
	DoString(buffer);
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
		Logging::LogF("%s", e.what());
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
		Logging::LogF("%s", e.what());
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
