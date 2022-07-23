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

	LOG(MISC, "Module Handle: %X", m_moduleHandle);
	LOG(MISC, "Base Address: 0x%X", mem.BaseAddress);
	LOG(MISC, "IMAGE_DOS_HEADER: 0x%X", dos);
	LOG(MISC, "NEW EXE HEADER: 0x%X", dos->e_lfanew);
	LOG(MISC, "PE HEADER POINTER: 0x%X", (IMAGE_NT_HEADERS*)((unsigned long)dos + (unsigned long)dos->e_lfanew));
	LOG(MISC, "Module Base: 0x%x", m_pModuleBase);

#ifdef UE4
	m_moduleLen = 0x21000000;
#else
	m_moduleLen = (size_t)pe->OptionalHeader.SizeOfImage;
#endif

	LOG(MISC, "Module Length: %x", m_moduleLen);

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
	LOG(MISC, "Sigscan failed (Signature not found, Signature = %s)", Util::SigPatternToHex(sig, mask, sigLength).c_str());
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
