#define WIN32_LEAN_AND_MEAN
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdarg.h>
#include "Util.h"
#include "Logging.h"

//From McSimp's Borderlands2SDK

namespace Util
{
	static bool isInit = false;
	static char serverPath[MAX_PATH] = { 0 };
	static char logPath[MAX_PATH] = { 0 };
	static char layoutPath[MAX_PATH] = { 0 };

	void Initialize()
	{
		if (isInit)
			return;
		isInit = true;
	}

	//Get top window
	static HWND	topWnd = NULL;
	struct EnumWindowsCallbackArgs {
		EnumWindowsCallbackArgs(DWORD p) : pid(p) { }
		const DWORD pid;
		std::vector<HWND> handles;
	};

	static BOOL CALLBACK EnumWindowsCallback(HWND hnd, LPARAM lParam)
	{
		EnumWindowsCallbackArgs *args = (EnumWindowsCallbackArgs *)lParam;
		DWORD windowPID;
		(void)::GetWindowThreadProcessId(hnd, &windowPID);
		if (windowPID == args->pid) {
			args->handles.push_back(hnd);
		}
		return TRUE;
	}

	HWND getToplevelWindows()
	{
		if (topWnd)
			return topWnd;
		EnumWindowsCallbackArgs args(::GetCurrentProcessId());
		if (::EnumWindows(&EnumWindowsCallback, (LPARAM)&args) == FALSE) {
			return NULL;
		}
		return topWnd = args.handles[0];
	}

	DWORD GetMainThreadId(DWORD dwPid)
	{
		LPVOID lpTid;
		_asm
		{
			mov eax, fs:[18h]
			add eax, 36
			mov[lpTid], eax
		}
		HANDLE hProcess = OpenProcess(PROCESS_VM_READ, FALSE, dwPid);
		if (hProcess == NULL)
			return NULL;
		DWORD dwTid;
		if (ReadProcessMemory(hProcess, lpTid, &dwTid, sizeof(dwTid), NULL) == FALSE)
		{
			CloseHandle(hProcess);
			return NULL;
		}
		CloseHandle(hProcess);
		return dwTid;
	}

	HANDLE GetMainThreadHandle(DWORD dwPid, DWORD dwDesiredAccess)
	{
		DWORD dwTid = GetMainThreadId(dwPid);
		if (dwTid == FALSE)
			return NULL;
		return OpenThread(dwDesiredAccess, FALSE, dwTid);
	}

	std::string FormatInternal(const char* fmt, va_list args)
	{
		std::string str;

		int buffSize = _vscprintf(fmt, args) + 1;

		if (buffSize <= 1)
			return str;

		char *szBuff = new char[buffSize];
		memset(szBuff, 0, buffSize);

		vsprintf_s(szBuff, buffSize, fmt, args);

		szBuff[buffSize - 1] = 0;

		str = szBuff;
		delete[] szBuff;

		return str;
	}

	std::string Format(const char* fmt, ...)
	{
		va_list args;
		va_start(args, fmt);
		std::string formatted = FormatInternal(fmt, args);
		va_end(args);

		return formatted;
	}

	std::wstring FormatInternal(const wchar_t* fmt, va_list args)
	{
		std::wstring str;

		int buffSize = _vscwprintf(fmt, args) + 1;

		if (buffSize <= 1)
			return str;

		wchar_t* szBuff = new wchar_t[buffSize];
		memset(szBuff, 0, buffSize);

		vswprintf_s(szBuff, buffSize, fmt, args);

		szBuff[buffSize - 1] = 0;

		str = szBuff;
		delete[] szBuff;

		return str;
	}

	std::wstring Format(const wchar_t* fmt, ...)
	{
		va_list args;
		va_start(args, fmt);
		std::wstring formatted = FormatInternal(fmt, args);
		va_end(args);

		return formatted;
	}

	// TODO: Benchmarking and whatnot to see how these perform
	std::wstring Widen(const std::string& input)
	{
		std::wstring out;
		out.assign(input.begin(), input.end());
		return out;
	}

	std::string Narrow(const std::wstring& input)
	{
		std::string out;
		out.assign(input.begin(), input.end());
		return out;
	}

	void Popup(const std::wstring& strName, const std::wstring& strText)
	{
		MessageBox(nullptr, strText.c_str(), strName.c_str(), MB_OK | MB_ICONASTERISK);
	}

	void CloseGame()
	{
		TerminateProcess(GetCurrentProcess(), 1);
	}

	// This will convert a string like "Hello World" to "48 65 6C 6C 6F 20 57 6F 72 6C 64"
	// Taken mostly from http://stackoverflow.com/questions/3381614/c-convert-string-to-hexadecimal-and-vice-versa
	std::string StringToHex(const char* input, size_t len)
	{
		static const char* const lut = "0123456789ABCDEF";

		std::string output;
		output.reserve((2 * len) + len);
		for (size_t i = 0; i < len; ++i)
		{
			const unsigned char c = input[i];
			output.push_back(lut[c >> 4]);
			output.push_back(lut[c & 15]);
			output.push_back(' ');
		}
		output.resize(output.size() - 1); // Remove that last space

		return output;
	}

	int WaitForModules(std::int32_t timeout, const std::initializer_list<std::wstring>& modules)
	{
		bool signaled[32] = { 0 };
		bool success = false;

		std::uint32_t totalSlept = 0;

		if (timeout == 0) {
			for (auto& mod : modules) {
				if (GetModuleHandleW(std::data(mod)) == NULL)
					return WAIT_TIMEOUT;
			}
			return WAIT_OBJECT_0;
		}

		if (timeout < 0)
			timeout = INT32_MAX;

		while (true) {
			for (auto i = 0u; i < modules.size(); ++i) {
				auto& module = *(modules.begin() + i);
				if (!signaled[i] && GetModuleHandleW(std::data(module)) != NULL) {
					signaled[i] = true;

					//
					// Checks if all modules are signaled
					//
					bool done = true;
					for (auto j = 0u; j < modules.size(); ++j) {
						if (!signaled[j]) {
							done = false;
							break;
						}
					}
					if (done) {
						success = true;
						goto exit;
					}
				}
			}
			if (totalSlept > std::uint32_t(timeout)) {
				break;
			}
			Sleep(10);
			totalSlept += 10;
		}

	exit:
		return success ? WAIT_OBJECT_0 : WAIT_TIMEOUT;
	}
}