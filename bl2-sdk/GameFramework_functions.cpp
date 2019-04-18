// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GameFramework.GamePlayerController.ClientColorFade
// (Net, NetReliable, Simulated, Public, NetClient)
// Parameters:
// struct FColor                  FadeColor                      (Parm)
// unsigned char                  FromAlpha                      (Parm)
// unsigned char                  ToAlpha                        (Parm)
// float                          FadeTime                       (Parm)

void AGamePlayerController::ClientColorFade(const struct FColor& FadeColor, unsigned char FromAlpha, unsigned char ToAlpha, float FadeTime)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.ClientColorFade");

	AGamePlayerController_ClientColorFade_Params params;
	params.FadeColor = FadeColor;
	params.FromAlpha = FromAlpha;
	params.ToAlpha = ToAlpha;
	params.FadeTime = FadeTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CallMemLeakCheck
// (Final, Defined, Private)

void AGamePlayerController::CallMemLeakCheck()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.CallMemLeakCheck");

	AGamePlayerController_CallMemLeakCheck_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.StopMemLeakChecking
// (Defined, Exec, Public)

void AGamePlayerController::StopMemLeakChecking()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.StopMemLeakChecking");

	AGamePlayerController_StopMemLeakChecking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoMemLeakChecking
// (Defined, Exec, Public)
// Parameters:
// float                          InTimeBetweenMemLeakChecks     (Parm)

void AGamePlayerController::DoMemLeakChecking(float InTimeBetweenMemLeakChecks)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.DoMemLeakChecking");

	AGamePlayerController_DoMemLeakChecking_Params params;
	params.InTimeBetweenMemLeakChecks = InTimeBetweenMemLeakChecks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.WarmupPause
// (Defined, Event, Public, HasDefaults)
// Parameters:
// bool                           bDesiredPauseState             (Parm)

void AGamePlayerController::WarmupPause(bool bDesiredPauseState)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.WarmupPause");

	AGamePlayerController_WarmupPause_Params params;
	params.bDesiredPauseState = bDesiredPauseState;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.CanUnpauseWarmup
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AGamePlayerController::CanUnpauseWarmup()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.CanUnpauseWarmup");

	AGamePlayerController_CanUnpauseWarmup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GamePlayerController.GetCurrentMovie
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FString                 MovieName                      (Parm, OutParm, NeedCtorLink)

void AGamePlayerController::GetCurrentMovie(struct FString* MovieName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.GetCurrentMovie");

	AGamePlayerController_GetCurrentMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MovieName != nullptr)
		*MovieName = params.MovieName;
}


// Function GameFramework.GamePlayerController.ClientStopMovie
// (Final, Net, NetReliable, Simulated, Native, Event, Public, NetClient)
// Parameters:
// float                          DelayInSeconds                 (Parm)
// bool                           bAllowMovieToFinish            (Parm)
// bool                           bForceStopNonSkippable         (Parm)
// bool                           bForceStopLoadingMovie         (Parm)

