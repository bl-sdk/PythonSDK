#pragma once
//From McSimp's Borderlands2SDK

#ifndef UTIL_H
#define UTIL_H

#define PATH_SEPARATOR "\\"

namespace Util
{
	std::string Format(const char* fmt, ...);
	std::string FormatInternal(const char* fmt, va_list args);
	std::wstring Format(const wchar_t* fmt, ...);
	std::wstring FormatInternal(const wchar_t* fmt, va_list args);
	std::wstring Widen(const std::string& input);
	std::string Narrow(const std::wstring& input);
	void Popup(const std::wstring& strName, const std::wstring& strText);
	void CloseGame();
	std::string StringToHex(const char* input, size_t len);

	void Initialize();
	const char *ServerPath();
	const char *MainLuaPath();
	const char *LogPath();
	const char *LayoutPath();
	HWND getToplevelWindows();
	DWORD GetMainThreadId(DWORD dwPid);
	HANDLE GetMainThreadHandle(DWORD dwPid, DWORD dwDesiredAccess);

	int WaitForModules(std::int32_t timeout, const std::initializer_list<std::wstring>& modules);
}

#endif