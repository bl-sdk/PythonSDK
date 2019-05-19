#pragma once

#ifndef LOGGING_H
#define LOGGING_H
#include <string>

namespace Logging
{
	void Log(const char* formatted, int length = 0);
	void LogW(wchar_t *, int);
	void LogPy(const char* formatted);
	void LogF(const char *szFmt, ...);
	void LogD(const char *szFmt, ...);
	void SetLoggingLevel(const char *NewLevel);
	void InitializeExtern();
	void InitializeFile(const std::wstring& fileName);
	void PrintLogHeader();
	void Cleanup();
}

#endif