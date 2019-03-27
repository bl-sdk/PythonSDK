#pragma once
#ifndef BL2SDK_H
#define BL2SDK_H

#include <string>
#include "CPythonInterface.h"

class UObject;
class UFunction;
class UClass;
class UPackage;
class UWillowGameEngine;
class UPlayer;
class UConsole;

struct FFrame;
struct FName;
struct FOutputDevice;
struct FArchive;

namespace BL2SDK
{
	typedef void(__thiscall *tProcessEvent) (UObject*, UFunction*, void*, void*);
	typedef int (tUnrealEH)(unsigned int, struct _EXCEPTION_POINTERS*);
	typedef void(__thiscall *tCallFunction) (UObject*, FFrame&, void* const, UFunction*);
	typedef void(__thiscall *tFrameStep) (FFrame*, UObject*, void* const);
	typedef UObject* (*tStaticConstructObject) (UClass* inClass, UObject* outer, FName name, unsigned int flags, UObject* inTemplate, FOutputDevice* error, UObject* root, void* unk);
	typedef UPackage* (*tLoadPackage) (UPackage* outer, const wchar_t* filename, DWORD flags);
	typedef FArchive& (__thiscall *tByteOrderSerialize) (FArchive* Ar, void* V, int Length);

	extern tProcessEvent pProcessEvent;
	extern tCallFunction pCallFunction;
	extern tFrameStep pFrameStep;
	extern tStaticConstructObject pStaticConstructObject;
	extern tLoadPackage pLoadPackage;
	extern tByteOrderSerialize pByteOrderSerialize;

	extern CPythonInterface * Python;

	extern int EngineVersion;
	extern int ChangelistNumber;

	void LogAllProcessEventCalls(bool enabled);
	void LogAllUnrealScriptCalls(bool enabled);
	//bool getGameVersion(std::wstring& appVersion);
	void doInjectedCallNext();
	void initialize(wchar_t * exeBaseFolder/*LauncherStruct* args*/);
	void cleanup();
	void LoadPackage(const char* filename, DWORD flags = 0, bool force = false);
}

#endif