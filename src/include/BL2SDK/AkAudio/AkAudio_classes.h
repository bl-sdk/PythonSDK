#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0004 (0x007C - 0x0080)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                             // 0x007C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ActorFactoryAkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x000C (0x018C - 0x0198)
class AAkAmbientSound : public AKeypoint
{
public:
	class UAkEvent*                                    PlayEvent;                                                // 0x018C(0x0004) (Edit)
	class AWwiseSoundGroup*                            Group;                                                    // 0x0190(0x0004) (Edit)
	unsigned long                                      bIsRegistered : 1;                                        // 0x0194(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AkAmbientSound");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSoundRenderingComponent
// 0x0004 (0x0210 - 0x0214)
class UAkAmbientSoundRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned long                                      bShowOnlyIfSelected : 1;                                  // 0x0210(0x0004) (Config, GlobalConfig)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AkAmbientSoundRenderingComponent");
		return ptr;
	}

};


// Class AkAudio.IAkEnvironmentalEffectProvider
// 0x0000 (0x003C - 0x003C)
class UIAkEnvironmentalEffectProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("IAkEnvironmentalEffectProvider");
		return ptr;
	}


	TArray<struct FEnvironmentalEffectInfo> GetEnvironmentalEffectsForLocation(class UAkComponent* GameObjComponent, const struct FVector& ListenerLocation, const struct FVector& ObjectLocation);
};


// Class AkAudio.InterpTrackAkEvent
// 0x000C (0x0068 - 0x0074)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray<struct FAkEventTrackKey>                    AkEvents;                                                 // 0x0068(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("InterpTrackAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkRTPC
// 0x0004 (0x007C - 0x0080)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	class UAkRtpc*                                     AkRtpc;                                                   // 0x007C(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("InterpTrackAkRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x003C - 0x0040)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                                       // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("InterpTrackInstAkEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x003C - 0x003C)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("InterpTrackInstAkRTPC");
		return ptr;
	}

};


// Class AkAudio.ISpecialOcclusionAccumulator
// 0x0000 (0x003C - 0x003C)
class UISpecialOcclusionAccumulator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ISpecialOcclusionAccumulator");
		return ptr;
	}


	void RemoveOcclusionProvider(class AActor* Source);
	void SetOcclusionForProvider(class AActor* Source, float Amount);
};


// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x00A4 - 0x00A4)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkClearBanks");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkLoadBank
// 0x0000 (0x00B4 - 0x00B4)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkLoadBank");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostEvent
// 0x0014 (0x00B4 - 0x00C8)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	TArray<struct FAkPlayingInfo>                      ActivePlayingIds;                                         // 0x00B4(0x000C) (Transient, Component, NeedCtorLink)
	class UAkEvent*                                    Event;                                                    // 0x00C0(0x0004) (Edit)
	unsigned long                                      bPlayOneInstanceFromAllLocations : 1;                     // 0x00C4(0x0004) (Edit)
	unsigned long                                      bTreatAllLocationsAsOneSource : 1;                        // 0x00C4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkPostEvent");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkPostTrigger
// 0x0004 (0x00A4 - 0x00A8)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	class UAkTrigger*                                  AkTrigger;                                                // 0x00A4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkPostTrigger");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x000C (0x00B4 - 0x00C0)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	class UAkRtpc*                                     AkRtpc;                                                   // 0x00B4(0x0004) (Edit)
	float                                              Value;                                                    // 0x00B8(0x0004) (Edit)
	unsigned long                                      Running : 1;                                              // 0x00BC(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkSetRTPCValue");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetState
// 0x0004 (0x00A4 - 0x00A8)
class USeqAct_AkSetState : public USequenceAction
{
public:
	class UAkState*                                    State;                                                    // 0x00A4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkSetState");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkSetSwitch
// 0x0004 (0x00A4 - 0x00A8)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	class UAkSwitch*                                   AkSwitch;                                                 // 0x00A4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkSetSwitch");
		return ptr;
	}

};


// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00A4 - 0x00A4)
class USeqAct_AkStopAll : public USequenceAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_AkStopAll");
		return ptr;
	}

};


// Class AkAudio.WwiseSoundGroup
// 0x0050 (0x018C - 0x01DC)
class AWwiseSoundGroup : public AKeypoint
{
public:
	struct FPointer                                    VfTable_IISpecialOcclusionProvider;                       // 0x018C(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IISpecialOcclusionAccumulator;                    // 0x0190(0x0004) (Const, Native, NoExport)
	TArray<class AActor*>                              Members;                                                  // 0x0194(0x000C) (Transient, NeedCtorLink)
	struct FMap_Mirror                                 ActiveOccluders;                                          // 0x01A0(0x003C) (Const, Native, Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WwiseSoundGroup");
		return ptr;
	}


	void RemoveOcclusionProvider(class AActor* Source);
	void SetOcclusionForProvider(class AActor* Source, float Amount);
	float GetOcclusionAmount();
	void SetAkSwitchObject(class UAkSwitch* Switch);
	void SetRTPCObjectValue(class UAkRtpc* InRtpc, float TargetValue);
};


