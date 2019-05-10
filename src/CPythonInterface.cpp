#include "stdafx.h"
#include "CPythonInterface.h"
#include "Logging.h"
#include "Settings.h"
#include "Util.h"
#include "BL2-SDK.h"
#include <algorithm>
#include <sstream>
#include <functional>
#include <iostream>
#include <string>
#include <cstdlib>

bool VerifyPythonFunction(py::object funcHook, const char** expectedKeys) {
	PyObject *obj = funcHook.ptr();
	if (!obj) {
		Logging::LogF("[Error] Object passed to hook is null\n");
		return false;
	}
	if (!PyFunction_Check(obj)) {
		Logging::LogF("[Error] Object passed to hook is not a function\n");
		return false;
	}
	PyObject *Annotations = PyFunction_GetAnnotations(obj);
	if (!Annotations || !PyDict_Check(Annotations)) {
		Logging::LogF("[Error] Function passed to hook does not contain annotations\n");
		return false;
	}
	// Python dicts aren't ordered, but we need to assume this dict is to verify the function args
	PyObject *Keys = PyDict_Keys(Annotations);
	PyObject *Values = PyDict_Values(Annotations);
	if (!PyList_Check(Keys) || !PyList_Check(Values)) {
		Logging::LogF("[Error] Function passed to hook does not contain annotations\n");
		return false;
	}
	for (int x = 0; x < PyList_GET_SIZE(Keys) - 1; x++) {
		PyObject *Key = PyList_GET_ITEM(Keys, x);
		char *KeyString = PyUnicode_AsUTF8AndSize(Key, 0);
		if (strcmp(KeyString, expectedKeys[x]))
		{
			Logging::LogF("[Error] Got unexpected argument '%s'. Expected '%s'.\n", KeyString, expectedKeys[x]);
			return false;
		}
	}
	return true;
}

void RegisterHook(const std::string& funcName, const std::string& hookName, py::object funcHook) {
	static const char *params[] = { "caller", "function", "params"};
	if (VerifyPythonFunction(funcHook, params))
		BL2SDK::RegisterHook(funcName, hookName, [funcHook](UObject* caller, UFunction* function, FStruct *params) {
		try {
			py::object py_caller = py::cast(caller, py::return_value_policy::reference);
			py::object py_function = py::cast(function, py::return_value_policy::reference);
			py::object py_params = py::cast(params, py::return_value_policy::reference);
			py::object ret = funcHook(py_caller, py_function, py_params);
			return ret.cast<bool>();
		}
		catch (std::exception e) {
			Logging::LogF(e.what());
		}
		return true;
	}
	);
}

namespace py = pybind11;

PYBIND11_EMBEDDED_MODULE(bl2sdk, m)
{
	Export_pystes_gamedefines(m);
	Export_pystes_Core_structs(m);
	Export_pystes_Core_classes(m);
	Export_pystes_TArray(m);

	m.def("Log", [](std::string in) { Logging::LogPy(in.c_str()); });
	m.def("LoadPackage", &BL2SDK::LoadPackage, py::arg("filename"), py::arg("flags") = 0, py::arg("force") = false);
	m.def("FindObject", [](char *ClassName, char *ObjectFullName) { return UObject::Find(ClassName, ObjectFullName); }, py::return_value_policy::reference);
	m.def("FindObject", [](UClass *Class, char *ObjectFullName) { return UObject::Find(Class, ObjectFullName); }, py::return_value_policy::reference);
	m.def("LoadObject", [](char *ClassName, char *ObjectFullName) { return UObject::Load(ClassName, ObjectFullName); }, py::return_value_policy::reference);
	m.def("LoadObject", [](UClass *Class, char *ObjectFullName) { return UObject::Load(Class, ObjectFullName); }, py::return_value_policy::reference);
	m.def("SetLoggingLevel", &Logging::SetLoggingLevel);
	m.def("ConstructObject", &BL2SDK::ConstructObject, "Construct Objects", py::arg("Class"), py::arg("Outer") = BL2SDK::GetEngine()->Outer, py::arg("Name") = FName(), py::arg("SetFlags") = 0x1, py::arg("InternalSetFlags") = 0x00, py::arg("Template") = (UObject*)nullptr, py::arg("Error") = (FOutputDevice *)nullptr, py::arg("InstanceGraph") = (void*)nullptr, py::arg("bAssumeTemplateIsArchetype") = (int)0, py::return_value_policy::reference);
	m.def("ConstructObject", [](char *ClassName, UObject* Outer, FName Name, unsigned int SetFlags, unsigned int InternalSetFlags, UObject* Template, FOutputDevice *Error, void* InstanceGraph, int bAssumeTemplateIsArchetype) {
		return BL2SDK::ConstructObject(UObject::FindClass(ClassName), Outer, Name, SetFlags, InternalSetFlags, Template, Error, InstanceGraph, bAssumeTemplateIsArchetype);
	}, "Construct Objects", py::arg("Class"), py::arg("Outer") = BL2SDK::GetEngine()->Outer, py::arg("Name") = FName(), py::arg("SetFlags") = 0x1, py::arg("InternalSetFlags") = 0x00, py::arg("Template") = (UObject*)nullptr, py::arg("Error") = (FOutputDevice *)nullptr, py::arg("InstanceGraph") = (void*)nullptr, py::arg("bAssumeTemplateIsArchetype") = (int)0, py::return_value_policy::reference);
	m.def("RegisterHook", &RegisterHook);
	m.def("GetEngine", &BL2SDK::GetEngine, py::return_value_policy::reference);
	m.def("RemoveHook", [](const std::string& funcName, const std::string& hookName) { BL2SDK::RemoveHook(funcName, hookName); });
	m.def("DoInjectedCallNext", &BL2SDK::doInjectedCallNext);
	m.def("LogAllCalls", &BL2SDK::LogAllCalls);
}

