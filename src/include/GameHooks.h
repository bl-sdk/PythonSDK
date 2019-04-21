#pragma once
#ifndef GAMEHOOKS_H
#define GAMEHOOKS_H

#include "CScriptHookManager.h"
#include "CEngineHookManager.h"

typedef bool (tProcessEventHook)(UObject*, UFunction*, void*, void*);
typedef bool (tCallFunctionHook)(UObject*, FFrame&, void* const, UFunction*);

namespace GameHooks
{
	extern CEngineHookManager* EngineHookManager;
	extern CScriptHookManager* UnrealScriptHookManager;

	void Initialize();
	void Cleanup();
	bool ProcessEngineHooks(UObject* pCaller, UFunction* pFunction, void* pparams, void* pResult);
	bool ProcessUnrealScriptHooks(UObject* pCaller, FFrame& Stack, void* const Result, UFunction* Function);
}

#endif