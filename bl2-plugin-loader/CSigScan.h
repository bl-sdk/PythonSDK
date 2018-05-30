#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <string>

struct MemorySignature;

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