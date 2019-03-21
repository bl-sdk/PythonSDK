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

using namespace boost::python;

void Export_classes();
void Export_structs();


BOOST_PYTHON_MODULE(bl2sdk)
{
	Export_classes();
	Export_structs();
}


namespace emb
{

	typedef std::function<void(std::string)> stdout_write_type;

	struct Stdout
	{
		PyObject_HEAD
			stdout_write_type write;
	};

	PyObject* Stdout_write(PyObject* self, PyObject* args)
	{
		std::size_t written(0);
		char* data;
		if (!PyArg_ParseTuple(args, "s", &data))
			return 0;

		std::string str(data);
		Logging::Log(data);
		written = str.size();
		return PyLong_FromSize_t(written);
	}

	PyObject* Stdout_flush(PyObject* self, PyObject* args)
	{
		// no-op
		return Py_BuildValue("");
	}

	PyMethodDef Stdout_methods[] =
	{
		{"write", Stdout_write, METH_VARARGS, "sys.stdout.write"},
		{"flush", Stdout_flush, METH_VARARGS, "sys.stdout.flush"},
		{0, 0, 0, 0} // sentinel
	};

	PyTypeObject StdoutType =
	{
		PyVarObject_HEAD_INIT(0, 0)
		"emb.StdoutType",     /* tp_name */
		sizeof(Stdout),       /* tp_basicsize */
		0,                    /* tp_itemsize */
		0,                    /* tp_dealloc */
		0,                    /* tp_print */
		0,                    /* tp_getattr */
		0,                    /* tp_setattr */
		0,                    /* tp_reserved */
		0,                    /* tp_repr */
		0,                    /* tp_as_number */
		0,                    /* tp_as_sequence */
		0,                    /* tp_as_mapping */
		0,                    /* tp_hash  */
		0,                    /* tp_call */
		0,                    /* tp_str */
		0,                    /* tp_getattro */
		0,                    /* tp_setattro */
		0,                    /* tp_as_buffer */
		Py_TPFLAGS_DEFAULT,   /* tp_flags */
		"emb.Stdout objects", /* tp_doc */
		0,                    /* tp_traverse */
		0,                    /* tp_clear */
		0,                    /* tp_richcompare */
		0,                    /* tp_weaklistoffset */
		0,                    /* tp_iter */
		0,                    /* tp_iternext */
		Stdout_methods,       /* tp_methods */
		0,                    /* tp_members */
		0,                    /* tp_getset */
		0,                    /* tp_base */
		0,                    /* tp_dict */
		0,                    /* tp_descr_get */
		0,                    /* tp_descr_set */
		0,                    /* tp_dictoffset */
		0,                    /* tp_init */
		0,                    /* tp_alloc */
		0,                    /* tp_new */
	};

	PyModuleDef embmodule =
	{
		PyModuleDef_HEAD_INIT,
		"emb", 0, -1, 0,
	};

	// Internal state
	PyObject* g_stdout;
	PyObject* g_stdout_saved;

	PyMODINIT_FUNC PyInit_emb(void)
	{
		g_stdout = 0;
		g_stdout_saved = 0;

		StdoutType.tp_new = PyType_GenericNew;
		if (PyType_Ready(&StdoutType) < 0)
			return 0;

		PyObject* m = PyModule_Create(&embmodule);
		if (m)
		{
			Py_INCREF(&StdoutType);
			PyModule_AddObject(m, "Stdout", reinterpret_cast<PyObject*>(&StdoutType));
		}
		return m;
	}

	void set_stdout()
	{
		if (!g_stdout)
		{
			g_stdout_saved = PySys_GetObject("stdout"); // borrowed
			g_stdout = StdoutType.tp_new(&StdoutType, 0, 0);
		}
		PySys_SetObject("stdout", g_stdout);
		PySys_SetObject("stderr", g_stdout);
	}

	void reset_stdout()
	{
		if (g_stdout_saved)
			PySys_SetObject("stdout", g_stdout_saved);

		Py_XDECREF(g_stdout);
		g_stdout = 0;
	}
}


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


static PyObject* sdk_GetObjectFullName(PyObject *self, PyObject *args)
{
	UObject* obj;

	if (PyArg_ParseTuple(args, "i", &obj))
	{
		return Py_BuildValue("s", obj->GetFullName());
	}
	else
		Logging::Log("[Python] No string fed to LoadString");
	return NULL;
	
}


