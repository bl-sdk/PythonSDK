#pragma once
#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GameFramework_functions.h
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
# Global Static Class Pointers
# ========================================================================================= #
*/

UClass* AGamePawn::pClassPointer = NULL;
UClass* AGamePlayerController::pClassPointer = NULL;
UClass* UGameTypes::pClassPointer = NULL;
UClass* UNavMeshGoal_OutOfViewFrom::pClassPointer = NULL;
UClass* UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::pClassPointer = NULL;
UClass* USeqAct_ControlGameMovie::pClassPointer = NULL;
UClass* USeqAct_Deproject::pClassPointer = NULL;
UClass* USeqAct_ModifyProperty::pClassPointer = NULL;
UClass* UGameSkelCtrl_Recoil::pClassPointer = NULL;
UClass* UGameStateObject::pClassPointer = NULL;
UClass* UGameStatsAggregator::pClassPointer = NULL;
UClass* UGameWaveForms::pClassPointer = NULL;
UClass* APlayerCollectorGame::pClassPointer = NULL;
UClass* UPMESTG_LeaveADecalBase::pClassPointer = NULL;

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function GameFramework.GamePlayerController.ClientColorFade
// [0x010201C0]
// Parameters infos:
// struct FColor                  FadeColor                      ( CPF_Parm )
// unsigned char                  FromAlpha                      ( CPF_Parm )
// unsigned char                  ToAlpha                        ( CPF_Parm )
// float                          FadeTime                       ( CPF_Parm )

void AGamePlayerController::ClientColorFade(struct FColor FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime)
{
	static UFunction* pFnClientColorFade = NULL;

	if (!pFnClientColorFade)
		pFnClientColorFade = (UFunction*)UObject::GObjObjects()->Data[38462];

	AGamePlayerController_execClientColorFade_Parms ClientColorFade_Parms;
	memcpy(&ClientColorFade_Parms.FadeColor, &FadeColor, 0x4);
	ClientColorFade_Parms.FromAlpha = FromAlpha;
	ClientColorFade_Parms.ToAlpha = ToAlpha;
	ClientColorFade_Parms.FadeTime = FadeTime;

	this->ProcessEvent(pFnClientColorFade, &ClientColorFade_Parms, NULL);
};

// Function GameFramework.GamePlayerController.CallMemLeakCheck
// [0x00040003] ( FUNC_Final )
// Parameters infos:

void AGamePlayerController::CallMemLeakCheck()
{
	static UFunction* pFnCallMemLeakCheck = NULL;

	if (!pFnCallMemLeakCheck)
		pFnCallMemLeakCheck = (UFunction*)UObject::GObjObjects()->Data[38461];

	AGamePlayerController_execCallMemLeakCheck_Parms CallMemLeakCheck_Parms;

	this->ProcessEvent(pFnCallMemLeakCheck, &CallMemLeakCheck_Parms, NULL);
};

// Function GameFramework.GamePlayerController.StopMemLeakChecking
// [0x00020202] ( FUNC_Exec )
// Parameters infos:

void AGamePlayerController::StopMemLeakChecking()
{
	static UFunction* pFnStopMemLeakChecking = NULL;

	if (!pFnStopMemLeakChecking)
		pFnStopMemLeakChecking = (UFunction*)UObject::GObjObjects()->Data[38460];

	AGamePlayerController_execStopMemLeakChecking_Parms StopMemLeakChecking_Parms;

	this->ProcessEvent(pFnStopMemLeakChecking, &StopMemLeakChecking_Parms, NULL);
};

// Function GameFramework.GamePlayerController.DoMemLeakChecking
// [0x00020202] ( FUNC_Exec )
// Parameters infos:
// float                          InTimeBetweenMemLeakChecks     ( CPF_Parm )

