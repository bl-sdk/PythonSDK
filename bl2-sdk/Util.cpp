#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <stdarg.h>
#include "Util.h"
#include "stdafx.h"

//From McSimp's Borderlands2SDK

namespace Util
{
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