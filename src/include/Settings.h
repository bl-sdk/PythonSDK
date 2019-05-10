#pragma once
#ifndef SETTINGS_H
#define SETTINGS_H

#include <Windows.h>
#include <string>

struct LauncherStruct
{
	bool DisableAntiDebug;
	bool LogAllCalls;
	bool DisableCrashRpt;
	bool DeveloperMode;
	const LPWSTR BinPath;
};

namespace Settings
{
	void Initialize(wchar_t * binPath_/* LauncherStruct* args*/);
	std::wstring GetLogFilePath();
	std::wstring GetBinFile(const std::wstring& filename);
	std::wstring GetTextureFile(const std::wstring& filename);
	std::wstring GetPythonFile(const std::wstring& filename);
	bool DeveloperModeEnabled();
	bool DisableAntiDebug();
}

#endif