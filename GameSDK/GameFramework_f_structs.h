/*
#############################################################################################
# Borderlands 2 (1.0.35.4705) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#pragma once
#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Function Structs
# ========================================================================================= #
*/

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0] 
struct AGamePlayerController_execClientColorFade_Parms
{
	struct FColor                                      FadeColor;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      FromAlpha;                                        		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ToAlpha;                                          		// 0x0005 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              FadeTime;                                         		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.CallMemLeakCheck
// [0x00040003] ( FUNC_Final )
struct AGamePlayerController_execCallMemLeakCheck_Parms
{
};

// Function GameFramework.GamePlayerController.StopMemLeakChecking
// [0x00020202] ( FUNC_Exec )
struct AGamePlayerController_execStopMemLeakChecking_Parms
{
};

// Function GameFramework.GamePlayerController.DoMemLeakChecking
// [0x00020202] ( FUNC_Exec )
struct AGamePlayerController_execDoMemLeakChecking_Parms
{
	float                                              InTimeBetweenMemLeakChecks;                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] ( FUNC_Event )
struct AGamePlayerController_eventWarmupPause_Parms
{
	unsigned long                                      bDesiredPauseState : 1;                           		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	// struct FColor                                   FadeColor;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	// struct FString                                  MovieName;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002] 
struct AGamePlayerController_execCanUnpauseWarmup_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct AGamePlayerController_execGetCurrentMovie_Parms
{
	struct FString                                     MovieName;                                        		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct AGamePlayerController_eventClientStopMovie_Parms
{
	float                                              DelayInSeconds;                                   		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bAllowMovieToFinish : 1;                          		// 0x0004 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForceStopNonSkippable : 1;                       		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bForceStopLoadingMovie : 1;                       		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
struct AGamePlayerController_eventClientPlayMovie_Parms
{
	struct FString                                     MovieName;                                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                InStartOfRenderingMovieFrame;                     		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InEndOfRenderingMovieFrame;                       		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bRestrictPausing : 1;                             		// 0x0014 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bPlayOnceFromStream : 1;                          		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bOnlyBackButtonSkipsMovie : 1;                    		// 0x001C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] ( FUNC_Final | FUNC_Native )
struct AGamePlayerController_execKeepPlayingLoadingMovie_Parms
{
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] ( FUNC_Final | FUNC_Native )
struct AGamePlayerController_execShowLoadingMovie_Parms
{
	unsigned long                                      bShowMovie : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      bPauseAfterHide : 1;                              		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	float                                              PauseDuration;                                    		// 0x0008 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	float                                              KeepPlayingDuration;                              		// 0x000C (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bOverridePreviousDelays : 1;                      		// 0x0010 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102] 
struct AGamePlayerController_execSetSoundMode_Parms
{
	struct FName                                       InSoundModeName;                                  		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102] 
struct AGamePlayerController_execDoForceFeedbackForScreenShake_Parms
{
	class UCameraShake*                                ShakeData;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	float                                              Scale;                                            		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] ( FUNC_Native )
struct AGamePlayerController_execGetUIPlayerIndex_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002] 
struct UNavMeshGoal_OutOfViewFrom_execRecycle_Parms
{
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002] 
struct UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Parms
{
	class UNavigationHandle*                           NavHandle;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InOutOfViewLocation;                              		// 0x0004 (0x000C) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] ( FUNC_Native )
struct UNavMeshGoal_OutOfViewFrom_execRecycleNative_Parms
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002] 
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Parms
{
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002] 
struct UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Parms
{
	class UNavigationHandle*                           NavHandle;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     InLocation;                                       		// 0x0004 (0x000C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FRotator                                    InRotation;                                       		// 0x0010 (0x000C) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	float                                              InDistanceToCheck;                                		// 0x001C (0x0004) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	TArray< struct FVector >                           InLocationsToCheck;                               		// 0x0020 (0x000C) [0x0000000000400082]              ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] ( FUNC_Native )
struct UGameStateObject_execReset_Parms
{
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGameStateObject_eventPreProcessStream_Parms
{
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] ( FUNC_Native )
struct UGameStatsAggregator_execGetAggregateMappingIDs_Parms
{
	int                                                EventID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AggregateID;                                      		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                TargetAggregateID;                                		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] ( FUNC_Native )
struct UGameStatsAggregator_execReset_Parms
{
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGameStatsAggregator_eventPostProcessStream_Parms
{
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UGameStatsAggregator_eventPreProcessStream_Parms
{
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] ( FUNC_Event )
struct APlayerCollectorGame_eventGetSeamlessTravelActorList_Parms
{
	unsigned long                                      bToEntry : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	TArray< class AActor* >                            ActorList;                                        		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] ( FUNC_Event )
struct APlayerCollectorGame_eventLogin_Parms
{
	struct FString                                     Portal;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Options;                                          		// 0x000C (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FUniqueNetId                                UniqueId;                                         		// 0x0018 (0x0018) [0x0000000000000082]              ( CPF_Const | CPF_Parm )
	struct FString                                     ErrorMessage;                                     		// 0x0030 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class APlayerController*                           ReturnValue;                                      		// 0x003C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif