#pragma once
#ifndef SETTINGS_H
#define SETTINGS_H

#include <Windows.h>
#include <string>

struct LauncherStruct
{
	bool DisableAntiDebug;
	bool LogAllProcessEventCalls;
	bool LogAllUnrealScriptCalls;
	bool DisableCrashRpt;
	bool DeveloperMode;
	bool EnableMemoryDebug;
	const LPWSTR BinPath;
};

namespace Settings
{
	void Initialize(LauncherStruct* args);
	std::wstring GetLogFilePath();
	std::wstring GetBinFile(const std::wstring& filename);
	std::wstring GetTextureFile(const std::wstring& filename);
	std::wstring GetLuaFile(const std::wstring& filename);
	bool DeveloperModeEnabled();
	bool DisableAntiDebug();
	bool MemoryDebugEnabled();
}

#endif