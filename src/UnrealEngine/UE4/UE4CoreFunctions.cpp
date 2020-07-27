#pragma once
#include "stdafx.h"
#include "UnrealEngine\Engine\UE4\UE4EngineFStructs.h"

//---------------------------------------------------------------------------
// Unreal Engine 4 Functions
//---------------------------------------------------------------------------

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

// Function Core.Object.GetEngineVersion
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalparams, Const, Public, Private, Protected, Delegate, NetServer, HasOutparams, HasDefaults, NetClient, DLLImport, K2Call, K2Override, K2Pure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)
FString UKismetSystemLibrary::GetEngineVersion()
{
	
	static auto fn = (UFunction*)UObject::Find("Function", "/Script/Engine.KismetSystemLibrary.GetEngineVersion");
	UKismetSystemLibrary_GetEngineVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();

	UnrealSDK::pProcessEvent(defaultObj, fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

#ifdef _MSC_VER
#pragma pack ( pop )
#endif

#endif
