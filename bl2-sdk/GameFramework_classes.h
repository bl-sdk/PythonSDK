#pragma once
#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_classes.h
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

#define CONST_GAMEEVENT_AGGREGATED_DATA                          10000
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_TIMEALIVE              10001
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_KILLS                  10002
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_DEATHS                 10003
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_MATCH_WON              10004
#define CONST_GAMEEVENT_AGGREGATED_PLAYER_ROUND_WON              10005
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_NORMALKILL       10006
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASNORMALKILL 10007
#define CONST_GAMEEVENT_AGGREGATED_TEAM_KILLS                    10100
#define CONST_GAMEEVENT_AGGREGATED_TEAM_DEATHS                   10101
#define CONST_GAMEEVENT_AGGREGATED_TEAM_GAME_SCORE               10102
#define CONST_GAMEEVENT_AGGREGATED_TEAM_MATCH_WON                10103
#define CONST_GAMEEVENT_AGGREGATED_TEAM_ROUND_WON                10104
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_KILLS                  10200
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEATHS                 10201
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_WEAPON_DAMAGE    10202
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEE_DAMAGE     10203
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WEAPON_DAMAGE 10204
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_MELEE_DAMAGE  10205
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_DEALT_MELEEHITS        10206
#define CONST_GAMEEVENT_AGGREGATED_DAMAGE_RECEIVED_WASMELEEHIT   10207
#define CONST_GAMEEVENT_AGGREGATED_WEAPON_FIRED                  10300
#define CONST_GAMEEVENT_AGGREGATED_PAWN_SPAWN                    10400
#define CONST_GAMEEVENT_AGGREGATED_GAME_SPECIFIC                 11000
#define CONST_LOADING_MOVIE                                      "LoadingMovie"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GameFramework.GameSkelCtrl_Recoil.ERecoilStart
/*enum ERecoilStart
{
	ERS_Zero                                           = 0,
	ERS_Random                                         = 1,
	ERS_MAX                                            = 2
};*/

// Enum GameFramework.GameStateObject.GameSessionType
/*enum GameSessionType
{
	GT_SessionInvalid                                  = 0,
	GT_SinglePlayer                                    = 1,
	GT_Coop                                            = 2,
	GT_Multiplayer                                     = 3,
	GT_MAX                                             = 4
};*/

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// 0x0000 (0x0690 - 0x0690)
class AGamePawn : public APawn {};

// 0x000C (0x08FC - 0x08F0)
class AGamePlayerController : public APlayerController
{
public:
	struct FName                                       CurrentSoundMode;                                 		// 0x08F0 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bIsWarmupPaused : 1;                              		// 0x08F8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

public:
	void ClientColorFade(struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime);
	void CallMemLeakCheck();
	void StopMemLeakChecking();
	void DoMemLeakChecking(float InTimeBetweenMemLeakChecks);
	void eventWarmupPause(unsigned long bDesiredPauseState);
	bool CanUnpauseWarmup();
	void GetCurrentMovie(struct FString* MovieName);
	void eventClientStopMovie(float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie);
	void eventClientPlayMovie(struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, unsigned long bRestrictPausing, unsigned long bPlayOnceFromStream, unsigned long bOnlyBackButtonSkipsMovie);
	void KeepPlayingLoadingMovie();
	void ShowLoadingMovie(unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays);
	void SetSoundMode(struct FName InSoundModeName);
	void DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale);
	int GetUIPlayerIndex();
};

// 0x0000 (0x003C - 0x003C)
class UGameTypes : public UObject {};

// 0x0014 (0x0064 - 0x0050)
class UNavMeshGoal_OutOfViewFrom : public UNavMeshPathGoalEvaluator
{
public:
	struct FPointer                                    GoalPoly;                                         		// 0x0050 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FVector                                     OutOfViewLocation;                                		// 0x0054 (0x000C) [0x0000000000000000]
	unsigned long                                      bShowDebug : 1;                                   		// 0x0060 (0x0004) [0x0000000000000000] [0x00000001]

public:
	void Recycle();
	bool MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation);
	void RecycleNative();
};

// 0x0028 (0x0078 - 0x0050)
class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations : public UNavMeshPathConstraint
{
public:
	struct FVector                                     Location;                                         		// 0x0050 (0x000C) [0x0000000000002000]              ( CPF_Transient )
	struct FVector                                     Rotation;                                         		// 0x005C (0x000C) [0x0000000000002000]              ( CPF_Transient )
	float                                              DistanceToCheck;                                  		// 0x0068 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FVector >                           LocationsToCheck;                                 		// 0x006C (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

public:
	void Recycle();
	bool BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, struct FVector InLocation, struct FRotator InRotation, float InDistanceToCheck, TArray< struct FVector > InLocationsToCheck);
};

