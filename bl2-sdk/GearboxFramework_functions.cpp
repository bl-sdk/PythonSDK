// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GearboxFramework.AIDebugCamera.ToggleAITree
// (Defined, Public)

void UAIDebugCamera::ToggleAITree()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleAITree");

	UAIDebugCamera_ToggleAITree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleTargetViewCones
// (Defined, Public)

void UAIDebugCamera::ToggleTargetViewCones()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleTargetViewCones");

	UAIDebugCamera_ToggleTargetViewCones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleAwarenessZones
// (Defined, Public)

void UAIDebugCamera::ToggleAwarenessZones()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleAwarenessZones");

	UAIDebugCamera_ToggleAwarenessZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleRuleEngineLoadBalance
// (Defined, Public)

void UAIDebugCamera::ToggleRuleEngineLoadBalance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleRuleEngineLoadBalance");

	UAIDebugCamera_ToggleRuleEngineLoadBalance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleCombat
// (Defined, Public)

void UAIDebugCamera::ToggleCombat()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleCombat");

	UAIDebugCamera_ToggleCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleShowTimers
// (Defined, Public)

void UAIDebugCamera::ToggleShowTimers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleShowTimers");

	UAIDebugCamera_ToggleShowTimers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleResources
// (Defined, Public)

void UAIDebugCamera::ToggleResources()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleResources");

	UAIDebugCamera_ToggleResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleInactiveRules
// (Defined, Public)

void UAIDebugCamera::ToggleInactiveRules()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleInactiveRules");

	UAIDebugCamera_ToggleInactiveRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleRules
// (Defined, Public)

void UAIDebugCamera::ToggleRules()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleRules");

	UAIDebugCamera_ToggleRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.ToggleFlags
// (Defined, Public)

void UAIDebugCamera::ToggleFlags()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.ToggleFlags");

	UAIDebugCamera_ToggleFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.GetTracker
// (Native, Public)
// Parameters:
// class UAITracker*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UAITracker* UAIDebugCamera::GetTracker()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.GetTracker");

	UAIDebugCamera_GetTracker_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIDebugCamera.SetMind
// (Native, Public)
// Parameters:
// class AGearboxMind*            NewMind                        (Parm)

void UAIDebugCamera::SetMind(class AGearboxMind* NewMind)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.SetMind");

	UAIDebugCamera_SetMind_Params params;
	params.NewMind = NewMind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.InitDummies
// (Native, Public)
// Parameters:
// int                            NewNumDummies                  (Parm)

void UAIDebugCamera::InitDummies(int NewNumDummies)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.InitDummies");

	UAIDebugCamera_InitDummies_Params params;
	params.NewNumDummies = NewNumDummies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.WantsToDoCameraInspection
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIDebugCamera::WantsToDoCameraInspection()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.WantsToDoCameraInspection");

	UAIDebugCamera_WantsToDoCameraInspection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIDebugCamera.SetCurrentInspectedTarget
// (Native, Public)
// Parameters:
// struct FName                   NewName                        (Parm)

void UAIDebugCamera::SetCurrentInspectedTarget(const struct FName& NewName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.SetCurrentInspectedTarget");

	UAIDebugCamera_SetCurrentInspectedTarget_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.CompareRuleSetAndAdjustRuleIdx
// (Native, Public)
// Parameters:
// class USnapshotRecord*         OldSnapshot                    (Parm)
// class USnapshotRecord*         NewSnapshot                    (Parm)

void UAIDebugCamera::CompareRuleSetAndAdjustRuleIdx(class USnapshotRecord* OldSnapshot, class USnapshotRecord* NewSnapshot)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.CompareRuleSetAndAdjustRuleIdx");

	UAIDebugCamera_CompareRuleSetAndAdjustRuleIdx_Params params;
	params.OldSnapshot = OldSnapshot;
	params.NewSnapshot = NewSnapshot;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.SetRuleEngine
// (Native, Public)
// Parameters:
// class URuleEngine*             NewRuleEngine                  (Parm)

void UAIDebugCamera::SetRuleEngine(class URuleEngine* NewRuleEngine)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.SetRuleEngine");

	UAIDebugCamera_SetRuleEngine_Params params;
	params.NewRuleEngine = NewRuleEngine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.SetPrevSnapshotRule
// (Native, Public)

void UAIDebugCamera::SetPrevSnapshotRule()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.SetPrevSnapshotRule");

	UAIDebugCamera_SetPrevSnapshotRule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.SetNextSnapshotRule
// (Native, Public)

void UAIDebugCamera::SetNextSnapshotRule()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.SetNextSnapshotRule");

	UAIDebugCamera_SetNextSnapshotRule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.SetPrevSnapshot
// (Native, Public)

void UAIDebugCamera::SetPrevSnapshot()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.SetPrevSnapshot");

	UAIDebugCamera_SetPrevSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.SetNextSnapshot
// (Native, Public)

void UAIDebugCamera::SetNextSnapshot()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.SetNextSnapshot");

	UAIDebugCamera_SetNextSnapshot_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.NotifyGameUnPaused
// (Native, Public)

void UAIDebugCamera::NotifyGameUnPaused()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.NotifyGameUnPaused");

	UAIDebugCamera_NotifyGameUnPaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.NotifyGamePaused
// (Native, Public)

void UAIDebugCamera::NotifyGamePaused()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.NotifyGamePaused");

	UAIDebugCamera_NotifyGamePaused_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDebugCamera.Display
// (Native, Public)
// Parameters:
// class AHUD*                    HUD                            (Parm)

void UAIDebugCamera::Display(class AHUD* HUD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDebugCamera.Display");

	UAIDebugCamera_Display_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveInterface.SetReplicatedSMData
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// struct FSpecialMoveData        NewSMData                      (Parm, OutParm)

void USpecialMoveInterface::SetReplicatedSMData(struct FSpecialMoveData* NewSMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.SetReplicatedSMData");

	USpecialMoveInterface_SetReplicatedSMData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSMData != nullptr)
		*NewSMData = params.NewSMData;
}


// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_StopAny
// (Net, NetReliable, Event, Public, NetServer)

void USpecialMoveInterface::ServerSpecialMove_StopAny()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.ServerSpecialMove_StopAny");

	USpecialMoveInterface_ServerSpecialMove_StopAny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Stop
// (Net, NetReliable, Event, Public, NetServer)
// Parameters:
// class USpecialMoveDefinition*  OldSMD                         (Parm)

void USpecialMoveInterface::ServerSpecialMove_Stop(class USpecialMoveDefinition* OldSMD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Stop");

	USpecialMoveInterface_ServerSpecialMove_Stop_Params params;
	params.OldSMD = OldSMD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Queue
// (Net, NetReliable, Event, HasOptionalParms, Public, NetServer)
// Parameters:
// class USpecialMoveDefinition*  NewSMD                         (Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          Duration                       (OptionalParm, Parm)
// struct FName                   CallbackName                   (OptionalParm, Parm)
// class UObject*                 CallbackObject                 (OptionalParm, Parm)
// class UObject*                 Data                           (OptionalParm, Parm)

void USpecialMoveInterface::ServerSpecialMove_Queue(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Queue");

	USpecialMoveInterface_ServerSpecialMove_Queue_Params params;
	params.NewSMD = NewSMD;
	params.PlayRateScale = PlayRateScale;
	params.Duration = Duration;
	params.CallbackName = CallbackName;
	params.CallbackObject = CallbackObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Play
// (Net, NetReliable, Event, HasOptionalParms, Public, NetServer)
// Parameters:
// class USpecialMoveDefinition*  NewSMD                         (Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          Duration                       (OptionalParm, Parm)
// struct FName                   CallbackName                   (OptionalParm, Parm)
// class UObject*                 CallbackObject                 (OptionalParm, Parm)
// class UObject*                 Data                           (OptionalParm, Parm)

void USpecialMoveInterface::ServerSpecialMove_Play(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.ServerSpecialMove_Play");

	USpecialMoveInterface_ServerSpecialMove_Play_Params params;
	params.NewSMD = NewSMD;
	params.PlayRateScale = PlayRateScale;
	params.Duration = Duration;
	params.CallbackName = CallbackName;
	params.CallbackObject = CallbackObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionRotationMode
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USpecialMoveInterface::GetDefaultRootMotionRotationMode()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionRotationMode");

	USpecialMoveInterface_GetDefaultRootMotionRotationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionMode
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USpecialMoveInterface::GetDefaultRootMotionMode()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.GetDefaultRootMotionMode");

	USpecialMoveInterface_GetDefaultRootMotionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveInterface.GetSkelMesh
// (Simulated, Native, Public)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class USkeletalMeshComponent* USpecialMoveInterface::GetSkelMesh()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.GetSkelMesh");

	USpecialMoveInterface_GetSkelMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveInterface.GetSMComponent
// (Simulated, Native, Public)
// Parameters:
// class USpecialMoveComponent*   ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class USpecialMoveComponent* USpecialMoveInterface::GetSMComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.GetSMComponent");

	USpecialMoveInterface_GetSMComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveInterface.GetActor
// (Simulated, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* USpecialMoveInterface::GetActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveInterface.GetActor");

	USpecialMoveInterface_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.IsPlaying
// (Native, Public)
// Parameters:
// class UGearboxAnimDefinition*  AnimSMD                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAnimNodeSpecialMoveBlend::IsPlaying(class UGearboxAnimDefinition* AnimSMD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.IsPlaying");

	UAnimNodeSpecialMoveBlend_IsPlaying_Params params;
	params.AnimSMD = AnimSMD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.SetRootMotion
// (Native, Public)
// Parameters:
// class URootMotionDefinition*   RMDef                          (Parm)

void UAnimNodeSpecialMoveBlend::SetRootMotion(class URootMotionDefinition* RMDef)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.SetRootMotion");

	UAnimNodeSpecialMoveBlend_SetRootMotion_Params params;
	params.RMDef = RMDef;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimDef
// (Native, Public)
// Parameters:
// class UGearboxAnimDefinition*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxAnimDefinition* UAnimNodeSpecialMoveBlend::GetCurrentAnimDef()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimDef");

	UAnimNodeSpecialMoveBlend_GetCurrentAnimDef_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimName
// (Native, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UAnimNodeSpecialMoveBlend::GetCurrentAnimName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.GetCurrentAnimName");

	UAnimNodeSpecialMoveBlend_GetCurrentAnimName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.Finish
// (Native, Public)
// Parameters:
// bool                           bInterrupted                   (Parm)

void UAnimNodeSpecialMoveBlend::Finish(bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.Finish");

	UAnimNodeSpecialMoveBlend_Finish_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.Stop
// (Native, Public)
// Parameters:
// bool                           bInterrupted                   (Parm)

void UAnimNodeSpecialMoveBlend::Stop(bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.Stop");

	UAnimNodeSpecialMoveBlend_Stop_Params params;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.PlayData
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FSpecialMoveData        SMData                         (Parm, OutParm)
// struct FName                   AnimNameOverride               (OptionalParm, Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          BlendInOverride                (OptionalParm, Parm)
// float                          BlendOutOverride               (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAnimNodeSpecialMoveBlend::PlayData(const struct FName& AnimNameOverride, float PlayRateScale, float BlendInOverride, float BlendOutOverride, struct FSpecialMoveData* SMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.PlayData");

	UAnimNodeSpecialMoveBlend_PlayData_Params params;
	params.AnimNameOverride = AnimNameOverride;
	params.PlayRateScale = PlayRateScale;
	params.BlendInOverride = BlendInOverride;
	params.BlendOutOverride = BlendOutOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SMData != nullptr)
		*SMData = params.SMData;

	return params.ReturnValue;
}


// Function GearboxFramework.AnimNodeSpecialMoveBlend.Play
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGearboxAnimDefinition*  CustomAnimSMD                  (Parm)
// struct FName                   AnimNameOverride               (OptionalParm, Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          BlendInOverride                (OptionalParm, Parm)
// float                          BlendOutOverride               (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAnimNodeSpecialMoveBlend::Play(class UGearboxAnimDefinition* CustomAnimSMD, const struct FName& AnimNameOverride, float PlayRateScale, float BlendInOverride, float BlendOutOverride)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AnimNodeSpecialMoveBlend.Play");

	UAnimNodeSpecialMoveBlend_Play_Params params;
	params.CustomAnimSMD = CustomAnimSMD;
	params.AnimNameOverride = AnimNameOverride;
	params.PlayRateScale = PlayRateScale;
	params.BlendInOverride = BlendInOverride;
	params.BlendOutOverride = BlendOutOverride;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AttributeExpressionEvaluator.Evaluate
// (Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAttributeExpressionEvaluator::Evaluate(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AttributeExpressionEvaluator.Evaluate");

	UAttributeExpressionEvaluator_Evaluate_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Behavior_CallFunction.CallFunction
// (Simulated, Native, Public)
// Parameters:
// class AActor*                  inActor                        (Parm)
// struct FName                   InFunctionName                 (Parm)

void UBehavior_CallFunction::CallFunction(class AActor* inActor, const struct FName& InFunctionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_CallFunction.CallFunction");

	UBehavior_CallFunction_CallFunction_Params params;
	params.inActor = inActor;
	params.InFunctionName = InFunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Behavior_CallFunction.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_CallFunction::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_CallFunction.ApplyBehaviorToContext");

	UBehavior_CallFunction_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.IBehaviorConsumer.GetBehaviorConsumerHandle
// (Native, Public)
// Parameters:
// struct FBehaviorConsumerHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBehaviorConsumerHandle UIBehaviorConsumer::GetBehaviorConsumerHandle()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IBehaviorConsumer.GetBehaviorConsumerHandle");

	UIBehaviorConsumer_GetBehaviorConsumerHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_ChangeRemoteBehaviorSequenceState::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_ChangeRemoteBehaviorSequenceState.ApplyBehaviorToContext");

	UBehavior_ChangeRemoteBehaviorSequenceState_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.ITimerBehavior.SetTimerState
// (Public)
// Parameters:
// unsigned char                  TimerId                        (Parm)
// struct FBehaviorTimerState     TimerState                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UITimerBehavior::SetTimerState(unsigned char TimerId, const struct FBehaviorTimerState& TimerState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ITimerBehavior.SetTimerState");

	UITimerBehavior_SetTimerState_Params params;
	params.TimerId = TimerId;
	params.TimerState = TimerState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ITimerBehavior.GetTimerState
// (Public, HasOutParms)
// Parameters:
// unsigned char                  TimerId                        (Parm)
// struct FBehaviorTimerState     TimerState                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UITimerBehavior::GetTimerState(unsigned char TimerId, struct FBehaviorTimerState* TimerState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ITimerBehavior.GetTimerState");

	UITimerBehavior_GetTimerState_Params params;
	params.TimerId = TimerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TimerState != nullptr)
		*TimerState = params.TimerState;

	return params.ReturnValue;
}


// Function GearboxFramework.ITimerBehavior.GetTimeSeconds
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UITimerBehavior::GetTimeSeconds()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ITimerBehavior.GetTimeSeconds");

	UITimerBehavior_GetTimeSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Behavior_ChangeTimer.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_ChangeTimer::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_ChangeTimer.ApplyBehaviorToContext");

	UBehavior_ChangeTimer_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_IsSequenceEnabled.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_IsSequenceEnabled::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_IsSequenceEnabled.ApplyBehaviorToContext");

	UBehavior_IsSequenceEnabled_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_PostAkEvent.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_PostAkEvent::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_PostAkEvent.ApplyBehaviorToContext");

	UBehavior_PostAkEvent_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.BehaviorHelpers.RunAllBehaviorsForEvent
// (Final, Simulated, Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FName                   EventName                      (Parm)
// struct FScriptDelegate         SetStrategy                    (Parm, NeedCtorLink)
// struct FScriptDelegate         Strategy                       (Parm, NeedCtorLink)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (OptionalParm, Parm)
// class UObject*                 OtherEventParticipantObject    (OptionalParm, Parm)
// struct FBehaviorParameters     EventData                      (OptionalParm, Parm, NeedCtorLink)
// unsigned char                  EnumValue                      (OptionalParm, Parm)

void UBehaviorHelpers::RunAllBehaviorsForEvent(const struct FName& EventName, const struct FScriptDelegate& SetStrategy, const struct FScriptDelegate& Strategy, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, unsigned char EnumValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.RunAllBehaviorsForEvent");

	UBehaviorHelpers_RunAllBehaviorsForEvent_Params params;
	params.EventName = EventName;
	params.SetStrategy = SetStrategy;
	params.Strategy = Strategy;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.BehaviorHelpers.BehaviorStrategy
// (HasOptionalParms, Public, Delegate, HasOutParms)
// Parameters:
// struct FPointer                BehaviorSet                    (Parm)
// struct FName                   EventName                      (Parm)
// TArray<class UBehaviorBase*>   BehaviorList                   (Parm, OutParm, NeedCtorLink)
// unsigned char                  EnumValue                      (OptionalParm, Parm)

void UBehaviorHelpers::BehaviorStrategy(const struct FPointer& BehaviorSet, const struct FName& EventName, unsigned char EnumValue, TArray<class UBehaviorBase*>* BehaviorList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.BehaviorStrategy");

	UBehaviorHelpers_BehaviorStrategy_Params params;
	params.BehaviorSet = BehaviorSet;
	params.EventName = EventName;
	params.EnumValue = EnumValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehaviorList != nullptr)
		*BehaviorList = params.BehaviorList;
}


// Function GearboxFramework.BehaviorHelpers.BehaviorSetStrategy
// (Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FPointer>        BehaviorSetList                (Parm, OutParm, NeedCtorLink)

void UBehaviorHelpers::BehaviorSetStrategy(TArray<struct FPointer>* BehaviorSetList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.BehaviorSetStrategy");

	UBehaviorHelpers_BehaviorSetStrategy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehaviorSetList != nullptr)
		*BehaviorSetList = params.BehaviorSetList;
}


// Function GearboxFramework.BehaviorHelpers.ResolveBehaviorProviderDefinitionReference
// (Native, Static, Public, HasOutParms)
// Parameters:
// class UBehaviorBase*           SourceBehavior                 (Const, Parm)
// class UObject*                 ProviderReference              (Const, Parm)
// struct FNameBasedObjectPath    PathName                       (Const, Parm, OutParm)
// class UBehaviorProviderDefinition* ReturnValue                    (Parm, OutParm, ReturnParm)

class UBehaviorProviderDefinition* UBehaviorHelpers::ResolveBehaviorProviderDefinitionReference(class UBehaviorBase* SourceBehavior, class UObject* ProviderReference, struct FNameBasedObjectPath* PathName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.ResolveBehaviorProviderDefinitionReference");

	UBehaviorHelpers_ResolveBehaviorProviderDefinitionReference_Params params;
	params.SourceBehavior = SourceBehavior;
	params.ProviderReference = ProviderReference;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathName != nullptr)
		*PathName = params.PathName;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorHelpers.IsBehaviorsV2
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBehaviorHelpers::IsBehaviorsV2(struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.IsBehaviorsV2");

	UBehaviorHelpers_IsBehaviorsV2_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorHelpers.ShouldContinueExecution
// (Defined, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// float                          TimeBetweenSteps               (Parm)
// int                            NumSteps                       (Parm, OutParm)
// int                            MaxSteps                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBehaviorHelpers::ShouldContinueExecution(float TimeBetweenSteps, int MaxSteps, struct FBehaviorKernelInfo* KernelInfo, int* NumSteps)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.ShouldContinueExecution");

	UBehaviorHelpers_ShouldContinueExecution_Params params;
	params.TimeBetweenSteps = TimeBetweenSteps;
	params.MaxSteps = MaxSteps;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
	if (NumSteps != nullptr)
		*NumSteps = params.NumSteps;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorHelpers.GetNextFireLocationSocket
// (Defined, Static, Public, HasOutParms)
// Parameters:
// unsigned char                  FireSocketSelection            (Parm)
// TArray<struct FName>           FireLocationSocketNames        (Parm, NeedCtorLink)
// TArray<struct FName>           FireLocationSocketsRemaining   (Parm, OutParm, NeedCtorLink)
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UBehaviorHelpers::GetNextFireLocationSocket(unsigned char FireSocketSelection, TArray<struct FName> FireLocationSocketNames, TArray<struct FName>* FireLocationSocketsRemaining)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.GetNextFireLocationSocket");

	UBehaviorHelpers_GetNextFireLocationSocket_Params params;
	params.FireSocketSelection = FireSocketSelection;
	params.FireLocationSocketNames = FireLocationSocketNames;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FireLocationSocketsRemaining != nullptr)
		*FireLocationSocketsRemaining = params.FireLocationSocketsRemaining;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorHelpers.GetRotationFromAttachmentLocationData
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FAttachmentLocationData AttachmentLocation             (Const, Parm)
// struct FRotator                AttachmentLocationRotation     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBehaviorHelpers::GetRotationFromAttachmentLocationData(const struct FAttachmentLocationData& AttachmentLocation, struct FRotator* AttachmentLocationRotation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.GetRotationFromAttachmentLocationData");

	UBehaviorHelpers_GetRotationFromAttachmentLocationData_Params params;
	params.AttachmentLocation = AttachmentLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AttachmentLocationRotation != nullptr)
		*AttachmentLocationRotation = params.AttachmentLocationRotation;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorHelpers.GetRelativeDirection
// (Native, Static, HasOptionalParms, Public)
// Parameters:
// struct FRelativeDirectionData  DesiredDirection               (Parm)
// FScriptInterface               Source                         (Parm)
// struct FVector                 DefaultDirection               (Parm)
// struct FName                   SpawnSocketName                (OptionalParm, Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UBehaviorHelpers::GetRelativeDirection(const struct FRelativeDirectionData& DesiredDirection, const FScriptInterface& Source, const struct FVector& DefaultDirection, const struct FName& SpawnSocketName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorHelpers.GetRelativeDirection");

	UBehaviorHelpers_GetRelativeDirection_Params params;
	params.DesiredDirection = DesiredDirection;
	params.Source = Source;
	params.DefaultDirection = DefaultDirection;
	params.SpawnSocketName = SpawnSocketName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.CompoundExpressionEvaluator.Evaluate
// (Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UCompoundExpressionEvaluator::Evaluate(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CompoundExpressionEvaluator.Evaluate");

	UCompoundExpressionEvaluator_Evaluate_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsOfClassFromLevel
// (Native, Public)
// Parameters:
// class UClass*                  TheClass                       (Const, Parm)
// class ULevel*                  Level                          (Parm)

void UGBXActorList::RemoveAndDeleteActorsOfClassFromLevel(class UClass* TheClass, class ULevel* Level)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.RemoveAndDeleteActorsOfClassFromLevel");

	UGBXActorList_RemoveAndDeleteActorsOfClassFromLevel_Params params;
	params.TheClass = TheClass;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXActorList.RemoveActorsOfClassFromLevel
// (Native, Public)
// Parameters:
// class UClass*                  TheClass                       (Const, Parm)
// class ULevel*                  Level                          (Parm)

void UGBXActorList::RemoveActorsOfClassFromLevel(class UClass* TheClass, class ULevel* Level)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.RemoveActorsOfClassFromLevel");

	UGBXActorList_RemoveActorsOfClassFromLevel_Params params;
	params.TheClass = TheClass;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXActorList.RemoveAndDeleteActorsFromLevel
// (Native, Public)
// Parameters:
// class ULevel*                  Level                          (Parm)

void UGBXActorList::RemoveAndDeleteActorsFromLevel(class ULevel* Level)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.RemoveAndDeleteActorsFromLevel");

	UGBXActorList_RemoveAndDeleteActorsFromLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXActorList.RemoveActorsFromLevel
// (Native, Public)
// Parameters:
// class ULevel*                  Level                          (Parm)

void UGBXActorList::RemoveActorsFromLevel(class ULevel* Level)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.RemoveActorsFromLevel");

	UGBXActorList_RemoveActorsFromLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXActorList.FindNextActorByLevel
// (Native, Public, HasOutParms)
// Parameters:
// class ULevel*                  Level                          (Parm)
// int                            Index                          (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGBXActorList::FindNextActorByLevel(class ULevel* Level, int* Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.FindNextActorByLevel");

	UGBXActorList_FindNextActorByLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

	return params.ReturnValue;
}


// Function GearboxFramework.GBXActorList.FindFirstActorByLevel
// (Native, Public, HasOutParms)
// Parameters:
// class ULevel*                  Level                          (Parm)
// int                            Index                          (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGBXActorList::FindFirstActorByLevel(class ULevel* Level, int* Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.FindFirstActorByLevel");

	UGBXActorList_FindFirstActorByLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

	return params.ReturnValue;
}


// Function GearboxFramework.GBXActorList.FindNextActorByClass
// (Native, Public, HasOutParms)
// Parameters:
// class UClass*                  TheClass                       (Const, Parm)
// int                            Index                          (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGBXActorList::FindNextActorByClass(class UClass* TheClass, int* Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.FindNextActorByClass");

	UGBXActorList_FindNextActorByClass_Params params;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

	return params.ReturnValue;
}


// Function GearboxFramework.GBXActorList.FindFirstActorByClass
// (Native, Public, HasOutParms)
// Parameters:
// class UClass*                  TheClass                       (Const, Parm)
// int                            Index                          (Parm, OutParm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGBXActorList::FindFirstActorByClass(class UClass* TheClass, int* Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.FindFirstActorByClass");

	UGBXActorList_FindFirstActorByClass_Params params;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

	return params.ReturnValue;
}


// Function GearboxFramework.GBXActorList.RemoveActor
// (Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm)

void UGBXActorList::RemoveActor(class AActor* Actor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.RemoveActor");

	UGBXActorList_RemoveActor_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXActorList.AddActor
// (Native, Public)
// Parameters:
// class AActor*                  Actor                          (Parm)
// class ULevel*                  Level                          (Parm)

void UGBXActorList::AddActor(class AActor* Actor, class ULevel* Level)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXActorList.AddActor");

	UGBXActorList_AddActor_Params params;
	params.Actor = Actor;
	params.Level = Level;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXObjectList.RemoveObjectsOfClass
// (Native, Public)
// Parameters:
// class UClass*                  TheClass                       (Const, Parm)

void UGBXObjectList::RemoveObjectsOfClass(class UClass* TheClass)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXObjectList.RemoveObjectsOfClass");

	UGBXObjectList_RemoveObjectsOfClass_Params params;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXObjectList.FindNextObjectByClass
// (Native, Public, HasOutParms)
// Parameters:
// class UClass*                  TheClass                       (Const, Parm)
// int                            Index                          (Parm, OutParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UGBXObjectList::FindNextObjectByClass(class UClass* TheClass, int* Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXObjectList.FindNextObjectByClass");

	UGBXObjectList_FindNextObjectByClass_Params params;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

	return params.ReturnValue;
}


// Function GearboxFramework.GBXObjectList.FindFirstObjectByClass
// (Native, Public, HasOutParms)
// Parameters:
// class UClass*                  TheClass                       (Const, Parm)
// int                            Index                          (Parm, OutParm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UGBXObjectList::FindFirstObjectByClass(class UClass* TheClass, int* Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXObjectList.FindFirstObjectByClass");

	UGBXObjectList_FindFirstObjectByClass_Params params;
	params.TheClass = TheClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Index != nullptr)
		*Index = params.Index;

	return params.ReturnValue;
}


// Function GearboxFramework.GBXObjectList.RemoveObject
// (Native, Public)
// Parameters:
// class UObject*                 TheObject                      (Parm)

void UGBXObjectList::RemoveObject(class UObject* TheObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXObjectList.RemoveObject");

	UGBXObjectList_RemoveObject_Params params;
	params.TheObject = TheObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GBXObjectList.AddObject
// (Native, Public)
// Parameters:
// class UObject*                 TheObject                      (Parm)

void UGBXObjectList::AddObject(class UObject* TheObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GBXObjectList.AddObject");

	UGBXObjectList_AddObject_Params params;
	params.TheObject = TheObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAIController.ForceMoveToActor
// (Defined, Public)
// Parameters:
// class AActor*                  destActor                      (Parm)

void AGearboxAIController::ForceMoveToActor(class AActor* destActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIController.ForceMoveToActor");

	AGearboxAIController_ForceMoveToActor_Params params;
	params.destActor = destActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAIMoveNode.DoesPatrolPathExistToPoint
// (Native, Public)
// Parameters:
// class AGearboxAIMoveNode*      PatrolPoint                    (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxAIMoveNode::DoesPatrolPathExistToPoint(class AGearboxAIMoveNode* PatrolPoint)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.DoesPatrolPathExistToPoint");

	AGearboxAIMoveNode_DoesPatrolPathExistToPoint_Params params;
	params.PatrolPoint = PatrolPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAIMoveNode.GetAllLinkedNodes
// (Native, Public, HasOutParms)
// Parameters:
// TArray<class AGearboxAIMoveNode*> OutNodes                       (Parm, OutParm, NeedCtorLink)

void AGearboxAIMoveNode::GetAllLinkedNodes(TArray<class AGearboxAIMoveNode*>* OutNodes)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.GetAllLinkedNodes");

	AGearboxAIMoveNode_GetAllLinkedNodes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutNodes != nullptr)
		*OutNodes = params.OutNodes;
}


// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNodeClosestToPoint
// (Native, Public)
// Parameters:
// struct FVector                 TestPoint                      (Parm)
// class AGearboxAIMoveNode*      ReturnValue                    (Parm, OutParm, ReturnParm)

class AGearboxAIMoveNode* AGearboxAIMoveNode::GetNextMoveNodeClosestToPoint(const struct FVector& TestPoint)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.GetNextMoveNodeClosestToPoint");

	AGearboxAIMoveNode_GetNextMoveNodeClosestToPoint_Params params;
	params.TestPoint = TestPoint;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAIMoveNode.GetNextMoveNode
// (Native, Public)
// Parameters:
// class AGearboxAIMoveNode*      ReturnValue                    (Parm, OutParm, ReturnParm)

class AGearboxAIMoveNode* AGearboxAIMoveNode::GetNextMoveNode()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.GetNextMoveNode");

	AGearboxAIMoveNode_GetNextMoveNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAIMoveNode.RemoveNode
// (Native, Public)
// Parameters:
// class AGearboxAIMoveNode*      OldNode                        (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGearboxAIMoveNode::RemoveNode(class AGearboxAIMoveNode* OldNode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.RemoveNode");

	AGearboxAIMoveNode_RemoveNode_Params params;
	params.OldNode = OldNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAIMoveNode.AddNode
// (Native, Public)
// Parameters:
// class AGearboxAIMoveNode*      NewNode                        (Parm)

void AGearboxAIMoveNode::AddNode(class AGearboxAIMoveNode* NewNode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.AddNode");

	AGearboxAIMoveNode_AddNode_Params params;
	params.NewNode = NewNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAIMoveNode.ClearLinks
// (Native, Public)

void AGearboxAIMoveNode::ClearLinks()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.ClearLinks");

	AGearboxAIMoveNode_ClearLinks_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAIMoveNode.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void AGearboxAIMoveNode::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIMoveNode.OnToggle");

	AGearboxAIMoveNode_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraBasic.FinishCameraLookAt
// (Event, Public)

void AGearboxCameraBasic::FinishCameraLookAt()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraBasic.FinishCameraLookAt");

	AGearboxCameraBasic_FinishCameraLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraBasic.EnableThirdPersonLookAt
// (Event, Public)
// Parameters:
// float                          LookAtXOffset                  (Parm)
// float                          LookAtYOffset                  (Parm)
// float                          LookAtZOffset                  (Parm)
// unsigned char                  LookAtMode                     (Parm)

void AGearboxCameraBasic::EnableThirdPersonLookAt(float LookAtXOffset, float LookAtYOffset, float LookAtZOffset, unsigned char LookAtMode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraBasic.EnableThirdPersonLookAt");

	AGearboxCameraBasic_EnableThirdPersonLookAt_Params params;
	params.LookAtXOffset = LookAtXOffset;
	params.LookAtYOffset = LookAtYOffset;
	params.LookAtZOffset = LookAtZOffset;
	params.LookAtMode = LookAtMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraBasic.BeginCameraLookAt
// (Simulated, Public)
// Parameters:
// class AActor*                  LookAtTarget                   (Parm)
// struct FName                   LookAtBone                     (Parm)
// struct FVector                 TargetLocation                 (Parm)
// float                          Zoom                           (Parm)
// struct FVector2D               FOV                            (Parm)
// float                          Duration                       (Parm)
// float                          TransitionTimeIn               (Parm)
// float                          TransitionTimeOut              (Parm)

void AGearboxCameraBasic::BeginCameraLookAt(class AActor* LookAtTarget, const struct FName& LookAtBone, const struct FVector& TargetLocation, float Zoom, const struct FVector2D& FOV, float Duration, float TransitionTimeIn, float TransitionTimeOut)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraBasic.BeginCameraLookAt");

	AGearboxCameraBasic_BeginCameraLookAt_Params params;
	params.LookAtTarget = LookAtTarget;
	params.LookAtBone = LookAtBone;
	params.TargetLocation = TargetLocation;
	params.Zoom = Zoom;
	params.FOV = FOV;
	params.Duration = Duration;
	params.TransitionTimeIn = TransitionTimeIn;
	params.TransitionTimeOut = TransitionTimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraBasic.CalcSimpleThirdPersonView
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTViewTarget            OutVT                          (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AGearboxCameraBasic::CalcSimpleThirdPersonView(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraBasic.CalcSimpleThirdPersonView");

	AGearboxCameraBasic_CalcSimpleThirdPersonView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GearboxFramework.GearboxCameraBasic.CalcBaseView
// (Defined, Simulated, Public, HasOutParms)
// Parameters:
// struct FTViewTarget            OutVT                          (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AGearboxCameraBasic::CalcBaseView(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraBasic.CalcBaseView");

	AGearboxCameraBasic_CalcBaseView_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GearboxFramework.GearboxCameraBasic.UpdateViewTarget
// (Defined, Simulated, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTViewTarget            OutVT                          (Parm, OutParm)
// float                          DeltaTime                      (Parm)

void AGearboxCameraBasic::UpdateViewTarget(float DeltaTime, struct FTViewTarget* OutVT)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraBasic.UpdateViewTarget");

	AGearboxCameraBasic_UpdateViewTarget_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutVT != nullptr)
		*OutVT = params.OutVT;
}


// Function GearboxFramework.GearboxCameraModifier.LerpFOV
// (Defined, Protected)
// Parameters:
// float                          Src                            (Parm)
// float                          Dest                           (Parm)
// float                          T                              (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGearboxCameraModifier::LerpFOV(float Src, float Dest, float T)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.LerpFOV");

	UGearboxCameraModifier_LerpFOV_Params params;
	params.Src = Src;
	params.Dest = Dest;
	params.T = T;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCameraModifier.LerpRotation
// (Defined, Protected)
// Parameters:
// struct FRotator                Src                            (Parm)
// struct FRotator                Dest                           (Parm)
// float                          T                              (Parm)
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator UGearboxCameraModifier::LerpRotation(const struct FRotator& Src, const struct FRotator& Dest, float T)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.LerpRotation");

	UGearboxCameraModifier_LerpRotation_Params params;
	params.Src = Src;
	params.Dest = Dest;
	params.T = T;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCameraModifier.LerpLocation
// (Defined, Protected)
// Parameters:
// struct FVector                 Src                            (Parm)
// struct FVector                 Dest                           (Parm)
// float                          T                              (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGearboxCameraModifier::LerpLocation(const struct FVector& Src, const struct FVector& Dest, float T)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.LerpLocation");

	UGearboxCameraModifier_LerpLocation_Params params;
	params.Src = Src;
	params.Dest = Dest;
	params.T = T;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCameraModifier.UpdateAllLerps
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void UGearboxCameraModifier::UpdateAllLerps(float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.UpdateAllLerps");

	UGearboxCameraModifier_UpdateAllLerps_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function GearboxFramework.GearboxCameraModifier.UpdateMasterFadePercentage
// (Final, Defined, Private)
// Parameters:
// float                          AdjustedDeltaTime              (Parm)

void UGearboxCameraModifier::UpdateMasterFadePercentage(float AdjustedDeltaTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.UpdateMasterFadePercentage");

	UGearboxCameraModifier_UpdateMasterFadePercentage_Params params;
	params.AdjustedDeltaTime = AdjustedDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraModifier.IsFadingDownwards
// (Defined, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCameraModifier::IsFadingDownwards()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.IsFadingDownwards");

	UGearboxCameraModifier_IsFadingDownwards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCameraModifier.IsFadingUpwards
// (Defined, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCameraModifier::IsFadingUpwards()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.IsFadingUpwards");

	UGearboxCameraModifier_IsFadingUpwards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCameraModifier.IsFadeInProgress
// (Defined, Protected)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCameraModifier::IsFadeInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.IsFadeInProgress");

	UGearboxCameraModifier_IsFadeInProgress_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCameraModifier.StartFadeOut
// (Defined, HasOptionalParms, Protected)
// Parameters:
// float                          NewTimeSpan                    (Parm)
// bool                           NewDisableWhenFadedOut         (OptionalParm, Parm)
// unsigned char                  NewFadeMode                    (OptionalParm, Parm)

void UGearboxCameraModifier::StartFadeOut(float NewTimeSpan, bool NewDisableWhenFadedOut, unsigned char NewFadeMode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.StartFadeOut");

	UGearboxCameraModifier_StartFadeOut_Params params;
	params.NewTimeSpan = NewTimeSpan;
	params.NewDisableWhenFadedOut = NewDisableWhenFadedOut;
	params.NewFadeMode = NewFadeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraModifier.StartFadeIn
// (Defined, HasOptionalParms, Protected)
// Parameters:
// float                          NewTimeSpan                    (Parm)
// unsigned char                  NewFadeMode                    (OptionalParm, Parm)

void UGearboxCameraModifier::StartFadeIn(float NewTimeSpan, unsigned char NewFadeMode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.StartFadeIn");

	UGearboxCameraModifier_StartFadeIn_Params params;
	params.NewTimeSpan = NewTimeSpan;
	params.NewFadeMode = NewFadeMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraModifier.SetDesiredCamera
// (Defined, Simulated, Protected)
// Parameters:
// struct FVector                 DesiredLoc                     (Parm)
// struct FRotator                DesiredRot                     (Parm)
// float                          DesiredFOV                     (Parm)

void UGearboxCameraModifier::SetDesiredCamera(const struct FVector& DesiredLoc, const struct FRotator& DesiredRot, float DesiredFOV)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.SetDesiredCamera");

	UGearboxCameraModifier_SetDesiredCamera_Params params;
	params.DesiredLoc = DesiredLoc;
	params.DesiredRot = DesiredRot;
	params.DesiredFOV = DesiredFOV;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraModifier.SetGBXCameraOwner
// (Defined, Simulated, Protected)
// Parameters:
// class AGearboxCameraBasic*     InCamera                       (Parm)

void UGearboxCameraModifier::SetGBXCameraOwner(class AGearboxCameraBasic* InCamera)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.SetGBXCameraOwner");

	UGearboxCameraModifier_SetGBXCameraOwner_Params params;
	params.InCamera = InCamera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCameraModifier.AddCameraModifier
// (Defined, Simulated, Public)
// Parameters:
// class ACamera*                 Camera                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCameraModifier::AddCameraModifier(class ACamera* Camera)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCameraModifier.AddCameraModifier");

	UGearboxCameraModifier_AddCameraModifier_Params params;
	params.Camera = Camera;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogInterface.ServerDialog_TriggerEvent
// (Net, Event, HasOptionalParms, Public, NetServer)
// Parameters:
// class UGearboxDialogEventTag*  EventTag                       (Parm)
// class AActor*                  Other                          (OptionalParm, Parm)
// class UObject*                 ObjectParameter                (OptionalParm, Parm)

void UGearboxDialogInterface::ServerDialog_TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.ServerDialog_TriggerEvent");

	UGearboxDialogInterface_ServerDialog_TriggerEvent_Params params;
	params.EventTag = EventTag;
	params.Other = Other;
	params.ObjectParameter = ObjectParameter;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogInterface.SetDialogNameTag
// (Native, Public)
// Parameters:
// class UGearboxDialogNameTag*   NewName                        (Parm)

void UGearboxDialogInterface::SetDialogNameTag(class UGearboxDialogNameTag* NewName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.SetDialogNameTag");

	UGearboxDialogInterface_SetDialogNameTag_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogInterface.GetReplicatedDialogData
// (Native, Public)
// Parameters:
// struct FGearboxDialogReplicatedData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGearboxDialogReplicatedData UGearboxDialogInterface::GetReplicatedDialogData()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.GetReplicatedDialogData");

	UGearboxDialogInterface_GetReplicatedDialogData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogInterface.SetReplicatedDialogData
// (Native, Public, HasOutParms)
// Parameters:
// class UGearboxDialogAct_Talk*  TalkAct                        (Parm)
// struct FGearboxDialogData      Data                           (Parm, OutParm)

void UGearboxDialogInterface::SetReplicatedDialogData(class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.SetReplicatedDialogData");

	UGearboxDialogInterface_SetReplicatedDialogData_Params params;
	params.TalkAct = TalkAct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function GearboxFramework.GearboxDialogInterface.GetDialogGroups
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// TArray<class UGearboxDialogGroup*> Groups                         (Parm, OutParm, NeedCtorLink)

void UGearboxDialogInterface::GetDialogGroups(TArray<class UGearboxDialogGroup*>* Groups)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.GetDialogGroups");

	UGearboxDialogInterface_GetDialogGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;
}


// Function GearboxFramework.GearboxDialogInterface.GetDialogComponent
// (Simulated, Native, Public)
// Parameters:
// class UGearboxDialogComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UGearboxDialogComponent* UGearboxDialogInterface::GetDialogComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.GetDialogComponent");

	UGearboxDialogInterface_GetDialogComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogInterface.GetDialogNameTag
// (Simulated, Native, Public)
// Parameters:
// class UGearboxDialogNameTag*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogNameTag* UGearboxDialogInterface::GetDialogNameTag()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.GetDialogNameTag");

	UGearboxDialogInterface_GetDialogNameTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogInterface.GetActor
// (Simulated, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UGearboxDialogInterface::GetActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.GetActor");

	UGearboxDialogInterface_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogInterface.CanTalk
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxDialogInterface::CanTalk()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogInterface.CanTalk");

	UGearboxDialogInterface_CanTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEditorNode.IsChild
// (Native, Public)
// Parameters:
// class UGearboxEditorNode*      TestNode                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxEditorNode::IsChild(class UGearboxEditorNode* TestNode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEditorNode.IsChild");

	UGearboxEditorNode_IsChild_Params params;
	params.TestNode = TestNode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEngine.GetSparkInterface
// (Final, Native, Static, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface UGearboxEngine::GetSparkInterface()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEngine.GetSparkInterface");

	UGearboxEngine_GetSparkInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEngine.IsCurrentDeviceValid
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// int                            SizeNeeded                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxEngine::IsCurrentDeviceValid(int SizeNeeded)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEngine.IsCurrentDeviceValid");

	UGearboxEngine_IsCurrentDeviceValid_Params params;
	params.SizeNeeded = SizeNeeded;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEngine.HasStorageDeviceBeenRemoved
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxEngine::HasStorageDeviceBeenRemoved()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEngine.HasStorageDeviceBeenRemoved");

	UGearboxEngine_HasStorageDeviceBeenRemoved_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEngine.GetCurrentDeviceID
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGearboxEngine::GetCurrentDeviceID()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEngine.GetCurrentDeviceID");

	UGearboxEngine_GetCurrentDeviceID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEngine.SetCurrentDeviceID
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            NewDeviceID                    (Parm)
// bool                           bProfileSignedOut              (OptionalParm, Parm)

void UGearboxEngine::SetCurrentDeviceID(int NewDeviceID, bool bProfileSignedOut)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEngine.SetCurrentDeviceID");

	UGearboxEngine_SetCurrentDeviceID_Params params;
	params.NewDeviceID = NewDeviceID;
	params.bProfileSignedOut = bProfileSignedOut;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGameInfo.PostLogin
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       NewPlayer                      (Parm)

void AGearboxGameInfo::PostLogin(class APlayerController* NewPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGameInfo.PostLogin");

	AGearboxGameInfo_PostLogin_Params params;
	params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieState.GetDebugString
// (Defined, HasOptionalParms, Public)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)
// bool                           bIncludeFlags                  (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMovieState::GetDebugString(class UGearboxGFxMovie* Movie, bool bIncludeFlags)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieState.GetDebugString");

	UGFxMovieState_GetDebugString_Params params;
	params.Movie = Movie;
	params.bIncludeFlags = bIncludeFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieState.ApplyMovieState
// (Defined, Public)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)
// class UClass*                  HandlerClass                   (Parm)

void UGFxMovieState::ApplyMovieState(class UGearboxGFxMovie* Movie, class UClass* HandlerClass)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieState.ApplyMovieState");

	UGFxMovieState_ApplyMovieState_Params params;
	params.Movie = Movie;
	params.HandlerClass = HandlerClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieState.FindMovieState
// (Final, Native, Public)
// Parameters:
// struct FName                   TheState                       (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMovieState::FindMovieState(const struct FName& TheState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieState.FindMovieState");

	UGFxMovieState_FindMovieState_Params params;
	params.TheState = TheState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieState.TestState
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   TheState                       (Parm)
// struct FMovieStateStruct       MovieState                     (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMovieState::TestState(const struct FName& TheState, struct FMovieStateStruct* MovieState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieState.TestState");

	UGFxMovieState_TestState_Params params;
	params.TheState = TheState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieState != nullptr)
		*MovieState = params.MovieState;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieState.ToggleState
// (Native, Public, HasOutParms)
// Parameters:
// struct FName                   TheState                       (Parm)
// struct FMovieStateStruct       MovieState                     (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMovieState::ToggleState(const struct FName& TheState, struct FMovieStateStruct* MovieState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieState.ToggleState");

	UGFxMovieState_ToggleState_Params params;
	params.TheState = TheState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieState != nullptr)
		*MovieState = params.MovieState;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieState.EnableState
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FName                   TheState                       (Parm)
// struct FMovieStateStruct       MovieState                     (Parm, OutParm, NeedCtorLink)
// bool                           bEnable                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMovieState::EnableState(const struct FName& TheState, bool bEnable, struct FMovieStateStruct* MovieState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieState.EnableState");

	UGFxMovieState_EnableState_Params params;
	params.TheState = TheState;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieState != nullptr)
		*MovieState = params.MovieState;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.extSetLanguageExt
// (Defined, Public)
// Parameters:
// struct FString                 ClipPath                       (Parm, NeedCtorLink)

void UGearboxGFxMovie::extSetLanguageExt(const struct FString& ClipPath)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.extSetLanguageExt");

	UGearboxGFxMovie_extSetLanguageExt_Params params;
	params.ClipPath = ClipPath;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.OnClosedOnDeath
// (Public)

void UGearboxGFxMovie::OnClosedOnDeath()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.OnClosedOnDeath");

	UGearboxGFxMovie_OnClosedOnDeath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.IsShowingFlashMouse
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::IsShowingFlashMouse()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.IsShowingFlashMouse");

	UGearboxGFxMovie_IsShowingFlashMouse_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.extIsMouseablePlatform
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGearboxGFxMovie::extIsMouseablePlatform()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.extIsMouseablePlatform");

	UGearboxGFxMovie_extIsMouseablePlatform_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.SetMouseableFlag
// (Native, Event, Public)

void UGearboxGFxMovie::SetMouseableFlag()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.SetMouseableFlag");

	UGearboxGFxMovie_SetMouseableFlag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.GetStyleDebugString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGearboxGFxMovie::GetStyleDebugString()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GetStyleDebugString");

	UGearboxGFxMovie_GetStyleDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.GetStateDebugString
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bIncludeFlags                  (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGearboxGFxMovie::GetStateDebugString(bool bIncludeFlags)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GetStateDebugString");

	UGearboxGFxMovie_GetStateDebugString_Params params;
	params.bIncludeFlags = bIncludeFlags;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.InitializeFrom
// (Native, Public)
// Parameters:
// class UGearboxGFxMovie*        SrcMovie                       (Parm)

void UGearboxGFxMovie::InitializeFrom(class UGearboxGFxMovie* SrcMovie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.InitializeFrom");

	UGearboxGFxMovie_InitializeFrom_Params params;
	params.SrcMovie = SrcMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.RemoveStylesDrawnTo
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, EditInline)
// FScriptInterface               Target                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::RemoveStylesDrawnTo(class UPrimitiveComponent* PrimComp, const FScriptInterface& Target)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.RemoveStylesDrawnTo");

	UGearboxGFxMovie_RemoveStylesDrawnTo_Params params;
	params.PrimComp = PrimComp;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.RemoveStyles
// (Final, Native, Public)
// Parameters:
// FScriptInterface               Target                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::RemoveStyles(const FScriptInterface& Target)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.RemoveStyles");

	UGearboxGFxMovie_RemoveStyles_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.RemoveStyle
// (Final, Native, Public)
// Parameters:
// class UGFxMovieDrawStyle*      Style                          (Parm)

void UGearboxGFxMovie::RemoveStyle(class UGFxMovieDrawStyle* Style)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.RemoveStyle");

	UGearboxGFxMovie_RemoveStyle_Params params;
	params.Style = Style;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.AddStyle
// (Final, Native, Public)
// Parameters:
// class UGFxMovieDrawStyle*      Style                          (Parm)

void UGearboxGFxMovie::AddStyle(class UGFxMovieDrawStyle* Style)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.AddStyle");

	UGearboxGFxMovie_AddStyle_Params params;
	params.Style = Style;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.ShutdownMoviePlayback
// (Final, Native, Public)

void UGearboxGFxMovie::ShutdownMoviePlayback()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.ShutdownMoviePlayback");

	UGearboxGFxMovie_ShutdownMoviePlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.InitMoviePlayback
// (Final, Native, Public)

void UGearboxGFxMovie::InitMoviePlayback()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.InitMoviePlayback");

	UGearboxGFxMovie_InitMoviePlayback_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.GetRenderTexture
// (Final, Native, Public)
// Parameters:
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UTextureRenderTarget2D* UGearboxGFxMovie::GetRenderTexture()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GetRenderTexture");

	UGearboxGFxMovie_GetRenderTexture_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_OnChanged
// (Defined, Event, Public)
// Parameters:
// bool                           bStateWasChanged               (Parm)

void UGearboxGFxMovie::MovieState_OnChanged(bool bStateWasChanged)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_OnChanged");

	UGearboxGFxMovie_MovieState_OnChanged_Params params;
	params.bStateWasChanged = bStateWasChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_SetFromMovie
// (Final, Defined, Event, Public)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::MovieState_SetFromMovie(class UGearboxGFxMovie* Movie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_SetFromMovie");

	UGearboxGFxMovie_MovieState_SetFromMovie_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_Copy
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMovieStateStruct       StateDst                       (Parm, OutParm, NeedCtorLink)
// struct FMovieStateStruct       StateSrc                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::MovieState_Copy(struct FMovieStateStruct* StateDst, struct FMovieStateStruct* StateSrc)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_Copy");

	UGearboxGFxMovie_MovieState_Copy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (StateDst != nullptr)
		*StateDst = params.StateDst;
	if (StateSrc != nullptr)
		*StateSrc = params.StateSrc;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_Compare
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FMovieStateStruct       S1                             (Parm, OutParm, NeedCtorLink)
// struct FMovieStateStruct       S2                             (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::MovieState_Compare(struct FMovieStateStruct* S1, struct FMovieStateStruct* S2)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_Compare");

	UGearboxGFxMovie_MovieState_Compare_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (S1 != nullptr)
		*S1 = params.S1;
	if (S2 != nullptr)
		*S2 = params.S2;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_Toggle
// (Final, Native, Public)
// Parameters:
// struct FName                   TheState                       (Parm)

void UGearboxGFxMovie::MovieState_Toggle(const struct FName& TheState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_Toggle");

	UGearboxGFxMovie_MovieState_Toggle_Params params;
	params.TheState = TheState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_Enable
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   TheState                       (Parm)
// bool                           bEnable                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::MovieState_Enable(const struct FName& TheState, bool bEnable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_Enable");

	UGearboxGFxMovie_MovieState_Enable_Params params;
	params.TheState = TheState;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_IsEnabled
// (Final, Native, Public)
// Parameters:
// struct FName                   TheState                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::MovieState_IsEnabled(const struct FName& TheState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_IsEnabled");

	UGearboxGFxMovie_MovieState_IsEnabled_Params params;
	params.TheState = TheState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_SupportsState
// (Final, Native, Public)
// Parameters:
// struct FName                   TheState                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::MovieState_SupportsState(const struct FName& TheState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_SupportsState");

	UGearboxGFxMovie_MovieState_SupportsState_Params params;
	params.TheState = TheState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_Init
// (Final, Native, Public)

void UGearboxGFxMovie::MovieState_Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_Init");

	UGearboxGFxMovie_MovieState_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.InitFromDefinition
// (Native, Public)

void UGearboxGFxMovie::InitFromDefinition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.InitFromDefinition");

	UGearboxGFxMovie_InitFromDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_Apply
// (Defined, Static, Public)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)
// class UClass*                  HandlerClass                   (Parm)

void UGearboxGFxMovie::MovieState_Apply(class UGearboxGFxMovie* Movie, class UClass* HandlerClass)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_Apply");

	UGearboxGFxMovie_MovieState_Apply_Params params;
	params.Movie = Movie;
	params.HandlerClass = HandlerClass;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.MovieState_ApplyState
// (Static, Public)
// Parameters:
// struct FName                   TheState                       (Parm)
// class UGearboxGFxMovie*        Movie                          (Parm)

void UGearboxGFxMovie::MovieState_ApplyState(const struct FName& TheState, class UGearboxGFxMovie* Movie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.MovieState_ApplyState");

	UGearboxGFxMovie_MovieState_ApplyState_Params params;
	params.TheState = TheState;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.ApplyState
// (Defined, Public)
// Parameters:
// struct FString                 StateName                      (Parm, NeedCtorLink)
// struct FString                 StateAction                    (Parm, NeedCtorLink)

void UGearboxGFxMovie::ApplyState(const struct FString& StateName, const struct FString& StateAction)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.ApplyState");

	UGearboxGFxMovie_ApplyState_Params params;
	params.StateName = StateName;
	params.StateAction = StateAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.SetRenderingEnabled
// (Defined, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void UGearboxGFxMovie::SetRenderingEnabled(bool bEnabled)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.SetRenderingEnabled");

	UGearboxGFxMovie_SetRenderingEnabled_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.GotoAndStop
// (Defined, Public)
// Parameters:
// struct FString                 FrameLabel                     (Parm, NeedCtorLink)

void UGearboxGFxMovie::GotoAndStop(const struct FString& FrameLabel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GotoAndStop");

	UGearboxGFxMovie_GotoAndStop_Params params;
	params.FrameLabel = FrameLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.GotoAndPlay
// (Defined, Public)
// Parameters:
// struct FString                 FrameLabel                     (Parm, NeedCtorLink)

void UGearboxGFxMovie::GotoAndPlay(const struct FString& FrameLabel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GotoAndPlay");

	UGearboxGFxMovie_GotoAndPlay_Params params;
	params.FrameLabel = FrameLabel;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.PlaySpecialUISound
// (Defined, Public)
// Parameters:
// struct FString                 SoundString                    (Parm, NeedCtorLink)

void UGearboxGFxMovie::PlaySpecialUISound(const struct FString& SoundString)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.PlaySpecialUISound");

	UGearboxGFxMovie_PlaySpecialUISound_Params params;
	params.SoundString = SoundString;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.PlayUISound
// (Native, Event, Public)
// Parameters:
// struct FName                   UIEvent                        (Parm)

void UGearboxGFxMovie::PlayUISound(const struct FName& UIEvent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.PlayUISound");

	UGearboxGFxMovie_PlayUISound_Params params;
	params.UIEvent = UIEvent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.SetOtherObject
// (Final, Defined, Event, Public)
// Parameters:
// class UObject*                 Obj                            (Parm)

void UGearboxGFxMovie::SetOtherObject(class UObject* Obj)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.SetOtherObject");

	UGearboxGFxMovie_SetOtherObject_Params params;
	params.Obj = Obj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.GetInstanceContextObject
// (Native, Public)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UGearboxGFxMovie::GetInstanceContextObject()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GetInstanceContextObject");

	UGearboxGFxMovie_GetInstanceContextObject_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.OnTick
// (Event, Public)

void UGearboxGFxMovie::OnTick()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.OnTick");

	UGearboxGFxMovie_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.OnClose
// (Defined, Event, Public)

void UGearboxGFxMovie::OnClose()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.OnClose");

	UGearboxGFxMovie_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.Start
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::Start(bool StartPaused)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.Start");

	UGearboxGFxMovie_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.ColorizeTooltipText
// (Final, Defined, HasOptionalParms, Public)
// Parameters:
// struct FString                 S                              (Const, Parm, NeedCtorLink)
// bool                           bDisabled                      (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGearboxGFxMovie::ColorizeTooltipText(const struct FString& S, bool bDisabled)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.ColorizeTooltipText");

	UGearboxGFxMovie_ColorizeTooltipText_Params params;
	params.S = S;
	params.bDisabled = bDisabled;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.GFxColoredText
// (Native, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FColor                  C                              (Const, Parm, OutParm)
// struct FString                 S                              (Const, Parm, OutParm, NeedCtorLink)
// bool                           bAppendNewline                 (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGearboxGFxMovie::GFxColoredText(bool bAppendNewline, struct FColor* C, struct FString* S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GFxColoredText");

	UGearboxGFxMovie_GFxColoredText_Params params;
	params.bAppendNewline = bAppendNewline;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (C != nullptr)
		*C = params.C;
	if (S != nullptr)
		*S = params.S;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeB
// (Final, Native, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// bool                           Arg                            (Parm)

void UGearboxGFxMovie::SingleArgInvokeB(const struct FString& Command, bool Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.SingleArgInvokeB");

	UGearboxGFxMovie_SingleArgInvokeB_Params params;
	params.Command = Command;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeS
// (Final, Native, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// struct FString                 Arg                            (Parm, NeedCtorLink)

void UGearboxGFxMovie::SingleArgInvokeS(const struct FString& Command, const struct FString& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.SingleArgInvokeS");

	UGearboxGFxMovie_SingleArgInvokeS_Params params;
	params.Command = Command;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.SingleArgInvokeF
// (Final, Native, Public)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)
// float                          Arg                            (Parm)

void UGearboxGFxMovie::SingleArgInvokeF(const struct FString& Command, float Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.SingleArgInvokeF");

	UGearboxGFxMovie_SingleArgInvokeF_Params params;
	params.Command = Command;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.GetLocalPlayer
// (Final, Native, Public)
// Parameters:
// class ULocalPlayer*            ReturnValue                    (Parm, OutParm, ReturnParm)

class ULocalPlayer* UGearboxGFxMovie::GetLocalPlayer()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.GetLocalPlayer");

	UGearboxGFxMovie_GetLocalPlayer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.OnClosed
// (Public, Delegate)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)

void UGearboxGFxMovie::OnClosed(class UGearboxGFxMovie* Movie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.OnClosed");

	UGearboxGFxMovie_OnClosed_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGFxMovie.WantsControllerInput
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::WantsControllerInput(int ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.WantsControllerInput");

	UGearboxGFxMovie_WantsControllerInput_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.SetExternalTexture
// (Native, Public)
// Parameters:
// struct FString                 Resource                       (Parm, NeedCtorLink)
// class UTexture*                Texture                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::SetExternalTexture(const struct FString& Resource, class UTexture* Texture)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.SetExternalTexture");

	UGearboxGFxMovie_SetExternalTexture_Params params;
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGFxMovie.OnInputAxis
// (Public, Delegate)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ukey                           (Parm)
// float                          Delta                          (Parm)
// float                          DeltaTime                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGFxMovie::OnInputAxis(int ControllerId, const struct FName& ukey, float Delta, float DeltaTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGFxMovie.OnInputAxis");

	UGearboxGFxMovie_OnInputAxis_Params params;
	params.ControllerId = ControllerId;
	params.ukey = ukey;
	params.Delta = Delta;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovie_StateParent.MovieState_OnChanged
// (Defined, Public)
// Parameters:
// bool                           bStateWasChanged               (Parm)

void UGFxMovie_StateParent::MovieState_OnChanged(bool bStateWasChanged)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovie_StateParent.MovieState_OnChanged");

	UGFxMovie_StateParent_MovieState_OnChanged_Params params;
	params.bStateWasChanged = bStateWasChanged;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovie_StateParent.Start
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMovie_StateParent::Start(bool StartPaused)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovie_StateParent.Start");

	UGFxMovie_StateParent_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetBehaviorKernel
// (Final, Native, Static, Public)
// Parameters:
// class UBehaviorKernel*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UBehaviorKernel* UGearboxGlobals::GetBehaviorKernel()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetBehaviorKernel");

	UGearboxGlobals_GetBehaviorKernel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetDialogManager
// (Final, Native, Public)
// Parameters:
// class UGearboxDialogManager*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogManager* UGearboxGlobals::GetDialogManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetDialogManager");

	UGearboxGlobals_GetDialogManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetPopulationRespawnDelay
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGearboxGlobals::GetPopulationRespawnDelay()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetPopulationRespawnDelay");

	UGearboxGlobals_GetPopulationRespawnDelay_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.ShowDialog
// (Defined, Event, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface UGearboxGlobals::ShowDialog(class APlayerController* PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.ShowDialog");

	UGearboxGlobals_ShowDialog_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.NotifyActorDied
// (Native, Public)
// Parameters:
// class AActor*                  TheActor                       (Parm)
// bool                           bKeepBody                      (Parm)

void UGearboxGlobals::NotifyActorDied(class AActor* TheActor, bool bKeepBody)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.NotifyActorDied");

	UGearboxGlobals_NotifyActorDied_Params params;
	params.TheActor = TheActor;
	params.bKeepBody = bKeepBody;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGlobals.DoesLOSIntersectSpecialOccluder
// (Native, Public)
// Parameters:
// struct FVector                 FromLoc                        (Parm)
// struct FVector                 ToLoc                          (Parm)
// class UPawnAllegiance*         AllegianceAffected             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGlobals::DoesLOSIntersectSpecialOccluder(const struct FVector& FromLoc, const struct FVector& ToLoc, class UPawnAllegiance* AllegianceAffected)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.DoesLOSIntersectSpecialOccluder");

	UGearboxGlobals_DoesLOSIntersectSpecialOccluder_Params params;
	params.FromLoc = FromLoc;
	params.ToLoc = ToLoc;
	params.AllegianceAffected = AllegianceAffected;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.HasPhysXCapableGPU
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGlobals::HasPhysXCapableGPU()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.HasPhysXCapableGPU");

	UGearboxGlobals_HasPhysXCapableGPU_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetPlatform
// (Native, Static, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGearboxGlobals::GetPlatform()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetPlatform");

	UGearboxGlobals_GetPlatform_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.ValidatePlayerName
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FString                 InName                         (Parm, OutParm, NeedCtorLink)
// bool                           bReplaceCharacters             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGlobals::ValidatePlayerName(bool bReplaceCharacters, struct FString* InName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.ValidatePlayerName");

	UGearboxGlobals_ValidatePlayerName_Params params;
	params.bReplaceCharacters = bReplaceCharacters;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InName != nullptr)
		*InName = params.InName;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.RegisterStateKey
// (Native, Public)
// Parameters:
// struct FName                   LevelName                      (Parm)
// struct FName                   ObjectName                     (Parm)
// struct FName                   AdditionalKey                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGlobals::RegisterStateKey(const struct FName& LevelName, const struct FName& ObjectName, const struct FName& AdditionalKey)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.RegisterStateKey");

	UGearboxGlobals_RegisterStateKey_Params params;
	params.LevelName = LevelName;
	params.ObjectName = ObjectName;
	params.AdditionalKey = AdditionalKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.DoesStateKeyExist
// (Native, Public)
// Parameters:
// struct FName                   LevelName                      (Parm)
// struct FName                   ObjectName                     (Parm)
// struct FName                   AdditionalKey                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGlobals::DoesStateKeyExist(const struct FName& LevelName, const struct FName& ObjectName, const struct FName& AdditionalKey)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.DoesStateKeyExist");

	UGearboxGlobals_DoesStateKeyExist_Params params;
	params.LevelName = LevelName;
	params.ObjectName = ObjectName;
	params.AdditionalKey = AdditionalKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.FreeTexture2D
// (Native, Public)
// Parameters:
// class UTexture2D*              Texture                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxGlobals::FreeTexture2D(class UTexture2D* Texture)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.FreeTexture2D");

	UGearboxGlobals_FreeTexture2D_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetTexture2D
// (Native, Public)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture2D* UGearboxGlobals::GetTexture2D()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetTexture2D");

	UGearboxGlobals_GetTexture2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetRenderTextureManager
// (Native, Public)
// Parameters:
// class UGearboxRenderTextureManager* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxRenderTextureManager* UGearboxGlobals::GetRenderTextureManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetRenderTextureManager");

	UGearboxGlobals_GetRenderTextureManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetGFxManager
// (Final, Native, Public)
// Parameters:
// class UGFxMovieManager*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxMovieManager* UGearboxGlobals::GetGFxManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetGFxManager");

	UGearboxGlobals_GetGFxManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetScreenSpaceManager
// (Native, Public)
// Parameters:
// class UScreenSpaceManager*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UScreenSpaceManager* UGearboxGlobals::GetScreenSpaceManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetScreenSpaceManager");

	UGearboxGlobals_GetScreenSpaceManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetMessageManager
// (Native, Public)
// Parameters:
// class UGbxMessageManager*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UGbxMessageManager* UGearboxGlobals::GetMessageManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetMessageManager");

	UGearboxGlobals_GetMessageManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.RegDynamicTextureStreaming
// (Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  A                              (Parm)
// bool                           bRegister                      (OptionalParm, Parm)

void UGearboxGlobals::RegDynamicTextureStreaming(class AActor* A, bool bRegister)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.RegDynamicTextureStreaming");

	UGearboxGlobals_RegDynamicTextureStreaming_Params params;
	params.A = A;
	params.bRegister = bRegister;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxGlobals.GetDynamicTextureActorList
// (Native, Public)
// Parameters:
// class UGBXActorList*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UGBXActorList* UGearboxGlobals::GetDynamicTextureActorList()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetDynamicTextureActorList");

	UGearboxGlobals_GetDynamicTextureActorList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetPopulationMaster
// (Final, Native, Public)
// Parameters:
// class UPopulationMaster*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UPopulationMaster* UGearboxGlobals::GetPopulationMaster()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetPopulationMaster");

	UGearboxGlobals_GetPopulationMaster_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetWireManager
// (Native, Public)
// Parameters:
// class AWireManager*            ReturnValue                    (Parm, OutParm, ReturnParm)

class AWireManager* UGearboxGlobals::GetWireManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetWireManager");

	UGearboxGlobals_GetWireManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetGBXObjectList
// (Native, Public)
// Parameters:
// class UGBXObjectList*          ReturnValue                    (Parm, OutParm, ReturnParm)

class UGBXObjectList* UGearboxGlobals::GetGBXObjectList()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetGBXObjectList");

	UGearboxGlobals_GetGBXObjectList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetGBXActorList
// (Native, Public)
// Parameters:
// class UGBXActorList*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UGBXActorList* UGearboxGlobals::GetGBXActorList()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetGBXActorList");

	UGearboxGlobals_GetGBXActorList_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetRuleEngineLoadBalanceManager
// (Native, Public)
// Parameters:
// class URuleEngineLoadBalanceManager* ReturnValue                    (Parm, OutParm, ReturnParm)

class URuleEngineLoadBalanceManager* UGearboxGlobals::GetRuleEngineLoadBalanceManager()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetRuleEngineLoadBalanceManager");

	UGearboxGlobals_GetRuleEngineLoadBalanceManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetGearboxAIFactory
// (Final, Native, Public)
// Parameters:
// class UGearboxAIFactory*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxAIFactory* UGearboxGlobals::GetGearboxAIFactory()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetGearboxAIFactory");

	UGearboxGlobals_GetGearboxAIFactory_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetExposureUtility
// (Final, Native, Public)
// Parameters:
// class UExposureUtilityBase*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UExposureUtilityBase* UGearboxGlobals::GetExposureUtility()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetExposureUtility");

	UGearboxGlobals_GetExposureUtility_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxGlobals.GetGearboxGlobals
// (Final, Native, Static, Public)
// Parameters:
// class UGearboxGlobals*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxGlobals* UGearboxGlobals::GetGearboxGlobals()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxGlobals.GetGearboxGlobals");

	UGearboxGlobals_GetGearboxGlobals_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxLocationRequest.GetLastDirection
// (Final, Simulated, Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGearboxLocationRequest::GetLastDirection()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxLocationRequest.GetLastDirection");

	UGearboxLocationRequest_GetLastDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxLocationRequest.GetLastOrigin
// (Final, Simulated, Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UGearboxLocationRequest::GetLastOrigin()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxLocationRequest.GetLastOrigin");

	UGearboxLocationRequest_GetLastOrigin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxLocationRequest.GetDirection
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  ContextActor                   (Parm)
// struct FVector                 OutDirection                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxLocationRequest::GetDirection(class AActor* ContextActor, struct FVector* OutDirection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxLocationRequest.GetDirection");

	UGearboxLocationRequest_GetDirection_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDirection != nullptr)
		*OutDirection = params.OutDirection;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxLocationRequest.GetOrigin
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  ContextActor                   (Parm)
// struct FVector                 OutOrigin                      (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxLocationRequest::GetOrigin(class AActor* ContextActor, struct FVector* OutOrigin)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxLocationRequest.GetOrigin");

	UGearboxLocationRequest_GetOrigin_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutOrigin != nullptr)
		*OutOrigin = params.OutOrigin;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxLocationRequest.Get
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  ContextActor                   (Parm)
// struct FVector                 OutLocation                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxLocationRequest::Get(class AActor* ContextActor, struct FVector* OutLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxLocationRequest.Get");

	UGearboxLocationRequest_Get_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}


// Function GearboxFramework.PawnMoveLocationRequest.Get
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  ContextActor                   (Parm)
// struct FVector                 OutLocation                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPawnMoveLocationRequest::Get(class AActor* ContextActor, struct FVector* OutLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PawnMoveLocationRequest.Get");

	UPawnMoveLocationRequest_Get_Params params;
	params.ContextActor = ContextActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutLocation != nullptr)
		*OutLocation = params.OutLocation;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetAimDirection
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGearboxPawn::GetAimDirection()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetAimDirection");

	AGearboxPawn_GetAimDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.SetDialogNameTag
// (Native, Public)
// Parameters:
// class UGearboxDialogNameTag*   NewName                        (Parm)

void AGearboxPawn::SetDialogNameTag(class UGearboxDialogNameTag* NewName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.SetDialogNameTag");

	AGearboxPawn_SetDialogNameTag_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.ServerDialog_TriggerEvent
// (Singular, Net, Native, Event, HasOptionalParms, Public, NetServer)
// Parameters:
// class UGearboxDialogEventTag*  EventTag                       (Parm)
// class AActor*                  Other                          (OptionalParm, Parm)
// class UObject*                 ObjectParameter                (OptionalParm, Parm)

void AGearboxPawn::ServerDialog_TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.ServerDialog_TriggerEvent");

	AGearboxPawn_ServerDialog_TriggerEvent_Params params;
	params.EventTag = EventTag;
	params.Other = Other;
	params.ObjectParameter = ObjectParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.GetReplicatedDialogData
// (Native, Public)
// Parameters:
// struct FGearboxDialogReplicatedData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGearboxDialogReplicatedData AGearboxPawn::GetReplicatedDialogData()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetReplicatedDialogData");

	AGearboxPawn_GetReplicatedDialogData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.SetReplicatedDialogData
// (Native, Public, HasOutParms)
// Parameters:
// class UGearboxDialogAct_Talk*  TalkAct                        (Parm)
// struct FGearboxDialogData      Data                           (Parm, OutParm)

void AGearboxPawn::SetReplicatedDialogData(class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.SetReplicatedDialogData");

	AGearboxPawn_SetReplicatedDialogData_Params params;
	params.TalkAct = TalkAct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function GearboxFramework.GearboxPawn.GetDialogGroups
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// TArray<class UGearboxDialogGroup*> Groups                         (Parm, OutParm, NeedCtorLink)

void AGearboxPawn::GetDialogGroups(TArray<class UGearboxDialogGroup*>* Groups)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetDialogGroups");

	AGearboxPawn_GetDialogGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;
}


// Function GearboxFramework.GearboxPawn.GetDialogComponent
// (Simulated, Native, Public)
// Parameters:
// class UGearboxDialogComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UGearboxDialogComponent* AGearboxPawn::GetDialogComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetDialogComponent");

	AGearboxPawn_GetDialogComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetDialogNameTag
// (Simulated, Native, Public)
// Parameters:
// class UGearboxDialogNameTag*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogNameTag* AGearboxPawn::GetDialogNameTag()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetDialogNameTag");

	AGearboxPawn_GetDialogNameTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.CanTalk
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPawn::CanTalk()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.CanTalk");

	AGearboxPawn_CanTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.OnCoverStateChanged
// (Defined, Simulated, Protected)

void AGearboxPawn::OnCoverStateChanged()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.OnCoverStateChanged");

	AGearboxPawn_OnCoverStateChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.ServerSetCoverState
// (Defined, Net, NetReliable, Protected, NetServer)
// Parameters:
// struct FGearboxCoverState      NewCoverState                  (Parm)

void AGearboxPawn::ServerSetCoverState(const struct FGearboxCoverState& NewCoverState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.ServerSetCoverState");

	AGearboxPawn_ServerSetCoverState_Params params;
	params.NewCoverState = NewCoverState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.SetCoverState
// (Defined, Event, Public)
// Parameters:
// struct FGearboxCoverState      NewCoverState                  (Parm)

void AGearboxPawn::SetCoverState(const struct FGearboxCoverState& NewCoverState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.SetCoverState");

	AGearboxPawn_SetCoverState_Params params;
	params.NewCoverState = NewCoverState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.GetMountAnimDistanceForSpeed
// (Native, Public)
// Parameters:
// unsigned char                  TheSpeed                       (Parm)
// unsigned char                  CoverHeight                    (Parm)
// unsigned char                  CoverDir                       (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float AGearboxPawn::GetMountAnimDistanceForSpeed(unsigned char TheSpeed, unsigned char CoverHeight, unsigned char CoverDir)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetMountAnimDistanceForSpeed");

	AGearboxPawn_GetMountAnimDistanceForSpeed_Params params;
	params.TheSpeed = TheSpeed;
	params.CoverHeight = CoverHeight;
	params.CoverDir = CoverDir;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetSpotOthersShouldLookAt
// (Defined, Simulated, Event, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGearboxPawn::GetSpotOthersShouldLookAt()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetSpotOthersShouldLookAt");

	AGearboxPawn_GetSpotOthersShouldLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.SetReplicatedSMData
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// struct FSpecialMoveData        NewSMData                      (Parm, OutParm)

void AGearboxPawn::SetReplicatedSMData(struct FSpecialMoveData* NewSMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.SetReplicatedSMData");

	AGearboxPawn_SetReplicatedSMData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewSMData != nullptr)
		*NewSMData = params.NewSMData;
}


// Function GearboxFramework.GearboxPawn.ServerSpecialMove_StopAny
// (Defined, Net, NetReliable, Event, Public, NetServer)

void AGearboxPawn::ServerSpecialMove_StopAny()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.ServerSpecialMove_StopAny");

	AGearboxPawn_ServerSpecialMove_StopAny_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Stop
// (Defined, Net, NetReliable, Event, Public, NetServer)
// Parameters:
// class USpecialMoveDefinition*  OldSMD                         (Parm)

void AGearboxPawn::ServerSpecialMove_Stop(class USpecialMoveDefinition* OldSMD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.ServerSpecialMove_Stop");

	AGearboxPawn_ServerSpecialMove_Stop_Params params;
	params.OldSMD = OldSMD;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Queue
// (Defined, Net, NetReliable, Event, HasOptionalParms, Public, NetServer)
// Parameters:
// class USpecialMoveDefinition*  NewSMD                         (Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          Duration                       (OptionalParm, Parm)
// struct FName                   CallbackName                   (OptionalParm, Parm)
// class UObject*                 CallbackObject                 (OptionalParm, Parm)
// class UObject*                 Data                           (OptionalParm, Parm)

void AGearboxPawn::ServerSpecialMove_Queue(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.ServerSpecialMove_Queue");

	AGearboxPawn_ServerSpecialMove_Queue_Params params;
	params.NewSMD = NewSMD;
	params.PlayRateScale = PlayRateScale;
	params.Duration = Duration;
	params.CallbackName = CallbackName;
	params.CallbackObject = CallbackObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.ServerSpecialMove_Play
// (Defined, Net, NetReliable, Event, HasOptionalParms, Public, NetServer)
// Parameters:
// class USpecialMoveDefinition*  NewSMD                         (Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          Duration                       (OptionalParm, Parm)
// struct FName                   CallbackName                   (OptionalParm, Parm)
// class UObject*                 CallbackObject                 (OptionalParm, Parm)
// class UObject*                 Data                           (OptionalParm, Parm)

void AGearboxPawn::ServerSpecialMove_Play(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.ServerSpecialMove_Play");

	AGearboxPawn_ServerSpecialMove_Play_Params params;
	params.NewSMD = NewSMD;
	params.PlayRateScale = PlayRateScale;
	params.Duration = Duration;
	params.CallbackName = CallbackName;
	params.CallbackObject = CallbackObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionRotationMode
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AGearboxPawn::GetDefaultRootMotionRotationMode()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetDefaultRootMotionRotationMode");

	AGearboxPawn_GetDefaultRootMotionRotationMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetDefaultRootMotionMode
// (Simulated, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AGearboxPawn::GetDefaultRootMotionMode()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetDefaultRootMotionMode");

	AGearboxPawn_GetDefaultRootMotionMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetSkelMesh
// (Simulated, Native, Public)
// Parameters:
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class USkeletalMeshComponent* AGearboxPawn::GetSkelMesh()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetSkelMesh");

	AGearboxPawn_GetSkelMesh_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetSMComponent
// (Simulated, Native, Public)
// Parameters:
// class USpecialMoveComponent*   ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class USpecialMoveComponent* AGearboxPawn::GetSMComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetSMComponent");

	AGearboxPawn_GetSMComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetActor
// (Simulated, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AGearboxPawn::GetActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetActor");

	AGearboxPawn_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.GetNavigationHandle
// (Native, Public)
// Parameters:
// class UGearboxNavigationHandle* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxNavigationHandle* AGearboxPawn::GetNavigationHandle()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.GetNavigationHandle");

	AGearboxPawn_GetNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.PlayHit
// (Defined, HasOptionalParms, Public)
// Parameters:
// class APawn*                   SomePawn                       (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 Momentum                       (Parm)
// struct FTraceHitInfo           HitInfo                        (Parm)
// class UDamagePipeline*         Pipeline                       (OptionalParm, Parm)

void AGearboxPawn::PlayHit(class APawn* SomePawn, const struct FVector& HitLocation, class UClass* DamageType, const struct FVector& Momentum, const struct FTraceHitInfo& HitInfo, class UDamagePipeline* Pipeline)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.PlayHit");

	AGearboxPawn_PlayHit_Params params;
	params.SomePawn = SomePawn;
	params.HitLocation = HitLocation;
	params.DamageType = DamageType;
	params.Momentum = Momentum;
	params.HitInfo = HitInfo;
	params.Pipeline = Pipeline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void AGearboxPawn::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.ReplicatedEvent");

	AGearboxPawn_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.Died
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AController*             Killer                         (Parm)
// class UClass*                  DamageType                     (Parm)
// struct FVector                 HitLocation                    (Parm)
// class UDamagePipeline*         Pipeline                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPawn::Died(class AController* Killer, class UClass* DamageType, const struct FVector& HitLocation, class UDamagePipeline* Pipeline)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.Died");

	AGearboxPawn_Died_Params params;
	params.Killer = Killer;
	params.DamageType = DamageType;
	params.HitLocation = HitLocation;
	params.Pipeline = Pipeline;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPawn.SetMovementPhysics
// (Defined, Public)

void AGearboxPawn::SetMovementPhysics()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.SetMovementPhysics");

	AGearboxPawn_SetMovementPhysics_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.PostBeginPlay
// (Defined, Simulated, Event, Public)

void AGearboxPawn::PostBeginPlay()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.PostBeginPlay");

	AGearboxPawn_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.NotifyShotAtBy
// (Native, Public)
// Parameters:
// class AGearboxPawn*            ShootingPawn                   (Parm)

void AGearboxPawn::NotifyShotAtBy(class AGearboxPawn* ShootingPawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.NotifyShotAtBy");

	AGearboxPawn_NotifyShotAtBy_Params params;
	params.ShootingPawn = ShootingPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPawn.HaveIBeenShotAtRecently
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPawn::HaveIBeenShotAtRecently()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPawn.HaveIBeenShotAtRecently");

	AGearboxPawn_HaveIBeenShotAtRecently_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkTypes.UTF8toString
// (Native, Static, Public)
// Parameters:
// TArray<unsigned char>          inputBytes                     (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkTypes::UTF8toString(TArray<unsigned char> inputBytes)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkTypes.UTF8toString");

	USparkTypes_UTF8toString_Params params;
	params.inputBytes = inputBytes;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkTypes.OnEntitlementsUpdated
// (Public, Delegate)
// Parameters:
// class UGearboxAccountData*     GbxAccount                     (Parm)

void USparkTypes::OnEntitlementsUpdated(class UGearboxAccountData* GbxAccount)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkTypes.OnEntitlementsUpdated");

	USparkTypes_OnEntitlementsUpdated_Params params;
	params.GbxAccount = GbxAccount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkTypes.OnSparkEmergencyMessageUpdated
// (Public, Delegate)

void USparkTypes::OnSparkEmergencyMessageUpdated()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkTypes.OnSparkEmergencyMessageUpdated");

	USparkTypes_OnSparkEmergencyMessageUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkTypes.OnSparkInitialized
// (Public, Delegate)
// Parameters:
// unsigned char                  InitializedResult              (Parm)

void USparkTypes::OnSparkInitialized(unsigned char InitializedResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkTypes.OnSparkInitialized");

	USparkTypes_OnSparkInitialized_Params params;
	params.InitializedResult = InitializedResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkTypes.OnSparkConfigReceived
// (Public, Delegate)
// Parameters:
// TArray<unsigned char>          ConfigArray                    (Parm, NeedCtorLink)

void USparkTypes::OnSparkConfigReceived(TArray<unsigned char> ConfigArray)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkTypes.OnSparkConfigReceived");

	USparkTypes_OnSparkConfigReceived_Params params;
	params.ConfigArray = ConfigArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkTypes.OnSparkRequestComplete
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void USparkTypes::OnSparkRequestComplete(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkTypes.OnSparkRequestComplete");

	USparkTypes_OnSparkRequestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.SparkInterface.RemoveScriptCallback
// (Native, Public)
// Parameters:
// int                            HttpRequestId                  (Parm)

void USparkInterface::RemoveScriptCallback(int HttpRequestId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.RemoveScriptCallback");

	USparkInterface_RemoveScriptCallback_Params params;
	params.HttpRequestId = HttpRequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.GetNewsService
// (Public)
// Parameters:
// class USparkNews*              ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkNews* USparkInterface::GetNewsService()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetNewsService");

	USparkInterface_GetNewsService_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetTitleStorageServiceConfiguration
// (Native, Public)
// Parameters:
// class USparkServiceConfiguration* ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkServiceConfiguration* USparkInterface::GetTitleStorageServiceConfiguration()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetTitleStorageServiceConfiguration");

	USparkInterface_GetTitleStorageServiceConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetTitleStorageUrl
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetTitleStorageUrl()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetTitleStorageUrl");

	USparkInterface_GetTitleStorageUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.ClearGearboxAccountData
// (Public)
// Parameters:
// bool                           IncludePrimaryPlayer           (Parm)

void USparkInterface::ClearGearboxAccountData(bool IncludePrimaryPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.ClearGearboxAccountData");

	USparkInterface_ClearGearboxAccountData_Params params;
	params.IncludePrimaryPlayer = IncludePrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.SignOutGearboxAccount
// (Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)

void USparkInterface::SignOutGearboxAccount(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.SignOutGearboxAccount");

	USparkInterface_SignOutGearboxAccount_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.SignInGearboxAccount
// (Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)

void USparkInterface::SignInGearboxAccount(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.SignInGearboxAccount");

	USparkInterface_SignInGearboxAccount_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.GetGearboxAccountData
// (Event, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// class UGearboxAccountData*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxAccountData* USparkInterface::GetGearboxAccountData(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetGearboxAccountData");

	USparkInterface_GetGearboxAccountData_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.IsGearboxAccountAuthenticated
// (Event, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterface::IsGearboxAccountAuthenticated(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.IsGearboxAccountAuthenticated");

	USparkInterface_IsGearboxAccountAuthenticated_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.IsGearboxAccountSignedIn
// (Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterface::IsGearboxAccountSignedIn(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.IsGearboxAccountSignedIn");

	USparkInterface_IsGearboxAccountSignedIn_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.ConvertUtcTimeToLocalTime
// (Public)
// Parameters:
// struct FString                 UtcTime                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::ConvertUtcTimeToLocalTime(const struct FString& UtcTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.ConvertUtcTimeToLocalTime");

	USparkInterface_ConvertUtcTimeToLocalTime_Params params;
	params.UtcTime = UtcTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.ShouldUpdateEmergencyMessage
// (Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterface::ShouldUpdateEmergencyMessage()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.ShouldUpdateEmergencyMessage");

	USparkInterface_ShouldUpdateEmergencyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetEmergencyMessage
// (Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetEmergencyMessage()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetEmergencyMessage");

	USparkInterface_GetEmergencyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.SetEmergencyMessage
// (Public)
// Parameters:
// struct FString                 Message                        (Parm, NeedCtorLink)

void USparkInterface::SetEmergencyMessage(const struct FString& Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.SetEmergencyMessage");

	USparkInterface_SetEmergencyMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.GetPlatformLoginNameFromSplitscreenIndex
// (Event, Public)
// Parameters:
// int                            SplitscreenIndex               (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetPlatformLoginNameFromSplitscreenIndex(int SplitscreenIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetPlatformLoginNameFromSplitscreenIndex");

	USparkInterface_GetPlatformLoginNameFromSplitscreenIndex_Params params;
	params.SplitscreenIndex = SplitscreenIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetPlatformLoginNameFromController
// (Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetPlatformLoginNameFromController(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetPlatformLoginNameFromController");

	USparkInterface_GetPlatformLoginNameFromController_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.IncreaseInteractionTries
// (Public)

void USparkInterface::IncreaseInteractionTries()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.IncreaseInteractionTries");

	USparkInterface_IncreaseInteractionTries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.GetInteractionTries
// (Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterface::GetInteractionTries()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetInteractionTries");

	USparkInterface_GetInteractionTries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetInteractionGraceTries
// (Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterface::GetInteractionGraceTries()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetInteractionGraceTries");

	USparkInterface_GetInteractionGraceTries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetInteractionPunishmentMinWaitSeconds
// (Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterface::GetInteractionPunishmentMinWaitSeconds()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetInteractionPunishmentMinWaitSeconds");

	USparkInterface_GetInteractionPunishmentMinWaitSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetInteractionMinWaitSeconds
// (Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterface::GetInteractionMinWaitSeconds()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetInteractionMinWaitSeconds");

	USparkInterface_GetInteractionMinWaitSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.IsTmsComplete
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterface::IsTmsComplete()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.IsTmsComplete");

	USparkInterface_IsTmsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.SetTmsComplete
// (Public)

void USparkInterface::SetTmsComplete()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.SetTmsComplete");

	USparkInterface_SetTmsComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.GetSparkInitialization
// (Public)
// Parameters:
// class USparkInitializationProcess* ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkInitializationProcess* USparkInterface::GetSparkInitialization()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetSparkInitialization");

	USparkInterface_GetSparkInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.RestartSparkInitialization
// (Event, Public)
// Parameters:
// bool                           bPrimary                       (Parm)

void USparkInterface::RestartSparkInitialization(bool bPrimary)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.RestartSparkInitialization");

	USparkInterface_RestartSparkInitialization_Params params;
	params.bPrimary = bPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.RestartSparkInitializationFromScript
// (Public)
// Parameters:
// bool                           bPrimary                       (Parm)
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)
// struct FScriptDelegate         SparkEmergencyMessageDelegate  (Parm, NeedCtorLink)

void USparkInterface::RestartSparkInitializationFromScript(bool bPrimary, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.RestartSparkInitializationFromScript");

	USparkInterface_RestartSparkInitializationFromScript_Params params;
	params.bPrimary = bPrimary;
	params.SparkInitializedDelegate = SparkInitializedDelegate;
	params.SparkEmergencyMessageDelegate = SparkEmergencyMessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.StartSparkInitialization
// (Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)
// struct FScriptDelegate         SparkEmergencyMessageDelegate  (Parm, NeedCtorLink)
// struct FScriptDelegate         EntitlementsUpdatedDelegate    (Parm, NeedCtorLink)

void USparkInterface::StartSparkInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.StartSparkInitialization");

	USparkInterface_StartSparkInitialization_Params params;
	params.ControllerId = ControllerId;
	params.SparkInitializedDelegate = SparkInitializedDelegate;
	params.SparkEmergencyMessageDelegate = SparkEmergencyMessageDelegate;
	params.EntitlementsUpdatedDelegate = EntitlementsUpdatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.StartSecondaryInitialization
// (Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)
// struct FScriptDelegate         EntitlementsUpdatedDelegate    (Parm, NeedCtorLink)

void USparkInterface::StartSecondaryInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.StartSecondaryInitialization");

	USparkInterface_StartSecondaryInitialization_Params params;
	params.ControllerId = ControllerId;
	params.SparkInitializedDelegate = SparkInitializedDelegate;
	params.EntitlementsUpdatedDelegate = EntitlementsUpdatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.GetGameName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetGameName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetGameName");

	USparkInterface_GetGameName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetHardwareName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetHardwareName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetHardwareName");

	USparkInterface_GetHardwareName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetPlatformName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetPlatformName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetPlatformName");

	USparkInterface_GetPlatformName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.GetPlatformTicket
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bPrimary                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterface::GetPlatformTicket(int ControllerId, bool bPrimary)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.GetPlatformTicket");

	USparkInterface_GetPlatformTicket_Params params;
	params.ControllerId = ControllerId;
	params.bPrimary = bPrimary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.ClearSparkConfigReceivedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         SparkConfigReceivedDelegate    (Parm, NeedCtorLink)

void USparkInterface::ClearSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.ClearSparkConfigReceivedDelegate");

	USparkInterface_ClearSparkConfigReceivedDelegate_Params params;
	params.SparkConfigReceivedDelegate = SparkConfigReceivedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.AddSparkConfigReceivedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         SparkConfigReceivedDelegate    (Parm, NeedCtorLink)

void USparkInterface::AddSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.AddSparkConfigReceivedDelegate");

	USparkInterface_AddSparkConfigReceivedDelegate_Params params;
	params.SparkConfigReceivedDelegate = SparkConfigReceivedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.ResetInitializationStatus
// (Public)

void USparkInterface::ResetInitializationStatus()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.ResetInitializationStatus");

	USparkInterface_ResetInitializationStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterface.IsSparkEnabled
// (Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterface::IsSparkEnabled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.IsSparkEnabled");

	USparkInterface_IsSparkEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.IssueSparkStringRequest
// (Public, HasOutParms)
// Parameters:
// struct FHttpParameters         HttpRequestParameters          (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 RequestData                    (Const, Parm, NeedCtorLink)
// struct FScriptDelegate         SparkRequestCompleteDelegate   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterface::IssueSparkStringRequest(const struct FString& URL, const struct FString& RequestData, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.IssueSparkStringRequest");

	USparkInterface_IssueSparkStringRequest_Params params;
	params.URL = URL;
	params.RequestData = RequestData;
	params.SparkRequestCompleteDelegate = SparkRequestCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HttpRequestParameters != nullptr)
		*HttpRequestParameters = params.HttpRequestParameters;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterface.IssueSparkRequest
// (Public, HasOutParms)
// Parameters:
// struct FHttpParameters         HttpRequestParameters          (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 URL                            (Parm, NeedCtorLink)
// TArray<unsigned char>          RequestData                    (Const, Parm, OutParm, NeedCtorLink)
// struct FScriptDelegate         SparkRequestCompleteDelegate   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterface::IssueSparkRequest(const struct FString& URL, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters, TArray<unsigned char>* RequestData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterface.IssueSparkRequest");

	USparkInterface_IssueSparkRequest_Params params;
	params.URL = URL;
	params.SparkRequestCompleteDelegate = SparkRequestCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HttpRequestParameters != nullptr)
		*HttpRequestParameters = params.HttpRequestParameters;
	if (RequestData != nullptr)
		*RequestData = params.RequestData;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.HasSignedAllEulas
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::HasSignedAllEulas()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.HasSignedAllEulas");

	UGearboxAccountData_HasSignedAllEulas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.CountEntitlement
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   EntitlementName                (Parm)
// bool                           bIgnoreLocallyConsumed         (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGearboxAccountData::CountEntitlement(const struct FName& EntitlementName, bool bIgnoreLocallyConsumed)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.CountEntitlement");

	UGearboxAccountData_CountEntitlement_Params params;
	params.EntitlementName = EntitlementName;
	params.bIgnoreLocallyConsumed = bIgnoreLocallyConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.GetTotalGoldenKeyCount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGearboxAccountData::GetTotalGoldenKeyCount()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.GetTotalGoldenKeyCount");

	UGearboxAccountData_GetTotalGoldenKeyCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.GetGoldenKeyCount
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bIgnoreLocallyConsumed         (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGearboxAccountData::GetGoldenKeyCount(bool bIgnoreLocallyConsumed)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.GetGoldenKeyCount");

	UGearboxAccountData_GetGoldenKeyCount_Params params;
	params.bIgnoreLocallyConsumed = bIgnoreLocallyConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.HasGoldenKey
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bIgnoreLocallyConsumed         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::HasGoldenKey(bool bIgnoreLocallyConsumed)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.HasGoldenKey");

	UGearboxAccountData_HasGoldenKey_Params params;
	params.bIgnoreLocallyConsumed = bIgnoreLocallyConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.HasDeveloperSkin
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::HasDeveloperSkin()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.HasDeveloperSkin");

	UGearboxAccountData_HasDeveloperSkin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.IsDeveloper
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::IsDeveloper()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.IsDeveloper");

	UGearboxAccountData_IsDeveloper_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.MarkOffersNotified
// (Defined, Public)

void UGearboxAccountData::MarkOffersNotified()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.MarkOffersNotified");

	UGearboxAccountData_MarkOffersNotified_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountData.GetUnnotifiedOffers
// (Defined, Public)
// Parameters:
// TArray<class UGearboxAccountOffer*> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<class UGearboxAccountOffer*> UGearboxAccountData::GetUnnotifiedOffers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.GetUnnotifiedOffers");

	UGearboxAccountData_GetUnnotifiedOffers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.GetEntitlementWithName
// (Defined, Public)
// Parameters:
// struct FName                   EntitlementName                (Parm)
// class UGearboxAccountEntitlement* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxAccountEntitlement* UGearboxAccountData::GetEntitlementWithName(const struct FName& EntitlementName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.GetEntitlementWithName");

	UGearboxAccountData_GetEntitlementWithName_Params params;
	params.EntitlementName = EntitlementName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.GetEntitlementWithId
// (Defined, Public)
// Parameters:
// int                            Id                             (Parm)
// class UGearboxAccountEntitlement* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxAccountEntitlement* UGearboxAccountData::GetEntitlementWithId(int Id)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.GetEntitlementWithId");

	UGearboxAccountData_GetEntitlementWithId_Params params;
	params.Id = Id;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.HasEntitlement
// (Defined, HasOptionalParms, Public)
// Parameters:
// struct FName                   EntitlementName                (Parm)
// bool                           bIgnoreLocallyConsumed         (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::HasEntitlement(const struct FName& EntitlementName, bool bIgnoreLocallyConsumed)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.HasEntitlement");

	UGearboxAccountData_HasEntitlement_Params params;
	params.EntitlementName = EntitlementName;
	params.bIgnoreLocallyConsumed = bIgnoreLocallyConsumed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.RemoveEntitlement
// (Defined, Public)
// Parameters:
// class UGearboxAccountEntitlement* Entitlement                    (Parm)

void UGearboxAccountData::RemoveEntitlement(class UGearboxAccountEntitlement* Entitlement)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.RemoveEntitlement");

	UGearboxAccountData_RemoveEntitlement_Params params;
	params.Entitlement = Entitlement;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountData.ReplaceEntitlements
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// TArray<struct FEntitlementResult> NewEntitlements                (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FOfferResult>    NewOffers                      (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountData::ReplaceEntitlements(TArray<struct FEntitlementResult>* NewEntitlements, TArray<struct FOfferResult>* NewOffers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.ReplaceEntitlements");

	UGearboxAccountData_ReplaceEntitlements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewEntitlements != nullptr)
		*NewEntitlements = params.NewEntitlements;
	if (NewOffers != nullptr)
		*NewOffers = params.NewOffers;
}


// Function GearboxFramework.GearboxAccountData.ReplaceServices
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FServiceResult>  NewServices                    (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountData::ReplaceServices(TArray<struct FServiceResult>* NewServices)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.ReplaceServices");

	UGearboxAccountData_ReplaceServices_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewServices != nullptr)
		*NewServices = params.NewServices;
}


// Function GearboxFramework.GearboxAccountData.HandleReloadEntitlementsResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountData::HandleReloadEntitlementsResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.HandleReloadEntitlementsResponse");

	UGearboxAccountData_HandleReloadEntitlementsResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountData.ReloadEntitlements
// (Defined, Public, HasDefaults)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::ReloadEntitlements()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.ReloadEntitlements");

	UGearboxAccountData_ReloadEntitlements_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.ResetEntitlementUpdateTimer
// (Final, Native, Public)

void UGearboxAccountData::ResetEntitlementUpdateTimer()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.ResetEntitlementUpdateTimer");

	UGearboxAccountData_ResetEntitlementUpdateTimer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountData.CanReloadEntitlements
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::CanReloadEntitlements()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.CanReloadEntitlements");

	UGearboxAccountData_CanReloadEntitlements_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.TriggerEntitlementsUpdatedDelegates
// (Defined, Public)

void UGearboxAccountData::TriggerEntitlementsUpdatedDelegates()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.TriggerEntitlementsUpdatedDelegates");

	UGearboxAccountData_TriggerEntitlementsUpdatedDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountData.ClearEntitlementsUpdatedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         EntitlementsUpdatedDelegate    (Parm, NeedCtorLink)

void UGearboxAccountData::ClearEntitlementsUpdatedDelegate(const struct FScriptDelegate& EntitlementsUpdatedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.ClearEntitlementsUpdatedDelegate");

	UGearboxAccountData_ClearEntitlementsUpdatedDelegate_Params params;
	params.EntitlementsUpdatedDelegate = EntitlementsUpdatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountData.AddEntitlementsUpdatedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         EntitlementsUpdatedDelegate    (Parm, NeedCtorLink)

void UGearboxAccountData::AddEntitlementsUpdatedDelegate(const struct FScriptDelegate& EntitlementsUpdatedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.AddEntitlementsUpdatedDelegate");

	UGearboxAccountData_AddEntitlementsUpdatedDelegate_Params params;
	params.EntitlementsUpdatedDelegate = EntitlementsUpdatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountData.GetService
// (Defined, Event, Public)
// Parameters:
// struct FName                   ServiceName                    (Parm)
// class USparkServiceConfiguration* ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkServiceConfiguration* UGearboxAccountData::GetService(const struct FName& ServiceName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.GetService");

	UGearboxAccountData_GetService_Params params;
	params.ServiceName = ServiceName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.Clear
// (Defined, Public)

void UGearboxAccountData::Clear()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.Clear");

	UGearboxAccountData_Clear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountData.ExtractArchwayResultJson
// (Defined, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          Data                           (Const, Parm, OutParm, NeedCtorLink)
// struct FArchwayResult          ArchwayData                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::ExtractArchwayResultJson(TArray<unsigned char>* Data, struct FArchwayResult* ArchwayData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.ExtractArchwayResultJson");

	UGearboxAccountData_ExtractArchwayResultJson_Params params;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (ArchwayData != nullptr)
		*ArchwayData = params.ArchwayData;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountData.ExtractArchwayResult
// (Native, Static, Public, HasOutParms)
// Parameters:
// TArray<unsigned char>          Data                           (Const, Parm, OutParm, NeedCtorLink)
// struct FArchwayResult          ArchwayData                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountData::ExtractArchwayResult(TArray<unsigned char>* Data, struct FArchwayResult* ArchwayData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountData.ExtractArchwayResult");

	UGearboxAccountData_ExtractArchwayResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
	if (ArchwayData != nullptr)
		*ArchwayData = params.ArchwayData;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountActions.HandleEULAInteractionCompleteResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleEULAInteractionCompleteResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleEULAInteractionCompleteResponse");

	UGearboxAccountActions_HandleEULAInteractionCompleteResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.HandleEULAInteractionComplete
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// TArray<struct FEULAData>       EULAState                      (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleEULAInteractionComplete(unsigned char ControllerId, TArray<struct FEULAData>* EULAState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleEULAInteractionComplete");

	UGearboxAccountActions_HandleEULAInteractionComplete_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EULAState != nullptr)
		*EULAState = params.EULAState;
}


// Function GearboxFramework.GearboxAccountActions.HandleEULAChainResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleEULAChainResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleEULAChainResponse");

	UGearboxAccountActions_HandleEULAChainResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.ReadEULAChain
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// bool                           bAllowRetries                  (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGearboxAccountActions::ReadEULAChain(unsigned char ControllerId, bool bAllowRetries)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.ReadEULAChain");

	UGearboxAccountActions_ReadEULAChain_Params params;
	params.ControllerId = ControllerId;
	params.bAllowRetries = bAllowRetries;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountActions.HandleOffersNotifiedResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleOffersNotifiedResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleOffersNotifiedResponse");

	UGearboxAccountActions_HandleOffersNotifiedResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.HandleBulkEntitlementsConsumedResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleBulkEntitlementsConsumedResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleBulkEntitlementsConsumedResponse");

	UGearboxAccountActions_HandleBulkEntitlementsConsumedResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.HandleEntitlementConsumedResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleEntitlementConsumedResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleEntitlementConsumedResponse");

	UGearboxAccountActions_HandleEntitlementConsumedResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.HandleCodeRedeemedResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleCodeRedeemedResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleCodeRedeemedResponse");

	UGearboxAccountActions_HandleCodeRedeemedResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.HandleResetPasswordResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleResetPasswordResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleResetPasswordResponse");

	UGearboxAccountActions_HandleResetPasswordResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.HandleSignUpResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleSignUpResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleSignUpResponse");

	UGearboxAccountActions_HandleSignUpResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.HandleSignInResponse
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void UGearboxAccountActions::HandleSignInResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.HandleSignInResponse");

	UGearboxAccountActions_HandleSignInResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.GearboxAccountActions.ExtractArchwayResult
// (Native, Public)
// Parameters:
// TArray<unsigned char>          Data                           (Parm, NeedCtorLink)
// struct FArchwayResult          ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FArchwayResult UGearboxAccountActions::ExtractArchwayResult(TArray<unsigned char> Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.ExtractArchwayResult");

	UGearboxAccountActions_ExtractArchwayResult_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountActions.MarkOffersNotified
// (Defined, Public, HasDefaults)
// Parameters:
// unsigned char                  ControllerId                   (Parm)

void UGearboxAccountActions::MarkOffersNotified(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.MarkOffersNotified");

	UGearboxAccountActions_MarkOffersNotified_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.LocallyConsumeEntitlementWithCount
// (Defined, Public)
// Parameters:
// struct FName                   EntitlementName                (Parm)
// int                            NumToConsume                   (Parm)
// unsigned char                  ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAccountActions::LocallyConsumeEntitlementWithCount(const struct FName& EntitlementName, int NumToConsume, unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.LocallyConsumeEntitlementWithCount");

	UGearboxAccountActions_LocallyConsumeEntitlementWithCount_Params params;
	params.EntitlementName = EntitlementName;
	params.NumToConsume = NumToConsume;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountActions.ConsumeEntitlementsWithCounts
// (Defined, Event, Public, HasDefaults)
// Parameters:
// TArray<class UGearboxAccountEntitlement*> EntitlementsToConsume          (Parm, NeedCtorLink)
// TArray<int>                    Counts                         (Parm, NeedCtorLink)
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         EntitlementConsumedDelegate    (Parm, NeedCtorLink)

void UGearboxAccountActions::ConsumeEntitlementsWithCounts(TArray<class UGearboxAccountEntitlement*> EntitlementsToConsume, TArray<int> Counts, unsigned char ControllerId, const struct FScriptDelegate& EntitlementConsumedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.ConsumeEntitlementsWithCounts");

	UGearboxAccountActions_ConsumeEntitlementsWithCounts_Params params;
	params.EntitlementsToConsume = EntitlementsToConsume;
	params.Counts = Counts;
	params.ControllerId = ControllerId;
	params.EntitlementConsumedDelegate = EntitlementConsumedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.ConsumeEntitlementWithCount
// (Defined, Public, HasDefaults)
// Parameters:
// struct FName                   EntitlementName                (Parm)
// int                            Count                          (Parm)
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         EntitlementConsumedDelegate    (Parm, NeedCtorLink)

void UGearboxAccountActions::ConsumeEntitlementWithCount(const struct FName& EntitlementName, int Count, unsigned char ControllerId, const struct FScriptDelegate& EntitlementConsumedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.ConsumeEntitlementWithCount");

	UGearboxAccountActions_ConsumeEntitlementWithCount_Params params;
	params.EntitlementName = EntitlementName;
	params.Count = Count;
	params.ControllerId = ControllerId;
	params.EntitlementConsumedDelegate = EntitlementConsumedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.RedeemCode
// (Defined, Public, HasDefaults)
// Parameters:
// struct FString                 Code                           (Parm, NeedCtorLink)
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         CodeRedeemedDelegate           (Parm, NeedCtorLink)

void UGearboxAccountActions::RedeemCode(const struct FString& Code, unsigned char ControllerId, const struct FScriptDelegate& CodeRedeemedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.RedeemCode");

	UGearboxAccountActions_RedeemCode_Params params;
	params.Code = Code;
	params.ControllerId = ControllerId;
	params.CodeRedeemedDelegate = CodeRedeemedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.ResetPasswordGearboxAccount
// (Defined, Public, HasDefaults)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         ResetPasswordDelegate          (Parm, NeedCtorLink)

void UGearboxAccountActions::ResetPasswordGearboxAccount(const struct FString& Email, unsigned char ControllerId, const struct FScriptDelegate& ResetPasswordDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.ResetPasswordGearboxAccount");

	UGearboxAccountActions_ResetPasswordGearboxAccount_Params params;
	params.Email = Email;
	params.ControllerId = ControllerId;
	params.ResetPasswordDelegate = ResetPasswordDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.EscapeJson
// (Defined, Public)
// Parameters:
// struct FString                 Input                          (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGearboxAccountActions::EscapeJson(const struct FString& Input)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.EscapeJson");

	UGearboxAccountActions_EscapeJson_Params params;
	params.Input = Input;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAccountActions.SignUpGearboxAccount
// (Defined, Public, HasDefaults)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// struct FString                 PasswordConfirm                (Parm, NeedCtorLink)
// struct FString                 AgeString                      (Parm, NeedCtorLink)
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         SignUpDelegate                 (Parm, NeedCtorLink)

void UGearboxAccountActions::SignUpGearboxAccount(const struct FString& Email, const struct FString& Password, const struct FString& PasswordConfirm, const struct FString& AgeString, unsigned char ControllerId, const struct FScriptDelegate& SignUpDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.SignUpGearboxAccount");

	UGearboxAccountActions_SignUpGearboxAccount_Params params;
	params.Email = Email;
	params.Password = Password;
	params.PasswordConfirm = PasswordConfirm;
	params.AgeString = AgeString;
	params.ControllerId = ControllerId;
	params.SignUpDelegate = SignUpDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.SignInGearboxAccount
// (Defined, Public, HasDefaults)
// Parameters:
// struct FString                 Email                          (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         SignInDelegate                 (Parm, NeedCtorLink)

void UGearboxAccountActions::SignInGearboxAccount(const struct FString& Email, const struct FString& Password, unsigned char ControllerId, const struct FScriptDelegate& SignInDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.SignInGearboxAccount");

	UGearboxAccountActions_SignInGearboxAccount_Params params;
	params.Email = Email;
	params.Password = Password;
	params.ControllerId = ControllerId;
	params.SignInDelegate = SignInDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.OnEntitlementConsumed
// (Public, Delegate)
// Parameters:
// unsigned char                  ConsumeResult                  (Parm)

void UGearboxAccountActions::OnEntitlementConsumed(unsigned char ConsumeResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.OnEntitlementConsumed");

	UGearboxAccountActions_OnEntitlementConsumed_Params params;
	params.ConsumeResult = ConsumeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.OnCodeRedeemed
// (HasOptionalParms, Public, Delegate)
// Parameters:
// unsigned char                  RedeemResult                   (Parm)
// struct FString                 CustomTitle                    (OptionalParm, Parm, NeedCtorLink)
// struct FString                 CustomBody                     (OptionalParm, Parm, NeedCtorLink)

void UGearboxAccountActions::OnCodeRedeemed(unsigned char RedeemResult, const struct FString& CustomTitle, const struct FString& CustomBody)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.OnCodeRedeemed");

	UGearboxAccountActions_OnCodeRedeemed_Params params;
	params.RedeemResult = RedeemResult;
	params.CustomTitle = CustomTitle;
	params.CustomBody = CustomBody;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.OnResetPasswordGearboxAccount
// (Public, Delegate)
// Parameters:
// unsigned char                  ResetResult                    (Parm)

void UGearboxAccountActions::OnResetPasswordGearboxAccount(unsigned char ResetResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.OnResetPasswordGearboxAccount");

	UGearboxAccountActions_OnResetPasswordGearboxAccount_Params params;
	params.ResetResult = ResetResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.OnSignUpGearboxAccount
// (Public, Delegate)
// Parameters:
// unsigned char                  SignUpResult                   (Parm)

void UGearboxAccountActions::OnSignUpGearboxAccount(unsigned char SignUpResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.OnSignUpGearboxAccount");

	UGearboxAccountActions_OnSignUpGearboxAccount_Params params;
	params.SignUpResult = SignUpResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAccountActions.OnSignInGearboxAccount
// (Public, Delegate)
// Parameters:
// unsigned char                  SignInResult                   (Parm)

void UGearboxAccountActions::OnSignInGearboxAccount(unsigned char SignInResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAccountActions.OnSignInGearboxAccount");

	UGearboxAccountActions_OnSignInGearboxAccount_Params params;
	params.SignInResult = SignInResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.CanPlayOnline
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPlayerController::CanPlayOnline()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.CanPlayOnline");

	AGearboxPlayerController_CanPlayOnline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.DisplayShiftCommunicationFailedDialog
// (Public)

void AGearboxPlayerController::DisplayShiftCommunicationFailedDialog()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.DisplayShiftCommunicationFailedDialog");

	AGearboxPlayerController_DisplayShiftCommunicationFailedDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ShowEULAScreen
// (Public, HasOutParms)
// Parameters:
// TArray<struct FEULAData>       EulaChain                      (Const, Parm, OutParm, NeedCtorLink)

void AGearboxPlayerController::ShowEULAScreen(TArray<struct FEULAData>* EulaChain)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ShowEULAScreen");

	AGearboxPlayerController_ShowEULAScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EulaChain != nullptr)
		*EulaChain = params.EulaChain;
}


// Function GearboxFramework.GearboxPlayerController.RequestTitleStorageFile
// (Defined, HasOptionalParms, Public, HasDefaults)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FScriptDelegate         TitleStorageRequestCompleteDelegate (Parm, NeedCtorLink)
// unsigned char                  AcceptsType                    (Parm)
// struct FString                 CustomAcceptsType              (OptionalParm, Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGearboxPlayerController::RequestTitleStorageFile(const struct FString& Filename, const struct FScriptDelegate& TitleStorageRequestCompleteDelegate, unsigned char AcceptsType, const struct FString& CustomAcceptsType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.RequestTitleStorageFile");

	AGearboxPlayerController_RequestTitleStorageFile_Params params;
	params.Filename = Filename;
	params.TitleStorageRequestCompleteDelegate = TitleStorageRequestCompleteDelegate;
	params.AcceptsType = AcceptsType;
	params.CustomAcceptsType = CustomAcceptsType;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.ShowSparkID
// (Defined, Exec, Public)

void AGearboxPlayerController::ShowSparkID()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ShowSparkID");

	AGearboxPlayerController_ShowSparkID_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ShouldCheckRemoteControlCheckbox
// (Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  CheckBoxName                   (Parm)
// class AHUD*                    HUD                            (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPlayerController::ShouldCheckRemoteControlCheckbox(unsigned char CheckBoxName, class AHUD* HUD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ShouldCheckRemoteControlCheckbox");

	AGearboxPlayerController_ShouldCheckRemoteControlCheckbox_Params params;
	params.CheckBoxName = CheckBoxName;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.DisplayDebugSpark
// (Native, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void AGearboxPlayerController::DisplayDebugSpark(class AHUD* HUD, float* out_YL, float* out_YPos)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.DisplayDebugSpark");

	AGearboxPlayerController_DisplayDebugSpark_Params params;
	params.HUD = HUD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GearboxFramework.GearboxPlayerController.AITree
// (Defined, Exec, Public)

void AGearboxPlayerController::AITree()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AITree");

	AGearboxPlayerController_AITree_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIToggleTargetViewCones
// (Defined, Exec, Public)

void AGearboxPlayerController::AIToggleTargetViewCones()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIToggleTargetViewCones");

	AGearboxPlayerController_AIToggleTargetViewCones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIToggleAwarenessZones
// (Defined, Exec, Public)

void AGearboxPlayerController::AIToggleAwarenessZones()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIToggleAwarenessZones");

	AGearboxPlayerController_AIToggleAwarenessZones_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIToggleCombat
// (Defined, Exec, Public)

void AGearboxPlayerController::AIToggleCombat()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIToggleCombat");

	AGearboxPlayerController_AIToggleCombat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIToggleResources
// (Defined, Exec, Public)

void AGearboxPlayerController::AIToggleResources()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIToggleResources");

	AGearboxPlayerController_AIToggleResources_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIToggleInactiveRules
// (Defined, Exec, Public)

void AGearboxPlayerController::AIToggleInactiveRules()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIToggleInactiveRules");

	AGearboxPlayerController_AIToggleInactiveRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIToggleRules
// (Defined, Exec, Public)

void AGearboxPlayerController::AIToggleRules()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIToggleRules");

	AGearboxPlayerController_AIToggleRules_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIToggleFlags
// (Defined, Exec, Public)

void AGearboxPlayerController::AIToggleFlags()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIToggleFlags");

	AGearboxPlayerController_AIToggleFlags_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIDebugNextSnapshot
// (Defined, Exec, Public)

void AGearboxPlayerController::AIDebugNextSnapshot()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIDebugNextSnapshot");

	AGearboxPlayerController_AIDebugNextSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIDebugPrevSnapshot
// (Defined, Exec, Public)

void AGearboxPlayerController::AIDebugPrevSnapshot()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIDebugPrevSnapshot");

	AGearboxPlayerController_AIDebugPrevSnapshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ainext
// (Defined, Exec, Public)

void AGearboxPlayerController::ainext()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ainext");

	AGearboxPlayerController_ainext_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.aiprev
// (Defined, Exec, Public)

void AGearboxPlayerController::aiprev()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.aiprev");

	AGearboxPlayerController_aiprev_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AINextRule
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// bool                           bSkipContainers                (OptionalParm, Parm)

void AGearboxPlayerController::AINextRule(bool bSkipContainers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AINextRule");

	AGearboxPlayerController_AINextRule_Params params;
	params.bSkipContainers = bSkipContainers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIPrevRule
// (Defined, Exec, HasOptionalParms, Public)
// Parameters:
// bool                           bSkipContainers                (OptionalParm, Parm)

void AGearboxPlayerController::AIPrevRule(bool bSkipContainers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIPrevRule");

	AGearboxPlayerController_AIPrevRule_Params params;
	params.bSkipContainers = bSkipContainers;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawn
// (Defined, Public)
// Parameters:
// class AGearboxPawn*            NewPawn                        (Parm)

void AGearboxPlayerController::AIDebugSetPawn(class AGearboxPawn* NewPawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIDebugSetPawn");

	AGearboxPlayerController_AIDebugSetPawn_Params params;
	params.NewPawn = NewPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.AIDebugSetPawnByName
// (Defined, Exec, Public)
// Parameters:
// struct FName                   NewPawnName                    (Parm)

void AGearboxPlayerController::AIDebugSetPawnByName(const struct FName& NewPawnName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.AIDebugSetPawnByName");

	AGearboxPlayerController_AIDebugSetPawnByName_Params params;
	params.NewPawnName = NewPawnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.debugpawn
// (Defined, Exec, Public)

void AGearboxPlayerController::debugpawn()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.debugpawn");

	AGearboxPlayerController_debugpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.aisetp
// (Defined, Exec, Public)
// Parameters:
// struct FName                   NewPawnName                    (Parm)

void AGearboxPlayerController::aisetp(const struct FName& NewPawnName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.aisetp");

	AGearboxPlayerController_aisetp_Params params;
	params.NewPawnName = NewPawnName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NotifyGameUnPaused
// (Defined, Public)

void AGearboxPlayerController::NotifyGameUnPaused()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyGameUnPaused");

	AGearboxPlayerController_NotifyGameUnPaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NotifyGamePaused
// (Defined, Public)

void AGearboxPlayerController::NotifyGamePaused()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyGamePaused");

	AGearboxPlayerController_NotifyGamePaused_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.SetSettingsFromProfile
// (Public)

void AGearboxPlayerController::SetSettingsFromProfile()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.SetSettingsFromProfile");

	AGearboxPlayerController_SetSettingsFromProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.GetStorageDeviceID
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGearboxPlayerController::GetStorageDeviceID()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GetStorageDeviceID");

	AGearboxPlayerController_GetStorageDeviceID_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.SetStorageDeviceID
// (Native, Public)
// Parameters:
// int                            DeviceID                       (Parm)

void AGearboxPlayerController::SetStorageDeviceID(int DeviceID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.SetStorageDeviceID");

	AGearboxPlayerController_SetStorageDeviceID_Params params;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NotifyDeviceSelectComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void AGearboxPlayerController::NotifyDeviceSelectComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyDeviceSelectComplete");

	AGearboxPlayerController_NotifyDeviceSelectComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.DisplayStorageRemovedMenu
// (Defined, Event, Public)

void AGearboxPlayerController::DisplayStorageRemovedMenu()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.DisplayStorageRemovedMenu");

	AGearboxPlayerController_DisplayStorageRemovedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.DisplayProfileRemovedMenu
// (Defined, Public)

void AGearboxPlayerController::DisplayProfileRemovedMenu()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.DisplayProfileRemovedMenu");

	AGearboxPlayerController_DisplayProfileRemovedMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NotifyProfileWriteFromStorageChangeComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUser                      (Parm)
// bool                           bWasSuccessful                 (Parm)

void AGearboxPlayerController::NotifyProfileWriteFromStorageChangeComplete(unsigned char LocalUser, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyProfileWriteFromStorageChangeComplete");

	AGearboxPlayerController_NotifyProfileWriteFromStorageChangeComplete_Params params;
	params.LocalUser = LocalUser;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.IsCurrentStorageDeviceValid
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPlayerController::IsCurrentStorageDeviceValid()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.IsCurrentStorageDeviceValid");

	AGearboxPlayerController_IsCurrentStorageDeviceValid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.NotifyStorageDeviceChange
// (Defined, Public)

void AGearboxPlayerController::NotifyStorageDeviceChange()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyStorageDeviceChange");

	AGearboxPlayerController_NotifyStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.DestroyOnlineGame
// (Defined, Event, Public)

void AGearboxPlayerController::DestroyOnlineGame()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.DestroyOnlineGame");

	AGearboxPlayerController_DestroyOnlineGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ReturnToTitleScreen
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bSkipSave                      (OptionalParm, Parm)
// bool                           bRemoveSplitPlayer             (OptionalParm, Parm)

void AGearboxPlayerController::ReturnToTitleScreen(bool bSkipSave, bool bRemoveSplitPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ReturnToTitleScreen");

	AGearboxPlayerController_ReturnToTitleScreen_Params params;
	params.bSkipSave = bSkipSave;
	params.bRemoveSplitPlayer = bRemoveSplitPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.GetConnectionFailureNoticeMsg
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGearboxPlayerController::GetConnectionFailureNoticeMsg()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GetConnectionFailureNoticeMsg");

	AGearboxPlayerController_GetConnectionFailureNoticeMsg_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.GetMainMenuMapName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGearboxPlayerController::GetMainMenuMapName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GetMainMenuMapName");

	AGearboxPlayerController_GetMainMenuMapName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.NotifyLinkStatusChange
// (Defined, Public)
// Parameters:
// bool                           bIsConnected                   (Parm)

void AGearboxPlayerController::NotifyLinkStatusChange(bool bIsConnected)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyLinkStatusChange");

	AGearboxPlayerController_NotifyLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NotifyLoginStatusChange
// (Defined, Public, HasDefaults)
// Parameters:
// unsigned char                  NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void AGearboxPlayerController::NotifyLoginStatusChange(unsigned char NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyLoginStatusChange");

	AGearboxPlayerController_NotifyLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NotifyLoginChange
// (Defined, Public, HasDefaults)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void AGearboxPlayerController::NotifyLoginChange(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NotifyLoginChange");

	AGearboxPlayerController_NotifyLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.OnReadProfileSettingsComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void AGearboxPlayerController::OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.OnReadProfileSettingsComplete");

	AGearboxPlayerController_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.OnReceivedNewProfile
// (Native, Public)

void AGearboxPlayerController::OnReceivedNewProfile()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.OnReceivedNewProfile");

	AGearboxPlayerController_OnReceivedNewProfile_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ClearOnlineDelegates
// (Defined, Public)

void AGearboxPlayerController::ClearOnlineDelegates()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ClearOnlineDelegates");

	AGearboxPlayerController_ClearOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.RegisterOnlineDelegates
// (Defined, Public)

void AGearboxPlayerController::RegisterOnlineDelegates()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.RegisterOnlineDelegates");

	AGearboxPlayerController_RegisterOnlineDelegates_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.OnProfileWriteComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void AGearboxPlayerController::OnProfileWriteComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.OnProfileWriteComplete");

	AGearboxPlayerController_OnProfileWriteComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.HidePS3WritingProfileDialog
// (Public)

void AGearboxPlayerController::HidePS3WritingProfileDialog()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.HidePS3WritingProfileDialog");

	AGearboxPlayerController_HidePS3WritingProfileDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ShowPS3WritingProfileDialog
// (Public)

void AGearboxPlayerController::ShowPS3WritingProfileDialog()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ShowPS3WritingProfileDialog");

	AGearboxPlayerController_ShowPS3WritingProfileDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.WriteProfile
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// bool                           bShouldShowProfileDialog       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPlayerController::WriteProfile(bool bShouldShowProfileDialog)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.WriteProfile");

	AGearboxPlayerController_WriteProfile_Params params;
	params.bShouldShowProfileDialog = bShouldShowProfileDialog;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.GetProfileSettings
// (Defined, Event, Public)
// Parameters:
// class UGearboxProfileSettings* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxProfileSettings* AGearboxPlayerController::GetProfileSettings()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GetProfileSettings");

	AGearboxPlayerController_GetProfileSettings_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.GetMyControllerId
// (Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AGearboxPlayerController::GetMyControllerId()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GetMyControllerId");

	AGearboxPlayerController_GetMyControllerId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.ReadProfile
// (Defined, Event, Public)

void AGearboxPlayerController::ReadProfile()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ReadProfile");

	AGearboxPlayerController_ReadProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.UnregisterPlayerDataStores
// (Defined, Simulated, Public)

void AGearboxPlayerController::UnregisterPlayerDataStores()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.UnregisterPlayerDataStores");

	AGearboxPlayerController_UnregisterPlayerDataStores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.RegisterCustomPlayerDataStores
// (Defined, Simulated, Protected)

void AGearboxPlayerController::RegisterCustomPlayerDataStores()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.RegisterCustomPlayerDataStores");

	AGearboxPlayerController_RegisterCustomPlayerDataStores_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.SetDataStoreStringValue
// (Native, Public)
// Parameters:
// struct FString                 MarkupString                   (Parm, NeedCtorLink)
// struct FString                 NewValue                       (Parm, NeedCtorLink)

void AGearboxPlayerController::SetDataStoreStringValue(const struct FString& MarkupString, const struct FString& NewValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.SetDataStoreStringValue");

	AGearboxPlayerController_SetDataStoreStringValue_Params params;
	params.MarkupString = MarkupString;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.GetDataStoreStringValue
// (Native, Public)
// Parameters:
// struct FString                 MarkupString                   (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AGearboxPlayerController::GetDataStoreStringValue(const struct FString& MarkupString)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GetDataStoreStringValue");

	AGearboxPlayerController_GetDataStoreStringValue_Params params;
	params.MarkupString = MarkupString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.ClientKeepPlayingLoadingMovie
// (Defined, Net, NetReliable, Simulated, Event, Public, NetClient)

void AGearboxPlayerController::ClientKeepPlayingLoadingMovie()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ClientKeepPlayingLoadingMovie");

	AGearboxPlayerController_ClientKeepPlayingLoadingMovie_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ClientResetCamera
// (Final, Defined, Net, NetReliable, Simulated, Public, NetClient)

void AGearboxPlayerController::ClientResetCamera()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ClientResetCamera");

	AGearboxPlayerController_ClientResetCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.SpawnPlayerCamera
// (Defined, Event, Public)

void AGearboxPlayerController::SpawnPlayerCamera()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.SpawnPlayerCamera");

	AGearboxPlayerController_SpawnPlayerCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.InitInputSystem
// (Defined, Event, Public)

void AGearboxPlayerController::InitInputSystem()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.InitInputSystem");

	AGearboxPlayerController_InitInputSystem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NoTargetAll
// (Defined, Public)

void AGearboxPlayerController::NoTargetAll()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NoTargetAll");

	AGearboxPlayerController_NoTargetAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.NoTarget
// (Defined, Public)

void AGearboxPlayerController::NoTarget()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.NoTarget");

	AGearboxPlayerController_NoTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.GetNoTargetPlayers
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPlayerController::GetNoTargetPlayers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GetNoTargetPlayers");

	AGearboxPlayerController_GetNoTargetPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.SetNoTargetPlayers
// (Native, Static, Public)
// Parameters:
// bool                           bNoTarget                      (Parm)

void AGearboxPlayerController::SetNoTargetPlayers(bool bNoTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.SetNoTargetPlayers");

	AGearboxPlayerController_SetNoTargetPlayers_Params params;
	params.bNoTarget = bNoTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.Possess
// (Defined, Public)
// Parameters:
// class APawn*                   aPawn                          (Parm)
// bool                           bVehicleTransition             (Parm)

void AGearboxPlayerController::Possess(class APawn* aPawn, bool bVehicleTransition)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.Possess");

	AGearboxPlayerController_Possess_Params params;
	params.aPawn = aPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.DontTarget
// (Defined, Exec, Public)
// Parameters:
// bool                           bModeFlag                      (Parm)

void AGearboxPlayerController::DontTarget(bool bModeFlag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.DontTarget");

	AGearboxPlayerController_DontTarget_Params params;
	params.bModeFlag = bModeFlag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ClientConsoleCommand
// (Defined, Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// struct FString                 Command                        (Parm, NeedCtorLink)

void AGearboxPlayerController::ClientConsoleCommand(const struct FString& Command)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ClientConsoleCommand");

	AGearboxPlayerController_ClientConsoleCommand_Params params;
	params.Command = Command;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.IsPlayerAllowingActiveMoment
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPlayerController::IsPlayerAllowingActiveMoment()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.IsPlayerAllowingActiveMoment");

	AGearboxPlayerController_IsPlayerAllowingActiveMoment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.IsActiveMomentRunning
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxPlayerController::IsActiveMomentRunning()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.IsActiveMomentRunning");

	AGearboxPlayerController_IsActiveMomentRunning_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxPlayerController.ViewShake
// (Defined, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void AGearboxPlayerController::ViewShake(float DeltaTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ViewShake");

	AGearboxPlayerController_ViewShake_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.UpdateShakeRotComponent
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          Max                            (Parm, OutParm)
// int                            Current                        (Parm, OutParm)
// float                          Rate                           (Parm, OutParm)
// float                          Time                           (Parm)
// float                          DeltaTime                      (Parm)

void AGearboxPlayerController::UpdateShakeRotComponent(float Time, float DeltaTime, float* Max, int* Current, float* Rate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.UpdateShakeRotComponent");

	AGearboxPlayerController_UpdateShakeRotComponent_Params params;
	params.Time = Time;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Max != nullptr)
		*Max = params.Max;
	if (Current != nullptr)
		*Current = params.Current;
	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function GearboxFramework.GearboxPlayerController.CheckShake
// (Final, Native, Public, HasOutParms)
// Parameters:
// float                          MaxOffset                      (Parm, OutParm)
// float                          Offset                         (Parm, OutParm)
// float                          Rate                           (Parm, OutParm)
// float                          Time                           (Parm)

void AGearboxPlayerController::CheckShake(float Time, float* MaxOffset, float* Offset, float* Rate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.CheckShake");

	AGearboxPlayerController_CheckShake_Params params;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MaxOffset != nullptr)
		*MaxOffset = params.MaxOffset;
	if (Offset != nullptr)
		*Offset = params.Offset;
	if (Rate != nullptr)
		*Rate = params.Rate;
}


// Function GearboxFramework.GearboxPlayerController.StopViewShaking
// (Defined, Public, HasDefaults)

void AGearboxPlayerController::StopViewShaking()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.StopViewShaking");

	AGearboxPlayerController_StopViewShaking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.OnCameraShake
// (Defined, Public)
// Parameters:
// class UGearboxSeqAct_CameraShake* ShakeAction                    (Parm)

void AGearboxPlayerController::OnCameraShake(class UGearboxSeqAct_CameraShake* ShakeAction)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.OnCameraShake");

	AGearboxPlayerController_OnCameraShake_Params params;
	params.ShakeAction = ShakeAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ShakeView
// (Native, Public)
// Parameters:
// struct FGearboxViewShakeInfo   NewViewShake                   (Parm)

void AGearboxPlayerController::ShakeView(const struct FGearboxViewShakeInfo& NewViewShake)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ShakeView");

	AGearboxPlayerController_ShakeView_Params params;
	params.NewViewShake = NewViewShake;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ClientDamageShake
// (Defined, Net, NetReliable, Simulated, Public, HasDefaults, NetClient)
// Parameters:
// int                            Damage                         (Parm)

void AGearboxPlayerController::ClientDamageShake(int Damage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ClientDamageShake");

	AGearboxPlayerController_ClientDamageShake_Params params;
	params.Damage = Damage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.ConsoleEcho
// (HasOptionalParms, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           bLogOutput                     (OptionalParm, Parm)

void AGearboxPlayerController::ConsoleEcho(const struct FString& Text, bool bLogOutput)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.ConsoleEcho");

	AGearboxPlayerController_ConsoleEcho_Params params;
	params.Text = Text;
	params.bLogOutput = bLogOutput;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.Initialize
// (Defined, Simulated, Public)

void AGearboxPlayerController::Initialize()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.Initialize");

	AGearboxPlayerController_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.PostBeginPlay
// (Defined, Simulated, Public)

void AGearboxPlayerController::PostBeginPlay()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.PostBeginPlay");

	AGearboxPlayerController_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.TryAndSpawnLeviathanChannel
// (Final, Native, Public)
// Parameters:
// class UNetConnection*          Connection                     (Parm)

void AGearboxPlayerController::TryAndSpawnLeviathanChannel(class UNetConnection* Connection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.TryAndSpawnLeviathanChannel");

	AGearboxPlayerController_TryAndSpawnLeviathanChannel_Params params;
	params.Connection = Connection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerController.GenerateNewSessionGuid
// (Final, Native, Protected)

void AGearboxPlayerController::GenerateNewSessionGuid()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerController.GenerateNewSessionGuid");

	AGearboxPlayerController_GenerateNewSessionGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxPlayerInput.PlayerInput
// (Defined, Event, Public)
// Parameters:
// float                          DeltaTime                      (Parm)

void UGearboxPlayerInput::PlayerInput(float DeltaTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxPlayerInput.PlayerInput");

	UGearboxPlayerInput_PlayerInput_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxRenderTextureManager.SetThumbnailMesh
// (Final, Native, Public)
// Parameters:
// class UTexture*                Texture                        (Parm)
// class UMeshComponent*          Mesh                           (Parm, EditInline)

void UGearboxRenderTextureManager::SetThumbnailMesh(class UTexture* Texture, class UMeshComponent* Mesh)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.SetThumbnailMesh");

	UGearboxRenderTextureManager_SetThumbnailMesh_Params params;
	params.Texture = Texture;
	params.Mesh = Mesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxRenderTextureManager.FreeContext
// (Final, Native, Public)
// Parameters:
// struct FName                   Context                        (Parm)

void UGearboxRenderTextureManager::FreeContext(const struct FName& Context)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.FreeContext");

	UGearboxRenderTextureManager_FreeContext_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxRenderTextureManager.FreeThumbnail
// (Final, Native, Public)
// Parameters:
// class UTexture*                Texture                        (Parm)

void UGearboxRenderTextureManager::FreeThumbnail(class UTexture* Texture)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.FreeThumbnail");

	UGearboxRenderTextureManager_FreeThumbnail_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxRenderTextureManager.GetThumbnail
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   Context                        (Parm)
// int                            TextureSizeX                   (Parm)
// int                            TextureSizeY                   (Parm)
// unsigned char                  UpdateType                     (Parm)
// int                            SizeX                          (OptionalParm, Parm)
// int                            SizeY                          (OptionalParm, Parm)
// class UTexture*                ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture* UGearboxRenderTextureManager::GetThumbnail(const struct FName& Context, int TextureSizeX, int TextureSizeY, unsigned char UpdateType, int SizeX, int SizeY)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.GetThumbnail");

	UGearboxRenderTextureManager_GetThumbnail_Params params;
	params.Context = Context;
	params.TextureSizeX = TextureSizeX;
	params.TextureSizeY = TextureSizeY;
	params.UpdateType = UpdateType;
	params.SizeX = SizeX;
	params.SizeY = SizeY;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxRenderTextureManager.FreeTexture2D
// (Final, Native, Public)
// Parameters:
// class UTexture2D*              Texture                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxRenderTextureManager::FreeTexture2D(class UTexture2D* Texture)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.FreeTexture2D");

	UGearboxRenderTextureManager_FreeTexture2D_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxRenderTextureManager.GetTexture2D
// (Final, Native, Public)
// Parameters:
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ReturnParm)

class UTexture2D* UGearboxRenderTextureManager::GetTexture2D()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.GetTexture2D");

	UGearboxRenderTextureManager_GetTexture2D_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxRenderTextureManager.FreeRenderTexture
// (Final, Native, Public)
// Parameters:
// class UTextureRenderTarget2D*  Texture                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxRenderTextureManager::FreeRenderTexture(class UTextureRenderTarget2D* Texture)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.FreeRenderTexture");

	UGearboxRenderTextureManager_FreeRenderTexture_Params params;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxRenderTextureManager.GetRenderTexture
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// int                            InSizeX                        (Parm)
// int                            InSizeY                        (Parm)
// bool                           bNeedsTwoCopies                (OptionalParm, Parm)
// class UTextureRenderTarget2D*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UTextureRenderTarget2D* UGearboxRenderTextureManager::GetRenderTexture(int InSizeX, int InSizeY, bool bNeedsTwoCopies)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRenderTextureManager.GetRenderTexture");

	UGearboxRenderTextureManager_GetRenderTexture_Params params;
	params.InSizeX = InSizeX;
	params.InSizeY = InSizeY;
	params.bNeedsTwoCopies = bNeedsTwoCopies;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxSkeletalMeshComponent.SetFOV
// (Final, Native, Public)
// Parameters:
// float                          NewFOV                         (Parm)

void UGearboxSkeletalMeshComponent::SetFOV(float NewFOV)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxSkeletalMeshComponent.SetFOV");

	UGearboxSkeletalMeshComponent_SetFOV_Params params;
	params.NewFOV = NewFOV;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltAccessoryMeshDataFromParts
// (Final, Native, Public, HasOutParms)
// Parameters:
// class USkeletalMesh*           MeshToBorrowBonesFrom          (Parm)
// class UGestaltPartMatrices*    AccessoryMatrices              (Parm)
// class USkeletalMeshComponent*  TargetComponent                (Parm, EditInline)
// TArray<struct FGestaltPartPermutation> PermutationConfiguration       (Const, Parm, OutParm, NeedCtorLink)

void UGestaltSkeletalMeshDefinition::InitGestaltAccessoryMeshDataFromParts(class USkeletalMesh* MeshToBorrowBonesFrom, class UGestaltPartMatrices* AccessoryMatrices, class USkeletalMeshComponent* TargetComponent, TArray<struct FGestaltPartPermutation>* PermutationConfiguration)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltAccessoryMeshDataFromParts");

	UGestaltSkeletalMeshDefinition_InitGestaltAccessoryMeshDataFromParts_Params params;
	params.MeshToBorrowBonesFrom = MeshToBorrowBonesFrom;
	params.AccessoryMatrices = AccessoryMatrices;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PermutationConfiguration != nullptr)
		*PermutationConfiguration = params.PermutationConfiguration;
}


// Function GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltMeshDataFromParts
// (Final, Native, Public, HasOutParms)
// Parameters:
// class USkeletalMeshComponent*  TargetComponent                (Parm, EditInline)
// TArray<struct FName>           PartMeshNames                  (Const, Parm, OutParm, NeedCtorLink)

void UGestaltSkeletalMeshDefinition::InitGestaltMeshDataFromParts(class USkeletalMeshComponent* TargetComponent, TArray<struct FName>* PartMeshNames)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GestaltSkeletalMeshDefinition.InitGestaltMeshDataFromParts");

	UGestaltSkeletalMeshDefinition_InitGestaltMeshDataFromParts_Params params;
	params.TargetComponent = TargetComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartMeshNames != nullptr)
		*PartMeshNames = params.PartMeshNames;
}


// Function GearboxFramework.GFxActorMoviePool.DisplayDebug
// (Defined, Public, HasOutParms)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          X                              (Parm)
// float                          out_YL                         (Parm, OutParm)
// float                          out_YPos                       (Parm, OutParm)

void UGFxActorMoviePool::DisplayDebug(class AHUD* HUD, float X, float* out_YL, float* out_YPos)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxActorMoviePool.DisplayDebug");

	UGFxActorMoviePool_DisplayDebug_Params params;
	params.HUD = HUD;
	params.X = X;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_YL != nullptr)
		*out_YL = params.out_YL;
	if (out_YPos != nullptr)
		*out_YPos = params.out_YPos;
}


// Function GearboxFramework.GFxActorMoviePool.GetPoolName
// (Final, Defined, Public)
// Parameters:
// int                            Index                          (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxActorMoviePool::GetPoolName(int Index)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxActorMoviePool.GetPoolName");

	UGFxActorMoviePool_GetPoolName_Params params;
	params.Index = Index;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxActorMoviePool.PoolStyleString
// (Final, Defined, Public)
// Parameters:
// unsigned char                  Pooling                        (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxActorMoviePool::PoolStyleString(unsigned char Pooling)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxActorMoviePool.PoolStyleString");

	UGFxActorMoviePool_PoolStyleString_Params params;
	params.Pooling = Pooling;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxActorMoviePool.MovieStateChanged
// (Final, Native, Public)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)

void UGFxActorMoviePool::MovieStateChanged(class UGearboxGFxMovie* Movie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxActorMoviePool.MovieStateChanged");

	UGFxActorMoviePool_MovieStateChanged_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieDefinition.FindMovieLink
// (Defined, Public)
// Parameters:
// struct FName                   MovieName                      (Parm)
// class UGFxMovieDefinition*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UGFxMovieDefinition* UGFxMovieDefinition::FindMovieLink(const struct FName& MovieName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDefinition.FindMovieLink");

	UGFxMovieDefinition_FindMovieLink_Params params;
	params.MovieName = MovieName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDefinition.PostMovieStart
// (Final, Defined, Public)
// Parameters:
// class UGearboxGFxMovie*        StartedMovie                   (Parm)

void UGFxMovieDefinition::PostMovieStart(class UGearboxGFxMovie* StartedMovie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDefinition.PostMovieStart");

	UGFxMovieDefinition_PostMovieStart_Params params;
	params.StartedMovie = StartedMovie;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieDefinition.SpawnPlayerMovie
// (Native, HasOptionalParms, Public)
// Parameters:
// class AGearboxPlayerController* Owner                          (Parm)
// FScriptInterface               TargetActor                    (Parm)
// class UObject*                 ContextObject                  (OptionalParm, Parm)
// class UGearboxGFxMovie*        ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxGFxMovie* UGFxMovieDefinition::SpawnPlayerMovie(class AGearboxPlayerController* Owner, const FScriptInterface& TargetActor, class UObject* ContextObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDefinition.SpawnPlayerMovie");

	UGFxMovieDefinition_SpawnPlayerMovie_Params params;
	params.Owner = Owner;
	params.TargetActor = TargetActor;
	params.ContextObject = ContextObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDefinition.SupportsStatePooling
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMovieDefinition::SupportsStatePooling()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDefinition.SupportsStatePooling");

	UGFxMovieDefinition_SupportsStatePooling_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDefinition.GetPoolStyle
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGFxMovieDefinition::GetPoolStyle()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDefinition.GetPoolStyle");

	UGFxMovieDefinition_GetPoolStyle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDrawStyle.GetStyleDebugString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMovieDrawStyle::GetStyleDebugString()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDrawStyle.GetStyleDebugString");

	UGFxMovieDrawStyle_GetStyleDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDrawStyleHUD.RequiresClientInstance
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMovieDrawStyleHUD::RequiresClientInstance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDrawStyleHUD.RequiresClientInstance");

	UGFxMovieDrawStyleHUD_RequiresClientInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDrawStyleMesh.GetStyleDebugString
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UGFxMovieDrawStyleMesh::GetStyleDebugString()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDrawStyleMesh.GetStyleDebugString");

	UGFxMovieDrawStyleMesh_GetStyleDebugString_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDrawStyleMesh.RequiresClientInstance
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMovieDrawStyleMesh::RequiresClientInstance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDrawStyleMesh.RequiresClientInstance");

	UGFxMovieDrawStyleMesh_RequiresClientInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieDrawStyleSplitscreen.RequiresClientInstance
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMovieDrawStyleSplitscreen::RequiresClientInstance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDrawStyleSplitscreen.RequiresClientInstance");

	UGFxMovieDrawStyleSplitscreen_RequiresClientInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GFxMovieManager.ChangeMovieState
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// FScriptInterface               TargetActor                    (Parm)
// struct FName                   State                          (Parm)
// unsigned char                  Change                         (Parm)
// class AGearboxPlayerController* PC                             (OptionalParm, Parm)

void UGFxMovieManager::ChangeMovieState(const FScriptInterface& TargetActor, const struct FName& State, unsigned char Change, class AGearboxPlayerController* PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieManager.ChangeMovieState");

	UGFxMovieManager_ChangeMovieState_Params params;
	params.TargetActor = TargetActor;
	params.State = State;
	params.Change = Change;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieManager.Unsubscribe
// (Final, Native, Public)
// Parameters:
// class AGearboxPlayerController* PC                             (Parm)

void UGFxMovieManager::Unsubscribe(class AGearboxPlayerController* PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieManager.Unsubscribe");

	UGFxMovieManager_Unsubscribe_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieManager.Subscribe
// (Final, Native, Public)
// Parameters:
// class AGearboxPlayerController* PC                             (Parm)

void UGFxMovieManager::Subscribe(class AGearboxPlayerController* PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieManager.Subscribe");

	UGFxMovieManager_Subscribe_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieManager.UnregisterMoviesDrawnTo
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*     PrimComp                       (Parm, EditInline)
// FScriptInterface               TargetActor                    (Parm)

void UGFxMovieManager::UnregisterMoviesDrawnTo(class UPrimitiveComponent* PrimComp, const FScriptInterface& TargetActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieManager.UnregisterMoviesDrawnTo");

	UGFxMovieManager_UnregisterMoviesDrawnTo_Params params;
	params.PrimComp = PrimComp;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieManager.UnregisterTarget
// (Final, Native, Public)
// Parameters:
// FScriptInterface               TargetActor                    (Parm)

void UGFxMovieManager::UnregisterTarget(const FScriptInterface& TargetActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieManager.UnregisterTarget");

	UGFxMovieManager_UnregisterTarget_Params params;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieManager.UnregisterMovie
// (Final, Native, Public)
// Parameters:
// class UGFxMovieDefinition*     Definition                     (Parm)
// FScriptInterface               TargetActor                    (Parm)

void UGFxMovieManager::UnregisterMovie(class UGFxMovieDefinition* Definition, const FScriptInterface& TargetActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieManager.UnregisterMovie");

	UGFxMovieManager_UnregisterMovie_Params params;
	params.Definition = Definition;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieManager.RegisterMovie
// (Final, Native, Public)
// Parameters:
// class UGFxMovieDefinition*     Definition                     (Parm)
// FScriptInterface               TargetActor                    (Parm)

void UGFxMovieManager::RegisterMovie(class UGFxMovieDefinition* Definition, const FScriptInterface& TargetActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieManager.RegisterMovie");

	UGFxMovieManager_RegisterMovie_Params params;
	params.Definition = Definition;
	params.TargetActor = TargetActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieStatePlayerAware.EnableState
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FName                   TheState                       (Parm)
// struct FMovieStateStruct       MovieState                     (Parm, OutParm, NeedCtorLink)
// bool                           bEnable                        (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGFxMovieStatePlayerAware::EnableState(const struct FName& TheState, bool bEnable, struct FMovieStateStruct* MovieState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieStatePlayerAware.EnableState");

	UGFxMovieStatePlayerAware_EnableState_Params params;
	params.TheState = TheState;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieState != nullptr)
		*MovieState = params.MovieState;

	return params.ReturnValue;
}


// Function GearboxFramework.IAIInterface.InitSequence
// (Native, Public)
// Parameters:
// class UActionSequence*         NewSequence                    (Parm)

void UIAIInterface::InitSequence(class UActionSequence* NewSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.InitSequence");

	UIAIInterface_InitSequence_Params params;
	params.NewSequence = NewSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.IAIInterface.GetAllegiance
// (Native, Public)
// Parameters:
// class UPawnAllegiance*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UPawnAllegiance* UIAIInterface::GetAllegiance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.GetAllegiance");

	UIAIInterface_GetAllegiance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IAIInterface.GetAIDefinition
// (Native, Public)
// Parameters:
// class UAIDefinition*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UAIDefinition* UIAIInterface::GetAIDefinition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.GetAIDefinition");

	UIAIInterface_GetAIDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IAIInterface.GetAIComponent
// (Native, Public)
// Parameters:
// class UAIComponent*            ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UAIComponent* UIAIInterface::GetAIComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.GetAIComponent");

	UIAIInterface_GetAIComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IAIInterface.GetAIParent
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface UIAIInterface::GetAIParent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.GetAIParent");

	UIAIInterface_GetAIParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IAIInterface.GetAILocation
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UIAIInterface::GetAILocation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.GetAILocation");

	UIAIInterface_GetAILocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IAIInterface.GetAIActor
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UIAIInterface::GetAIActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.GetAIActor");

	UIAIInterface_GetAIActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IAIInterface.CanTickAI
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UIAIInterface::CanTickAI()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IAIInterface.CanTickAI");

	UIAIInterface_CanTickAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieDestroy
// (Native, Public)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)

void UIGFxActorMovie::GFx_NotifyMovieDestroy(class UGearboxGFxMovie* Movie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGFxActorMovie.GFx_NotifyMovieDestroy");

	UIGFxActorMovie_GFx_NotifyMovieDestroy_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.IGFxActorMovie.GFx_NotifyMovieCreate
// (Native, Public)
// Parameters:
// class UGearboxGFxMovie*        Movie                          (Parm)

void UIGFxActorMovie::GFx_NotifyMovieCreate(class UGearboxGFxMovie* Movie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGFxActorMovie.GFx_NotifyMovieCreate");

	UIGFxActorMovie_GFx_NotifyMovieCreate_Params params;
	params.Movie = Movie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.IGFxActorMovie.GFx_GetMovieActor
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UIGFxActorMovie::GFx_GetMovieActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGFxActorMovie.GFx_GetMovieActor");

	UIGFxActorMovie_GFx_GetMovieActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.InterfaceGearboxCamera.FinishCameraLookAt
// (Event, Public)

void UInterfaceGearboxCamera::FinishCameraLookAt()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.InterfaceGearboxCamera.FinishCameraLookAt");

	UInterfaceGearboxCamera_FinishCameraLookAt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.InterfaceGearboxCamera.EnableThirdPersonLookAt
// (Public)
// Parameters:
// float                          LookAtXOffset                  (Parm)
// float                          LookAtYOffset                  (Parm)
// float                          LookAtZOffset                  (Parm)
// unsigned char                  LookAtMode                     (Parm)

void UInterfaceGearboxCamera::EnableThirdPersonLookAt(float LookAtXOffset, float LookAtYOffset, float LookAtZOffset, unsigned char LookAtMode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.InterfaceGearboxCamera.EnableThirdPersonLookAt");

	UInterfaceGearboxCamera_EnableThirdPersonLookAt_Params params;
	params.LookAtXOffset = LookAtXOffset;
	params.LookAtYOffset = LookAtYOffset;
	params.LookAtZOffset = LookAtZOffset;
	params.LookAtMode = LookAtMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.InterfaceGearboxCamera.BeginCameraLookAt
// (Public)
// Parameters:
// class AActor*                  LookAtTarget                   (Parm)
// struct FName                   LookAtBone                     (Parm)
// struct FVector                 TargetLocation                 (Parm)
// float                          Zoom                           (Parm)
// struct FVector2D               FOV                            (Parm)
// float                          Duration                       (Parm)
// float                          TransitionTimeIn               (Parm)
// float                          TransitionTimeOut              (Parm)

void UInterfaceGearboxCamera::BeginCameraLookAt(class AActor* LookAtTarget, const struct FName& LookAtBone, const struct FVector& TargetLocation, float Zoom, const struct FVector2D& FOV, float Duration, float TransitionTimeIn, float TransitionTimeOut)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.InterfaceGearboxCamera.BeginCameraLookAt");

	UInterfaceGearboxCamera_BeginCameraLookAt_Params params;
	params.LookAtTarget = LookAtTarget;
	params.LookAtBone = LookAtBone;
	params.TargetLocation = TargetLocation;
	params.Zoom = Zoom;
	params.FOV = FOV;
	params.Duration = Duration;
	params.TransitionTimeIn = TransitionTimeIn;
	params.TransitionTimeOut = TransitionTimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.IStreamingDataEvent.RunStreamingDataEvent
// (Event, HasOptionalParms, Public)
// Parameters:
// struct FName                   EventName                      (Parm)
// class UObject*                 EventInstigator                (OptionalParm, Parm)
// class UObject*                 OtherEventParticipantObject    (OptionalParm, Parm)
// int                            IntParam                       (OptionalParm, Parm)
// float                          FloatParam                     (OptionalParm, Parm)

void UIStreamingDataEvent::RunStreamingDataEvent(const struct FName& EventName, class UObject* EventInstigator, class UObject* OtherEventParticipantObject, int IntParam, float FloatParam)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IStreamingDataEvent.RunStreamingDataEvent");

	UIStreamingDataEvent_RunStreamingDataEvent_Params params;
	params.EventName = EventName;
	params.EventInstigator = EventInstigator;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.IntParam = IntParam;
	params.FloatParam = FloatParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PhysicsStateExpressionEvaluator.Evaluate
// (Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPhysicsStateExpressionEvaluator::Evaluate(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PhysicsStateExpressionEvaluator.Evaluate");

	UPhysicsStateExpressionEvaluator_Evaluate_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationAspect.DenStatRemoved
// (Event, Public)
// Parameters:
// class APawn*                   DenPawn                        (Parm)

void UPopulationAspect::DenStatRemoved(class APawn* DenPawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationAspect.DenStatRemoved");

	UPopulationAspect_DenStatRemoved_Params params;
	params.DenPawn = DenPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationAspect.DenStatAdded
// (Event, Public)
// Parameters:
// class APawn*                   DenPawn                        (Parm)

void UPopulationAspect::DenStatAdded(class APawn* DenPawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationAspect.DenStatAdded");

	UPopulationAspect_DenStatAdded_Params params;
	params.DenPawn = DenPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationAspect.EnabledStatusChanged
// (Event, Public)
// Parameters:
// bool                           bIsEnabled                     (Parm)
// bool                           bHasActiveActors               (Parm)

void UPopulationAspect::EnabledStatusChanged(bool bIsEnabled, bool bHasActiveActors)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationAspect.EnabledStatusChanged");

	UPopulationAspect_EnabledStatusChanged_Params params;
	params.bIsEnabled = bIsEnabled;
	params.bHasActiveActors = bHasActiveActors;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationAspect.AllActorsRemoved
// (Event, Public)
// Parameters:
// bool                           bFinishedSpawning              (Parm)

void UPopulationAspect::AllActorsRemoved(bool bFinishedSpawning)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationAspect.AllActorsRemoved");

	UPopulationAspect_AllActorsRemoved_Params params;
	params.bFinishedSpawning = bFinishedSpawning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationAspect.OnActorDeath
// (Event, Public)
// Parameters:
// class AActor*                  DeadActor                      (Parm)

void UPopulationAspect::OnActorDeath(class AActor* DeadActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationAspect.OnActorDeath");

	UPopulationAspect_OnActorDeath_Params params;
	params.DeadActor = DeadActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationAspect.OnSpawnActor
// (Event, Public)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm)

void UPopulationAspect::OnSpawnActor(class AActor* SpawnedActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationAspect.OnSpawnActor");

	UPopulationAspect_OnSpawnActor_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationAspect.Initialize
// (Event, Public)

void UPopulationAspect::Initialize()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationAspect.Initialize");

	UPopulationAspect_Initialize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationEncounter.TriggerKismetAllSpawnedEvent
// (Defined, Event, Public)

void APopulationEncounter::TriggerKismetAllSpawnedEvent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationEncounter.TriggerKismetAllSpawnedEvent");

	APopulationEncounter_TriggerKismetAllSpawnedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationEncounter.TriggerKismetDeathEvent
// (Defined, Event, Public)

void APopulationEncounter::TriggerKismetDeathEvent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationEncounter.TriggerKismetDeathEvent");

	APopulationEncounter_TriggerKismetDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationEncounter.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void APopulationEncounter::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationEncounter.OnToggle");

	APopulationEncounter_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationEncounter.UpdateOpportunityEnabledStates
// (Native, Public)
// Parameters:
// int                            nWave                          (Parm)
// bool                           bUpdateIfOnlyOneWave           (Parm)

void APopulationEncounter::UpdateOpportunityEnabledStates(int nWave, bool bUpdateIfOnlyOneWave)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationEncounter.UpdateOpportunityEnabledStates");

	APopulationEncounter_UpdateOpportunityEnabledStates_Params params;
	params.nWave = nWave;
	params.bUpdateIfOnlyOneWave = bUpdateIfOnlyOneWave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationEncounter.UpdateKismetNotifications
// (Native, Public)

void APopulationEncounter::UpdateKismetNotifications()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationEncounter.UpdateKismetNotifications");

	APopulationEncounter_UpdateKismetNotifications_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopUpDebugBarGraph.Display
// (Native, Public)
// Parameters:
// float                          DeltaSeconds                   (Parm)
// class UCanvas*                 Canvas                         (Parm)

void UPopUpDebugBarGraph::Display(float DeltaSeconds, class UCanvas* Canvas)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopUpDebugBarGraph.Display");

	UPopUpDebugBarGraph_Display_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopUpDebugBarGraph.GetValue
// (Native, Public)
// Parameters:
// int                            ColumnNdx                      (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPopUpDebugBarGraph::GetValue(int ColumnNdx)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopUpDebugBarGraph.GetValue");

	UPopUpDebugBarGraph_GetValue_Params params;
	params.ColumnNdx = ColumnNdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopUpDebugBarGraph.SetValue
// (Native, Public)
// Parameters:
// int                            ColumnNdx                      (Parm)
// float                          NewValue                       (Parm)

void UPopUpDebugBarGraph::SetValue(int ColumnNdx, float NewValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopUpDebugBarGraph.SetValue");

	UPopUpDebugBarGraph_SetValue_Params params;
	params.ColumnNdx = ColumnNdx;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopUpDebugBarGraph.AddNewColumn
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FColor                  ColumnColor                    (Parm)
// struct FString                 HeaderText                     (Parm, NeedCtorLink)
// float                          Value                          (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPopUpDebugBarGraph::AddNewColumn(const struct FColor& ColumnColor, const struct FString& HeaderText, float Value)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopUpDebugBarGraph.AddNewColumn");

	UPopUpDebugBarGraph_AddNewColumn_Params params;
	params.ColumnColor = ColumnColor;
	params.HeaderText = HeaderText;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopUpDebugBarGraph.AddTitleText
// (Native, Public)
// Parameters:
// struct FString                 NewTitleText                   (Parm, NeedCtorLink)

void UPopUpDebugBarGraph::AddTitleText(const struct FString& NewTitleText)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopUpDebugBarGraph.AddTitleText");

	UPopUpDebugBarGraph_AddTitleText_Params params;
	params.NewTitleText = NewTitleText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RegionDefinition.GetDefaultRegionGameStage
// (Native, Public, HasOutParms)
// Parameters:
// int                            MinGameStage                   (Parm, OutParm)
// int                            MaxGameStage                   (Parm, OutParm)
// int                            AwesomeLevel                   (Parm, OutParm)
// int                            GameStageIncreaseOverPlayerLevel (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool URegionDefinition::GetDefaultRegionGameStage(int* MinGameStage, int* MaxGameStage, int* AwesomeLevel, int* GameStageIncreaseOverPlayerLevel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RegionDefinition.GetDefaultRegionGameStage");

	URegionDefinition_GetDefaultRegionGameStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MinGameStage != nullptr)
		*MinGameStage = params.MinGameStage;
	if (MaxGameStage != nullptr)
		*MaxGameStage = params.MaxGameStage;
	if (AwesomeLevel != nullptr)
		*AwesomeLevel = params.AwesomeLevel;
	if (GameStageIncreaseOverPlayerLevel != nullptr)
		*GameStageIncreaseOverPlayerLevel = params.GameStageIncreaseOverPlayerLevel;

	return params.ReturnValue;
}


// Function GearboxFramework.RegionDefinition.TestRegionGameStage
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            GameStage                      (Parm, OutParm)
// int                            AwesomeLevel                   (Parm, OutParm)
// bool                           bDefaultGameStage              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool URegionDefinition::TestRegionGameStage(bool bDefaultGameStage, int* GameStage, int* AwesomeLevel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RegionDefinition.TestRegionGameStage");

	URegionDefinition_TestRegionGameStage_Params params;
	params.bDefaultGameStage = bDefaultGameStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameStage != nullptr)
		*GameStage = params.GameStage;
	if (AwesomeLevel != nullptr)
		*AwesomeLevel = params.AwesomeLevel;

	return params.ReturnValue;
}


// Function GearboxFramework.RegionDefinition.GetRegionGameStage
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// int                            GameStage                      (Parm, OutParm)
// int                            AwesomeLevel                   (Parm, OutParm)
// bool                           bDefaultGameStage              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool URegionDefinition::GetRegionGameStage(bool bDefaultGameStage, int* GameStage, int* AwesomeLevel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RegionDefinition.GetRegionGameStage");

	URegionDefinition_GetRegionGameStage_Params params;
	params.bDefaultGameStage = bDefaultGameStage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameStage != nullptr)
		*GameStage = params.GameStage;
	if (AwesomeLevel != nullptr)
		*AwesomeLevel = params.AwesomeLevel;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngineLoadBalanceManager.SetAsDebugging
// (Native, Public)
// Parameters:
// bool                           bSetDebugging                  (Parm)

void URuleEngineLoadBalanceManager::SetAsDebugging(bool bSetDebugging)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngineLoadBalanceManager.SetAsDebugging");

	URuleEngineLoadBalanceManager_SetAsDebugging_Params params;
	params.bSetDebugging = bSetDebugging;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SeqAct_AllPlayersInVolume.AllPlayersInVolumes
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USeqAct_AllPlayersInVolume::AllPlayersInVolumes()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SeqAct_AllPlayersInVolume.AllPlayersInVolumes");

	USeqAct_AllPlayersInVolume_AllPlayersInVolumes_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SeqAct_AllPlayersInVolume.PlayerIsInAVolume
// (Native, Public)
// Parameters:
// class APlayerController*       PC                             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USeqAct_AllPlayersInVolume::PlayerIsInAVolume(class APlayerController* PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SeqAct_AllPlayersInVolume.PlayerIsInAVolume");

	USeqAct_AllPlayersInVolume_PlayerIsInAVolume_Params params;
	params.PC = PC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveDefinition.IsPlayingLocally
// (Event, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveDefinition::IsPlayingLocally(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.IsPlayingLocally");

	USpecialMoveDefinition_IsPlayingLocally_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveDefinition.GetSMDToPlay
// (Native, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// class USpecialMoveDefinition*  ReturnValue                    (Parm, OutParm, ReturnParm)

class USpecialMoveDefinition* USpecialMoveDefinition::GetSMDToPlay(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.GetSMDToPlay");

	USpecialMoveDefinition_GetSMDToPlay_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveDefinition.Contains
// (Native, Public)
// Parameters:
// class USpecialMoveDefinition*  SMD                            (Parm)
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveDefinition::Contains(class USpecialMoveDefinition* SMD, const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.Contains");

	USpecialMoveDefinition_Contains_Params params;
	params.SMD = SMD;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveDefinition.ClientFinished
// (Event, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           bInterrupted                   (Parm)

void USpecialMoveDefinition::ClientFinished(const FScriptInterface& SMI, bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.ClientFinished");

	USpecialMoveDefinition_ClientFinished_Params params;
	params.SMI = SMI;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveDefinition.ServerFinished
// (Event, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           bInterrupted                   (Parm)

void USpecialMoveDefinition::ServerFinished(const FScriptInterface& SMI, bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.ServerFinished");

	USpecialMoveDefinition_ServerFinished_Params params;
	params.SMI = SMI;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveDefinition.ClientStarted
// (Event, Public, HasOutParms)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// struct FSpecialMoveData        SMData                         (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USpecialMoveDefinition::ClientStarted(const FScriptInterface& SMI, struct FSpecialMoveData* SMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.ClientStarted");

	USpecialMoveDefinition_ClientStarted_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SMData != nullptr)
		*SMData = params.SMData;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveDefinition.ServerStarted
// (Event, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)

void USpecialMoveDefinition::ServerStarted(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.ServerStarted");

	USpecialMoveDefinition_ServerStarted_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveDefinition.IsLocalAuthority
// (Native, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveDefinition::IsLocalAuthority(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.IsLocalAuthority");

	USpecialMoveDefinition_IsLocalAuthority_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveDefinition.AuthorityCanPlay
// (Defined, Event, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveDefinition::AuthorityCanPlay(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveDefinition.AuthorityCanPlay");

	USpecialMoveDefinition_AuthorityCanPlay_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.IsOwnerAlwaysNetRelevant
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveComponent::IsOwnerAlwaysNetRelevant()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.IsOwnerAlwaysNetRelevant");

	USpecialMoveComponent_IsOwnerAlwaysNetRelevant_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.CanPlayBehaviorData
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FSMBehavior             Data                           (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveComponent::CanPlayBehaviorData(struct FSMBehavior* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.CanPlayBehaviorData");

	USpecialMoveComponent_CanPlayBehaviorData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.RunBehaviors
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FSMBehavior>     SMBehaviors                    (Parm, OutParm, NeedCtorLink)

void USpecialMoveComponent::RunBehaviors(TArray<struct FSMBehavior>* SMBehaviors)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.RunBehaviors");

	USpecialMoveComponent_RunBehaviors_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SMBehaviors != nullptr)
		*SMBehaviors = params.SMBehaviors;
}


// Function GearboxFramework.SpecialMoveComponent.GetCurrent
// (Final, Native, Public)
// Parameters:
// class USpecialMoveDefinition*  ReturnValue                    (Parm, OutParm, ReturnParm)

class USpecialMoveDefinition* USpecialMoveComponent::GetCurrent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.GetCurrent");

	USpecialMoveComponent_GetCurrent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.GetPlayRateScale
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USpecialMoveComponent::GetPlayRateScale()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.GetPlayRateScale");

	USpecialMoveComponent_GetPlayRateScale_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.GetDuration
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USpecialMoveComponent::GetDuration()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.GetDuration");

	USpecialMoveComponent_GetDuration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.GetData
// (Final, Native, Public)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* USpecialMoveComponent::GetData()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.GetData");

	USpecialMoveComponent_GetData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.LocalAnimFinished
// (Final, Native, Public, HasOutParms)
// Parameters:
// class USpecialMoveDefinition*  SMD                            (Parm)
// struct FSpecialMoveData        SMData                         (Parm, OutParm)
// bool                           bInterrupted                   (Parm)

void USpecialMoveComponent::LocalAnimFinished(class USpecialMoveDefinition* SMD, bool bInterrupted, struct FSpecialMoveData* SMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.LocalAnimFinished");

	USpecialMoveComponent_LocalAnimFinished_Params params;
	params.SMD = SMD;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SMData != nullptr)
		*SMData = params.SMData;
}


// Function GearboxFramework.SpecialMoveComponent.ClearQueue
// (Final, Native, Public)

void USpecialMoveComponent::ClearQueue()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.ClearQueue");

	USpecialMoveComponent_ClearQueue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.StopAnyLocal
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   SMNodeName                     (OptionalParm, Parm)
// bool                           bInterrupted                   (OptionalParm, Parm)
// class USkeletalMeshComponent*  MeshComp                       (OptionalParm, Parm, EditInline)

void USpecialMoveComponent::StopAnyLocal(const struct FName& SMNodeName, bool bInterrupted, class USkeletalMeshComponent* MeshComp)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.StopAnyLocal");

	USpecialMoveComponent_StopAnyLocal_Params params;
	params.SMNodeName = SMNodeName;
	params.bInterrupted = bInterrupted;
	params.MeshComp = MeshComp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.StopLocal
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USpecialMoveDefinition*  OldSMD                         (Parm)
// bool                           bInterrupted                   (OptionalParm, Parm)

void USpecialMoveComponent::StopLocal(class USpecialMoveDefinition* OldSMD, bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.StopLocal");

	USpecialMoveComponent_StopLocal_Params params;
	params.OldSMD = OldSMD;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.StopAny
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bClearQueue                    (OptionalParm, Parm)
// bool                           bInterrupted                   (OptionalParm, Parm)

void USpecialMoveComponent::StopAny(bool bClearQueue, bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.StopAny");

	USpecialMoveComponent_StopAny_Params params;
	params.bClearQueue = bClearQueue;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.Stop
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USpecialMoveDefinition*  OldSMD                         (Parm)
// bool                           bClearQueue                    (OptionalParm, Parm)
// bool                           bInterrupted                   (OptionalParm, Parm)

void USpecialMoveComponent::Stop(class USpecialMoveDefinition* OldSMD, bool bClearQueue, bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.Stop");

	USpecialMoveComponent_Stop_Params params;
	params.OldSMD = OldSMD;
	params.bClearQueue = bClearQueue;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.PlayLocal
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USpecialMoveDefinition*  NewSMD                         (Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          Duration                       (OptionalParm, Parm)
// struct FName                   CallbackName                   (OptionalParm, Parm)
// class UObject*                 CallbackObject                 (OptionalParm, Parm)
// class UObject*                 Data                           (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USpecialMoveComponent::PlayLocal(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.PlayLocal");

	USpecialMoveComponent_PlayLocal_Params params;
	params.NewSMD = NewSMD;
	params.PlayRateScale = PlayRateScale;
	params.Duration = Duration;
	params.CallbackName = CallbackName;
	params.CallbackObject = CallbackObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.Queue
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USpecialMoveDefinition*  NewSMD                         (Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          Duration                       (OptionalParm, Parm)
// struct FName                   CallbackName                   (OptionalParm, Parm)
// class UObject*                 CallbackObject                 (OptionalParm, Parm)
// class UObject*                 Data                           (OptionalParm, Parm)

void USpecialMoveComponent::Queue(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.Queue");

	USpecialMoveComponent_Queue_Params params;
	params.NewSMD = NewSMD;
	params.PlayRateScale = PlayRateScale;
	params.Duration = Duration;
	params.CallbackName = CallbackName;
	params.CallbackObject = CallbackObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.Play
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class USpecialMoveDefinition*  NewSMD                         (Parm)
// float                          PlayRateScale                  (OptionalParm, Parm)
// float                          Duration                       (OptionalParm, Parm)
// struct FName                   CallbackName                   (OptionalParm, Parm)
// class UObject*                 CallbackObject                 (OptionalParm, Parm)
// class UObject*                 Data                           (OptionalParm, Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USpecialMoveComponent::Play(class USpecialMoveDefinition* NewSMD, float PlayRateScale, float Duration, const struct FName& CallbackName, class UObject* CallbackObject, class UObject* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.Play");

	USpecialMoveComponent_Play_Params params;
	params.NewSMD = NewSMD;
	params.PlayRateScale = PlayRateScale;
	params.Duration = Duration;
	params.CallbackName = CallbackName;
	params.CallbackObject = CallbackObject;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.RemoveFromQueue
// (Final, Native, Public)
// Parameters:
// class USpecialMoveDefinition*  SMD                            (Parm)

void USpecialMoveComponent::RemoveFromQueue(class USpecialMoveDefinition* SMD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.RemoveFromQueue");

	USpecialMoveComponent_RemoveFromQueue_Params params;
	params.SMD = SMD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.IsQueued
// (Final, Native, Public)
// Parameters:
// class USpecialMoveDefinition*  SMD                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveComponent::IsQueued(class USpecialMoveDefinition* SMD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.IsQueued");

	USpecialMoveComponent_IsQueued_Params params;
	params.SMD = SMD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.IsPlayingClass
// (Final, Native, Public)
// Parameters:
// class UClass*                  SMClass                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveComponent::IsPlayingClass(class UClass* SMClass)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.IsPlayingClass");

	USpecialMoveComponent_IsPlayingClass_Params params;
	params.SMClass = SMClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.IsPlayingAny
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveComponent::IsPlayingAny()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.IsPlayingAny");

	USpecialMoveComponent_IsPlayingAny_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.IsPlaying
// (Final, Native, Public)
// Parameters:
// class USpecialMoveDefinition*  SMD                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveComponent::IsPlaying(class USpecialMoveDefinition* SMD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.IsPlaying");

	USpecialMoveComponent_IsPlaying_Params params;
	params.SMD = SMD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.GetAnimDelta
// (Final, Native, Public)
// Parameters:
// class UGearboxAnimDefinition*  CustomAnimSMD                  (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector USpecialMoveComponent::GetAnimDelta(class UGearboxAnimDefinition* CustomAnimSMD)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.GetAnimDelta");

	USpecialMoveComponent_GetAnimDelta_Params params;
	params.CustomAnimSMD = CustomAnimSMD;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.GetSMNode
// (Final, Native, Public)
// Parameters:
// class UAnimNodeSpecialMoveBlend* ReturnValue                    (Parm, OutParm, ReturnParm)

class UAnimNodeSpecialMoveBlend* USpecialMoveComponent::GetSMNode()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.GetSMNode");

	USpecialMoveComponent_GetSMNode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveComponent.PlayReplicated
// (Final, Native, Public)
// Parameters:
// struct FReplicatedSpecialMoveData NewSMData                      (Parm)

void USpecialMoveComponent::PlayReplicated(const struct FReplicatedSpecialMoveData& NewSMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.PlayReplicated");

	USpecialMoveComponent_PlayReplicated_Params params;
	params.NewSMData = NewSMData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SpecialMoveComponent.GetAnimLength
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class UGearboxAnimDefinition*  CustomAnimSMD                  (Parm)
// bool                           bIncludeNextSMD                (OptionalParm, Parm)
// class USkeletalMeshComponent*  SMC                            (OptionalParm, Parm, EditInline)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USpecialMoveComponent::GetAnimLength(class UGearboxAnimDefinition* CustomAnimSMD, bool bIncludeNextSMD, class USkeletalMeshComponent* SMC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveComponent.GetAnimLength");

	USpecialMoveComponent_GetAnimLength_Params params;
	params.CustomAnimSMD = CustomAnimSMD;
	params.bIncludeNextSMD = bIncludeNextSMD;
	params.SMC = SMC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveExpressionList.Contains
// (Native, Public)
// Parameters:
// class USpecialMoveDefinition*  SMD                            (Parm)
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveExpressionList::Contains(class USpecialMoveDefinition* SMD, const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveExpressionList.Contains");

	USpecialMoveExpressionList_Contains_Params params;
	params.SMD = SMD;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveExpressionList.GetSMDToPlay
// (Native, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// class USpecialMoveDefinition*  ReturnValue                    (Parm, OutParm, ReturnParm)

class USpecialMoveDefinition* USpecialMoveExpressionList::GetSMDToPlay(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveExpressionList.GetSMDToPlay");

	USpecialMoveExpressionList_GetSMDToPlay_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveRandom.Contains
// (Native, Public)
// Parameters:
// class USpecialMoveDefinition*  SMD                            (Parm)
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USpecialMoveRandom::Contains(class USpecialMoveDefinition* SMD, const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveRandom.Contains");

	USpecialMoveRandom_Contains_Params params;
	params.SMD = SMD;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SpecialMoveRandom.GetSMDToPlay
// (Native, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// class USpecialMoveDefinition*  ReturnValue                    (Parm, OutParm, ReturnParm)

class USpecialMoveDefinition* USpecialMoveRandom::GetSMDToPlay(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SpecialMoveRandom.GetSMDToPlay");

	USpecialMoveRandom_GetSMDToPlay_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.WireTerminal.Destroyed
// (Defined, Event, Public)

void AWireTerminal::Destroyed()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.WireTerminal.Destroyed");

	AWireTerminal_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.WireTerminal.NotifyModifiedTerminal
// (Native, Public)

void AWireTerminal::NotifyModifiedTerminal()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.WireTerminal.NotifyModifiedTerminal");

	AWireTerminal_NotifyModifiedTerminal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.GetAIRangeTime
// (Native, Static, Public)
// Parameters:
// struct FAIRange                InRange                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UAIComponent::GetAIRangeTime(const struct FAIRange& InRange)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GetAIRangeTime");

	UAIComponent_GetAIRangeTime_Params params;
	params.InRange = InRange;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.DrawAITree
// (Native, Public)
// Parameters:
// class UCanvas*                 Canvas                         (Parm)

void UAIComponent::DrawAITree(class UCanvas* Canvas)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.DrawAITree");

	UAIComponent_DrawAITree_Params params;
	params.Canvas = Canvas;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.LogDemigodHolds
// (Defined, Public, HasDefaults)

void UAIComponent::LogDemigodHolds()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.LogDemigodHolds");

	UAIComponent_LogDemigodHolds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.ReleaseDialog
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::ReleaseDialog(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ReleaseDialog");

	UAIComponent_ReleaseDialog_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.HoldDialog
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::HoldDialog(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.HoldDialog");

	UAIComponent_HoldDialog_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.DialogOnHold
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::DialogOnHold()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.DialogOnHold");

	UAIComponent_DialogOnHold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ReleaseGod
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::ReleaseGod(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ReleaseGod");

	UAIComponent_ReleaseGod_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.HoldGod
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::HoldGod(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.HoldGod");

	UAIComponent_HoldGod_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.GodOnHold
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::GodOnHold()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GodOnHold");

	UAIComponent_GodOnHold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ReleaseDemigod
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::ReleaseDemigod(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ReleaseDemigod");

	UAIComponent_ReleaseDemigod_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.HoldDemigod
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::HoldDemigod(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.HoldDemigod");

	UAIComponent_HoldDemigod_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.DemigodOnHold
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::DemigodOnHold()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.DemigodOnHold");

	UAIComponent_DemigodOnHold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ReleaseMovement
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::ReleaseMovement(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ReleaseMovement");

	UAIComponent_ReleaseMovement_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.HoldMovement
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::HoldMovement(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.HoldMovement");

	UAIComponent_HoldMovement_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.MovementOnHold
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::MovementOnHold()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.MovementOnHold");

	UAIComponent_MovementOnHold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ReleaseTarget
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::ReleaseTarget(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ReleaseTarget");

	UAIComponent_ReleaseTarget_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.HoldTarget
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::HoldTarget(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.HoldTarget");

	UAIComponent_HoldTarget_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.TargetOnHold
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::TargetOnHold()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.TargetOnHold");

	UAIComponent_TargetOnHold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.Release
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::Release(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.Release");

	UAIComponent_Release_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.Hold
// (Native, Public)
// Parameters:
// struct FName                   HoldName                       (Parm)
// class UObject*                 Tag                            (Parm)

void UAIComponent::Hold(const struct FName& HoldName, class UObject* Tag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.Hold");

	UAIComponent_Hold_Params params;
	params.HoldName = HoldName;
	params.Tag = Tag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.OnHold
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::OnHold()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.OnHold");

	UAIComponent_OnHold_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ForceUpdateTargets
// (Native, Public)

void UAIComponent::ForceUpdateTargets()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ForceUpdateTargets");

	UAIComponent_ForceUpdateTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.TargetChanged
// (Native, Protected)
// Parameters:
// class AActor*                  OldTarget                      (Parm)
// class AActor*                  NewTarget                      (Parm)

void UAIComponent::TargetChanged(class AActor* OldTarget, class AActor* NewTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.TargetChanged");

	UAIComponent_TargetChanged_Params params;
	params.OldTarget = OldTarget;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.SetTarget
// (Native, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm)

void UAIComponent::SetTarget(class AActor* NewTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.SetTarget");

	UAIComponent_SetTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.SetScriptedTarget
// (Native, Public)
// Parameters:
// class AActor*                  NewScriptedTarget              (Parm)

void UAIComponent::SetScriptedTarget(class AActor* NewScriptedTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.SetScriptedTarget");

	UAIComponent_SetScriptedTarget_Params params;
	params.NewScriptedTarget = NewScriptedTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.GetTargetRecordFor
// (Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// bool                           bTryParent                     (OptionalParm, Parm)
// class UMindTargetInfo*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UMindTargetInfo* UAIComponent::GetTargetRecordFor(class AActor* Target, bool bTryParent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GetTargetRecordFor");

	UAIComponent_GetTargetRecordFor_Params params;
	params.Target = Target;
	params.bTryParent = bTryParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.GetTargetRecord
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bTryParent                     (OptionalParm, Parm)
// class UMindTargetInfo*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UMindTargetInfo* UAIComponent::GetTargetRecord(bool bTryParent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GetTargetRecord");

	UAIComponent_GetTargetRecord_Params params;
	params.bTryParent = bTryParent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.IsTarget
// (Native, Public)
// Parameters:
// class AActor*                  TestTarget                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::IsTarget(class AActor* TestTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.IsTarget");

	UAIComponent_IsTarget_Params params;
	params.TestTarget = TestTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.GetTarget
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UAIComponent::GetTarget()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GetTarget");

	UAIComponent_GetTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.HasTarget
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::HasTarget()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.HasTarget");

	UAIComponent_HasTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ShouldRemoveTarget
// (Native, Public)
// Parameters:
// class UMindTargetInfo*         TargetRec                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::ShouldRemoveTarget(class UMindTargetInfo* TargetRec)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ShouldRemoveTarget");

	UAIComponent_ShouldRemoveTarget_Params params;
	params.TargetRec = TargetRec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.TargetRemoved
// (Native, Public)
// Parameters:
// class UMindTargetInfo*         TargetRec                      (Parm)

void UAIComponent::TargetRemoved(class UMindTargetInfo* TargetRec)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.TargetRemoved");

	UAIComponent_TargetRemoved_Params params;
	params.TargetRec = TargetRec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.ForceRemoveTarget
// (Native, Public)
// Parameters:
// class AActor*                  Target                         (Parm)

void UAIComponent::ForceRemoveTarget(class AActor* Target)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ForceRemoveTarget");

	UAIComponent_ForceRemoveTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.ValidCurrentTarget
// (Native, Public)
// Parameters:
// class UMindTargetInfo*         TargetRec                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::ValidCurrentTarget(class UMindTargetInfo* TargetRec)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ValidCurrentTarget");

	UAIComponent_ValidCurrentTarget_Params params;
	params.TargetRec = TargetRec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ValidTarget
// (Native, Public)
// Parameters:
// class AActor*                  Target                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::ValidTarget(class AActor* Target)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ValidTarget");

	UAIComponent_ValidTarget_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.PrioritizeTarget
// (Final, Native, Protected)
// Parameters:
// class UMindTargetInfo*         TargetRec                      (Parm)

void UAIComponent::PrioritizeTarget(class UMindTargetInfo* TargetRec)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.PrioritizeTarget");

	UAIComponent_PrioritizeTarget_Params params;
	params.TargetRec = TargetRec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.CalcTargetInfo
// (Final, Native, Protected)
// Parameters:
// class UMindTargetInfo*         TargetRec                      (Parm)

void UAIComponent::CalcTargetInfo(class UMindTargetInfo* TargetRec)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.CalcTargetInfo");

	UAIComponent_CalcTargetInfo_Params params;
	params.TargetRec = TargetRec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.ChooseBestTarget
// (Final, Native, Protected)

void UAIComponent::ChooseBestTarget()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ChooseBestTarget");

	UAIComponent_ChooseBestTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.InheritTargets
// (Native, Protected)
// Parameters:
// class UAIComponent*            Parent                         (Parm, EditInline)

void UAIComponent::InheritTargets(class UAIComponent* Parent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.InheritTargets");

	UAIComponent_InheritTargets_Params params;
	params.Parent = Parent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.RemoveTargets
// (Native, Protected)

void UAIComponent::RemoveTargets()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.RemoveTargets");

	UAIComponent_RemoveTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.FindTargets
// (Native, Protected)

void UAIComponent::FindTargets()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.FindTargets");

	UAIComponent_FindTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.GetTargets
// (Native, Protected)

void UAIComponent::GetTargets()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GetTargets");

	UAIComponent_GetTargets_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.InitializeTargetRecord
// (Native, Public)
// Parameters:
// class UMindTargetInfo*         TargetRec                      (Parm)

void UAIComponent::InitializeTargetRecord(class UMindTargetInfo* TargetRec)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.InitializeTargetRecord");

	UAIComponent_InitializeTargetRecord_Params params;
	params.TargetRec = TargetRec;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.NotifyAttackedBy
// (Native, Public)
// Parameters:
// class AActor*                  Attacker                       (Parm)

void UAIComponent::NotifyAttackedBy(class AActor* Attacker)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.NotifyAttackedBy");

	UAIComponent_NotifyAttackedBy_Params params;
	params.Attacker = Attacker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.AddTarget
// (Native, Public)
// Parameters:
// class AActor*                  NewTarget                      (Parm)
// class UMindTargetInfo*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UMindTargetInfo* UAIComponent::AddTarget(class AActor* NewTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.AddTarget");

	UAIComponent_AddTarget_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.GetParentComponent
// (Final, Native, Public)
// Parameters:
// class UAIComponent*            ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UAIComponent* UAIComponent::GetParentComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GetParentComponent");

	UAIComponent_GetParentComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.GetAllegiance
// (Native, Public)
// Parameters:
// class UPawnAllegiance*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UPawnAllegiance* UAIComponent::GetAllegiance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.GetAllegiance");

	UAIComponent_GetAllegiance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponent.ClearState
// (Native, Public)

void UAIComponent::ClearState()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ClearState");

	UAIComponent_ClearState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIComponent.ActivateEvent
// (Final, Native, Public)
// Parameters:
// struct FName                   EventName                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIComponent::ActivateEvent(const struct FName& EventName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponent.ActivateEvent");

	UAIComponent_ActivateEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.FlagDefinition.ApplyFlagInitializationData
// (Native, Static, Public, HasOutParms)
// Parameters:
// TArray<struct FFlagDefinitionInitialization> FlagsToSet                     (Const, Parm, OutParm, NeedCtorLink)
// class UObject*                 ContextSource                  (Parm)

void UFlagDefinition::ApplyFlagInitializationData(class UObject* ContextSource, TArray<struct FFlagDefinitionInitialization>* FlagsToSet)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.FlagDefinition.ApplyFlagInitializationData");

	UFlagDefinition_ApplyFlagInitializationData_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlagsToSet != nullptr)
		*FlagsToSet = params.FlagsToSet;
}


// Function GearboxFramework.FlagDefinition.ResolveContext
// (Final, Native, Protected)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UFlagDefinition::ResolveContext(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.FlagDefinition.ResolveContext");

	UFlagDefinition_ResolveContext_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.FlagDefinition.SetTrueTimed
// (Final, Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// float                          TimeSeconds                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFlagDefinition::SetTrueTimed(class UObject* ContextSource, float TimeSeconds)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.FlagDefinition.SetTrueTimed");

	UFlagDefinition_SetTrueTimed_Params params;
	params.ContextSource = ContextSource;
	params.TimeSeconds = TimeSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.FlagDefinition.SetValue
// (Final, Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           Value                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFlagDefinition::SetValue(class UObject* ContextSource, bool Value)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.FlagDefinition.SetValue");

	UFlagDefinition_SetValue_Params params;
	params.ContextSource = ContextSource;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.TriggerBehavior
// (Final, Native, Public)
// Parameters:
// struct FName                   OutputName                     (Parm)

void UActionSequence::TriggerBehavior(const struct FName& OutputName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.TriggerBehavior");

	UActionSequence_TriggerBehavior_Params params;
	params.OutputName = OutputName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.GetRangeValue
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FAIRange                Range                          (Const, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UActionSequence::GetRangeValue(struct FAIRange* Range)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.GetRangeValue");

	UActionSequence_GetRangeValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.RangeIsValid
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FAIRange                Range                          (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UActionSequence::RangeIsValid(struct FAIRange* Range)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.RangeIsValid");

	UActionSequence_RangeIsValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Range != nullptr)
		*Range = params.Range;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.Finish
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bFailed                        (OptionalParm, Parm)

void UActionSequence::Finish(bool bFailed)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.Finish");

	UActionSequence_Finish_Params params;
	params.bFailed = bFailed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.IsRunning
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UActionSequence::IsRunning()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.IsRunning");

	UActionSequence_IsRunning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.ScriptCleanUp
// (Event, Public)

void UActionSequence::ScriptCleanUp()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.ScriptCleanUp");

	UActionSequence_ScriptCleanUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.CanRun
// (Defined, Event, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName UActionSequence::CanRun()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.CanRun");

	UActionSequence_CanRun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.ActivateEvent
// (Event, Public)
// Parameters:
// struct FName                   EventName                      (Parm)

void UActionSequence::ActivateEvent(const struct FName& EventName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.ActivateEvent");

	UActionSequence_ActivateEvent_Params params;
	params.EventName = EventName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.Update
// (Event, Public)

void UActionSequence::Update()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.Update");

	UActionSequence_Update_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.Init
// (Event, Public)

void UActionSequence::Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.Init");

	UActionSequence_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.Stop
// (Defined, Event, Public)

void UActionSequence::Stop()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.Stop");

	UActionSequence_Stop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.Start
// (Defined, Event, Public)

void UActionSequence::Start()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.Start");

	UActionSequence_Start_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.InterruptSequence
// (Event, Public)
// Parameters:
// class UActionSequence*         InterruptingSequence           (Parm)

void UActionSequence::InterruptSequence(class UActionSequence* InterruptingSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.InterruptSequence");

	UActionSequence_InterruptSequence_Params params;
	params.InterruptingSequence = InterruptingSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.StopSequence
// (Event, Public)

void UActionSequence::StopSequence()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.StopSequence");

	UActionSequence_StopSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.StartSequence
// (Event, Public)

void UActionSequence::StartSequence()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.StartSequence");

	UActionSequence_StartSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.ExecuteSequence
// (Final, Latent, Native, Public)
// Parameters:
// class UActionSequence*         SequenceTemplate               (Parm)

void UActionSequence::ExecuteSequence(class UActionSequence* SequenceTemplate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.ExecuteSequence");

	UActionSequence_ExecuteSequence_Params params;
	params.SequenceTemplate = SequenceTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.Sleep
// (Final, Latent, Native, Public)
// Parameters:
// float                          Seconds                        (Parm)

void UActionSequence::Sleep(float Seconds)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.Sleep");

	UActionSequence_Sleep_Params params;
	params.Seconds = Seconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.RunSubSequence
// (Final, Native, Public)
// Parameters:
// class UActionSequence*         SubSequence                    (Parm)

void UActionSequence::RunSubSequence(class UActionSequence* SubSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.RunSubSequence");

	UActionSequence_RunSubSequence_Params params;
	params.SubSequence = SubSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.InterruptLatentAction
// (Final, Native, Public)

void UActionSequence::InterruptLatentAction()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.InterruptLatentAction");

	UActionSequence_InterruptLatentAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.DoRuleSetPop
// (Final, Native, Public)

void UActionSequence::DoRuleSetPop()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.DoRuleSetPop");

	UActionSequence_DoRuleSetPop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.DoRuleSetPush
// (Final, Native, Public)
// Parameters:
// class URuleSet*                NewRuleSet                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UActionSequence::DoRuleSetPush(class URuleSet* NewRuleSet)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.DoRuleSetPush");

	UActionSequence_DoRuleSetPush_Params params;
	params.NewRuleSet = NewRuleSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.DoRuleSetSwitch
// (Final, Native, Public)
// Parameters:
// class URuleSet*                NewRuleSet                     (Parm)

void UActionSequence::DoRuleSetSwitch(class URuleSet* NewRuleSet)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.DoRuleSetSwitch");

	UActionSequence_DoRuleSetSwitch_Params params;
	params.NewRuleSet = NewRuleSet;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.PreventNewRulesFromStarting
// (Final, Native, Public)

void UActionSequence::PreventNewRulesFromStarting()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.PreventNewRulesFromStarting");

	UActionSequence_PreventNewRulesFromStarting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.GetRuleNative
// (Final, Native, Public)
// Parameters:
// class URule*                   ReturnValue                    (Parm, OutParm, ReturnParm)

class URule* UActionSequence::GetRuleNative()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.GetRuleNative");

	UActionSequence_GetRuleNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.GetActionSequence
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UActionSequence*         Template                       (Parm)
// class UActionSequence*         OutSequence                    (Parm, OutParm)

void UActionSequence::GetActionSequence(class UActionSequence* Template, class UActionSequence** OutSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.GetActionSequence");

	UActionSequence_GetActionSequence_Params params;
	params.Template = Template;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSequence != nullptr)
		*OutSequence = params.OutSequence;
}


// Function GearboxFramework.ActionSequence.IsInLabel
// (Final, Native, Public)
// Parameters:
// struct FName                   TestLabel                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UActionSequence::IsInLabel(const struct FName& TestLabel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.IsInLabel");

	UActionSequence_IsInLabel_Params params;
	params.TestLabel = TestLabel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.IsAtomic
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UActionSequence::IsAtomic()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.IsAtomic");

	UActionSequence_IsAtomic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequence.StopAtomic
// (Final, Native, Public)

void UActionSequence::StopAtomic()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.StopAtomic");

	UActionSequence_StopAtomic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.StartAtomic
// (Final, Native, Public)

void UActionSequence::StartAtomic()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.StartAtomic");

	UActionSequence_StartAtomic_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequence.IsActionReadyToFinish
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UActionSequence::IsActionReadyToFinish()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequence.IsActionReadyToFinish");

	UActionSequence_IsActionReadyToFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ActionSequenceList.IsActionReadyToFinish
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UActionSequenceList::IsActionReadyToFinish()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequenceList.IsActionReadyToFinish");

	UActionSequenceList_IsActionReadyToFinish_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Action_PawnMovementBase.PostMovement
// (Event, Public)

void UAction_PawnMovementBase::PostMovement()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.PostMovement");

	UAction_PawnMovementBase_PostMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.PreMovement
// (Event, Public)

void UAction_PawnMovementBase::PreMovement()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.PreMovement");

	UAction_PawnMovementBase_PreMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.PrePathFind
// (Event, Public)

void UAction_PawnMovementBase::PrePathFind()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.PrePathFind");

	UAction_PawnMovementBase_PrePathFind_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.InterruptSequence
// (Defined, Event, Public)
// Parameters:
// class UActionSequence*         InterruptingSequence           (Parm)

void UAction_PawnMovementBase::InterruptSequence(class UActionSequence* InterruptingSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.InterruptSequence");

	UAction_PawnMovementBase_InterruptSequence_Params params;
	params.InterruptingSequence = InterruptingSequence;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.StopSequence
// (Defined, Event, Public)

void UAction_PawnMovementBase::StopSequence()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.StopSequence");

	UAction_PawnMovementBase_StopSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.StartSequence
// (Defined, Event, Public)

void UAction_PawnMovementBase::StartSequence()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.StartSequence");

	UAction_PawnMovementBase_StartSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.MovePawnToDestinationLocation
// (Final, Latent, Native, Public)
// Parameters:
// struct FVector                 GoalLocation                   (Parm)
// bool                           NewUsePreciseArrival           (Parm)

void UAction_PawnMovementBase::MovePawnToDestinationLocation(const struct FVector& GoalLocation, bool NewUsePreciseArrival)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.MovePawnToDestinationLocation");

	UAction_PawnMovementBase_MovePawnToDestinationLocation_Params params;
	params.GoalLocation = GoalLocation;
	params.NewUsePreciseArrival = NewUsePreciseArrival;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.TakeDebugSnapshotMoveFailure
// (Final, Native, Public)
// Parameters:
// unsigned char                  Cause                          (Parm)

void UAction_PawnMovementBase::TakeDebugSnapshotMoveFailure(unsigned char Cause)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.TakeDebugSnapshotMoveFailure");

	UAction_PawnMovementBase_TakeDebugSnapshotMoveFailure_Params params;
	params.Cause = Cause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.SetMaxMovementSpeed
// (Final, Native, Public)
// Parameters:
// unsigned char                  NewMaxSpeed                    (Parm)

void UAction_PawnMovementBase::SetMaxMovementSpeed(unsigned char NewMaxSpeed)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.SetMaxMovementSpeed");

	UAction_PawnMovementBase_SetMaxMovementSpeed_Params params;
	params.NewMaxSpeed = NewMaxSpeed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_PawnMovementBase.EndMovePawnToDestinationLocation
// (Final, Native, Public)

void UAction_PawnMovementBase::EndMovePawnToDestinationLocation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_PawnMovementBase.EndMovePawnToDestinationLocation");

	UAction_PawnMovementBase_EndMovePawnToDestinationLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequenceRandom.EvaluateActionList
// (Defined, Public)

void UActionSequenceRandom::EvaluateActionList()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequenceRandom.EvaluateActionList");

	UActionSequenceRandom_EvaluateActionList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequenceRandom.OverrideNextSequenceToRun
// (Final, Native, Public)
// Parameters:
// class UActionSequence*         NewSequence                    (Parm)

void UActionSequenceRandom::OverrideNextSequenceToRun(class UActionSequence* NewSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequenceRandom.OverrideNextSequenceToRun");

	UActionSequenceRandom_OverrideNextSequenceToRun_Params params;
	params.NewSequence = NewSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActionSequenceRandom.GetRandomAction
// (Native, Public)
// Parameters:
// class UActionSequence*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UActionSequence* UActionSequenceRandom::GetRandomAction()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActionSequenceRandom.GetRandomAction");

	UActionSequenceRandom_GetRandomAction_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AICostExpressionEvaluator.Evaluate
// (Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAICostExpressionEvaluator::Evaluate(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AICostExpressionEvaluator.Evaluate");

	UAICostExpressionEvaluator_Evaluate_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.FlushPools
// (Native, Public)

void UAIFactoryBase::FlushPools()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.FlushPools");

	UAIFactoryBase_FlushPools_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIFactoryBase.ReturnAIDef
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UAIDefinition*           InAIDef                        (Parm, OutParm)

void UAIFactoryBase::ReturnAIDef(class UAIDefinition** InAIDef)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.ReturnAIDef");

	UAIFactoryBase_ReturnAIDef_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InAIDef != nullptr)
		*InAIDef = params.InAIDef;
}


// Function GearboxFramework.AIFactoryBase.GetAIDef
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UAIDefinition*           AIDefTemplate                  (Parm)
// class UAIDefinition*           OutAIDef                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetAIDef(class UAIDefinition* AIDefTemplate, class UAIDefinition** OutAIDef)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetAIDef");

	UAIFactoryBase_GetAIDef_Params params;
	params.AIDefTemplate = AIDefTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAIDef != nullptr)
		*OutAIDef = params.OutAIDef;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.ReturnTargetRecord
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UMindTargetInfo*         InTargetRecord                 (Parm, OutParm)

void UAIFactoryBase::ReturnTargetRecord(class UMindTargetInfo** InTargetRecord)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.ReturnTargetRecord");

	UAIFactoryBase_ReturnTargetRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InTargetRecord != nullptr)
		*InTargetRecord = params.InTargetRecord;
}


// Function GearboxFramework.AIFactoryBase.GetTargetRecord
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  InfoClass                      (Parm)
// class UMindTargetInfo*         OutTargetRecord                (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetTargetRecord(class UClass* InfoClass, class UMindTargetInfo** OutTargetRecord)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetTargetRecord");

	UAIFactoryBase_GetTargetRecord_Params params;
	params.InfoClass = InfoClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetRecord != nullptr)
		*OutTargetRecord = params.OutTargetRecord;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.ReturnActionSequence
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UActionSequence*         InSequence                     (Parm, OutParm)

void UAIFactoryBase::ReturnActionSequence(class UActionSequence** InSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.ReturnActionSequence");

	UAIFactoryBase_ReturnActionSequence_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InSequence != nullptr)
		*InSequence = params.InSequence;
}


// Function GearboxFramework.AIFactoryBase.GetActionSequence
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UActionSequence*         SequenceTemplate               (Parm)
// class UActionSequence*         OutSequence                    (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetActionSequence(class UActionSequence* SequenceTemplate, class UActionSequence** OutSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetActionSequence");

	UAIFactoryBase_GetActionSequence_Params params;
	params.SequenceTemplate = SequenceTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutSequence != nullptr)
		*OutSequence = params.OutSequence;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.ReturnRuleSet
// (Final, Native, Public, HasOutParms)
// Parameters:
// class URuleSet*                InRuleSet                      (Parm, OutParm)

void UAIFactoryBase::ReturnRuleSet(class URuleSet** InRuleSet)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.ReturnRuleSet");

	UAIFactoryBase_ReturnRuleSet_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRuleSet != nullptr)
		*InRuleSet = params.InRuleSet;
}


// Function GearboxFramework.AIFactoryBase.GetRuleSetFromArchetype
// (Final, Native, Public, HasOutParms)
// Parameters:
// class URuleSet*                RuleSetArchetype               (Parm)
// class URuleSet*                OutRuleSet                     (Parm, OutParm)
// TArray<class URule*>           CurRunningRules                (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetRuleSetFromArchetype(class URuleSet* RuleSetArchetype, class URuleSet** OutRuleSet, TArray<class URule*>* CurRunningRules)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetRuleSetFromArchetype");

	UAIFactoryBase_GetRuleSetFromArchetype_Params params;
	params.RuleSetArchetype = RuleSetArchetype;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRuleSet != nullptr)
		*OutRuleSet = params.OutRuleSet;
	if (CurRunningRules != nullptr)
		*CurRunningRules = params.CurRunningRules;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.ReturnKnowledgeRecord
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UKnowledgeRecord*        InKR                           (Parm, OutParm)

void UAIFactoryBase::ReturnKnowledgeRecord(class UKnowledgeRecord** InKR)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.ReturnKnowledgeRecord");

	UAIFactoryBase_ReturnKnowledgeRecord_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InKR != nullptr)
		*InKR = params.InKR;
}


// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecordListFromArchetypes
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class UKnowledgeRecord*> KnowledgeRecordTemplates       (Parm, NeedCtorLink)
// TArray<class UKnowledgeRecord*> KnowledgeRecords               (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetKnowledgeRecordListFromArchetypes(TArray<class UKnowledgeRecord*> KnowledgeRecordTemplates, TArray<class UKnowledgeRecord*>* KnowledgeRecords)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetKnowledgeRecordListFromArchetypes");

	UAIFactoryBase_GetKnowledgeRecordListFromArchetypes_Params params;
	params.KnowledgeRecordTemplates = KnowledgeRecordTemplates;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KnowledgeRecords != nullptr)
		*KnowledgeRecords = params.KnowledgeRecords;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecordFromArchetype
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UKnowledgeRecord*        InKR                           (Parm)
// class UKnowledgeRecord*        OutKR                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetKnowledgeRecordFromArchetype(class UKnowledgeRecord* InKR, class UKnowledgeRecord** OutKR)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetKnowledgeRecordFromArchetype");

	UAIFactoryBase_GetKnowledgeRecordFromArchetype_Params params;
	params.InKR = InKR;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKR != nullptr)
		*OutKR = params.OutKR;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.GetKnowledgeRecord
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  KnowledgeRecordClass           (Parm)
// class UKnowledgeRecord*        OutKR                          (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetKnowledgeRecord(class UClass* KnowledgeRecordClass, class UKnowledgeRecord** OutKR)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetKnowledgeRecord");

	UAIFactoryBase_GetKnowledgeRecord_Params params;
	params.KnowledgeRecordClass = KnowledgeRecordClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutKR != nullptr)
		*OutKR = params.OutKR;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.ReturnRule
// (Final, Native, Public, HasOutParms)
// Parameters:
// class URule*                   InRule                         (Parm, OutParm)

void UAIFactoryBase::ReturnRule(class URule** InRule)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.ReturnRule");

	UAIFactoryBase_ReturnRule_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InRule != nullptr)
		*InRule = params.InRule;
}


// Function GearboxFramework.AIFactoryBase.GetRuleFromArchetype
// (Final, Native, Public, HasOutParms)
// Parameters:
// class URule*                   InRule                         (Parm)
// class URule*                   OutRule                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetRuleFromArchetype(class URule* InRule, class URule** OutRule)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetRuleFromArchetype");

	UAIFactoryBase_GetRuleFromArchetype_Params params;
	params.InRule = InRule;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRule != nullptr)
		*OutRule = params.OutRule;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.GetRule
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  RuleClass                      (Parm)
// class URule*                   OutRule                        (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIFactoryBase::GetRule(class UClass* RuleClass, class URule** OutRule)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.GetRule");

	UAIFactoryBase_GetRule_Params params;
	params.RuleClass = RuleClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRule != nullptr)
		*OutRule = params.OutRule;

	return params.ReturnValue;
}


// Function GearboxFramework.AIFactoryBase.ReturnRuleEngine
// (Final, Native, Public)
// Parameters:
// class URuleEngine*             InRuleEngine                   (Parm)

void UAIFactoryBase::ReturnRuleEngine(class URuleEngine* InRuleEngine)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIFactoryBase.ReturnRuleEngine");

	UAIFactoryBase_ReturnRuleEngine_Params params;
	params.InRuleEngine = InRuleEngine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAIFactory.FreeRuleEngine
// (Final, Native, Public)
// Parameters:
// class URuleEngine*             InRuleEngine                   (Parm)

void UGearboxAIFactory::FreeRuleEngine(class URuleEngine* InRuleEngine)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIFactory.FreeRuleEngine");

	UGearboxAIFactory_FreeRuleEngine_Params params;
	params.InRuleEngine = InRuleEngine;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAIFactory.GetRuleEngineFromTemplate
// (Final, Native, Public, HasOutParms)
// Parameters:
// class URuleEngine*             OutRuleEngine                  (Parm, OutParm)
// class URuleEngine*             RuleEngineTemplate             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAIFactory::GetRuleEngineFromTemplate(class URuleEngine* RuleEngineTemplate, class URuleEngine** OutRuleEngine)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAIFactory.GetRuleEngineFromTemplate");

	UGearboxAIFactory_GetRuleEngineFromTemplate_Params params;
	params.RuleEngineTemplate = RuleEngineTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRuleEngine != nullptr)
		*OutRuleEngine = params.OutRuleEngine;

	return params.ReturnValue;
}


// Function GearboxFramework.AIResourceExpressionEvaluator.Evaluate
// (Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAIResourceExpressionEvaluator::Evaluate(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIResourceExpressionEvaluator.Evaluate");

	UAIResourceExpressionEvaluator_Evaluate_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AllegianceExpressionEvaluator.Evaluate
// (Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UAllegianceExpressionEvaluator::Evaluate(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AllegianceExpressionEvaluator.Evaluate");

	UAllegianceExpressionEvaluator_Evaluate_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GbxMessage.InitializeFromDefinition
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class UGbxMessageDefinition*   InDefinition                   (Parm)
// class UObject*                 RadiusContextSource            (Parm)
// class UObject*                 InSender                       (OptionalParm, Parm)
// class UObject*                 InSubject                      (OptionalParm, Parm)
// class UPawnAllegiance*         ManualSenderAllegiance         (OptionalParm, Parm)

void UGbxMessage::InitializeFromDefinition(class UGbxMessageDefinition* InDefinition, class UObject* RadiusContextSource, class UObject* InSender, class UObject* InSubject, class UPawnAllegiance* ManualSenderAllegiance)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GbxMessage.InitializeFromDefinition");

	UGbxMessage_InitializeFromDefinition_Params params;
	params.InDefinition = InDefinition;
	params.RadiusContextSource = RadiusContextSource;
	params.InSender = InSender;
	params.InSubject = InSubject;
	params.ManualSenderAllegiance = ManualSenderAllegiance;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Behavior_SendGbxMessage.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_SendGbxMessage::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SendGbxMessage.ApplyBehaviorToContext");

	UBehavior_SendGbxMessage_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_SendGbxMessage.GetLocation
// (Final, Defined, Private)
// Parameters:
// unsigned char                  SelectionParam                 (Parm)
// class UObject*                 ContextObject                  (Parm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UBehavior_SendGbxMessage::GetLocation(unsigned char SelectionParam, class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SendGbxMessage.GetLocation");

	UBehavior_SendGbxMessage_GetLocation_Params params;
	params.SelectionParam = SelectionParam;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Behavior_SendGbxMessage.GetMessageParameter
// (Final, Defined, Private)
// Parameters:
// unsigned char                  SelectionParam                 (Parm)
// class UObject*                 ContextObject                  (Parm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UBehavior_SendGbxMessage::GetMessageParameter(unsigned char SelectionParam, class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SendGbxMessage.GetMessageParameter");

	UBehavior_SendGbxMessage_GetMessageParameter_Params params;
	params.SelectionParam = SelectionParam;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Behavior_SetFlag.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_SetFlag::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SetFlag.ApplyBehaviorToContext");

	UBehavior_SetFlag_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.ExposureUtilityBase.CalculateVantageToPoint
// (Native, Public, HasOutParms)
// Parameters:
// class AActor*                  pLooker                        (Parm)
// struct FVector                 TargetPoint                    (Const, Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UExposureUtilityBase::CalculateVantageToPoint(class AActor* pLooker, struct FVector* TargetPoint)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ExposureUtilityBase.CalculateVantageToPoint");

	UExposureUtilityBase_CalculateVantageToPoint_Params params;
	params.pLooker = pLooker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TargetPoint != nullptr)
		*TargetPoint = params.TargetPoint;

	return params.ReturnValue;
}


// Function GearboxFramework.ExposureUtilityBase.CalculateTargetExposure
// (Native, Public)
// Parameters:
// class AGearboxPawn*            pLooker                        (Parm)
// class AActor*                  pTarget                        (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UExposureUtilityBase::CalculateTargetExposure(class AGearboxPawn* pLooker, class AActor* pTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ExposureUtilityBase.CalculateTargetExposure");

	UExposureUtilityBase_CalculateTargetExposure_Params params;
	params.pLooker = pLooker;
	params.pTarget = pTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.FiringBehaviorManager.GetTemplateClass
// (Defined, Event, Static, Public)
// Parameters:
// class UObject*                 TemplateObject                 (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* UFiringBehaviorManager::GetTemplateClass(class UObject* TemplateObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.FiringBehaviorManager.GetTemplateClass");

	UFiringBehaviorManager_GetTemplateClass_Params params;
	params.TemplateObject = TemplateObject;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.FiringZoneCollectionDefinition.GetZoneForDistance
// (Defined, Event, Public)
// Parameters:
// float                          Distance                       (Parm)
// class UFiringZoneDefinition*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UFiringZoneDefinition* UFiringZoneCollectionDefinition::GetZoneForDistance(float Distance)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.FiringZoneCollectionDefinition.GetZoneForDistance");

	UFiringZoneCollectionDefinition_GetZoneForDistance_Params params;
	params.Distance = Distance;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Rule.GetRuleName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString URule::GetRuleName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Rule.GetRuleName");

	URule_GetRuleName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Rule.GetRuleFName
// (Native, Public)
// Parameters:
// struct FName                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FName URule::GetRuleFName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Rule.GetRuleFName");

	URule_GetRuleFName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Rule.GetOtherEventParticipant
// (Defined, Public)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* URule::GetOtherEventParticipant()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Rule.GetOtherEventParticipant");

	URule_GetOtherEventParticipant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.FlagExpressionEvaluator.Evaluate
// (Native, Public)
// Parameters:
// class UObject*                 ContextSource                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UFlagExpressionEvaluator::Evaluate(class UObject* ContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.FlagExpressionEvaluator.Evaluate");

	UFlagExpressionEvaluator_Evaluate_Params params;
	params.ContextSource = ContextSource;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GbxMessageManager.RemoveListener
// (Native, Public)
// Parameters:
// FScriptInterface               InListener                     (Parm)

void UGbxMessageManager::RemoveListener(const FScriptInterface& InListener)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GbxMessageManager.RemoveListener");

	UGbxMessageManager_RemoveListener_Params params;
	params.InListener = InListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GbxMessageManager.AddListener
// (Native, Public)
// Parameters:
// FScriptInterface               InListener                     (Parm)

void UGbxMessageManager::AddListener(const FScriptInterface& InListener)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GbxMessageManager.AddListener");

	UGbxMessageManager_AddListener_Params params;
	params.InListener = InListener;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GbxMessageManager.PostMessage
// (Native, Public)
// Parameters:
// class UGbxMessage*             Message                        (Parm)

void UGbxMessageManager::PostMessage(class UGbxMessage* Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GbxMessageManager.PostMessage");

	UGbxMessageManager_PostMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GbxMessageManager.AllocateMessage
// (Native, Public)
// Parameters:
// class UGbxMessage*             ReturnValue                    (Parm, OutParm, ReturnParm)

class UGbxMessage* UGbxMessageManager::AllocateMessage()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GbxMessageManager.AllocateMessage");

	UGbxMessageManager_AllocateMessage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.ApplyFlagInitializationData
// (Native, Public, HasOutParms)
// Parameters:
// TArray<struct FFlagDefinitionInitialization> FlagsToSet                     (Const, Parm, OutParm, NeedCtorLink)

void URuleEngine::ApplyFlagInitializationData(TArray<struct FFlagDefinitionInitialization>* FlagsToSet)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.ApplyFlagInitializationData");

	URuleEngine_ApplyFlagInitializationData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FlagsToSet != nullptr)
		*FlagsToSet = params.FlagsToSet;
}


// Function GearboxFramework.RuleEngine.IsResourceInUse
// (Defined, Public)
// Parameters:
// class UClass*                  TestResourceClass              (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool URuleEngine::IsResourceInUse(class UClass* TestResourceClass)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.IsResourceInUse");

	URuleEngine_IsResourceInUse_Params params;
	params.TestResourceClass = TestResourceClass;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.GetContextSource
// (Native, Public)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* URuleEngine::GetContextSource()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.GetContextSource");

	URuleEngine_GetContextSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.IsRunningRuleWhichBlocksRuleSetChange
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool URuleEngine::IsRunningRuleWhichBlocksRuleSetChange()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.IsRunningRuleWhichBlocksRuleSetChange");

	URuleEngine_IsRunningRuleWhichBlocksRuleSetChange_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.GetDynamicFlagValue
// (Native, Public)
// Parameters:
// class UFlagDefinition*         FlagDefinition                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool URuleEngine::GetDynamicFlagValue(class UFlagDefinition* FlagDefinition)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.GetDynamicFlagValue");

	URuleEngine_GetDynamicFlagValue_Params params;
	params.FlagDefinition = FlagDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.SetDynamicFlagDefTrueTimed
// (Native, Public)
// Parameters:
// class UFlagDefinition*         FlagDefinition                 (Parm)
// float                          Time                           (Parm)

void URuleEngine::SetDynamicFlagDefTrueTimed(class UFlagDefinition* FlagDefinition, float Time)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.SetDynamicFlagDefTrueTimed");

	URuleEngine_SetDynamicFlagDefTrueTimed_Params params;
	params.FlagDefinition = FlagDefinition;
	params.Time = Time;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.SetDynamicFlagDefValue
// (Native, Public)
// Parameters:
// class UFlagDefinition*         FlagDefinition                 (Parm)
// bool                           Value                          (Parm)

void URuleEngine::SetDynamicFlagDefValue(class UFlagDefinition* FlagDefinition, bool Value)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.SetDynamicFlagDefValue");

	URuleEngine_SetDynamicFlagDefValue_Params params;
	params.FlagDefinition = FlagDefinition;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.GetRuleSetFromReference
// (Native, Public)
// Parameters:
// struct FName                   ReferenceName                  (Parm)
// class URuleSet*                ReturnValue                    (Parm, OutParm, ReturnParm)

class URuleSet* URuleEngine::GetRuleSetFromReference(const struct FName& ReferenceName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.GetRuleSetFromReference");

	URuleEngine_GetRuleSetFromReference_Params params;
	params.ReferenceName = ReferenceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.ClearRuleSetStack
// (Native, Public)

void URuleEngine::ClearRuleSetStack()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.ClearRuleSetStack");

	URuleEngine_ClearRuleSetStack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.PopRuleSetSwitch
// (Native, Public)

void URuleEngine::PopRuleSetSwitch()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.PopRuleSetSwitch");

	URuleEngine_PopRuleSetSwitch_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.PushRuleSetSwitch
// (Native, Public)
// Parameters:
// class URuleSet*                NewRuleSetTemplate             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool URuleEngine::PushRuleSetSwitch(class URuleSet* NewRuleSetTemplate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.PushRuleSetSwitch");

	URuleEngine_PushRuleSetSwitch_Params params;
	params.NewRuleSetTemplate = NewRuleSetTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.SetRuleSet
// (Native, Public)
// Parameters:
// class URuleSet*                NewRuleSetTemplate             (Parm)

void URuleEngine::SetRuleSet(class URuleSet* NewRuleSetTemplate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.SetRuleSet");

	URuleEngine_SetRuleSet_Params params;
	params.NewRuleSetTemplate = NewRuleSetTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.SwitchActiveRuleSet
// (Native, Public)
// Parameters:
// class URuleSet*                NewRuleSetTemplate             (Parm)

void URuleEngine::SwitchActiveRuleSet(class URuleSet* NewRuleSetTemplate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.SwitchActiveRuleSet");

	URuleEngine_SwitchActiveRuleSet_Params params;
	params.NewRuleSetTemplate = NewRuleSetTemplate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.UpdateKnowledge
// (Native, Public)
// Parameters:
// class UClass*                  pKnowledgeRecordType           (Parm)

void URuleEngine::UpdateKnowledge(class UClass* pKnowledgeRecordType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.UpdateKnowledge");

	URuleEngine_UpdateKnowledge_Params params;
	params.pKnowledgeRecordType = pKnowledgeRecordType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.ActivateEventRuleEx
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   EventDefName                   (Parm)
// TArray<class AGearboxPawn*>    Participants                   (OptionalParm, Parm, NeedCtorLink)
// class AActor*                  Subject                        (OptionalParm, Parm)
// bool                           CastSizeMustMatch              (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int URuleEngine::ActivateEventRuleEx(const struct FName& EventDefName, TArray<class AGearboxPawn*> Participants, class AActor* Subject, bool CastSizeMustMatch)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.ActivateEventRuleEx");

	URuleEngine_ActivateEventRuleEx_Params params;
	params.EventDefName = EventDefName;
	params.Participants = Participants;
	params.Subject = Subject;
	params.CastSizeMustMatch = CastSizeMustMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.CleanUpRuleEngineData
// (Native, Public)

void URuleEngine::CleanUpRuleEngineData()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.CleanUpRuleEngineData");

	URuleEngine_CleanUpRuleEngineData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.RuleEngine.ActivateEventRule
// (Native, HasOptionalParms, Public)
// Parameters:
// struct FName                   EventDefName                   (Parm)
// class AGearboxPawn*            Instigator                     (OptionalParm, Parm)
// class AActor*                  Subject                        (OptionalParm, Parm)
// bool                           CastSizeMustMatch              (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int URuleEngine::ActivateEventRule(const struct FName& EventDefName, class AGearboxPawn* Instigator, class AActor* Subject, bool CastSizeMustMatch)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.ActivateEventRule");

	URuleEngine_ActivateEventRule_Params params;
	params.EventDefName = EventDefName;
	params.Instigator = Instigator;
	params.Subject = Subject;
	params.CastSizeMustMatch = CastSizeMustMatch;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.RuleEngine.ActivateEventRuleByDefinition
// (Native, HasOptionalParms, Public)
// Parameters:
// class URuleEventDef*           EventDefinition                (Parm)
// class UObject*                 OtherEventParticipantObject    (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int URuleEngine::ActivateEventRuleByDefinition(class URuleEventDef* EventDefinition, class UObject* OtherEventParticipantObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.RuleEngine.ActivateEventRuleByDefinition");

	URuleEngine_ActivateEventRuleByDefinition_Params params;
	params.EventDefinition = EventDefinition;
	params.OtherEventParticipantObject = OtherEventParticipantObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.InitSequence
// (Native, Public)
// Parameters:
// class UActionSequence*         NewSequence                    (Parm)

void AGearboxMind::InitSequence(class UActionSequence* NewSequence)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.InitSequence");

	AGearboxMind_InitSequence_Params params;
	params.NewSequence = NewSequence;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.GetAllegiance
// (Native, Public)
// Parameters:
// class UPawnAllegiance*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UPawnAllegiance* AGearboxMind::GetAllegiance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetAllegiance");

	AGearboxMind_GetAllegiance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.GetAIDefinition
// (Native, Public)
// Parameters:
// class UAIDefinition*           ReturnValue                    (Parm, OutParm, ReturnParm)

class UAIDefinition* AGearboxMind::GetAIDefinition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetAIDefinition");

	AGearboxMind_GetAIDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.GetAIComponent
// (Native, Public)
// Parameters:
// class UAIComponent*            ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UAIComponent* AGearboxMind::GetAIComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetAIComponent");

	AGearboxMind_GetAIComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.GetAIParent
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface AGearboxMind::GetAIParent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetAIParent");

	AGearboxMind_GetAIParent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.GetAILocation
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGearboxMind::GetAILocation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetAILocation");

	AGearboxMind_GetAILocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.GetAIActor
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AGearboxMind::GetAIActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetAIActor");

	AGearboxMind_GetAIActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.CanTickAI
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::CanTickAI()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.CanTickAI");

	AGearboxMind_CanTickAI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.InGodMode
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::InGodMode()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.InGodMode");

	AGearboxMind_InGodMode_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.PawnDied
// (Defined, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)

void AGearboxMind::PawnDied(class APawn* inPawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.PawnDied");

	AGearboxMind_PawnDied_Params params;
	params.inPawn = inPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.OnTargetPriority
// (Defined, Public)
// Parameters:
// class UGearboxSeqAct_TargetPriority* inAction                       (Parm)

void AGearboxMind::OnTargetPriority(class UGearboxSeqAct_TargetPriority* inAction)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.OnTargetPriority");

	AGearboxMind_OnTargetPriority_Params params;
	params.inAction = inAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.Behavior_SetCanTarget
// (Defined, Public)
// Parameters:
// unsigned char                  ChangeStatus                   (Parm)

void AGearboxMind::Behavior_SetCanTarget(unsigned char ChangeStatus)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.Behavior_SetCanTarget");

	AGearboxMind_Behavior_SetCanTarget_Params params;
	params.ChangeStatus = ChangeStatus;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.GetNoTargetAllEnemies
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::GetNoTargetAllEnemies()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetNoTargetAllEnemies");

	AGearboxMind_GetNoTargetAllEnemies_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.SetNoTargetAllEnemies
// (Native, Static, Public)
// Parameters:
// bool                           bNoTarget                      (Parm)

void AGearboxMind::SetNoTargetAllEnemies(bool bNoTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.SetNoTargetAllEnemies");

	AGearboxMind_SetNoTargetAllEnemies_Params params;
	params.bNoTarget = bNoTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.ClearScriptedMoveTarget
// (Defined, Event, Public)

void AGearboxMind::ClearScriptedMoveTarget()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.ClearScriptedMoveTarget");

	AGearboxMind_ClearScriptedMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.IsCloseEnoughToScriptedMoveTarget
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsCloseEnoughToScriptedMoveTarget()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsCloseEnoughToScriptedMoveTarget");

	AGearboxMind_IsCloseEnoughToScriptedMoveTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.GetWeaponFireLocation
// (Defined, Event, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector AGearboxMind::GetWeaponFireLocation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetWeaponFireLocation");

	AGearboxMind_GetWeaponFireLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.ActivateEventRule
// (Native, Public)
// Parameters:
// struct FName                   RuleEventName                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGearboxMind::ActivateEventRule(const struct FName& RuleEventName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.ActivateEventRule");

	AGearboxMind_ActivateEventRule_Params params;
	params.RuleEventName = RuleEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.AddHitTargetRecord
// (Defined, Public)
// Parameters:
// class AGearboxPawn*            HitByPawn                      (Parm)
// struct FVector                 NewHitLocation                 (Parm)
// float                          flNewDamage                    (Parm)

void AGearboxMind::AddHitTargetRecord(class AGearboxPawn* HitByPawn, const struct FVector& NewHitLocation, float flNewDamage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.AddHitTargetRecord");

	AGearboxMind_AddHitTargetRecord_Params params;
	params.HitByPawn = HitByPawn;
	params.NewHitLocation = NewHitLocation;
	params.flNewDamage = flNewDamage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.StopMovement
// (Defined, Public)

void AGearboxMind::StopMovement()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.StopMovement");

	AGearboxMind_StopMovement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.Possess
// (Defined, Event, Public)
// Parameters:
// class APawn*                   inPawn                         (Parm)
// bool                           bVehicleTransition             (Parm)

void AGearboxMind::Possess(class APawn* inPawn, bool bVehicleTransition)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.Possess");

	AGearboxMind_Possess_Params params;
	params.inPawn = inPawn;
	params.bVehicleTransition = bVehicleTransition;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.GetGearboxRuleEngine
// (Defined, Public)
// Parameters:
// class UGearboxRuleEngine*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxRuleEngine* AGearboxMind::GetGearboxRuleEngine()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetGearboxRuleEngine");

	AGearboxMind_GetGearboxRuleEngine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.GetRuleEngine
// (Native, Public)
// Parameters:
// class URuleEngine*             ReturnValue                    (Parm, OutParm, ReturnParm)

class URuleEngine* AGearboxMind::GetRuleEngine()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetRuleEngine");

	AGearboxMind_GetRuleEngine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.NotifyShotAtBy
// (Native, Public)
// Parameters:
// class AGearboxPawn*            ShootingPawn                   (Parm)

void AGearboxMind::NotifyShotAtBy(class AGearboxPawn* ShootingPawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.NotifyShotAtBy");

	AGearboxMind_NotifyShotAtBy_Params params;
	params.ShootingPawn = ShootingPawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.FindCoverAndClaim
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 CoverSearchOrigin              (Parm)
// class UPawnMoveLocationRequest* LocationRequest                (Parm)
// struct FVector                 OutDestination                 (Parm, OutParm)
// float                          MinSearchRadius                (Parm)
// float                          MaxSearchRadius                (Parm)
// bool                           bEnactCoverChanges             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::FindCoverAndClaim(const struct FVector& CoverSearchOrigin, class UPawnMoveLocationRequest* LocationRequest, float MinSearchRadius, float MaxSearchRadius, bool bEnactCoverChanges, struct FVector* OutDestination)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.FindCoverAndClaim");

	AGearboxMind_FindCoverAndClaim_Params params;
	params.CoverSearchOrigin = CoverSearchOrigin;
	params.LocationRequest = LocationRequest;
	params.MinSearchRadius = MinSearchRadius;
	params.MaxSearchRadius = MaxSearchRadius;
	params.bEnactCoverChanges = bEnactCoverChanges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDestination != nullptr)
		*OutDestination = params.OutDestination;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.UpdateRuleEngineKnowledge
// (Native, Public)
// Parameters:
// class UClass*                  aKDBClass                      (Parm)

void AGearboxMind::UpdateRuleEngineKnowledge(class UClass* aKDBClass)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.UpdateRuleEngineKnowledge");

	AGearboxMind_UpdateRuleEngineKnowledge_Params params;
	params.aKDBClass = aKDBClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.GetCurrentTargetInfo
// (Native, Public, HasOutParms)
// Parameters:
// class UMindTargetInfo*         OutTargetRec                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::GetCurrentTargetInfo(class UMindTargetInfo** OutTargetRec)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetCurrentTargetInfo");

	AGearboxMind_GetCurrentTargetInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutTargetRec != nullptr)
		*OutTargetRec = params.OutTargetRec;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsSameAllegianceMind
// (Native, Public)
// Parameters:
// class AGearboxMind*            aMind                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsSameAllegianceMind(class AGearboxMind* aMind)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsSameAllegianceMind");

	AGearboxMind_IsSameAllegianceMind_Params params;
	params.aMind = aMind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsSameAllegiance
// (Native, Public)
// Parameters:
// class UObject*                 anObject                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsSameAllegiance(class UObject* anObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsSameAllegiance");

	AGearboxMind_IsSameAllegiance_Params params;
	params.anObject = anObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsNeutralMind
// (Native, Public)
// Parameters:
// class AGearboxMind*            aMind                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsNeutralMind(class AGearboxMind* aMind)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsNeutralMind");

	AGearboxMind_IsNeutralMind_Params params;
	params.aMind = aMind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsNeutral
// (Native, Public)
// Parameters:
// class UObject*                 anObject                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsNeutral(class UObject* anObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsNeutral");

	AGearboxMind_IsNeutral_Params params;
	params.anObject = anObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsFriendlyMind
// (Native, Public)
// Parameters:
// class AGearboxMind*            aMind                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsFriendlyMind(class AGearboxMind* aMind)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsFriendlyMind");

	AGearboxMind_IsFriendlyMind_Params params;
	params.aMind = aMind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsFriendly
// (Native, Public)
// Parameters:
// class UObject*                 anObject                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsFriendly(class UObject* anObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsFriendly");

	AGearboxMind_IsFriendly_Params params;
	params.anObject = anObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsEnemyMind
// (Native, Public)
// Parameters:
// class AGearboxMind*            aMind                          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsEnemyMind(class AGearboxMind* aMind)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsEnemyMind");

	AGearboxMind_IsEnemyMind_Params params;
	params.aMind = aMind;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.IsEnemy
// (Native, Public)
// Parameters:
// class UObject*                 anObject                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::IsEnemy(class UObject* anObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.IsEnemy");

	AGearboxMind_IsEnemy_Params params;
	params.anObject = anObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.WantsToWalk
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxMind::WantsToWalk()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.WantsToWalk");

	AGearboxMind_WantsToWalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.SetWantsToWalk
// (Native, Public)
// Parameters:
// bool                           bInWantsToWalk                 (Parm)

void AGearboxMind::SetWantsToWalk(bool bInWantsToWalk)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.SetWantsToWalk");

	AGearboxMind_SetWantsToWalk_Params params;
	params.bInWantsToWalk = bInWantsToWalk;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.GetFacingPolicy
// (Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char AGearboxMind::GetFacingPolicy()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetFacingPolicy");

	AGearboxMind_GetFacingPolicy_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.SetFacingPolicy
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  NewFacingPolicy                (Parm)
// class AActor*                  NewFacingActor                 (OptionalParm, Parm)
// struct FVector                 NewFacingVector                (OptionalParm, Parm)

void AGearboxMind::SetFacingPolicy(unsigned char NewFacingPolicy, class AActor* NewFacingActor, const struct FVector& NewFacingVector)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.SetFacingPolicy");

	AGearboxMind_SetFacingPolicy_Params params;
	params.NewFacingPolicy = NewFacingPolicy;
	params.NewFacingActor = NewFacingActor;
	params.NewFacingVector = NewFacingVector;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.GetCurrentTarget
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AGearboxMind::GetCurrentTarget()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetCurrentTarget");

	AGearboxMind_GetCurrentTarget_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxMind.RemoveEnemyFromQueue
// (Native, Public)
// Parameters:
// class AActor*                  Target                         (Parm)

void AGearboxMind::RemoveEnemyFromQueue(class AActor* Target)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.RemoveEnemyFromQueue");

	AGearboxMind_RemoveEnemyFromQueue_Params params;
	params.Target = Target;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxMind.GetNavigationHandle
// (Final, Native, Public)
// Parameters:
// class UGearboxNavigationHandle* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxNavigationHandle* AGearboxMind::GetNavigationHandle()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxMind.GetNavigationHandle");

	AGearboxMind_GetNavigationHandle_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsChangingDirection
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsChangingDirection()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsChangingDirection");

	UGearboxCoverStateManager_IsChangingDirection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsMantlingOverCoverInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsMantlingOverCoverInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsMantlingOverCoverInProgress");

	UGearboxCoverStateManager_IsMantlingOverCoverInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromPeekInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsReturnFromPeekInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsReturnFromPeekInProgress");

	UGearboxCoverStateManager_IsReturnFromPeekInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsPeekTransitionInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsPeekTransitionInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsPeekTransitionInProgress");

	UGearboxCoverStateManager_IsPeekTransitionInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsPeekedUp
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bTransitionCounts              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsPeekedUp(bool bTransitionCounts)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsPeekedUp");

	UGearboxCoverStateManager_IsPeekedUp_Params params;
	params.bTransitionCounts = bTransitionCounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromLeanOutInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsReturnFromLeanOutInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsReturnFromLeanOutInProgress");

	UGearboxCoverStateManager_IsReturnFromLeanOutInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsLeanOutTransitionInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsLeanOutTransitionInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsLeanOutTransitionInProgress");

	UGearboxCoverStateManager_IsLeanOutTransitionInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsLeanedOut
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bTransitionCounts              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsLeanedOut(bool bTransitionCounts)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsLeanedOut");

	UGearboxCoverStateManager_IsLeanedOut_Params params;
	params.bTransitionCounts = bTransitionCounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsReturnFromPopUpInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsReturnFromPopUpInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsReturnFromPopUpInProgress");

	UGearboxCoverStateManager_IsReturnFromPopUpInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsPopUpTransitionInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsPopUpTransitionInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsPopUpTransitionInProgress");

	UGearboxCoverStateManager_IsPopUpTransitionInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsPoppedUp
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           bTransitionCounts              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsPoppedUp(bool bTransitionCounts)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsPoppedUp");

	UGearboxCoverStateManager_IsPoppedUp_Params params;
	params.bTransitionCounts = bTransitionCounts;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsExecutingAnyTransition
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsExecutingAnyTransition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsExecutingAnyTransition");

	UGearboxCoverStateManager_IsExecutingAnyTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.GetDesiredState
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGearboxCoverStateManager::GetDesiredState()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetDesiredState");

	UGearboxCoverStateManager_GetDesiredState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.GetCurrentTransition
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGearboxCoverStateManager::GetCurrentTransition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetCurrentTransition");

	UGearboxCoverStateManager_GetCurrentTransition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.OnMantleOverCoverAnimEnd
// (Final, Native, Public)

void UGearboxCoverStateManager::OnMantleOverCoverAnimEnd()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.OnMantleOverCoverAnimEnd");

	UGearboxCoverStateManager_OnMantleOverCoverAnimEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEndEx
// (Final, Native, Public)

void UGearboxCoverStateManager::OnTransitionAnimEndEx()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEndEx");

	UGearboxCoverStateManager_OnTransitionAnimEndEx_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEnd
// (Final, Native, Public)
// Parameters:
// unsigned char                  Transition                     (Parm)

void UGearboxCoverStateManager::OnTransitionAnimEnd(unsigned char Transition)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.OnTransitionAnimEnd");

	UGearboxCoverStateManager_OnTransitionAnimEnd_Params params;
	params.Transition = Transition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCoverStateManager.OnDismountAnimEnd
// (Final, Native, Public)

void UGearboxCoverStateManager::OnDismountAnimEnd()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.OnDismountAnimEnd");

	UGearboxCoverStateManager_OnDismountAnimEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCoverStateManager.OnMountAnimEnd
// (Final, Native, Public)

void UGearboxCoverStateManager::OnMountAnimEnd()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.OnMountAnimEnd");

	UGearboxCoverStateManager_OnMountAnimEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCoverStateManager.MantleOverCover
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  CoverActor                     (OptionalParm, Parm)
// int                            CoverSlotNdx                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::MantleOverCover(class AActor* CoverActor, int CoverSlotNdx)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.MantleOverCover");

	UGearboxCoverStateManager_MantleOverCover_Params params;
	params.CoverActor = CoverActor;
	params.CoverSlotNdx = CoverSlotNdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.ReturnToCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::ReturnToCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.ReturnToCover");

	UGearboxCoverStateManager_ReturnToCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.LeanOutForFiring
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           BlindFire                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::LeanOutForFiring(bool BlindFire)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.LeanOutForFiring");

	UGearboxCoverStateManager_LeanOutForFiring_Params params;
	params.BlindFire = BlindFire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.PopUpForFiring
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// bool                           BlindFire                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::PopUpForFiring(bool BlindFire)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.PopUpForFiring");

	UGearboxCoverStateManager_PopUpForFiring_Params params;
	params.BlindFire = BlindFire;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.Peek
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::Peek()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.Peek");

	UGearboxCoverStateManager_Peek_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.DetachFromCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::DetachFromCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.DetachFromCover");

	UGearboxCoverStateManager_DetachFromCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.DismountCover
// (Final, Native, HasOptionalParms, Public)
// Parameters:
// unsigned char                  DismountType                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::DismountCover(unsigned char DismountType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.DismountCover");

	UGearboxCoverStateManager_DismountCover_Params params;
	params.DismountType = DismountType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.ClaimAndMountCover
// (Final, Native, Public)
// Parameters:
// class ACoverLink*              TheCoverLink                   (Parm)
// int                            SlotNdx                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::ClaimAndMountCover(class ACoverLink* TheCoverLink, int SlotNdx)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.ClaimAndMountCover");

	UGearboxCoverStateManager_ClaimAndMountCover_Params params;
	params.TheCoverLink = TheCoverLink;
	params.SlotNdx = SlotNdx;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.MountDesiredCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::MountDesiredCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.MountDesiredCover");

	UGearboxCoverStateManager_MountDesiredCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.ClearDesiredCover
// (Final, Native, Public)

void UGearboxCoverStateManager::ClearDesiredCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.ClearDesiredCover");

	UGearboxCoverStateManager_ClearDesiredCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCoverLocationAndRotation
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVector                 CoverLoc                       (Parm, OutParm)
// struct FRotator                CoverRot                       (Parm, OutParm)

void UGearboxCoverStateManager::GetCurrentCoverLocationAndRotation(struct FVector* CoverLoc, struct FRotator* CoverRot)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetCurrentCoverLocationAndRotation");

	UGearboxCoverStateManager_GetCurrentCoverLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoverLoc != nullptr)
		*CoverLoc = params.CoverLoc;
	if (CoverRot != nullptr)
		*CoverRot = params.CoverRot;
}


// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCoverLocationAndRotation
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FVector                 CoverLoc                       (Parm, OutParm)
// struct FRotator                CoverRot                       (Parm, OutParm)

void UGearboxCoverStateManager::GetDesiredCoverLocationAndRotation(struct FVector* CoverLoc, struct FRotator* CoverRot)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetDesiredCoverLocationAndRotation");

	UGearboxCoverStateManager_GetDesiredCoverLocationAndRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (CoverLoc != nullptr)
		*CoverLoc = params.CoverLoc;
	if (CoverRot != nullptr)
		*CoverRot = params.CoverRot;
}


// Function GearboxFramework.GearboxCoverStateManager.HasDesiredCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::HasDesiredCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.HasDesiredCover");

	UGearboxCoverStateManager_HasDesiredCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.GetLastCoverHeight
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGearboxCoverStateManager::GetLastCoverHeight()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetLastCoverHeight");

	UGearboxCoverStateManager_GetLastCoverHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCoverHeight
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGearboxCoverStateManager::GetCurrentCoverHeight()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetCurrentCoverHeight");

	UGearboxCoverStateManager_GetCurrentCoverHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCoverHeight
// (Final, Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGearboxCoverStateManager::GetDesiredCoverHeight()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetDesiredCoverHeight");

	UGearboxCoverStateManager_GetDesiredCoverHeight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.WasCoveredFrom
// (Final, Native, Public)
// Parameters:
// struct FVector                 ThreatLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::WasCoveredFrom(const struct FVector& ThreatLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.WasCoveredFrom");

	UGearboxCoverStateManager_WasCoveredFrom_Params params;
	params.ThreatLocation = ThreatLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.WillBeCoveredFrom
// (Final, Native, Public)
// Parameters:
// struct FVector                 ThreatLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::WillBeCoveredFrom(const struct FVector& ThreatLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.WillBeCoveredFrom");

	UGearboxCoverStateManager_WillBeCoveredFrom_Params params;
	params.ThreatLocation = ThreatLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsCoveredFrom
// (Final, Native, Public)
// Parameters:
// struct FVector                 ThreatLocation                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsCoveredFrom(const struct FVector& ThreatLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsCoveredFrom");

	UGearboxCoverStateManager_IsCoveredFrom_Params params;
	params.ThreatLocation = ThreatLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsDismountInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsDismountInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsDismountInProgress");

	UGearboxCoverStateManager_IsDismountInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsMountInProgress
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsMountInProgress()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsMountInProgress");

	UGearboxCoverStateManager_IsMountInProgress_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.WasMountedOnCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::WasMountedOnCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.WasMountedOnCover");

	UGearboxCoverStateManager_WasMountedOnCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsMountedOnCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsMountedOnCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsMountedOnCover");

	UGearboxCoverStateManager_IsMountedOnCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.IsUsingCover
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::IsUsingCover()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.IsUsingCover");

	UGearboxCoverStateManager_IsUsingCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.OnCoverStateChanged
// (Final, Simulated, Native, Public)

void UGearboxCoverStateManager::OnCoverStateChanged()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.OnCoverStateChanged");

	UGearboxCoverStateManager_OnCoverStateChanged_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxCoverStateManager.GetLastCover
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  OutCoverActor                  (Parm, OutParm)
// int                            OutSlotNdx                     (Parm, OutParm)

void UGearboxCoverStateManager::GetLastCover(class AActor** OutCoverActor, int* OutSlotNdx)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetLastCover");

	UGearboxCoverStateManager_GetLastCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCoverActor != nullptr)
		*OutCoverActor = params.OutCoverActor;
	if (OutSlotNdx != nullptr)
		*OutSlotNdx = params.OutSlotNdx;
}


// Function GearboxFramework.GearboxCoverStateManager.GetCurrentCover
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  OutCoverActor                  (Parm, OutParm)
// int                            OutSlotNdx                     (Parm, OutParm)

void UGearboxCoverStateManager::GetCurrentCover(class AActor** OutCoverActor, int* OutSlotNdx)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetCurrentCover");

	UGearboxCoverStateManager_GetCurrentCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCoverActor != nullptr)
		*OutCoverActor = params.OutCoverActor;
	if (OutSlotNdx != nullptr)
		*OutSlotNdx = params.OutSlotNdx;
}


// Function GearboxFramework.GearboxCoverStateManager.GetDesiredCover
// (Final, Native, Public, HasOutParms)
// Parameters:
// class AActor*                  OutCoverActor                  (Parm, OutParm)
// int                            OutSlotNdx                     (Parm, OutParm)

void UGearboxCoverStateManager::GetDesiredCover(class AActor** OutCoverActor, int* OutSlotNdx)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.GetDesiredCover");

	UGearboxCoverStateManager_GetDesiredCover_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutCoverActor != nullptr)
		*OutCoverActor = params.OutCoverActor;
	if (OutSlotNdx != nullptr)
		*OutSlotNdx = params.OutSlotNdx;
}


// Function GearboxFramework.GearboxCoverStateManager.FindCoverAndClaim
// (Final, Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class AGearboxMind*            TheMind                        (Parm)
// struct FVector                 CoverSearchOrigin              (Parm)
// class UPawnMoveLocationRequest* LocationRequest                (Parm)
// struct FVector                 OutDestination                 (Parm, OutParm)
// float                          MinSearchRadius                (Parm)
// float                          MaxSearchRadius                (Parm)
// bool                           bEnactCoverChanges             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxCoverStateManager::FindCoverAndClaim(class AGearboxMind* TheMind, const struct FVector& CoverSearchOrigin, class UPawnMoveLocationRequest* LocationRequest, float MinSearchRadius, float MaxSearchRadius, bool bEnactCoverChanges, struct FVector* OutDestination)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.FindCoverAndClaim");

	UGearboxCoverStateManager_FindCoverAndClaim_Params params;
	params.TheMind = TheMind;
	params.CoverSearchOrigin = CoverSearchOrigin;
	params.LocationRequest = LocationRequest;
	params.MinSearchRadius = MinSearchRadius;
	params.MaxSearchRadius = MaxSearchRadius;
	params.bEnactCoverChanges = bEnactCoverChanges;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutDestination != nullptr)
		*OutDestination = params.OutDestination;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxCoverStateManager.Initialize
// (Final, Defined, Public)
// Parameters:
// class AGearboxPawn*            P                              (Parm)

void UGearboxCoverStateManager::Initialize(class AGearboxPawn* P)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxCoverStateManager.Initialize");

	UGearboxCoverStateManager_Initialize_Params params;
	params.P = P;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxNavigationHandle.SetDesiredMovementSpeed
// (Final, Native, Public)
// Parameters:
// unsigned char                  Speed                          (Parm)

void UGearboxNavigationHandle::SetDesiredMovementSpeed(unsigned char Speed)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.SetDesiredMovementSpeed");

	UGearboxNavigationHandle_SetDesiredMovementSpeed_Params params;
	params.Speed = Speed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxNavigationHandle.ClearAnchor
// (Final, Native, Public)

void UGearboxNavigationHandle::ClearAnchor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.ClearAnchor");

	UGearboxNavigationHandle_ClearAnchor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxNavigationHandle.GetNearestPositionOnNavMesh
// (Native, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// float                          Radius                         (Parm)
// struct FVector                 TestLoc                        (Parm)
// struct FBasedPosition          NearestPos                     (Parm, OutParm)
// struct FNavMeshPathParams      PolyUsableCheckParams          (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
// struct FGBXNavMeshPolyRef      NearestPoly                    (OptionalParm, Parm, OutParm)
// bool                           bAnyHeight                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::GetNearestPositionOnNavMesh(float Radius, const struct FVector& TestLoc, bool bAnyHeight, struct FBasedPosition* NearestPos, struct FNavMeshPathParams* PolyUsableCheckParams, struct FGBXNavMeshPolyRef* NearestPoly)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.GetNearestPositionOnNavMesh");

	UGearboxNavigationHandle_GetNearestPositionOnNavMesh_Params params;
	params.Radius = Radius;
	params.TestLoc = TestLoc;
	params.bAnyHeight = bAnyHeight;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NearestPos != nullptr)
		*NearestPos = params.NearestPos;
	if (PolyUsableCheckParams != nullptr)
		*PolyUsableCheckParams = params.PolyUsableCheckParams;
	if (NearestPoly != nullptr)
		*NearestPoly = params.NearestPoly;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.GetNavMeshPolyForPoint
// (Native, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FVector                 Point                          (Parm)
// struct FGBXNavMeshPolyRef      FoundPoly                      (Parm, OutParm)
// struct FNavMeshPathParams      PolyUsableCheckParams          (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::GetNavMeshPolyForPoint(const struct FVector& Point, struct FGBXNavMeshPolyRef* FoundPoly, struct FNavMeshPathParams* PolyUsableCheckParams)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.GetNavMeshPolyForPoint");

	UGearboxNavigationHandle_GetNavMeshPolyForPoint_Params params;
	params.Point = Point;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FoundPoly != nullptr)
		*FoundPoly = params.FoundPoly;
	if (PolyUsableCheckParams != nullptr)
		*PolyUsableCheckParams = params.PolyUsableCheckParams;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.IsDoingSpecialMove
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::IsDoingSpecialMove()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.IsDoingSpecialMove");

	UGearboxNavigationHandle_IsDoingSpecialMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.InFinalPoly
// (Native, Public)
// Parameters:
// struct FVector                 TestLoc                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::InFinalPoly(const struct FVector& TestLoc)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.InFinalPoly");

	UGearboxNavigationHandle_InFinalPoly_Params params;
	params.TestLoc = TestLoc;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.NeedsRegularWalkingPhysics
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::NeedsRegularWalkingPhysics()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.NeedsRegularWalkingPhysics");

	UGearboxNavigationHandle_NeedsRegularWalkingPhysics_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.PopulatePathfindingParamCache
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::PopulatePathfindingParamCache()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.PopulatePathfindingParamCache");

	UGearboxNavigationHandle_PopulatePathfindingParamCache_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.TrySpecialMove
// (Native, Public, HasOutParms)
// Parameters:
// struct FBasedPosition          MoveTarget                     (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::TrySpecialMove(struct FBasedPosition* MoveTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.TrySpecialMove");

	UGearboxNavigationHandle_TrySpecialMove_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MoveTarget != nullptr)
		*MoveTarget = params.MoveTarget;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.Finished
// (Native, Public)

void UGearboxNavigationHandle::Finished()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.Finished");

	UGearboxNavigationHandle_Finished_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxNavigationHandle.IsGoalValid
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::IsGoalValid()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.IsGoalValid");

	UGearboxNavigationHandle_IsGoalValid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.MovePawnToGoal
// (Native, Public)

void UGearboxNavigationHandle::MovePawnToGoal()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.MovePawnToGoal");

	UGearboxNavigationHandle_MovePawnToGoal_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxNavigationHandle.PathIsValid
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FPathFindData           Data                           (Const, Parm, OutParm, NeedCtorLink)
// bool                           bCheckAnchor                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::PathIsValid(bool bCheckAnchor, struct FPathFindData* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.PathIsValid");

	UGearboxNavigationHandle_PathIsValid_Params params;
	params.bCheckAnchor = bCheckAnchor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.IsFollowingPath
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::IsFollowingPath()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.IsFollowingPath");

	UGearboxNavigationHandle_IsFollowingPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.ClearPath
// (Native, HasOptionalParms, Public)
// Parameters:
// bool                           bStopMovement                  (OptionalParm, Parm)
// bool                           bAllowDelayedClear             (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::ClearPath(bool bStopMovement, bool bAllowDelayedClear)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.ClearPath");

	UGearboxNavigationHandle_ClearPath_Params params;
	params.bStopMovement = bStopMovement;
	params.bAllowDelayedClear = bAllowDelayedClear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.FollowPath
// (Native, Public, HasOutParms)
// Parameters:
// struct FPathFindData           Data                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::FollowPath(struct FPathFindData* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.FollowPath");

	UGearboxNavigationHandle_FollowPath_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxNavigationHandle.CreatePathToLocation
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FPathFindData           PathData                       (Parm, OutParm, NeedCtorLink)
// struct FVector                 DestLocation                   (Parm)
// struct FGBXNavMeshPolyRef      DestPoly                       (OptionalParm, Parm)
// bool                           bAdjustStartForMotion          (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxNavigationHandle::CreatePathToLocation(const struct FVector& DestLocation, const struct FGBXNavMeshPolyRef& DestPoly, bool bAdjustStartForMotion, struct FPathFindData* PathData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxNavigationHandle.CreatePathToLocation");

	UGearboxNavigationHandle_CreatePathToLocation_Params params;
	params.DestLocation = DestLocation;
	params.DestPoly = DestPoly;
	params.bAdjustStartForMotion = bAdjustStartForMotion;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PathData != nullptr)
		*PathData = params.PathData;

	return params.ReturnValue;
}


// Function GearboxFramework.IGbxMessageListener.WantsToStopListening
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UIGbxMessageListener::WantsToStopListening()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGbxMessageListener.WantsToStopListening");

	UIGbxMessageListener_WantsToStopListening_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IGbxMessageListener.GetActor
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UIGbxMessageListener::GetActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGbxMessageListener.GetActor");

	UIGbxMessageListener_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IGbxMessageListener.GetListenerLocation
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UIGbxMessageListener::GetListenerLocation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGbxMessageListener.GetListenerLocation");

	UIGbxMessageListener_GetListenerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IGbxMessageListener.GetAllegiance
// (Native, Public)
// Parameters:
// class UPawnAllegiance*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UPawnAllegiance* UIGbxMessageListener::GetAllegiance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGbxMessageListener.GetAllegiance");

	UIGbxMessageListener_GetAllegiance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IGbxMessageListener.ReceiveMessage
// (Native, Public)
// Parameters:
// class UGbxMessage*             Message                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UIGbxMessageListener::ReceiveMessage(class UGbxMessage* Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGbxMessageListener.ReceiveMessage");

	UIGbxMessageListener_ReceiveMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IGbxMessageListener.CaresAboutMessage
// (Native, Public)
// Parameters:
// class UGbxMessage*             Message                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UIGbxMessageListener::CaresAboutMessage(class UGbxMessage* Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IGbxMessageListener.CaresAboutMessage");

	UIGbxMessageListener_CaresAboutMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IRuleEngineOwner.GetRuleEngine
// (Native, Public)
// Parameters:
// class URuleEngine*             ReturnValue                    (Parm, OutParm, ReturnParm)

class URuleEngine* UIRuleEngineOwner::GetRuleEngine()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IRuleEngineOwner.GetRuleEngine");

	UIRuleEngineOwner_GetRuleEngine_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.KnowledgeRecord.RecordEvalCallback
// (Event, Public)
// Parameters:
// class URuleEngine*             EvalRuleEngine                 (Parm)

void UKnowledgeRecord::RecordEvalCallback(class URuleEngine* EvalRuleEngine)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.KnowledgeRecord.RecordEvalCallback");

	UKnowledgeRecord_RecordEvalCallback_Params params;
	params.EvalRuleEngine = EvalRuleEngine;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.MindTargetInfo.GetAverageHitTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UMindTargetInfo::GetAverageHitTime()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.MindTargetInfo.GetAverageHitTime");

	UMindTargetInfo_GetAverageHitTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.MindTargetInfo.AddHitTargetRecord
// (Native, Public)
// Parameters:
// struct FVector                 vecNewHitLoc                   (Parm)
// float                          flNewDamage                    (Parm)

void UMindTargetInfo::AddHitTargetRecord(const struct FVector& vecNewHitLoc, float flNewDamage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.MindTargetInfo.AddHitTargetRecord");

	UMindTargetInfo_AddHitTargetRecord_Params params;
	params.vecNewHitLoc = vecNewHitLoc;
	params.flNewDamage = flNewDamage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxRuleEngine.Initialize
// (Native, Public)
// Parameters:
// class AGearboxPawn*            NewGearboxPawn                 (Parm)
// class AGearboxMind*            NewMind                        (Parm)
// class UGearboxAIFactory*       NewAIFactory                   (Parm)

void UGearboxRuleEngine::Initialize(class AGearboxPawn* NewGearboxPawn, class AGearboxMind* NewMind, class UGearboxAIFactory* NewAIFactory)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRuleEngine.Initialize");

	UGearboxRuleEngine_Initialize_Params params;
	params.NewGearboxPawn = NewGearboxPawn;
	params.NewMind = NewMind;
	params.NewAIFactory = NewAIFactory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxRuleEngine.GetContextSource
// (Native, Public)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UGearboxRuleEngine::GetContextSource()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxRuleEngine.GetContextSource");

	UGearboxRuleEngine_GetContextSource_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.TargetIterator.RecordEvalCallback
// (Event, Static, Public)
// Parameters:
// class URuleEngine*             EvalRuleEngine                 (Parm)

void UTargetIterator::RecordEvalCallback(class URuleEngine* EvalRuleEngine)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.TargetIterator.RecordEvalCallback");

	UTargetIterator_RecordEvalCallback_Params params;
	params.EvalRuleEngine = EvalRuleEngine;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.IPopulationSpawnPoint.GetInitialMovementHoldTime
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UIPopulationSpawnPoint::GetInitialMovementHoldTime()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IPopulationSpawnPoint.GetInitialMovementHoldTime");

	UIPopulationSpawnPoint_GetInitialMovementHoldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IPopulationSpawnPoint.GetInitialDestination
// (Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UIPopulationSpawnPoint::GetInitialDestination()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IPopulationSpawnPoint.GetInitialDestination");

	UIPopulationSpawnPoint_GetInitialDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IPopulationSpawnPoint.GetInitialActionType
// (Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UIPopulationSpawnPoint::GetInitialActionType()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IPopulationSpawnPoint.GetInitialActionType");

	UIPopulationSpawnPoint_GetInitialActionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IPopulationSpawnPoint.GetSpawnStyleType
// (Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UIPopulationSpawnPoint::GetSpawnStyleType()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IPopulationSpawnPoint.GetSpawnStyleType");

	UIPopulationSpawnPoint_GetSpawnStyleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationDefinition.IsAllSpawnTypesDebugEnabled
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationDefinition::IsAllSpawnTypesDebugEnabled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationDefinition.IsAllSpawnTypesDebugEnabled");

	UPopulationDefinition_IsAllSpawnTypesDebugEnabled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationDefinition.ToggleAllSpawnTypesDebug
// (Native, Static, Public)

void UPopulationDefinition::ToggleAllSpawnTypesDebug()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationDefinition.ToggleAllSpawnTypesDebug");

	UPopulationDefinition_ToggleAllSpawnTypesDebug_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationDefinition.GetRandomFactory
// (Native, Public)
// Parameters:
// class APopulationOpportunity*  SpawningOpportunity            (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// class UPopulationFactory*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UPopulationFactory* UPopulationDefinition::GetRandomFactory(class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationDefinition.GetRandomFactory");

	UPopulationDefinition_GetRandomFactory_Params params;
	params.SpawningOpportunity = SpawningOpportunity;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.GetDescriptionOfFactoryOutput
// (Defined, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UPopulationFactory::GetDescriptionOfFactoryOutput()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.GetDescriptionOfFactoryOutput");

	UPopulationFactory_GetDescriptionOfFactoryOutput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.ShouldSavePopulationActor
// (Defined, Event, Static, Public)
// Parameters:
// class UPopulationMaster*       Master                         (Parm)
// class AActor*                  ActorToSave                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationFactory::ShouldSavePopulationActor(class UPopulationMaster* Master, class AActor* ActorToSave)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.ShouldSavePopulationActor");

	UPopulationFactory_ShouldSavePopulationActor_Params params;
	params.Master = Master;
	params.ActorToSave = ActorToSave;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.DestroyPopulationActor
// (Defined, Event, Static, HasOptionalParms, Public)
// Parameters:
// class UPopulationMaster*       Master                         (Parm)
// int                            nOpportunityIdx                (Parm)
// class AActor*                  ActorToDestroy                 (Parm)
// class UPopulationFactory*      SpawnFactory                   (Parm)
// int                            CreationFlags                  (Parm)
// bool                           bDontSaveActor                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationFactory::DestroyPopulationActor(class UPopulationMaster* Master, int nOpportunityIdx, class AActor* ActorToDestroy, class UPopulationFactory* SpawnFactory, int CreationFlags, bool bDontSaveActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.DestroyPopulationActor");

	UPopulationFactory_DestroyPopulationActor_Params params;
	params.Master = Master;
	params.nOpportunityIdx = nOpportunityIdx;
	params.ActorToDestroy = ActorToDestroy;
	params.SpawnFactory = SpawnFactory;
	params.CreationFlags = CreationFlags;
	params.bDontSaveActor = bDontSaveActor;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.CreatePopulationActor
// (Defined, Event, Public)
// Parameters:
// class UPopulationMaster*       Master                         (Parm)
// class APopulationOpportunity*  Opportunity                    (Parm)
// class UObject*                 SpawnLocationContextObject     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UPopulationFactory::CreatePopulationActor(class UPopulationMaster* Master, class APopulationOpportunity* Opportunity, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.CreatePopulationActor");

	UPopulationFactory_CreatePopulationActor_Params params;
	params.Master = Master;
	params.Opportunity = Opportunity;
	params.SpawnLocationContextObject = SpawnLocationContextObject;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.GetSpawnVisibilityBounds
// (Defined, Event, Public, HasDefaults)
// Parameters:
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// struct FBoxSphereBounds        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoxSphereBounds UPopulationFactory::GetSpawnVisibilityBounds(int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.GetSpawnVisibilityBounds");

	UPopulationFactory_GetSpawnVisibilityBounds_Params params;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.GetActorAllegiance
// (Native, Public)
// Parameters:
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// class UPawnAllegiance*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UPawnAllegiance* UPopulationFactory::GetActorAllegiance(int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.GetActorAllegiance");

	UPopulationFactory_GetActorAllegiance_Params params;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.GetActorSpawnCost
// (Defined, Event, Public)
// Parameters:
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// bool                           bCanSpawnTest                  (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPopulationFactory::GetActorSpawnCost(int GameStage, int Rarity, bool bCanSpawnTest)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.GetActorSpawnCost");

	UPopulationFactory_GetActorSpawnCost_Params params;
	params.GameStage = GameStage;
	params.Rarity = Rarity;
	params.bCanSpawnTest = bCanSpawnTest;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.OnSpawnActor
// (Defined, Event, Public)
// Parameters:
// class AActor*                  aNewActor                      (Parm)

void UPopulationFactory::OnSpawnActor(class AActor* aNewActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.OnSpawnActor");

	UPopulationFactory_OnSpawnActor_Params params;
	params.aNewActor = aNewActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationFactory.SetupMatineeForActor
// (Event, Static, Public)
// Parameters:
// class AActor*                  aNewActor                      (Parm)

void UPopulationFactory::SetupMatineeForActor(class AActor* aNewActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.SetupMatineeForActor");

	UPopulationFactory_SetupMatineeForActor_Params params;
	params.aNewActor = aNewActor;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationFactory.GetSpawnFactory
// (Native, Public)
// Parameters:
// class APopulationOpportunity*  SpawningOpportunity            (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// class UPopulationFactory*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UPopulationFactory* UPopulationFactory::GetSpawnFactory(class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.GetSpawnFactory");

	UPopulationFactory_GetSpawnFactory_Params params;
	params.SpawningOpportunity = SpawningOpportunity;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.GetSpawnProbabilityAtThisGameStage
// (Native, Public)
// Parameters:
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPopulationFactory::GetSpawnProbabilityAtThisGameStage(int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.GetSpawnProbabilityAtThisGameStage");

	UPopulationFactory_GetSpawnProbabilityAtThisGameStage_Params params;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.IsFactoryWithin
// (Native, Public)
// Parameters:
// class UPopulationFactory*      TestFactory                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationFactory::IsFactoryWithin(class UPopulationFactory* TestFactory)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.IsFactoryWithin");

	UPopulationFactory_IsFactoryWithin_Params params;
	params.TestFactory = TestFactory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactory.CanSpawn
// (Native, Public)
// Parameters:
// class APopulationOpportunity*  SpawningOpportunity            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationFactory::CanSpawn(class APopulationOpportunity* SpawningOpportunity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactory.CanSpawn");

	UPopulationFactory_CanSpawn_Params params;
	params.SpawningOpportunity = SpawningOpportunity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactoryGeneric.CreatePopulationActor
// (Defined, Event, Public)
// Parameters:
// class UPopulationMaster*       Master                         (Parm)
// class APopulationOpportunity*  Opportunity                    (Parm)
// class UObject*                 SpawnLocationContextObject     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UPopulationFactoryGeneric::CreatePopulationActor(class UPopulationMaster* Master, class APopulationOpportunity* Opportunity, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactoryGeneric.CreatePopulationActor");

	UPopulationFactoryGeneric_CreatePopulationActor_Params params;
	params.Master = Master;
	params.Opportunity = Opportunity;
	params.SpawnLocationContextObject = SpawnLocationContextObject;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactoryGeneric.GetSpawnVisibilityBounds
// (Defined, Event, Public)
// Parameters:
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// struct FBoxSphereBounds        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBoxSphereBounds UPopulationFactoryGeneric::GetSpawnVisibilityBounds(int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactoryGeneric.GetSpawnVisibilityBounds");

	UPopulationFactoryGeneric_GetSpawnVisibilityBounds_Params params;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactoryPopulationDefinition.GetSpawnFactory
// (Native, Public)
// Parameters:
// class APopulationOpportunity*  SpawningOpportunity            (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// class UPopulationFactory*      ReturnValue                    (Parm, OutParm, ReturnParm)

class UPopulationFactory* UPopulationFactoryPopulationDefinition::GetSpawnFactory(class APopulationOpportunity* SpawningOpportunity, int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactoryPopulationDefinition.GetSpawnFactory");

	UPopulationFactoryPopulationDefinition_GetSpawnFactory_Params params;
	params.SpawningOpportunity = SpawningOpportunity;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactoryPopulationDefinition.GetActorAllegiance
// (Native, Public)
// Parameters:
// int                            GameStage                      (Parm)
// int                            AwesomeLevel                   (Parm)
// class UPawnAllegiance*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UPawnAllegiance* UPopulationFactoryPopulationDefinition::GetActorAllegiance(int GameStage, int AwesomeLevel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactoryPopulationDefinition.GetActorAllegiance");

	UPopulationFactoryPopulationDefinition_GetActorAllegiance_Params params;
	params.GameStage = GameStage;
	params.AwesomeLevel = AwesomeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationFactoryPopulationDefinition.IsFactoryWithin
// (Native, Public)
// Parameters:
// class UPopulationFactory*      TestFactory                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationFactoryPopulationDefinition::IsFactoryWithin(class UPopulationFactory* TestFactory)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationFactoryPopulationDefinition.IsFactoryWithin");

	UPopulationFactoryPopulationDefinition_IsFactoryWithin_Params params;
	params.TestFactory = TestFactory;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.ClearBodyCompositionInstance
// (Native, Public)

void APopulationOpportunity::ClearBodyCompositionInstance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.ClearBodyCompositionInstance");

	APopulationOpportunity_ClearBodyCompositionInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.ApplyPreviewBodyComposition
// (Native, Public)

void APopulationOpportunity::ApplyPreviewBodyComposition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.ApplyPreviewBodyComposition");

	APopulationOpportunity_ApplyPreviewBodyComposition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.GetBodyInfoProvider
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface APopulationOpportunity::GetBodyInfoProvider()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetBodyInfoProvider");

	APopulationOpportunity_GetBodyInfoProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.ChangeInstanceDataSwitch
// (Native, Public)
// Parameters:
// struct FName                   SwitchName                     (Const, Parm)
// unsigned char                  NewValue                       (Parm)

void APopulationOpportunity::ChangeInstanceDataSwitch(const struct FName& SwitchName, unsigned char NewValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.ChangeInstanceDataSwitch");

	APopulationOpportunity_ChangeInstanceDataSwitch_Params params;
	params.SwitchName = SwitchName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.PostInitBodyComposition
// (Native, Public)
// Parameters:
// struct FName                   Identifier                     (Const, Parm)
// class UObject*                 Value                          (Parm)
// int                            BodyCompositionIndex           (Parm)
// unsigned char                  Mode                           (Parm)

void APopulationOpportunity::PostInitBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex, unsigned char Mode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.PostInitBodyComposition");

	APopulationOpportunity_PostInitBodyComposition_Params params;
	params.Identifier = Identifier;
	params.Value = Value;
	params.BodyCompositionIndex = BodyCompositionIndex;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.PreRemoveBodyComposition
// (Native, Public)
// Parameters:
// struct FName                   Identifier                     (Const, Parm)
// class UObject*                 Value                          (Parm)
// int                            BodyCompositionIndex           (Parm)

void APopulationOpportunity::PreRemoveBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.PreRemoveBodyComposition");

	APopulationOpportunity_PreRemoveBodyComposition_Params params;
	params.Identifier = Identifier;
	params.Value = Value;
	params.BodyCompositionIndex = BodyCompositionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.GetNumSpawned
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunity::GetNumSpawned()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetNumSpawned");

	APopulationOpportunity_GetNumSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.GetNumAlive
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunity::GetNumAlive()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetNumAlive");

	APopulationOpportunity_GetNumAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.GetNumDied
// (Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunity::GetNumDied()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetNumDied");

	APopulationOpportunity_GetNumDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.Destroyed
// (Defined, Event, Public)

void APopulationOpportunity::Destroyed()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.Destroyed");

	APopulationOpportunity_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.GetRarity
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int APopulationOpportunity::GetRarity()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetRarity");

	APopulationOpportunity_GetRarity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.GetGameStage
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int APopulationOpportunity::GetGameStage()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetGameStage");

	APopulationOpportunity_GetGameStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.GetOpportunityGameStage
// (Native, Public, HasOutParms)
// Parameters:
// int                            GameStage                      (Parm, OutParm)
// int                            Rarity                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APopulationOpportunity::GetOpportunityGameStage(int* GameStage, int* Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetOpportunityGameStage");

	APopulationOpportunity_GetOpportunityGameStage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (GameStage != nullptr)
		*GameStage = params.GameStage;
	if (Rarity != nullptr)
		*Rarity = params.Rarity;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.TriggerKismetAllSpawnedEvent
// (Defined, Event, Public)

void APopulationOpportunity::TriggerKismetAllSpawnedEvent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.TriggerKismetAllSpawnedEvent");

	APopulationOpportunity_TriggerKismetAllSpawnedEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.ClearSequenceActionLink
// (Defined, Event, Public)

void APopulationOpportunity::ClearSequenceActionLink()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.ClearSequenceActionLink");

	APopulationOpportunity_ClearSequenceActionLink_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.SetSequenceActionLink
// (Defined, Event, Public)
// Parameters:
// class UGearboxSeqAct_PopulationOpportunityLink* Link                           (Parm)

void APopulationOpportunity::SetSequenceActionLink(class UGearboxSeqAct_PopulationOpportunityLink* Link)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.SetSequenceActionLink");

	APopulationOpportunity_SetSequenceActionLink_Params params;
	params.Link = Link;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.SetEnabledStatus
// (Native, Public)
// Parameters:
// bool                           bEnable                        (Parm)

void APopulationOpportunity::SetEnabledStatus(bool bEnable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.SetEnabledStatus");

	APopulationOpportunity_SetEnabledStatus_Params params;
	params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void APopulationOpportunity::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.OnToggle");

	APopulationOpportunity_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.GetNumLeftToSpawnAndStillAlive
// (Final, Native, Public, HasOutParms)
// Parameters:
// int                            NumLeftToSpawn                 (Parm, OutParm)
// int                            NumStillAlive                  (Parm, OutParm)

void APopulationOpportunity::GetNumLeftToSpawnAndStillAlive(int* NumLeftToSpawn, int* NumStillAlive)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetNumLeftToSpawnAndStillAlive");

	APopulationOpportunity_GetNumLeftToSpawnAndStillAlive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NumLeftToSpawn != nullptr)
		*NumLeftToSpawn = params.NumLeftToSpawn;
	if (NumStillAlive != nullptr)
		*NumStillAlive = params.NumStillAlive;
}


// Function GearboxFramework.PopulationOpportunity.GetNextSpawnTime
// (Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunity::GetNextSpawnTime()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.GetNextSpawnTime");

	APopulationOpportunity_GetNextSpawnTime_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunity.RespawnKilledActors
// (Native, Public)
// Parameters:
// float                          PercentageOfKilledActorsToRespawn (Parm)

void APopulationOpportunity::RespawnKilledActors(float PercentageOfKilledActorsToRespawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.RespawnKilledActors");

	APopulationOpportunity_RespawnKilledActors_Params params;
	params.PercentageOfKilledActorsToRespawn = PercentageOfKilledActorsToRespawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunity.DoSpawning
// (Native, Public)
// Parameters:
// class UPopulationMaster*       PopMaster                      (Parm)

void APopulationOpportunity::DoSpawning(class UPopulationMaster* PopMaster)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunity.DoSpawning");

	APopulationOpportunity_DoSpawning_Params params;
	params.PopMaster = PopMaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.GetActorSpawnedFromOpportunity
// (Native, HasOptionalParms, Public)
// Parameters:
// class APopulationOpportunity*  Opportunity                    (Parm)
// int                            ActorIndex                     (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UPopulationMaster::GetActorSpawnedFromOpportunity(class APopulationOpportunity* Opportunity, int ActorIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetActorSpawnedFromOpportunity");

	UPopulationMaster_GetActorSpawnedFromOpportunity_Params params;
	params.Opportunity = Opportunity;
	params.ActorIndex = ActorIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.GetSavedActorDebugInfoForOpportunity
// (Native, Public, HasOutParms)
// Parameters:
// int                            OpportunityIndex               (Parm)
// TArray<struct FString>         SavedActorsDebugInfo           (Parm, OutParm, NeedCtorLink)

void UPopulationMaster::GetSavedActorDebugInfoForOpportunity(int OpportunityIndex, TArray<struct FString>* SavedActorsDebugInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetSavedActorDebugInfoForOpportunity");

	UPopulationMaster_GetSavedActorDebugInfoForOpportunity_Params params;
	params.OpportunityIndex = OpportunityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SavedActorsDebugInfo != nullptr)
		*SavedActorsDebugInfo = params.SavedActorsDebugInfo;
}


// Function GearboxFramework.PopulationMaster.GetNumberOfSavedActorsForOpportunity
// (Native, Public)
// Parameters:
// int                            OpportunityIndex               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPopulationMaster::GetNumberOfSavedActorsForOpportunity(int OpportunityIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetNumberOfSavedActorsForOpportunity");

	UPopulationMaster_GetNumberOfSavedActorsForOpportunity_Params params;
	params.OpportunityIndex = OpportunityIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.WillActorsOpportunityBeResetOnLevelLoad
// (Native, Public)
// Parameters:
// class AActor*                  TestActor                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationMaster::WillActorsOpportunityBeResetOnLevelLoad(class AActor* TestActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.WillActorsOpportunityBeResetOnLevelLoad");

	UPopulationMaster_WillActorsOpportunityBeResetOnLevelLoad_Params params;
	params.TestActor = TestActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.ResetRespawn
// (Native, Public)

void UPopulationMaster::ResetRespawn()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.ResetRespawn");

	UPopulationMaster_ResetRespawn_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.GetStreamingLevelForActor
// (Native, Static, Public)
// Parameters:
// class AActor*                  OpportunityInLevel             (Parm)
// class ULevelStreaming*         ReturnValue                    (Parm, OutParm, ReturnParm)

class ULevelStreaming* UPopulationMaster::GetStreamingLevelForActor(class AActor* OpportunityInLevel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetStreamingLevelForActor");

	UPopulationMaster_GetStreamingLevelForActor_Params params;
	params.OpportunityInLevel = OpportunityInLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactories
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<class UPopulationFactory*> TheFactories                   (Parm, OutParm, NeedCtorLink)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationMaster::HasCapacityToSpawnFromFactories(int GameStage, int Rarity, TArray<class UPopulationFactory*>* TheFactories)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactories");

	UPopulationMaster_HasCapacityToSpawnFromFactories_Params params;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TheFactories != nullptr)
		*TheFactories = params.TheFactories;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactory
// (Final, Native, Public)
// Parameters:
// class UPopulationFactory*      TheFactory                     (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationMaster::HasCapacityToSpawnFromFactory(class UPopulationFactory* TheFactory, int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.HasCapacityToSpawnFromFactory");

	UPopulationMaster_HasCapacityToSpawnFromFactory_Params params;
	params.TheFactory = TheFactory;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.IsPopulationSystemAtCapacity
// (Final, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationMaster::IsPopulationSystemAtCapacity()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.IsPopulationSystemAtCapacity");

	UPopulationMaster_IsPopulationSystemAtCapacity_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.StatProfileStop
// (Native, Public)
// Parameters:
// int                            nStat                          (Parm)

void UPopulationMaster::StatProfileStop(int nStat)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.StatProfileStop");

	UPopulationMaster_StatProfileStop_Params params;
	params.nStat = nStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.StatProfileStart
// (Native, Public)
// Parameters:
// int                            nStat                          (Parm)

void UPopulationMaster::StatProfileStart(int nStat)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.StatProfileStart");

	UPopulationMaster_StatProfileStart_Params params;
	params.nStat = nStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.GetStatProfileTime
// (Native, Public)
// Parameters:
// int                            nStat                          (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UPopulationMaster::GetStatProfileTime(int nStat)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetStatProfileTime");

	UPopulationMaster_GetStatProfileTime_Params params;
	params.nStat = nStat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.AddSavedActor
// (Native, Public)
// Parameters:
// int                            OpportunityIdx                 (Parm)
// class AActor*                  TheActor                       (Parm)
// class UPopulationFactory*      SpawnFactory                   (Parm)
// int                            CreationFlags                  (Parm)

void UPopulationMaster::AddSavedActor(int OpportunityIdx, class AActor* TheActor, class UPopulationFactory* SpawnFactory, int CreationFlags)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.AddSavedActor");

	UPopulationMaster_AddSavedActor_Params params;
	params.OpportunityIdx = OpportunityIdx;
	params.TheActor = TheActor;
	params.SpawnFactory = SpawnFactory;
	params.CreationFlags = CreationFlags;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.DisconnectEncounter
// (Native, Public)
// Parameters:
// class APopulationEncounter*    Encounter                      (Parm)

void UPopulationMaster::DisconnectEncounter(class APopulationEncounter* Encounter)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.DisconnectEncounter");

	UPopulationMaster_DisconnectEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.ConnectEncounter
// (Native, Public)
// Parameters:
// class APopulationEncounter*    Encounter                      (Parm)

void UPopulationMaster::ConnectEncounter(class APopulationEncounter* Encounter)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.ConnectEncounter");

	UPopulationMaster_ConnectEncounter_Params params;
	params.Encounter = Encounter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.DisconnectOpportunity
// (Native, Public)
// Parameters:
// class APopulationOpportunity*  DeactivatedOpportunity         (Parm)
// bool                           bSaveState                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationMaster::DisconnectOpportunity(class APopulationOpportunity* DeactivatedOpportunity, bool bSaveState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.DisconnectOpportunity");

	UPopulationMaster_DisconnectOpportunity_Params params;
	params.DeactivatedOpportunity = DeactivatedOpportunity;
	params.bSaveState = bSaveState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.ConnectOpportunity
// (Native, Public)
// Parameters:
// class APopulationOpportunity*  ActivatedOpportunity           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPopulationMaster::ConnectOpportunity(class APopulationOpportunity* ActivatedOpportunity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.ConnectOpportunity");

	UPopulationMaster_ConnectOpportunity_Params params;
	params.ActivatedOpportunity = ActivatedOpportunity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.GetWorldInfo
// (Native, Public)
// Parameters:
// class AWorldInfo*              ReturnValue                    (Parm, OutParm, ReturnParm)

class AWorldInfo* UPopulationMaster::GetWorldInfo()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetWorldInfo");

	UPopulationMaster_GetWorldInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.DestroySpawnedActors
// (Native, HasOptionalParms, Public)
// Parameters:
// class APopulationOpportunity*  Opportunity                    (Parm)
// bool                           bDontSaveActors                (OptionalParm, Parm)

void UPopulationMaster::DestroySpawnedActors(class APopulationOpportunity* Opportunity, bool bDontSaveActors)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.DestroySpawnedActors");

	UPopulationMaster_DestroySpawnedActors_Params params;
	params.Opportunity = Opportunity;
	params.bDontSaveActors = bDontSaveActors;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.RemoveSpawnedActor
// (Native, HasOptionalParms, Public)
// Parameters:
// class AActor*                  TheActor                       (Parm)
// bool                           bKeepBody                      (Parm)
// bool                           bActorDied                     (OptionalParm, Parm)

void UPopulationMaster::RemoveSpawnedActor(class AActor* TheActor, bool bKeepBody, bool bActorDied)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.RemoveSpawnedActor");

	UPopulationMaster_RemoveSpawnedActor_Params params;
	params.TheActor = TheActor;
	params.bKeepBody = bKeepBody;
	params.bActorDied = bActorDied;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.SetSpawnedActorsReuse
// (Native, Public)
// Parameters:
// class AActor*                  TheActor                       (Parm)
// bool                           bReuse                         (Parm)

void UPopulationMaster::SetSpawnedActorsReuse(class AActor* TheActor, bool bReuse)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.SetSpawnedActorsReuse");

	UPopulationMaster_SetSpawnedActorsReuse_Params params;
	params.TheActor = TheActor;
	params.bReuse = bReuse;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.AddExternalActor
// (Native, Public)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm)
// class UClass*                  FactoryClass                   (Parm)

void UPopulationMaster::AddExternalActor(class AActor* SpawnedActor, class UClass* FactoryClass)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.AddExternalActor");

	UPopulationMaster_AddExternalActor_Params params;
	params.SpawnedActor = SpawnedActor;
	params.FactoryClass = FactoryClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationMaster.SpawnActorFromOpportunity
// (Native, HasOptionalParms, Public)
// Parameters:
// class UPopulationFactory*      TheFactory                     (Parm)
// class UObject*                 SpawnLocationContextObject     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// int                            OpportunityIdx                 (Parm)
// int                            PopOppFlags                    (Parm)
// bool                           bCanSave                       (OptionalParm, Parm)
// bool                           bForceSpawn                    (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UPopulationMaster::SpawnActorFromOpportunity(class UPopulationFactory* TheFactory, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity, int OpportunityIdx, int PopOppFlags, bool bCanSave, bool bForceSpawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.SpawnActorFromOpportunity");

	UPopulationMaster_SpawnActorFromOpportunity_Params params;
	params.TheFactory = TheFactory;
	params.SpawnLocationContextObject = SpawnLocationContextObject;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.GameStage = GameStage;
	params.Rarity = Rarity;
	params.OpportunityIdx = OpportunityIdx;
	params.PopOppFlags = PopOppFlags;
	params.bCanSave = bCanSave;
	params.bForceSpawn = bForceSpawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.SpawnActor
// (Native, Public)
// Parameters:
// class UPopulationFactory*      TheFactory                     (Parm)
// class UObject*                 SpawnLocationContextObject     (Parm)
// struct FVector                 SpawnLocation                  (Parm)
// struct FRotator                SpawnRotation                  (Parm)
// int                            GameStage                      (Parm)
// int                            Rarity                         (Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* UPopulationMaster::SpawnActor(class UPopulationFactory* TheFactory, class UObject* SpawnLocationContextObject, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, int GameStage, int Rarity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.SpawnActor");

	UPopulationMaster_SpawnActor_Params params;
	params.TheFactory = TheFactory;
	params.SpawnLocationContextObject = SpawnLocationContextObject;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.GameStage = GameStage;
	params.Rarity = Rarity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.GetPopulationOpportunityIndex
// (Native, Public)
// Parameters:
// class APopulationOpportunity*  Opportunity                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPopulationMaster::GetPopulationOpportunityIndex(class APopulationOpportunity* Opportunity)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetPopulationOpportunityIndex");

	UPopulationMaster_GetPopulationOpportunityIndex_Params params;
	params.Opportunity = Opportunity;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.GetActorsOpportunity
// (Native, Public)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm)
// class APopulationOpportunity*  ReturnValue                    (Parm, OutParm, ReturnParm)

class APopulationOpportunity* UPopulationMaster::GetActorsOpportunity(class AActor* SpawnedActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.GetActorsOpportunity");

	UPopulationMaster_GetActorsOpportunity_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMaster.SpawnPopulationControlledActor
// (Native, HasOptionalParms, Public)
// Parameters:
// class UClass*                  SpawnClass                     (Parm)
// class AActor*                  SpawnOwner                     (OptionalParm, Parm)
// struct FName                   SpawnTag                       (OptionalParm, Parm)
// struct FVector                 SpawnLocation                  (OptionalParm, Parm)
// struct FRotator                SpawnRotation                  (OptionalParm, Parm)
// class AActor*                  ActorTemplate                  (OptionalParm, Parm)
// bool                           bNoCollisionFail               (OptionalParm, Parm)
// bool                           bPersistAcrossLevelTransitions (OptionalParm, Parm)
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm, CoerceParm)

class AActor* UPopulationMaster::SpawnPopulationControlledActor(class UClass* SpawnClass, class AActor* SpawnOwner, const struct FName& SpawnTag, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class AActor* ActorTemplate, bool bNoCollisionFail, bool bPersistAcrossLevelTransitions)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMaster.SpawnPopulationControlledActor");

	UPopulationMaster_SpawnPopulationControlledActor_Params params;
	params.SpawnClass = SpawnClass;
	params.SpawnOwner = SpawnOwner;
	params.SpawnTag = SpawnTag;
	params.SpawnLocation = SpawnLocation;
	params.SpawnRotation = SpawnRotation;
	params.ActorTemplate = ActorTemplate;
	params.bNoCollisionFail = bNoCollisionFail;
	params.bPersistAcrossLevelTransitions = bPersistAcrossLevelTransitions;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityArea.ApplyPreviewBodyComposition
// (Native, Public)

void APopulationOpportunityArea::ApplyPreviewBodyComposition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityArea.ApplyPreviewBodyComposition");

	APopulationOpportunityArea_ApplyPreviewBodyComposition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityArea.GetBodyInfoProvider
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface APopulationOpportunityArea::GetBodyInfoProvider()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityArea.GetBodyInfoProvider");

	APopulationOpportunityArea_GetBodyInfoProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityArea.RespawnKilledActors
// (Native, Public)
// Parameters:
// float                          PercentageOfKilledActorsToRespawn (Parm)

void APopulationOpportunityArea::RespawnKilledActors(float PercentageOfKilledActorsToRespawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityArea.RespawnKilledActors");

	APopulationOpportunityArea_RespawnKilledActors_Params params;
	params.PercentageOfKilledActorsToRespawn = PercentageOfKilledActorsToRespawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityArea.DoSpawning
// (Native, Public)
// Parameters:
// class UPopulationMaster*       PopMaster                      (Parm)

void APopulationOpportunityArea::DoSpawning(class UPopulationMaster* PopMaster)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityArea.DoSpawning");

	APopulationOpportunityArea_DoSpawning_Params params;
	params.PopMaster = PopMaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCloner.ApplyPreviewBodyComposition
// (Native, Public)

void APopulationOpportunityCloner::ApplyPreviewBodyComposition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCloner.ApplyPreviewBodyComposition");

	APopulationOpportunityCloner_ApplyPreviewBodyComposition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCloner.GetBodyInfoProvider
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface APopulationOpportunityCloner::GetBodyInfoProvider()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCloner.GetBodyInfoProvider");

	APopulationOpportunityCloner_GetBodyInfoProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCloner.CloneTimer
// (Defined, Public)

void APopulationOpportunityCloner::CloneTimer()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCloner.CloneTimer");

	APopulationOpportunityCloner_CloneTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCloner.RespawnKilledActors
// (Native, Public)
// Parameters:
// float                          PercentageOfKilledActorsToRespawn (Parm)

void APopulationOpportunityCloner::RespawnKilledActors(float PercentageOfKilledActorsToRespawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCloner.RespawnKilledActors");

	APopulationOpportunityCloner_RespawnKilledActors_Params params;
	params.PercentageOfKilledActorsToRespawn = PercentageOfKilledActorsToRespawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCloner.DoSpawning
// (Native, Public)
// Parameters:
// class UPopulationMaster*       PopMaster                      (Parm)

void APopulationOpportunityCloner::DoSpawning(class UPopulationMaster* PopMaster)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCloner.DoSpawning");

	APopulationOpportunityCloner_DoSpawning_Params params;
	params.PopMaster = PopMaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCombat.ApplyPreviewBodyComposition
// (Native, Public)

void APopulationOpportunityCombat::ApplyPreviewBodyComposition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.ApplyPreviewBodyComposition");

	APopulationOpportunityCombat_ApplyPreviewBodyComposition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCombat.GetBodyInfoProvider
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface APopulationOpportunityCombat::GetBodyInfoProvider()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.GetBodyInfoProvider");

	APopulationOpportunityCombat_GetBodyInfoProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.TriggerKismetSingleDeathEvent
// (Defined, Event, Public)

void APopulationOpportunityCombat::TriggerKismetSingleDeathEvent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.TriggerKismetSingleDeathEvent");

	APopulationOpportunityCombat_TriggerKismetSingleDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCombat.TriggerKismetDeathEvent
// (Defined, Event, Public)

void APopulationOpportunityCombat::TriggerKismetDeathEvent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.TriggerKismetDeathEvent");

	APopulationOpportunityCombat_TriggerKismetDeathEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCombat.GetNumSpawned
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunityCombat::GetNumSpawned()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.GetNumSpawned");

	APopulationOpportunityCombat_GetNumSpawned_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.GetNumAlive
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunityCombat::GetNumAlive()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.GetNumAlive");

	APopulationOpportunityCombat_GetNumAlive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.GetNumDied
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunityCombat::GetNumDied()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.GetNumDied");

	APopulationOpportunityCombat_GetNumDied_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.WantsToStopListening
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APopulationOpportunityCombat::WantsToStopListening()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.WantsToStopListening");

	APopulationOpportunityCombat_WantsToStopListening_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.GetActor
// (Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* APopulationOpportunityCombat::GetActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.GetActor");

	APopulationOpportunityCombat_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.GetListenerLocation
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector APopulationOpportunityCombat::GetListenerLocation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.GetListenerLocation");

	APopulationOpportunityCombat_GetListenerLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.GetAllegiance
// (Native, Public)
// Parameters:
// class UPawnAllegiance*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UPawnAllegiance* APopulationOpportunityCombat::GetAllegiance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.GetAllegiance");

	APopulationOpportunityCombat_GetAllegiance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.ReceiveMessage
// (Native, Public)
// Parameters:
// class UGbxMessage*             Message                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APopulationOpportunityCombat::ReceiveMessage(class UGbxMessage* Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.ReceiveMessage");

	APopulationOpportunityCombat_ReceiveMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.CaresAboutMessage
// (Native, Public)
// Parameters:
// class UGbxMessage*             Message                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APopulationOpportunityCombat::CaresAboutMessage(class UGbxMessage* Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.CaresAboutMessage");

	APopulationOpportunityCombat_CaresAboutMessage_Params params;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityCombat.PostBeginPlay
// (Defined, Simulated, Public)

void APopulationOpportunityCombat::PostBeginPlay()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.PostBeginPlay");

	APopulationOpportunityCombat_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCombat.EnableDebugging
// (Native, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void APopulationOpportunityCombat::EnableDebugging(bool bEnabled)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.EnableDebugging");

	APopulationOpportunityCombat_EnableDebugging_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCombat.RespawnKilledActors
// (Native, Public)
// Parameters:
// float                          PercentageOfKilledActorsToRespawn (Parm)

void APopulationOpportunityCombat::RespawnKilledActors(float PercentageOfKilledActorsToRespawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.RespawnKilledActors");

	APopulationOpportunityCombat_RespawnKilledActors_Params params;
	params.PercentageOfKilledActorsToRespawn = PercentageOfKilledActorsToRespawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityCombat.DoSpawning
// (Native, Public)
// Parameters:
// class UPopulationMaster*       PopMaster                      (Parm)

void APopulationOpportunityCombat::DoSpawning(class UPopulationMaster* PopMaster)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityCombat.DoSpawning");

	APopulationOpportunityCombat_DoSpawning_Params params;
	params.PopMaster = PopMaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityPoint.ClearBodyCompositionInstance
// (Native, Public)

void APopulationOpportunityPoint::ClearBodyCompositionInstance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.ClearBodyCompositionInstance");

	APopulationOpportunityPoint_ClearBodyCompositionInstance_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityPoint.ApplyPreviewBodyComposition
// (Native, Public)

void APopulationOpportunityPoint::ApplyPreviewBodyComposition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.ApplyPreviewBodyComposition");

	APopulationOpportunityPoint_ApplyPreviewBodyComposition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityPoint.GetBodyInfoProvider
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface APopulationOpportunityPoint::GetBodyInfoProvider()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.GetBodyInfoProvider");

	APopulationOpportunityPoint_GetBodyInfoProvider_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityPoint.ChangeInstanceDataSwitch
// (Native, Public)
// Parameters:
// struct FName                   SwitchName                     (Const, Parm)
// unsigned char                  NewValue                       (Parm)

void APopulationOpportunityPoint::ChangeInstanceDataSwitch(const struct FName& SwitchName, unsigned char NewValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.ChangeInstanceDataSwitch");

	APopulationOpportunityPoint_ChangeInstanceDataSwitch_Params params;
	params.SwitchName = SwitchName;
	params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityPoint.PostInitBodyComposition
// (Native, Public)
// Parameters:
// struct FName                   Identifier                     (Const, Parm)
// class UObject*                 Value                          (Parm)
// int                            BodyCompositionIndex           (Parm)
// unsigned char                  Mode                           (Parm)

void APopulationOpportunityPoint::PostInitBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex, unsigned char Mode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.PostInitBodyComposition");

	APopulationOpportunityPoint_PostInitBodyComposition_Params params;
	params.Identifier = Identifier;
	params.Value = Value;
	params.BodyCompositionIndex = BodyCompositionIndex;
	params.Mode = Mode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityPoint.PreRemoveBodyComposition
// (Native, Public)
// Parameters:
// struct FName                   Identifier                     (Const, Parm)
// class UObject*                 Value                          (Parm)
// int                            BodyCompositionIndex           (Parm)

void APopulationOpportunityPoint::PreRemoveBodyComposition(const struct FName& Identifier, class UObject* Value, int BodyCompositionIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.PreRemoveBodyComposition");

	APopulationOpportunityPoint_PreRemoveBodyComposition_Params params;
	params.Identifier = Identifier;
	params.Value = Value;
	params.BodyCompositionIndex = BodyCompositionIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityPoint.GetInitialMovementHoldTime
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationOpportunityPoint::GetInitialMovementHoldTime()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.GetInitialMovementHoldTime");

	APopulationOpportunityPoint_GetInitialMovementHoldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityPoint.GetInitialDestination
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* APopulationOpportunityPoint::GetInitialDestination()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.GetInitialDestination");

	APopulationOpportunityPoint_GetInitialDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityPoint.GetInitialActionType
// (Defined, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char APopulationOpportunityPoint::GetInitialActionType()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.GetInitialActionType");

	APopulationOpportunityPoint_GetInitialActionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityPoint.GetSpawnStyleType
// (Defined, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char APopulationOpportunityPoint::GetSpawnStyleType()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.GetSpawnStyleType");

	APopulationOpportunityPoint_GetSpawnStyleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationOpportunityPoint.RespawnKilledActors
// (Native, Public)
// Parameters:
// float                          PercentageOfKilledActorsToRespawn (Parm)

void APopulationOpportunityPoint::RespawnKilledActors(float PercentageOfKilledActorsToRespawn)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.RespawnKilledActors");

	APopulationOpportunityPoint_RespawnKilledActors_Params params;
	params.PercentageOfKilledActorsToRespawn = PercentageOfKilledActorsToRespawn;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationOpportunityPoint.DoSpawning
// (Native, Public)
// Parameters:
// class UPopulationMaster*       PopMaster                      (Parm)

void APopulationOpportunityPoint::DoSpawning(class UPopulationMaster* PopMaster)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationOpportunityPoint.DoSpawning");

	APopulationOpportunityPoint_DoSpawning_Params params;
	params.PopMaster = PopMaster;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationPoint.CanSpawnFromFactory
// (Native, Public)
// Parameters:
// class UPopulationFactory*      Factory                        (Parm)
// int                            GameStage                      (Parm)
// int                            AwesomeLevel                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool APopulationPoint::CanSpawnFromFactory(class UPopulationFactory* Factory, int GameStage, int AwesomeLevel)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.CanSpawnFromFactory");

	APopulationPoint_CanSpawnFromFactory_Params params;
	params.Factory = Factory;
	params.GameStage = GameStage;
	params.AwesomeLevel = AwesomeLevel;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationPoint.GetSpawnRotation
// (Native, Public)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm)

struct FRotator APopulationPoint::GetSpawnRotation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.GetSpawnRotation");

	APopulationPoint_GetSpawnRotation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationPoint.GetSpawnLocation
// (Native, Public)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector APopulationPoint::GetSpawnLocation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.GetSpawnLocation");

	APopulationPoint_GetSpawnLocation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationPoint.ActorSpawned
// (Native, Public)
// Parameters:
// class AActor*                  SpawnedActor                   (Parm)

void APopulationPoint::ActorSpawned(class AActor* SpawnedActor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.ActorSpawned");

	APopulationPoint_ActorSpawned_Params params;
	params.SpawnedActor = SpawnedActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationPoint.GetInitialMovementHoldTime
// (Defined, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float APopulationPoint::GetInitialMovementHoldTime()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.GetInitialMovementHoldTime");

	APopulationPoint_GetInitialMovementHoldTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationPoint.GetInitialDestination
// (Defined, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* APopulationPoint::GetInitialDestination()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.GetInitialDestination");

	APopulationPoint_GetInitialDestination_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationPoint.RandomizeInitialDestinations
// (Defined, Public)

void APopulationPoint::RandomizeInitialDestinations()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.RandomizeInitialDestinations");

	APopulationPoint_RandomizeInitialDestinations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.PopulationPoint.GetInitialActionType
// (Defined, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char APopulationPoint::GetInitialActionType()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.GetInitialActionType");

	APopulationPoint_GetInitialActionType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationPoint.GetSpawnStyleType
// (Defined, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char APopulationPoint::GetSpawnStyleType()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.GetSpawnStyleType");

	APopulationPoint_GetSpawnStyleType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationPoint.OnToggle
// (Defined, Simulated, Public)
// Parameters:
// class USeqAct_Toggle*          Action                         (Parm)

void APopulationPoint::OnToggle(class USeqAct_Toggle* Action)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationPoint.OnToggle");

	APopulationPoint_OnToggle_Params params;
	params.Action = Action;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SeqEvent_EncounterWaveComplete.NotifyWaveComplete
// (Native, Public)
// Parameters:
// int                            nWave                          (Parm)

void USeqEvent_EncounterWaveComplete::NotifyWaveComplete(int nWave)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SeqEvent_EncounterWaveComplete.NotifyWaveComplete");

	USeqEvent_EncounterWaveComplete_NotifyWaveComplete_Params params;
	params.nWave = nWave;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SeqEvent_PopulatedActor.NotifyPopulatedActor
// (Defined, Event, Public)
// Parameters:
// class AActor*                  PopulatedActor                 (Parm)
// class APopulationOpportunity*  InDestPopulationOpportunity    (Parm)
// class AActor*                  InSpawnPoint                   (Parm)
// class AWorldInfo*              InOriginator                   (Parm)

void USeqEvent_PopulatedActor::NotifyPopulatedActor(class AActor* PopulatedActor, class APopulationOpportunity* InDestPopulationOpportunity, class AActor* InSpawnPoint, class AWorldInfo* InOriginator)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SeqEvent_PopulatedActor.NotifyPopulatedActor");

	USeqEvent_PopulatedActor_NotifyPopulatedActor_Params params;
	params.PopulatedActor = PopulatedActor;
	params.InDestPopulationOpportunity = InDestPopulationOpportunity;
	params.InSpawnPoint = InSpawnPoint;
	params.InOriginator = InOriginator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SeqEvent_PopulatedPoint.NotifyPopulatedActor
// (Defined, Event, Public)
// Parameters:
// class AActor*                  PopulatedActor                 (Parm)
// class APopulationOpportunity*  InDestPopulationOpportunity    (Parm)
// class AActor*                  InSpawnPoint                   (Parm)
// class AWorldInfo*              InOriginator                   (Parm)

void USeqEvent_PopulatedPoint::NotifyPopulatedActor(class AActor* PopulatedActor, class APopulationOpportunity* InDestPopulationOpportunity, class AActor* InSpawnPoint, class AWorldInfo* InOriginator)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SeqEvent_PopulatedPoint.NotifyPopulatedActor");

	USeqEvent_PopulatedPoint_NotifyPopulatedActor_Params params;
	params.PopulatedActor = PopulatedActor;
	params.InDestPopulationOpportunity = InDestPopulationOpportunity;
	params.InSpawnPoint = InSpawnPoint;
	params.InOriginator = InOriginator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDefinition.OnReset
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UAIDefinition::OnReset(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnReset");

	UAIDefinition_OnReset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnHitByVehicle
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class AVehicle*                Vehicle                        (Parm)

void UAIDefinition::OnHitByVehicle(class AVehicle* Vehicle, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnHitByVehicle");

	UAIDefinition_OnHitByVehicle_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnRanOver
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class AVehicle*                Vehicle                        (Parm)

void UAIDefinition::OnRanOver(class AVehicle* Vehicle, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnRanOver");

	UAIDefinition_OnRanOver_Params params;
	params.Vehicle = Vehicle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnTimerEvent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// struct FName                   SpecializedEventName           (Parm)

void UAIDefinition::OnTimerEvent(const struct FName& SpecializedEventName, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnTimerEvent");

	UAIDefinition_OnTimerEvent_Params params;
	params.SpecializedEventName = SpecializedEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnKilledPawn
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UObject*                 Killed                         (Parm)

void UAIDefinition::OnKilledPawn(class UObject* Killed, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnKilledPawn");

	UAIDefinition_OnKilledPawn_Params params;
	params.Killed = Killed;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnLanded
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UAIDefinition::OnLanded(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnLanded");

	UAIDefinition_OnLanded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnStopFiringWeapon
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UAIDefinition::OnStopFiringWeapon(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnStopFiringWeapon");

	UAIDefinition_OnStopFiringWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnStartFiringWeapon
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UAIDefinition::OnStartFiringWeapon(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnStartFiringWeapon");

	UAIDefinition_OnStartFiringWeapon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnTargetLost
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UObject*                 OldTarget                      (Parm)

void UAIDefinition::OnTargetLost(class UObject* OldTarget, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnTargetLost");

	UAIDefinition_OnTargetLost_Params params;
	params.OldTarget = OldTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnTargetChanged
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UObject*                 OldTarget                      (Parm)
// class UObject*                 NewTarget                      (Parm)

void UAIDefinition::OnTargetChanged(class UObject* OldTarget, class UObject* NewTarget, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnTargetChanged");

	UAIDefinition_OnTargetChanged_Params params;
	params.OldTarget = OldTarget;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnTargetAcquired
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UObject*                 NewTarget                      (Parm)

void UAIDefinition::OnTargetAcquired(class UObject* NewTarget, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnTargetAcquired");

	UAIDefinition_OnTargetAcquired_Params params;
	params.NewTarget = NewTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnSpawned
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UAIDefinition::OnSpawned(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnSpawned");

	UAIDefinition_OnSpawned_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnTakeHeal
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UObject*                 Instigator                     (Parm)
// float                          Damage                         (Parm)
// float                          ShieldDamage                   (Parm)
// class UObject*                 DamageSource                   (Parm)
// class UObject*                 DamageType                     (Parm)

void UAIDefinition::OnTakeHeal(class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnTakeHeal");

	UAIDefinition_OnTakeHeal_Params params;
	params.Instigator = Instigator;
	params.Damage = Damage;
	params.ShieldDamage = ShieldDamage;
	params.DamageSource = DamageSource;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnVehicleTakeDamage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UObject*                 Instigator                     (Parm)
// class UObject*                 HitVehicle                     (Parm)
// float                          Damage                         (Parm)
// float                          ShieldDamage                   (Parm)
// class UObject*                 DamageSource                   (Parm)
// class UObject*                 DamageType                     (Parm)

void UAIDefinition::OnVehicleTakeDamage(class UObject* Instigator, class UObject* HitVehicle, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnVehicleTakeDamage");

	UAIDefinition_OnVehicleTakeDamage_Params params;
	params.Instigator = Instigator;
	params.HitVehicle = HitVehicle;
	params.Damage = Damage;
	params.ShieldDamage = ShieldDamage;
	params.DamageSource = DamageSource;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnTakeDamage
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UObject*                 Instigator                     (Parm)
// float                          Damage                         (Parm)
// float                          ShieldDamage                   (Parm)
// class UObject*                 DamageSource                   (Parm)
// class UObject*                 DamageType                     (Parm)

void UAIDefinition::OnTakeDamage(class UObject* Instigator, float Damage, float ShieldDamage, class UObject* DamageSource, class UObject* DamageType, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnTakeDamage");

	UAIDefinition_OnTakeDamage_Params params;
	params.Instigator = Instigator;
	params.Damage = Damage;
	params.ShieldDamage = ShieldDamage;
	params.DamageSource = DamageSource;
	params.DamageType = DamageType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnUserCouldNotAffordSecondary
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// unsigned char                  EventOutput                    (Parm)
// class UObject*                 Instigator                     (Parm)
// class UObject*                 UsedComponent                  (Parm)

void UAIDefinition::OnUserCouldNotAffordSecondary(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnUserCouldNotAffordSecondary");

	UAIDefinition_OnUserCouldNotAffordSecondary_Params params;
	params.EventOutput = EventOutput;
	params.Instigator = Instigator;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnUserCouldNotAfford
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// unsigned char                  EventOutput                    (Parm)
// class UObject*                 Instigator                     (Parm)
// class UObject*                 UsedComponent                  (Parm)

void UAIDefinition::OnUserCouldNotAfford(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnUserCouldNotAfford");

	UAIDefinition_OnUserCouldNotAfford_Params params;
	params.EventOutput = EventOutput;
	params.Instigator = Instigator;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnSecondaryUsed
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// unsigned char                  EventOutput                    (Parm)
// class UObject*                 Instigator                     (Parm)
// class UObject*                 UsedComponent                  (Parm)

void UAIDefinition::OnSecondaryUsed(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnSecondaryUsed");

	UAIDefinition_OnSecondaryUsed_Params params;
	params.EventOutput = EventOutput;
	params.Instigator = Instigator;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.OnUsed
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// unsigned char                  EventOutput                    (Parm)
// class UObject*                 Instigator                     (Parm)
// class UObject*                 UsedComponent                  (Parm)

void UAIDefinition::OnUsed(unsigned char EventOutput, class UObject* Instigator, class UObject* UsedComponent, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.OnUsed");

	UAIDefinition_OnUsed_Params params;
	params.EventOutput = EventOutput;
	params.Instigator = Instigator;
	params.UsedComponent = UsedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.AIDefinition.SetBehaviorProviderDefinition
// (Native, Public)
// Parameters:
// class UBehaviorProviderDefinition* NewBehaviorProviderDefinition  (Parm)

void UAIDefinition::SetBehaviorProviderDefinition(class UBehaviorProviderDefinition* NewBehaviorProviderDefinition)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.SetBehaviorProviderDefinition");

	UAIDefinition_SetBehaviorProviderDefinition_Params params;
	params.NewBehaviorProviderDefinition = NewBehaviorProviderDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.AIDefinition.GetBehaviorProviderDefinition
// (Native, Public)
// Parameters:
// class UBehaviorProviderDefinition* ReturnValue                    (Parm, OutParm, ReturnParm)

class UBehaviorProviderDefinition* UAIDefinition::GetBehaviorProviderDefinition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIDefinition.GetBehaviorProviderDefinition");

	UAIDefinition_GetBehaviorProviderDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorProviderDefinition.SetObjectBehaviorVariable
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorVariableValue  BehaviorVariable               (Parm, OutParm)
// class UObject*                 Value                          (Parm)

void UBehaviorProviderDefinition::SetObjectBehaviorVariable(class UObject* Value, struct FBehaviorVariableValue* BehaviorVariable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorProviderDefinition.SetObjectBehaviorVariable");

	UBehaviorProviderDefinition_SetObjectBehaviorVariable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehaviorVariable != nullptr)
		*BehaviorVariable = params.BehaviorVariable;
}


// Function GearboxFramework.BehaviorProviderDefinition.SetVectorBehaviorVariable
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorVariableValue  BehaviorVariable               (Parm, OutParm)
// struct FVector                 Value                          (Const, Parm, OutParm)

void UBehaviorProviderDefinition::SetVectorBehaviorVariable(struct FBehaviorVariableValue* BehaviorVariable, struct FVector* Value)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorProviderDefinition.SetVectorBehaviorVariable");

	UBehaviorProviderDefinition_SetVectorBehaviorVariable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehaviorVariable != nullptr)
		*BehaviorVariable = params.BehaviorVariable;
	if (Value != nullptr)
		*Value = params.Value;
}


// Function GearboxFramework.BehaviorProviderDefinition.SetFloatBehaviorVariable
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorVariableValue  BehaviorVariable               (Parm, OutParm)
// float                          Value                          (Parm)

void UBehaviorProviderDefinition::SetFloatBehaviorVariable(float Value, struct FBehaviorVariableValue* BehaviorVariable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorProviderDefinition.SetFloatBehaviorVariable");

	UBehaviorProviderDefinition_SetFloatBehaviorVariable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehaviorVariable != nullptr)
		*BehaviorVariable = params.BehaviorVariable;
}


// Function GearboxFramework.BehaviorProviderDefinition.SetIntBehaviorVariable
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorVariableValue  BehaviorVariable               (Parm, OutParm)
// int                            Value                          (Parm)

void UBehaviorProviderDefinition::SetIntBehaviorVariable(int Value, struct FBehaviorVariableValue* BehaviorVariable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorProviderDefinition.SetIntBehaviorVariable");

	UBehaviorProviderDefinition_SetIntBehaviorVariable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehaviorVariable != nullptr)
		*BehaviorVariable = params.BehaviorVariable;
}


// Function GearboxFramework.BehaviorProviderDefinition.SetBoolBehaviorVariable
// (Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorVariableValue  BehaviorVariable               (Parm, OutParm)
// bool                           Value                          (Parm)

void UBehaviorProviderDefinition::SetBoolBehaviorVariable(bool Value, struct FBehaviorVariableValue* BehaviorVariable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorProviderDefinition.SetBoolBehaviorVariable");

	UBehaviorProviderDefinition_SetBoolBehaviorVariable_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BehaviorVariable != nullptr)
		*BehaviorVariable = params.BehaviorVariable;
}


// Function GearboxFramework.BehaviorKernel.RecentlyRunBehaviorsForSequence
// (Final, Iterator, Native, Private, HasOutParms)
// Parameters:
// int                            PID                            (Parm)
// int                            ProvidersIndex                 (Parm)
// int                            SequencesIndex                 (Parm)
// struct FBehaviorExecutionRecord ExecutionRecord                (Parm, OutParm)

void UBehaviorKernel::RecentlyRunBehaviorsForSequence(int PID, int ProvidersIndex, int SequencesIndex, struct FBehaviorExecutionRecord* ExecutionRecord)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.RecentlyRunBehaviorsForSequence");

	UBehaviorKernel_RecentlyRunBehaviorsForSequence_Params params;
	params.PID = PID;
	params.ProvidersIndex = ProvidersIndex;
	params.SequencesIndex = SequencesIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ExecutionRecord != nullptr)
		*ExecutionRecord = params.ExecutionRecord;
}


// Function GearboxFramework.BehaviorKernel.AllEventStateForSequence
// (Final, Iterator, Native, Private, HasOutParms)
// Parameters:
// int                            PID                            (Parm)
// int                            ProvidersIndex                 (Parm)
// int                            SequencesDataIndex             (Parm)
// struct FBehaviorEventState     EventState                     (Parm, OutParm)

void UBehaviorKernel::AllEventStateForSequence(int PID, int ProvidersIndex, int SequencesDataIndex, struct FBehaviorEventState* EventState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.AllEventStateForSequence");

	UBehaviorKernel_AllEventStateForSequence_Params params;
	params.PID = PID;
	params.ProvidersIndex = ProvidersIndex;
	params.SequencesDataIndex = SequencesDataIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventState != nullptr)
		*EventState = params.EventState;
}


// Function GearboxFramework.BehaviorKernel.AllWaitingThreadsForSequence
// (Final, Iterator, Native, Private, HasOutParms)
// Parameters:
// int                            PID                            (Parm)
// int                            ProvidersIndex                 (Parm)
// int                            SequencesDataIndex             (Parm)
// struct FBehaviorThread         Thread                         (Parm, OutParm)

void UBehaviorKernel::AllWaitingThreadsForSequence(int PID, int ProvidersIndex, int SequencesDataIndex, struct FBehaviorThread* Thread)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.AllWaitingThreadsForSequence");

	UBehaviorKernel_AllWaitingThreadsForSequence_Params params;
	params.PID = PID;
	params.ProvidersIndex = ProvidersIndex;
	params.SequencesDataIndex = SequencesDataIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Thread != nullptr)
		*Thread = params.Thread;
}


// Function GearboxFramework.BehaviorKernel.AllSequencesForProvider
// (Final, Iterator, Native, Private, HasOutParms)
// Parameters:
// int                            PID                            (Parm)
// int                            ProvidersIndex                 (Parm)
// struct FBehaviorSequenceState  SequenceState                  (Parm, OutParm)

void UBehaviorKernel::AllSequencesForProvider(int PID, int ProvidersIndex, struct FBehaviorSequenceState* SequenceState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.AllSequencesForProvider");

	UBehaviorKernel_AllSequencesForProvider_Params params;
	params.PID = PID;
	params.ProvidersIndex = ProvidersIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SequenceState != nullptr)
		*SequenceState = params.SequenceState;
}


// Function GearboxFramework.BehaviorKernel.AllProvidersForProcess
// (Final, Iterator, Native, HasOptionalParms, Private, HasOutParms)
// Parameters:
// int                            PID                            (Parm)
// class UBehaviorProviderDefinition* ProviderDefinition             (Parm, OutParm)
// int                            ProvidersIndex                 (OptionalParm, Parm, OutParm)

void UBehaviorKernel::AllProvidersForProcess(int PID, class UBehaviorProviderDefinition** ProviderDefinition, int* ProvidersIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.AllProvidersForProcess");

	UBehaviorKernel_AllProvidersForProcess_Params params;
	params.PID = PID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProviderDefinition != nullptr)
		*ProviderDefinition = params.ProviderDefinition;
	if (ProvidersIndex != nullptr)
		*ProvidersIndex = params.ProvidersIndex;
}


// Function GearboxFramework.BehaviorKernel.AllProcesses
// (Final, Iterator, Native, Private, HasOutParms)
// Parameters:
// struct FBehaviorProcess        Process                        (Parm, OutParm)

void UBehaviorKernel::AllProcesses(struct FBehaviorProcess* Process)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.AllProcesses");

	UBehaviorKernel_AllProcesses_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Process != nullptr)
		*Process = params.Process;
}


// Function GearboxFramework.BehaviorKernel.GetVariableStateSummaryForSequence
// (Final, Native, Private, HasOutParms)
// Parameters:
// int                            PID                            (Parm)
// int                            SequencesDataIndex             (Parm)
// TArray<struct FString>         DebugInfo                      (Parm, OutParm, NeedCtorLink)

void UBehaviorKernel::GetVariableStateSummaryForSequence(int PID, int SequencesDataIndex, TArray<struct FString>* DebugInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.GetVariableStateSummaryForSequence");

	UBehaviorKernel_GetVariableStateSummaryForSequence_Params params;
	params.PID = PID;
	params.SequencesDataIndex = SequencesDataIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugInfo != nullptr)
		*DebugInfo = params.DebugInfo;
}


// Function GearboxFramework.BehaviorKernel.GetChunkedListSummaries
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FString>         DebugInfo                      (Parm, OutParm, NeedCtorLink)

void UBehaviorKernel::GetChunkedListSummaries(TArray<struct FString>* DebugInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.GetChunkedListSummaries");

	UBehaviorKernel_GetChunkedListSummaries_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DebugInfo != nullptr)
		*DebugInfo = params.DebugInfo;
}


// Function GearboxFramework.BehaviorKernel.GetBehaviorKernelStats
// (Final, Native, Private)
// Parameters:
// struct FBehaviorKernelStats    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBehaviorKernelStats UBehaviorKernel::GetBehaviorKernelStats()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.GetBehaviorKernelStats");

	UBehaviorKernel_GetBehaviorKernelStats_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorKernel.IsBehaviorKernelWatchingConsumer
// (Final, Native, Static, Public)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBehaviorKernel::IsBehaviorKernelWatchingConsumer(const struct FBehaviorConsumerHandle& ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.IsBehaviorKernelWatchingConsumer");

	UBehaviorKernel_IsBehaviorKernelWatchingConsumer_Params params;
	params.ConsumerHandle = ConsumerHandle;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorKernel.IsBehaviorSequenceEnabled
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UBehaviorProviderDefinition* ProviderDefinition             (Parm)
// struct FName                   BehaviorSequenceName           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBehaviorKernel::IsBehaviorSequenceEnabled(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& BehaviorSequenceName, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.IsBehaviorSequenceEnabled");

	UBehaviorKernel_IsBehaviorSequenceEnabled_Params params;
	params.ProviderDefinition = ProviderDefinition;
	params.BehaviorSequenceName = BehaviorSequenceName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorKernel.ActivateBehaviorOutputLink
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Const, Parm, OutParm)
// int                            OutputLinkId                   (Parm)

void UBehaviorKernel::ActivateBehaviorOutputLink(int OutputLinkId, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.ActivateBehaviorOutputLink");

	UBehaviorKernel_ActivateBehaviorOutputLink_Params params;
	params.OutputLinkId = OutputLinkId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.BehaviorKernel.PublishBoolOutputVariable
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Const, Parm, OutParm)
// bool                           Output                         (Parm)

void UBehaviorKernel::PublishBoolOutputVariable(bool Output, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.PublishBoolOutputVariable");

	UBehaviorKernel_PublishBoolOutputVariable_Params params;
	params.Output = Output;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.BehaviorKernel.PublishObjectOutputVariable
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Const, Parm, OutParm)
// class UObject*                 Output                         (Parm)

void UBehaviorKernel::PublishObjectOutputVariable(class UObject* Output, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.PublishObjectOutputVariable");

	UBehaviorKernel_PublishObjectOutputVariable_Params params;
	params.Output = Output;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.BehaviorKernel.PublishVectorOutputVariable
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Const, Parm, OutParm)
// struct FVector                 Output                         (Const, Parm, OutParm)

void UBehaviorKernel::PublishVectorOutputVariable(struct FBehaviorKernelInfo* KernelInfo, struct FVector* Output)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.PublishVectorOutputVariable");

	UBehaviorKernel_PublishVectorOutputVariable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
	if (Output != nullptr)
		*Output = params.Output;
}


// Function GearboxFramework.BehaviorKernel.PublishFloatOutputVariable
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Const, Parm, OutParm)
// float                          Output                         (Parm)

void UBehaviorKernel::PublishFloatOutputVariable(float Output, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.PublishFloatOutputVariable");

	UBehaviorKernel_PublishFloatOutputVariable_Params params;
	params.Output = Output;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.BehaviorKernel.PublishIntOutputVariable
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Const, Parm, OutParm)
// int                            Output                         (Parm)

void UBehaviorKernel::PublishIntOutputVariable(int Output, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.PublishIntOutputVariable");

	UBehaviorKernel_PublishIntOutputVariable_Params params;
	params.Output = Output;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.BehaviorKernel.BeginNondeterministicProviderRegistration
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UBehaviorKernel::BeginNondeterministicProviderRegistration(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.BeginNondeterministicProviderRegistration");

	UBehaviorKernel_BeginNondeterministicProviderRegistration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorEvent
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// struct FReplicatedBehaviorEvent EventData                      (Const, Parm, OutParm)

void UBehaviorKernel::ProcessReplicatedBehaviorEvent(struct FBehaviorConsumerHandle* ConsumerHandle, struct FReplicatedBehaviorEvent* EventData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorEvent");

	UBehaviorKernel_ProcessReplicatedBehaviorEvent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
	if (EventData != nullptr)
		*EventData = params.EventData;
}


// Function GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorConsumerState
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// struct FReplicatedBehaviorConsumerState ReplicatedConsumerState        (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UBehaviorKernel::ProcessReplicatedBehaviorConsumerState(struct FBehaviorConsumerHandle* ConsumerHandle, struct FReplicatedBehaviorConsumerState* ReplicatedConsumerState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.ProcessReplicatedBehaviorConsumerState");

	UBehaviorKernel_ProcessReplicatedBehaviorConsumerState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
	if (ReplicatedConsumerState != nullptr)
		*ReplicatedConsumerState = params.ReplicatedConsumerState;

	return params.ReturnValue;
}


// Function GearboxFramework.BehaviorKernel.ChangeBehaviorSequenceActivationStatus
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UBehaviorProviderDefinition* ProviderDefinition             (Parm)
// struct FName                   SequenceName                   (Parm)
// unsigned char                  ActivationStatusChanage        (Parm)

void UBehaviorKernel::ChangeBehaviorSequenceActivationStatus(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& SequenceName, unsigned char ActivationStatusChanage, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.ChangeBehaviorSequenceActivationStatus");

	UBehaviorKernel_ChangeBehaviorSequenceActivationStatus_Params params;
	params.ProviderDefinition = ProviderDefinition;
	params.SequenceName = SequenceName;
	params.ActivationStatusChanage = ActivationStatusChanage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.BehaviorKernel.ChangeBehaviorConsumerSuspensionStatus
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// unsigned char                  SuspensionStatusChanage        (Parm)

void UBehaviorKernel::ChangeBehaviorConsumerSuspensionStatus(unsigned char SuspensionStatusChanage, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.ChangeBehaviorConsumerSuspensionStatus");

	UBehaviorKernel_ChangeBehaviorConsumerSuspensionStatus_Params params;
	params.SuspensionStatusChanage = SuspensionStatusChanage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.BehaviorKernel.BroadcastBehaviorEventFromScript
// (Final, Native, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// struct FName                   EventName                      (Parm)
// TArray<class UBehaviorProviderDefinition*> ProvidersToBroadcast           (Const, OptionalParm, Parm, OutParm, NeedCtorLink)
// int                            EventOutputToActivate          (OptionalParm, Parm)
// TArray<struct FBehaviorVariableValue> Parameters                     (Const, OptionalParm, Parm, OutParm, NeedCtorLink)

void UBehaviorKernel::BroadcastBehaviorEventFromScript(const struct FName& EventName, int EventOutputToActivate, struct FBehaviorConsumerHandle* ConsumerHandle, TArray<class UBehaviorProviderDefinition*>* ProvidersToBroadcast, TArray<struct FBehaviorVariableValue>* Parameters)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.BroadcastBehaviorEventFromScript");

	UBehaviorKernel_BroadcastBehaviorEventFromScript_Params params;
	params.EventName = EventName;
	params.EventOutputToActivate = EventOutputToActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
	if (ProvidersToBroadcast != nullptr)
		*ProvidersToBroadcast = params.ProvidersToBroadcast;
	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function GearboxFramework.BehaviorKernel.ActivateBehaviorEventFromScript
// (Final, Native, Static, HasOptionalParms, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UBehaviorProviderDefinition* ProviderDefinition             (Parm)
// struct FName                   EventName                      (Parm)
// int                            EventOutputToActivate          (OptionalParm, Parm)
// TArray<struct FBehaviorVariableValue> Parameters                     (Const, OptionalParm, Parm, OutParm, NeedCtorLink)

void UBehaviorKernel::ActivateBehaviorEventFromScript(class UBehaviorProviderDefinition* ProviderDefinition, const struct FName& EventName, int EventOutputToActivate, struct FBehaviorConsumerHandle* ConsumerHandle, TArray<struct FBehaviorVariableValue>* Parameters)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.ActivateBehaviorEventFromScript");

	UBehaviorKernel_ActivateBehaviorEventFromScript_Params params;
	params.ProviderDefinition = ProviderDefinition;
	params.EventName = EventName;
	params.EventOutputToActivate = EventOutputToActivate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
	if (Parameters != nullptr)
		*Parameters = params.Parameters;
}


// Function GearboxFramework.BehaviorKernel.RemoveBehaviorProviderFromConsumer
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UBehaviorProviderDefinition* ProviderDefinition             (Parm)

void UBehaviorKernel::RemoveBehaviorProviderFromConsumer(class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.RemoveBehaviorProviderFromConsumer");

	UBehaviorKernel_RemoveBehaviorProviderFromConsumer_Params params;
	params.ProviderDefinition = ProviderDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.BehaviorKernel.IntializeBehaviorProviderForConsumer
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// class UBehaviorProviderDefinition* ProviderDefinition             (Parm)

void UBehaviorKernel::IntializeBehaviorProviderForConsumer(class UBehaviorProviderDefinition* ProviderDefinition, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.IntializeBehaviorProviderForConsumer");

	UBehaviorKernel_IntializeBehaviorProviderForConsumer_Params params;
	params.ProviderDefinition = ProviderDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.BehaviorKernel.ForceUnregisterBehaviorConsumer
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Parm, OutParm)

void UBehaviorKernel::ForceUnregisterBehaviorConsumer(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.ForceUnregisterBehaviorConsumer");

	UBehaviorKernel_ForceUnregisterBehaviorConsumer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.BehaviorKernel.RegisterBehaviorConsumer
// (Final, Native, Static, Public)
// Parameters:
// class UObject*                 BehaviorConsumer               (Parm)
// struct FBehaviorConsumerHandle ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBehaviorConsumerHandle UBehaviorKernel::RegisterBehaviorConsumer(class UObject* BehaviorConsumer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.BehaviorKernel.RegisterBehaviorConsumer");

	UBehaviorKernel_RegisterBehaviorConsumer_Params params;
	params.BehaviorConsumer = BehaviorConsumer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.IBehaviorProvider.SetBehaviorProviderDefinition
// (Native, Public)
// Parameters:
// class UBehaviorProviderDefinition* NewBehaviorProviderDefinition  (Parm)

void UIBehaviorProvider::SetBehaviorProviderDefinition(class UBehaviorProviderDefinition* NewBehaviorProviderDefinition)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IBehaviorProvider.SetBehaviorProviderDefinition");

	UIBehaviorProvider_SetBehaviorProviderDefinition_Params params;
	params.NewBehaviorProviderDefinition = NewBehaviorProviderDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.IBehaviorProvider.GetBehaviorProviderDefinition
// (Native, Public)
// Parameters:
// class UBehaviorProviderDefinition* ReturnValue                    (Parm, OutParm, ReturnParm)

class UBehaviorProviderDefinition* UIBehaviorProvider::GetBehaviorProviderDefinition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.IBehaviorProvider.GetBehaviorProviderDefinition");

	UIBehaviorProvider_GetBehaviorProviderDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.ICustomEvent.RunCustomEvent
// (Event, HasOptionalParms, Public)
// Parameters:
// struct FName                   EventName                      (Parm)
// class UObject*                 EventInstigator                (OptionalParm, Parm)
// class UObject*                 OtherEventParticipantObject    (OptionalParm, Parm)
// struct FBehaviorParameters     EventData                      (OptionalParm, Parm, NeedCtorLink)

void UICustomEvent::RunCustomEvent(const struct FName& EventName, class UObject* EventInstigator, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ICustomEvent.RunCustomEvent");

	UICustomEvent_RunCustomEvent_Params params;
	params.EventName = EventName;
	params.EventInstigator = EventInstigator;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAnimDefinition.GetAnimLength
// (Native, Public)
// Parameters:
// class USkeletalMeshComponent*  SMC                            (Parm, EditInline)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGearboxAnimDefinition::GetAnimLength(class USkeletalMeshComponent* SMC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.GetAnimLength");

	UGearboxAnimDefinition_GetAnimLength_Params params;
	params.SMC = SMC;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAnimDefinition.IsPlayingLocally
// (Defined, Event, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAnimDefinition::IsPlayingLocally(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.IsPlayingLocally");

	UGearboxAnimDefinition_IsPlayingLocally_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAnimDefinition.GetSMNode
// (Defined, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// class UAnimNodeSpecialMoveBlend* ReturnValue                    (Parm, OutParm, ReturnParm)

class UAnimNodeSpecialMoveBlend* UGearboxAnimDefinition::GetSMNode(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.GetSMNode");

	UGearboxAnimDefinition_GetSMNode_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAnimDefinition.PlayAnim
// (Defined, Public, HasOutParms)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// struct FSpecialMoveData        SMData                         (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGearboxAnimDefinition::PlayAnim(const FScriptInterface& SMI, struct FSpecialMoveData* SMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.PlayAnim");

	UGearboxAnimDefinition_PlayAnim_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SMData != nullptr)
		*SMData = params.SMData;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAnimDefinition.AnimFinished
// (Defined, Event, Public, HasOutParms)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// class UAnimNodeSpecialMoveBlend* BlendNode                      (Parm)
// struct FSpecialMoveData        SMData                         (Parm, OutParm)
// bool                           bInterrupted                   (Parm)

void UGearboxAnimDefinition::AnimFinished(const FScriptInterface& SMI, class UAnimNodeSpecialMoveBlend* BlendNode, bool bInterrupted, struct FSpecialMoveData* SMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.AnimFinished");

	UGearboxAnimDefinition_AnimFinished_Params params;
	params.SMI = SMI;
	params.BlendNode = BlendNode;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SMData != nullptr)
		*SMData = params.SMData;
}


// Function GearboxFramework.GearboxAnimDefinition.ClientFinished
// (Defined, Event, Public, HasDefaults)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           bInterrupted                   (Parm)

void UGearboxAnimDefinition::ClientFinished(const FScriptInterface& SMI, bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.ClientFinished");

	UGearboxAnimDefinition_ClientFinished_Params params;
	params.SMI = SMI;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAnimDefinition.ClientStarted
// (Defined, Event, Public, HasOutParms, HasDefaults)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// struct FSpecialMoveData        SMData                         (Parm, OutParm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float UGearboxAnimDefinition::ClientStarted(const FScriptInterface& SMI, struct FSpecialMoveData* SMData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.ClientStarted");

	UGearboxAnimDefinition_ClientStarted_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SMData != nullptr)
		*SMData = params.SMData;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAnimDefinition.ServerFinished
// (Defined, Event, Public, HasDefaults)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           bInterrupted                   (Parm)

void UGearboxAnimDefinition::ServerFinished(const FScriptInterface& SMI, bool bInterrupted)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.ServerFinished");

	UGearboxAnimDefinition_ServerFinished_Params params;
	params.SMI = SMI;
	params.bInterrupted = bInterrupted;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAnimDefinition.ServerStarted
// (Defined, Event, Public, HasDefaults)
// Parameters:
// FScriptInterface               SMI                            (Parm)

void UGearboxAnimDefinition::ServerStarted(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.ServerStarted");

	UGearboxAnimDefinition_ServerStarted_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAnimDefinition.AddAnimSet
// (Defined, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)

void UGearboxAnimDefinition::AddAnimSet(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.AddAnimSet");

	UGearboxAnimDefinition_AddAnimSet_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAnimDefinition.GetSkeletalMesh
// (Defined, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// class USkeletalMeshComponent*  ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class USkeletalMeshComponent* UGearboxAnimDefinition::GetSkeletalMesh(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.GetSkeletalMesh");

	UGearboxAnimDefinition_GetSkeletalMesh_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAnimDefinition.AuthorityCanPlay
// (Defined, Event, Public)
// Parameters:
// FScriptInterface               SMI                            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxAnimDefinition::AuthorityCanPlay(const FScriptInterface& SMI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.AuthorityCanPlay");

	UGearboxAnimDefinition_AuthorityCanPlay_Params params;
	params.SMI = SMI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxAnimDefinition.OnTimedEvent
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)
// struct FName                   SpecializedEventName           (Parm)

void UGearboxAnimDefinition::OnTimedEvent(const struct FName& SpecializedEventName, struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.OnTimedEvent");

	UGearboxAnimDefinition_OnTimedEvent_Params params;
	params.SpecializedEventName = SpecializedEventName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.GearboxAnimDefinition.OnServerStop
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UGearboxAnimDefinition::OnServerStop(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.OnServerStop");

	UGearboxAnimDefinition_OnServerStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.GearboxAnimDefinition.OnServerStart
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UGearboxAnimDefinition::OnServerStart(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.OnServerStart");

	UGearboxAnimDefinition_OnServerStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.GearboxAnimDefinition.OnStop
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UGearboxAnimDefinition::OnStop(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.OnStop");

	UGearboxAnimDefinition_OnStop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.GearboxAnimDefinition.OnStart
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FBehaviorConsumerHandle ConsumerHandle                 (Const, Parm, OutParm)

void UGearboxAnimDefinition::OnStart(struct FBehaviorConsumerHandle* ConsumerHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.OnStart");

	UGearboxAnimDefinition_OnStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConsumerHandle != nullptr)
		*ConsumerHandle = params.ConsumerHandle;
}


// Function GearboxFramework.GearboxAnimDefinition.SetBehaviorProviderDefinition
// (Native, Public)
// Parameters:
// class UBehaviorProviderDefinition* NewBehaviorProviderDefinition  (Parm)

void UGearboxAnimDefinition::SetBehaviorProviderDefinition(class UBehaviorProviderDefinition* NewBehaviorProviderDefinition)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.SetBehaviorProviderDefinition");

	UGearboxAnimDefinition_SetBehaviorProviderDefinition_Params params;
	params.NewBehaviorProviderDefinition = NewBehaviorProviderDefinition;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxAnimDefinition.GetBehaviorProviderDefinition
// (Native, Public)
// Parameters:
// class UBehaviorProviderDefinition* ReturnValue                    (Parm, OutParm, ReturnParm)

class UBehaviorProviderDefinition* UGearboxAnimDefinition::GetBehaviorProviderDefinition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxAnimDefinition.GetBehaviorProviderDefinition");

	UGearboxAnimDefinition_GetBehaviorProviderDefinition_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Behavior_TriggerDialogEvent.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_TriggerDialogEvent::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_TriggerDialogEvent.ApplyBehaviorToContext");

	UBehavior_TriggerDialogEvent_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_TriggerDialogEvent.TriggerDialogEvent
// (Native, Public, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Const, Parm, OutParm, NeedCtorLink)

void UBehavior_TriggerDialogEvent::TriggerDialogEvent(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, struct FBehaviorParameters* EventData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_TriggerDialogEvent.TriggerDialogEvent");

	UBehavior_TriggerDialogEvent_TriggerDialogEvent_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventData != nullptr)
		*EventData = params.EventData;
}


// Function GearboxFramework.GearboxDialogActor.SetDialogNameTag
// (Native, Public)
// Parameters:
// class UGearboxDialogNameTag*   NewName                        (Parm)

void AGearboxDialogActor::SetDialogNameTag(class UGearboxDialogNameTag* NewName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.SetDialogNameTag");

	AGearboxDialogActor_SetDialogNameTag_Params params;
	params.NewName = NewName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogActor.GetReplicatedDialogData
// (Native, Public)
// Parameters:
// struct FGearboxDialogReplicatedData ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGearboxDialogReplicatedData AGearboxDialogActor::GetReplicatedDialogData()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.GetReplicatedDialogData");

	AGearboxDialogActor_GetReplicatedDialogData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogActor.SetReplicatedDialogData
// (Native, Public, HasOutParms)
// Parameters:
// class UGearboxDialogAct_Talk*  TalkAct                        (Parm)
// struct FGearboxDialogData      Data                           (Parm, OutParm)

void AGearboxDialogActor::SetReplicatedDialogData(class UGearboxDialogAct_Talk* TalkAct, struct FGearboxDialogData* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.SetReplicatedDialogData");

	AGearboxDialogActor_SetReplicatedDialogData_Params params;
	params.TalkAct = TalkAct;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function GearboxFramework.GearboxDialogActor.GetDialogGroups
// (Simulated, Native, Public, HasOutParms)
// Parameters:
// TArray<class UGearboxDialogGroup*> Groups                         (Parm, OutParm, NeedCtorLink)

void AGearboxDialogActor::GetDialogGroups(TArray<class UGearboxDialogGroup*>* Groups)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.GetDialogGroups");

	AGearboxDialogActor_GetDialogGroups_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Groups != nullptr)
		*Groups = params.Groups;
}


// Function GearboxFramework.GearboxDialogActor.GetDialogComponent
// (Simulated, Native, Public)
// Parameters:
// class UGearboxDialogComponent* ReturnValue                    (Parm, OutParm, ReturnParm, EditInline)

class UGearboxDialogComponent* AGearboxDialogActor::GetDialogComponent()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.GetDialogComponent");

	AGearboxDialogActor_GetDialogComponent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogActor.GetDialogNameTag
// (Simulated, Native, Public)
// Parameters:
// class UGearboxDialogNameTag*   ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogNameTag* AGearboxDialogActor::GetDialogNameTag()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.GetDialogNameTag");

	AGearboxDialogActor_GetDialogNameTag_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogActor.GetActor
// (Simulated, Native, Public)
// Parameters:
// class AActor*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class AActor* AGearboxDialogActor::GetActor()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.GetActor");

	AGearboxDialogActor_GetActor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogActor.CanTalk
// (Simulated, Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGearboxDialogActor::CanTalk()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.CanTalk");

	AGearboxDialogActor_CanTalk_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogActor.ServerDialog_TriggerEvent
// (Singular, Net, Native, Event, HasOptionalParms, Public, NetServer)
// Parameters:
// class UGearboxDialogEventTag*  EventTag                       (Parm)
// class AActor*                  Other                          (OptionalParm, Parm)
// class UObject*                 ObjectParameter                (OptionalParm, Parm)

void AGearboxDialogActor::ServerDialog_TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.ServerDialog_TriggerEvent");

	AGearboxDialogActor_ServerDialog_TriggerEvent_Params params;
	params.EventTag = EventTag;
	params.Other = Other;
	params.ObjectParameter = ObjectParameter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogActor.ReplicatedEvent
// (Defined, Simulated, Event, Public)
// Parameters:
// struct FName                   VarName                        (Parm)

void AGearboxDialogActor::ReplicatedEvent(const struct FName& VarName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogActor.ReplicatedEvent");

	AGearboxDialogActor_ReplicatedEvent_Params params;
	params.VarName = VarName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogComponent.IsTalking
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxDialogComponent::IsTalking()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogComponent.IsTalking");

	UGearboxDialogComponent_IsTalking_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogComponent.StopTalking
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGearboxDialogEventTag*  EventTag                       (OptionalParm, Parm)
// bool                           bForceStop                     (OptionalParm, Parm)

void UGearboxDialogComponent::StopTalking(class UGearboxDialogEventTag* EventTag, bool bForceStop)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogComponent.StopTalking");

	UGearboxDialogComponent_StopTalking_Params params;
	params.EventTag = EventTag;
	params.bForceStop = bForceStop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogComponent.TalkReplicated
// (Native, Public)
// Parameters:
// struct FGearboxDialogReplicatedData NewDialogData                  (Parm)

void UGearboxDialogComponent::TalkReplicated(const struct FGearboxDialogReplicatedData& NewDialogData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogComponent.TalkReplicated");

	UGearboxDialogComponent_TalkReplicated_Params params;
	params.NewDialogData = NewDialogData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogComponent.Talk
// (Native, Public)
// Parameters:
// class UGearboxDialogAct_Talk*  TalkAction                     (Parm)

void UGearboxDialogComponent::Talk(class UGearboxDialogAct_Talk* TalkAction)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogComponent.Talk");

	UGearboxDialogComponent_Talk_Params params;
	params.TalkAction = TalkAction;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogComponent.GetMatchingEvent
// (Native, HasOptionalParms, Public, HasOutParms)
// Parameters:
// class UGearboxDialogEventTag*  InEventTag                     (Parm)
// class UGearboxDialogEvent*     OutEvent                       (Parm, OutParm)
// class UGearboxDialogGroup*     OutGroup                       (Parm, OutParm)
// bool                           bIncludeDisabled               (OptionalParm, Parm)
// class UGearboxDialogNameTag*   OtherNameTag                   (OptionalParm, Parm)
// bool                           bAllowTemplateGroups           (OptionalParm, Parm)

void UGearboxDialogComponent::GetMatchingEvent(class UGearboxDialogEventTag* InEventTag, bool bIncludeDisabled, class UGearboxDialogNameTag* OtherNameTag, bool bAllowTemplateGroups, class UGearboxDialogEvent** OutEvent, class UGearboxDialogGroup** OutGroup)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogComponent.GetMatchingEvent");

	UGearboxDialogComponent_GetMatchingEvent_Params params;
	params.InEventTag = InEventTag;
	params.bIncludeDisabled = bIncludeDisabled;
	params.OtherNameTag = OtherNameTag;
	params.bAllowTemplateGroups = bAllowTemplateGroups;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutEvent != nullptr)
		*OutEvent = params.OutEvent;
	if (OutGroup != nullptr)
		*OutGroup = params.OutGroup;
}


// Function GearboxFramework.GearboxDialogComponent.TriggerEvent
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGearboxDialogEventTag*  EventTag                       (Parm)
// class AActor*                  Other                          (OptionalParm, Parm)
// class UObject*                 ObjectParameter                (OptionalParm, Parm)
// class UGearboxDialogEventData* TemplateEventData              (OptionalParm, Parm)
// class UGearboxDialogEventData* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogEventData* UGearboxDialogComponent::TriggerEvent(class UGearboxDialogEventTag* EventTag, class AActor* Other, class UObject* ObjectParameter, class UGearboxDialogEventData* TemplateEventData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogComponent.TriggerEvent");

	UGearboxDialogComponent_TriggerEvent_Params params;
	params.EventTag = EventTag;
	params.Other = Other;
	params.ObjectParameter = ObjectParameter;
	params.TemplateEventData = TemplateEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogComponent.GetDialogInterface
// (Native, Public)
// Parameters:
// FScriptInterface               ReturnValue                    (Parm, OutParm, ReturnParm)

FScriptInterface UGearboxDialogComponent::GetDialogInterface()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogComponent.GetDialogInterface");

	UGearboxDialogComponent_GetDialogInterface_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogGroup.SimpleEvent
// (Native, Public)
// Parameters:
// class AActor*                  Owner                          (Parm)
// class UGearboxDialogNameTag*   NameTag                        (Parm)
// class UGearboxDialogEventTag*  EventTag                       (Parm)

void UGearboxDialogGroup::SimpleEvent(class AActor* Owner, class UGearboxDialogNameTag* NameTag, class UGearboxDialogEventTag* EventTag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogGroup.SimpleEvent");

	UGearboxDialogGroup_SimpleEvent_Params params;
	params.Owner = Owner;
	params.NameTag = NameTag;
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogEventData.IsActive
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxDialogEventData::IsActive()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogEventData.IsActive");

	UGearboxDialogEventData_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogManager.DrawDialogDebug
// (Defined, HasOptionalParms, Public)
// Parameters:
// class AHUD*                    HUD                            (Parm)
// float                          StartY                         (OptionalParm, Parm)

void UGearboxDialogManager::DrawDialogDebug(class AHUD* HUD, float StartY)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.DrawDialogDebug");

	UGearboxDialogManager_DrawDialogDebug_Params params;
	params.HUD = HUD;
	params.StartY = StartY;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.CheckpointRemoveReferencesBeforeDestroy
// (Defined, Simulated, Public)

void UGearboxDialogManager::CheckpointRemoveReferencesBeforeDestroy()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.CheckpointRemoveReferencesBeforeDestroy");

	UGearboxDialogManager_CheckpointRemoveReferencesBeforeDestroy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.GetEventTagForEventInfo
// (Native, Public)
// Parameters:
// struct FDialogEventInfo        EventInfo                      (Parm)
// class UGearboxDialogEventTag*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogEventTag* UGearboxDialogManager::GetEventTagForEventInfo(const struct FDialogEventInfo& EventInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.GetEventTagForEventInfo");

	UGearboxDialogManager_GetEventTagForEventInfo_Params params;
	params.EventInfo = EventInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogManager.TriggerGroupEvent
// (Native, HasOptionalParms, Public)
// Parameters:
// class UGearboxDialogGroup*     Group                          (Parm)
// class UGearboxDialogEventTag*  EventTag                       (Parm)
// class AActor*                  Instigator                     (OptionalParm, Parm)
// class AActor*                  Other                          (OptionalParm, Parm)
// class UObject*                 ObjectParameter                (OptionalParm, Parm)
// class UGearboxDialogEventData* TemplateEventData              (OptionalParm, Parm)
// class UGearboxDialogEventData* ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogEventData* UGearboxDialogManager::TriggerGroupEvent(class UGearboxDialogGroup* Group, class UGearboxDialogEventTag* EventTag, class AActor* Instigator, class AActor* Other, class UObject* ObjectParameter, class UGearboxDialogEventData* TemplateEventData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.TriggerGroupEvent");

	UGearboxDialogManager_TriggerGroupEvent_Params params;
	params.Group = Group;
	params.EventTag = EventTag;
	params.Instigator = Instigator;
	params.Other = Other;
	params.ObjectParameter = ObjectParameter;
	params.TemplateEventData = TemplateEventData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogManager.Cleanup
// (Native, Public)

void UGearboxDialogManager::Cleanup()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.Cleanup");

	UGearboxDialogManager_Cleanup_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.SetGroupEventTag
// (Native, Public)
// Parameters:
// class UGearboxDialogGroup*     Group                          (Parm)
// class UGearboxDialogEventTag*  EventTag                       (Parm)

void UGearboxDialogManager::SetGroupEventTag(class UGearboxDialogGroup* Group, class UGearboxDialogEventTag* EventTag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.SetGroupEventTag");

	UGearboxDialogManager_SetGroupEventTag_Params params;
	params.Group = Group;
	params.EventTag = EventTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.GetGroupEventTag
// (Native, Public)
// Parameters:
// class UGearboxDialogGroup*     Group                          (Parm)
// class UGearboxDialogEventTag*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxDialogEventTag* UGearboxDialogManager::GetGroupEventTag(class UGearboxDialogGroup* Group)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.GetGroupEventTag");

	UGearboxDialogManager_GetGroupEventTag_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogManager.SilenceGroup
// (Native, Public)
// Parameters:
// class UGearboxDialogGroup*     Group                          (Parm)

void UGearboxDialogManager::SilenceGroup(class UGearboxDialogGroup* Group)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.SilenceGroup");

	UGearboxDialogManager_SilenceGroup_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.AddGroup
// (Native, Public)
// Parameters:
// class UGearboxDialogGroup*     Group                          (Parm)

void UGearboxDialogManager::AddGroup(class UGearboxDialogGroup* Group)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.AddGroup");

	UGearboxDialogManager_AddGroup_Params params;
	params.Group = Group;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.UnregisterTalker
// (Native, Public)
// Parameters:
// class AActor*                  Talker                         (Parm)

void UGearboxDialogManager::UnregisterTalker(class AActor* Talker)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.UnregisterTalker");

	UGearboxDialogManager_UnregisterTalker_Params params;
	params.Talker = Talker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.RegisterTalker
// (Native, Public)
// Parameters:
// class AActor*                  Talker                         (Parm)

void UGearboxDialogManager::RegisterTalker(class AActor* Talker)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.RegisterTalker");

	UGearboxDialogManager_RegisterTalker_Params params;
	params.Talker = Talker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.DisableTalker
// (Native, Public)
// Parameters:
// class AActor*                  Talker                         (Parm)

void UGearboxDialogManager::DisableTalker(class AActor* Talker)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.DisableTalker");

	UGearboxDialogManager_DisableTalker_Params params;
	params.Talker = Talker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.EnableTalker
// (Native, Public)
// Parameters:
// class AActor*                  Talker                         (Parm)

void UGearboxDialogManager::EnableTalker(class AActor* Talker)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.EnableTalker");

	UGearboxDialogManager_EnableTalker_Params params;
	params.Talker = Talker;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogManager.GetPriority
// (Final, Native, Public)
// Parameters:
// class UGearboxDialogPriority*  InPriority                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UGearboxDialogManager::GetPriority(class UGearboxDialogPriority* InPriority)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogManager.GetPriority");

	UGearboxDialogManager_GetPriority_Params params;
	params.InPriority = InPriority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxDialogNode.ActivateOutput
// (Native, Protected)
// Parameters:
// int                            Link                           (Parm)

void UGearboxDialogNode::ActivateOutput(int Link)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogNode.ActivateOutput");

	UGearboxDialogNode_ActivateOutput_Params params;
	params.Link = Link;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAction.Activate
// (Event, Public)

void UGearboxDialogAction::Activate()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAction.Activate");

	UGearboxDialogAction_Activate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_Chance.Activate
// (Native, Event, Public)

void UGearboxDialogAct_Chance::Activate()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_Chance.Activate");

	UGearboxDialogAct_Chance_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_Compare.Activate
// (Native, Event, Public)

void UGearboxDialogAct_Compare::Activate()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_Compare.Activate");

	UGearboxDialogAct_Compare_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_ObjectParameterSwitch.Activate
// (Native, Event, Public)

void UGearboxDialogAct_ObjectParameterSwitch::Activate()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_ObjectParameterSwitch.Activate");

	UGearboxDialogAct_ObjectParameterSwitch_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_Talk.Activate
// (Native, Event, Public)

void UGearboxDialogAct_Talk::Activate()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_Talk.Activate");

	UGearboxDialogAct_Talk_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_Talk.TalkFinished
// (Event, Public)
// Parameters:
// class AActor*                  InTalker                       (Parm)

void UGearboxDialogAct_Talk::TalkFinished(class AActor* InTalker)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_Talk.TalkFinished");

	UGearboxDialogAct_Talk_TalkFinished_Params params;
	params.InTalker = InTalker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_Talk.TalkStarted
// (Event, Public)
// Parameters:
// class AActor*                  InTalker                       (Parm)

void UGearboxDialogAct_Talk::TalkStarted(class AActor* InTalker)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_Talk.TalkStarted");

	UGearboxDialogAct_Talk_TalkStarted_Params params;
	params.InTalker = InTalker;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_Trigger.ActivateOutput
// (Native, Protected)
// Parameters:
// int                            Link                           (Parm)

void UGearboxDialogAct_Trigger::ActivateOutput(int Link)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_Trigger.ActivateOutput");

	UGearboxDialogAct_Trigger_ActivateOutput_Params params;
	params.Link = Link;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogAct_Trigger.Activate
// (Native, Event, Public)

void UGearboxDialogAct_Trigger::Activate()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogAct_Trigger.Activate");

	UGearboxDialogAct_Trigger_Activate_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxDialogVariable.ResolveToArgumentValue
// (Native, Public, HasOutParms)
// Parameters:
// struct FString                 Out_ArgumentValue              (Parm, OutParm, NeedCtorLink)

void UGearboxDialogVariable::ResolveToArgumentValue(struct FString* Out_ArgumentValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogVariable.ResolveToArgumentValue");

	UGearboxDialogVariable_ResolveToArgumentValue_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Out_ArgumentValue != nullptr)
		*Out_ArgumentValue = params.Out_ArgumentValue;
}


// Function GearboxFramework.GearboxDialogVariable.GetTalkers
// (Native, Public, HasOutParms)
// Parameters:
// TArray<class AActor*>          Talkers                        (Parm, OutParm, NeedCtorLink)

void UGearboxDialogVariable::GetTalkers(TArray<class AActor*>* Talkers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxDialogVariable.GetTalkers");

	UGearboxDialogVariable_GetTalkers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Talkers != nullptr)
		*Talkers = params.Talkers;
}


// Function GearboxFramework.GearboxProcess.GetStepConfiguration
// (Native, Public)
// Parameters:
// struct FStepConfiguration      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStepConfiguration UGearboxProcess::GetStepConfiguration()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.GetStepConfiguration");

	UGearboxProcess_GetStepConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxProcess.GotoStep
// (Native, Public)
// Parameters:
// int                            Step                           (Parm)

void UGearboxProcess::GotoStep(int Step)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.GotoStep");

	UGearboxProcess_GotoStep_Params params;
	params.Step = Step;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxProcess.GotoNextStep
// (Native, Public)

void UGearboxProcess::GotoNextStep()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.GotoNextStep");

	UGearboxProcess_GotoNextStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxProcess.GotoFirstStep
// (Native, Public)

void UGearboxProcess::GotoFirstStep()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.GotoFirstStep");

	UGearboxProcess_GotoFirstStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxProcess.PerformStep
// (Event, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UGearboxProcess::PerformStep()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.PerformStep");

	UGearboxProcess_PerformStep_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxProcess.PauseLoop
// (Native, Public)

void UGearboxProcess::PauseLoop()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.PauseLoop");

	UGearboxProcess_PauseLoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxProcess.Init
// (Native, Public)

void UGearboxProcess::Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.Init");

	UGearboxProcess_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxProcess.ContinueLoop
// (Native, Public)

void UGearboxProcess::ContinueLoop()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.ContinueLoop");

	UGearboxProcess_ContinueLoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxProcess.StopLoop
// (Native, Public)

void UGearboxProcess::StopLoop()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxProcess.StopLoop");

	UGearboxProcess_StopLoop_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInitializationProcess.TriggerSparkInitializedDelegates
// (Defined, Event, Public)
// Parameters:
// unsigned char                  InitializeResult               (Parm)

void USparkInitializationProcess::TriggerSparkInitializedDelegates(unsigned char InitializeResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.TriggerSparkInitializedDelegates");

	USparkInitializationProcess_TriggerSparkInitializedDelegates_Params params;
	params.InitializeResult = InitializeResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInitializationProcess.ClearSparkInitializedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)

void USparkInitializationProcess::ClearSparkInitializedDelegate(const struct FScriptDelegate& SparkInitializedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.ClearSparkInitializedDelegate");

	USparkInitializationProcess_ClearSparkInitializedDelegate_Params params;
	params.SparkInitializedDelegate = SparkInitializedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInitializationProcess.AddSparkInitializedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)

void USparkInitializationProcess::AddSparkInitializedDelegate(const struct FScriptDelegate& SparkInitializedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.AddSparkInitializedDelegate");

	USparkInitializationProcess_AddSparkInitializedDelegate_Params params;
	params.SparkInitializedDelegate = SparkInitializedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInitializationProcess.GetStepName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInitializationProcess::GetStepName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.GetStepName");

	USparkInitializationProcess_GetStepName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.GetStepConfiguration
// (Native, Public)
// Parameters:
// struct FStepConfiguration      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FStepConfiguration USparkInitializationProcess::GetStepConfiguration()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.GetStepConfiguration");

	USparkInitializationProcess_GetStepConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.IsInitialized
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInitializationProcess::IsInitialized()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.IsInitialized");

	USparkInitializationProcess_IsInitialized_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.IsDisabled
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInitializationProcess::IsDisabled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.IsDisabled");

	USparkInitializationProcess_IsDisabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.IsInitializing
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInitializationProcess::IsInitializing()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.IsInitializing");

	USparkInitializationProcess_IsInitializing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.UpdateAgreementsSigning
// (Defined, Static, Public)
// Parameters:
// class UGearboxAccountData*     GbxAccountData                 (Parm)
// struct FString                 NeedsSignAgreements            (Parm, NeedCtorLink)

void USparkInitializationProcess::UpdateAgreementsSigning(class UGearboxAccountData* GbxAccountData, const struct FString& NeedsSignAgreements)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.UpdateAgreementsSigning");

	USparkInitializationProcess_UpdateAgreementsSigning_Params params;
	params.GbxAccountData = GbxAccountData;
	params.NeedsSignAgreements = NeedsSignAgreements;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInitializationProcess.HandleVerificationReceived
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void USparkInitializationProcess::HandleVerificationReceived(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.HandleVerificationReceived");

	USparkInitializationProcess_HandleVerificationReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.SparkInitializationProcess.VerifyAuthentication
// (Defined, Event, Public, HasDefaults)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInitializationProcess::VerifyAuthentication()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.VerifyAuthentication");

	USparkInitializationProcess_VerifyAuthentication_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.AuthenticateTicketStringWithDelegate
// (Defined, Public, HasDefaults)
// Parameters:
// struct FString                 ticket                         (Parm, NeedCtorLink)
// struct FScriptDelegate         SparkRequestCompleteDelegate   (Parm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInitializationProcess::AuthenticateTicketStringWithDelegate(const struct FString& ticket, const struct FScriptDelegate& SparkRequestCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.AuthenticateTicketStringWithDelegate");

	USparkInitializationProcess_AuthenticateTicketStringWithDelegate_Params params;
	params.ticket = ticket;
	params.SparkRequestCompleteDelegate = SparkRequestCompleteDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.HandleAuthenticationReceived
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void USparkInitializationProcess::HandleAuthenticationReceived(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.HandleAuthenticationReceived");

	USparkInitializationProcess_HandleAuthenticationReceived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.SparkInitializationProcess.AuthenticateAccount
// (Defined, Event, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInitializationProcess::AuthenticateAccount()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.AuthenticateAccount");

	USparkInitializationProcess_AuthenticateAccount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.GetConfigQuery
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInitializationProcess::GetConfigQuery()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.GetConfigQuery");

	USparkInitializationProcess_GetConfigQuery_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.CompleteInitialization
// (Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInitializationProcess::CompleteInitialization()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.CompleteInitialization");

	USparkInitializationProcess_CompleteInitialization_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.HttpInit
// (Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInitializationProcess::HttpInit()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.HttpInit");

	USparkInitializationProcess_HttpInit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.CheckForTMS
// (Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInitializationProcess::CheckForTMS()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.CheckForTMS");

	USparkInitializationProcess_CheckForTMS_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.PerformStep
// (Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInitializationProcess::PerformStep()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.PerformStep");

	USparkInitializationProcess_PerformStep_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.StartProcess
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInitializationProcess::StartProcess()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.StartProcess");

	USparkInitializationProcess_StartProcess_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInitializationProcess.InitWithController
// (Defined, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// bool                           bNewPrimary                    (Parm)
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)

void USparkInitializationProcess::InitWithController(unsigned char ControllerId, bool bNewPrimary, const struct FScriptDelegate& SparkInitializedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInitializationProcess.InitWithController");

	USparkInitializationProcess_InitWithController_Params params;
	params.ControllerId = ControllerId;
	params.bNewPrimary = bNewPrimary;
	params.SparkInitializedDelegate = SparkInitializedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.LeviathanService.GetLeviathanServiceConfiguration
// (Defined, Event, Public)
// Parameters:
// int                            ControllerNumber               (Parm)
// class USparkServiceConfiguration* ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkServiceConfiguration* ULeviathanService::GetLeviathanServiceConfiguration(int ControllerNumber)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.LeviathanService.GetLeviathanServiceConfiguration");

	ULeviathanService_GetLeviathanServiceConfiguration_Params params;
	params.ControllerNumber = ControllerNumber;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.LeviathanService.OnSparkInitialized
// (Native, Public)
// Parameters:
// unsigned char                  InitializedResult              (Parm)

void ULeviathanService::OnSparkInitialized(unsigned char InitializedResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.LeviathanService.OnSparkInitialized");

	ULeviathanService_OnSparkInitialized_Params params;
	params.InitializedResult = InitializedResult;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.LeviathanService.LoadServiceConfigurationForPlayer
// (Final, Native, Public)
// Parameters:
// int                            SplitscreenIndex               (Parm)

void ULeviathanService::LoadServiceConfigurationForPlayer(int SplitscreenIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.LeviathanService.LoadServiceConfigurationForPlayer");

	ULeviathanService_LoadServiceConfigurationForPlayer_Params params;
	params.SplitscreenIndex = SplitscreenIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.LeviathanService.GetLeviathanService
// (Final, Native, Static, Public)
// Parameters:
// class ULeviathanService*       ReturnValue                    (Parm, OutParm, ReturnParm)

class ULeviathanService* ULeviathanService::GetLeviathanService()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.LeviathanService.GetLeviathanService");

	ULeviathanService_GetLeviathanService_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.RemoveScriptCallback
// (Native, Public)
// Parameters:
// int                            HttpRequestId                  (Parm)

void USparkInterfaceImpl::RemoveScriptCallback(int HttpRequestId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.RemoveScriptCallback");

	USparkInterfaceImpl_RemoveScriptCallback_Params params;
	params.HttpRequestId = HttpRequestId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.GetNewsService
// (Defined, Public)
// Parameters:
// class USparkNews*              ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkNews* USparkInterfaceImpl::GetNewsService()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetNewsService");

	USparkInterfaceImpl_GetNewsService_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageServiceConfiguration
// (Native, Public)
// Parameters:
// class USparkServiceConfiguration* ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkServiceConfiguration* USparkInterfaceImpl::GetTitleStorageServiceConfiguration()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetTitleStorageServiceConfiguration");

	USparkInterfaceImpl_GetTitleStorageServiceConfiguration_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetTitleStorageUrl
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetTitleStorageUrl()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetTitleStorageUrl");

	USparkInterfaceImpl_GetTitleStorageUrl_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.OnSparkInitialized
// (Defined, Public)
// Parameters:
// unsigned char                  InitializedResult              (Parm)

void USparkInterfaceImpl::OnSparkInitialized(unsigned char InitializedResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.OnSparkInitialized");

	USparkInterfaceImpl_OnSparkInitialized_Params params;
	params.InitializedResult = InitializedResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.IncreaseInteractionTries
// (Defined, Public)

void USparkInterfaceImpl::IncreaseInteractionTries()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IncreaseInteractionTries");

	USparkInterfaceImpl_IncreaseInteractionTries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.GetInteractionTries
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterfaceImpl::GetInteractionTries()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetInteractionTries");

	USparkInterfaceImpl_GetInteractionTries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetInteractionGraceTries
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterfaceImpl::GetInteractionGraceTries()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetInteractionGraceTries");

	USparkInterfaceImpl_GetInteractionGraceTries_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetInteractionPunishmentMinWaitSeconds
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterfaceImpl::GetInteractionPunishmentMinWaitSeconds()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetInteractionPunishmentMinWaitSeconds");

	USparkInterfaceImpl_GetInteractionPunishmentMinWaitSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetInteractionMinWaitSeconds
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterfaceImpl::GetInteractionMinWaitSeconds()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetInteractionMinWaitSeconds");

	USparkInterfaceImpl_GetInteractionMinWaitSeconds_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.ConvertUtcTimeToLocalTime
// (Native, Public)
// Parameters:
// struct FString                 UtcTime                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::ConvertUtcTimeToLocalTime(const struct FString& UtcTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.ConvertUtcTimeToLocalTime");

	USparkInterfaceImpl_ConvertUtcTimeToLocalTime_Params params;
	params.UtcTime = UtcTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.ShouldUpdateEmergencyMessage
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::ShouldUpdateEmergencyMessage()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.ShouldUpdateEmergencyMessage");

	USparkInterfaceImpl_ShouldUpdateEmergencyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetEmergencyMessage
// (Defined, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetEmergencyMessage()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetEmergencyMessage");

	USparkInterfaceImpl_GetEmergencyMessage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.SetEmergencyMessage
// (Defined, Public)
// Parameters:
// struct FString                 NewMessage                     (Parm, NeedCtorLink)

void USparkInterfaceImpl::SetEmergencyMessage(const struct FString& NewMessage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.SetEmergencyMessage");

	USparkInterfaceImpl_SetEmergencyMessage_Params params;
	params.NewMessage = NewMessage;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.IsTmsComplete
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::IsTmsComplete()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IsTmsComplete");

	USparkInterfaceImpl_IsTmsComplete_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.SetTmsComplete
// (Defined, Public)

void USparkInterfaceImpl::SetTmsComplete()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.SetTmsComplete");

	USparkInterfaceImpl_SetTmsComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.RestartSparkInitializationFromScript
// (Defined, Public)
// Parameters:
// bool                           bPrimary                       (Parm)
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)
// struct FScriptDelegate         SparkEmergencyMessageDelegate  (Parm, NeedCtorLink)

void USparkInterfaceImpl::RestartSparkInitializationFromScript(bool bPrimary, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.RestartSparkInitializationFromScript");

	USparkInterfaceImpl_RestartSparkInitializationFromScript_Params params;
	params.bPrimary = bPrimary;
	params.SparkInitializedDelegate = SparkInitializedDelegate;
	params.SparkEmergencyMessageDelegate = SparkEmergencyMessageDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.RestartSparkInitialization
// (Defined, Event, Public)
// Parameters:
// bool                           bPrimary                       (Parm)

void USparkInterfaceImpl::RestartSparkInitialization(bool bPrimary)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.RestartSparkInitialization");

	USparkInterfaceImpl_RestartSparkInitialization_Params params;
	params.bPrimary = bPrimary;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.StartSparkInitialization
// (Defined, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)
// struct FScriptDelegate         SparkEmergencyMessageDelegate  (Parm, NeedCtorLink)
// struct FScriptDelegate         EntitlementsUpdatedDelegate    (Parm, NeedCtorLink)

void USparkInterfaceImpl::StartSparkInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& SparkEmergencyMessageDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.StartSparkInitialization");

	USparkInterfaceImpl_StartSparkInitialization_Params params;
	params.ControllerId = ControllerId;
	params.SparkInitializedDelegate = SparkInitializedDelegate;
	params.SparkEmergencyMessageDelegate = SparkEmergencyMessageDelegate;
	params.EntitlementsUpdatedDelegate = EntitlementsUpdatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.ResetInitializationStatus
// (Defined, Public)

void USparkInterfaceImpl::ResetInitializationStatus()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.ResetInitializationStatus");

	USparkInterfaceImpl_ResetInitializationStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.ResetSecondaryInitializationStatus
// (Defined, Public)

void USparkInterfaceImpl::ResetSecondaryInitializationStatus()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.ResetSecondaryInitializationStatus");

	USparkInterfaceImpl_ResetSecondaryInitializationStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.StartSecondaryInitialization
// (Defined, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         SparkInitializedDelegate       (Parm, NeedCtorLink)
// struct FScriptDelegate         EntitlementsUpdatedDelegate    (Parm, NeedCtorLink)

void USparkInterfaceImpl::StartSecondaryInitialization(unsigned char ControllerId, const struct FScriptDelegate& SparkInitializedDelegate, const struct FScriptDelegate& EntitlementsUpdatedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.StartSecondaryInitialization");

	USparkInterfaceImpl_StartSecondaryInitialization_Params params;
	params.ControllerId = ControllerId;
	params.SparkInitializedDelegate = SparkInitializedDelegate;
	params.EntitlementsUpdatedDelegate = EntitlementsUpdatedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.GetSparkInitialization
// (Defined, Public)
// Parameters:
// class USparkInitializationProcess* ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkInitializationProcess* USparkInterfaceImpl::GetSparkInitialization()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetSparkInitialization");

	USparkInterfaceImpl_GetSparkInitialization_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.SignInGearboxAccount
// (Defined, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)

void USparkInterfaceImpl::SignInGearboxAccount(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.SignInGearboxAccount");

	USparkInterfaceImpl_SignInGearboxAccount_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.GetGearboxAccountData
// (Defined, Event, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// class UGearboxAccountData*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UGearboxAccountData* USparkInterfaceImpl::GetGearboxAccountData(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetGearboxAccountData");

	USparkInterfaceImpl_GetGearboxAccountData_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.SignOutGearboxAccount
// (Defined, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)

void USparkInterfaceImpl::SignOutGearboxAccount(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.SignOutGearboxAccount");

	USparkInterfaceImpl_SignOutGearboxAccount_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.ValidPlayerIndex
// (Defined, Public)
// Parameters:
// int                            PlayerIndex                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::ValidPlayerIndex(int PlayerIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.ValidPlayerIndex");

	USparkInterfaceImpl_ValidPlayerIndex_Params params;
	params.PlayerIndex = PlayerIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetPlayerIndex
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterfaceImpl::GetPlayerIndex(int ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetPlayerIndex");

	USparkInterfaceImpl_GetPlayerIndex_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.ClearGearboxAccountData
// (Defined, Public)
// Parameters:
// bool                           IncludePrimaryPlayer           (Parm)

void USparkInterfaceImpl::ClearGearboxAccountData(bool IncludePrimaryPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.ClearGearboxAccountData");

	USparkInterfaceImpl_ClearGearboxAccountData_Params params;
	params.IncludePrimaryPlayer = IncludePrimaryPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountSignedIn
// (Defined, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::IsGearboxAccountSignedIn(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IsGearboxAccountSignedIn");

	USparkInterfaceImpl_IsGearboxAccountSignedIn_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.IsGearboxAccountAuthenticated
// (Defined, Event, Public)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::IsGearboxAccountAuthenticated(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IsGearboxAccountAuthenticated");

	USparkInterfaceImpl_IsGearboxAccountAuthenticated_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetGameName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetGameName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetGameName");

	USparkInterfaceImpl_GetGameName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetHardwareName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetHardwareName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetHardwareName");

	USparkInterfaceImpl_GetHardwareName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetPlatformName
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetPlatformName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetPlatformName");

	USparkInterfaceImpl_GetPlatformName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetPlatformTicket
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bPrimary                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetPlatformTicket(int ControllerId, bool bPrimary)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetPlatformTicket");

	USparkInterfaceImpl_GetPlatformTicket_Params params;
	params.ControllerId = ControllerId;
	params.bPrimary = bPrimary;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.ClearSparkConfigReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         SparkConfigReceivedDelegate    (Parm, NeedCtorLink)

void USparkInterfaceImpl::ClearSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.ClearSparkConfigReceivedDelegate");

	USparkInterfaceImpl_ClearSparkConfigReceivedDelegate_Params params;
	params.SparkConfigReceivedDelegate = SparkConfigReceivedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.AddSparkConfigReceivedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         SparkConfigReceivedDelegate    (Parm, NeedCtorLink)

void USparkInterfaceImpl::AddSparkConfigReceivedDelegate(const struct FScriptDelegate& SparkConfigReceivedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.AddSparkConfigReceivedDelegate");

	USparkInterfaceImpl_AddSparkConfigReceivedDelegate_Params params;
	params.SparkConfigReceivedDelegate = SparkConfigReceivedDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromController
// (Defined, Public, HasDefaults)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetPlatformLoginNameFromController(unsigned char ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromController");

	USparkInterfaceImpl_GetPlatformLoginNameFromController_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromSplitscreenIndex
// (Defined, Event, Public)
// Parameters:
// int                            SplitscreenIndex               (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetPlatformLoginNameFromSplitscreenIndex(int SplitscreenIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetPlatformLoginNameFromSplitscreenIndex");

	USparkInterfaceImpl_GetPlatformLoginNameFromSplitscreenIndex_Params params;
	params.SplitscreenIndex = SplitscreenIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetPlatformLoginName
// (Defined, Event, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::GetPlatformLoginName()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetPlatformLoginName");

	USparkInterfaceImpl_GetPlatformLoginName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.GetLoginStatus
// (Defined, Event, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char USparkInterfaceImpl::GetLoginStatus()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.GetLoginStatus");

	USparkInterfaceImpl_GetLoginStatus_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.IsShiftEnabled
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::IsShiftEnabled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IsShiftEnabled");

	USparkInterfaceImpl_IsShiftEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.IsSparkEnabled
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::IsSparkEnabled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IsSparkEnabled");

	USparkInterfaceImpl_IsSparkEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.WithShift
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::WithShift()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.WithShift");

	USparkInterfaceImpl_WithShift_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.WithSpark
// (Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkInterfaceImpl::WithSpark()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.WithSpark");

	USparkInterfaceImpl_WithSpark_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.IssueSparkStringRequest
// (Native, Public, HasOutParms)
// Parameters:
// struct FHttpParameters         HttpRequestParameters          (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 URL                            (Parm, NeedCtorLink)
// struct FString                 RequestData                    (Const, Parm, NeedCtorLink)
// struct FScriptDelegate         SparkRequestCompleteDelegate   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterfaceImpl::IssueSparkStringRequest(const struct FString& URL, const struct FString& RequestData, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpRequestParameters)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IssueSparkStringRequest");

	USparkInterfaceImpl_IssueSparkStringRequest_Params params;
	params.URL = URL;
	params.RequestData = RequestData;
	params.SparkRequestCompleteDelegate = SparkRequestCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HttpRequestParameters != nullptr)
		*HttpRequestParameters = params.HttpRequestParameters;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.IssueSparkRequest
// (Native, Public, HasOutParms)
// Parameters:
// struct FHttpParameters         HttpParameters                 (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 URL                            (Parm, NeedCtorLink)
// TArray<unsigned char>          RequestData                    (Const, Parm, OutParm, NeedCtorLink)
// struct FScriptDelegate         SparkRequestCompleteDelegate   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkInterfaceImpl::IssueSparkRequest(const struct FString& URL, const struct FScriptDelegate& SparkRequestCompleteDelegate, struct FHttpParameters* HttpParameters, TArray<unsigned char>* RequestData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.IssueSparkRequest");

	USparkInterfaceImpl_IssueSparkRequest_Params params;
	params.URL = URL;
	params.SparkRequestCompleteDelegate = SparkRequestCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HttpParameters != nullptr)
		*HttpParameters = params.HttpParameters;
	if (RequestData != nullptr)
		*RequestData = params.RequestData;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.AlternativeXboxlivePlatformId
// (Native, Public, HasOutParms)
// Parameters:
// struct FUniqueNetId            NetId                          (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkInterfaceImpl::AlternativeXboxlivePlatformId(struct FUniqueNetId* NetId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.AlternativeXboxlivePlatformId");

	USparkInterfaceImpl_AlternativeXboxlivePlatformId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NetId != nullptr)
		*NetId = params.NetId;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkInterfaceImpl.OnSparkEmergencyMessageUpdated
// (Public, Delegate)

void USparkInterfaceImpl::OnSparkEmergencyMessageUpdated()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.OnSparkEmergencyMessageUpdated");

	USparkInterfaceImpl_OnSparkEmergencyMessageUpdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.OnSparkConfigReceived
// (Public, Delegate)
// Parameters:
// TArray<unsigned char>          ConfigArray                    (Parm, NeedCtorLink)

void USparkInterfaceImpl::OnSparkConfigReceived(TArray<unsigned char> ConfigArray)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.OnSparkConfigReceived");

	USparkInterfaceImpl_OnSparkConfigReceived_Params params;
	params.ConfigArray = ConfigArray;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkInterfaceImpl.OnSparkRequestComplete
// (Public, Delegate, HasOutParms)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void USparkInterfaceImpl::OnSparkRequestComplete(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkInterfaceImpl.OnSparkRequestComplete");

	USparkInterfaceImpl_OnSparkRequestComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.SparkServiceConfiguration.GetBoolParameter
// (Native, Public)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// bool                           Default                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkServiceConfiguration::GetBoolParameter(const struct FString& KeyName, bool Default)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkServiceConfiguration.GetBoolParameter");

	USparkServiceConfiguration_GetBoolParameter_Params params;
	params.KeyName = KeyName;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkServiceConfiguration.GetFloatParameter
// (Native, Public)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// float                          DefaultValue                   (Parm)
// float                          MinimumValue                   (Parm)
// float                          MaximumValue                   (Parm)
// float                          ReturnValue                    (Parm, OutParm, ReturnParm)

float USparkServiceConfiguration::GetFloatParameter(const struct FString& KeyName, float DefaultValue, float MinimumValue, float MaximumValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkServiceConfiguration.GetFloatParameter");

	USparkServiceConfiguration_GetFloatParameter_Params params;
	params.KeyName = KeyName;
	params.DefaultValue = DefaultValue;
	params.MinimumValue = MinimumValue;
	params.MaximumValue = MaximumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkServiceConfiguration.GetIntParameter
// (Native, Public)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// int                            DefaultValue                   (Parm)
// int                            MinimumValue                   (Parm)
// int                            MaximumValue                   (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkServiceConfiguration::GetIntParameter(const struct FString& KeyName, int DefaultValue, int MinimumValue, int MaximumValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkServiceConfiguration.GetIntParameter");

	USparkServiceConfiguration_GetIntParameter_Params params;
	params.KeyName = KeyName;
	params.DefaultValue = DefaultValue;
	params.MinimumValue = MinimumValue;
	params.MaximumValue = MaximumValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkServiceConfiguration.GetStringParameter
// (Native, Public)
// Parameters:
// struct FString                 KeyName                        (Parm, NeedCtorLink)
// struct FString                 Default                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkServiceConfiguration::GetStringParameter(const struct FString& KeyName, const struct FString& Default)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkServiceConfiguration.GetStringParameter");

	USparkServiceConfiguration_GetStringParameter_Params params;
	params.KeyName = KeyName;
	params.Default = Default;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkServiceConfiguration.GetParameter
// (Native, Public)
// Parameters:
// struct FString                 KeyNameToSearchFor             (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString USparkServiceConfiguration::GetParameter(const struct FString& KeyNameToSearchFor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkServiceConfiguration.GetParameter");

	USparkServiceConfiguration_GetParameter_Params params;
	params.KeyNameToSearchFor = KeyNameToSearchFor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkServiceConfiguration.LoadService
// (Native, Public, HasOutParms)
// Parameters:
// struct FServiceResult          Service                        (Const, Parm, OutParm, NeedCtorLink)

void USparkServiceConfiguration::LoadService(struct FServiceResult* Service)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkServiceConfiguration.LoadService");

	USparkServiceConfiguration_LoadService_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Service != nullptr)
		*Service = params.Service;
}


// Function GearboxFramework.SparkServiceConfiguration.LoadOverrides
// (Native, Public)

void USparkServiceConfiguration::LoadOverrides()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkServiceConfiguration.LoadOverrides");

	USparkServiceConfiguration_LoadOverrides_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Action_FaceThreat.StopSequence
// (Defined, Event, Public)

void UAction_FaceThreat::StopSequence()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Action_FaceThreat.StopSequence");

	UAction_FaceThreat_StopSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.ActorAttributeContextResolver.GetAttributeContext
// (Defined, Public)
// Parameters:
// class UAttributeDefinitionBase* Attribute                      (Parm)
// class UObject*                 AttributeContextSource         (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UActorAttributeContextResolver::GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.ActorAttributeContextResolver.GetAttributeContext");

	UActorAttributeContextResolver_GetAttributeContext_Params params;
	params.Attribute = Attribute;
	params.AttributeContextSource = AttributeContextSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.AIComponentAttributeContextResolver.GetAttributeContext
// (Defined, Public)
// Parameters:
// class UAttributeDefinitionBase* Attribute                      (Parm)
// class UObject*                 AttributeContextSource         (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UAIComponentAttributeContextResolver::GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.AIComponentAttributeContextResolver.GetAttributeContext");

	UAIComponentAttributeContextResolver_GetAttributeContext_Params params;
	params.Attribute = Attribute;
	params.AttributeContextSource = AttributeContextSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.Behavior_AIHold.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_AIHold::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_AIHold.ApplyBehaviorToContext");

	UBehavior_AIHold_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_AIPriority.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_AIPriority::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_AIPriority.ApplyBehaviorToContext");

	UBehavior_AIPriority_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_AITargeting.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_AITargeting::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_AITargeting.ApplyBehaviorToContext");

	UBehavior_AITargeting_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_ChangeAnyBehaviorSequenceState::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_ChangeAnyBehaviorSequenceState.ApplyBehaviorToContext");

	UBehavior_ChangeAnyBehaviorSequenceState_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_ChangeLocalBehaviorSequenceState::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_ChangeLocalBehaviorSequenceState.ApplyBehaviorToContext");

	UBehavior_ChangeLocalBehaviorSequenceState_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_CompareBool.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_CompareBool::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_CompareBool.ApplyBehaviorToContext");

	UBehavior_CompareBool_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_CompareValues.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_CompareValues::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_CompareValues.ApplyBehaviorToContext");

	UBehavior_CompareValues_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_CustomEvent.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_CustomEvent::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_CustomEvent.ApplyBehaviorToContext");

	UBehavior_CustomEvent_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_Delay.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_Delay::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_Delay.ApplyBehaviorToContext");

	UBehavior_Delay_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_Gate.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_Gate::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_Gate.ApplyBehaviorToContext");

	UBehavior_Gate_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_GetFloatParam.PublishBehaviorOutput
// (Defined, Protected, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// float                          Value                          (Parm)

void UBehavior_GetFloatParam::PublishBehaviorOutput(float Value, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_GetFloatParam.PublishBehaviorOutput");

	UBehavior_GetFloatParam_PublishBehaviorOutput_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_GetFloatParam.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_GetFloatParam::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_GetFloatParam.ApplyBehaviorToContext");

	UBehavior_GetFloatParam_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_GetObjectParam.PublishBehaviorOutput
// (Defined, Protected, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 Value                          (Parm)

void UBehavior_GetObjectParam::PublishBehaviorOutput(class UObject* Value, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_GetObjectParam.PublishBehaviorOutput");

	UBehavior_GetObjectParam_PublishBehaviorOutput_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_GetObjectParam.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_GetObjectParam::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_GetObjectParam.ApplyBehaviorToContext");

	UBehavior_GetObjectParam_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_GetVectorParam.PublishBehaviorOutput
// (Defined, Protected, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// float                          R                              (Parm)
// float                          G                              (Parm)
// float                          B                              (Parm)
// float                          A                              (Parm)

void UBehavior_GetVectorParam::PublishBehaviorOutput(float R, float G, float B, float A, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_GetVectorParam.PublishBehaviorOutput");

	UBehavior_GetVectorParam_PublishBehaviorOutput_Params params;
	params.R = R;
	params.G = G;
	params.B = B;
	params.A = A;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_GetVectorParam.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_GetVectorParam::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_GetVectorParam.ApplyBehaviorToContext");

	UBehavior_GetVectorParam_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_InterpolateFloatOverTime.PublishBehaviorOutput
// (Defined, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// float                          Result                         (Parm)

void UBehavior_InterpolateFloatOverTime::PublishBehaviorOutput(float Result, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_InterpolateFloatOverTime.PublishBehaviorOutput");

	UBehavior_InterpolateFloatOverTime_PublishBehaviorOutput_Params params;
	params.Result = Result;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_InterpolateFloatOverTime.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_InterpolateFloatOverTime::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_InterpolateFloatOverTime.ApplyBehaviorToContext");

	UBehavior_InterpolateFloatOverTime_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_Metronome.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_Metronome::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_Metronome.ApplyBehaviorToContext");

	UBehavior_Metronome_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_ModifyTimer.PublishBehaviorOutput
// (Defined, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// float                          TimeRemaining                  (Parm)

void UBehavior_ModifyTimer::PublishBehaviorOutput(float TimeRemaining, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_ModifyTimer.PublishBehaviorOutput");

	UBehavior_ModifyTimer_PublishBehaviorOutput_Params params;
	params.TimeRemaining = TimeRemaining;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_ModifyTimer.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_ModifyTimer::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_ModifyTimer.ApplyBehaviorToContext");

	UBehavior_ModifyTimer_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_SetFloatParam.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_SetFloatParam::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SetFloatParam.ApplyBehaviorToContext");

	UBehavior_SetFloatParam_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_SetObjectParam.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_SetObjectParam::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SetObjectParam.ApplyBehaviorToContext");

	UBehavior_SetObjectParam_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_SetVectorParam.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms, HasDefaults)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_SetVectorParam::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SetVectorParam.ApplyBehaviorToContext");

	UBehavior_SetVectorParam_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_SpecialMove.PlaySpecialMove
// (Defined, Public)
// Parameters:
// class USpecialMoveComponent*   SMC                            (Parm, EditInline)

void UBehavior_SpecialMove::PlaySpecialMove(class USpecialMoveComponent* SMC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SpecialMove.PlaySpecialMove");

	UBehavior_SpecialMove_PlaySpecialMove_Params params;
	params.SMC = SMC;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.Behavior_SpecialMove.TriggerOutput
// (Defined, Public, HasOutParms)
// Parameters:
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)

void UBehavior_SpecialMove::TriggerOutput(struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SpecialMove.TriggerOutput");

	UBehavior_SpecialMove_TriggerOutput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_SpecialMove.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_SpecialMove::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SpecialMove.ApplyBehaviorToContext");

	UBehavior_SpecialMove_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_SpecialMoveStop.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_SpecialMoveStop::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_SpecialMoveStop.ApplyBehaviorToContext");

	UBehavior_SpecialMoveStop_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_StartAkAmbientSound.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_StartAkAmbientSound::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_StartAkAmbientSound.ApplyBehaviorToContext");

	UBehavior_StartAkAmbientSound_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_StopAkAmbientSound.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_StopAkAmbientSound::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_StopAkAmbientSound.ApplyBehaviorToContext");

	UBehavior_StopAkAmbientSound_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_StopDialog.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_StopDialog::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_StopDialog.ApplyBehaviorToContext");

	UBehavior_StopDialog_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.Behavior_ToggleDialog.ApplyBehaviorToContext
// (Defined, Protected, HasOutParms)
// Parameters:
// class UObject*                 ContextObject                  (Parm)
// struct FBehaviorKernelInfo     KernelInfo                     (Parm, OutParm)
// class UObject*                 SelfObject                     (Parm)
// class UObject*                 MyInstigatorObject             (Parm)
// class UObject*                 OtherEventParticipantObject    (Parm)
// struct FBehaviorParameters     EventData                      (Parm, NeedCtorLink)

void UBehavior_ToggleDialog::ApplyBehaviorToContext(class UObject* ContextObject, class UObject* SelfObject, class UObject* MyInstigatorObject, class UObject* OtherEventParticipantObject, const struct FBehaviorParameters& EventData, struct FBehaviorKernelInfo* KernelInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.Behavior_ToggleDialog.ApplyBehaviorToContext");

	UBehavior_ToggleDialog_ApplyBehaviorToContext_Params params;
	params.ContextObject = ContextObject;
	params.SelfObject = SelfObject;
	params.MyInstigatorObject = MyInstigatorObject;
	params.OtherEventParticipantObject = OtherEventParticipantObject;
	params.EventData = EventData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (KernelInfo != nullptr)
		*KernelInfo = params.KernelInfo;
}


// Function GearboxFramework.CameraModifierCrossfade.DoCrossfade
// (Defined, Protected)

void UCameraModifierCrossfade::DoCrossfade()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierCrossfade.DoCrossfade");

	UCameraModifierCrossfade_DoCrossfade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierCrossfade.UpdateAllLerps
// (Defined, Protected, HasOutParms)
// Parameters:
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void UCameraModifierCrossfade::UpdateAllLerps(float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierCrossfade.UpdateAllLerps");

	UCameraModifierCrossfade_UpdateAllLerps_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function GearboxFramework.CameraModifierCrossfade.ModifyCamera
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// class ACamera*                 Camera                         (Parm)
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UCameraModifierCrossfade::ModifyCamera(class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierCrossfade.ModifyCamera");

	UCameraModifierCrossfade_ModifyCamera_Params params;
	params.Camera = Camera;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

	return params.ReturnValue;
}


// Function GearboxFramework.CameraModifierCrossfade.ProcessCameraBlend
// (Final, Defined, Private, HasOutParms, HasDefaults)
// Parameters:
// class ACamera*                 Camera                         (Parm)
// float                          AdjustedDeltaTime              (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)

void UCameraModifierCrossfade::ProcessCameraBlend(class ACamera* Camera, float AdjustedDeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierCrossfade.ProcessCameraBlend");

	UCameraModifierCrossfade_ProcessCameraBlend_Params params;
	params.Camera = Camera;
	params.AdjustedDeltaTime = AdjustedDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
}


// Function GearboxFramework.CameraModifierCrossfade.InitializeSubModifiers
// (Defined, Protected)

void UCameraModifierCrossfade::InitializeSubModifiers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierCrossfade.InitializeSubModifiers");

	UCameraModifierCrossfade_InitializeSubModifiers_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierCrossfade.EnableModifier
// (Defined, Event, Public)

void UCameraModifierCrossfade::EnableModifier()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierCrossfade.EnableModifier");

	UCameraModifierCrossfade_EnableModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.ExecuteFadeIfNeeded
// (Defined, Public, HasOutParms)
// Parameters:
// class AGearboxPlayerController* PC                             (Const, Parm, OutParm)

void UCameraModifierLookAt::ExecuteFadeIfNeeded(class AGearboxPlayerController** PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.ExecuteFadeIfNeeded");

	UCameraModifierLookAt_ExecuteFadeIfNeeded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PC != nullptr)
		*PC = params.PC;
}


// Function GearboxFramework.CameraModifierLookAt.GetDesiredLocation
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// struct FTPOV                   OutPOV                         (Const, Parm, OutParm)
// class AGearboxPlayerController* PC                             (Const, Parm, OutParm)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm)

struct FVector UCameraModifierLookAt::GetDesiredLocation(struct FTPOV* OutPOV, class AGearboxPlayerController** PC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.GetDesiredLocation");

	UCameraModifierLookAt_GetDesiredLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;
	if (PC != nullptr)
		*PC = params.PC;

	return params.ReturnValue;
}


// Function GearboxFramework.CameraModifierLookAt.ModifyCamera
// (Defined, Public, HasOutParms, HasDefaults)
// Parameters:
// class ACamera*                 Camera                         (Parm)
// float                          DeltaTime                      (Parm)
// struct FTPOV                   OutPOV                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UCameraModifierLookAt::ModifyCamera(class ACamera* Camera, float DeltaTime, struct FTPOV* OutPOV)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.ModifyCamera");

	UCameraModifierLookAt_ModifyCamera_Params params;
	params.Camera = Camera;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutPOV != nullptr)
		*OutPOV = params.OutPOV;

	return params.ReturnValue;
}


// Function GearboxFramework.CameraModifierLookAt.GetBoneLocation
// (Final, Defined, HasOptionalParms, Private, HasOutParms)
// Parameters:
// class AActor*                  Target                         (Parm)
// struct FName                   BoneName                       (Parm)
// struct FVector                 BoneLoc                        (OptionalParm, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UCameraModifierLookAt::GetBoneLocation(class AActor* Target, const struct FName& BoneName, struct FVector* BoneLoc)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.GetBoneLocation");

	UCameraModifierLookAt_GetBoneLocation_Params params;
	params.Target = Target;
	params.BoneName = BoneName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BoneLoc != nullptr)
		*BoneLoc = params.BoneLoc;

	return params.ReturnValue;
}


// Function GearboxFramework.CameraModifierLookAt.SetLookAtBone
// (Defined, Public)
// Parameters:
// struct FName                   NewBone                        (Parm)

void UCameraModifierLookAt::SetLookAtBone(const struct FName& NewBone)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetLookAtBone");

	UCameraModifierLookAt_SetLookAtBone_Params params;
	params.NewBone = NewBone;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.SetLookAtTarget
// (Defined, Public)
// Parameters:
// class AActor*                  newLookAtTarget                (Parm)

void UCameraModifierLookAt::SetLookAtTarget(class AActor* newLookAtTarget)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetLookAtTarget");

	UCameraModifierLookAt_SetLookAtTarget_Params params;
	params.newLookAtTarget = newLookAtTarget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.SetTargetLocation
// (Public)
// Parameters:
// struct FVector                 NewTargetLocation              (Parm)
// float                          newTransitionTimeIn            (Parm)
// float                          newTransitionTimeOut           (Parm)

void UCameraModifierLookAt::SetTargetLocation(const struct FVector& NewTargetLocation, float newTransitionTimeIn, float newTransitionTimeOut)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetTargetLocation");

	UCameraModifierLookAt_SetTargetLocation_Params params;
	params.NewTargetLocation = NewTargetLocation;
	params.newTransitionTimeIn = newTransitionTimeIn;
	params.newTransitionTimeOut = newTransitionTimeOut;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.SetDuration
// (Defined, Public)
// Parameters:
// float                          NewDuration                    (Parm)

void UCameraModifierLookAt::SetDuration(float NewDuration)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetDuration");

	UCameraModifierLookAt_SetDuration_Params params;
	params.NewDuration = NewDuration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.SetTransitionTimes
// (Defined, Public)
// Parameters:
// float                          NewInTime                      (Parm)
// float                          NewOutTime                     (Parm)

void UCameraModifierLookAt::SetTransitionTimes(float NewInTime, float NewOutTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetTransitionTimes");

	UCameraModifierLookAt_SetTransitionTimes_Params params;
	params.NewInTime = NewInTime;
	params.NewOutTime = NewOutTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.SetZoomFOV
// (Defined, Public)
// Parameters:
// float                          newZoom                        (Parm)

void UCameraModifierLookAt::SetZoomFOV(float newZoom)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetZoomFOV");

	UCameraModifierLookAt_SetZoomFOV_Params params;
	params.newZoom = newZoom;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.SetThirdPersonDistances
// (Defined, Public)
// Parameters:
// float                          NewX                           (Parm)
// float                          NewY                           (Parm)
// float                          NewZ                           (Parm)

void UCameraModifierLookAt::SetThirdPersonDistances(float NewX, float NewY, float NewZ)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetThirdPersonDistances");

	UCameraModifierLookAt_SetThirdPersonDistances_Params params;
	params.NewX = NewX;
	params.NewY = NewY;
	params.NewZ = NewZ;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.SetLookAtMode
// (Defined, Public)
// Parameters:
// unsigned char                  NewMode                        (Parm)

void UCameraModifierLookAt::SetLookAtMode(unsigned char NewMode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.SetLookAtMode");

	UCameraModifierLookAt_SetLookAtMode_Params params;
	params.NewMode = NewMode;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.DisableModifier
// (Defined, HasOptionalParms, Public)
// Parameters:
// bool                           bImmediate                     (OptionalParm, Parm)

void UCameraModifierLookAt::DisableModifier(bool bImmediate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.DisableModifier");

	UCameraModifierLookAt_DisableModifier_Params params;
	params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.CameraModifierLookAt.EnableModifier
// (Defined, Public)

void UCameraModifierLookAt::EnableModifier()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.CameraModifierLookAt.EnableModifier");

	UCameraModifierLookAt_EnableModifier_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkNews.Internal_GetService
// (Final, Defined, Private)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// FScriptInterface               Spark                          (Parm)
// class USparkServiceConfiguration* ReturnValue                    (Parm, OutParm, ReturnParm)

class USparkServiceConfiguration* USparkNews::Internal_GetService(unsigned char ControllerId, const FScriptInterface& Spark)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.Internal_GetService");

	USparkNews_Internal_GetService_Params params;
	params.ControllerId = ControllerId;
	params.Spark = Spark;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkNews.CallAndClearRetrievedDelegate
// (Final, Defined, Private)
// Parameters:
// unsigned char                  RetrievealResult               (Parm)

void USparkNews::CallAndClearRetrievedDelegate(unsigned char RetrievealResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.CallAndClearRetrievedDelegate");

	USparkNews_CallAndClearRetrievedDelegate_Params params;
	params.RetrievealResult = RetrievealResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkNews.ParseArticles
// (Final, Defined, Private, HasDefaults)
// Parameters:
// class UJsonObject*             NewsArticlesJSONObject         (Parm)

void USparkNews::ParseArticles(class UJsonObject* NewsArticlesJSONObject)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.ParseArticles");

	USparkNews_ParseArticles_Params params;
	params.NewsArticlesJSONObject = NewsArticlesJSONObject;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkNews.HandleNewsRetrievalResponse
// (Final, Defined, Private, HasOutParms)
// Parameters:
// struct FSparkResult            Result                         (Const, Parm, OutParm, NeedCtorLink)

void USparkNews::HandleNewsRetrievalResponse(struct FSparkResult* Result)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.HandleNewsRetrievalResponse");

	USparkNews_HandleNewsRetrievalResponse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GearboxFramework.SparkNews.GetArticle
// (Defined, Public, HasOutParms)
// Parameters:
// int                            Idx                            (Parm)
// struct FString                 Header                         (Parm, OutParm, NeedCtorLink)
// struct FString                 Body                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool USparkNews::GetArticle(int Idx, struct FString* Header, struct FString* Body)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.GetArticle");

	USparkNews_GetArticle_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Header != nullptr)
		*Header = params.Header;
	if (Body != nullptr)
		*Body = params.Body;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkNews.GetArticleCount
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int USparkNews::GetArticleCount()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.GetArticleCount");

	USparkNews_GetArticleCount_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.SparkNews.RetrieveNews
// (Defined, Public, HasDefaults)
// Parameters:
// unsigned char                  ControllerId                   (Parm)
// struct FScriptDelegate         RetrievalDelegate              (Parm, NeedCtorLink)

void USparkNews::RetrieveNews(unsigned char ControllerId, const struct FScriptDelegate& RetrievalDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.RetrieveNews");

	USparkNews_RetrieveNews_Params params;
	params.ControllerId = ControllerId;
	params.RetrievalDelegate = RetrievalDelegate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.SparkNews.OnNewsRetrieved
// (Public, Delegate)
// Parameters:
// unsigned char                  RetrievealResult               (Parm)
// class USparkNews*              newsObj                        (Parm)

void USparkNews::OnNewsRetrieved(unsigned char RetrievealResult, class USparkNews* newsObj)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.SparkNews.OnNewsRetrieved");

	USparkNews_OnNewsRetrieved_Params params;
	params.RetrievealResult = RetrievealResult;
	params.newsObj = newsObj;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.HandleInputKey
// (Defined, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// struct FName                   ukey                           (Parm)
// unsigned char                  uevent                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxEULAGFxMovie::HandleInputKey(int ControllerId, const struct FName& ukey, unsigned char uevent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.HandleInputKey");

	UGearboxEULAGFxMovie_HandleInputKey_Params params;
	params.ControllerId = ControllerId;
	params.ukey = ukey;
	params.uevent = uevent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEULAGFxMovie.ShowEULA
// (Defined, Public)

void UGearboxEULAGFxMovie::ShowEULA()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.ShowEULA");

	UGearboxEULAGFxMovie_ShowEULA_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.OnDeclineButtonClick
// (Defined, Public)

void UGearboxEULAGFxMovie::OnDeclineButtonClick()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.OnDeclineButtonClick");

	UGearboxEULAGFxMovie_OnDeclineButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.OnAcceptButtonClick
// (Defined, Public)

void UGearboxEULAGFxMovie::OnAcceptButtonClick()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.OnAcceptButtonClick");

	UGearboxEULAGFxMovie_OnAcceptButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.FireCompleteDelegate
// (Defined, Public)

void UGearboxEULAGFxMovie::FireCompleteDelegate()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.FireCompleteDelegate");

	UGearboxEULAGFxMovie_FireCompleteDelegate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.extClosed
// (Defined, Public)

void UGearboxEULAGFxMovie::extClosed()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.extClosed");

	UGearboxEULAGFxMovie_extClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.extOnDeclineButtonClick
// (Defined, Public)

void UGearboxEULAGFxMovie::extOnDeclineButtonClick()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.extOnDeclineButtonClick");

	UGearboxEULAGFxMovie_extOnDeclineButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.extOnAcceptButtonClick
// (Defined, Public)

void UGearboxEULAGFxMovie::extOnAcceptButtonClick()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.extOnAcceptButtonClick");

	UGearboxEULAGFxMovie_extOnAcceptButtonClick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.extOnLoad
// (Defined, Public)
// Parameters:
// struct FString                 Path                           (Parm, NeedCtorLink)

void UGearboxEULAGFxMovie::extOnLoad(const struct FString& Path)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.extOnLoad");

	UGearboxEULAGFxMovie_extOnLoad_Params params;
	params.Path = Path;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.OnClose
// (Defined, Event, Public)

void UGearboxEULAGFxMovie::OnClose()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.OnClose");

	UGearboxEULAGFxMovie_OnClose_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxMovie.Start
// (Defined, Event, HasOptionalParms, Public)
// Parameters:
// bool                           StartPaused                    (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGearboxEULAGFxMovie::Start(bool StartPaused)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.Start");

	UGearboxEULAGFxMovie_Start_Params params;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.GearboxEULAGFxMovie.OnEULAInteractionComplete
// (Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FEULAData>       EULAState                      (Const, Parm, OutParm, NeedCtorLink)

void UGearboxEULAGFxMovie::OnEULAInteractionComplete(TArray<struct FEULAData>* EULAState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxMovie.OnEULAInteractionComplete");

	UGearboxEULAGFxMovie_OnEULAInteractionComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EULAState != nullptr)
		*EULAState = params.EULAState;
}


// Function GearboxFramework.GearboxEULAGFxObject.NavigateDown
// (Defined, Public)

void UGearboxEULAGFxObject::NavigateDown()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxObject.NavigateDown");

	UGearboxEULAGFxObject_NavigateDown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxObject.NavigateUp
// (Defined, Public)

void UGearboxEULAGFxObject::NavigateUp()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxObject.NavigateUp");

	UGearboxEULAGFxObject_NavigateUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxObject.SetTooltipText
// (Defined, Public)
// Parameters:
// struct FString                 AcceptText                     (Parm, NeedCtorLink)
// struct FString                 DeclineText                    (Parm, NeedCtorLink)

void UGearboxEULAGFxObject::SetTooltipText(const struct FString& AcceptText, const struct FString& DeclineText)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxObject.SetTooltipText");

	UGearboxEULAGFxObject_SetTooltipText_Params params;
	params.AcceptText = AcceptText;
	params.DeclineText = DeclineText;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxObject.SetEULAText
// (Defined, Public)
// Parameters:
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Text                           (Parm, NeedCtorLink)

void UGearboxEULAGFxObject::SetEULAText(const struct FString& Title, const struct FString& Text)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxObject.SetEULAText");

	UGearboxEULAGFxObject_SetEULAText_Params params;
	params.Title = Title;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GearboxEULAGFxObject.Init
// (Defined, Public)

void UGearboxEULAGFxObject::Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GearboxEULAGFxObject.Init");

	UGearboxEULAGFxObject_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GearboxFramework.GFxMovieDrawStyleInstanceData.RequiresClientInstance
// (Defined, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGFxMovieDrawStyleInstanceData::RequiresClientInstance()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.GFxMovieDrawStyleInstanceData.RequiresClientInstance");

	UGFxMovieDrawStyleInstanceData_RequiresClientInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GearboxFramework.PopulationMasterAttributeContextResolver.GetAttributeContext
// (Defined, Public)
// Parameters:
// class UAttributeDefinitionBase* Attribute                      (Parm)
// class UObject*                 AttributeContextSource         (Parm)
// class UObject*                 ReturnValue                    (Parm, OutParm, ReturnParm)

class UObject* UPopulationMasterAttributeContextResolver::GetAttributeContext(class UAttributeDefinitionBase* Attribute, class UObject* AttributeContextSource)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GearboxFramework.PopulationMasterAttributeContextResolver.GetAttributeContext");

	UPopulationMasterAttributeContextResolver_GetAttributeContext_Params params;
	params.Attribute = Attribute;
	params.AttributeContextSource = AttributeContextSource;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
