#pragma once
#ifndef GAMEHOOKS_H
#define GAMEHOOKS_H

#include "CHookManager.h"

typedef bool (tProcessEventHook)(UObject*, UFunction*, void*, void*);
typedef bool (tCallFunctionHook)(UObject*, FFrame&, void* const, UFunction*);

namespace GameHooks
{
	extern CHookManager* EngineHookManager;
	extern CHookManager* UnrealScriptHookManager;

	void Initialize();
	void Cleanup();
	bool ProcessEngineHooks(UObject* pCaller, UFunction* pFunction, void* pParms, void* pResult);
	bool ProcessUnrealScriptHooks(UObject* pCaller, FFrame& Stack, void* const Result, UFunction* Function);
}

#endif