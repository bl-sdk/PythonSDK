#pragma once
#include "BL2-SDK.h"

namespace BL2SDK
{
	bool GIsLoadingUDKPackage = false;
	DWORD dwTextureFixReturn;

	void WriteJMPHook(unsigned char* hookLocation, unsigned char* jumpTo, int hookLength)
	{
		DWORD dwOldProtect;
		VirtualProtect(hookLocation, hookLength, PAGE_EXECUTE_READWRITE, &dwOldProtect);

		// Write jmp opcode
		*hookLocation = 0xE9;

		// Write jump offset
		DWORD dwRelAddr = (DWORD)(jumpTo - hookLocation - 5);
		*((DWORD*)(hookLocation + 0x1)) = dwRelAddr;

		// Overwrite the rest with nop
		for (int i = 5; i < hookLength; i++)
			*(hookLocation + i) = 0x90;

		DWORD dwDummy;
		VirtualProtect(hookLocation, hookLength, dwOldProtect, &dwDummy);
	}

	void __stdcall FixTextureLoad()
	{
		/* //DEBUG
		ULinkerLoad* Ar;
		_asm mov Ar, esi;

		if (GIsLoadingUDKPackage)
		{
			int flags, elementCount, dataSize, dataOffset = 0;
			pByteOrderSerialize(Ar, &flags, 4);
			pByteOrderSerialize(Ar, &elementCount, 4);
			pByteOrderSerialize(Ar, &dataSize, 4);
			pByteOrderSerialize(Ar, &dataOffset, 4);

			//Logging::LogF("[PackageFix] Skipping SourceArt: Flags = %d, Count = %d, Size = %d, Offset = %d\n", flags, elementCount, dataSize, dataOffset);

			Ar->Loader->CurrentPos += dataSize;
		}
		*/
	}

	__declspec(naked) void hkTexture2DSerialize()
	{
		__asm
		{
			pushad
			pushfd
		}

		// If we're loading a UDK package, skip over the source art data
		FixTextureLoad();

		__asm
		{
			popfd
			popad

			mov eax, [esi + 16]
			test eax, eax

			jmp[dwTextureFixReturn]
		}
	}

	void InitializePackageFix()
	{
		dwTextureFixReturn = (DWORD)pTextureFixLocation + 5;
		WriteJMPHook((unsigned char*)pTextureFixLocation, (unsigned char*)hkTexture2DSerialize, 5);
	}

	void SetIsLoadingUDKPackage(bool loadingUDKPkg)
	{
		GIsLoadingUDKPackage = loadingUDKPkg;
	}
}