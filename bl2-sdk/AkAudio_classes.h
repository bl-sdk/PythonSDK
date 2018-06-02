#pragma once
#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: AkAudio_classes.h
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
# Constants
# ========================================================================================= #
*/

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum AkAudio.WwiseSoundGroup.ESoundGroupState
/*enum ESoundGroupState
{
	SG_NoChange                                        = 0,
	SG_Enabled                                         = 1,
	SG_Disabled                                        = 2,
	SG_MAX                                             = 3
};*/

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class AkAudio.ActorFactoryAkAmbientSound
// 0x0004 (0x0080 - 0x007C)
class UActorFactoryAkAmbientSound : public UActorFactory
{
public:
	class UAkEvent*                                    AmbientEvent;                                     		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3523];

		return pClassPointer;
	};
};

//UClass* UActorFactoryAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAmbientSound
// 0x000C (0x0198 - 0x018C)
class AAkAmbientSound : public AKeypoint
{
public:
	class UAkEvent*                                    PlayEvent;                                        		// 0x018C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AWwiseSoundGroup*                            Group;                                            		// 0x0190 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsRegistered : 1;                                		// 0x0194 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3525];

		return pClassPointer;
	};
};

//UClass* AAkAmbientSound::pClassPointer = NULL;

// Class AkAudio.AkAmbientSoundRenderingComponent
// 0x0004 (0x0214 - 0x0210)
class UAkAmbientSoundRenderingComponent : public UPrimitiveComponent
{
public:
	unsigned long                                      bShowOnlyIfSelected : 1;                          		// 0x0210 (0x0004) [0x0000000000044000] [0x00000001] ( CPF_Config | CPF_GlobalConfig )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3527];

		return pClassPointer;
	};
};

//UClass* UAkAmbientSoundRenderingComponent::pClassPointer = NULL;

// Class AkAudio.IAkEnvironmentalEffectProvider
// 0x0000 (0x003C - 0x003C)
class UIAkEnvironmentalEffectProvider : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3529];

		return pClassPointer;
	};

	TArray< struct FEnvironmentalEffectInfo > GetEnvironmentalEffectsForLocation(class UAkComponent* GameObjComponent, struct FVector ListenerLocation, struct FVector ObjectLocation);
};

//UClass* UIAkEnvironmentalEffectProvider::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkEvent
// 0x000C (0x0074 - 0x0068)
class UInterpTrackAkEvent : public UInterpTrack
{
public:
	TArray< struct FAkEventTrackKey >                  AkEvents;                                         		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3531];

		return pClassPointer;
	};
};

UClass* UInterpTrackAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackAkRTPC
// 0x0004 (0x0080 - 0x007C)
class UInterpTrackAkRTPC : public UInterpTrackFloatBase
{
public:
	class UAkRtpc*                                     AkRtpc;                                           		// 0x007C (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3533];

		return pClassPointer;
	};
};

//UClass* UInterpTrackAkRTPC::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkEvent
// 0x0004 (0x0040 - 0x003C)
class UInterpTrackInstAkEvent : public UInterpTrackInst
{
public:
	float                                              LastUpdatePosition;                               		// 0x003C (0x0004) [0x0000000000000000]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3535];

		return pClassPointer;
	};
};

//UClass* UInterpTrackInstAkEvent::pClassPointer = NULL;

// Class AkAudio.InterpTrackInstAkRTPC
// 0x0000 (0x003C - 0x003C)
class UInterpTrackInstAkRTPC : public UInterpTrackInst
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3537];

		return pClassPointer;
	};
};

//UClass* UInterpTrackInstAkRTPC::pClassPointer = NULL;

// Class AkAudio.ISpecialOcclusionAccumulator
// 0x0000 (0x003C - 0x003C)
class UISpecialOcclusionAccumulator : public UInterface
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3539];

		return pClassPointer;
	};

	void RemoveOcclusionProvider(class AActor* Source);
	void SetOcclusionForProvider(class AActor* Source, float Amount);
};

//UClass* UISpecialOcclusionAccumulator::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkClearBanks
// 0x0000 (0x00A4 - 0x00A4)
class USeqAct_AkClearBanks : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3541];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkClearBanks::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkLoadBank
// 0x0000 (0x00B4 - 0x00B4)
class USeqAct_AkLoadBank : public USeqAct_Latent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3543];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkLoadBank::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostEvent
// 0x0014 (0x00C8 - 0x00B4)
class USeqAct_AkPostEvent : public USeqAct_Latent
{
public:
	TArray< struct FAkPlayingInfo >                    ActivePlayingIds;                                 		// 0x00B4 (0x000C) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	class UAkEvent*                                    Event;                                            		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bPlayOneInstanceFromAllLocations : 1;             		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bTreatAllLocationsAsOneSource : 1;                		// 0x00C4 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3545];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkPostEvent::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkPostTrigger
// 0x0004 (0x00A8 - 0x00A4)
class USeqAct_AkPostTrigger : public USequenceAction
{
public:
	class UAkTrigger*                                  AkTrigger;                                        		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3547];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkPostTrigger::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetRTPCValue
// 0x000C (0x00C0 - 0x00B4)
class USeqAct_AkSetRTPCValue : public USeqAct_Latent
{
public:
	class UAkRtpc*                                     AkRtpc;                                           		// 0x00B4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x00B8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      Running : 1;                                      		// 0x00BC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3549];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkSetRTPCValue::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetState
// 0x0004 (0x00A8 - 0x00A4)
class USeqAct_AkSetState : public USequenceAction
{
public:
	class UAkState*                                    State;                                            		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3551];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkSetState::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkSetSwitch
// 0x0004 (0x00A8 - 0x00A4)
class USeqAct_AkSetSwitch : public USequenceAction
{
public:
	class UAkSwitch*                                   AkSwitch;                                         		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3553];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkSetSwitch::pClassPointer = NULL;

// Class AkAudio.SeqAct_AkStopAll
// 0x0000 (0x00A4 - 0x00A4)
class USeqAct_AkStopAll : public USequenceAction
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3555];

