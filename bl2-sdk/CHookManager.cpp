#include "stdafx.h"
#include "CHookManager.h"

void CHookManager::AddVirtualHook(const std::string& funcName, const tFuncNameHookPair& hookPair)
{
	tiVirtualHooks iHooks = VirtualHooks.find(funcName);
	if (iHooks != VirtualHooks.end())
	{
		// Otherwise it's fine, add it into the existing table
		iHooks->second.insert(hookPair);
	}
	else
	{
		// There are no other virtual hooks so we need to create the table for it
		tHookMap newMap;
		newMap.insert(hookPair);
		VirtualHooks.emplace(funcName, newMap);
	}

	//Logging::LogF("[CHookManager] (%s) Hook \"%s\" added as virtual hook for \"%s\"\n", this->DebugName.c_str(), hookPair.first.c_str(), funcName.c_str());
}

void CHookManager::AddStaticHook(UFunction* function, const tFuncNameHookPair& hookPair)
{
	tiStaticHooks iHooks = StaticHooks.find(function);
	if (iHooks != StaticHooks.end())
	{
		// Otherwise it's fine, add it into the existing table
		iHooks->second.insert(hookPair);
	}
	else
	{
		// There are no other hooks so we need to create the table for it
		tHookMap newMap;
		newMap.insert(hookPair);
		StaticHooks.emplace(function, newMap);
	}

	//Logging::LogF("[CHookManager] (%s) Hook \"%s\" added as static hook for \"%s\"\n", this->DebugName.c_str(), hookPair.first.c_str(), function->GetFullName().c_str());
}

bool CHookManager::RemoveFromTable(tHookMap& hookTable, const std::string& funcName, const std::string& hookName)
{
	// Remove it and ensure that it actually got removed
	int removed = hookTable.erase(hookName);

	if (removed == 0)
	{
		//Logging::LogF("[CHookManager] (%s) Failed to remove hook \"%s\" for function \"%s\"\n", this->DebugName.c_str(), hookName.c_str(), funcName.c_str());
		return false;
	}
	else
	{
		//Logging::LogF("[CHookManager] (%s) Hook \"%s\" removed for function \"%s\" successfully\n", this->DebugName.c_str(), hookName.c_str(), funcName.c_str());
		return true;
	}
}

void CHookManager::Register(const std::string& funcName, const std::string& hookName, void* funcHook)
{
	char funcNameChar[255];
	strcpy(funcNameChar, funcName.c_str());

	// Create pair to insert
	tFuncNameHookPair hookPair = std::make_pair(hookName, funcHook);

	// Find func
	UFunction* function = UObject::FindObject<UFunction>(funcNameChar);
	if (function == nullptr)
	{
		// The function was not found, so we need to create a virtual hook for it
		AddVirtualHook(funcName, hookPair);
	}
	else
	{
		// The function WAS found, so we can just hook it straight away
		AddStaticHook(function, hookPair);
	}
}

bool CHookManager::Remove(const std::string& funcName, const std::string& hookName)
{
	char funcNameChar[255];
	strcpy(funcNameChar, funcName.c_str());

	UFunction* function = UObject::FindObject<UFunction>(funcNameChar);
	if (function == nullptr)
	{
		// Function wasn't found, so virtual hook removal time!
		return RemoveVirtualHook(funcName, hookName);
	}
	else
	{
		// We did find it, so remove the static hook
		// TODO: WARNING. MAJOR PROBLEM HERE.
		// If a virtual hook has been created because the UFunction didn't exist,
		// but then the function is created but NOT CALLED, then the hook system
		// will keep the virtual hook, and we won't delete it here.
		return RemoveStaticHook(function, hookName);
	}
}

bool CHookManager::RemoveVirtualHook(const std::string& funcName, const std::string& hookName)
{
	tiVirtualHooks iHooks = VirtualHooks.find(funcName);
	if (iHooks == VirtualHooks.end())
	{
		//Logging::LogF("[CHookManager] (%s) ERROR: Failed to remove virtual hook \"%s\" for \"%s\"\n", this->DebugName.c_str(), hookName.c_str(), funcName);
		return false;
	}

	return RemoveFromTable(iHooks->second, funcName, hookName);
}

bool CHookManager::RemoveStaticHook(UFunction* function, const std::string& hookName)
{
	// Since we are getting a UFunction pointer, we don't need to check virtual hooks
	tiStaticHooks iHooks = StaticHooks.find(function);
	if (iHooks == StaticHooks.end())
	{
		//Logging::LogF("[CHookManager] (%s) ERROR: Failed to remove static hook \"%s\" for \"%s\"\n", this->DebugName.c_str(), hookName.c_str(), function->GetFullName().c_str());
		return false;
	}

	return RemoveFromTable(iHooks->second, function->GetFullName(), hookName);
}

void CHookManager::ResolveVirtualHooks(UFunction* function)
{
	// Resolve any virtual hooks into static hooks
	if (VirtualHooks.size() > 0)
	{
		//std::string funcName = GetFuncName(pFunction); TODO: Use this instead of the ugly other thing
		std::string funcName = function->GetFullName();

		tiVirtualHooks iVHooks = VirtualHooks.find(funcName);
		if (iVHooks != VirtualHooks.end())
		{
			// Insert this map into the static hooks map
			int size = iVHooks->second.size();
			StaticHooks.emplace(function, iVHooks->second);
			VirtualHooks.erase(iVHooks);
			//Logging::LogF("[CHookManager] (%s) Function pointer found for \"%s\", added map with %i elements to static hooks map\n", this->DebugName.c_str(), funcName.c_str(), size);
		}
	}
}
