
from ctypes import *
import BL2SDK






class  AGamePawn_Data(Structure):
	_fields_ = []

class  AGamePawn(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("AActor", AActor_Data),
		("APawn", APawn_Data),
		("AGamePawn", AGamePawn_Data),
	]


class  AGamePlayerController_Data(Structure):
	_fields_ = [
		("CurrentSoundMode", FName),
		("bIsWarmupPaused", c_bool, 1),
		("", c_ulong, 0),
	]

class  AGamePlayerController(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("AActor", AActor_Data),
		("AController", AController_Data),
		("APlayerController", APlayerController_Data),
		("AGamePlayerController", AGamePlayerController_Data),
	]


class  UGameTypes_Data(Structure):
	_fields_ = []

class  UGameTypes(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGameTypes", UGameTypes_Data),
	]


class  UNavMeshGoal_OutOfViewFrom_Data(Structure):
	_fields_ = [
		("GoalPoly", FPointer),
		("OutOfViewLocation", FVector),
		("bShowDebug", c_bool, 1),
		("", c_ulong, 0),
	]

class  UNavMeshGoal_OutOfViewFrom(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UNavMeshPathGoalEvaluator", UNavMeshPathGoalEvaluator_Data),
		("UNavMeshGoal_OutOfViewFrom", UNavMeshGoal_OutOfViewFrom_Data),
	]


class  UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Data(Structure):
	_fields_ = [
		("Location", FVector),
		("Rotation", FVector),
		("DistanceToCheck", c_float),
		("LocationsToCheck", TArray_FVector),
	]

class  UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UNavMeshPathConstraint", UNavMeshPathConstraint_Data),
		("UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations", UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Data),
	]


class  USeqAct_ControlGameMovie_Data(Structure):
	_fields_ = [
		("MovieName", FString),
		("StartOfRenderingMovieFrame", c_int),
		("EndOfRenderingMovieFrame", c_int),
	]

class  USeqAct_ControlGameMovie(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("USeqAct_Latent", USeqAct_Latent_Data),
		("USeqAct_ControlGameMovie", USeqAct_ControlGameMovie_Data),
	]


class  USeqAct_Deproject_Data(Structure):
	_fields_ = [
		("ScreenX", c_float),
		("ScreenY", c_float),
		("TraceDistance", c_float),
		("HitObject", POINTER(UObject)),
		("HitLocation", FVector),
		("HitNormal", FVector),
	]

class  USeqAct_Deproject(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("USeqAct_Deproject", USeqAct_Deproject_Data),
	]


class  USeqAct_ModifyProperty_Data(Structure):
	_fields_ = [
		("Properties", TArray_FPropertyInfo),
	]

class  USeqAct_ModifyProperty(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USequenceObject", USequenceObject_Data),
		("USequenceOp", USequenceOp_Data),
		("USequenceAction", USequenceAction_Data),
		("USeqAct_ModifyProperty", USeqAct_ModifyProperty_Data),
	]


class  UGameSkelCtrl_Recoil_Data(Structure):
	_fields_ = [
		("bBoneSpaceRecoil", c_bool, 1),
		("bPlayRecoil", c_bool, 1),
		("bOldPlayRecoil", c_bool, 1),
		("bApplyControl", c_bool, 1),
		("", c_ulong, 0),
		("Recoil", FRecoilDef),
		("Aim", FVector2D),
	]

class  UGameSkelCtrl_Recoil(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UAnimObject", UAnimObject_Data),
		("USkelControlBase", USkelControlBase_Data),
		("UGameSkelCtrl_Recoil", UGameSkelCtrl_Recoil_Data),
	]


