#pragma once
#ifndef C_HOOK_MANAGER_H
#define C_HOOK_MANAGER_H

#include <string>
#include <map>
#include <functional>
#include <utility>
#include <stdafx.h>

class CHookManager
{
public:
	typedef std::map<std::string, std::function<bool(UObject*, UFunction*, FStruct*)>> tHookMap;
	typedef std::pair<std::string, std::function<bool(UObject*, UFunction*, FStruct*)>> tHookPair;

public:
	std::map<std::string, tHookMap> hooks;
	std::string debugName;

	CHookManager() : debugName("Unknown")
	{
	}

	CHookManager(std::string DebugName) : debugName(std::move(DebugName))
	{
	}

	void Register(const std::string& FuncName, const std::string& HookName,
	              const std::function<bool(UObject*, UFunction*, FStruct*)>
	              & FuncHook);
	bool Remove(const std::string& FuncName, const std::string& HookName);
	bool ProcessHooks(const std::string& FuncName, const UObject* Caller, const UFunction* Func, const FStruct* Params);
	bool ProcessHooks(UObject* Caller, FFrame& Stack, void* Result, UFunction* Function);
	bool HasHook(UObject* Caller, UFunction* Func);
};

#endif
