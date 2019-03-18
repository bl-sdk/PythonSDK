#pragma once
#ifndef CPYTHONINTERFACE_H
#define CPYTHONINTERFACE_H

#include <Python.h>

enum PythonStatus
{
	PYTHON_OK,
	PYTHON_MODULE_ERROR
};

class CPythonInterface
{
public:
	CPythonInterface();
	~CPythonInterface();

	PythonStatus		InitializeModules();
	int				RunString(const char* string);
	void			CallShutdownFuncs();

	PyObject *GetPythonModule();

private:
	void			InitializeState();
	void			InitLogging();
	void			CleanupState();
	void			SetSDKValues();
	void			SetPaths();
	int				DoFile(const std::string& filename);
	int				DoFileAbsolute(const std::string& path);

	PyObject*		m_pModule;
	std::string		m_PythonPath;
	bool			m_modulesInitialized;
};

#endif