class  UGameStateObject_Data(Structure):
	_fields_ = [
		("TeamStates", FArray_Mirror),
		("PlayerStates", FArray_Mirror),
		("SessionType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("bIsMatchStarted", c_bool, 1),
		("bIsRoundStarted", c_bool, 1),
		("", c_ulong, 0),
		("RoundNumber", c_int),
		("MaxRoundNumber", c_int),
	]

class  UGameStateObject(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGameplayEventsHandler", UGameplayEventsHandler_Data),
		("UGameStateObject", UGameStateObject_Data),
	]


class  UGameStatsAggregator_Data(Structure):
	_fields_ = [
		("GameState", POINTER(UGameStateObject)),
		("AggregatesList", TArray_FAggregateEventMapping),
		("AggregateEventsMapping", FMap_Mirror),
		("AggregateEvents", TArray_FGameplayEventMetaData),
		("AggregatesFound", TArray_int),
		("AllGameEvents", FGameEvents),
		("AllTeamEvents", TArray_FTeamEvents),
		("AllPlayerEvents", TArray_FPlayerEvents),
		("AllWeaponEvents", FWeaponEvents),
		("AllProjectileEvents", FProjectileEvents),
		("AllPawnEvents", FPawnEvents),
		("AllDamageEvents", FDamageEvents),
	]

class  UGameStatsAggregator(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGameplayEventsHandler", UGameplayEventsHandler_Data),
		("UGameStatsAggregator", UGameStatsAggregator_Data),
	]


class  UGameWaveForms_Data(Structure):
	_fields_ = [
		("CameraShakeMediumShort", POINTER(UForceFeedbackWaveform)),
		("CameraShakeMediumLong", POINTER(UForceFeedbackWaveform)),
		("CameraShakeBigShort", POINTER(UForceFeedbackWaveform)),
		("CameraShakeBigLong", POINTER(UForceFeedbackWaveform)),
	]

class  UGameWaveForms(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UGameWaveForms", UGameWaveForms_Data),
	]


class  APlayerCollectorGame_Data(Structure):
	_fields_ = [
		("NumberOfClientsToWaitFor", c_int),
		("URLToLoad", FString),
	]

class  APlayerCollectorGame(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("AActor", AActor_Data),
		("AInfo", AInfo_Data),
		("AGameInfo", AGameInfo_Data),
		("APlayerCollectorGame", APlayerCollectorGame_Data),
	]


class  UPMESTG_LeaveADecalBase_Data(Structure):
	_fields_ = [
		("PhysicalMaterialPropertyClass", POINTER(UClass)),
	]

class  UPMESTG_LeaveADecalBase(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UParticleModuleEventSendToGame", UParticleModuleEventSendToGame_Data),
		("UPMESTG_LeaveADecalBase", UPMESTG_LeaveADecalBase_Data),
	]

BL2SDK.g_loadedClasses += [("AGamePawn", 2840, "APawn")]
BL2SDK.g_loadedClasses += [("AGamePlayerController", 2842, "APlayerController")]
BL2SDK.g_loadedClasses += [("UGameTypes", 2844, "UObject")]
BL2SDK.g_loadedClasses += [("UNavMeshGoal_OutOfViewFrom", 2846, "UNavMeshPathGoalEvaluator")]
BL2SDK.g_loadedClasses += [("UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations", 2848, "UNavMeshPathConstraint")]
BL2SDK.g_loadedClasses += [("USeqAct_ControlGameMovie", 2850, "USeqAct_Latent")]
BL2SDK.g_loadedClasses += [("USeqAct_Deproject", 2852, "USequenceAction")]
BL2SDK.g_loadedClasses += [("USeqAct_ModifyProperty", 2854, "USequenceAction")]
BL2SDK.g_loadedClasses += [("UGameSkelCtrl_Recoil", 2856, "USkelControlBase")]
BL2SDK.g_loadedClasses += [("UGameStateObject", 2858, "UGameplayEventsHandler")]
BL2SDK.g_loadedClasses += [("UGameStatsAggregator", 2860, "UGameplayEventsHandler")]
BL2SDK.g_loadedClasses += [("UGameWaveForms", 38391, "UObject")]
BL2SDK.g_loadedClasses += [("APlayerCollectorGame", 38588, "AGameInfo")]
BL2SDK.g_loadedClasses += [("UPMESTG_LeaveADecalBase", 38602, "UParticleModuleEventSendToGame")]