void AGamePlayerController::DoMemLeakChecking(float InTimeBetweenMemLeakChecks)
{
	static UFunction* pFnDoMemLeakChecking = NULL;

	if (!pFnDoMemLeakChecking)
		pFnDoMemLeakChecking = (UFunction*)UObject::GObjObjects()->Data[38458];

	AGamePlayerController_execDoMemLeakChecking_Parms DoMemLeakChecking_Parms;
	DoMemLeakChecking_Parms.InTimeBetweenMemLeakChecks = InTimeBetweenMemLeakChecks;

	this->ProcessEvent(pFnDoMemLeakChecking, &DoMemLeakChecking_Parms, NULL);
};

// Function GameFramework.GamePlayerController.WarmupPause
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bDesiredPauseState             ( CPF_Parm )

void AGamePlayerController::eventWarmupPause(unsigned long bDesiredPauseState)
{
	static UFunction* pFnWarmupPause = NULL;

	if (!pFnWarmupPause)
		pFnWarmupPause = (UFunction*)UObject::GObjObjects()->Data[38454];

	AGamePlayerController_eventWarmupPause_Parms WarmupPause_Parms;
	WarmupPause_Parms.bDesiredPauseState = bDesiredPauseState;

	this->ProcessEvent(pFnWarmupPause, &WarmupPause_Parms, NULL);
};

// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AGamePlayerController::CanUnpauseWarmup()
{
	static UFunction* pFnCanUnpauseWarmup = NULL;

	if (!pFnCanUnpauseWarmup)
		pFnCanUnpauseWarmup = (UFunction*)UObject::GObjObjects()->Data[38452];

	AGamePlayerController_execCanUnpauseWarmup_Parms CanUnpauseWarmup_Parms;

	this->ProcessEvent(pFnCanUnpauseWarmup, &CanUnpauseWarmup_Parms, NULL);

	return CanUnpauseWarmup_Parms.ReturnValue;
};

// Function GameFramework.GamePlayerController.GetCurrentMovie
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void AGamePlayerController::GetCurrentMovie(struct FString* MovieName)
{
	static UFunction* pFnGetCurrentMovie = NULL;

	if (!pFnGetCurrentMovie)
		pFnGetCurrentMovie = (UFunction*)UObject::GObjObjects()->Data[38450];

	AGamePlayerController_execGetCurrentMovie_Parms GetCurrentMovie_Parms;

	pFnGetCurrentMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetCurrentMovie, &GetCurrentMovie_Parms, NULL);

	pFnGetCurrentMovie->FunctionFlags |= 0x400;

	if (MovieName)
		memcpy(MovieName, &GetCurrentMovie_Parms.MovieName, 0xC);
};

// Function GameFramework.GamePlayerController.ClientStopMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// float                          DelayInSeconds                 ( CPF_Parm )
// unsigned long                  bAllowMovieToFinish            ( CPF_Parm )
// unsigned long                  bForceStopNonSkippable         ( CPF_Parm )
// unsigned long                  bForceStopLoadingMovie         ( CPF_Parm )

void AGamePlayerController::eventClientStopMovie(float DelayInSeconds, unsigned long bAllowMovieToFinish, unsigned long bForceStopNonSkippable, unsigned long bForceStopLoadingMovie)
{
	static UFunction* pFnClientStopMovie = NULL;

	if (!pFnClientStopMovie)
		pFnClientStopMovie = (UFunction*)UObject::GObjObjects()->Data[38445];

	AGamePlayerController_eventClientStopMovie_Parms ClientStopMovie_Parms;
	ClientStopMovie_Parms.DelayInSeconds = DelayInSeconds;
	ClientStopMovie_Parms.bAllowMovieToFinish = bAllowMovieToFinish;
	ClientStopMovie_Parms.bForceStopNonSkippable = bForceStopNonSkippable;
	ClientStopMovie_Parms.bForceStopLoadingMovie = bForceStopLoadingMovie;

	pFnClientStopMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClientStopMovie, &ClientStopMovie_Parms, NULL);

	pFnClientStopMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ClientPlayMovie
