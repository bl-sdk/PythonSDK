#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GameFramework.GamePawn
// 0x0000 (0x0694 - 0x0694)
class AGamePawn : public APawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GamePawn");
		return ptr;
	}

};


// Class GameFramework.GamePlayerController
// 0x000C (0x08F0 - 0x08FC)
class AGamePlayerController : public APlayerController
{
public:
	struct FName                                       CurrentSoundMode;                                         // 0x08F0(0x0008) (Transient)
	unsigned long                                      bIsWarmupPaused : 1;                                      // 0x08F8(0x0004) (Transient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GamePlayerController");
		return ptr;
	}


	void ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime);
	void CallMemLeakCheck();
	void StopMemLeakChecking();
	void DoMemLeakChecking(float InTimeBetweenMemLeakChecks);
	void WarmupPause(bool bDesiredPauseState);
	bool CanUnpauseWarmup();
	void GetCurrentMovie(struct FString* MovieName);
	void ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie);
	void ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie);
	static void KeepPlayingLoadingMovie();
	static void ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays);
	void SetSoundMode(const struct FName& InSoundModeName);
	void DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale);
	int GetUIPlayerIndex();
};


// Class GameFramework.GameTypes
// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GameTypes");
		return ptr;
	}

};


// Class GameFramework.NavMeshGoal_OutOfViewFrom
// 0x0014 (0x0050 - 0x0064)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                                 // 0x0050(0x0004) (Native)
	struct FVector                                     OutOfViewLocation;                                        // 0x0054(0x000C)
	unsigned long                                      bShowDebug : 1;                                           // 0x0060(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("NavMeshGoal_OutOfViewFrom");
		return ptr;
	}


	void Recycle();
	static bool MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation);
	void RecycleNative();
};


// Class GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations
// 0x0028 (0x0050 - 0x0078)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                                 // 0x0050(0x000C) (Transient)
	struct FVector                                     Rotation;                                                 // 0x005C(0x000C) (Transient)
	float                                              DistanceToCheck;                                          // 0x0068(0x0004) (Transient)
	TArray<struct FVector>                             LocationsToCheck;                                         // 0x006C(0x000C) (Transient, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations");
		return ptr;
	}


	void Recycle();
	static bool BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck);
};


// Class GameFramework.SeqAct_ControlGameMovie
// 0x0014 (0x00B4 - 0x00C8)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                                // 0x00B4(0x000C) (Edit, NeedCtorLink)
	int                                                StartOfRenderingMovieFrame;                               // 0x00C0(0x0004) (Edit)
	int                                                EndOfRenderingMovieFrame;                                 // 0x00C4(0x0004) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_ControlGameMovie");
		return ptr;
	}

};


// Class GameFramework.SeqAct_Deproject
// 0x0028 (0x00A4 - 0x00CC)
class USeqAct_Deproject : public USequenceAction
{
public:
	float                                              ScreenX;                                                  // 0x00A4(0x0004) (Edit)
	float                                              ScreenY;                                                  // 0x00A8(0x0004) (Edit)
	float                                              TraceDistance;                                            // 0x00AC(0x0004) (Edit)
	class UObject*                                     HitObject;                                                // 0x00B0(0x0004)
	struct FVector                                     HitLocation;                                              // 0x00B4(0x000C)
	struct FVector                                     HitNormal;                                                // 0x00C0(0x000C)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_Deproject");
		return ptr;
	}

};


// Class GameFramework.SeqAct_ModifyProperty
// 0x000C (0x00A4 - 0x00B0)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray<struct FPropertyInfo>                       Properties;                                               // 0x00A4(0x000C) (Edit, NeedCtorLink, EditInline)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("SeqAct_ModifyProperty");
		return ptr;
	}

};