// 0x0014 (0x00C8 - 0x00B4)
class USeqAct_ControlGameMovie : public USeqAct_Latent
{
public:
	struct FString                                     MovieName;                                        		// 0x00B4 (0x000C) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                StartOfRenderingMovieFrame;                       		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                EndOfRenderingMovieFrame;                         		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// 0x0028 (0x00CC - 0x00A4)
class USeqAct_Deproject : public USequenceAction
{
public:
	float                                              ScreenX;                                          		// 0x00A4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScreenY;                                          		// 0x00A8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              TraceDistance;                                    		// 0x00AC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     HitObject;                                        		// 0x00B0 (0x0004) [0x0000000000000000]
	struct FVector                                     HitLocation;                                      		// 0x00B4 (0x000C) [0x0000000000000000]
	struct FVector                                     HitNormal;                                        		// 0x00C0 (0x000C) [0x0000000000000000]
};

// 0x000C (0x00B0 - 0x00A4)
class USeqAct_ModifyProperty : public USequenceAction
{
public:
	TArray< struct FPropertyInfo >                     Properties;                                       		// 0x00A4 (0x000C) [0x0000000004400001]              ( CPF_Edit | CPF_NeedCtorLink | CPF_EditInline )
};

// 0x007C (0x0118 - 0x009C)
class UGameSkelCtrl_Recoil : public USkelControlBase
{
public:
	unsigned long                                      bBoneSpaceRecoil : 1;                             		// 0x009C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bPlayRecoil : 1;                                  		// 0x009C (0x0004) [0x0000000000002001] [0x00000002] ( CPF_Edit | CPF_Transient )
	unsigned long                                      bOldPlayRecoil : 1;                               		// 0x009C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	unsigned long                                      bApplyControl : 1;                                		// 0x009C (0x0004) [0x0000000000002000] [0x00000008] ( CPF_Transient )
	struct FRecoilDef                                  Recoil;                                           		// 0x00A0 (0x0070) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   Aim;                                              		// 0x0110 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// 0x0028 (0x0080 - 0x0058)
class UGameStateObject : public UGameplayEventsHandler
{
public:
	struct FArray_Mirror                               TeamStates;                                       		// 0x0058 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FArray_Mirror                               PlayerStates;                                     		// 0x0064 (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned char                                      SessionType;                                      		// 0x0070 (0x0001) [0x0000000000000000]
	unsigned long                                      bIsMatchStarted : 1;                              		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      bIsRoundStarted : 1;                              		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002]
	int                                                RoundNumber;                                      		// 0x0078 (0x0004) [0x0000000000000000]
	int                                                MaxRoundNumber;                                   		// 0x007C (0x0004) [0x0000000000000000]

public:
	void Reset();
	void eventPreProcessStream();
};

// 0x01D8 (0x0230 - 0x0058)
class UGameStatsAggregator : public UGameplayEventsHandler
{
public:
	class UGameStateObject*                            GameState;                                        		// 0x0058 (0x0004) [0x0000000000000000]
	TArray< struct FAggregateEventMapping >            AggregatesList;                                   		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMap_Mirror                                 AggregateEventsMapping;                           		// 0x0068 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FGameplayEventMetaData >            AggregateEvents;                                  		// 0x00A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      AggregatesFound;                                  		// 0x00B0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FGameEvents                                 AllGameEvents;                                    		// 0x00BC (0x003C) [0x0000000000000000]
	TArray< struct FTeamEvents >                       AllTeamEvents;                                    		// 0x00F8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FPlayerEvents >                     AllPlayerEvents;                                  		// 0x0104 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FWeaponEvents                               AllWeaponEvents;                                  		// 0x0110 (0x0048) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FProjectileEvents                           AllProjectileEvents;                              		// 0x0158 (0x0048) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FPawnEvents                                 AllPawnEvents;                                    		// 0x01A0 (0x0048) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FDamageEvents                               AllDamageEvents;                                  		// 0x01E8 (0x0048) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

public:
	bool GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID);
	void Reset();
	void eventPostProcessStream();
	void eventPreProcessStream();
};

// 0x0010 (0x004C - 0x003C)
class UGameWaveForms : public UObject
{
public:
	class UForceFeedbackWaveform*                      CameraShakeMediumShort;                           		// 0x003C (0x0004) [0x0000000000000000]
	class UForceFeedbackWaveform*                      CameraShakeMediumLong;                            		// 0x0040 (0x0004) [0x0000000000000000]
	class UForceFeedbackWaveform*                      CameraShakeBigShort;                              		// 0x0044 (0x0004) [0x0000000000000000]
	class UForceFeedbackWaveform*                      CameraShakeBigLong;                               		// 0x0048 (0x0004) [0x0000000000000000]
};

// 0x0010 (0x0340 - 0x0330)
class APlayerCollectorGame : public AGameInfo
{
public:
	int                                                NumberOfClientsToWaitFor;                         		// 0x0330 (0x0004) [0x0000000000000000]
	struct FString                                     URLToLoad;                                        		// 0x0334 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

public:
	void eventGetSeamlessTravelActorList(unsigned long bToEntry, TArray< class AActor* >* ActorList);
	class APlayerController* eventLogin(struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage);
};

// 0x0004 (0x0040 - 0x003C)
class UPMESTG_LeaveADecalBase : public UParticleModuleEventSendToGame
{
public:
	class UClass*                                      PhysicalMaterialPropertyClass;                    		// 0x003C (0x0004) [0x0000000000000000]
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif