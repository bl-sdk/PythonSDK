#pragma once
#ifndef CHOOKMANAGER_H
#define CHOOKMANAGER_H

#pragma once
#include "stdafx.h"
#include <string>
#include <map>

class CHookManager
{
public:
	typedef std::map<std::string, void*> tHookMap;
	typedef std::pair<std::string, void*> tFuncNameHookPair;
	typedef tHookMap::iterator tiHookMap;
	typedef std::map<std::string, tHookMap>::iterator tiVirtualHooks;
	typedef std::map<UFunction*, tHookMap>::iterator tiStaticHooks;

private:
	bool RemoveFromTable(tHookMap& hookTable, const std::string& funcName, const std::string& hookName);

public:
	std::map<std::string, tHookMap> VirtualHooks;
	std::map<UFunction*, tHookMap> StaticHooks;
	std::string DebugName;

	CHookManager() : DebugName("Unknown") {}
	CHookManager(std::string debugName) : DebugName(debugName) {}

	void Register(const std::string& funcName, const std::string& hookName, void* funcHook);
	bool Remove(const std::string& funcName, const std::string& hookName);
	void AddVirtualHook(const std::string& funcName, const tFuncNameHookPair& hookPair);
	void AddStaticHook(UFunction* function, const tFuncNameHookPair& hookPair);
	bool RemoveStaticHook(UFunction* function, const std::string& hookName);
	bool RemoveVirtualHook(const std::string& funcName, const std::string& hookName);
	void ResolveVirtualHooks(UFunction* function);
};

#endif