void AddToConsoleLog(UConsole *console, FString input) {
	int prev = (console->HistoryTop - 1) % 16;
	if (!console->History[prev].Data || strcmp(input.AsString(), console->History[prev].AsString())) {
		console->PurgeCommandFromHistory(input);
		console->History[console->HistoryTop] = input;
		console->HistoryTop = (console->HistoryTop + 1) % 16;
		if ((console->HistoryBot == -1) || console->HistoryBot == console->HistoryTop)
			console->HistoryBot = (console->HistoryBot + 1) % 16;
	}
	console->HistoryCur = console->HistoryTop;
	console->SaveConfig();
}

bool CheckPythonCommand(UObject* caller, UFunction* function, FStruct *params)
{
	FString *command = ((FHelper *)params->base)->GetStrProperty((UProperty *)params->structType->FindChildByName(FName("command")));
	char *input = command->AsString();
	if (strncmp("py ", input, 3) == 0) {
		AddToConsoleLog((UConsole *)caller, *command);
		Logging::LogF("\n>>> %s <<<\n", input);
		BL2SDK::Python->DoString(input + 3);
	}
	else if (strncmp("pyexec ", input, 7) == 0) {
		AddToConsoleLog((UConsole *)caller, *command);
		Logging::LogF("\n>>> %s <<<\n", input);
		BL2SDK::Python->DoFile(input + 7);
	}
	else
		((UConsole *)caller)->ConsoleCommand(*command);
	return false;
}

CPythonInterface::CPythonInterface()
{
	m_modulesInitialized = false;
	InitializeState();

	BL2SDK::RegisterHook("Engine.Console.ShippingConsoleCommand", "CheckPythonCommand", &CheckPythonCommand);
}

CPythonInterface::~CPythonInterface()
{
	if (m_modulesInitialized)
	{
		CallShutdownFuncs();
	}

	CleanupState();

	BL2SDK::RemoveHook("WillowGame.WillowGameViewportClient:Tick", "PythonGCTick");
}

void CPythonInterface::InitializeState()
{
	try
	{
		py::initialize_interpreter();
		py::module::import("bl2sdk");
		m_mainNamespace = py::module::import("__main__");
	}
	catch (std::exception e) {
		Logging::LogF("%s", e.what());
	}

}
void CPythonInterface::CleanupState()
{
	py::finalize_interpreter();
}

PythonStatus CPythonInterface::InitializeModules()
{
	m_modulesInitialized = false;
	SetPaths();
	if (DoFile("init.py") != 0)
	{
		Logging::Log("[Python] Failed to initialize Python modules\n");
		return PYTHON_MODULE_ERROR;
	}
	Logging::Log("[Python] Python initialized (" PYTHON_ABI_STRING ")\n");
	m_modulesInitialized = true;
	return PYTHON_OK;
}

void CPythonInterface::SetPaths()
{
	m_PythonPath = Util::Narrow(Settings::GetPythonFile(L""));
	const char *fmt = "import sys;sys.path.append(r'%s\\')";
	const char *pythonString = Util::Format("import sys;sys.path.append(r'%s\\')", m_PythonPath.c_str()).c_str();
	size_t needed = strlen(fmt) + strlen(m_PythonPath.c_str()) - 1;
	char *buffer = (char *)malloc(needed);
	sprintf(buffer, fmt, m_PythonPath.c_str());
	DoString(buffer);
}

int CPythonInterface::DoFile(const char *filename)
{
	return DoFileAbsolute(Util::Format("%s\\%s", m_PythonPath.c_str(), filename).c_str());
}

int CPythonInterface::DoString(const char *command)
{
	try {
		py::exec(command);
	}
	catch (std::exception e) {
		Logging::LogF("%s", e.what());
	}
	return 0;
}

int CPythonInterface::DoFileAbsolute(const char *path)
{
	try {
		py::eval_file(path);
	}
	catch (std::exception e) {
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