// [0x01020DC1] ( FUNC_Final | FUNC_Event | FUNC_Native )
// Parameters infos:
// struct FString                 MovieName                      ( CPF_Parm | CPF_NeedCtorLink )
// int                            InStartOfRenderingMovieFrame   ( CPF_Parm )
// int                            InEndOfRenderingMovieFrame     ( CPF_Parm )
// unsigned long                  bRestrictPausing               ( CPF_Parm )
// unsigned long                  bPlayOnceFromStream            ( CPF_Parm )
// unsigned long                  bOnlyBackButtonSkipsMovie      ( CPF_Parm )

void AGamePlayerController::eventClientPlayMovie(struct FString MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, unsigned long bRestrictPausing, unsigned long bPlayOnceFromStream, unsigned long bOnlyBackButtonSkipsMovie)
{
	static UFunction* pFnClientPlayMovie = NULL;

	if (!pFnClientPlayMovie)
		pFnClientPlayMovie = (UFunction*)UObject::GObjObjects()->Data[38438];

	AGamePlayerController_eventClientPlayMovie_Parms ClientPlayMovie_Parms;
	memcpy(&ClientPlayMovie_Parms.MovieName, &MovieName, 0xC);
	ClientPlayMovie_Parms.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	ClientPlayMovie_Parms.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	ClientPlayMovie_Parms.bRestrictPausing = bRestrictPausing;
	ClientPlayMovie_Parms.bPlayOnceFromStream = bPlayOnceFromStream;
	ClientPlayMovie_Parms.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	pFnClientPlayMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClientPlayMovie, &ClientPlayMovie_Parms, NULL);

	pFnClientPlayMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// [0x00022401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void AGamePlayerController::KeepPlayingLoadingMovie()
{
	static UFunction* pFnKeepPlayingLoadingMovie = NULL;

	if (!pFnKeepPlayingLoadingMovie)
		pFnKeepPlayingLoadingMovie = (UFunction*)UObject::GObjObjects()->Data[38437];

	AGamePlayerController_execKeepPlayingLoadingMovie_Parms KeepPlayingLoadingMovie_Parms;

	pFnKeepPlayingLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnKeepPlayingLoadingMovie, &KeepPlayingLoadingMovie_Parms, NULL);

	pFnKeepPlayingLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.ShowLoadingMovie
// [0x00026401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// unsigned long                  bShowMovie                     ( CPF_Parm )
// unsigned long                  bPauseAfterHide                ( CPF_OptionalParm | CPF_Parm )
// float                          PauseDuration                  ( CPF_OptionalParm | CPF_Parm )
// float                          KeepPlayingDuration            ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bOverridePreviousDelays        ( CPF_OptionalParm | CPF_Parm )

void AGamePlayerController::ShowLoadingMovie(unsigned long bShowMovie, unsigned long bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, unsigned long bOverridePreviousDelays)
{
	static UFunction* pFnShowLoadingMovie = NULL;

	if (!pFnShowLoadingMovie)
		pFnShowLoadingMovie = (UFunction*)UObject::GObjObjects()->Data[38431];

	AGamePlayerController_execShowLoadingMovie_Parms ShowLoadingMovie_Parms;
	ShowLoadingMovie_Parms.bShowMovie = bShowMovie;
	ShowLoadingMovie_Parms.bPauseAfterHide = bPauseAfterHide;
	ShowLoadingMovie_Parms.PauseDuration = PauseDuration;
	ShowLoadingMovie_Parms.KeepPlayingDuration = KeepPlayingDuration;
	ShowLoadingMovie_Parms.bOverridePreviousDelays = bOverridePreviousDelays;

	pFnShowLoadingMovie->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShowLoadingMovie, &ShowLoadingMovie_Parms, NULL);

	pFnShowLoadingMovie->FunctionFlags |= 0x400;
};

// Function GameFramework.GamePlayerController.SetSoundMode
// [0x00020102]
// Parameters infos:
// struct FName                   InSoundModeName                ( CPF_Parm )

