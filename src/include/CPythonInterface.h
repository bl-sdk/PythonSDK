#pragma once
#ifndef CPYTHONINTERFACE_H
#define CPYTHONINTERFACE_H

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

	PythonStatus InitializeModules();
	int RunString(const char* string);
	void CallShutdownFuncs();
	int DoFile(const char* filename);
	int DoString(const char* command);

	pybind11::object GetPythonNamespace();

private:
	void InitializeState();
	void InitLogging();
	void CleanupState();
	void SetSDKValues();
	void SetPaths();
	int DoFileAbsolute(const char* path);

	pybind11::object m_mainNamespace;
	std::string m_PythonPath;
	std::string m_StdoutBuffer;
	std::string m_StderrBuffer;
	bool m_modulesInitialized;
};

#endif
