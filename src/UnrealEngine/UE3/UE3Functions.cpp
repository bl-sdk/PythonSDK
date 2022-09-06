#include <stdafx.h>

#ifdef UE3

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

// Function Core.Object.SaveConfig
struct UObject_SaveConfig_Params
{
};

// Function Core.Object.SaveConfig
// (Final, Native, Public)

void UObject::SaveConfig()
{
	static auto fn = (UFunction*)UObject::Find("Function", "Core.Object.SaveConfig");

	UObject_SaveConfig_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UnrealSDK::ProcessEvent(this, fn, &params);

	fn->FunctionFlags = flags;
}

struct UObject_FindObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.FindObject
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalparams, Const, Public, Private, Protected, Delegate, NetServer, HasOutparams, HasDefaults, NetClient, DLLImport, K2Call, K2Override, K2Pure)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::FindObject(const struct FString& ObjectName, class UClass* ObjectClass)
{
	static UFunction* fn = NULL;
	if (!fn)
		for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjects()->Get(i);
			if (!strcmp(Object->GetFullName().c_str(), "Function Core.Object.FindObject"))
				fn = (UFunction*)Object;
		}

	if (!fn)
		return nullptr;

	UObject_FindObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;
	params.ReturnValue = nullptr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	UnrealSDK::ProcessEvent(defaultObj, fn, &params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct UObject_DynamicLoadObject_Params
{
	struct FString                                     ObjectName;                                               // (Parm, NeedCtorLink)
	class UClass*                                      ObjectClass;                                              // (Parm)
	unsigned long                                      MayFail : 1;                                                  // (OptionalParm, Parm)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.DynamicLoadObject
// (Final, Native, Static, HasOptionalparams, Public)
// Parameters:
// struct FString                 ObjectName                     (Parm, NeedCtorLink)
// class UClass*                  ObjectClass                    (Parm)
// bool                           MayFail                        (OptionalParm, Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UObject::DynamicLoadObject(const struct FString& ObjectName, class UClass* ObjectClass, bool MayFail)
{
	static auto fn = (UFunction*)UObject::Find("Function", "Core.Object.DynamicLoadObject");

	UObject_DynamicLoadObject_Params params;
	params.ObjectName = ObjectName;
	params.ObjectClass = ObjectClass;
	params.MayFail = MayFail;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	UnrealSDK::ProcessEvent(defaultObj, fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct UObject_GetBuildChangelistNumber_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetBuildChangelistNumber
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalparams, Const, Public, Private, Protected, Delegate, NetServer, HasOutparams, HasDefaults, NetClient, DLLImport, K2Call, K2Override, K2Pure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UObject::GetBuildChangelistNumber()
{
	static auto fn = (UFunction*)UObject::Find("Function", "Core.Object.GetBuildChangelistNumber");

	UObject_GetBuildChangelistNumber_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	UnrealSDK::ProcessEvent(defaultObj, fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

struct UObject_GetEngineVersion_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Core.Object.GetEngineVersion
// (Final, Defined, Iterator, Latent, PreOperator, Singular, Net, NetReliable, Simulated, Exec, Native, Event, Operator, Static, HasOptionalparams, Const, Public, Private, Protected, Delegate, NetServer, HasOutparams, HasDefaults, NetClient, DLLImport, K2Call, K2Override, K2Pure)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)
int UObject::GetEngineVersion()
{
	static auto fn = (UFunction*)UObject::Find("Function", "Core.Object.GetEngineVersion");
	UObject_GetEngineVersion_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	UnrealSDK::ProcessEvent(defaultObj, fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

#ifdef _MSC_VER
#pragma pack(pop)
#endif

#endif