void AGamePlayerController::SetSoundMode(struct FName InSoundModeName)
{
	static UFunction* pFnSetSoundMode = NULL;

	if (!pFnSetSoundMode)
		pFnSetSoundMode = (UFunction*)UObject::GObjObjects()->Data[38429];

	AGamePlayerController_execSetSoundMode_Parms SetSoundMode_Parms;
	memcpy(&SetSoundMode_Parms.InSoundModeName, &InSoundModeName, 0x8);

	this->ProcessEvent(pFnSetSoundMode, &SetSoundMode_Parms, NULL);
};

// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// [0x00080102]
// Parameters infos:
// class UCameraShake*            ShakeData                      ( CPF_Parm )
// float                          Scale                          ( CPF_Parm )

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static UFunction* pFnDoForceFeedbackForScreenShake = NULL;

	if (!pFnDoForceFeedbackForScreenShake)
		pFnDoForceFeedbackForScreenShake = (UFunction*)UObject::GObjObjects()->Data[38421];

	AGamePlayerController_execDoForceFeedbackForScreenShake_Parms DoForceFeedbackForScreenShake_Parms;
	DoForceFeedbackForScreenShake_Parms.ShakeData = ShakeData;
	DoForceFeedbackForScreenShake_Parms.Scale = Scale;

	this->ProcessEvent(pFnDoForceFeedbackForScreenShake, &DoForceFeedbackForScreenShake_Parms, NULL);
};

// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AGamePlayerController::GetUIPlayerIndex()
{
	static UFunction* pFnGetUIPlayerIndex = NULL;

	if (!pFnGetUIPlayerIndex)
		pFnGetUIPlayerIndex = (UFunction*)UObject::GObjObjects()->Data[38419];

	AGamePlayerController_execGetUIPlayerIndex_Parms GetUIPlayerIndex_Parms;

	pFnGetUIPlayerIndex->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetUIPlayerIndex, &GetUIPlayerIndex_Parms, NULL);

	pFnGetUIPlayerIndex->FunctionFlags |= 0x400;

	return GetUIPlayerIndex_Parms.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// [0x00020002]
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static UFunction* pFnRecycle = NULL;

	if (!pFnRecycle)
		pFnRecycle = (UFunction*)UObject::GObjObjects()->Data[38606];

	UNavMeshGoal_OutOfViewFrom_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent(pFnRecycle, &Recycle_Parms, NULL);
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// [0x00022002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InOutOfViewLocation            ( CPF_Parm )

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, struct FVector InOutOfViewLocation)
{
	static UFunction* pFnMustBeHiddenFromThisPoint = NULL;

	if (!pFnMustBeHiddenFromThisPoint)
		pFnMustBeHiddenFromThisPoint = (UFunction*)UObject::GObjObjects()->Data[38602];

	UNavMeshGoal_OutOfViewFrom_execMustBeHiddenFromThisPoint_Parms MustBeHiddenFromThisPoint_Parms;
	MustBeHiddenFromThisPoint_Parms.NavHandle = NavHandle;
	memcpy(&MustBeHiddenFromThisPoint_Parms.InOutOfViewLocation, &InOutOfViewLocation, 0xC);

	this->ProcessEvent(pFnMustBeHiddenFromThisPoint, &MustBeHiddenFromThisPoint_Parms, NULL);

	return MustBeHiddenFromThisPoint_Parms.ReturnValue;
};

// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static UFunction* pFnRecycleNative = NULL;

	if (!pFnRecycleNative)
		pFnRecycleNative = (UFunction*)UObject::GObjObjects()->Data[38601];

	UNavMeshGoal_OutOfViewFrom_execRecycleNative_Parms RecycleNative_Parms;

	pFnRecycleNative->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRecycleNative, &RecycleNative_Parms, NULL);

	pFnRecycleNative->FunctionFlags |= 0x400;
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// [0x00020002]
// Parameters infos:

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static UFunction* pFnRecycle = NULL;

	if (!pFnRecycle)
		pFnRecycle = (UFunction*)UObject::GObjObjects()->Data[38620];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execRecycle_Parms Recycle_Parms;

	this->ProcessEvent(pFnRecycle, &Recycle_Parms, NULL);
};

// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// [0x00022002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UNavigationHandle*       NavHandle                      ( CPF_Parm )
// struct FVector                 InLocation                     ( CPF_Const | CPF_Parm )
// struct FRotator                InRotation                     ( CPF_Const | CPF_Parm )
// float                          InDistanceToCheck              ( CPF_Const | CPF_Parm )
// TArray< struct FVector >       InLocationsToCheck             ( CPF_Const | CPF_Parm | CPF_NeedCtorLink )

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, struct FVector InLocation, struct FRotator InRotation, float InDistanceToCheck, TArray< struct FVector > InLocationsToCheck)
{
	static UFunction* pFnBiasAgainstPolysWithinDistanceOfLocations = NULL;

	if (!pFnBiasAgainstPolysWithinDistanceOfLocations)
		pFnBiasAgainstPolysWithinDistanceOfLocations = (UFunction*)UObject::GObjObjects()->Data[38612];

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_execBiasAgainstPolysWithinDistanceOfLocations_Parms BiasAgainstPolysWithinDistanceOfLocations_Parms;
	BiasAgainstPolysWithinDistanceOfLocations_Parms.NavHandle = NavHandle;
	memcpy(&BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocation, &InLocation, 0xC);
	memcpy(&BiasAgainstPolysWithinDistanceOfLocations_Parms.InRotation, &InRotation, 0xC);
	BiasAgainstPolysWithinDistanceOfLocations_Parms.InDistanceToCheck = InDistanceToCheck;
	memcpy(&BiasAgainstPolysWithinDistanceOfLocations_Parms.InLocationsToCheck, &InLocationsToCheck, 0xC);

	this->ProcessEvent(pFnBiasAgainstPolysWithinDistanceOfLocations, &BiasAgainstPolysWithinDistanceOfLocations_Parms, NULL);

	return BiasAgainstPolysWithinDistanceOfLocations_Parms.ReturnValue;
};

// Function GameFramework.GameStateObject.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStateObject::Reset()
{
	static UFunction* pFnReset = NULL;

	if (!pFnReset)
		pFnReset = (UFunction*)UObject::GObjObjects()->Data[38511];

	UGameStateObject_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReset, &Reset_Parms, NULL);

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStateObject.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStateObject::eventPreProcessStream()
{
	static UFunction* pFnPreProcessStream = NULL;

	if (!pFnPreProcessStream)
		pFnPreProcessStream = (UFunction*)UObject::GObjObjects()->Data[38510];

	UGameStateObject_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPreProcessStream, &PreProcessStream_Parms, NULL);

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            EventID                        ( CPF_Parm )
// int                            AggregateID                    ( CPF_Parm | CPF_OutParm )
// int                            TargetAggregateID              ( CPF_Parm | CPF_OutParm )

bool UGameStatsAggregator::GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID)
{
	static UFunction* pFnGetAggregateMappingIDs = NULL;

	if (!pFnGetAggregateMappingIDs)
		pFnGetAggregateMappingIDs = (UFunction*)UObject::GObjObjects()->Data[38587];

	UGameStatsAggregator_execGetAggregateMappingIDs_Parms GetAggregateMappingIDs_Parms;
	GetAggregateMappingIDs_Parms.EventID = EventID;

	pFnGetAggregateMappingIDs->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetAggregateMappingIDs, &GetAggregateMappingIDs_Parms, NULL);

	pFnGetAggregateMappingIDs->FunctionFlags |= 0x400;

	if (AggregateID)
		*AggregateID = GetAggregateMappingIDs_Parms.AggregateID;

	if (TargetAggregateID)
		*TargetAggregateID = GetAggregateMappingIDs_Parms.TargetAggregateID;

	return GetAggregateMappingIDs_Parms.ReturnValue;
};

