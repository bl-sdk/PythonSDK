#pragma once
#include "stdafx.h"
#include "GameHooks.h"

namespace GameHooks
{
	CHookManager* EngineHookManager;
	CHookManager* UnrealScriptHookManager;

	void initialize()
	{
		EngineHookManager = new CHookManager("EngineHooks");
		UnrealScriptHookManager = new CHookManager("UnrealScriptHooks");
	}

	void cleanup()
	{
		delete EngineHookManager;
		EngineHookManager = nullptr;

		delete UnrealScriptHookManager;
		UnrealScriptHookManager = nullptr;
	}

	bool processEngineHooks(UObject* caller, UFunction* function, void* parms, void* result)
	{
		// Resolve any virtual hooks into static hooks
		EngineHookManager->ResolveVirtualHooks(function);

		// Call any static hooks that may exist
		CHookManager::tiStaticHooks iHooks = EngineHookManager->StaticHooks.find(function);
		if (iHooks != EngineHookManager->StaticHooks.end())
		{
			CHookManager::tHookMap hooks = iHooks->second;

			for (CHookManager::tiHookMap iterator = hooks.begin(); iterator != hooks.end(); iterator++)
			{
				// maps to std::string, void*, but we want to call a tProcessEventHook* instead
				if (!((tProcessEventHook*)iterator->second)(caller, function, parms, result))
				{
					// As soon as one hook doesn't want it to fall through, we'll stop
					return false;
				}
			}
		}

		// Run the function in the engine as normal
		return true;
	}

	bool processUnrealScriptHooks(UObject* caller, FFrame& stack, void* const result, UFunction* function)
	{
		// Resolve any virtual hooks into static hooks
		UnrealScriptHookManager->ResolveVirtualHooks(function);

		// Call any static hooks that may exist
		CHookManager::tiStaticHooks iHooks = UnrealScriptHookManager->StaticHooks.find(function);
		if (iHooks != UnrealScriptHookManager->StaticHooks.end())
		{
			CHookManager::tHookMap hooks = iHooks->second;

			for (CHookManager::tiHookMap iterator = hooks.begin(); iterator != hooks.end(); iterator++)
			{
				// maps to std::string, void*, but we want to call a tCallFunctionHook* instead
				if (!((tCallFunctionHook*)iterator->second)(caller, stack, result, function))
				{
					return false;
				}
			}
		}

		// Run the function in the engine as normal
		return true;
	}
}