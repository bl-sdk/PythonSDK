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

	void initialize();
	void cleanup();
	bool processEngineHooks(UObject* pCaller, UFunction* pFunction, void* pParms, void* pResult);
	bool processUnrealScriptHooks(UObject* pCaller, FFrame& Stack, void* const Result, UFunction* Function);
}

#endif