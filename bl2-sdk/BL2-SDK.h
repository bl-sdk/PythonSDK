#pragma once
#ifndef BL2SDK_H
#define BL2SDK_H

namespace BL2SDK
{
	extern void* pGObjects;
	extern void* pGNames;
	extern void* pGObjHash;
	extern void* pGCRCTable;
	extern void* pNameHash;
}

#include <windows.h>
#include <SDKDDKVer.h>
#include <string>

#include "GameDefines.h"
#include "Signatures.h"

#include "Core_structs.h"
#include "Core_f_structs.h"
#include "Core_classes.h"
//#include "Core_functions.h"

#include "Engine_structs.h"
#include "Engine_f_structs.h"
#include "Engine_classes.h"
//#include "Engine_functions.h"

#include "GameFramework_structs.h"
#include "GameFramework_f_structs.h"
#include "GameFramework_classes.h"
//#include "GameFramework_functions.h"

#include "GFxUI_structs.h"
#include "GFxUI_f_structs.h"
#include "GFxUI_classes.h"
//#include "GFxUI_functions.h"

#include "GearboxFramework_structs.h"
#include "GearboxFramework_f_structs.h"
#include "GearboxFramework_classes.h"
//#include "GearboxFramework_functions.h"

#include "IpDrv_structs.h"
#include "IpDrv_f_structs.h"
#include "IpDrv_classes.h"
//#include "IpDrv_functions.h

#include "OnlineSubsystemSteamworks_structs.h"
#include "OnlineSubsystemSteamworks_f_structs.h"
#include "OnlineSubsystemSteamworks_classes.h"
//#include "OnlineSubsystemSteamworks_functions.h"

#include "WillowGame_structs.h"
#include "WillowGame_f_structs.h"
#include "WillowGame_classes.h"
//#include "WillowGame_functions.h"

#include "WinDrv_structs.h"
#include "WinDrv_f_structs.h"
#include "WinDrv_classes.h"
//#include "WinDrv_functions.h"

#include "XAudio2_structs.h"
#include "XAudio2_f_structs.h"
#include "XAudio2_classes.h"
//#include "XAudio2_functions.h"

#include "AkAudio_structs.h"
#include "AkAudio_f_structs.h"
#include "AkAudio_classes.h"
//#include "AkAudio_functions.h"

namespace BL2SDK
{
	typedef void(__thiscall *tProcessEvent) (UObject*, UFunction*, void*, void*);
	//typedef int (tUnrealEH) (unsigned int, struct _EXCEPTION_POINTERS*);
	typedef void(__thiscall *tCallFunction) (UObject*, FFrame&, void* const, UFunction*);
	typedef void(__thiscall *tFrameStep) (FFrame*, UObject*, void* const);
	typedef UObject* (*tStaticConstructObject) (UClass* inClass, UObject* outer, FName name, unsigned int flags, UObject* inTemplate, FOutputDevice* error, UObject* root, void* unk);
	typedef UPackage* (*tLoadPackage) (UPackage* outer, const wchar_t* filename, DWORD flags);
	typedef FArchive& (__thiscall *tByteOrderSerialize) (FArchive* Ar, void* V, int Length);

	extern void* pTextureFixLocation;
	extern FMalloc** pGMalloc;

	extern tProcessEvent pProcessEvent;
	extern tCallFunction pCallFunction;
	extern tFrameStep pFrameStep;
	extern tStaticConstructObject pStaticConstructObject;
	extern tLoadPackage pLoadPackage;
	extern tByteOrderSerialize pByteOrderSerialize;

	extern int EngineVersion;
	extern int ChangelistNumber;

	void LogAllProcessEventCalls(bool enabled);
	void LogAllUnrealScriptCalls(bool enabled);
	bool GetGameVersion(std::wstring& appVersion);
	void InjectedCallNext();
	void Initialize(/*LauncherStruct* args*/);
	void Cleanup();

	UWillowGameEngine* getGameEngine();
	UPlayer* localPlayer();
}

#endif