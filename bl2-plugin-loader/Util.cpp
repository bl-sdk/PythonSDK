#define WIN32_LEAN_AND_MEAN
#include "stdafx.h"
#include <Windows.h>
#include <string>
#include <vector>
#include <stdio.h>
#include <stdarg.h>
#include "NamedPipe.h"
#include "Util.h"
#include "Logging.h"

//From McSimp's Borderlands2SDK

namespace Util
{
	static bool isInit = false;
	static NamedPipe *pipe = NULL;
	static const char pipeName[] = "\\\\.\\pipe\\bl2monitorpipeutils";
	static char serverPath[MAX_PATH] = { 0 };
	static char mainLuaPath[MAX_PATH] = { 0 };
	static char logPath[MAX_PATH] = { 0 };
	static char layoutPath[MAX_PATH] = { 0 };

	void SendRequest(const char*req, unsigned len, char* buffer, unsigned *buflen)
	{//Clean me up
		if (!isInit || !buffer)
			return;
		pipe->Flush();
		if (pipe->Write(req, len) != len)
		{
			*buflen = 0;
			*buffer = 0;
			Logging::LogF("Failed to send request.");
			return;
		}
		*buffer = 0;
		unsigned total = 0;
		bool endCharFound = false;
		for (unsigned i = 0; 3 > i; i++) {
			total += pipe->ReadImmediate(buffer + total, *buflen - total);
			for (unsigned j = 0; total > j; j++)
			{
				if (buffer[j] == '\n') {
					endCharFound = true;
					buffer[j] = 0;
					break;
				}
			}
			if (endCharFound)
				break;
		}
		if (endCharFound)
			*buflen = total;
		else {
			*buflen = 0;
			*buffer = 0;
		}
	}

	void Initialize()
	{
		if (isInit)
			return;
		isInit = true;

		pipe = new NamedPipe(pipeName);
		pipe->Open();
	}

	void CleanUp()
	{
		if (pipe)
		{
			pipe->Close();
			delete pipe;
			pipe = NULL;
		}
	}

	const char *ServerPath()
	{
		const char req[] = "PATH\n";
		if (*serverPath)
			return serverPath;
		unsigned l = sizeof(serverPath);
		SendRequest(req, sizeof(req) - 1, serverPath, &l);
		return serverPath;
	}

	const char *MainLuaPath()
	{
		const char req[] = "LUAMAIN\n";
		if (*mainLuaPath)
			return mainLuaPath;
		unsigned l = sizeof(mainLuaPath);
		SendRequest(req, sizeof(req) - 1, mainLuaPath, &l);
		return mainLuaPath;
	}

	const char *LogPath()
	{
		const char req[] = "LOG\n";
		if (*logPath)
			return logPath;
		unsigned l = sizeof(logPath);
		SendRequest(req, sizeof(req) - 1, logPath, &l);
		return logPath;
	}

	const char *LayoutPath()
	{
		const char req[] = "LAYOUT\n";
		if (*layoutPath)
			return layoutPath;
		unsigned l = sizeof(layoutPath);
		SendRequest(req, sizeof(req) - 1, layoutPath, &l);
		return layoutPath;
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
}