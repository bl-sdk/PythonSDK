from ctypes import *
import BL2SDK


class AGamePawn_Data(Structure):
    pass


class AGamePawn(Structure):
    pass


class AGamePlayerController_Data(Structure):
    pass


class AGamePlayerController(Structure):
    pass


class UGameTypes_Data(Structure):
    pass


class UGameTypes(Structure):
    pass


class UNavMeshGoal_OutOfViewFrom_Data(Structure):
    pass


class UNavMeshGoal_OutOfViewFrom(Structure):
    pass


class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Data(Structure):
    pass


class UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations(Structure):
    pass


class USeqAct_ControlGameMovie_Data(Structure):
    pass


class USeqAct_ControlGameMovie(Structure):
    pass


class USeqAct_Deproject_Data(Structure):
    pass


class USeqAct_Deproject(Structure):
    pass


class USeqAct_ModifyProperty_Data(Structure):
    pass


class USeqAct_ModifyProperty(Structure):
    pass


class UGameSkelCtrl_Recoil_Data(Structure):
    pass


class UGameSkelCtrl_Recoil(Structure):
    pass


class UGameStateObject_Data(Structure):
    pass


class UGameStateObject(Structure):
    pass


class UGameStatsAggregator_Data(Structure):
    pass


class UGameStatsAggregator(Structure):
    pass


class UGameWaveForms_Data(Structure):
    pass


class UGameWaveForms(Structure):
    pass


class APlayerCollectorGame_Data(Structure):
    pass


class APlayerCollectorGame(Structure):
    pass


class UPMESTG_LeaveADecalBase_Data(Structure):
    pass


