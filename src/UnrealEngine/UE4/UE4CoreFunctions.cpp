#pragma once

#include "stdafx.h"
#include "UnrealEngine\Engine\UE4\UE4EngineFStructs.h"


#ifdef UE4

class UObject* UObject::FindObject(const class FString& ObjectName, class UClass* ObjectClass) {
	static UObject* fn = nullptr;
	std::string obj;
	std::wstring x;
	x.append(Util::Widen(ObjectClass->GetName()));
	x.append(L" ");

	for (size_t i = 0; i < ObjectName.Count; ++i) {
		auto z = (const wchar_t)ObjectName.Data[i];
		x.push_back(z);
	}

	std::string objName = Util::Narrow(x);

	return FindObject(objName);
}


#endif