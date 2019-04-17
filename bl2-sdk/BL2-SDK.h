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
	// http://api.unrealengine.com/INT/API/Runtime/CoreUObject/UObject/StaticConstructObject_Internal/index.html
	typedef UObject* (*tStaticConstructObject) (UClass* Class, UObject* InOuter, FName name, unsigned int SetFlags, unsigned int InternalSetFlags, UObject* InTemplate, FOutputDevice* Error, void* InstanceGraph, int bAssumeTemplateIsArchetype);
	typedef UPackage* (*tLoadPackage) (UPackage* outer, const wchar_t* filename, DWORD flags);
	typedef FArchive& (__thiscall *tByteOrderSerialize) (FArchive* Ar, void* V, int Length);

	typedef void (__thiscall *tFNameInit) (FName *out, wchar_t *Src, int InNumber, int FindType, int bSplitName);

	extern tFNameInit pFNameInit;
	extern tProcessEvent pProcessEvent;
	extern tCallFunction pCallFunction;
	extern tFrameStep pFrameStep;
	extern tStaticConstructObject pStaticConstructObject;
	extern tLoadPackage pLoadPackage;
	extern tByteOrderSerialize pByteOrderSerialize;

	extern CPythonInterface * Python;

	extern int EngineVersion;
	extern int ChangelistNumber;

	extern class UObject *engine;

	void LogAllProcessEventCalls(bool enabled);
	void LogAllUnrealScriptCalls(bool enabled);
	//bool getGameVersion(std::wstring& appVersion);
	void doInjectedCallNext();
	void initialize(wchar_t * exeBaseFolder/*LauncherStruct* args*/);
	void cleanup();
	void LoadPackage(const char* filename, DWORD flags = 0, bool force = false);
	UObject			*ConstructObject(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags, unsigned int InternalSetFlags, UObject* inTemplate, FOutputDevice *Error, void* InstanceGraph, int bAssumeTemplateIsArchetype);
	UObject			*GetEngine();
}

#endif