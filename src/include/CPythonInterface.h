#pragma once
#ifndef CPYTHONINTERFACE_H
#define CPYTHONINTERFACE_H

enum PythonStatus
{
	PYTHON_OK,
	PYTHON_MODULE_ERROR
};

class UConsole;

class CPythonInterface
{
public:
	CPythonInterface();
	~CPythonInterface();

	PythonStatus InitializeModules();
	PythonStatus ReloadState();

	int RunString(const char* string);
	void CallShutdownFuncs();
	int DoFile(const char* filename);
	int DoString(const char* command);

	pybind11::object GetPythonNamespace();

	void AddToConsoleLog(UConsole* console, const char* input);

private:
	void InitializeState();
	void InitLogging();
	void CleanupState();
	void SetSDKValues();
	void SetPaths();
	int DoFileAbsolute(const char* path);

	pybind11::object m_mainNamespace;
	pybind11::module mainModule;
	std::string m_PythonPath;
	std::string m_StdoutBuffer;
	std::string m_StderrBuffer;
	bool m_modulesInitialized;
};

#endif
