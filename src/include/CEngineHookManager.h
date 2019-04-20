#pragma once
#ifndef CENGINEHOOKMANAGER_H
#define CENGINEHOOKMANAGER_H

#include <string>
#include <map>
#include <functional>

class CEngineHookManager
{
public:
	typedef std::map<std::string, std::function<bool(UObject*, UFunction*, void*, void*)>> tHookMap;
	typedef std::pair<std::string, std::function<bool(UObject*, UFunction*, void*, void*)>> tFuncNameHookPair;
	typedef tHookMap::iterator tiHookMap;
	typedef std::map<std::string, tHookMap>::iterator tiVirtualHooks;
	typedef std::map<UFunction*, tHookMap>::iterator tiStaticHooks;

private:
	bool RemoveFromTable(tHookMap& hookTable, const std::string& funcName, const std::string& hookName);

public:
	std::map<std::string, tHookMap> VirtualHooks;
	std::map<UFunction*, tHookMap> StaticHooks;
	std::string DebugName;

	CEngineHookManager() : DebugName("Unknown") {}
	CEngineHookManager(std::string debugName) : DebugName(debugName) {}

	void Register(const std::string& funcName, const std::string& hookName, std::function<bool(UObject*, UFunction*, void*, void*)> funcHook);
	bool Remove(const std::string& funcName, const std::string& hookName);
	void AddVirtualHook(const std::string& funcName, const tFuncNameHookPair& hookPair);
	void AddStaticHook(UFunction* function, const tFuncNameHookPair& hookPair);
	bool RemoveStaticHook(UFunction* function, const std::string& hookName);
	bool RemoveVirtualHook(const std::string& funcName, const std::string& hookName);
	void ResolveVirtualHooks(UFunction* function);
};

#endif