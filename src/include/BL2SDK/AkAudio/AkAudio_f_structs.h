#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AkAudio.IAkEnvironmentalEffectProvider.GetEnvironmentalEffectsForLocation
struct UIAkEnvironmentalEffectProvider_GetEnvironmentalEffectsForLocation_Params
{
	class UAkComponent*                                GameObjComponent;                                         // (Parm, EditInline)
	struct FVector                                     ListenerLocation;                                         // (Parm)
	struct FVector                                     ObjectLocation;                                           // (Parm)
	TArray<struct FEnvironmentalEffectInfo>            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function AkAudio.ISpecialOcclusionAccumulator.RemoveOcclusionProvider
struct UISpecialOcclusionAccumulator_RemoveOcclusionProvider_Params
{
	class AActor*                                      Source;                                                   // (Parm)
};

// Function AkAudio.ISpecialOcclusionAccumulator.SetOcclusionForProvider
struct UISpecialOcclusionAccumulator_SetOcclusionForProvider_Params
{
	class AActor*                                      Source;                                                   // (Parm)
	float                                              Amount;                                                   // (Parm)
};

// Function AkAudio.WwiseSoundGroup.RemoveOcclusionProvider
struct AWwiseSoundGroup_RemoveOcclusionProvider_Params
{
	class AActor*                                      Source;                                                   // (Parm)
};

// Function AkAudio.WwiseSoundGroup.SetOcclusionForProvider
struct AWwiseSoundGroup_SetOcclusionForProvider_Params
{
	class AActor*                                      Source;                                                   // (Parm)
	float                                              Amount;                                                   // (Parm)
};

// Function AkAudio.WwiseSoundGroup.GetOcclusionAmount
struct AWwiseSoundGroup_GetOcclusionAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.WwiseSoundGroup.SetAkSwitchObject
struct AWwiseSoundGroup_SetAkSwitchObject_Params
{
	class UAkSwitch*                                   Switch;                                                   // (Parm)
};

// Function AkAudio.WwiseSoundGroup.SetRTPCObjectValue
struct AWwiseSoundGroup_SetRTPCObjectValue_Params
{
	class UAkRtpc*                                     InRtpc;                                                   // (Parm)
	float                                              TargetValue;                                              // (Parm)
};

// Function AkAudio.WwiseSoundVolume.RemoveOcclusionProvider
struct AWwiseSoundVolume_RemoveOcclusionProvider_Params
{
	class AActor*                                      Source;                                                   // (Parm)
};

// Function AkAudio.WwiseSoundVolume.SetOcclusionForProvider
struct AWwiseSoundVolume_SetOcclusionForProvider_Params
{
	class AActor*                                      Source;                                                   // (Parm)
	float                                              Amount;                                                   // (Parm)
};

// Function AkAudio.WwiseSoundVolume.GetOcclusionAmount
struct AWwiseSoundVolume_GetOcclusionAmount_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function AkAudio.WwiseSoundVolume.UpdateAkComponentPosition
struct AWwiseSoundVolume_UpdateAkComponentPosition_Params
{
	TArray<struct FVector>                             ListenerPositions;                                        // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FRotator>                            ListenerOrientations;                                     // (Const, Parm, OutParm, NeedCtorLink)
};

// Function AkAudio.WwiseSoundVolume.GetEnvironmentalEffectsForLocation
struct AWwiseSoundVolume_GetEnvironmentalEffectsForLocation_Params
{
	class UAkComponent*                                GameObjComponent;                                         // (Parm, EditInline)
	struct FVector                                     ListenerLocation;                                         // (Parm)
	struct FVector                                     ObjectLocation;                                           // (Parm)
	TArray<struct FEnvironmentalEffectInfo>            ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function AkAudio.WwiseSoundVolume.CalculateFacePlanes
struct AWwiseSoundVolume_CalculateFacePlanes_Params
{
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
