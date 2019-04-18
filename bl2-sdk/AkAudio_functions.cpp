// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AkAudio.IAkEnvironmentalEffectProvider.GetEnvironmentalEffectsForLocation
// (Native, Public)
// Parameters:
// class UAkComponent*            GameObjComponent               (Parm, EditInline)
// struct FVector                 ListenerLocation               (Parm)
// struct FVector                 ObjectLocation                 (Parm)
// TArray<struct FEnvironmentalEffectInfo> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FEnvironmentalEffectInfo> UIAkEnvironmentalEffectProvider::GetEnvironmentalEffectsForLocation(class UAkComponent* GameObjComponent, const struct FVector& ListenerLocation, const struct FVector& ObjectLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.IAkEnvironmentalEffectProvider.GetEnvironmentalEffectsForLocation");

	UIAkEnvironmentalEffectProvider_GetEnvironmentalEffectsForLocation_Params params;
	params.GameObjComponent = GameObjComponent;
	params.ListenerLocation = ListenerLocation;
	params.ObjectLocation = ObjectLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.ISpecialOcclusionAccumulator.RemoveOcclusionProvider
// (Native, Public)
// Parameters:
// class AActor*                  Source                         (Parm)

void UISpecialOcclusionAccumulator::RemoveOcclusionProvider(class AActor* Source)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.ISpecialOcclusionAccumulator.RemoveOcclusionProvider");

	UISpecialOcclusionAccumulator_RemoveOcclusionProvider_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.ISpecialOcclusionAccumulator.SetOcclusionForProvider
// (Native, Public)
// Parameters:
// class AActor*                  Source                         (Parm)
// float                          Amount                         (Parm)

void UISpecialOcclusionAccumulator::SetOcclusionForProvider(class AActor* Source, float Amount)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.ISpecialOcclusionAccumulator.SetOcclusionForProvider");

	UISpecialOcclusionAccumulator_SetOcclusionForProvider_Params params;
	params.Source = Source;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.WwiseSoundGroup.RemoveOcclusionProvider
// (Native, Public)
// Parameters:
// class AActor*                  Source                         (Parm)

void AWwiseSoundGroup::RemoveOcclusionProvider(class AActor* Source)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundGroup.RemoveOcclusionProvider");

	AWwiseSoundGroup_RemoveOcclusionProvider_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.WwiseSoundGroup.SetOcclusionForProvider
// (Native, Public)
// Parameters:
// class AActor*                  Source                         (Parm)
// float                          Amount                         (Parm)

void AWwiseSoundGroup::SetOcclusionForProvider(class AActor* Source, float Amount)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundGroup.SetOcclusionForProvider");

	AWwiseSoundGroup_SetOcclusionForProvider_Params params;
	params.Source = Source;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.WwiseSoundGroup.GetOcclusionAmount
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWwiseSoundGroup::GetOcclusionAmount()
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundGroup.GetOcclusionAmount");

	AWwiseSoundGroup_GetOcclusionAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.WwiseSoundGroup.SetAkSwitchObject
// (Native, Public)
// Parameters:
// class UAkSwitch*               Switch                         (Parm)

void AWwiseSoundGroup::SetAkSwitchObject(class UAkSwitch* Switch)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundGroup.SetAkSwitchObject");

	AWwiseSoundGroup_SetAkSwitchObject_Params params;
	params.Switch = Switch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.WwiseSoundGroup.SetRTPCObjectValue
// (Native, Public)
// Parameters:
// class UAkRtpc*                 InRtpc                         (Parm)
// float                          TargetValue                    (Parm)

void AWwiseSoundGroup::SetRTPCObjectValue(class UAkRtpc* InRtpc, float TargetValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundGroup.SetRTPCObjectValue");

	AWwiseSoundGroup_SetRTPCObjectValue_Params params;
	params.InRtpc = InRtpc;
	params.TargetValue = TargetValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.WwiseSoundVolume.RemoveOcclusionProvider
// (Native, Public)
// Parameters:
// class AActor*                  Source                         (Parm)

void AWwiseSoundVolume::RemoveOcclusionProvider(class AActor* Source)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundVolume.RemoveOcclusionProvider");

	AWwiseSoundVolume_RemoveOcclusionProvider_Params params;
	params.Source = Source;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.WwiseSoundVolume.SetOcclusionForProvider
// (Native, Public)
// Parameters:
// class AActor*                  Source                         (Parm)
// float                          Amount                         (Parm)

void AWwiseSoundVolume::SetOcclusionForProvider(class AActor* Source, float Amount)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundVolume.SetOcclusionForProvider");

	AWwiseSoundVolume_SetOcclusionForProvider_Params params;
	params.Source = Source;
	params.Amount = Amount;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AkAudio.WwiseSoundVolume.GetOcclusionAmount
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AWwiseSoundVolume::GetOcclusionAmount()
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundVolume.GetOcclusionAmount");

	AWwiseSoundVolume_GetOcclusionAmount_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.WwiseSoundVolume.UpdateAkComponentPosition
// (Native, Public, HasOutparams)
// Parameters:
// TArray<struct FVector>         ListenerPositions              (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FRotator>        ListenerOrientations           (Const, Parm, OutParm, NeedCtorLink)

void AWwiseSoundVolume::UpdateAkComponentPosition(TArray<struct FVector>* ListenerPositions, TArray<struct FRotator>* ListenerOrientations)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundVolume.UpdateAkComponentPosition");

	AWwiseSoundVolume_UpdateAkComponentPosition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ListenerPositions != nullptr)
		*ListenerPositions = params.ListenerPositions;
	if (ListenerOrientations != nullptr)
		*ListenerOrientations = params.ListenerOrientations;
}


// Function AkAudio.WwiseSoundVolume.GetEnvironmentalEffectsForLocation
// (Native, Public)
// Parameters:
// class UAkComponent*            GameObjComponent               (Parm, EditInline)
// struct FVector                 ListenerLocation               (Parm)
// struct FVector                 ObjectLocation                 (Parm)
// TArray<struct FEnvironmentalEffectInfo> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FEnvironmentalEffectInfo> AWwiseSoundVolume::GetEnvironmentalEffectsForLocation(class UAkComponent* GameObjComponent, const struct FVector& ListenerLocation, const struct FVector& ObjectLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundVolume.GetEnvironmentalEffectsForLocation");

	AWwiseSoundVolume_GetEnvironmentalEffectsForLocation_Params params;
	params.GameObjComponent = GameObjComponent;
	params.ListenerLocation = ListenerLocation;
	params.ObjectLocation = ObjectLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function AkAudio.WwiseSoundVolume.CalculateFacePlanes
// (Native, Public)

void AWwiseSoundVolume::CalculateFacePlanes()
{
	static auto fn = (UFunction *)UObject::Find("Function", "AkAudio.WwiseSoundVolume.CalculateFacePlanes");

	AWwiseSoundVolume_CalculateFacePlanes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
