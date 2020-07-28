#pragma once
#include "stdafx.h"
#include "MemorySignature.h"
#include "CSigScan.h"
#include "Util.h"
#include "Exceptions.h"

#include <cstring>
#include <Psapi.h>
// Based off CSigScan from AlliedModders

CSigScan::CSigScan(const wchar_t* moduleName = NULL)
{
	m_moduleHandle = GetModuleHandle(moduleName);
	if (m_moduleHandle == nullptr)
	{
		throw FatalSDKException(3000, Util::Format("Sigscan failed (GetModuleHandle returned NULL, Error = %d)",
			GetLastError()));
	}

	void* pAddr = m_moduleHandle;

	MEMORY_BASIC_INFORMATION mem;
	if (!VirtualQuery(pAddr, &mem, sizeof(mem)))
	{
		throw FatalSDKException(3001, Util::Format("Sigscan failed (VirtualQuery returned NULL, Error = %d)",
			GetLastError()));
	}
	
	m_pModuleBase = (char*)mem.AllocationBase;
	if (m_pModuleBase == nullptr)
	{
		throw FatalSDKException(3002, "Sigscan failed (mem.AllocationBase was NULL)");
	}

	IMAGE_DOS_HEADER* dos = (IMAGE_DOS_HEADER*)mem.AllocationBase;
	IMAGE_NT_HEADERS* pe = (IMAGE_NT_HEADERS*)((unsigned long)dos + (unsigned long)dos->e_lfanew);

	Logging::LogF("Module Handle: %X\n", m_moduleHandle);
	Logging::LogF("Base Address: 0x%X\n", mem.BaseAddress);
	Logging::LogF("IMAGE_DOS_HEADER: 0x%X\n", dos);
	Logging::LogF("NEW EXE HEADER: 0x%X\n", dos->e_lfanew);
	Logging::LogF("PE HEADER POINTER: 0x%X\n", (IMAGE_NT_HEADERS*)((unsigned long)dos + (unsigned long)dos->e_lfanew));
	Logging::LogF("Module Base: 0x%x\n", m_pModuleBase);

#ifdef UE4
	m_moduleLen = 0x21000000;
#else
	m_moduleLen = (size_t)pe->OptionalHeader.SizeOfImage;
#endif

	Logging::LogF("Module Length: %x\n", m_moduleLen);

}

void* CSigScan::Scan(const MemorySignature& sigStruct)
{
	return Scan(sigStruct.Sig, sigStruct.Mask, sigStruct.Length);
}

void* CSigScan::Scan(const char* sig, const char* mask)
{
	int sigLength = strlen(mask);
	return Scan(sig, mask, sigLength);
}

void* CSigScan::Scan(const char* sig, const char* mask, int sigLength)
{
	char* pData = m_pModuleBase;
	char* pEnd = m_pModuleBase + m_moduleLen;

	while (pData < pEnd)
	{
		int i;
		for (i = 0; i < sigLength; i++)
		{
			if (mask[i] != '?' && sig[i] != pData[i])
				break;
		}

		// The for loop finished on its own accord
		if (i == sigLength)
		{
			return (void*)pData;
		}

		pData++;
	}
	Logging::LogF("Sigscan failed (Signature not found, Signature = %s)\n", Util::SigPatternToHex(sig, mask, sigLength).c_str());
	return nullptr;
}

uintptr_t CSigScan::FindPattern(HMODULE module, const unsigned char* pattern, const char* mask)
{
	// Originally this code used the (better solution) of calling `GetModuleInformation` but instead it magically broke on an upgrade 
	// Physically I have no absolute idea on how it of all functions broke but have a good day :)
	uintptr_t start = reinterpret_cast<uintptr_t>(module);

	return FindPattern(start, m_moduleLen, pattern, mask);
}

uintptr_t CSigScan::FindPattern(uintptr_t start, size_t length, const unsigned char* pattern, const char* mask)
{
	size_t pos = 0;
	auto maskLength = std::strlen(mask) - 1;

	auto startAdress = start;
	for (auto it = startAdress; it < startAdress + length; ++it)
	{
		if (*reinterpret_cast<unsigned char*>(it) == pattern[pos] || mask[pos] == '?')
		{
			if (mask[pos + 1] == '\0')
			{
				return it - maskLength;
			}

			pos++;
		}
		else
		{
			pos = 0;
		}
	}

	return -1;
}
