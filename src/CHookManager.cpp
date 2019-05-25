#pragma once
#include "stdafx.h"
#include "CHookManager.h"

void CHookManager::Register(const std::string& funcName, const std::string& hookName, std::function<bool(UObject*, UFunction*, FStruct*)> funcHook)
{
	char funcNameChar[255];
	strcpy(funcNameChar, funcName.c_str());

	// Create pair to insert
	tHookPair hookPair = std::make_pair(hookName, funcHook);

	tiHooks iHooks = Hooks.find(funcName);
	if (iHooks != Hooks.end())
		iHooks->second.insert(hookPair);
	else
	{
		tHookMap newMap;
		newMap.insert(hookPair);
		Hooks.emplace(funcName, newMap);
	}

	Logging::LogD("[HookManager] (%s) Hook \"%s\" added as hook for \"%s\"\n", this->DebugName.c_str(), hookPair.first.c_str(), funcName.c_str());
}

bool CHookManager::Remove(const std::string& funcName, const std::string& hookName)
{
	tiHooks iHooks = Hooks.find(funcName);
	if (iHooks == Hooks.end() || iHooks->second.find(hookName) == iHooks->second.end())
	{
		Logging::LogF("[HookManager] (%s) ERROR: Failed to remove hook \"%s\" for \"%s\"\n", this->DebugName.c_str(), hookName.c_str(), funcName.c_str());
		return false;
	}

	iHooks->second.erase(hookName);
	return true;
}

bool CHookManager::ProcessHooks(const std::string& funcName, const UObject *caller, const UFunction *func, const FStruct *params) {
	tiHooks iHooks = Hooks.find(funcName);

	if (iHooks != Hooks.end())
	{
		tHookMap hooks = iHooks->second;

		for (tiHookMap iterator = hooks.begin(); iterator != hooks.end(); iterator++)
			if (!iterator->second((UObject *)caller, (UFunction *)func, (FStruct *)params))
				return false;
	}

	iHooks = Hooks.find(((UObject *)caller)->GetObjectName() + "." + ((UFunction *)func)->GetName());

	if (iHooks != Hooks.end())
	{
		tHookMap hooks = iHooks->second;

		for (tiHookMap iterator = hooks.begin(); iterator != hooks.end(); iterator++)
			if (!iterator->second((UObject *)caller, (UFunction *)func, (FStruct *)params))
				return false;
	}
	return true;
}


bool CHookManager::HasHook(UObject *caller, UFunction *func) {
	tiHooks iHooks = Hooks.find(func->GetObjectName());
	if (iHooks != Hooks.end() && iHooks->second.size() > 0)
		return true;
	iHooks = Hooks.find(caller->GetObjectName() + "." + func->GetName());
	return (iHooks != Hooks.end() && iHooks->second.size() > 0);
}

bool CHookManager::ProcessHooks(UObject* pCaller, FFrame& Stack, void* const Result, UFunction* Function) {
	tiHooks iHooks = Hooks.find(Function->GetObjectName());

	// Even though we check in the next function, check here to avoid messing with the stack when we don't need to
	if (iHooks != Hooks.end() || Hooks.find(pCaller->GetObjectName() + "." + Function->GetName()) != Hooks.end())
	{
		UProperty* ReturnParm = nullptr;
		char* Frame = (char *)calloc(1, Function->ParamsSize);
		for (UProperty* Property = (UProperty *)Function->Children; Stack.Code[0] != 0x16; Property = (UProperty*)Property->Next) {
			const bool bIsReturnParam = ((Property->PropertyFlags & 0x400) != 0);
			if (bIsReturnParam) {
				ReturnParm = Property;
				continue;
			}
			BL2SDK::pFrameStep(&Stack, Stack.Object, Frame + Property->Offset_Internal);
		}
		bool ret = ProcessHooks(Function->GetObjectName(), pCaller, Function, &FStruct{ Function, (void *)Frame });
		//if (!ret) {
		//	if (ReturnParm)
		//	{
		//		memcpy(Result, Frame + ReturnParm->Offset_Internal, ReturnParm->ElementSize);
		//		Stack.Outparams = (FOutParmRec *)malloc(sizeof(FOutParmRec));
		//		Stack.Outparams->Property = ReturnParm;
		//		Stack.Outparams->PropAddr = (unsigned char *)Result;
		//	}
		//	FOutParmRec** LastOut = &Stack.Outparams;
		//	for (UProperty* Property = (UProperty *)Function->Children; Property; Property = (UProperty*)Property->Next) {
		//		const bool bIsReturnParam = ((Property->PropertyFlags & 0x400) != 0);
		//		if (bIsReturnParam)
		//			continue;
		//		if (Property->PropertyFlags & 0x100) {
		//			FOutParmRec *NewOutParm = (FOutParmRec *)malloc(sizeof(FOutParmRec));
		//			NewOutParm->Property = Property;
		//			NewOutParm->PropAddr = (unsigned char *)malloc(sizeof(Property->ElementSize));
		//			memcpy(NewOutParm->PropAddr, Frame + Property->Offset_Internal, Property->ElementSize);
		//			if (*LastOut) {
		//				(*LastOut)->NextOutParm = NewOutParm;
		//				LastOut = &(*LastOut)->NextOutParm;
		//			}
		//			else {
		//				*LastOut = NewOutParm;
		//			}
		//		}
		//	}
		//}
		//LogOutParams(Stack);
		memset(Frame, 0, Function->ParamsSize);
		free(Frame);
		return ret;
	}
	return true;
}