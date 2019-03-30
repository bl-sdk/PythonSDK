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
	Export_pystes_UInteraction(m);
	Export_pystes_UConsole(m);
	Export_pystes_UWillowConsole(m);
	Export_pystes_FString(m);
	Export_pystes_UGBXDefinition(m);
	Export_pystes_USkillTreeBranchDefinition(m);
	Export_pystes_USkillTreeBranchLayoutDefinition(m);
	Export_pystes_USkillDefinition(m);
	Export_pystes_FTier(m);
	Export_pystes_TArray(m);
	Export_pystes_UPlayer(m);
	Export_pystes_ULocalPlayer(m);
	Export_pystes_USubsystem(m);
	Export_pystes_UEngine(m);
	Export_pystes_UGameEngine(m);
	Export_pystes_UGearboxEngine(m);
	Export_pystes_UWillowGameEngine(m);
	Export_pystes_AActor(m);
	Export_pystes_AController(m);
	Export_pystes_APlayerController(m);
	Export_pystes_AGamePlayerController(m);
	Export_pystes_AGearboxPlayerController(m);
	Export_pystes_AWillowPlayerController(m);
	Export_pystes_FQWord(m);
	m.def("Log", [](std::string in) { Logging::Log(in.c_str(), in.length()); });
	m.def("LoadPackage", &BL2SDK::LoadPackage);
}

bool PythonGCTick(UObject* caller, UFunction* function, void* parms, void* result)
{
	return true;
}

bool CheckPythonCommand(UObject* caller, FFrame& stack, void* const result, UFunction* function)
{
	FString *command = &FString();
	unsigned char *code = stack.Code;
	BL2SDK::pFrameStep(&stack, stack.Object, command);
	char *input = command->AsString();
	if (strncmp("py ", input, 3) == 0) {
		BL2SDK::Python->DoString(input + 3);
		stack.SkipFunction();
		return true;
	}
	else if (strncmp("pyexec ", input, 7) == 0) {
		BL2SDK::Python->DoFile(input + 7);
		stack.SkipFunction();
		return true;
	}
	stack.Code = code;
	return true;
}

CPythonInterface::CPythonInterface()
{
	m_modulesInitialized = false;
	InitializeState();

	GameHooks::EngineHookManager->Register("Function WillowGame.WillowGameViewportClient:Tick", "PythonGCTick", &PythonGCTick);
	GameHooks::UnrealScriptHookManager->Register("Function Engine.Console.ShippingConsoleCommand", "CheckPythonCommand", &CheckPythonCommand);
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
		py::initialize_interpreter();
		py::module::import("bl2sdk");
		m_mainNamespace = py::module::import("__main__");
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