void AGamePlayerController::ClientStopMovie(float DelayInSeconds, bool bAllowMovieToFinish, bool bForceStopNonSkippable, bool bForceStopLoadingMovie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.ClientStopMovie");

	AGamePlayerController_ClientStopMovie_Params params;
	params.DelayInSeconds = DelayInSeconds;
	params.bAllowMovieToFinish = bAllowMovieToFinish;
	params.bForceStopNonSkippable = bForceStopNonSkippable;
	params.bForceStopLoadingMovie = bForceStopLoadingMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ClientPlayMovie
// (Final, Net, NetReliable, Simulated, Native, Event, Public, NetClient)
// Parameters:
// struct FString                 MovieName                      (Parm, NeedCtorLink)
// int                            InStartOfRenderingMovieFrame   (Parm)
// int                            InEndOfRenderingMovieFrame     (Parm)
// bool                           bRestrictPausing               (Parm)
// bool                           bPlayOnceFromStream            (Parm)
// bool                           bOnlyBackButtonSkipsMovie      (Parm)

void AGamePlayerController::ClientPlayMovie(const struct FString& MovieName, int InStartOfRenderingMovieFrame, int InEndOfRenderingMovieFrame, bool bRestrictPausing, bool bPlayOnceFromStream, bool bOnlyBackButtonSkipsMovie)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.ClientPlayMovie");

	AGamePlayerController_ClientPlayMovie_Params params;
	params.MovieName = MovieName;
	params.InStartOfRenderingMovieFrame = InStartOfRenderingMovieFrame;
	params.InEndOfRenderingMovieFrame = InEndOfRenderingMovieFrame;
	params.bRestrictPausing = bRestrictPausing;
	params.bPlayOnceFromStream = bPlayOnceFromStream;
	params.bOnlyBackButtonSkipsMovie = bOnlyBackButtonSkipsMovie;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.KeepPlayingLoadingMovie
// (Final, Native, Static, Public)

void AGamePlayerController::KeepPlayingLoadingMovie()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.KeepPlayingLoadingMovie");

	AGamePlayerController_KeepPlayingLoadingMovie_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.ShowLoadingMovie
// (Final, Native, Static, HasOptionalParms, Public)
// Parameters:
// bool                           bShowMovie                     (Parm)
// bool                           bPauseAfterHide                (OptionalParm, Parm)
// float                          PauseDuration                  (OptionalParm, Parm)
// float                          KeepPlayingDuration            (OptionalParm, Parm)
// bool                           bOverridePreviousDelays        (OptionalParm, Parm)

void AGamePlayerController::ShowLoadingMovie(bool bShowMovie, bool bPauseAfterHide, float PauseDuration, float KeepPlayingDuration, bool bOverridePreviousDelays)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.ShowLoadingMovie");

	AGamePlayerController_ShowLoadingMovie_Params params;
	params.bShowMovie = bShowMovie;
	params.bPauseAfterHide = bPauseAfterHide;
	params.PauseDuration = PauseDuration;
	params.KeepPlayingDuration = KeepPlayingDuration;
	params.bOverridePreviousDelays = bOverridePreviousDelays;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.SetSoundMode
// (Defined, Simulated, Public)
// Parameters:
// struct FName                   InSoundModeName                (Parm)

void AGamePlayerController::SetSoundMode(const struct FName& InSoundModeName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.SetSoundMode");

	AGamePlayerController_SetSoundMode_Params params;
	params.InSoundModeName = InSoundModeName;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.DoForceFeedbackForScreenShake
// (Defined, Simulated, Protected)
// Parameters:
// class UCameraShake*            ShakeData                      (Parm)
// float                          Scale                          (Parm)

void AGamePlayerController::DoForceFeedbackForScreenShake(class UCameraShake* ShakeData, float Scale)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.DoForceFeedbackForScreenShake");

	AGamePlayerController_DoForceFeedbackForScreenShake_Params params;
	params.ShakeData = ShakeData;
	params.Scale = Scale;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GamePlayerController.GetUIPlayerIndex
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AGamePlayerController::GetUIPlayerIndex()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GamePlayerController.GetUIPlayerIndex");

	AGamePlayerController_GetUIPlayerIndex_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.Recycle
// (Defined, Public)

void UNavMeshGoal_OutOfViewFrom::Recycle()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.NavMeshGoal_OutOfViewFrom.Recycle");

	UNavMeshGoal_OutOfViewFrom_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InOutOfViewLocation            (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshGoal_OutOfViewFrom::MustBeHiddenFromThisPoint(class UNavigationHandle* NavHandle, const struct FVector& InOutOfViewLocation)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.NavMeshGoal_OutOfViewFrom.MustBeHiddenFromThisPoint");

	UNavMeshGoal_OutOfViewFrom_MustBeHiddenFromThisPoint_Params params;
	params.NavHandle = NavHandle;
	params.InOutOfViewLocation = InOutOfViewLocation;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative
// (Native, Public)

void UNavMeshGoal_OutOfViewFrom::RecycleNative()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.NavMeshGoal_OutOfViewFrom.RecycleNative");

	UNavMeshGoal_OutOfViewFrom_RecycleNative_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle
// (Defined, Public)

void UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::Recycle()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.Recycle");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Recycle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations
// (Defined, Static, Public)
// Parameters:
// class UNavigationHandle*       NavHandle                      (Parm)
// struct FVector                 InLocation                     (Const, Parm)
// struct FRotator                InRotation                     (Const, Parm)
// float                          InDistanceToCheck              (Const, Parm)
// TArray<struct FVector>         InLocationsToCheck             (Const, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations::BiasAgainstPolysWithinDistanceOfLocations(class UNavigationHandle* NavHandle, const struct FVector& InLocation, const struct FRotator& InRotation, float InDistanceToCheck, TArray<struct FVector> InLocationsToCheck)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.NavMeshPath_BiasAgainstPolysWithinDistanceOfLocations.BiasAgainstPolysWithinDistanceOfLocations");

	UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_BiasAgainstPolysWithinDistanceOfLocations_Params params;
	params.NavHandle = NavHandle;
	params.InLocation = InLocation;
	params.InRotation = InRotation;
	params.InDistanceToCheck = InDistanceToCheck;
	params.InLocationsToCheck = InLocationsToCheck;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function GameFramework.GameStateObject.Reset
// (Native, Public)

void UGameStateObject::Reset()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GameStateObject.Reset");

	UGameStateObject_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStateObject.PreProcessStream
// (Native, Event, Public)

void UGameStateObject::PreProcessStream()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GameStateObject.PreProcessStream");

	UGameStateObject_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.GetAggregateMappingIDs
// (Native, Public, HasOutParms)
// Parameters:
// int                            EventID                        (Parm)
// int                            AggregateID                    (Parm, OutParm)
// int                            TargetAggregateID              (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UGameStatsAggregator::GetAggregateMappingIDs(int EventID, int* AggregateID, int* TargetAggregateID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GameStatsAggregator.GetAggregateMappingIDs");

	UGameStatsAggregator_GetAggregateMappingIDs_Params params;
	params.EventID = EventID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (AggregateID != nullptr)
		*AggregateID = params.AggregateID;
	if (TargetAggregateID != nullptr)
		*TargetAggregateID = params.TargetAggregateID;

	return params.ReturnValue;
}


// Function GameFramework.GameStatsAggregator.Reset
// (Native, Public)

void UGameStatsAggregator::Reset()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GameStatsAggregator.Reset");

	UGameStatsAggregator_Reset_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PostProcessStream
// (Native, Event, Public)

void UGameStatsAggregator::PostProcessStream()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GameStatsAggregator.PostProcessStream");

	UGameStatsAggregator_PostProcessStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.GameStatsAggregator.PreProcessStream
// (Native, Event, Public)

void UGameStatsAggregator::PreProcessStream()
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.GameStatsAggregator.PreProcessStream");

	UGameStatsAggregator_PreProcessStream_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList
// (Event, Public, HasOutParms)
// Parameters:
// bool                           bToEntry                       (Parm)
// TArray<class AActor*>          ActorList                      (Parm, OutParm, NeedCtorLink)

void APlayerCollectorGame::GetSeamlessTravelActorList(bool bToEntry, TArray<class AActor*>* ActorList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.PlayerCollectorGame.GetSeamlessTravelActorList");

	APlayerCollectorGame_GetSeamlessTravelActorList_Params params;
	params.bToEntry = bToEntry;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ActorList != nullptr)
		*ActorList = params.ActorList;
}


// Function GameFramework.PlayerCollectorGame.Login
// (Defined, Event, Public, HasOutParms)
// Parameters:
// struct FString                 Portal                         (Parm, NeedCtorLink)
// struct FString                 Options                        (Parm, NeedCtorLink)
// struct FUniqueNetId            UniqueId                       (Const, Parm)
// struct FString                 ErrorMessage                   (Parm, OutParm, NeedCtorLink)
// class APlayerController*       ReturnValue                    (Parm, OutParm, ReturnParm)

class APlayerController* APlayerCollectorGame::Login(const struct FString& Portal, const struct FString& Options, const struct FUniqueNetId& UniqueId, struct FString* ErrorMessage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "GameFramework.PlayerCollectorGame.Login");

	APlayerCollectorGame_Login_Params params;
	params.Portal = Portal;
	params.Options = Options;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ErrorMessage != nullptr)
		*ErrorMessage = params.ErrorMessage;

	return params.ReturnValue;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
