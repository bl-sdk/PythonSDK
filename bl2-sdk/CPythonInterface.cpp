#include "stdafx.h"
#include "CPythonInterface.h"
#include "Logging.h"
#include "Settings.h"
#include "Util.h"
#include "BL2-SDK.h"
#include "GameHooks.h"
#include <algorithm>
#include <sstream>

static PyObject* sdk_loadstring(PyObject *self, PyObject *args)
{
	char *pystring;
	if (PyArg_ParseTuple(args, "s", &pystring))
	{
		PyRun_SimpleString(pystring);
	}
	else {
		Logging::Log("[Python] No string fed to LoadString");
	}
	return NULL;
}

static PyObject* sdk_loadfile(PyObject *self, PyObject *args)
{
	char *filename;
	if (PyArg_ParseTuple(args, "s", &filename))
	{
		PyObject *obj = Py_BuildValue("s", filename);
		FILE *file = _Py_fopen_obj(obj, "r+");
		if (file != NULL) {
			PyRun_SimpleFile(file, filename);
		}
	}
	else
		Logging::Log("[Python] No string fed to LoadString");
	return NULL;
}


static PyMethodDef SDKMethods[] = {
	{"LoadString", sdk_loadstring, METH_O, "Executes a python string from the C++ SDK."},
	{"LoadFile", sdk_loadfile, METH_O, "Executes a python file from the C++ SDK."},
	{NULL, NULL, 0, NULL}
};

static PyModuleDef SDKModule = {
	PyModuleDef_HEAD_INIT,
	"BL2SDK",
	"Borderlands 2 SDK Module",
	-1,
	SDKMethods
};

bool PythonTick(UObject* caller, UFunction* function, void* parms, void* result)
{
	PyObject *pModule = BL2SDK::Python->GetPythonModule();
	PyObject *catcher = PyObject_GetAttrString(pModule, "catchOutErr");
	PyErr_Print();
	PyObject *output_obj = PyObject_GetAttrString(catcher, "value");
	PyObject* encoded_obj = PyUnicode_AsEncodedString(output_obj, "utf-8", "strict");
	std::string output = PyBytes_AsString(encoded_obj);
	Logging::Log(output.c_str());
	PyObject_SetAttrString(pModule, "catchOutErr", Py_BuildValue("s", ""));
	return true;
}

CPythonInterface::CPythonInterface()
{
	m_modulesInitialized = false;
	InitializeState();

	GameHooks::EngineHookManager->Register("Function WillowGame.WillowGameViewportClient:Tick", "PythonGCTick", &PythonTick);
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

void CPythonInterface::InitLogging() {
	std::string stdOutErr =
		"import sys\n\
class CatchOutErr:\n\
    def __init__(self):\n\
        self.value = ''\n\
    def write(self, txt):\n\
        self.value += txt\n\
catchOutErr = CatchOutErr()\n\
sys.stdout = catchOutErr\n\
sys.stderr = catchOutErr\n\
";
	PyRun_SimpleString(stdOutErr.c_str());
}

void CPythonInterface::InitializeState()
{
	Py_Initialize();
	PyObject *m_pModule = PyModule_Create(&SDKModule);
	InitLogging();


#ifdef _DEBUG
	// And set whether we're in debug mode or not
	PyModule_AddObject(m_pModule, "_DEBUG", Py_BuildValue("i", 1));
#endif

	SetSDKValues();
	SetPaths();
}

void CPythonInterface::CleanupState()
{
	Py_Finalize();
}

PythonStatus CPythonInterface::InitializeModules()
{
	m_modulesInitialized = false;

	if (DoFile("include\\init.py") != 0) // Means it failed, TODO: More obvious warning for this
	{
		Logging::Log("[Python] Failed to initialize Lua modules\n");
		return PYTHON_MODULE_ERROR;
	}
	if (PyObject_IsTrue(PyObject_GetAttrString(m_pModule, "RESET_FLAG")))
	{
		CleanupState();
		InitializeState();
		return InitializeModules();
	}
	else
	{
		Logging::Log("[Python] Python initialized (" PYTHON_ABI_STRING ")\n");
		m_modulesInitialized = true;
		return PYTHON_OK;
	}
}

void CPythonInterface::SetSDKValues()
{
	PyModule_AddObject(m_pModule, "GNames", Py_BuildValue("O&", BL2SDK::pGNames));
	PyModule_AddObject(m_pModule, "GObjects", Py_BuildValue("O&", BL2SDK::pGObjects));
	PyModule_AddObject(m_pModule, "ProcessEvent", Py_BuildValue("O&", BL2SDK::pProcessEvent));
	PyModule_AddObject(m_pModule, "GObjHash", Py_BuildValue("O&", BL2SDK::pGObjHash));
	PyModule_AddObject(m_pModule, "GCRCTable", Py_BuildValue("O&", BL2SDK::pGCRCTable));
	PyModule_AddObject(m_pModule, "NameHash", Py_BuildValue("O&", BL2SDK::pNameHash));
	PyModule_AddObject(m_pModule, "FrameStep", Py_BuildValue("O&", BL2SDK::pFrameStep));
	PyModule_AddObject(m_pModule, "CallFunction", Py_BuildValue("O&", BL2SDK::pCallFunction));
	PyModule_AddObject(m_pModule, "GMalloc", Py_BuildValue("O&", BL2SDK::pGMalloc));

	PyModule_AddObject(m_pModule, "EngineVersion", Py_BuildValue("i", BL2SDK::EngineVersion));
	PyModule_AddObject(m_pModule, "ChangeListNumber", Py_BuildValue("i", BL2SDK::ChangelistNumber));
	//PyModule_AddObject(m_pModule, "SDKVersion", Py_BuildValue("s", BL2SDK::Version.c_str()));

	PyModule_AddObject(m_pModule, "EnableMemoryDebugging", Py_BuildValue("i", Settings::MemoryDebugEnabled()));
}

void CPythonInterface::SetPaths()
{
	m_PythonPath = Util::Narrow(Settings::GetPythonFile(L""));
	const char *pythonString = Util::Format("import sys\nsys.path.append(\"%s\")", m_PythonPath.c_str()).c_str();
	PyRun_SimpleString(pythonString);
	Logging::LogF("[Python] Python Path = %s\n", m_PythonPath.c_str());
}

int CPythonInterface::DoFile(const std::string& filename)
{
	return DoFileAbsolute(Util::Format("%s\\%s", m_PythonPath.c_str(), filename.c_str()));
}

int CPythonInterface::DoFileAbsolute(const std::string& path)
{
	PyObject *obj = Py_BuildValue("s", path);
	FILE *file = _Py_fopen_obj(obj, "r+");
	if (file != NULL)
		return PyRun_SimpleFile(file, path.c_str());
	return -1;
}

void CPythonInterface::CallShutdownFuncs()
{
	PyObject_CallMethod(m_pModule, "OnShutdown", NULL);
}

PyObject *CPythonInterface::GetPythonModule()
{
	return m_pModule;
}