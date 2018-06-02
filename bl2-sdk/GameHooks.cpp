#include "stdafx.h"
#include "GameHooks.h"
#include "Logging.h"
#include "Exports.h"

namespace GameHooks
{
	CHookManager* EngineHookManager;
	CHookManager* UnrealScriptHookManager;

	void Initialize()
	{
		EngineHookManager = new CHookManager("EngineHooks");
		UnrealScriptHookManager = new CHookManager("UnrealScriptHooks");
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

	bool ProcessUnrealScriptHooks(UObject* caller, FFrame& stack, void* const result, UFunction* function)
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

	FFI_EXPORT void LUAFUNC_AddStaticEngineHook(UFunction* function, tProcessEventHook* funcHook)
	{
		CHookManager::tFuncNameHookPair hookPair = std::make_pair("LuaHook", funcHook);
		EngineHookManager->AddStaticHook(function, hookPair);
	}

	FFI_EXPORT void LUAFUNC_RemoveStaticEngineHook(UFunction* function)
	{
		EngineHookManager->RemoveStaticHook(function, "LuaHook");
	}

	FFI_EXPORT void LUAFUNC_AddStaticScriptHook(UFunction* function, tCallFunctionHook* funcHook)
	{
		CHookManager::tFuncNameHookPair hookPair = std::make_pair("LuaHook", funcHook);
		UnrealScriptHookManager->AddStaticHook(function, hookPair);
	}

	FFI_EXPORT void LUAFUNC_RemoveStaticScriptHook(UFunction* function)
	{
		UnrealScriptHookManager->RemoveStaticHook(function, "LuaHook");
	}
}