// Class GameFramework.GameSkelCtrl_Recoil
// 0x007C (0x009C - 0x0118)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                                     // 0x009C(0x0004) (Edit)
	unsigned long                                      bPlayRecoil : 1;                                          // 0x009C(0x0004) (Edit, Transient)
	unsigned long                                      bOldPlayRecoil : 1;                                       // 0x009C(0x0004) (Transient)
	unsigned long                                      bApplyControl : 1;                                        // 0x009C(0x0004) (Transient)
	struct FRecoilDef                                  Recoil;                                                   // 0x00A0(0x0070) (Edit)
	struct FVector2D                                   Aim;                                                      // 0x0110(0x0008) (Edit)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GameSkelCtrl_Recoil");
		return ptr;
	}

};


// Class GameFramework.GameStateObject
// 0x0028 (0x0058 - 0x0080)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	struct FArray_Mirror                               TeamStates;                                               // 0x0058(0x000C) (Const, Native)
	struct FArray_Mirror                               PlayerStates;                                             // 0x0064(0x000C) (Const, Native)
	unsigned char                                      SessionType;                                              // 0x0070(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0071(0x0003) MISSED OFFSET
	unsigned long                                      bIsMatchStarted : 1;                                      // 0x0074(0x0004)
	unsigned long                                      bIsRoundStarted : 1;                                      // 0x0074(0x0004)
	int                                                RoundNumber;                                              // 0x0078(0x0004)
	int                                                MaxRoundNumber;                                           // 0x007C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GameStateObject");
		return ptr;
	}


	void Reset();
	void PreProcessStream();
};


// Class GameFramework.GameStatsAggregator
// 0x01D8 (0x0058 - 0x0230)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	class UGameStateObject*                            GameState;                                                // 0x0058(0x0004)
	TArray<struct FAggregateEventMapping>              AggregatesList;                                           // 0x005C(0x000C) (NeedCtorLink)
	struct FMap_Mirror                                 AggregateEventsMapping;                                   // 0x0068(0x003C) (Const, Native, Transient)
	TArray<struct FGameplayEventMetaData>              AggregateEvents;                                          // 0x00A4(0x000C) (NeedCtorLink)
	TArray<int>                                        AggregatesFound;                                          // 0x00B0(0x000C) (Const, NeedCtorLink)
	struct FGameEvents                                 AllGameEvents;                                            // 0x00BC(0x003C)
	TArray<struct FTeamEvents>                         AllTeamEvents;                                            // 0x00F8(0x000C) (Const, NeedCtorLink)
	TArray<struct FPlayerEvents>                       AllPlayerEvents;                                          // 0x0104(0x000C) (Const, NeedCtorLink)
	struct FWeaponEvents                               AllWeaponEvents;                                          // 0x0110(0x0048) (Const, NeedCtorLink)
	struct FProjectileEvents                           AllProjectileEvents;                                      // 0x0158(0x0048) (Const, NeedCtorLink)
	struct FPawnEvents                                 AllPawnEvents;                                            // 0x01A0(0x0048) (Const, NeedCtorLink)
	struct FDamageEvents                               AllDamageEvents;                                          // 0x01E8(0x0048) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GameStatsAggregator");
		return ptr;
	}


	bool GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID);
	void Reset();
	void PostProcessStream();
	void PreProcessStream();
};


// Class GameFramework.GameWaveForms
// 0x0010 (0x003C - 0x004C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                                   // 0x003C(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                                    // 0x0040(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                                      // 0x0044(0x0004)
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                                       // 0x0048(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("GameWaveForms");
		return ptr;
	}

};


// Class GameFramework.PlayerCollectorGame
// 0x0010 (0x0330 - 0x0340)
class APlayerCollectorGame : public AGameInfo
{
public:
	int                                                NumberOfClientsToWaitFor;                                 // 0x0330(0x0004)
	struct FString                                     URLToLoad;                                                // 0x0334(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PlayerCollectorGame");
		return ptr;
	}


	void GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList);
	class APlayerController* Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage);
};


// Class GameFramework.PMESTG_LeaveADecalBase
// 0x0004 (0x003C - 0x0040)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                            // 0x003C(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PMESTG_LeaveADecalBase");
		return ptr;
	}

};


#ifdef _MSC_VER
#pragma pack(pop)
#endif
