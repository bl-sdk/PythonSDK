#include "stdafx.h"
#include "GameHooks.h"
#include "Logging.h"
#include "Exports.h"

namespace GameHooks
{
	CEngineHookManager* EngineHookManager;
	CScriptHookManager* UnrealScriptHookManager;

	void Initialize()
	{
		EngineHookManager = new CEngineHookManager("EngineHooks");
		UnrealScriptHookManager = new CScriptHookManager("UnrealScriptHooks");
	}

	void Cleanup()
	{
		delete EngineHookManager;
		EngineHookManager = nullptr;

		delete UnrealScriptHookManager;
		UnrealScriptHookManager = nullptr;
	}

	bool ProcessEngineHooks(UObject* caller, UFunction* function, void* parms, void* result)
	{
		// Resolve any virtual hooks into static hooks
		EngineHookManager->ResolveVirtualHooks(function);

		// Call any static hooks that may exist
		CEngineHookManager::tiStaticHooks iHooks = EngineHookManager->StaticHooks.find(function);
		if (iHooks != EngineHookManager->StaticHooks.end())
		{
			CEngineHookManager::tHookMap hooks = iHooks->second;

			for (CEngineHookManager::tiHookMap iterator = hooks.begin(); iterator != hooks.end(); iterator++)
			{
				// maps to std::string, void*, but we want to call a tProcessEventHook* instead
				if (!iterator->second(caller, function, parms, result))
				{
					// As soon as one hook doesn't want it to fall through, we'll stop
					return false;
				}
			}
		}

		// Run the function in the engine as normal
		return true;
	}

	bool ProcessUnrealScriptHooks(UObject* caller, FFrame& stack, void* const result, UFunction* function)
	{
		// Resolve any virtual hooks into static hooks
		UnrealScriptHookManager->ResolveVirtualHooks(function);

		// Call any static hooks that may exist
		CScriptHookManager::tiStaticHooks iHooks = UnrealScriptHookManager->StaticHooks.find(function);
		if (iHooks != UnrealScriptHookManager->StaticHooks.end())
		{
			CScriptHookManager::tHookMap hooks = iHooks->second;

			for (CScriptHookManager::tiHookMap iterator = hooks.begin(); iterator != hooks.end(); iterator++)
			{
				// maps to std::string, void*, but we want to call a tCallFunctionHook* instead
				if (!iterator->second(caller, stack, result, function))
				{
					return false;
				}
			}
		}

		// Run the function in the engine as normal
		return true;
	}
}