static PyMethodDef SDKMethods[] = {
	{"LoadString", sdk_loadstring, METH_O, "Executes a python string from the C++ SDK."},
	{"LoadFile", sdk_loadfile, METH_O, "Executes a python file from the C++ SDK."},
	{"GetFullName", sdk_GetObjectFullName, METH_O, "Executes a python file from the C++ SDK."},
	{NULL, NULL, 0, NULL}
};

static PyModuleDef SDKModule = {
	PyModuleDef_HEAD_INIT,
	"BL2SDK",
	"Borderlands 2 SDK Module",
	-1,
	SDKMethods
};

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

PyMODINIT_FUNC PyInit_bl2()
{
	PyObject *module = PyModule_Create(&SDKModule);
	PyState_AddModule(module, &SDKModule);
	return module;
}

int setenv(const char *name, const char *value, int overwrite)
{
	int errcode = 0;
	if (!overwrite) {
		size_t envsize = 0;
		errcode = getenv_s(&envsize, NULL, 0, name);
		if (errcode || envsize) return errcode;
	}
	return _putenv_s(name, value);
}

void CPythonInterface::InitializeState()
{
	PyImport_AppendInittab("emb", emb::PyInit_emb);
	PyImport_AppendInittab("BL2SDK", PyInit_bl2);
	PyImport_AppendInittab((char*)"bl2sdk", PyInit_bl2sdk);
	Py_Initialize();
	PyImport_ImportModule("emb");
	PyImport_ImportModule("BL2SDK");
	PyImport_ImportModule("hello");
	emb::set_stdout();
	m_pModule = PyState_FindModule(&SDKModule);

#ifdef _DEBUG
	// And set whether we're in debug mode or not
	PyModule_AddObject(m_pModule, "_DEBUG", Py_BuildValue("i", 1));
#endif

	SetSDKValues();
	SetPaths();
}

void CPythonInterface::CleanupState()
{
	//Py_Finalize();
}

PythonStatus CPythonInterface::InitializeModules()
{
	m_modulesInitialized = false;

	if (DoFile("include\\init.py") != 0) // Means it failed, TODO: More obvious warning for this
	{
		Logging::Log("[Python] Failed to initialize Python modules\n");
		return PYTHON_MODULE_ERROR;
	}
	PyObject *reset = PyObject_GetAttrString(m_pModule, "RESET_FLAG");
	if (reset != NULL && PyObject_IsTrue(reset))
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
	PyModule_AddObject(m_pModule, "GNames", Py_BuildValue("i", BL2SDK::pGNames));
	PyModule_AddObject(m_pModule, "GObjects", Py_BuildValue("i", BL2SDK::pGObjects));
	PyModule_AddObject(m_pModule, "ProcessEvent", Py_BuildValue("i", BL2SDK::pProcessEvent));
	PyModule_AddObject(m_pModule, "GObjHash", Py_BuildValue("i", BL2SDK::pGObjHash));
	PyModule_AddObject(m_pModule, "GCRCTable", Py_BuildValue("i", BL2SDK::pGCRCTable));
	PyModule_AddObject(m_pModule, "NameHash", Py_BuildValue("i", BL2SDK::pNameHash));
	PyModule_AddObject(m_pModule, "FrameStep", Py_BuildValue("i", BL2SDK::pFrameStep));
	PyModule_AddObject(m_pModule, "CallFunction", Py_BuildValue("i", BL2SDK::pCallFunction));
	PyModule_AddObject(m_pModule, "GMalloc", Py_BuildValue("i", BL2SDK::pGMalloc));


	PyModule_AddObject(m_pModule, "EngineVersion", Py_BuildValue("i", BL2SDK::EngineVersion));
	PyModule_AddObject(m_pModule, "ChangeListNumber", Py_BuildValue("i", BL2SDK::ChangelistNumber));
	//PyModule_AddObject(m_pModule, "SDKVersion", Py_BuildValue("s", BL2SDK::Version.c_str()));

	PyModule_AddObject(m_pModule, "EnableMemoryDebugging", Py_BuildValue("i", Settings::MemoryDebugEnabled()));
}

void CPythonInterface::SetPaths()
{
	m_PythonPath = Util::Narrow(Settings::GetPythonFile(L""));
	Logging::LogF(m_PythonPath.c_str());
	/*const char *pythonString = Util::Format("import sys;sys.path.append(r'%s'.replace('\\\\', '/'))", m_PythonPath.c_str()).c_str();
	PyRun_SimpleString(pythonString);*/
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
	{
		int response = PyRun_SimpleFile(file, path.c_str());
		std::fclose(file);
		return 0;
	}
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
