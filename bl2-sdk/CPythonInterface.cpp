#include "stdafx.h"
#include "CPythonInterface.h"
#include "Logging.h"
#include "Settings.h"
#include "Util.h"
#include "BL2-SDK.h"
#include "GameHooks.h"
#include <algorithm>
#include <sstream>
#include <functional>
#include <iostream>
#include <string>
#include <cstdlib>

namespace py = pybind11;

PYBIND11_EMBEDDED_MODULE(bl2sdk, m)
{
	Export_pystes_UObject(m);
	Export_pystes_UClass(m);
	Export_pystes_UInterface(m);
	m.def("Log", [](std::string in) { Logging::Log(in.c_str(), in.length()); });
}

bool PythonGCTick(UObject* caller, UFunction* function, void* parms, void* result)
{
	return true;
}

CPythonInterface::CPythonInterface()
{
	m_modulesInitialized = false;
	InitializeState();

	GameHooks::EngineHookManager->Register("Function WillowGame.WillowGameViewportClient:Tick", "PythonGCTick", &PythonGCTick);
}

CPythonInterface::~CPythonInterface()
{
	if (m_modulesInitialized)
	{
		CallShutdownFuncs();
	}

	CleanupState();

	GameHooks::EngineHookManager->Remove("Function WillowGame.WillowGameViewportClient:Tick", "PythonGCTick");
}

void CPythonInterface::InitializeState()
{
	try
	{
		Logging::Log("[Python] 1\n");
		py::initialize_interpreter();
		Logging::Log("[Python] 2\n");
		py::module::import("bl2sdk");
		Logging::Log("[Python] 3\n");
		m_mainNamespace = py::module::import("__main__");
		//SetSDKValues();
		SetPaths();
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

	if (DoFile("include\\init.py") != 0) // Means it failed, TODO: More obvious warning for this
	{
		Logging::Log("[Python] Failed to initialize Python modules\n");
		return PYTHON_MODULE_ERROR;
	}
	/*PyObject *reset = PyObject_GetAttrString(m_pModule, "RESET_FLAG");
	if (reset != NULL && PyObject_IsTrue(reset))
	{
		CleanupState();
		InitializeState();
		return InitializeModules();
	}*/
	Logging::Log("[Python] Python initialized (" PYTHON_ABI_STRING ")\n");
	m_modulesInitialized = true;
	return PYTHON_OK;
}

void CPythonInterface::SetSDKValues()
{
	//PyModule_AddObject(m_pModule, "GNames", Py_BuildValue("i", BL2SDK::pGNames));
	//PyModule_AddObject(m_pModule, "GObjects", Py_BuildValue("i", BL2SDK::pGObjects));
	//PyModule_AddObject(m_pModule, "ProcessEvent", Py_BuildValue("i", BL2SDK::pProcessEvent));
	//PyModule_AddObject(m_pModule, "GObjHash", Py_BuildValue("i", BL2SDK::pGObjHash));
	//PyModule_AddObject(m_pModule, "GCRCTable", Py_BuildValue("i", BL2SDK::pGCRCTable));
	//PyModule_AddObject(m_pModule, "NameHash", Py_BuildValue("i", BL2SDK::pNameHash));
	//PyModule_AddObject(m_pModule, "FrameStep", Py_BuildValue("i", BL2SDK::pFrameStep));
	//PyModule_AddObject(m_pModule, "CallFunction", Py_BuildValue("i", BL2SDK::pCallFunction));
	//PyModule_AddObject(m_pModule, "GMalloc", Py_BuildValue("i", BL2SDK::pGMalloc));


	//PyModule_AddObject(m_pModule, "EngineVersion", Py_BuildValue("i", BL2SDK::EngineVersion));
	//PyModule_AddObject(m_pModule, "ChangeListNumber", Py_BuildValue("i", BL2SDK::ChangelistNumber));
	////PyModule_AddObject(m_pModule, "SDKVersion", Py_BuildValue("s", BL2SDK::Version.c_str()));

	//PyModule_AddObject(m_pModule, "EnableMemoryDebugging", Py_BuildValue("i", Settings::MemoryDebugEnabled()));
}

void CPythonInterface::SetPaths()
{
	m_PythonPath = Util::Narrow(Settings::GetPythonFile(L""));
	//Logging::LogF(m_PythonPath.c_str());
	//const char *pythonString = Util::Format("import sys;sys.path.append(r'%s'.replace('\\\\', '/'))", m_PythonPath.c_str()).c_str();
	//py::exec(pythonString, py::globals());
}

int CPythonInterface::DoFile(const char *filename)
{
	return DoFileAbsolute(Util::Format("%s\\%s", m_PythonPath.c_str(), filename).c_str());
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
	//PyObject_CallMethod(m_pModule, "OnShutdown", NULL);
}

py::object CPythonInterface::GetPythonNamespace()
{
	return m_mainNamespace;
}