// Class AkAudio.WwiseSoundGroupRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UWwiseSoundGroupRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WwiseSoundGroupRenderingComponent");
		return ptr;
	}

};


// Class AkAudio.WwiseSoundVolume
// 0x0130 (0x01BC - 0x02EC)
class AWwiseSoundVolume : public AVolume
{
public:
	struct FPointer                                    VfTable_IIAkEnvironmentalEffectProvider;                  // 0x01BC(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IISpecialOcclusionProvider;                       // 0x01C0(0x0004) (Const, Native, NoExport)
	struct FPointer                                    VfTable_IISpecialOcclusionAccumulator;                    // 0x01C4(0x0004) (Const, Native, NoExport)
	class UAkEvent*                                    akPlayEvent;                                              // 0x01C8(0x0004) (Edit)
	unsigned long                                      bAutoPlay : 1;                                            // 0x01CC(0x0004) (Edit)
	unsigned long                                      bAutomaticallySetPlayAndStopDistances : 1;                // 0x01CC(0x0004) (Edit)
	unsigned long                                      bPlaySoundsFromAllSubBrushes : 1;                         // 0x01CC(0x0004) (Edit)
	unsigned long                                      bEffectBankLoaded : 1;                                    // 0x01CC(0x0004) (Transient)
	float                                              AutoPlayDistance;                                         // 0x01D0(0x0004) (Edit)
	float                                              AutoStopDistance;                                         // 0x01D4(0x0004) (Edit)
	class AWwiseSoundVolume*                           ParentVolume;                                             // 0x01D8(0x0004) (Transient)
	TArray<class AWwiseSoundVolume*>                   SubBrushes;                                               // 0x01DC(0x000C) (Edit, NeedCtorLink)
	float                                              EnvironmentFadeDistance;                                  // 0x01E8(0x0004) (Edit)
	class AWwiseSoundGroup*                            Group;                                                    // 0x01EC(0x0004) (Edit)
	class UAkComponent*                                AkComponent;                                              // 0x01F0(0x0004) (ExportObject, Transient, Component, EditInline)
	struct FVector                                     Midpoint;                                                 // 0x01F4(0x000C) (Const)
	float                                              FarthestVertexDistance;                                   // 0x0200(0x0004) (Const)
	float                                              LastLocationUpdateTime;                                   // 0x0204(0x0004) (Transient)
	float                                              DistancePerAdditionalSecondBetweenUpdates;                // 0x0208(0x0004) (Config, GlobalConfig)
	float                                              LastEnvironmentStrength;                                  // 0x020C(0x0004) (Transient)
	float                                              LastEnvironmentSuppressionModifier;                       // 0x0210(0x0004) (Transient)
	struct FMap_Mirror                                 EnvironmentSuppressors;                                   // 0x0214(0x003C) (Const, Native, Transient)
	TArray<struct FEnvironmentalEffectSetting>         EnvironmentalEffects;                                     // 0x0250(0x000C) (Edit, NeedCtorLink)
	TArray<class AWwiseSoundVolume*>                   SuppressedEnvironments;                                   // 0x025C(0x000C) (Edit, NeedCtorLink)
	TArray<struct FRTPCSetting>                        RTPCs;                                                    // 0x0268(0x000C) (Edit, NeedCtorLink)
	TArray<struct FOccludedVolume>                     OccludedVolumes;                                          // 0x0274(0x000C) (Edit, NeedCtorLink)
	float                                              LastOcclusionLevel;                                       // 0x0280(0x0004) (Transient)
	struct FMap_Mirror                                 ActiveOccluders;                                          // 0x0284(0x003C) (Const, Native, Transient)
	TArray<struct FPlane>                              FacePlanes;                                               // 0x02C0(0x000C) (Transient, NeedCtorLink)
	TArray<struct FVector>                             SoundSourceLocations;                                     // 0x02CC(0x000C) (Transient, NeedCtorLink)
	TArray<float>                                      CachedListenerDistances;                                  // 0x02D8(0x000C) (Transient, NeedCtorLink)
	class UAkBank*                                     EffectSoundBank;                                          // 0x02E4(0x0004) (Edit)
	float                                              EffectSoundBankLoadDistance;                              // 0x02E8(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WwiseSoundVolume");
		return ptr;
	}


	void RemoveOcclusionProvider(class AActor* Source);
	void SetOcclusionForProvider(class AActor* Source, float Amount);
	float GetOcclusionAmount();
	void UpdateAkComponentPosition(TArray<struct FVector>* ListenerPositions, TArray<struct FRotator>* ListenerOrientations);
	TArray<struct FEnvironmentalEffectInfo> GetEnvironmentalEffectsForLocation(class UAkComponent* GameObjComponent, const struct FVector& ListenerLocation, const struct FVector& ObjectLocation);
	void CalculateFacePlanes();
};


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
