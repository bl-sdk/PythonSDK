#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GameFramework.GamePlayerController.ClientColorFade
struct AGamePlayerController_ClientColorFade_Params
{
	struct FColor                                      FadeColor;                                                // (Parm)
	unsigned char                                      FromAlpha;                                                // (Parm)
	unsigned char                                      ToAlpha;                                                  // (Parm)
	float                                              FadeTime;                                                 // (Parm)
};

// Function GameFramework.GamePlayerController.CallMemLeakCheck
struct AGamePlayerController_CallMemLeakCheck_Params
{
};

// Function GameFramework.GamePlayerController.StopMemLeakChecking
struct AGamePlayerController_StopMemLeakChecking_Params
{
};

// Function GameFramework.GamePlayerController.DoMemLeakChecking
struct AGamePlayerController_DoMemLeakChecking_Params
{
	float                                              InTimeBetweenMemLeakChecks;                               // (Parm)
};

// Function GameFramework.GamePlayerController.WarmupPause
struct AGamePlayerController_WarmupPause_Params
{
	unsigned long                                      bDesiredPauseState : 1;                                       // (Parm)
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
struct AGamePlayerController_CanUnpauseWarmup_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
struct AGamePlayerController_GetCurrentMovie_Params
{
	struct FString                                     MovieName;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function GameFramework.GamePlayerController.ClientStopMovie
struct AGamePlayerController_ClientStopMovie_Params
{
	float                                              DelayInSeconds;                                           // (Parm)
	unsigned long                                      bAllowMovieToFinish : 1;                                      // (Parm)
	unsigned long                                      bForceStopNonSkippable : 1;                                   // (Parm)
	unsigned long                                      bForceStopLoadingMovie : 1;                                   // (Parm)
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
struct AGamePlayerController_ClientPlayMovie_Params
{
	struct FString                                     MovieName;                                                // (Parm, NeedCtorLink)
	int                                                InStartOfRenderingMovieFrame;                             // (Parm)
	int                                                InEndOfRenderingMovieFrame;                               // (Parm)
	unsigned long                                      bRestrictPausing : 1;                                         // (Parm)
	unsigned long                                      bPlayOnceFromStream : 1;                                      // (Parm)
	unsigned long                                      bOnlyBackButtonSkipsMovie : 1;                                // (Parm)
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
struct AGamePlayerController_KeepPlayingLoadingMovie_Params
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
struct AGamePlayerController_ShowLoadingMovie_Params
{
	unsigned long                                      bShowMovie : 1;                                               // (Parm)
	unsigned long                                      bPauseAfterHide : 1;                                          // (OptionalParm, Parm)
	float                                              PauseDuration;                                            // (OptionalParm, Parm)
	float                                              KeepPlayingDuration;                                      // (OptionalParm, Parm)
	unsigned long                                      bOverridePreviousDelays : 1;                                  // (OptionalParm, Parm)
};

// Function GameFramework.GamePlayerController.SetSoundMode
struct AGamePlayerController_SetSoundMode_Params
{
	struct FName                                       InSoundModeName;                                          // (Parm)
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
struct AGamePlayerController_DoForceFeedbackForScreenShake_Params
{
	class UCameraShake*                                ShakeData;                                                // (Parm)
	float                                              Scale;                                                    // (Parm)
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
struct AGamePlayerController_GetUIPlayerIndex_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
struct UNavMeshGoal_OutOfViewFrom_Recycle_Params
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
struct UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (Parm)
	struct FVector                                     InOutOfViewLocation;                                      // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
struct UNavMeshGoal_OutOfViewFrom_RecycleNative_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params
{
	class UNavigationHandle*                           NavHandle;                                                // (Parm)
	struct FVector                                     InLocation;                                               // (Const, Parm)
	struct FRotator                                    InRotation;                                               // (Const, Parm)
	float                                              InDistanceToCheck;                                        // (Const, Parm)
	TArray<struct FVector>                             InLocationsToCheck;                                       // (Const, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameStateObject.Reset
struct UGameStateObject_Reset_Params
{
};

// Function GameFramework.GameStateObject.PreProcessStream
struct UGameStateObject_PreProcessStream_Params
{
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
struct UGameStatsAggregator_GetAggregateMappingIDs_Params
{
	int                                                EventID;                                                  // (Parm)
	int                                                AggregateID;                                              // (Parm, OutParm)
	int                                                TargetAggregateID;                                        // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function GameFramework.GameStatsAggregator.Reset
struct UGameStatsAggregator_Reset_Params
{
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
struct UGameStatsAggregator_PostProcessStream_Params
{
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
struct UGameStatsAggregator_PreProcessStream_Params
{
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
struct APlayerCollectorGame_GetSeamlessTravelActorList_Params
{
	unsigned long                                      bToEntry : 1;                                                 // (Parm)
	TArray<class AActor*>                              ActorList;                                                // (Parm, OutParm, NeedCtorLink)
};

// Function GameFramework.PlayerCollectorGame.Login
struct APlayerCollectorGame_Login_Params
{
	struct FString                                     Portal;                                                   // (Parm, NeedCtorLink)
	struct FString                                     Options;                                                  // (Parm, NeedCtorLink)
	struct FUniqueNetId                                UniqueId;                                                 // (Const, Parm)
	struct FString                                     ErrorMessage;                                             // (Parm, OutParm, NeedCtorLink)
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
