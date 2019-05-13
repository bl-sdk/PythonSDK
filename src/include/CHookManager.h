#pragma once
#ifndef HOOKMANAGER_H
#define HOOKMANAGER_H

#include <string>
#include <map>
#include <functional>
#include <stdafx.h>

class CHookManager
{
public:
	typedef std::map<std::string, std::function<bool(UObject*, UFunction*, FStruct*)>> tHookMap;
	typedef std::pair<std::string, std::function<bool(UObject*, UFunction*, FStruct*)>> tHookPair;
	typedef tHookMap::iterator tiHookMap;
	typedef std::map<std::string, tHookMap>::iterator tiHooks;

public:
	std::map<std::string, tHookMap> Hooks;
	std::string DebugName;

	CHookManager() : DebugName("Unknown") {}
	CHookManager(std::string debugName) : DebugName(debugName) {}

	void Register(const std::string& funcName, const std::string& hookName, std::function<bool(UObject*, UFunction*, FStruct*)> funcHook);
	bool Remove(const std::string& funcName, const std::string& hookName);
	bool ProcessHooks(const std::string& funcName, const UObject *caller, const UFunction *func, const FStruct *params);
	bool ProcessHooks(UObject* pCaller, FFrame& Stack, void* const Result, UFunction* Function);
	bool HasHook(const std::string& funcName);
};

#endif