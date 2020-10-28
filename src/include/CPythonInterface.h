#pragma once
#ifndef CPYTHONINTERFACE_H
#define CPYTHONINTERFACE_H

enum PythonStatus {
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

	#ifdef UE4
	bool RegisterConsoleCommand(const std::string& ConsoleCommand, const std::function<bool(std::string&)>& FuncHook);
	bool RemoveConsoleCommand(const std::string& ConsoleCommand);
	bool ProcessCommands(const wchar_t* cmd);
	#endif

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

	// This stuff could probably get split into other functions but honestly I find it simple enough to go here 
	#ifdef UE4 
	std::map < std::string, std::function<bool(std::string&)>> m_consoleCommandMap;

	#endif 
};

#endif