// Function GameFramework.GameStatsAggregator.Reset
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::Reset()
{
	static UFunction* pFnReset = NULL;

	if (!pFnReset)
		pFnReset = (UFunction*)UObject::GObjObjects()->Data[38586];

	UGameStatsAggregator_execReset_Parms Reset_Parms;

	pFnReset->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReset, &Reset_Parms, NULL);

	pFnReset->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PostProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPostProcessStream()
{
	static UFunction* pFnPostProcessStream = NULL;

	if (!pFnPostProcessStream)
		pFnPostProcessStream = (UFunction*)UObject::GObjObjects()->Data[38585];

	UGameStatsAggregator_eventPostProcessStream_Parms PostProcessStream_Parms;

	pFnPostProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPostProcessStream, &PostProcessStream_Parms, NULL);

	pFnPostProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.GameStatsAggregator.PreProcessStream
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UGameStatsAggregator::eventPreProcessStream()
{
	static UFunction* pFnPreProcessStream = NULL;

	if (!pFnPreProcessStream)
		pFnPreProcessStream = (UFunction*)UObject::GObjObjects()->Data[38584];

	UGameStatsAggregator_eventPreProcessStream_Parms PreProcessStream_Parms;

	pFnPreProcessStream->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPreProcessStream, &PreProcessStream_Parms, NULL);

	pFnPreProcessStream->FunctionFlags |= 0x400;
};

// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// [0x00420800] ( FUNC_Event )
// Parameters infos:
// unsigned long                  bToEntry                       ( CPF_Parm )
// TArray< class AActor* >        ActorList                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void APlayerCollectorGame::eventGetSeamlessTravelActorList(unsigned long bToEntry, TArray< class AActor* >* ActorList)
{
	static UFunction* pFnGetSeamlessTravelActorList = NULL;

	if (!pFnGetSeamlessTravelActorList)
		pFnGetSeamlessTravelActorList = (UFunction*)UObject::GObjObjects()->Data[38630];

	APlayerCollectorGame_eventGetSeamlessTravelActorList_Parms GetSeamlessTravelActorList_Parms;
	GetSeamlessTravelActorList_Parms.bToEntry = bToEntry;

	this->ProcessEvent(pFnGetSeamlessTravelActorList, &GetSeamlessTravelActorList_Parms, NULL);

	if (ActorList)
		memcpy(ActorList, &GetSeamlessTravelActorList_Parms.ActorList, 0xC);
};

// Function GameFramework.PlayerCollectorGame.Login
// [0x00420802] ( FUNC_Event )
// Parameters infos:
// class APlayerController*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Portal                         ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Options                        ( CPF_Parm | CPF_NeedCtorLink )
// struct FUniqueNetId            UniqueId                       ( CPF_Const | CPF_Parm )
// struct FString                 ErrorMessage                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class APlayerController* APlayerCollectorGame::eventLogin(struct FString Portal, struct FString Options, struct FUniqueNetId UniqueId, struct FString* ErrorMessage)
{
	static UFunction* pFnLogin = NULL;

	if (!pFnLogin)
		pFnLogin = (UFunction*)UObject::GObjObjects()->Data[38624];

	APlayerCollectorGame_eventLogin_Parms Login_Parms;
	memcpy(&Login_Parms.Portal, &Portal, 0xC);
	memcpy(&Login_Parms.Options, &Options, 0xC);
	memcpy(&Login_Parms.UniqueId, &UniqueId, 0x18);

	this->ProcessEvent(pFnLogin, &Login_Parms, NULL);

	if (ErrorMessage)
		memcpy(ErrorMessage, &Login_Parms.ErrorMessage, 0xC);

	return Login_Parms.ReturnValue;
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif