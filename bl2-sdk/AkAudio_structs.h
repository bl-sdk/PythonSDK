#pragma once
#include "BL2-SDK.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct AkAudio.IAkEnvironmentalEffectProvider.EnvironmentalEffectInfo
// 0x0008
struct FEnvironmentalEffectInfo
{
	int                                                EffectID;                                         		// 0x0000 (0x0004) [0x0000000000000000]
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000000]
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0008
struct FAkEventTrackKey
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000000]
	class UAkEvent*                                    Event;                                            		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct AkAudio.WwiseSoundVolume.EnvironmentalEffectSetting
// 0x0014
struct FEnvironmentalEffectSetting
{
	class UAkEffect*                                   Effect;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Volume;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeDistance;                                     		// 0x0008 (0x0004) [0x0000000000000000]
	float                                              MinDistance;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDistance;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct AkAudio.WwiseSoundVolume.RTPCSetting
// 0x0018
struct FRTPCSetting
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkRtpc*                                     AkRtpc;                                           		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValueAtMaxRange;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ValueWithinVolume;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeDistance;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastEvalValue;                                    		// 0x0014 (0x0004) [0x0000000000000000]
};

// ScriptStruct AkAudio.WwiseSoundVolume.OccludedVolume
// 0x0018
struct FOccludedVolume
{
	class AWwiseSoundVolume*                           SoundVolume;                                      		// 0x0000 (0x0004) [0x0000000000000000]
	class UISpecialOcclusionAccumulator*               Target;                                           		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      UnknownData00[0x4];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	float                                              MaxOcclusion;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FadeDistance;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bFadeIn : 1;                                      		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bExternalFade : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif