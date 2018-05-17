#pragma once
#include "BL2-SDK.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_f_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function AkAudio.IAkEnvironmentalEffectProvider.GetEnvironmentalEffectsForLocation
// [0x00020400] ( FUNC_Native )
struct UIAkEnvironmentalEffectProvider_execGetEnvironmentalEffectsForLocation_Parms
{
	class UAkComponent*                                GameObjComponent;                                 		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     ListenerLocation;                                 		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ObjectLocation;                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FEnvironmentalEffectInfo >          ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function AkAudio.ISpecialOcclusionAccumulator.RemoveOcclusionProvider
// [0x00020400] ( FUNC_Native )
struct UISpecialOcclusionAccumulator_execRemoveOcclusionProvider_Parms
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.ISpecialOcclusionAccumulator.SetOcclusionForProvider
// [0x00020400] ( FUNC_Native )
struct UISpecialOcclusionAccumulator_execSetOcclusionForProvider_Parms
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.WwiseSoundGroup.RemoveOcclusionProvider
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundGroup_execRemoveOcclusionProvider_Parms
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.WwiseSoundGroup.SetOcclusionForProvider
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundGroup_execSetOcclusionForProvider_Parms
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.WwiseSoundGroup.GetOcclusionAmount
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundGroup_execGetOcclusionAmount_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.WwiseSoundGroup.SetAkSwitchObject
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundGroup_execSetAkSwitchObject_Parms
{
	class UAkSwitch*                                   Switch;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.WwiseSoundGroup.SetRTPCObjectValue
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundGroup_execSetRTPCObjectValue_Parms
{
	class UAkRtpc*                                     InRtpc;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              TargetValue;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.WwiseSoundVolume.RemoveOcclusionProvider
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundVolume_execRemoveOcclusionProvider_Parms
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.WwiseSoundVolume.SetOcclusionForProvider
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundVolume_execSetOcclusionForProvider_Parms
{
	class AActor*                                      Source;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Amount;                                           		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function AkAudio.WwiseSoundVolume.GetOcclusionAmount
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundVolume_execGetOcclusionAmount_Parms
{
	float                                              ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function AkAudio.WwiseSoundVolume.UpdateAkComponentPosition
// [0x00420400] ( FUNC_Native )
struct AWwiseSoundVolume_execUpdateAkComponentPosition_Parms
{
	TArray< struct FVector >                           ListenerPositions;                                		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	TArray< struct FRotator >                          ListenerOrientations;                             		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function AkAudio.WwiseSoundVolume.GetEnvironmentalEffectsForLocation
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundVolume_execGetEnvironmentalEffectsForLocation_Parms
{
	class UAkComponent*                                GameObjComponent;                                 		// 0x0000 (0x0004) [0x0000000004000080]              ( CPF_Parm | CPF_EditInline )
	struct FVector                                     ListenerLocation;                                 		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ObjectLocation;                                   		// 0x0010 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FEnvironmentalEffectInfo >          ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function AkAudio.WwiseSoundVolume.CalculateFacePlanes
// [0x00020400] ( FUNC_Native )
struct AWwiseSoundVolume_execCalculateFacePlanes_Parms
{
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif