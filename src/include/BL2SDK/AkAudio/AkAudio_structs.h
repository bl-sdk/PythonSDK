#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum AkAudio.WwiseSoundGroup.ESoundGroupState
//enum class ESoundGroupState : uint8_t
//{
//	SG_NoChange                    = 0,
//	SG_Enabled                     = 1,
//	SG_Disabled                    = 2,
//	SG_MAX                         = 3
//};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AkAudio.IAkEnvironmentalEffectProvider.EnvironmentalEffectInfo
// 0x0008
struct FEnvironmentalEffectInfo
{
	int                                                EffectID;                                                 // 0x0000(0x0004)
	float                                              Volume;                                                   // 0x0004(0x0004)
};

// ScriptStruct AkAudio.InterpTrackAkEvent.AkEventTrackKey
// 0x0008
struct FAkEventTrackKey
{
	float                                              Time;                                                     // 0x0000(0x0004)
	class UAkEvent*                                    Event;                                                    // 0x0004(0x0004) (Edit)
};

// ScriptStruct AkAudio.WwiseSoundVolume.EnvironmentalEffectSetting
// 0x0014
struct FEnvironmentalEffectSetting
{
	class UAkEffect*                                   Effect;                                                   // 0x0000(0x0004) (Edit)
	float                                              Volume;                                                   // 0x0004(0x0004) (Edit)
	float                                              FadeDistance;                                             // 0x0008(0x0004)
	float                                              MinDistance;                                              // 0x000C(0x0004) (Edit)
	float                                              MaxDistance;                                              // 0x0010(0x0004) (Edit)
};

// ScriptStruct AkAudio.WwiseSoundVolume.RTPCSetting
// 0x0018
struct FRTPCSetting
{
	class AActor*                                      Target;                                                   // 0x0000(0x0004) (Edit)
	class UAkRtpc*                                     AkRtpc;                                                   // 0x0004(0x0004) (Edit)
	float                                              ValueAtMaxRange;                                          // 0x0008(0x0004) (Edit)
	float                                              ValueWithinVolume;                                        // 0x000C(0x0004) (Edit)
	float                                              FadeDistance;                                             // 0x0010(0x0004) (Edit)
	float                                              LastEvalValue;                                            // 0x0014(0x0004)
};

// ScriptStruct AkAudio.WwiseSoundVolume.OccludedVolume
// 0x0018
struct FOccludedVolume
{
	class AWwiseSoundVolume*                           SoundVolume;                                              // 0x0000(0x0004)
	FScriptInterface                                   Target;                                                   // 0x0004(0x0008) (Edit)
	float                                              MaxOcclusion;                                             // 0x000C(0x0004) (Edit)
	float                                              FadeDistance;                                             // 0x0010(0x0004) (Edit)
	unsigned long                                      bFadeIn : 1;                                              // 0x0014(0x0004) (Edit)
	unsigned long                                      bExternalFade : 1;                                        // 0x0014(0x0004) (Edit)
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