class UPMESTG_LeaveADecalBase(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *


def init():

    AGamePawn_Data._fields_ = []

    AGamePawn._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("APawn", APawn_Data),
        ("AGamePawn", AGamePawn_Data),
    ]

    AGamePlayerController_Data._fields_ = [
        ("CurrentSoundMode", FName),
        ("bIsWarmupPaused", c_bool, 1),
    ]

    AGamePlayerController._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AController", AController_Data),
        ("APlayerController", APlayerController_Data),
        ("AGamePlayerController", AGamePlayerController_Data),
    ]

    UGameTypes_Data._fields_ = []

    UGameTypes._fields_ = [("UObject", UObject_Data), ("UGameTypes", UGameTypes_Data)]

    UNavMeshGoal_OutOfViewFrom_Data._fields_ = [
        ("GoalPoly", FPointer),
        ("OutOfViewLocation", FVector),
        ("bShowDebug", c_bool, 1),
    ]

    UNavMeshGoal_OutOfViewFrom._fields_ = [
        ("UObject", UObject_Data),
        ("UNavMeshPathGoalEvaluator", UNavMeshPathGoalEvaluator_Data),
        ("UNavMeshGoal_OutOfViewFrom", UNavMeshGoal_OutOfViewFrom_Data),
    ]

    UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Data._fields_ = [
        ("Location", FVector),
        ("Rotation", FVector),
        ("DistanceToCheck", c_float),
        ("LocationsToCheck", TArray_FVector),
    ]

    UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations._fields_ = [
        ("UObject", UObject_Data),
        ("UNavMeshPathConstraint", UNavMeshPathConstraint_Data),
        (
            "UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations",
            UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations_Data,
        ),
    ]

    USeqAct_ControlGameMovie_Data._fields_ = [
        ("MovieName", FString),
        ("StartOfRenderingMovieFrame", c_int),
        ("EndOfRenderingMovieFrame", c_int),
    ]

    USeqAct_ControlGameMovie._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("USeqAct_ControlGameMovie", USeqAct_ControlGameMovie_Data),
    ]

    USeqAct_Deproject_Data._fields_ = [
        ("ScreenX", c_float),
        ("ScreenY", c_float),
        ("TraceDistance", c_float),
        ("HitObject", POINTER(UObject)),
        ("HitLocation", FVector),
        ("HitNormal", FVector),
    ]

    USeqAct_Deproject._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Deproject", USeqAct_Deproject_Data),
    ]

    USeqAct_ModifyProperty_Data._fields_ = [("Properties", TArray_FPropertyInfo)]

    USeqAct_ModifyProperty._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_ModifyProperty", USeqAct_ModifyProperty_Data),
    ]

    UGameSkelCtrl_Recoil_Data._fields_ = [
        ("bBoneSpaceRecoil", c_bool, 1),
        ("bPlayRecoil", c_bool, 1),
        ("bOldPlayRecoil", c_bool, 1),
        ("bApplyControl", c_bool, 1),
        ("Recoil", FRecoilDef),
        ("Aim", FVector2D),
    ]

    UGameSkelCtrl_Recoil._fields_ = [
        ("UObject", UObject_Data),
        ("UAnimObject", UAnimObject_Data),
        ("USkelControlBase", USkelControlBase_Data),
        ("UGameSkelCtrl_Recoil", UGameSkelCtrl_Recoil_Data),
    ]

    UGameStateObject_Data._fields_ = [
        ("TeamStates", FArray_Mirror),
        ("PlayerStates", FArray_Mirror),
        ("SessionType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bIsMatchStarted", c_bool, 1),
        ("bIsRoundStarted", c_bool, 1),
        ("RoundNumber", c_int),
        ("MaxRoundNumber", c_int),
    ]

    UGameStateObject._fields_ = [
        ("UObject", UObject_Data),
        ("UGameplayEventsHandler", UGameplayEventsHandler_Data),
        ("UGameStateObject", UGameStateObject_Data),
    ]

    UGameStatsAggregator_Data._fields_ = [
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

    UGameStatsAggregator._fields_ = [
        ("UObject", UObject_Data),
        ("UGameplayEventsHandler", UGameplayEventsHandler_Data),
        ("UGameStatsAggregator", UGameStatsAggregator_Data),
    ]

    UGameWaveForms_Data._fields_ = [
        ("CameraShakeMediumShort", POINTER(UForceFeedbackWaveform)),
        ("CameraShakeMediumLong", POINTER(UForceFeedbackWaveform)),
        ("CameraShakeBigShort", POINTER(UForceFeedbackWaveform)),
        ("CameraShakeBigLong", POINTER(UForceFeedbackWaveform)),
    ]

    UGameWaveForms._fields_ = [
        ("UObject", UObject_Data),
        ("UGameWaveForms", UGameWaveForms_Data),
    ]

    APlayerCollectorGame_Data._fields_ = [
        ("NumberOfClientsToWaitFor", c_int),
        ("URLToLoad", FString),
    ]

    APlayerCollectorGame._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AGameInfo", AGameInfo_Data),
        ("APlayerCollectorGame", APlayerCollectorGame_Data),
    ]

    UPMESTG_LeaveADecalBase_Data._fields_ = [
        ("PhysicalMaterialPropertyClass", POINTER(UClass))
    ]

    UPMESTG_LeaveADecalBase._fields_ = [
        ("UObject", UObject_Data),
        ("UParticleModuleEventSendToGame", UParticleModuleEventSendToGame_Data),
        ("UPMESTG_LeaveADecalBase", UPMESTG_LeaveADecalBase_Data),
    ]

    BL2SDK.g_loadedClasses += [("AGamePawn", 2840, "APawn")]
    BL2SDK.g_loadedClasses += [("AGamePlayerController", 2842, "APlayerController")]
    BL2SDK.g_loadedClasses += [("UGameTypes", 2844, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UNavMeshGoal_OutOfViewFrom", 2846, "UNavMeshPathGoalEvaluator")
    ]
    BL2SDK.g_loadedClasses += [
        (
            "UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations",
            2848,
            "UNavMeshPathConstraint",
        )
    ]
    BL2SDK.g_loadedClasses += [("USeqAct_ControlGameMovie", 2850, "USeqAct_Latent")]
    BL2SDK.g_loadedClasses += [("USeqAct_Deproject", 2852, "USequenceAction")]
    BL2SDK.g_loadedClasses += [("USeqAct_ModifyProperty", 2854, "USequenceAction")]
    BL2SDK.g_loadedClasses += [("UGameSkelCtrl_Recoil", 2856, "USkelControlBase")]
    BL2SDK.g_loadedClasses += [("UGameStateObject", 2858, "UGameplayEventsHandler")]
    BL2SDK.g_loadedClasses += [("UGameStatsAggregator", 2860, "UGameplayEventsHandler")]
    BL2SDK.g_loadedClasses += [("UGameWaveForms", 38391, "UObject")]
    BL2SDK.g_loadedClasses += [("APlayerCollectorGame", 38588, "AGameInfo")]
    BL2SDK.g_loadedClasses += [
        ("UPMESTG_LeaveADecalBase", 38602, "UParticleModuleEventSendToGame")
    ]