		return pClassPointer;
	};
};

//UClass* USeqAct_AkStopAll::pClassPointer = NULL;

// Class AkAudio.WwiseSoundGroup
// 0x0050 (0x01DC - 0x018C)
class AWwiseSoundGroup : public AKeypoint
{
public:
	struct FPointer                                    VfTable_IISpecialOcclusionProvider;               		// 0x018C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IISpecialOcclusionAccumulator;            		// 0x0190 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< class AActor* >                            Members;                                          		// 0x0194 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	struct FMap_Mirror                                 ActiveOccluders;                                  		// 0x01A0 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3557];

		return pClassPointer;
	};

	void RemoveOcclusionProvider(class AActor* Source);
	void SetOcclusionForProvider(class AActor* Source, float Amount);
	float GetOcclusionAmount();
	void SetAkSwitchObject(class UAkSwitch* Switch);
	void SetRTPCObjectValue(class UAkRtpc* InRtpc, float TargetValue);
};

//UClass* AWwiseSoundGroup::pClassPointer = NULL;

// Class AkAudio.WwiseSoundGroupRenderingComponent
// 0x0000 (0x0210 - 0x0210)
class UWwiseSoundGroupRenderingComponent : public UPrimitiveComponent
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3559];

		return pClassPointer;
	};
};

//UClass* UWwiseSoundGroupRenderingComponent::pClassPointer = NULL;

// Class AkAudio.WwiseSoundVolume
// 0x0130 (0x02EC - 0x01BC)
class AWwiseSoundVolume : public AVolume
{
public:
	struct FPointer                                    VfTable_IIAkEnvironmentalEffectProvider;          		// 0x01BC (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IISpecialOcclusionProvider;               		// 0x01C0 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FPointer                                    VfTable_IISpecialOcclusionAccumulator;            		// 0x01C4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UAkEvent*                                    akPlayEvent;                                      		// 0x01C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bAutoPlay : 1;                                    		// 0x01CC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bAutomaticallySetPlayAndStopDistances : 1;        		// 0x01CC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bPlaySoundsFromAllSubBrushes : 1;                 		// 0x01CC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bEffectBankLoaded : 1;                            		// 0x01CC (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	float                                              AutoPlayDistance;                                 		// 0x01D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AutoStopDistance;                                 		// 0x01D4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AWwiseSoundVolume*                           ParentVolume;                                     		// 0x01D8 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class AWwiseSoundVolume* >                 SubBrushes;                                       		// 0x01DC (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              EnvironmentFadeDistance;                          		// 0x01E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class AWwiseSoundGroup*                            Group;                                            		// 0x01EC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UAkComponent*                                AkComponent;                                      		// 0x01F0 (0x0004) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	struct FVector                                     Midpoint;                                         		// 0x01F4 (0x000C) [0x0000000000000002]              ( CPF_Const )
	float                                              FarthestVertexDistance;                           		// 0x0200 (0x0004) [0x0000000000000002]              ( CPF_Const )
	float                                              LastLocationUpdateTime;                           		// 0x0204 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DistancePerAdditionalSecondBetweenUpdates;        		// 0x0208 (0x0004) [0x0000000000044000]              ( CPF_Config | CPF_GlobalConfig )
	float                                              LastEnvironmentStrength;                          		// 0x020C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              LastEnvironmentSuppressionModifier;               		// 0x0210 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMap_Mirror                                 EnvironmentSuppressors;                           		// 0x0214 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FEnvironmentalEffectSetting >       EnvironmentalEffects;                             		// 0x0250 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class AWwiseSoundVolume* >                 SuppressedEnvironments;                           		// 0x025C (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FRTPCSetting >                      RTPCs;                                            		// 0x0268 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FOccludedVolume >                   OccludedVolumes;                                  		// 0x0274 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              LastOcclusionLevel;                               		// 0x0280 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FMap_Mirror                                 ActiveOccluders;                                  		// 0x0284 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FPlane >                            FacePlanes;                                       		// 0x02C0 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FVector >                           SoundSourceLocations;                             		// 0x02CC (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< float >                                    CachedListenerDistances;                          		// 0x02D8 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class UAkBank*                                     EffectSoundBank;                                  		// 0x02E4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EffectSoundBankLoadDistance;                      		// 0x02E8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3561];

		return pClassPointer;
	};

	void RemoveOcclusionProvider(class AActor* Source);
	void SetOcclusionForProvider(class AActor* Source, float Amount);
	float GetOcclusionAmount();
	void UpdateAkComponentPosition(TArray< struct FVector >* ListenerPositions, TArray< struct FRotator >* ListenerOrientations);
	TArray< struct FEnvironmentalEffectInfo > GetEnvironmentalEffectsForLocation(class UAkComponent* GameObjComponent, struct FVector ListenerLocation, struct FVector ObjectLocation);
	void CalculateFacePlanes();
};

//UClass* AWwiseSoundVolume::pClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack ( pop )
#endif