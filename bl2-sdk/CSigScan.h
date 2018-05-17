#pragma once
#ifndef SIGSCAN_H
#define SIGSCAN_H

#define WIN32_LEAN_AND_MEAN
#include <windows.h>

#include "MemorySignature.h"

class CSigScan
{
private:
	char* m_pModuleBase;
	size_t m_moduleLen;
	HMODULE m_moduleHandle;

public:
	CSigScan(const wchar_t* moduleName);

	void* Scan(const MemorySignature& sigStruct);
	void* Scan(const char* sig, const char* mask, int sigLength);
	void* Scan(const char* sig, const char* mask);
};
#endif