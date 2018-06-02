#include "stdafx.h"
#include "Logging.h"
#include "MemoryDebug.h"
#include "Exports.h"

#include <map>

namespace BL2SDK
{
	typedef void(__thiscall *tFMallocFree) (FMalloc* malloc, void* ptr);
	tFMallocFree pMallocFree = nullptr;
	std::map<void*, bool> allocationWatches;

	void __stdcall hkMallocFree(void* ptr)
	{
		FMalloc* malloc;
		_asm mov malloc, ecx;

		auto it = allocationWatches.find(ptr);
		if (it != allocationWatches.end())
		{
			Logging::LogF("[MemDBG] FMalloc::Free on 0x%p\n", ptr);
			allocationWatches.erase(it);
		}

		pMallocFree(malloc, ptr);
	}

	void HookMemoryAllocator()
	{
		FMalloc* GMalloc = *pGMalloc;
		void** vftable = GMalloc->VfTable;

		DWORD dwProtect;
		VirtualProtect(vftable, 4 * 4, PAGE_EXECUTE_READWRITE, &dwProtect);

		pMallocFree = (tFMallocFree)vftable[3];
		Logging::LogF("[MemDBG] GMalloc->Free = 0x%p\n", pMallocFree);

		vftable[3] = &hkMallocFree;

		VirtualProtect(vftable, 4 * 4, dwProtect, NULL);

		Logging::Log("[MemDBG] GMalloc virtual table hooked successfully\n");
	}

	void AddAllocationWatch(void* ptr)
	{
		allocationWatches[ptr] = true;
	}

	FFI_EXPORT void LUAFUNC_AddAllocationWatch(void* ptr)
	{
		AddAllocationWatch(ptr);
	}
}
