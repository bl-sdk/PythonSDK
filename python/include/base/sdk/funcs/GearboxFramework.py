from ctypes import *
import BL2SDK



from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *
from ..structs.GearboxFramework import *
from ..structs.WillowGame import *
from ..structs.AkAudio import *
from ..structs.IpDrv import *
from ..structs.WinDrv import *
from ..structs.XAudio2 import *
from ..structs.OnlineSubsystemSteamworks import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *
from ..classes.AkAudio import *
from ..classes.IpDrv import *
from ..classes.WinDrv import *
from ..classes.XAudio2 import *
from ..classes.OnlineSubsystemSteamworks import *

BL2SDK.g_classFuncs["USpecialMoveComponent"] = {}
BL2SDK.g_classFuncs["UBehavior_SetObjectParam"] = {}
BL2SDK.g_classFuncs["UPopulationFactoryPopulationDefinition"] = {}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"] = {}
BL2SDK.g_classFuncs["UGearboxDialogAct_Compare"] = {}
BL2SDK.g_classFuncs["UBehavior_ToggleDialog"] = {}
BL2SDK.g_classFuncs["UBehavior_ChangeRemoteBehaviorSequenceState"] = {}
BL2SDK.g_classFuncs["UBehavior_SetFloatParam"] = {}
BL2SDK.g_classFuncs["UPawnMoveLocationRequest"] = {}
BL2SDK.g_classFuncs["UGearboxPlayerInput"] = {}
BL2SDK.g_classFuncs["UInterfaceGearboxCamera"] = {}
BL2SDK.g_classFuncs["UPopulationMasterAttributeContextResolver"] = {}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleInstanceData"] = {}
BL2SDK.g_classFuncs["USpecialMoveDefinition"] = {}
BL2SDK.g_classFuncs["UCompoundExpressionEvaluator"] = {}
BL2SDK.g_classFuncs["UAIFactoryBase"] = {}
BL2SDK.g_classFuncs["UGFxMovieState"] = {}
BL2SDK.g_classFuncs["UIGbxMessageListener"] = {}
BL2SDK.g_classFuncs["UAICostExpressionEvaluator"] = {}
BL2SDK.g_classFuncs["UExposureUtilityBase"] = {}
BL2SDK.g_classFuncs["UBehavior_CustomEvent"] = {}
BL2SDK.g_classFuncs["UTargetIterator"] = {}
BL2SDK.g_classFuncs["UGBXActorList"] = {}
BL2SDK.g_classFuncs["UGFxMovieDrawStyle"] = {}
BL2SDK.g_classFuncs["UAIResourceExpressionEvaluator"] = {}
BL2SDK.g_classFuncs["UGearboxDialogNode"] = {}
BL2SDK.g_classFuncs["AGearboxDialogActor"] = {}
BL2SDK.g_classFuncs["UAction_FaceThreat"] = {}
BL2SDK.g_classFuncs["UIPopulationSpawnPoint"] = {}
BL2SDK.g_classFuncs["UGearboxEngine"] = {}
BL2SDK.g_classFuncs["UBehavior_SpecialMoveStop"] = {}
BL2SDK.g_classFuncs["UGearboxGFxMovie"] = {}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"] = {}
BL2SDK.g_classFuncs["UPopulationFactoryGeneric"] = {}
BL2SDK.g_classFuncs["UBehavior_CompareValues"] = {}
BL2SDK.g_classFuncs["UGbxMessageManager"] = {}
BL2SDK.g_classFuncs["UGearboxSkeletalMeshComponent"] = {}
BL2SDK.g_classFuncs["USparkTypes"] = {}
BL2SDK.g_classFuncs["UPhysicsStateExpressionEvaluator"] = {}
BL2SDK.g_classFuncs["UBehavior_GetVectorParam"] = {}
BL2SDK.g_classFuncs["UAIComponent"] = {}
BL2SDK.g_classFuncs["UBehavior_GetObjectParam"] = {}
BL2SDK.g_classFuncs["UBehavior_StopDialog"] = {}
BL2SDK.g_classFuncs["UICustomEvent"] = {}
BL2SDK.g_classFuncs["AGearboxMind"] = {}
BL2SDK.g_classFuncs["UGearboxDialogManager"] = {}
BL2SDK.g_classFuncs["USeqEvent_EncounterWaveComplete"] = {}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"] = {}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleHUD"] = {}
BL2SDK.g_classFuncs["UPopulationDefinition"] = {}
BL2SDK.g_classFuncs["UITimerBehavior"] = {}
BL2SDK.g_classFuncs["UGearboxDialogVariable"] = {}
BL2SDK.g_classFuncs["UBehaviorHelpers"] = {}
BL2SDK.g_classFuncs["UGearboxAIFactory"] = {}
BL2SDK.g_classFuncs["USparkInterface"] = {}
BL2SDK.g_classFuncs["UPopulationAspect"] = {}
BL2SDK.g_classFuncs["UGFxMovieDefinition"] = {}
BL2SDK.g_classFuncs["UIAIInterface"] = {}
BL2SDK.g_classFuncs["USparkServiceConfiguration"] = {}
BL2SDK.g_classFuncs["APopulationOpportunity"] = {}
BL2SDK.g_classFuncs["UBehavior_ChangeTimer"] = {}
BL2SDK.g_classFuncs["UGbxMessage"] = {}
BL2SDK.g_classFuncs["UIRuleEngineOwner"] = {}
BL2SDK.g_classFuncs["UKnowledgeRecord"] = {}
BL2SDK.g_classFuncs["UBehavior_SendGbxMessage"] = {}
BL2SDK.g_classFuncs["UBehavior_AIPriority"] = {}
BL2SDK.g_classFuncs["UPopUpDebugBarGraph"] = {}
BL2SDK.g_classFuncs["AGearboxGameInfo"] = {}
BL2SDK.g_classFuncs["UGearboxRuleEngine"] = {}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"] = {}
BL2SDK.g_classFuncs["USpecialMoveRandom"] = {}
BL2SDK.g_classFuncs["URuleEngine"] = {}
BL2SDK.g_classFuncs["UBehavior_GetFloatParam"] = {}
BL2SDK.g_classFuncs["UBehavior_SpecialMove"] = {}
BL2SDK.g_classFuncs["UActorAttributeContextResolver"] = {}
BL2SDK.g_classFuncs["UMindTargetInfo"] = {}
BL2SDK.g_classFuncs["UBehavior_StartAkAmbientSound"] = {}
BL2SDK.g_classFuncs["URule"] = {}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleSplitscreen"] = {}
BL2SDK.g_classFuncs["UBehaviorProviderDefinition"] = {}
BL2SDK.g_classFuncs["APopulationEncounter"] = {}
BL2SDK.g_classFuncs["UGearboxDialogComponent"] = {}
BL2SDK.g_classFuncs["USparkInterfaceImpl"] = {}
BL2SDK.g_classFuncs["UBehavior_SetVectorParam"] = {}
BL2SDK.g_classFuncs["UBehavior_Delay"] = {}
BL2SDK.g_classFuncs["UBehavior_ModifyTimer"] = {}
BL2SDK.g_classFuncs["UGearboxAccountActions"] = {}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleMesh"] = {}
BL2SDK.g_classFuncs["UAllegianceExpressionEvaluator"] = {}
BL2SDK.g_classFuncs["USparkNews"] = {}
BL2SDK.g_classFuncs["URegionDefinition"] = {}
BL2SDK.g_classFuncs["UBehavior_CallFunction"] = {}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"] = {}
BL2SDK.g_classFuncs["UBehavior_Gate"] = {}
BL2SDK.g_classFuncs["UBehavior_InterpolateFloatOverTime"] = {}
BL2SDK.g_classFuncs["UGearboxDialogAct_Talk"] = {}
BL2SDK.g_classFuncs["UGFxMovieStatePlayerAware"] = {}
BL2SDK.g_classFuncs["UFlagExpressionEvaluator"] = {}
BL2SDK.g_classFuncs["UFiringZoneCollectionDefinition"] = {}
BL2SDK.g_classFuncs["UIBehaviorConsumer"] = {}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"] = {}
BL2SDK.g_classFuncs["UCameraModifierLookAt"] = {}
BL2SDK.g_classFuncs["UGearboxCameraModifier"] = {}
BL2SDK.g_classFuncs["UGearboxGlobals"] = {}
BL2SDK.g_classFuncs["UFlagDefinition"] = {}
BL2SDK.g_classFuncs["UGearboxDialogAct_ObjectParameterSwitch"] = {}
BL2SDK.g_classFuncs["UGearboxDialogAct_Chance"] = {}
BL2SDK.g_classFuncs["UBehaviorKernel"] = {}
BL2SDK.g_classFuncs["UGearboxDialogAct_Trigger"] = {}
BL2SDK.g_classFuncs["UGearboxDialogAction"] = {}
BL2SDK.g_classFuncs["UGearboxProcess"] = {}
BL2SDK.g_classFuncs["UCameraModifierCrossfade"] = {}
BL2SDK.g_classFuncs["UGFxMovieManager"] = {}
BL2SDK.g_classFuncs["UGBXObjectList"] = {}
BL2SDK.g_classFuncs["UGFxMovie_StateParent"] = {}
BL2SDK.g_classFuncs["USpecialMoveInterface"] = {}
BL2SDK.g_classFuncs["UGearboxEditorNode"] = {}
BL2SDK.g_classFuncs["UGestaltSkeletalMeshDefinition"] = {}
BL2SDK.g_classFuncs["AGearboxPawn"] = {}
BL2SDK.g_classFuncs["USeqAct_AllPlayersInVolume"] = {}
BL2SDK.g_classFuncs["UGearboxAccountData"] = {}
BL2SDK.g_classFuncs["UActionSequence"] = {}
BL2SDK.g_classFuncs["UAIDefinition"] = {}
BL2SDK.g_classFuncs["UBehavior_StopAkAmbientSound"] = {}
BL2SDK.g_classFuncs["UBehavior_AITargeting"] = {}
BL2SDK.g_classFuncs["UFiringBehaviorManager"] = {}
BL2SDK.g_classFuncs["ULeviathanService"] = {}
BL2SDK.g_classFuncs["UIBehaviorProvider"] = {}
BL2SDK.g_classFuncs["UIGFxActorMovie"] = {}
BL2SDK.g_classFuncs["USpecialMoveExpressionList"] = {}
BL2SDK.g_classFuncs["UBehavior_TriggerDialogEvent"] = {}
BL2SDK.g_classFuncs["AGearboxPlayerController"] = {}
BL2SDK.g_classFuncs["APopulationOpportunityArea"] = {}
BL2SDK.g_classFuncs["AGearboxCameraBasic"] = {}
BL2SDK.g_classFuncs["UGFxActorMoviePool"] = {}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"] = {}
BL2SDK.g_classFuncs["UBehavior_SetFlag"] = {}
BL2SDK.g_classFuncs["URuleEngineLoadBalanceManager"] = {}
BL2SDK.g_classFuncs["UGearboxDialogInterface"] = {}
BL2SDK.g_classFuncs["UBehavior_IsSequenceEnabled"] = {}
BL2SDK.g_classFuncs["UGearboxDialogGroup"] = {}
BL2SDK.g_classFuncs["UBehavior_ChangeAnyBehaviorSequenceState"] = {}
BL2SDK.g_classFuncs["UBehavior_ChangeLocalBehaviorSequenceState"] = {}
BL2SDK.g_classFuncs["UAIComponentAttributeContextResolver"] = {}
BL2SDK.g_classFuncs["AWireTerminal"] = {}
BL2SDK.g_classFuncs["UBehavior_AIHold"] = {}
BL2SDK.g_classFuncs["UBehavior_PostAkEvent"] = {}
BL2SDK.g_classFuncs["USeqEvent_PopulatedPoint"] = {}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"] = {}
BL2SDK.g_classFuncs["USeqEvent_PopulatedActor"] = {}
BL2SDK.g_classFuncs["UBehavior_CompareBool"] = {}
BL2SDK.g_classFuncs["USparkInitializationProcess"] = {}
BL2SDK.g_classFuncs["APopulationPoint"] = {}
BL2SDK.g_classFuncs["UPopulationFactory"] = {}
BL2SDK.g_classFuncs["APopulationOpportunityCloner"] = {}
BL2SDK.g_classFuncs["UBehavior_Metronome"] = {}
BL2SDK.g_classFuncs["UIStreamingDataEvent"] = {}
BL2SDK.g_classFuncs["UGearboxDialogEventData"] = {}
BL2SDK.g_classFuncs["UGearboxLocationRequest"] = {}
BL2SDK.g_classFuncs["UAIDebugCamera"] = {}
BL2SDK.g_classFuncs["UActionSequenceList"] = {}
BL2SDK.g_classFuncs["AGearboxAIController"] = {}
BL2SDK.g_classFuncs["UAttributeExpressionEvaluator"] = {}
BL2SDK.g_classFuncs["UActionSequenceRandom"] = {}
BL2SDK.g_classFuncs["UPopulationMaster"] = {}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"] = {}


BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleAITree"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39368,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleTargetViewCones"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39367,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleAwarenessZones"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39366,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleRuleEngineLoadBalance"] = {
    "fields": [],
    "dataSize": 4,
    "index": 39365,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleCombat"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39364,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleShowTimers"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39363,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleResources"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39362,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleInactiveRules"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39361,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleRules"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39360,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["ToggleFlags"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39359,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["GetTracker"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39358,
            "castTo": POINTER(POINTER(UAITracker)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39357,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["SetMind"] = {
    "fields": [
        {
            "name": "NewMind",
            "index": 39356,
            "className": "AGearboxMind",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39355,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["InitDummies"] = {
    "fields": [
        {
            "name": "NewNumDummies",
            "index": 39354,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39353,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["WantsToDoCameraInspection"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39352,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39351,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["SetCurrentInspectedTarget"] = {
    "fields": [
        {
            "name": "NewName",
            "index": 39350,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 39349,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["CompareRuleSetAndAdjustRuleIdx"] = {
    "fields": [
        {
            "name": "OldSnapshot",
            "index": 39348,
            "className": "USnapshotRecord",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "NewSnapshot",
            "index": 39347,
            "className": "USnapshotRecord",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 39346,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["SetRuleEngine"] = {
    "fields": [
        {
            "name": "NewRuleEngine",
            "index": 39345,
            "className": "URuleEngine",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39344,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["SetPrevSnapshotRule"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39343,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["SetNextSnapshotRule"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39342,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["SetPrevSnapshot"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39341,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["SetNextSnapshot"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39340,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["NotifyGameUnPaused"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39339,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["NotifyGamePaused"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39338,
}
BL2SDK.g_classFuncs["UAIDebugCamera"]["Display"] = {
    "fields": [
        {
            "name": "HUD",
            "index": 39337,
            "className": "AHUD",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39336,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["IsPlaying"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39668,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "AnimSMD",
            "index": 39669,
            "className": "UGearboxAnimDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 39667,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["SetRootMotion"] = {
    "fields": [
        {
            "name": "RMDef",
            "index": 39666,
            "className": "URootMotionDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39665,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["GetCurrentAnimDef"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39664,
            "castTo": POINTER(POINTER(UGearboxAnimDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39663,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["GetCurrentAnimName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39662,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 39661,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["Finish"] = {
    "fields": [
        {
            "name": "bInterrupted",
            "index": 39660,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39659,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["Stop"] = {
    "fields": [
        {
            "name": "bInterrupted",
            "index": 39658,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39657,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["PlayData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39651,
            "castTo": POINTER(c_float),
            "offset": 48,
        },
        {
            "name": "SMData",
            "isRet": True,
            "index": 39656,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 0,
        },
        {
            "name": "AnimNameOverride",
            "index": 39655,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 28,
        },
        {
            "name": "PlayRateScale",
            "index": 39654,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "BlendInOverride",
            "index": 39653,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 40,
        },
        {
            "name": "BlendOutOverride",
            "index": 39652,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 44,
        },
    ],
    "dataSize": 52,
    "index": 39650,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UAnimNodeSpecialMoveBlend"]["Play"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39644,
            "castTo": POINTER(c_float),
            "offset": 24,
        },
        {
            "name": "CustomAnimSMD",
            "index": 39649,
            "className": "UGearboxAnimDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AnimNameOverride",
            "index": 39648,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "PlayRateScale",
            "index": 39647,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "BlendInOverride",
            "index": 39646,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "BlendOutOverride",
            "index": 39645,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 39643,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UAttributeExpressionEvaluator"]["Evaluate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39672,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 39673,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 39671,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UBehavior_CallFunction"]["CallFunction"] = {
    "fields": [
        {
            "name": "inActor",
            "index": 39745,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "InFunctionName",
            "index": 39744,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39743,
}
BL2SDK.g_classFuncs["UBehavior_CallFunction"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39742,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39741,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39740,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39739,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39738,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39737,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 60,
    "index": 39736,
}
BL2SDK.g_classFuncs["UBehavior_ChangeRemoteBehaviorSequenceState"][
    "ApplyBehaviorToContext"
] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39787,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39786,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39785,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39784,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39783,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39782,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 72,
    "index": 39779,
}
BL2SDK.g_classFuncs["UBehavior_ChangeTimer"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39829,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39828,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39827,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39826,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39825,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39824,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 76,
    "index": 39821,
}
BL2SDK.g_classFuncs["UBehavior_IsSequenceEnabled"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39966,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39965,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39964,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39963,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39962,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39961,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 72,
    "index": 39958,
}
BL2SDK.g_classFuncs["UBehavior_PostAkEvent"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40019,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40018,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40017,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40016,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40015,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40014,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 84,
    "index": 40011,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["RunAllBehaviorsForEvent"] = {
    "fields": [
        {
            "name": "EventName",
            "index": 40342,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SetStrategy",
            "index": 40341,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 8,
        },
        {
            "name": "Strategy",
            "index": 40340,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 20,
        },
        {
            "name": "SelfObject",
            "index": 40339,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40338,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40337,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40336,
            "optional": True,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
        {
            "name": "EnumValue",
            "index": 40335,
            "optional": True,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 56,
        },
    ],
    "dataSize": 57,
    "index": 40334,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["BehaviorStrategy"] = {
    "fields": [
        {
            "name": "BehaviorSet",
            "index": 40333,
            "type": FPointer,
            "castTo": POINTER(FPointer),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "EventName",
            "index": 40332,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "BehaviorList",
            "isRet": True,
            "index": 40330,
            "isOutParm": True,
            "cType": TArray_UBehaviorBasePtr,
            "castTo": POINTER(TArray_UBehaviorBasePtr),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "EnumValue",
            "index": 40331,
            "optional": True,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 25,
    "index": 40327,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["BehaviorSetStrategy"] = {
    "fields": [
        {
            "name": "BehaviorSetList",
            "isRet": True,
            "index": 40325,
            "isOutParm": True,
            "cType": TArray_FPointer,
            "castTo": POINTER(TArray_FPointer),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 40323,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"][
    "ResolveBehaviorProviderDefinitionReference"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39789,
            "castTo": POINTER(POINTER(UBehaviorProviderDefinition)),
            "offset": 60,
        },
        {
            "name": "SourceBehavior",
            "index": 40322,
            "className": "UBehaviorBase",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "ProviderReference",
            "index": 40321,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "PathName",
            "isRet": True,
            "index": 40320,
            "isOutParm": True,
            "cType": FNameBasedObjectPath,
            "castTo": POINTER(FNameBasedObjectPath),
            "offset": 8,
        },
    ],
    "dataSize": 64,
    "index": 39788,
    "retOffset": 60,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["IsBehaviorsV2"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40021,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40319,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 40020,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["ShouldContinueExecution"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40314,
            "castTo": POINTER(c_bool),
            "offset": 40,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40318,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "TimeBetweenSteps",
            "index": 40317,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
        {
            "name": "NumSteps",
            "isRet": True,
            "index": 40316,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 32,
        },
        {
            "name": "MaxSteps",
            "index": 40315,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 36,
        },
    ],
    "dataSize": 48,
    "index": 40313,
    "retOffset": 40,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["GetNextFireLocationSocket"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40311,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 28,
        },
        {
            "name": "FireSocketSelection",
            "index": 40312,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EFireSocketSelectionMethod",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "FireLocationSocketNames",
            "index": 40307,
            "type": TArray_FName,
            "castTo": POINTER(TArray_FName),
            "flags": 8,
            "offset": 4,
        },
        {
            "name": "FireLocationSocketsRemaining",
            "isRet": True,
            "index": 40309,
            "isOutParm": True,
            "cType": TArray_FName,
            "castTo": POINTER(TArray_FName),
            "TArray": True,
            "offset": 16,
        },
    ],
    "dataSize": 52,
    "index": 40305,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["GetRotationFromAttachmentLocationData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40302,
            "castTo": POINTER(c_bool),
            "offset": 40,
        },
        {
            "name": "AttachmentLocation",
            "index": 40304,
            "type": FAttachmentLocationData,
            "castTo": POINTER(FAttachmentLocationData),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "AttachmentLocationRotation",
            "isRet": True,
            "index": 40303,
            "isOutParm": True,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 28,
        },
    ],
    "dataSize": 44,
    "index": 40301,
    "retOffset": 40,
}
BL2SDK.g_classFuncs["UBehaviorHelpers"]["GetRelativeDirection"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40292,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 60,
        },
        {
            "name": "DesiredDirection",
            "index": 40296,
            "type": FRelativeDirectionData,
            "castTo": POINTER(FRelativeDirectionData),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Source",
            "index": 40295,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 32,
        },
        {
            "name": "DefaultDirection",
            "index": 40294,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 40,
        },
        {
            "name": "SpawnSocketName",
            "index": 40293,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 52,
        },
    ],
    "dataSize": 72,
    "index": 40291,
    "retOffset": 60,
}
BL2SDK.g_classFuncs["UCompoundExpressionEvaluator"]["Evaluate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40725,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 40726,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40724,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGBXActorList"]["RemoveAndDeleteActorsOfClassFromLevel"] = {
    "fields": [
        {
            "name": "TheClass",
            "index": 41021,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "Level",
            "index": 41020,
            "className": "ULevel",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 41019,
}
BL2SDK.g_classFuncs["UGBXActorList"]["RemoveActorsOfClassFromLevel"] = {
    "fields": [
        {
            "name": "TheClass",
            "index": 41018,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "Level",
            "index": 41017,
            "className": "ULevel",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 41016,
}
BL2SDK.g_classFuncs["UGBXActorList"]["RemoveAndDeleteActorsFromLevel"] = {
    "fields": [
        {
            "name": "Level",
            "index": 41015,
            "className": "ULevel",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41014,
}
BL2SDK.g_classFuncs["UGBXActorList"]["RemoveActorsFromLevel"] = {
    "fields": [
        {
            "name": "Level",
            "index": 41013,
            "className": "ULevel",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41012,
}
BL2SDK.g_classFuncs["UGBXActorList"]["FindNextActorByLevel"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41009,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 8,
        },
        {
            "name": "Level",
            "index": 41011,
            "className": "ULevel",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Index",
            "isRet": True,
            "index": 41010,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41008,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGBXActorList"]["FindFirstActorByLevel"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41005,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 8,
        },
        {
            "name": "Level",
            "index": 41007,
            "className": "ULevel",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Index",
            "isRet": True,
            "index": 41006,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41004,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGBXActorList"]["FindNextActorByClass"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41001,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 8,
        },
        {
            "name": "TheClass",
            "index": 41003,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "Index",
            "isRet": True,
            "index": 41002,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41000,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGBXActorList"]["FindFirstActorByClass"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40997,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 8,
        },
        {
            "name": "TheClass",
            "index": 40999,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "Index",
            "isRet": True,
            "index": 40998,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 40996,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGBXActorList"]["RemoveActor"] = {
    "fields": [
        {
            "name": "Actor",
            "index": 40995,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40994,
}
BL2SDK.g_classFuncs["UGBXActorList"]["AddActor"] = {
    "fields": [
        {
            "name": "Actor",
            "index": 40993,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Level",
            "index": 40992,
            "className": "ULevel",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 40991,
}
BL2SDK.g_classFuncs["UGBXObjectList"]["RemoveObjectsOfClass"] = {
    "fields": [
        {
            "name": "TheClass",
            "index": 41055,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41054,
}
BL2SDK.g_classFuncs["UGBXObjectList"]["FindNextObjectByClass"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41051,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 8,
        },
        {
            "name": "TheClass",
            "index": 41053,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "Index",
            "isRet": True,
            "index": 41052,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41050,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGBXObjectList"]["FindFirstObjectByClass"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41047,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 8,
        },
        {
            "name": "TheClass",
            "index": 41049,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "Index",
            "isRet": True,
            "index": 41048,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41046,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGBXObjectList"]["RemoveObject"] = {
    "fields": [
        {
            "name": "TheObject",
            "index": 41045,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41044,
}
BL2SDK.g_classFuncs["UGBXObjectList"]["AddObject"] = {
    "fields": [
        {
            "name": "TheObject",
            "index": 41043,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41042,
}
BL2SDK.g_classFuncs["AGearboxAIController"]["ForceMoveToActor"] = {
    "fields": [
        {
            "name": "destActor",
            "index": 41555,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41554,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["DoesPatrolPathExistToPoint"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41603,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "PatrolPoint",
            "index": 41604,
            "className": "AGearboxAIMoveNode",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41602,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["GetAllLinkedNodes"] = {
    "fields": [
        {
            "name": "OutNodes",
            "isRet": True,
            "index": 41601,
            "isOutParm": True,
            "cType": TArray_AGearboxAIMoveNodePtr,
            "castTo": POINTER(TArray_AGearboxAIMoveNodePtr),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41599,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["GetNextMoveNodeClosestToPoint"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41597,
            "castTo": POINTER(POINTER(AGearboxAIMoveNode)),
            "offset": 12,
        },
        {
            "name": "TestPoint",
            "index": 41598,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41596,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["GetNextMoveNode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41595,
            "castTo": POINTER(POINTER(AGearboxAIMoveNode)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41594,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["RemoveNode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41592,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "OldNode",
            "index": 41593,
            "className": "AGearboxAIMoveNode",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41591,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["AddNode"] = {
    "fields": [
        {
            "name": "NewNode",
            "index": 41590,
            "className": "AGearboxAIMoveNode",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41589,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["ClearLinks"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41588,
}
BL2SDK.g_classFuncs["AGearboxAIMoveNode"]["OnToggle"] = {
    "fields": [
        {
            "name": "Action",
            "index": 41587,
            "className": "USeqAct_Toggle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41586,
}
BL2SDK.g_classFuncs["AGearboxCameraBasic"]["eventFinishCameraLookAt"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41780,
}
BL2SDK.g_classFuncs["AGearboxCameraBasic"]["eventEnableThirdPersonLookAt"] = {
    "fields": [
        {
            "name": "LookAtXOffset",
            "index": 41779,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "LookAtYOffset",
            "index": 41778,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "LookAtZOffset",
            "index": 41777,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "LookAtMode",
            "index": 41776,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECameraLookAtMode",
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 13,
    "index": 41775,
}
BL2SDK.g_classFuncs["AGearboxCameraBasic"]["BeginCameraLookAt"] = {
    "fields": [
        {
            "name": "LookAtTarget",
            "index": 41774,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "LookAtBone",
            "index": 41773,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "TargetLocation",
            "index": 41772,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Zoom",
            "index": 41771,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "FOV",
            "index": 41770,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 28,
        },
        {
            "name": "Duration",
            "index": 41769,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "TransitionTimeIn",
            "index": 41768,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 40,
        },
        {
            "name": "TransitionTimeOut",
            "index": 41767,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 44,
        },
    ],
    "dataSize": 48,
    "index": 41766,
}
BL2SDK.g_classFuncs["AGearboxCameraBasic"]["CalcSimpleThirdPersonView"] = {
    "fields": [
        {
            "name": "OutVT",
            "isRet": True,
            "index": 41765,
            "isOutParm": True,
            "cType": FTViewTarget,
            "castTo": POINTER(FTViewTarget),
            "offset": 0,
        },
        {
            "name": "DeltaTime",
            "index": 41764,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 44,
        },
    ],
    "dataSize": 112,
    "index": 41758,
}
BL2SDK.g_classFuncs["AGearboxCameraBasic"]["CalcBaseView"] = {
    "fields": [
        {
            "name": "OutVT",
            "isRet": True,
            "index": 41757,
            "isOutParm": True,
            "cType": FTViewTarget,
            "castTo": POINTER(FTViewTarget),
            "offset": 0,
        },
        {
            "name": "DeltaTime",
            "index": 41756,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 44,
        },
    ],
    "dataSize": 48,
    "index": 41755,
}
BL2SDK.g_classFuncs["AGearboxCameraBasic"]["UpdateViewTarget"] = {
    "fields": [
        {
            "name": "OutVT",
            "isRet": True,
            "index": 41754,
            "isOutParm": True,
            "cType": FTViewTarget,
            "castTo": POINTER(FTViewTarget),
            "offset": 0,
        },
        {
            "name": "DeltaTime",
            "index": 41753,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 44,
        },
    ],
    "dataSize": 80,
    "index": 41751,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["LerpFOV"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40598,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Src",
            "index": 40601,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Dest",
            "index": 40600,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "T",
            "index": 40599,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 40597,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["LerpRotation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40593,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 28,
        },
        {
            "name": "Src",
            "index": 40596,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Dest",
            "index": 40595,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "T",
            "index": 40594,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 40,
    "index": 40592,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["LerpLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40588,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
        {
            "name": "Src",
            "index": 40591,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Dest",
            "index": 40590,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "T",
            "index": 40589,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 40,
    "index": 40587,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["UpdateAllLerps"] = {
    "fields": [
        {
            "name": "DeltaTime",
            "index": 40586,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "OutPOV",
            "isRet": True,
            "index": 40585,
            "isOutParm": True,
            "cType": FTPOV,
            "castTo": POINTER(FTPOV),
            "offset": 4,
        },
    ],
    "dataSize": 64,
    "index": 40583,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["UpdateMasterFadePercentage"] = {
    "fields": [
        {
            "name": "AdjustedDeltaTime",
            "index": 40582,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 40581,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["IsFadingDownwards"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40580,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40579,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["IsFadingUpwards"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40578,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40577,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["IsFadeInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40576,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40575,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["StartFadeOut"] = {
    "fields": [
        {
            "name": "NewTimeSpan",
            "index": 40574,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewDisableWhenFadedOut",
            "index": 40573,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "NewFadeMode",
            "index": 40572,
            "optional": True,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECameraInterpolationMode",
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 9,
    "index": 40571,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["StartFadeIn"] = {
    "fields": [
        {
            "name": "NewTimeSpan",
            "index": 40570,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewFadeMode",
            "index": 40569,
            "optional": True,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECameraInterpolationMode",
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 5,
    "index": 40568,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["SetDesiredCamera"] = {
    "fields": [
        {
            "name": "DesiredLoc",
            "index": 40567,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "DesiredRot",
            "index": 40566,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "DesiredFOV",
            "index": 40565,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 40564,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["SetGBXCameraOwner"] = {
    "fields": [
        {
            "name": "InCamera",
            "index": 40563,
            "className": "AGearboxCameraBasic",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40562,
}
BL2SDK.g_classFuncs["UGearboxCameraModifier"]["AddCameraModifier"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40560,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Camera",
            "index": 40561,
            "className": "ACamera",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40559,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["eventServerDialog_TriggerEvent"] = {
    "fields": [
        {
            "name": "EventTag",
            "index": 42102,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Other",
            "index": 42101,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "ObjectParameter",
            "index": 42100,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 42099,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["SetDialogNameTag"] = {
    "fields": [
        {
            "name": "NewName",
            "index": 42098,
            "className": "UGearboxDialogNameTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42097,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["GetReplicatedDialogData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42096,
            "cType": FGearboxDialogReplicatedData,
            "castTo": POINTER(FGearboxDialogReplicatedData),
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 42095,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["SetReplicatedDialogData"] = {
    "fields": [
        {
            "name": "TalkAct",
            "index": 42094,
            "className": "UGearboxDialogAct_Talk",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 42093,
            "isOutParm": True,
            "cType": FGearboxDialogData,
            "castTo": POINTER(FGearboxDialogData),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 42092,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["GetDialogGroups"] = {
    "fields": [
        {
            "name": "Groups",
            "isRet": True,
            "index": 42091,
            "isOutParm": True,
            "cType": TArray_UGearboxDialogGroupPtr,
            "castTo": POINTER(TArray_UGearboxDialogGroupPtr),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42089,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["GetDialogComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40241,
            "castTo": POINTER(POINTER(UGearboxDialogComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40240,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["GetDialogNameTag"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42088,
            "castTo": POINTER(POINTER(UGearboxDialogNameTag)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42087,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["GetActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40255,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40254,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxDialogInterface"]["CanTalk"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42086,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42085,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxEditorNode"]["IsChild"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39595,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TestNode",
            "index": 39596,
            "className": "UGearboxEditorNode",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 39594,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxEngine"]["GetSparkInterface"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41225,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 41224,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxEngine"]["eventIsCurrentDeviceValid"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42181,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "SizeNeeded",
            "index": 42182,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 42180,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxEngine"]["HasStorageDeviceBeenRemoved"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42179,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42178,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxEngine"]["GetCurrentDeviceID"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42177,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42176,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxEngine"]["SetCurrentDeviceID"] = {
    "fields": [
        {
            "name": "NewDeviceID",
            "index": 42175,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bProfileSignedOut",
            "index": 42174,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 42173,
}
BL2SDK.g_classFuncs["AGearboxGameInfo"]["eventPostLogin"] = {
    "fields": [
        {
            "name": "NewPlayer",
            "index": 42184,
            "className": "APlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42183,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["extSetLanguageExt"] = {
    "fields": [
        {
            "name": "ClipPath",
            "index": 42383,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42382,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["OnClosedOnDeath"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42381,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["IsShowingFlashMouse"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42380,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42379,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["extIsMouseablePlatform"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42378,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42377,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventSetMouseableFlag"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42376,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GetStyleDebugString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42373,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 40,
    "index": 42370,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GetStateDebugString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42368,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "bIncludeFlags",
            "index": 42369,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 44,
    "index": 42365,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["InitializeFrom"] = {
    "fields": [
        {
            "name": "SrcMovie",
            "index": 42364,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42363,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["RemoveStylesDrawnTo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42360,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "PrimComp",
            "index": 42362,
            "className": "UPrimitiveComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Target",
            "index": 42361,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 42359,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["RemoveStyles"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42357,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "Target",
            "index": 42358,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42356,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["RemoveStyle"] = {
    "fields": [
        {
            "name": "Style",
            "index": 42355,
            "className": "UGFxMovieDrawStyle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42354,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["AddStyle"] = {
    "fields": [
        {
            "name": "Style",
            "index": 42353,
            "className": "UGFxMovieDrawStyle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42352,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["ShutdownMoviePlayback"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42295,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["InitMoviePlayback"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42293,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GetRenderTexture"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42351,
            "castTo": POINTER(POINTER(UTextureRenderTarget2D)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42350,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventMovieState_OnChanged"] = {
    "fields": [
        {
            "name": "bStateWasChanged",
            "index": 42348,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42347,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventMovieState_SetFromMovie"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42345,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Movie",
            "index": 42346,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42344,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_Copy"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42341,
            "castTo": POINTER(c_bool),
            "offset": 48,
        },
        {
            "name": "StateDst",
            "isRet": True,
            "index": 42343,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 0,
        },
        {
            "name": "StateSrc",
            "isRet": True,
            "index": 42342,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 24,
        },
    ],
    "dataSize": 52,
    "index": 42340,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_Compare"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42337,
            "castTo": POINTER(c_bool),
            "offset": 48,
        },
        {
            "name": "S1",
            "isRet": True,
            "index": 42339,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 0,
        },
        {
            "name": "S2",
            "isRet": True,
            "index": 42338,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 24,
        },
    ],
    "dataSize": 52,
    "index": 42336,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_Toggle"] = {
    "fields": [
        {
            "name": "TheState",
            "index": 42335,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 42334,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_Enable"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42331,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "TheState",
            "index": 42333,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bEnable",
            "index": 42332,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 42330,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_IsEnabled"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42328,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "TheState",
            "index": 42329,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42327,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_SupportsState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42325,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "TheState",
            "index": 42326,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42324,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_Init"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42323,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["InitFromDefinition"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42322,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_Apply"] = {
    "fields": [
        {
            "name": "Movie",
            "index": 42321,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "HandlerClass",
            "index": 42320,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 42319,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["MovieState_ApplyState"] = {
    "fields": [
        {
            "name": "TheState",
            "index": 42318,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Movie",
            "index": 42317,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 42316,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["ApplyState"] = {
    "fields": [
        {
            "name": "StateName",
            "index": 42315,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "StateAction",
            "index": 42314,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 42313,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["SetRenderingEnabled"] = {
    "fields": [
        {
            "name": "bEnabled",
            "index": 42312,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42311,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GotoAndStop"] = {
    "fields": [
        {
            "name": "FrameLabel",
            "index": 42310,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42309,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GotoAndPlay"] = {
    "fields": [
        {
            "name": "FrameLabel",
            "index": 42308,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42307,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["PlaySpecialUISound"] = {
    "fields": [
        {
            "name": "SoundString",
            "index": 42306,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 42304,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventPlayUISound"] = {
    "fields": [
        {
            "name": "UIEvent",
            "index": 42303,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 42302,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventSetOtherObject"] = {
    "fields": [
        {
            "name": "Obj",
            "index": 42301,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42300,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GetInstanceContextObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42299,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42298,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventOnTick"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42297,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventOnClose"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42296,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["eventStart"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42291,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "StartPaused",
            "index": 42292,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42290,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["ColorizeTooltipText"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42287,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 16,
        },
        {
            "name": "S",
            "index": 42289,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "bDisabled",
            "index": 42288,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 42286,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GFxColoredText"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42282,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 20,
        },
        {
            "name": "C",
            "isRet": True,
            "index": 42285,
            "isOutParm": True,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 0,
        },
        {
            "name": "S",
            "isRet": True,
            "index": 42284,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "bAppendNewline",
            "index": 42283,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 42281,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["SingleArgInvokeB"] = {
    "fields": [
        {
            "name": "Command",
            "index": 42280,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Arg",
            "index": 42279,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 42278,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["SingleArgInvokeS"] = {
    "fields": [
        {
            "name": "Command",
            "index": 42277,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Arg",
            "index": 42276,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 42275,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["SingleArgInvokeF"] = {
    "fields": [
        {
            "name": "Command",
            "index": 42274,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Arg",
            "index": 42273,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 42272,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["GetLocalPlayer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42271,
            "castTo": POINTER(POINTER(ULocalPlayer)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42270,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["OnClosed"] = {
    "fields": [
        {
            "name": "Movie",
            "index": 42269,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42240,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["WantsControllerInput"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42267,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 42268,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42266,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["SetExternalTexture"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42263,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "Resource",
            "index": 42265,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Texture",
            "index": 42264,
            "className": "UTexture",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 42262,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGearboxGFxMovie"]["OnInputAxis"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42257,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "ControllerId",
            "index": 42261,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ukey",
            "index": 42260,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "Delta",
            "index": 42259,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "DeltaTime",
            "index": 42258,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 42242,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxMovie_StateParent"]["MovieState_OnChanged"] = {
    "fields": [
        {
            "name": "bStateWasChanged",
            "index": 43521,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43520,
}
BL2SDK.g_classFuncs["UGFxMovie_StateParent"]["eventStart"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43518,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "StartPaused",
            "index": 43519,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 43517,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetBehaviorKernel"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39044,
            "castTo": POINTER(POINTER(UBehaviorKernel)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39043,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetDialogManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39042,
            "castTo": POINTER(POINTER(UGearboxDialogManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39041,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetPopulationRespawnDelay"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39040,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39039,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["eventShowDialog"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39037,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 4,
        },
        {
            "name": "PC",
            "index": 39038,
            "className": "APlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 39036,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["NotifyActorDied"] = {
    "fields": [
        {
            "name": "TheActor",
            "index": 39035,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bKeepBody",
            "index": 39034,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 39033,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["DoesLOSIntersectSpecialOccluder"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39028,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "FromLoc",
            "index": 39031,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "ToLoc",
            "index": 39030,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "AllegianceAffected",
            "index": 39029,
            "className": "UPawnAllegiance",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 32,
    "index": 39027,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["HasPhysXCapableGPU"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39045,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39032,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetPlatform"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39026,
            "castTo": POINTER(c_ubyte),
            "enumName": "EGBXPlatform",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 39025,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["ValidatePlayerName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39022,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "InName",
            "isRet": True,
            "index": 39024,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "bReplaceCharacters",
            "index": 39023,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 39021,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["RegisterStateKey"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39017,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "LevelName",
            "index": 39020,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "ObjectName",
            "index": 39019,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "AdditionalKey",
            "index": 39018,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 39016,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["DoesStateKeyExist"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39012,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "LevelName",
            "index": 39015,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "ObjectName",
            "index": 39014,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "AdditionalKey",
            "index": 39013,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 39011,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["FreeTexture2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39009,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Texture",
            "index": 39010,
            "className": "UTexture2D",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 39008,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetTexture2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39007,
            "castTo": POINTER(POINTER(UTexture2D)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39006,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetRenderTextureManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39005,
            "castTo": POINTER(POINTER(UGearboxRenderTextureManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39004,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetGFxManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39003,
            "castTo": POINTER(POINTER(UGFxMovieManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39002,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetScreenSpaceManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39001,
            "castTo": POINTER(POINTER(UScreenSpaceManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39000,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetMessageManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38999,
            "castTo": POINTER(POINTER(UGbxMessageManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38998,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["RegDynamicTextureStreaming"] = {
    "fields": [
        {
            "name": "A",
            "index": 38997,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bRegister",
            "index": 38996,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38995,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetDynamicTextureActorList"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38994,
            "castTo": POINTER(POINTER(UGBXActorList)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38993,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetPopulationMaster"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38992,
            "castTo": POINTER(POINTER(UPopulationMaster)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38991,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetWireManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38990,
            "castTo": POINTER(POINTER(AWireManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38989,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetGBXObjectList"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38988,
            "castTo": POINTER(POINTER(UGBXObjectList)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38987,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetGBXActorList"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38986,
            "castTo": POINTER(POINTER(UGBXActorList)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38985,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetRuleEngineLoadBalanceManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38984,
            "castTo": POINTER(POINTER(URuleEngineLoadBalanceManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38983,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetGearboxAIFactory"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38982,
            "castTo": POINTER(POINTER(UGearboxAIFactory)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38981,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetExposureUtility"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38980,
            "castTo": POINTER(POINTER(UExposureUtilityBase)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38979,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxGlobals"]["GetGearboxGlobals"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38978,
            "castTo": POINTER(POINTER(UGearboxGlobals)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38977,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxLocationRequest"]["GetLastDirection"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42403,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42402,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxLocationRequest"]["GetLastOrigin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42401,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42400,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxLocationRequest"]["GetDirection"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42397,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ContextActor",
            "index": 42399,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutDirection",
            "isRet": True,
            "index": 42398,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 42396,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGearboxLocationRequest"]["GetOrigin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42393,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ContextActor",
            "index": 42395,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutOrigin",
            "isRet": True,
            "index": 42394,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 42392,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGearboxLocationRequest"]["Get"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42389,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ContextActor",
            "index": 42391,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutLocation",
            "isRet": True,
            "index": 42390,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 39136,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UPawnMoveLocationRequest"]["Get"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39137,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ContextActor",
            "index": 43816,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutLocation",
            "isRet": True,
            "index": 43815,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 39135,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetAimDirection"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42874,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42873,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["SetDialogNameTag"] = {
    "fields": [
        {
            "name": "NewName",
            "index": 42872,
            "className": "UGearboxDialogNameTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42871,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventServerDialog_TriggerEvent"] = {
    "fields": [
        {
            "name": "EventTag",
            "index": 42870,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Other",
            "index": 42869,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "ObjectParameter",
            "index": 42868,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 42867,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetReplicatedDialogData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42866,
            "cType": FGearboxDialogReplicatedData,
            "castTo": POINTER(FGearboxDialogReplicatedData),
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 42865,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["SetReplicatedDialogData"] = {
    "fields": [
        {
            "name": "TalkAct",
            "index": 42864,
            "className": "UGearboxDialogAct_Talk",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 42863,
            "isOutParm": True,
            "cType": FGearboxDialogData,
            "castTo": POINTER(FGearboxDialogData),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 42862,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetDialogGroups"] = {
    "fields": [
        {
            "name": "Groups",
            "isRet": True,
            "index": 42861,
            "isOutParm": True,
            "cType": TArray_UGearboxDialogGroupPtr,
            "castTo": POINTER(TArray_UGearboxDialogGroupPtr),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42859,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetDialogComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42858,
            "castTo": POINTER(POINTER(UGearboxDialogComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42857,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetDialogNameTag"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42856,
            "castTo": POINTER(POINTER(UGearboxDialogNameTag)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42855,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["CanTalk"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42854,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42853,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["OnCoverStateChanged"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42852,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["ServerSetCoverState"] = {
    "fields": [
        {
            "name": "NewCoverState",
            "index": 42851,
            "type": FGearboxCoverState,
            "castTo": POINTER(FGearboxCoverState),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42850,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventSetCoverState"] = {
    "fields": [
        {
            "name": "NewCoverState",
            "index": 42849,
            "type": FGearboxCoverState,
            "castTo": POINTER(FGearboxCoverState),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42848,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetMountAnimDistanceForSpeed"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42844,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "TheSpeed",
            "index": 42847,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EMovementSpeed",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "CoverHeight",
            "index": 42846,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECoverType",
            "flags": 32,
            "offset": 1,
        },
        {
            "name": "CoverDir",
            "index": 42845,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECoverDirection",
            "flags": 32,
            "offset": 2,
        },
    ],
    "dataSize": 8,
    "index": 42843,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventGetSpotOthersShouldLookAt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42842,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 36,
    "index": 42839,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["SetReplicatedSMData"] = {
    "fields": [
        {
            "name": "NewSMData",
            "isRet": True,
            "index": 42838,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 42837,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventServerSpecialMove_StopAny"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42836,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventServerSpecialMove_Stop"] = {
    "fields": [
        {
            "name": "OldSMD",
            "index": 42835,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42834,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventServerSpecialMove_Queue"] = {
    "fields": [
        {
            "name": "NewSMD",
            "index": 42833,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PlayRateScale",
            "index": 42832,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Duration",
            "index": 42831,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "CallbackName",
            "index": 42830,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "CallbackObject",
            "index": 42829,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "Data",
            "index": 42828,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 42827,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventServerSpecialMove_Play"] = {
    "fields": [
        {
            "name": "NewSMD",
            "index": 42826,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PlayRateScale",
            "index": 42825,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Duration",
            "index": 42824,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "CallbackName",
            "index": 42823,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "CallbackObject",
            "index": 42822,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "Data",
            "index": 42821,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 42820,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetDefaultRootMotionRotationMode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42819,
            "castTo": POINTER(c_ubyte),
            "enumName": "ERootMotionRotationMode",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 42818,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetDefaultRootMotionMode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42817,
            "castTo": POINTER(c_ubyte),
            "enumName": "ERootMotionMode",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 42816,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetSkelMesh"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42815,
            "castTo": POINTER(POINTER(USkeletalMeshComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42814,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetSMComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42813,
            "castTo": POINTER(POINTER(USpecialMoveComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42812,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42811,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42810,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["GetNavigationHandle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42809,
            "castTo": POINTER(POINTER(UGearboxNavigationHandle)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42808,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["PlayHit"] = {
    "fields": [
        {
            "name": "SomePawn",
            "index": 42807,
            "className": "APawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "HitLocation",
            "index": 42806,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "DamageType",
            "index": 42805,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 16,
        },
        {
            "name": "Momentum",
            "index": 42804,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 20,
        },
        {
            "name": "HitInfo",
            "index": 42803,
            "type": FTraceHitInfo,
            "castTo": POINTER(FTraceHitInfo),
            "flags": 64,
            "offset": 32,
        },
        {
            "name": "Pipeline",
            "index": 42802,
            "optional": True,
            "className": "UDamagePipeline",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 60,
        },
    ],
    "dataSize": 68,
    "index": 42801,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventReplicatedEvent"] = {
    "fields": [
        {
            "name": "VarName",
            "index": 42800,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 42799,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["Died"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42794,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "Killer",
            "index": 42798,
            "className": "AController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "DamageType",
            "index": 42797,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 4,
        },
        {
            "name": "HitLocation",
            "index": 42796,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "Pipeline",
            "index": 42795,
            "optional": True,
            "className": "UDamagePipeline",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 42793,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["SetMovementPhysics"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42792,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["eventPostBeginPlay"] = {
    "fields": [],
    "dataSize": 8,
    "index": 42790,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["NotifyShotAtBy"] = {
    "fields": [
        {
            "name": "ShootingPawn",
            "index": 42789,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42788,
}
BL2SDK.g_classFuncs["AGearboxPawn"]["HaveIBeenShotAtRecently"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42787,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42786,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["RequestTitleStorageFile"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43246,
            "castTo": POINTER(c_int),
            "offset": 40,
        },
        {
            "name": "Filename",
            "index": 43250,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "TitleStorageRequestCompleteDelegate",
            "index": 43249,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 12,
        },
        {
            "name": "AcceptsType",
            "index": 43248,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "HttpMimeType",
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "CustomAcceptsType",
            "index": 43247,
            "optional": True,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 28,
        },
    ],
    "dataSize": 136,
    "index": 43240,
    "retOffset": 40,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ShowSparkID"] = {
    "fields": [],
    "dataSize": 12,
    "index": 43238,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ShouldCheckRemoteControlCheckbox"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43235,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "CheckBoxName",
            "index": 43237,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "HUD",
            "index": 43236,
            "optional": True,
            "className": "AHUD",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43234,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["DisplayDebugSpark"] = {
    "fields": [
        {
            "name": "HUD",
            "index": 43233,
            "className": "AHUD",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "out_YL",
            "isRet": True,
            "index": 43232,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "out_YPos",
            "isRet": True,
            "index": 43231,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 43230,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AITree"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43229,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIToggleTargetViewCones"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43228,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIToggleAwarenessZones"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43227,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIToggleCombat"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43226,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIToggleResources"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43225,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIToggleInactiveRules"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43224,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIToggleRules"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43223,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIToggleFlags"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43222,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIDebugNextSnapshot"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43221,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIDebugPrevSnapshot"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43220,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ainext"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43219,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["aiprev"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43218,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AINextRule"] = {
    "fields": [
        {
            "name": "bSkipContainers",
            "index": 43217,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43216,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIPrevRule"] = {
    "fields": [
        {
            "name": "bSkipContainers",
            "index": 43215,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43214,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIDebugSetPawn"] = {
    "fields": [
        {
            "name": "NewPawn",
            "index": 43213,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43212,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["AIDebugSetPawnByName"] = {
    "fields": [
        {
            "name": "NewPawnName",
            "index": 43211,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43210,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["debugpawn"] = {
    "fields": [],
    "dataSize": 12,
    "index": 43209,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["aisetp"] = {
    "fields": [
        {
            "name": "NewPawnName",
            "index": 43208,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 43207,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NotifyGameUnPaused"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43206,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NotifyGamePaused"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43205,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["SetSettingsFromProfile"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43204,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["GetStorageDeviceID"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43203,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43202,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["SetStorageDeviceID"] = {
    "fields": [
        {
            "name": "DeviceID",
            "index": 43201,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43200,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NotifyDeviceSelectComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 43199,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 43196,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["eventDisplayStorageRemovedMenu"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43195,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["DisplayProfileRemovedMenu"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43194,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"][
    "NotifyProfileWriteFromStorageChangeComplete"
] = {
    "fields": [
        {
            "name": "LocalUser",
            "index": 43193,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 43192,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43191,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["IsCurrentStorageDeviceValid"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43190,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43189,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NotifyStorageDeviceChange"] = {
    "fields": [],
    "dataSize": 4,
    "index": 43188,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["eventDestroyOnlineGame"] = {
    "fields": [],
    "dataSize": 8,
    "index": 43186,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ReturnToTitleScreen"] = {
    "fields": [
        {
            "name": "bSkipSave",
            "index": 43185,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bRemoveSplitPlayer",
            "index": 43184,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43183,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["GetConnectionFailureNoticeMsg"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43182,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43181,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["GetMainMenuMapName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43180,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43179,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NotifyLinkStatusChange"] = {
    "fields": [
        {
            "name": "bIsConnected",
            "index": 43178,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 43176,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NotifyLoginStatusChange"] = {
    "fields": [
        {
            "name": "NewStatus",
            "index": 43175,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ELoginStatus",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewId",
            "index": 43174,
            "type": FUniqueNetId,
            "castTo": POINTER(FUniqueNetId),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 52,
    "index": 43172,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NotifyLoginChange"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 43170,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 37,
    "index": 43167,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["OnReadProfileSettingsComplete"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 43258,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 43259,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43171,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["OnReceivedNewProfile"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43257,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ClearOnlineDelegates"] = {
    "fields": [],
    "dataSize": 4,
    "index": 43166,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["RegisterOnlineDelegates"] = {
    "fields": [],
    "dataSize": 4,
    "index": 43165,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["OnProfileWriteComplete"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 43164,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 43163,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43162,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["HidePS3WritingProfileDialog"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43161,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ShowPS3WritingProfileDialog"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43160,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["eventWriteProfile"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43158,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "bShouldShowProfileDialog",
            "index": 43159,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 43156,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["eventGetProfileSettings"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43155,
            "castTo": POINTER(POINTER(UGearboxProfileSettings)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43154,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["GetMyControllerId"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43153,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 43152,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["eventReadProfile"] = {
    "fields": [],
    "dataSize": 1,
    "index": 43149,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["UnregisterPlayerDataStores"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43151,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["RegisterCustomPlayerDataStores"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43148,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["SetDataStoreStringValue"] = {
    "fields": [
        {
            "name": "MarkupString",
            "index": 43147,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "NewValue",
            "index": 43146,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 43145,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["GetDataStoreStringValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43143,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "MarkupString",
            "index": 43144,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 43142,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"][
    "eventClientKeepPlayingLoadingMovie"
] = {"fields": [], "dataSize": 0, "index": 43141}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ClientResetCamera"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43140,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["eventSpawnPlayerCamera"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43139,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["eventInitInputSystem"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43138,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NoTargetAll"] = {
    "fields": [],
    "dataSize": 8,
    "index": 43137,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["NoTarget"] = {
    "fields": [],
    "dataSize": 4,
    "index": 43136,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["GetNoTargetPlayers"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43133,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43132,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["SetNoTargetPlayers"] = {
    "fields": [
        {
            "name": "bNoTarget",
            "index": 43135,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43134,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["Possess"] = {
    "fields": [
        {
            "name": "aPawn",
            "index": 43131,
            "className": "APawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bVehicleTransition",
            "index": 43130,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43129,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["DontTarget"] = {
    "fields": [
        {
            "name": "bModeFlag",
            "index": 43128,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 43127,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ClientConsoleCommand"] = {
    "fields": [
        {
            "name": "Command",
            "index": 43126,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43125,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["IsPlayerAllowingActiveMoment"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40708,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40707,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["IsActiveMomentRunning"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40706,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40705,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ViewShake"] = {
    "fields": [
        {
            "name": "DeltaTime",
            "index": 43124,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43123,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["UpdateShakeRotComponent"] = {
    "fields": [
        {
            "name": "Max",
            "isRet": True,
            "index": 43122,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "Current",
            "isRet": True,
            "index": 43121,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "Rate",
            "isRet": True,
            "index": 43120,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "Time",
            "index": 43119,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "DeltaTime",
            "index": 43118,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 43117,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["CheckShake"] = {
    "fields": [
        {
            "name": "MaxOffset",
            "isRet": True,
            "index": 43116,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "Offset",
            "isRet": True,
            "index": 43115,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "Rate",
            "isRet": True,
            "index": 43114,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "Time",
            "index": 43113,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 43112,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["StopViewShaking"] = {
    "fields": [],
    "dataSize": 68,
    "index": 43110,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["OnCameraShake"] = {
    "fields": [
        {
            "name": "ShakeAction",
            "index": 43107,
            "className": "UGearboxSeqAct_CameraShake",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43106,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ShakeView"] = {
    "fields": [
        {
            "name": "NewViewShake",
            "index": 43105,
            "type": FGearboxViewShakeInfo,
            "castTo": POINTER(FGearboxViewShakeInfo),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 68,
    "index": 43104,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ClientDamageShake"] = {
    "fields": [
        {
            "name": "Damage",
            "index": 43103,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 72,
    "index": 43101,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["ConsoleEcho"] = {
    "fields": [
        {
            "name": "Text",
            "index": 43100,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "bLogOutput",
            "index": 43099,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 43098,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["Initialize"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43097,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["PostBeginPlay"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43096,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["TryAndSpawnLeviathanChannel"] = {
    "fields": [
        {
            "name": "Connection",
            "index": 43095,
            "className": "UNetConnection",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42185,
}
BL2SDK.g_classFuncs["AGearboxPlayerController"]["GenerateNewSessionGuid"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43094,
}
BL2SDK.g_classFuncs["UGearboxPlayerInput"]["eventPlayerInput"] = {
    "fields": [
        {
            "name": "DeltaTime",
            "index": 43262,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43261,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["SetThumbnailMesh"] = {
    "fields": [
        {
            "name": "Texture",
            "index": 43350,
            "className": "UTexture",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Mesh",
            "index": 43349,
            "className": "UMeshComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43348,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["FreeContext"] = {
    "fields": [
        {
            "name": "Context",
            "index": 43347,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 43346,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["FreeThumbnail"] = {
    "fields": [
        {
            "name": "Texture",
            "index": 43345,
            "className": "UTexture",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43344,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["GetThumbnail"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43337,
            "castTo": POINTER(POINTER(UTexture)),
            "offset": 28,
        },
        {
            "name": "Context",
            "index": 43343,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "TextureSizeX",
            "index": 43342,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "TextureSizeY",
            "index": 43341,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "UpdateType",
            "index": 43340,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EThumbnailUpdate",
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "SizeX",
            "index": 43339,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 20,
        },
        {
            "name": "SizeY",
            "index": 43338,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 32,
    "index": 43336,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["FreeTexture2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43334,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Texture",
            "index": 43335,
            "className": "UTexture2D",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43333,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["GetTexture2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43332,
            "castTo": POINTER(POINTER(UTexture2D)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43331,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["FreeRenderTexture"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43329,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Texture",
            "index": 43330,
            "className": "UTextureRenderTarget2D",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43328,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxRenderTextureManager"]["GetRenderTexture"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43324,
            "castTo": POINTER(POINTER(UTextureRenderTarget2D)),
            "offset": 12,
        },
        {
            "name": "InSizeX",
            "index": 43327,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "InSizeY",
            "index": 43326,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "bNeedsTwoCopies",
            "index": 43325,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 43323,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxSkeletalMeshComponent"]["SetFOV"] = {
    "fields": [
        {
            "name": "NewFOV",
            "index": 43444,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43443,
}
BL2SDK.g_classFuncs["UGestaltSkeletalMeshDefinition"][
    "InitGestaltAccessoryMeshDataFromParts"
] = {
    "fields": [
        {
            "name": "MeshToBorrowBonesFrom",
            "index": 43488,
            "className": "USkeletalMesh",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AccessoryMatrices",
            "index": 43487,
            "className": "UGestaltPartMatrices",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "TargetComponent",
            "index": 43486,
            "className": "USkeletalMeshComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "PermutationConfiguration",
            "isRet": True,
            "index": 43485,
            "isOutParm": True,
            "cType": TArray_FGestaltPartPermutation,
            "castTo": POINTER(TArray_FGestaltPartPermutation),
            "TArray": True,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 43483,
}
BL2SDK.g_classFuncs["UGestaltSkeletalMeshDefinition"][
    "InitGestaltMeshDataFromParts"
] = {
    "fields": [
        {
            "name": "TargetComponent",
            "index": 43482,
            "className": "USkeletalMeshComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PartMeshNames",
            "isRet": True,
            "index": 43481,
            "isOutParm": True,
            "cType": TArray_FName,
            "castTo": POINTER(TArray_FName),
            "TArray": True,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 43479,
}
BL2SDK.g_classFuncs["UGFxActorMoviePool"]["DisplayDebug"] = {
    "fields": [
        {
            "name": "HUD",
            "index": 43512,
            "className": "AHUD",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "X",
            "index": 43511,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "out_YL",
            "isRet": True,
            "index": 43510,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "out_YPos",
            "isRet": True,
            "index": 43509,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
    ],
    "dataSize": 52,
    "index": 43507,
}
BL2SDK.g_classFuncs["UGFxActorMoviePool"]["GetPoolName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43505,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "Index",
            "index": 43506,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 43503,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxActorMoviePool"]["PoolStyleString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43501,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "Pooling",
            "index": 43502,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EGFxMoviePooling",
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 43500,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxActorMoviePool"]["MovieStateChanged"] = {
    "fields": [
        {
            "name": "Movie",
            "index": 43499,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42349,
}
BL2SDK.g_classFuncs["UGFxMovieDefinition"]["FindMovieLink"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43567,
            "castTo": POINTER(POINTER(UGFxMovieDefinition)),
            "offset": 8,
        },
        {
            "name": "MovieName",
            "index": 43568,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 43566,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxMovieDefinition"]["PostMovieStart"] = {
    "fields": [
        {
            "name": "StartedMovie",
            "index": 43565,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42294,
}
BL2SDK.g_classFuncs["UGFxMovieDefinition"]["SpawnPlayerMovie"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43560,
            "castTo": POINTER(POINTER(UGearboxGFxMovie)),
            "offset": 16,
        },
        {
            "name": "Owner",
            "index": 43563,
            "className": "AGearboxPlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TargetActor",
            "index": 43562,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
        {
            "name": "ContextObject",
            "index": 43561,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 43559,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxMovieDefinition"]["SupportsStatePooling"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43558,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43557,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMovieDefinition"]["GetPoolStyle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43514,
            "castTo": POINTER(c_ubyte),
            "enumName": "EGFxMoviePooling",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 43513,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMovieDrawStyle"]["GetStyleDebugString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42375,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42374,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleHUD"]["eventRequiresClientInstance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43593,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43592,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleMesh"]["GetStyleDebugString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43619,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43618,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleMesh"]["eventRequiresClientInstance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43617,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43616,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleSplitscreen"]["eventRequiresClientInstance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43621,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43620,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMovieManager"]["ChangeMovieState"] = {
    "fields": [
        {
            "name": "TargetActor",
            "index": 43651,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "State",
            "index": 43650,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "Change",
            "index": 43649,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EChangeStatus",
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "PC",
            "index": 43648,
            "optional": True,
            "className": "AGearboxPlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 43647,
}
BL2SDK.g_classFuncs["UGFxMovieManager"]["Unsubscribe"] = {
    "fields": [
        {
            "name": "PC",
            "index": 43646,
            "className": "AGearboxPlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43645,
}
BL2SDK.g_classFuncs["UGFxMovieManager"]["Subscribe"] = {
    "fields": [
        {
            "name": "PC",
            "index": 43644,
            "className": "AGearboxPlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43643,
}
BL2SDK.g_classFuncs["UGFxMovieManager"]["UnregisterMoviesDrawnTo"] = {
    "fields": [
        {
            "name": "PrimComp",
            "index": 43642,
            "className": "UPrimitiveComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TargetActor",
            "index": 43641,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43640,
}
BL2SDK.g_classFuncs["UGFxMovieManager"]["UnregisterTarget"] = {
    "fields": [
        {
            "name": "TargetActor",
            "index": 43639,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 43638,
}
BL2SDK.g_classFuncs["UGFxMovieManager"]["UnregisterMovie"] = {
    "fields": [
        {
            "name": "Definition",
            "index": 43637,
            "className": "UGFxMovieDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TargetActor",
            "index": 43636,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43635,
}
BL2SDK.g_classFuncs["UGFxMovieManager"]["RegisterMovie"] = {
    "fields": [
        {
            "name": "Definition",
            "index": 43634,
            "className": "UGFxMovieDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TargetActor",
            "index": 43633,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43632,
}
BL2SDK.g_classFuncs["UGFxMovieState"]["GetDebugString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42197,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 8,
        },
        {
            "name": "Movie",
            "index": 42188,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bIncludeFlags",
            "index": 42189,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 40,
    "index": 42186,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxMovieState"]["ApplyMovieState"] = {
    "fields": [
        {
            "name": "Movie",
            "index": 42199,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "HandlerClass",
            "index": 42203,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 42187,
}
BL2SDK.g_classFuncs["UGFxMovieState"]["FindMovieState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42206,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "TheState",
            "index": 42205,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42198,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxMovieState"]["TestState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42210,
            "castTo": POINTER(c_bool),
            "offset": 32,
        },
        {
            "name": "TheState",
            "index": 42208,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "MovieState",
            "isRet": True,
            "index": 42209,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 8,
        },
    ],
    "dataSize": 36,
    "index": 42204,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UGFxMovieState"]["ToggleState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42219,
            "castTo": POINTER(c_int),
            "offset": 32,
        },
        {
            "name": "TheState",
            "index": 42217,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "MovieState",
            "isRet": True,
            "index": 42218,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 8,
        },
    ],
    "dataSize": 36,
    "index": 42207,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UGFxMovieState"]["EnableState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42223,
            "castTo": POINTER(c_int),
            "offset": 36,
        },
        {
            "name": "TheState",
            "index": 42220,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "MovieState",
            "isRet": True,
            "index": 42221,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 8,
        },
        {
            "name": "bEnable",
            "index": 42222,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 40,
    "index": 42216,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UGFxMovieStatePlayerAware"]["EnableState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43664,
            "castTo": POINTER(c_int),
            "offset": 36,
        },
        {
            "name": "TheState",
            "index": 43667,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "MovieState",
            "isRet": True,
            "index": 43666,
            "isOutParm": True,
            "cType": FMovieStateStruct,
            "castTo": POINTER(FMovieStateStruct),
            "offset": 8,
        },
        {
            "name": "bEnable",
            "index": 43665,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 40,
    "index": 43663,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UIAIInterface"]["InitSequence"] = {
    "fields": [
        {
            "name": "NewSequence",
            "index": 43687,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43686,
}
BL2SDK.g_classFuncs["UIAIInterface"]["GetAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43685,
            "castTo": POINTER(POINTER(UPawnAllegiance)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43684,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIAIInterface"]["GetAIDefinition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43683,
            "castTo": POINTER(POINTER(UAIDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43682,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIAIInterface"]["GetAIComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39285,
            "castTo": POINTER(POINTER(UAIComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39284,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIAIInterface"]["GetAIParent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43681,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 43680,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIAIInterface"]["GetAILocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43679,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43678,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIAIInterface"]["GetAIActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43677,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43676,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIAIInterface"]["CanTickAI"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43675,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43674,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIGFxActorMovie"]["GFx_NotifyMovieDestroy"] = {
    "fields": [
        {
            "name": "Movie",
            "index": 43721,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43720,
}
BL2SDK.g_classFuncs["UIGFxActorMovie"]["GFx_NotifyMovieCreate"] = {
    "fields": [
        {
            "name": "Movie",
            "index": 43719,
            "className": "UGearboxGFxMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43718,
}
BL2SDK.g_classFuncs["UIGFxActorMovie"]["GFx_GetMovieActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43572,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43571,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UInterfaceGearboxCamera"]["eventFinishCameraLookAt"] = {
    "fields": [],
    "dataSize": 0,
    "index": 40643,
}
BL2SDK.g_classFuncs["UInterfaceGearboxCamera"]["EnableThirdPersonLookAt"] = {
    "fields": [
        {
            "name": "LookAtXOffset",
            "index": 40642,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "LookAtYOffset",
            "index": 40641,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "LookAtZOffset",
            "index": 40640,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "LookAtMode",
            "index": 40639,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECameraLookAtMode",
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 13,
    "index": 40638,
}
BL2SDK.g_classFuncs["UInterfaceGearboxCamera"]["BeginCameraLookAt"] = {
    "fields": [
        {
            "name": "LookAtTarget",
            "index": 40636,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "LookAtBone",
            "index": 40635,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "TargetLocation",
            "index": 40634,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Zoom",
            "index": 40633,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "FOV",
            "index": 40632,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 28,
        },
        {
            "name": "Duration",
            "index": 40631,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "TransitionTimeIn",
            "index": 40630,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 40,
        },
        {
            "name": "TransitionTimeOut",
            "index": 40629,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 44,
        },
    ],
    "dataSize": 48,
    "index": 40628,
}
BL2SDK.g_classFuncs["UIStreamingDataEvent"]["eventRunStreamingDataEvent"] = {
    "fields": [
        {
            "name": "EventName",
            "index": 43739,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "EventInstigator",
            "index": 43738,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 43737,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "IntParam",
            "index": 43736,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "FloatParam",
            "index": 43735,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 43734,
}
BL2SDK.g_classFuncs["UPhysicsStateExpressionEvaluator"]["Evaluate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43820,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 43821,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43819,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationAspect"]["eventDenStatRemoved"] = {
    "fields": [
        {
            "name": "DenPawn",
            "index": 43835,
            "className": "APawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43834,
}
BL2SDK.g_classFuncs["UPopulationAspect"]["eventDenStatAdded"] = {
    "fields": [
        {
            "name": "DenPawn",
            "index": 43833,
            "className": "APawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43832,
}
BL2SDK.g_classFuncs["UPopulationAspect"]["eventEnabledStatusChanged"] = {
    "fields": [
        {
            "name": "bIsEnabled",
            "index": 43831,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bHasActiveActors",
            "index": 43830,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43829,
}
BL2SDK.g_classFuncs["UPopulationAspect"]["eventAllActorsRemoved"] = {
    "fields": [
        {
            "name": "bFinishedSpawning",
            "index": 43828,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43827,
}
BL2SDK.g_classFuncs["UPopulationAspect"]["eventOnActorDeath"] = {
    "fields": [
        {
            "name": "DeadActor",
            "index": 43826,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43825,
}
BL2SDK.g_classFuncs["UPopulationAspect"]["eventOnSpawnActor"] = {
    "fields": [
        {
            "name": "SpawnedActor",
            "index": 43824,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43823,
}
BL2SDK.g_classFuncs["UPopulationAspect"]["eventInitialize"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43822,
}
BL2SDK.g_classFuncs["APopulationEncounter"]["eventTriggerKismetAllSpawnedEvent"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43897,
}
BL2SDK.g_classFuncs["APopulationEncounter"]["eventTriggerKismetDeathEvent"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43896,
}
BL2SDK.g_classFuncs["APopulationEncounter"]["OnToggle"] = {
    "fields": [
        {
            "name": "Action",
            "index": 43895,
            "className": "USeqAct_Toggle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43894,
}
BL2SDK.g_classFuncs["APopulationEncounter"]["UpdateOpportunityEnabledStates"] = {
    "fields": [
        {
            "name": "nWave",
            "index": 43893,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bUpdateIfOnlyOneWave",
            "index": 43892,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43891,
}
BL2SDK.g_classFuncs["APopulationEncounter"]["UpdateKismetNotifications"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43890,
}
BL2SDK.g_classFuncs["UPopUpDebugBarGraph"]["Display"] = {
    "fields": [
        {
            "name": "DeltaSeconds",
            "index": 44509,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Canvas",
            "index": 44508,
            "className": "UCanvas",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 44507,
}
BL2SDK.g_classFuncs["UPopUpDebugBarGraph"]["GetValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44505,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "ColumnNdx",
            "index": 44506,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44504,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopUpDebugBarGraph"]["SetValue"] = {
    "fields": [
        {
            "name": "ColumnNdx",
            "index": 44503,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewValue",
            "index": 44502,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 44501,
}
BL2SDK.g_classFuncs["UPopUpDebugBarGraph"]["AddNewColumn"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44497,
            "castTo": POINTER(c_int),
            "offset": 20,
        },
        {
            "name": "ColumnColor",
            "index": 44500,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "HeaderText",
            "index": 44499,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "Value",
            "index": 44498,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 44496,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UPopUpDebugBarGraph"]["AddTitleText"] = {
    "fields": [
        {
            "name": "NewTitleText",
            "index": 44495,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44494,
}
BL2SDK.g_classFuncs["URegionDefinition"]["GetDefaultRegionGameStage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44531,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "MinGameStage",
            "isRet": True,
            "index": 44535,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "MaxGameStage",
            "isRet": True,
            "index": 44534,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "AwesomeLevel",
            "isRet": True,
            "index": 44533,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "GameStageIncreaseOverPlayerLevel",
            "isRet": True,
            "index": 44532,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 44530,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["URegionDefinition"]["TestRegionGameStage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44526,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "GameStage",
            "isRet": True,
            "index": 44529,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "AwesomeLevel",
            "isRet": True,
            "index": 44528,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "bDefaultGameStage",
            "index": 44527,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 44525,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["URegionDefinition"]["GetRegionGameStage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44521,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "GameStage",
            "isRet": True,
            "index": 44524,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "AwesomeLevel",
            "isRet": True,
            "index": 44523,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "bDefaultGameStage",
            "index": 44522,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 44520,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["URuleEngineLoadBalanceManager"]["SetAsDebugging"] = {
    "fields": [
        {
            "name": "bSetDebugging",
            "index": 44579,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44578,
}
BL2SDK.g_classFuncs["USeqAct_AllPlayersInVolume"]["AllPlayersInVolumes"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44613,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44612,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USeqAct_AllPlayersInVolume"]["PlayerIsInAVolume"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44610,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "PC",
            "index": 44611,
            "className": "APlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44609,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["IsOwnerAlwaysNetRelevant"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42772,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42771,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["CanPlayBehaviorData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42769,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 42770,
            "isOutParm": True,
            "cType": FSMBehavior,
            "castTo": POINTER(FSMBehavior),
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 42768,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["RunBehaviors"] = {
    "fields": [
        {
            "name": "SMBehaviors",
            "isRet": True,
            "index": 42767,
            "isOutParm": True,
            "cType": TArray_FSMBehavior,
            "castTo": POINTER(TArray_FSMBehavior),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41721,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["GetCurrent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42765,
            "castTo": POINTER(POINTER(USpecialMoveDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42764,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["GetPlayRateScale"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42763,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42762,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["GetDuration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42761,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42760,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["GetData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42759,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42758,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["LocalAnimFinished"] = {
    "fields": [
        {
            "name": "SMD",
            "index": 42757,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SMData",
            "isRet": True,
            "index": 42756,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 4,
        },
        {
            "name": "bInterrupted",
            "index": 42755,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 36,
    "index": 41736,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["ClearQueue"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42754,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["StopAnyLocal"] = {
    "fields": [
        {
            "name": "SMNodeName",
            "index": 42753,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bInterrupted",
            "index": 42752,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "MeshComp",
            "index": 42751,
            "optional": True,
            "className": "USkeletalMeshComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 42750,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["StopLocal"] = {
    "fields": [
        {
            "name": "OldSMD",
            "index": 42749,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bInterrupted",
            "index": 42748,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 42747,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["StopAny"] = {
    "fields": [
        {
            "name": "bClearQueue",
            "index": 42746,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bInterrupted",
            "index": 42745,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 40199,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["Stop"] = {
    "fields": [
        {
            "name": "OldSMD",
            "index": 42744,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bClearQueue",
            "index": 42743,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "bInterrupted",
            "index": 42742,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 40198,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["PlayLocal"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40180,
            "castTo": POINTER(c_float),
            "offset": 28,
        },
        {
            "name": "NewSMD",
            "index": 42741,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PlayRateScale",
            "index": 42740,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Duration",
            "index": 42739,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "CallbackName",
            "index": 42738,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "CallbackObject",
            "index": 42737,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "Data",
            "index": 42736,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 32,
    "index": 40179,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["Queue"] = {
    "fields": [
        {
            "name": "NewSMD",
            "index": 42735,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PlayRateScale",
            "index": 42734,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Duration",
            "index": 42733,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "CallbackName",
            "index": 42732,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "CallbackObject",
            "index": 42731,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "Data",
            "index": 42730,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 40185,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["Play"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40184,
            "castTo": POINTER(c_float),
            "offset": 28,
        },
        {
            "name": "NewSMD",
            "index": 42729,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PlayRateScale",
            "index": 42728,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Duration",
            "index": 42727,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "CallbackName",
            "index": 42726,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "CallbackObject",
            "index": 42725,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "Data",
            "index": 42724,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 32,
    "index": 40183,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["RemoveFromQueue"] = {
    "fields": [
        {
            "name": "SMD",
            "index": 42723,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42722,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["IsQueued"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40174,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "SMD",
            "index": 42721,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40173,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["IsPlayingClass"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42719,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "SMClass",
            "index": 42720,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42718,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["IsPlayingAny"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40182,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40181,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["IsPlaying"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40172,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "SMD",
            "index": 42717,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40171,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["GetAnimDelta"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42715,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 4,
        },
        {
            "name": "CustomAnimSMD",
            "index": 42716,
            "className": "UGearboxAnimDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 42714,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["GetSMNode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41695,
            "castTo": POINTER(POINTER(UAnimNodeSpecialMoveBlend)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41694,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["PlayReplicated"] = {
    "fields": [
        {
            "name": "NewSMData",
            "index": 42713,
            "type": FReplicatedSpecialMoveData,
            "castTo": POINTER(FReplicatedSpecialMoveData),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 42712,
}
BL2SDK.g_classFuncs["USpecialMoveComponent"]["GetAnimLength"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42702,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "CustomAnimSMD",
            "index": 42705,
            "className": "UGearboxAnimDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bIncludeNextSMD",
            "index": 42704,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "SMC",
            "index": 42703,
            "optional": True,
            "className": "USkeletalMeshComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 42701,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["eventIsPlayingLocally"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41644,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41645,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 41643,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["GetSMDToPlay"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41641,
            "castTo": POINTER(POINTER(USpecialMoveDefinition)),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41642,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 41640,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["Contains"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41637,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "SMD",
            "index": 41639,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SMI",
            "index": 41638,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 41636,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["eventClientFinished"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41635,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "bInterrupted",
            "index": 41634,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 41633,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["eventServerFinished"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41632,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "bInterrupted",
            "index": 41631,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 41630,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["eventClientStarted"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41627,
            "castTo": POINTER(c_float),
            "offset": 36,
        },
        {
            "name": "SMI",
            "index": 41629,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "SMData",
            "isRet": True,
            "index": 41628,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 8,
        },
    ],
    "dataSize": 40,
    "index": 41626,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["eventServerStarted"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41625,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 41624,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["IsLocalAuthority"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41622,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41623,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 41621,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USpecialMoveDefinition"]["eventAuthorityCanPlay"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41619,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41620,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 41618,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USpecialMoveExpressionList"]["Contains"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44961,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "SMD",
            "index": 44963,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SMI",
            "index": 44962,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 44960,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USpecialMoveExpressionList"]["GetSMDToPlay"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44958,
            "castTo": POINTER(POINTER(USpecialMoveDefinition)),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 44959,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 44957,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USpecialMoveRandom"]["Contains"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44992,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "SMD",
            "index": 44994,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SMI",
            "index": 44993,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 44991,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USpecialMoveRandom"]["GetSMDToPlay"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44989,
            "castTo": POINTER(POINTER(USpecialMoveDefinition)),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 44990,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 44988,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["SetReplicatedSMData"] = {
    "fields": [
        {
            "name": "NewSMData",
            "isRet": True,
            "index": 44982,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 44981,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["eventServerSpecialMove_StopAny"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44980,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["eventServerSpecialMove_Stop"] = {
    "fields": [
        {
            "name": "OldSMD",
            "index": 44979,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44978,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["eventServerSpecialMove_Queue"] = {
    "fields": [
        {
            "name": "NewSMD",
            "index": 44977,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PlayRateScale",
            "index": 44976,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Duration",
            "index": 44975,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "CallbackName",
            "index": 44974,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "CallbackObject",
            "index": 44973,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "Data",
            "index": 44972,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 44971,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["eventServerSpecialMove_Play"] = {
    "fields": [
        {
            "name": "NewSMD",
            "index": 44970,
            "className": "USpecialMoveDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "PlayRateScale",
            "index": 44969,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Duration",
            "index": 44968,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "CallbackName",
            "index": 44967,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "CallbackObject",
            "index": 44966,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "Data",
            "index": 44965,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 44964,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["GetDefaultRootMotionRotationMode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41730,
            "castTo": POINTER(c_ubyte),
            "enumName": "ERootMotionRotationMode",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41729,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["GetDefaultRootMotionMode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41728,
            "castTo": POINTER(c_ubyte),
            "enumName": "ERootMotionMode",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41727,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["GetSkelMesh"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41700,
            "castTo": POINTER(POINTER(USkeletalMeshComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41699,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["GetSMComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40170,
            "castTo": POINTER(POINTER(USpecialMoveComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40169,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USpecialMoveInterface"]["GetActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41709,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41708,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AWireTerminal"]["eventDestroyed"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45033,
}
BL2SDK.g_classFuncs["AWireTerminal"]["NotifyModifiedTerminal"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45032,
}
BL2SDK.g_classFuncs["UActionSequence"]["TriggerBehavior"] = {
    "fields": [
        {
            "name": "OutputName",
            "index": 38894,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 38875,
}
BL2SDK.g_classFuncs["UActionSequence"]["GetRangeValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38892,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "Range",
            "isRet": True,
            "index": 38893,
            "isOutParm": True,
            "cType": FAIRange,
            "castTo": POINTER(FAIRange),
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 38891,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UActionSequence"]["RangeIsValid"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38889,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "Range",
            "isRet": True,
            "index": 38890,
            "isOutParm": True,
            "cType": FAIRange,
            "castTo": POINTER(FAIRange),
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 38888,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UActionSequence"]["Finish"] = {
    "fields": [
        {
            "name": "bFailed",
            "index": 38887,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38886,
}
BL2SDK.g_classFuncs["UActionSequence"]["IsRunning"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38885,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38884,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventScriptCleanUp"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38883,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventCanRun"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38882,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 38881,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventActivateEvent"] = {
    "fields": [
        {
            "name": "EventName",
            "index": 38880,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 38879,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventUpdate"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38878,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventInit"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38877,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventStop"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38876,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventStart"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38874,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventInterruptSequence"] = {
    "fields": [
        {
            "name": "InterruptingSequence",
            "index": 38872,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38871,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventStopSequence"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38870,
}
BL2SDK.g_classFuncs["UActionSequence"]["eventStartSequence"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38869,
}
BL2SDK.g_classFuncs["UActionSequence"]["ExecuteSequence"] = {
    "fields": [
        {
            "name": "SequenceTemplate",
            "index": 38868,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38867,
}
BL2SDK.g_classFuncs["UActionSequence"]["Sleep"] = {
    "fields": [
        {
            "name": "Seconds",
            "index": 38866,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38865,
}
BL2SDK.g_classFuncs["UActionSequence"]["RunSubSequence"] = {
    "fields": [
        {
            "name": "SubSequence",
            "index": 38864,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38863,
}
BL2SDK.g_classFuncs["UActionSequence"]["InterruptLatentAction"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38862,
}
BL2SDK.g_classFuncs["UActionSequence"]["DoRuleSetPop"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38861,
}
BL2SDK.g_classFuncs["UActionSequence"]["DoRuleSetPush"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38859,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "NewRuleSet",
            "index": 38860,
            "className": "URuleSet",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38858,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UActionSequence"]["DoRuleSetSwitch"] = {
    "fields": [
        {
            "name": "NewRuleSet",
            "index": 38857,
            "className": "URuleSet",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38856,
}
BL2SDK.g_classFuncs["UActionSequence"]["PreventNewRulesFromStarting"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38855,
}
BL2SDK.g_classFuncs["UActionSequence"]["GetRuleNative"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38854,
            "castTo": POINTER(POINTER(URule)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38853,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UActionSequence"]["GetActionSequence"] = {
    "fields": [
        {
            "name": "Template",
            "index": 38852,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutSequence",
            "isRet": True,
            "index": 38851,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UActionSequence)),
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38850,
}
BL2SDK.g_classFuncs["UActionSequence"]["IsInLabel"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38848,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "TestLabel",
            "index": 38849,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 38847,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UActionSequence"]["IsAtomic"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38846,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38845,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UActionSequence"]["StopAtomic"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38844,
}
BL2SDK.g_classFuncs["UActionSequence"]["StartAtomic"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38843,
}
BL2SDK.g_classFuncs["UActionSequence"]["IsActionReadyToFinish"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38842,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38841,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UActionSequenceList"]["IsActionReadyToFinish"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39150,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39149,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["eventPostMovement"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39133,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["eventPreMovement"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39132,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["eventPrePathFind"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39131,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["eventInterruptSequence"] = {
    "fields": [
        {
            "name": "InterruptingSequence",
            "index": 39130,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39129,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["eventStopSequence"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39127,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["eventStartSequence"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39112,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["MovePawnToDestinationLocation"] = {
    "fields": [
        {
            "name": "GoalLocation",
            "index": 39111,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "NewUsePreciseArrival",
            "index": 39110,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 39109,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["TakeDebugSnapshotMoveFailure"] = {
    "fields": [
        {
            "name": "Cause",
            "index": 39108,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EMovementFinishedCause",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 39107,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["SetMaxMovementSpeed"] = {
    "fields": [
        {
            "name": "NewMaxSpeed",
            "index": 39106,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EMovementSpeed",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 39105,
}
BL2SDK.g_classFuncs["UAction_PawnMovementBase"]["EndMovePawnToDestinationLocation"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39104,
}
BL2SDK.g_classFuncs["UActionSequenceRandom"]["EvaluateActionList"] = {
    "fields": [],
    "dataSize": 4,
    "index": 39160,
}
BL2SDK.g_classFuncs["UActionSequenceRandom"]["OverrideNextSequenceToRun"] = {
    "fields": [
        {
            "name": "NewSequence",
            "index": 39159,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39158,
}
BL2SDK.g_classFuncs["UActionSequenceRandom"]["GetRandomAction"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39157,
            "castTo": POINTER(POINTER(UActionSequence)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39156,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["GetAIRangeTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38739,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "InRange",
            "index": 38740,
            "type": FAIRange,
            "castTo": POINTER(FAIRange),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 38738,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIComponent"]["DrawAITree"] = {
    "fields": [
        {
            "name": "Canvas",
            "index": 38737,
            "className": "UCanvas",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38736,
}
BL2SDK.g_classFuncs["UAIComponent"]["LogDemigodHolds"] = {
    "fields": [],
    "dataSize": 12,
    "index": 38730,
}
BL2SDK.g_classFuncs["UAIComponent"]["ReleaseDialog"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38729,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38728,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38727,
}
BL2SDK.g_classFuncs["UAIComponent"]["HoldDialog"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38726,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38725,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38724,
}
BL2SDK.g_classFuncs["UAIComponent"]["DialogOnHold"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38723,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38722,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["ReleaseGod"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38721,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38720,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38719,
}
BL2SDK.g_classFuncs["UAIComponent"]["HoldGod"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38718,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38717,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38716,
}
BL2SDK.g_classFuncs["UAIComponent"]["GodOnHold"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38715,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38714,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["ReleaseDemigod"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38713,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38712,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38711,
}
BL2SDK.g_classFuncs["UAIComponent"]["HoldDemigod"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38710,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38709,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38708,
}
BL2SDK.g_classFuncs["UAIComponent"]["DemigodOnHold"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38707,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38706,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["ReleaseMovement"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38705,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38704,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38703,
}
BL2SDK.g_classFuncs["UAIComponent"]["HoldMovement"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38702,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38701,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38700,
}
BL2SDK.g_classFuncs["UAIComponent"]["MovementOnHold"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38699,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38698,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["ReleaseTarget"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38697,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38696,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38695,
}
BL2SDK.g_classFuncs["UAIComponent"]["HoldTarget"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38694,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38693,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38692,
}
BL2SDK.g_classFuncs["UAIComponent"]["TargetOnHold"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38691,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38690,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["Release"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38689,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38688,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38687,
}
BL2SDK.g_classFuncs["UAIComponent"]["Hold"] = {
    "fields": [
        {
            "name": "HoldName",
            "index": 38686,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 38685,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38684,
}
BL2SDK.g_classFuncs["UAIComponent"]["OnHold"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38682,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38681,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["ForceUpdateTargets"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38683,
}
BL2SDK.g_classFuncs["UAIComponent"]["TargetChanged"] = {
    "fields": [
        {
            "name": "OldTarget",
            "index": 38680,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "NewTarget",
            "index": 38679,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38678,
}
BL2SDK.g_classFuncs["UAIComponent"]["SetTarget"] = {
    "fields": [
        {
            "name": "NewTarget",
            "index": 38677,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38676,
}
BL2SDK.g_classFuncs["UAIComponent"]["SetScriptedTarget"] = {
    "fields": [
        {
            "name": "NewScriptedTarget",
            "index": 38675,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38674,
}
BL2SDK.g_classFuncs["UAIComponent"]["GetTargetRecordFor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38671,
            "castTo": POINTER(POINTER(UMindTargetInfo)),
            "offset": 8,
        },
        {
            "name": "Target",
            "index": 38673,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bTryParent",
            "index": 38672,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 38670,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIComponent"]["GetTargetRecord"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38668,
            "castTo": POINTER(POINTER(UMindTargetInfo)),
            "offset": 4,
        },
        {
            "name": "bTryParent",
            "index": 38669,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38667,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAIComponent"]["IsTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38665,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TestTarget",
            "index": 38666,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38664,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAIComponent"]["GetTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38663,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38662,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["HasTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38661,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38660,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["ShouldRemoveTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38658,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TargetRec",
            "index": 38659,
            "className": "UMindTargetInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38657,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAIComponent"]["TargetRemoved"] = {
    "fields": [
        {
            "name": "TargetRec",
            "index": 38656,
            "className": "UMindTargetInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38655,
}
BL2SDK.g_classFuncs["UAIComponent"]["ForceRemoveTarget"] = {
    "fields": [
        {
            "name": "Target",
            "index": 38654,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38653,
}
BL2SDK.g_classFuncs["UAIComponent"]["ValidCurrentTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38651,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TargetRec",
            "index": 38652,
            "className": "UMindTargetInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38650,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAIComponent"]["ValidTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38648,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Target",
            "index": 38649,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38647,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAIComponent"]["PrioritizeTarget"] = {
    "fields": [
        {
            "name": "TargetRec",
            "index": 38646,
            "className": "UMindTargetInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38645,
}
BL2SDK.g_classFuncs["UAIComponent"]["CalcTargetInfo"] = {
    "fields": [
        {
            "name": "TargetRec",
            "index": 38644,
            "className": "UMindTargetInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38643,
}
BL2SDK.g_classFuncs["UAIComponent"]["ChooseBestTarget"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38642,
}
BL2SDK.g_classFuncs["UAIComponent"]["InheritTargets"] = {
    "fields": [
        {
            "name": "Parent",
            "index": 38641,
            "className": "UAIComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38640,
}
BL2SDK.g_classFuncs["UAIComponent"]["RemoveTargets"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38639,
}
BL2SDK.g_classFuncs["UAIComponent"]["FindTargets"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38638,
}
BL2SDK.g_classFuncs["UAIComponent"]["GetTargets"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38637,
}
BL2SDK.g_classFuncs["UAIComponent"]["InitializeTargetRecord"] = {
    "fields": [
        {
            "name": "TargetRec",
            "index": 38636,
            "className": "UMindTargetInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38635,
}
BL2SDK.g_classFuncs["UAIComponent"]["NotifyAttackedBy"] = {
    "fields": [
        {
            "name": "Attacker",
            "index": 38634,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38633,
}
BL2SDK.g_classFuncs["UAIComponent"]["AddTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38631,
            "castTo": POINTER(POINTER(UMindTargetInfo)),
            "offset": 4,
        },
        {
            "name": "NewTarget",
            "index": 38632,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38630,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAIComponent"]["GetParentComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38629,
            "castTo": POINTER(POINTER(UAIComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38628,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["GetAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38627,
            "castTo": POINTER(POINTER(UPawnAllegiance)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38626,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UAIComponent"]["ClearState"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38625,
}
BL2SDK.g_classFuncs["UAIComponent"]["ActivateEvent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38622,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "EventName",
            "index": 38623,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 38621,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAICostExpressionEvaluator"]["Evaluate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39290,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 39291,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 39289,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["FlushPools"] = {
    "fields": [],
    "dataSize": 0,
    "index": 39557,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["ReturnAIDef"] = {
    "fields": [
        {
            "name": "InAIDef",
            "isRet": True,
            "index": 39556,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UAIDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39555,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetAIDef"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39552,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "AIDefTemplate",
            "index": 39554,
            "className": "UAIDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutAIDef",
            "isRet": True,
            "index": 39553,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UAIDefinition)),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39551,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["ReturnTargetRecord"] = {
    "fields": [
        {
            "name": "InTargetRecord",
            "isRet": True,
            "index": 39550,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UMindTargetInfo)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39549,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetTargetRecord"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39546,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "InfoClass",
            "index": 39548,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "OutTargetRecord",
            "isRet": True,
            "index": 39547,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UMindTargetInfo)),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39545,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["ReturnActionSequence"] = {
    "fields": [
        {
            "name": "InSequence",
            "isRet": True,
            "index": 39544,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UActionSequence)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39543,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetActionSequence"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39540,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "SequenceTemplate",
            "index": 39542,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutSequence",
            "isRet": True,
            "index": 39541,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UActionSequence)),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39539,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["ReturnRuleSet"] = {
    "fields": [
        {
            "name": "InRuleSet",
            "isRet": True,
            "index": 39538,
            "isOutParm": True,
            "castTo": POINTER(POINTER(URuleSet)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39537,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetRuleSetFromArchetype"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39534,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "RuleSetArchetype",
            "index": 39536,
            "className": "URuleSet",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutRuleSet",
            "isRet": True,
            "index": 39535,
            "isOutParm": True,
            "castTo": POINTER(POINTER(URuleSet)),
            "offset": 4,
        },
        {
            "name": "CurRunningRules",
            "isRet": True,
            "index": 39533,
            "isOutParm": True,
            "cType": TArray_URulePtr,
            "castTo": POINTER(TArray_URulePtr),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 39531,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["ReturnKnowledgeRecord"] = {
    "fields": [
        {
            "name": "InKR",
            "isRet": True,
            "index": 39530,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UKnowledgeRecord)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39529,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetKnowledgeRecordListFromArchetypes"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39528,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "KnowledgeRecordTemplates",
            "index": 39525,
            "type": TArray_UKnowledgeRecordPtr,
            "castTo": POINTER(TArray_UKnowledgeRecordPtr),
            "flags": 8,
            "offset": 0,
        },
        {
            "name": "KnowledgeRecords",
            "isRet": True,
            "index": 39527,
            "isOutParm": True,
            "cType": TArray_UKnowledgeRecordPtr,
            "castTo": POINTER(TArray_UKnowledgeRecordPtr),
            "TArray": True,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 39523,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetKnowledgeRecordFromArchetype"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39520,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "InKR",
            "index": 39522,
            "className": "UKnowledgeRecord",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutKR",
            "isRet": True,
            "index": 39521,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UKnowledgeRecord)),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39519,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetKnowledgeRecord"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39516,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "KnowledgeRecordClass",
            "index": 39518,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "OutKR",
            "isRet": True,
            "index": 39517,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UKnowledgeRecord)),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39515,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["ReturnRule"] = {
    "fields": [
        {
            "name": "InRule",
            "isRet": True,
            "index": 39514,
            "isOutParm": True,
            "castTo": POINTER(POINTER(URule)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39513,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetRuleFromArchetype"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39510,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "InRule",
            "index": 39512,
            "className": "URule",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutRule",
            "isRet": True,
            "index": 39511,
            "isOutParm": True,
            "castTo": POINTER(POINTER(URule)),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39509,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["GetRule"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39506,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "RuleClass",
            "index": 39508,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "OutRule",
            "isRet": True,
            "index": 39507,
            "isOutParm": True,
            "castTo": POINTER(POINTER(URule)),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39505,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIFactoryBase"]["ReturnRuleEngine"] = {
    "fields": [
        {
            "name": "InRuleEngine",
            "index": 39504,
            "className": "URuleEngine",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39503,
}
BL2SDK.g_classFuncs["UGearboxAIFactory"]["FreeRuleEngine"] = {
    "fields": [
        {
            "name": "InRuleEngine",
            "index": 41570,
            "className": "URuleEngine",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41569,
}
BL2SDK.g_classFuncs["UGearboxAIFactory"]["GetRuleEngineFromTemplate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41566,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "OutRuleEngine",
            "isRet": True,
            "index": 41568,
            "isOutParm": True,
            "castTo": POINTER(POINTER(URuleEngine)),
            "offset": 0,
        },
        {
            "name": "RuleEngineTemplate",
            "index": 41567,
            "className": "URuleEngine",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41565,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIResourceExpressionEvaluator"]["Evaluate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39570,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 39571,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 39569,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UAllegianceExpressionEvaluator"]["Evaluate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39617,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 39618,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 39616,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UBehavior_SendGbxMessage"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40097,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40096,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40095,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40094,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40093,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40092,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 88,
    "index": 40090,
}
BL2SDK.g_classFuncs["UBehavior_SendGbxMessage"]["GetLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40084,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 20,
        },
        {
            "name": "SelectionParam",
            "index": 40089,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "MessageBehaviorLogic",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ContextObject",
            "index": 40088,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40087,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40086,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40085,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 44,
    "index": 40082,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UBehavior_SendGbxMessage"]["GetMessageParameter"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40076,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 20,
        },
        {
            "name": "SelectionParam",
            "index": 40081,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "MessageBehaviorLogic",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ContextObject",
            "index": 40080,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40079,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40078,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40077,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 40075,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UBehavior_SetFlag"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40109,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40108,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40107,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40106,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40105,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40104,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 56,
    "index": 40103,
}
BL2SDK.g_classFuncs["UExposureUtilityBase"]["CalculateVantageToPoint"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40779,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "pLooker",
            "index": 40781,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TargetPoint",
            "isRet": True,
            "index": 40780,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 40778,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UExposureUtilityBase"]["CalculateTargetExposure"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40775,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "pLooker",
            "index": 40777,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "pTarget",
            "index": 40776,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 40774,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UFiringBehaviorManager"]["eventGetTemplateClass"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40897,
            "castTo": POINTER(POINTER(UClass)),
            "offset": 4,
        },
        {
            "name": "TemplateObject",
            "index": 40898,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40896,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UFiringZoneCollectionDefinition"]["eventGetZoneForDistance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40902,
            "castTo": POINTER(POINTER(UFiringZoneDefinition)),
            "offset": 4,
        },
        {
            "name": "Distance",
            "index": 40903,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 40901,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UFlagDefinition"]["ApplyFlagInitializationData"] = {
    "fields": [
        {
            "name": "FlagsToSet",
            "isRet": True,
            "index": 40926,
            "isOutParm": True,
            "cType": TArray_FFlagDefinitionInitialization,
            "castTo": POINTER(TArray_FFlagDefinitionInitialization),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "ContextSource",
            "index": 40927,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 40924,
}
BL2SDK.g_classFuncs["UFlagDefinition"]["ResolveContext"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40922,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 40923,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40921,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UFlagDefinition"]["SetTrueTimed"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40918,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "ContextSource",
            "index": 40920,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TimeSeconds",
            "index": 40919,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 40917,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UFlagDefinition"]["SetValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40914,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "ContextSource",
            "index": 40916,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 40915,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 40913,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UFlagExpressionEvaluator"]["Evaluate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40984,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ContextSource",
            "index": 40985,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40983,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGbxMessage"]["InitializeFromDefinition"] = {
    "fields": [
        {
            "name": "InDefinition",
            "index": 41026,
            "className": "UGbxMessageDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "RadiusContextSource",
            "index": 41025,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "InSender",
            "index": 41024,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "InSubject",
            "index": 41023,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "ManualSenderAllegiance",
            "index": 41022,
            "optional": True,
            "className": "UPawnAllegiance",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 40100,
}
BL2SDK.g_classFuncs["UGbxMessageManager"]["RemoveListener"] = {
    "fields": [
        {
            "name": "InListener",
            "index": 41039,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 41038,
}
BL2SDK.g_classFuncs["UGbxMessageManager"]["AddListener"] = {
    "fields": [
        {
            "name": "InListener",
            "index": 41037,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 41036,
}
BL2SDK.g_classFuncs["UGbxMessageManager"]["PostMessage"] = {
    "fields": [
        {
            "name": "Message",
            "index": 41035,
            "className": "UGbxMessage",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41034,
}
BL2SDK.g_classFuncs["UGbxMessageManager"]["AllocateMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40099,
            "castTo": POINTER(POINTER(UGbxMessage)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40098,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["InitSequence"] = {
    "fields": [
        {
            "name": "NewSequence",
            "index": 42614,
            "className": "UActionSequence",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42613,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42612,
            "castTo": POINTER(POINTER(UPawnAllegiance)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42611,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetAIDefinition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42610,
            "castTo": POINTER(POINTER(UAIDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42609,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetAIComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42608,
            "castTo": POINTER(POINTER(UAIComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42607,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetAIParent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42606,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 42605,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetAILocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42604,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42603,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetAIActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42602,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42601,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["CanTickAI"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42600,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42599,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["InGodMode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42598,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42597,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["PawnDied"] = {
    "fields": [
        {
            "name": "inPawn",
            "index": 42596,
            "className": "APawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42595,
}
BL2SDK.g_classFuncs["AGearboxMind"]["OnTargetPriority"] = {
    "fields": [
        {
            "name": "inAction",
            "index": 42591,
            "className": "UGearboxSeqAct_TargetPriority",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 42590,
}
BL2SDK.g_classFuncs["AGearboxMind"]["Behavior_SetCanTarget"] = {
    "fields": [
        {
            "name": "ChangeStatus",
            "index": 42589,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EChangeStatus",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 42588,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetNoTargetAllEnemies"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42587,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42586,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["SetNoTargetAllEnemies"] = {
    "fields": [
        {
            "name": "bNoTarget",
            "index": 42585,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42584,
}
BL2SDK.g_classFuncs["AGearboxMind"]["eventClearScriptedMoveTarget"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42583,
}
BL2SDK.g_classFuncs["AGearboxMind"]["eventIsCloseEnoughToScriptedMoveTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39139,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39138,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["eventGetWeaponFireLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42582,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42581,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["ActivateEventRule"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42579,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "RuleEventName",
            "index": 42580,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42578,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["AGearboxMind"]["AddHitTargetRecord"] = {
    "fields": [
        {
            "name": "HitByPawn",
            "index": 42577,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "NewHitLocation",
            "index": 42576,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "flNewDamage",
            "index": 42575,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 42574,
}
BL2SDK.g_classFuncs["AGearboxMind"]["StopMovement"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42573,
}
BL2SDK.g_classFuncs["AGearboxMind"]["eventPossess"] = {
    "fields": [
        {
            "name": "inPawn",
            "index": 42572,
            "className": "APawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bVehicleTransition",
            "index": 42571,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 24,
    "index": 42570,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetGearboxRuleEngine"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42569,
            "castTo": POINTER(POINTER(UGearboxRuleEngine)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42568,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetRuleEngine"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42567,
            "castTo": POINTER(POINTER(URuleEngine)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42566,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["NotifyShotAtBy"] = {
    "fields": [
        {
            "name": "ShootingPawn",
            "index": 42565,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42564,
}
BL2SDK.g_classFuncs["AGearboxMind"]["FindCoverAndClaim"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42557,
            "castTo": POINTER(c_bool),
            "offset": 40,
        },
        {
            "name": "CoverSearchOrigin",
            "index": 42563,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "LocationRequest",
            "index": 42562,
            "className": "UPawnMoveLocationRequest",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "OutDestination",
            "isRet": True,
            "index": 42561,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "MinSearchRadius",
            "index": 42560,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
        {
            "name": "MaxSearchRadius",
            "index": 42559,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 32,
        },
        {
            "name": "bEnactCoverChanges",
            "index": 42558,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 36,
        },
    ],
    "dataSize": 44,
    "index": 42556,
    "retOffset": 40,
}
BL2SDK.g_classFuncs["AGearboxMind"]["UpdateRuleEngineKnowledge"] = {
    "fields": [
        {
            "name": "aKDBClass",
            "index": 42555,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42554,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetCurrentTargetInfo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42552,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "OutTargetRec",
            "isRet": True,
            "index": 42553,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UMindTargetInfo)),
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42551,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsSameAllegianceMind"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42549,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "aMind",
            "index": 42550,
            "className": "AGearboxMind",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42548,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsSameAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42546,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "anObject",
            "index": 42547,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42545,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsNeutralMind"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42543,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "aMind",
            "index": 42544,
            "className": "AGearboxMind",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42542,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsNeutral"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42540,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "anObject",
            "index": 42541,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42539,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsFriendlyMind"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42537,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "aMind",
            "index": 42538,
            "className": "AGearboxMind",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42536,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsFriendly"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42534,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "anObject",
            "index": 42535,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42533,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsEnemyMind"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42531,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "aMind",
            "index": 42532,
            "className": "AGearboxMind",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42530,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["IsEnemy"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42528,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "anObject",
            "index": 42529,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42527,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["AGearboxMind"]["WantsToWalk"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42526,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42525,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["SetWantsToWalk"] = {
    "fields": [
        {
            "name": "bInWantsToWalk",
            "index": 42524,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42523,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetFacingPolicy"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42522,
            "castTo": POINTER(c_ubyte),
            "enumName": "EFacingPolicy",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 42521,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["SetFacingPolicy"] = {
    "fields": [
        {
            "name": "NewFacingPolicy",
            "index": 42520,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EFacingPolicy",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewFacingActor",
            "index": 42519,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "NewFacingVector",
            "index": 42518,
            "optional": True,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 38904,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetCurrentTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38907,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38906,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxMind"]["RemoveEnemyFromQueue"] = {
    "fields": [
        {
            "name": "Target",
            "index": 42517,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42516,
}
BL2SDK.g_classFuncs["AGearboxMind"]["GetNavigationHandle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42515,
            "castTo": POINTER(POINTER(UGearboxNavigationHandle)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42514,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsChangingDirection"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41924,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41923,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsMantlingOverCoverInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41922,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41921,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsReturnFromPeekInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41920,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41919,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsPeekTransitionInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41918,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41917,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsPeekedUp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41915,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "bTransitionCounts",
            "index": 41916,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41914,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsReturnFromLeanOutInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41913,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41912,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsLeanOutTransitionInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41911,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41910,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsLeanedOut"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41908,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "bTransitionCounts",
            "index": 41909,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41907,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsReturnFromPopUpInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41906,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41905,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsPopUpTransitionInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41904,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41903,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsPoppedUp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41901,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "bTransitionCounts",
            "index": 41902,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41900,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsExecutingAnyTransition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41899,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41898,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetDesiredState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41897,
            "castTo": POINTER(c_ubyte),
            "enumName": "EGearboxCoverState",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41896,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetCurrentTransition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41895,
            "castTo": POINTER(c_ubyte),
            "enumName": "EGearboxCoverTransition",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41894,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["OnMantleOverCoverAnimEnd"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41893,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["OnTransitionAnimEndEx"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41892,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["OnTransitionAnimEnd"] = {
    "fields": [
        {
            "name": "Transition",
            "index": 41891,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EGearboxCoverTransition",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41890,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["OnDismountAnimEnd"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41889,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["OnMountAnimEnd"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41888,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["MantleOverCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41885,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "CoverActor",
            "index": 41887,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "CoverSlotNdx",
            "index": 41886,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41884,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["ReturnToCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41883,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41882,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["LeanOutForFiring"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41880,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "BlindFire",
            "index": 41881,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41879,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["PopUpForFiring"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41877,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "BlindFire",
            "index": 41878,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41876,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["Peek"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41875,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41874,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["DetachFromCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41873,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41872,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["DismountCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41870,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "DismountType",
            "index": 41871,
            "optional": True,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EGearboxCoverStateMetaData",
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41869,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["ClaimAndMountCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41866,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "TheCoverLink",
            "index": 41868,
            "className": "ACoverLink",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SlotNdx",
            "index": 41867,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41865,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["MountDesiredCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41864,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41863,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["ClearDesiredCover"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41862,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"][
    "GetCurrentCoverLocationAndRotation"
] = {
    "fields": [
        {
            "name": "CoverLoc",
            "isRet": True,
            "index": 41861,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        },
        {
            "name": "CoverRot",
            "isRet": True,
            "index": 41860,
            "isOutParm": True,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 41859,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"][
    "GetDesiredCoverLocationAndRotation"
] = {
    "fields": [
        {
            "name": "CoverLoc",
            "isRet": True,
            "index": 41858,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        },
        {
            "name": "CoverRot",
            "isRet": True,
            "index": 41857,
            "isOutParm": True,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 41856,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["HasDesiredCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41855,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41854,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetLastCoverHeight"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41853,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECoverType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41852,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetCurrentCoverHeight"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41851,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECoverType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41850,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetDesiredCoverHeight"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41849,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECoverType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41848,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["WasCoveredFrom"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41846,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "ThreatLocation",
            "index": 41847,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41845,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["WillBeCoveredFrom"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41843,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "ThreatLocation",
            "index": 41844,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41842,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsCoveredFrom"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41840,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "ThreatLocation",
            "index": 41841,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41839,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsDismountInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41838,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41837,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsMountInProgress"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41836,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41835,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["WasMountedOnCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41834,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41833,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsMountedOnCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41832,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41831,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["IsUsingCover"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41830,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41829,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["OnCoverStateChanged"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41828,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetLastCover"] = {
    "fields": [
        {
            "name": "OutCoverActor",
            "isRet": True,
            "index": 41827,
            "isOutParm": True,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        },
        {
            "name": "OutSlotNdx",
            "isRet": True,
            "index": 41826,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 41825,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetCurrentCover"] = {
    "fields": [
        {
            "name": "OutCoverActor",
            "isRet": True,
            "index": 41824,
            "isOutParm": True,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        },
        {
            "name": "OutSlotNdx",
            "isRet": True,
            "index": 41823,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 41822,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["GetDesiredCover"] = {
    "fields": [
        {
            "name": "OutCoverActor",
            "isRet": True,
            "index": 41821,
            "isOutParm": True,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        },
        {
            "name": "OutSlotNdx",
            "isRet": True,
            "index": 41820,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 41819,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["FindCoverAndClaim"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41811,
            "castTo": POINTER(c_bool),
            "offset": 44,
        },
        {
            "name": "TheMind",
            "index": 41818,
            "className": "AGearboxMind",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "CoverSearchOrigin",
            "index": 41817,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "LocationRequest",
            "index": 41816,
            "className": "UPawnMoveLocationRequest",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
        {
            "name": "OutDestination",
            "isRet": True,
            "index": 41815,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 20,
        },
        {
            "name": "MinSearchRadius",
            "index": 41814,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 32,
        },
        {
            "name": "MaxSearchRadius",
            "index": 41813,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "bEnactCoverChanges",
            "index": 41812,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 48,
    "index": 41810,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UGearboxCoverStateManager"]["Initialize"] = {
    "fields": [
        {
            "name": "P",
            "index": 41809,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41808,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["SetDesiredMovementSpeed"] = {
    "fields": [
        {
            "name": "Speed",
            "index": 42692,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EMovementSpeed",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 39128,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["ClearAnchor"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42691,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["GetNearestPositionOnNavMesh"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42684,
            "castTo": POINTER(c_bool),
            "offset": 160,
        },
        {
            "name": "Radius",
            "index": 42690,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TestLoc",
            "index": 42689,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "NearestPos",
            "isRet": True,
            "index": 42688,
            "isOutParm": True,
            "cType": FBasedPosition,
            "castTo": POINTER(FBasedPosition),
            "offset": 16,
        },
        {
            "name": "PolyUsableCheckParams",
            "isRet": True,
            "index": 42687,
            "isOutParm": True,
            "cType": FNavMeshPathParams,
            "castTo": POINTER(FNavMeshPathParams),
            "offset": 68,
        },
        {
            "name": "NearestPoly",
            "isRet": True,
            "index": 42686,
            "isOutParm": True,
            "cType": FGBXNavMeshPolyRef,
            "castTo": POINTER(FGBXNavMeshPolyRef),
            "offset": 148,
        },
        {
            "name": "bAnyHeight",
            "index": 42685,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 156,
        },
    ],
    "dataSize": 164,
    "index": 42683,
    "retOffset": 160,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["GetNavMeshPolyForPoint"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42679,
            "castTo": POINTER(c_bool),
            "offset": 100,
        },
        {
            "name": "Point",
            "index": 42682,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "FoundPoly",
            "isRet": True,
            "index": 42681,
            "isOutParm": True,
            "cType": FGBXNavMeshPolyRef,
            "castTo": POINTER(FGBXNavMeshPolyRef),
            "offset": 12,
        },
        {
            "name": "PolyUsableCheckParams",
            "isRet": True,
            "index": 42680,
            "isOutParm": True,
            "cType": FNavMeshPathParams,
            "castTo": POINTER(FNavMeshPathParams),
            "offset": 20,
        },
    ],
    "dataSize": 104,
    "index": 42678,
    "retOffset": 100,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["IsDoingSpecialMove"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42677,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42676,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["InFinalPoly"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42674,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "TestLoc",
            "index": 42675,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 42673,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["NeedsRegularWalkingPhysics"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42672,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42671,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["PopulatePathfindingParamCache"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42670,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42669,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["TrySpecialMove"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42667,
            "castTo": POINTER(c_bool),
            "offset": 52,
        },
        {
            "name": "MoveTarget",
            "isRet": True,
            "index": 42668,
            "isOutParm": True,
            "cType": FBasedPosition,
            "castTo": POINTER(FBasedPosition),
            "offset": 0,
        },
    ],
    "dataSize": 56,
    "index": 42666,
    "retOffset": 52,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["Finished"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42665,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["IsGoalValid"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42664,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42663,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["MovePawnToGoal"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42662,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["PathIsValid"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42659,
            "castTo": POINTER(c_bool),
            "offset": 92,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 42661,
            "isOutParm": True,
            "cType": FPathFindData,
            "castTo": POINTER(FPathFindData),
            "offset": 0,
        },
        {
            "name": "bCheckAnchor",
            "index": 42660,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 88,
        },
    ],
    "dataSize": 96,
    "index": 42658,
    "retOffset": 92,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["IsFollowingPath"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42657,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42656,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["ClearPath"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42653,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "bStopMovement",
            "index": 42655,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bAllowDelayedClear",
            "index": 42654,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 42652,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["FollowPath"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42650,
            "castTo": POINTER(c_bool),
            "offset": 88,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 42651,
            "isOutParm": True,
            "cType": FPathFindData,
            "castTo": POINTER(FPathFindData),
            "offset": 0,
        },
    ],
    "dataSize": 92,
    "index": 42649,
    "retOffset": 88,
}
BL2SDK.g_classFuncs["UGearboxNavigationHandle"]["CreatePathToLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42644,
            "castTo": POINTER(c_bool),
            "offset": 112,
        },
        {
            "name": "PathData",
            "isRet": True,
            "index": 42648,
            "isOutParm": True,
            "cType": FPathFindData,
            "castTo": POINTER(FPathFindData),
            "offset": 0,
        },
        {
            "name": "DestLocation",
            "index": 42647,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 88,
        },
        {
            "name": "DestPoly",
            "index": 42646,
            "optional": True,
            "type": FGBXNavMeshPolyRef,
            "castTo": POINTER(FGBXNavMeshPolyRef),
            "flags": 64,
            "offset": 100,
        },
        {
            "name": "bAdjustStartForMotion",
            "index": 42645,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 108,
        },
    ],
    "dataSize": 116,
    "index": 42643,
    "retOffset": 112,
}
BL2SDK.g_classFuncs["UIGbxMessageListener"]["WantsToStopListening"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43717,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43716,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIGbxMessageListener"]["GetActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43715,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43714,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIGbxMessageListener"]["GetListenerLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43713,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43712,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIGbxMessageListener"]["GetAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43711,
            "castTo": POINTER(POINTER(UPawnAllegiance)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43710,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIGbxMessageListener"]["ReceiveMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43708,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Message",
            "index": 43709,
            "className": "UGbxMessage",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43707,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UIGbxMessageListener"]["CaresAboutMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43705,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Message",
            "index": 43706,
            "className": "UGbxMessage",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43704,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UIRuleEngineOwner"]["GetRuleEngine"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43733,
            "castTo": POINTER(POINTER(URuleEngine)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43732,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UKnowledgeRecord"]["eventRecordEvalCallback"] = {
    "fields": [
        {
            "name": "EvalRuleEngine",
            "index": 43752,
            "className": "URuleEngine",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43751,
}
BL2SDK.g_classFuncs["UMindTargetInfo"]["GetAverageHitTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43801,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43800,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UMindTargetInfo"]["AddHitTargetRecord"] = {
    "fields": [
        {
            "name": "vecNewHitLoc",
            "index": 43799,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "flNewDamage",
            "index": 43798,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 43797,
}
BL2SDK.g_classFuncs["URule"]["GetRuleName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40930,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 40928,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["URule"]["GetRuleFName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40932,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 40929,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["URule"]["GetOtherEventParticipant"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40934,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40931,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["URuleEngine"]["ApplyFlagInitializationData"] = {
    "fields": [
        {
            "name": "FlagsToSet",
            "isRet": True,
            "index": 43404,
            "isOutParm": True,
            "cType": TArray_FFlagDefinitionInitialization,
            "castTo": POINTER(TArray_FFlagDefinitionInitialization),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43402,
}
BL2SDK.g_classFuncs["URuleEngine"]["IsResourceInUse"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43400,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TestResourceClass",
            "index": 43401,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 43399,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["URuleEngine"]["GetContextSource"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43398,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43397,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["URuleEngine"]["IsRunningRuleWhichBlocksRuleSetChange"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43396,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43395,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["URuleEngine"]["GetDynamicFlagValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43393,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "FlagDefinition",
            "index": 43394,
            "className": "UFlagDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43392,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["URuleEngine"]["SetDynamicFlagDefTrueTimed"] = {
    "fields": [
        {
            "name": "FlagDefinition",
            "index": 43391,
            "className": "UFlagDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Time",
            "index": 43390,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43389,
}
BL2SDK.g_classFuncs["URuleEngine"]["SetDynamicFlagDefValue"] = {
    "fields": [
        {
            "name": "FlagDefinition",
            "index": 43388,
            "className": "UFlagDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 43387,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 43386,
}
BL2SDK.g_classFuncs["URuleEngine"]["GetRuleSetFromReference"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43384,
            "castTo": POINTER(POINTER(URuleSet)),
            "offset": 8,
        },
        {
            "name": "ReferenceName",
            "index": 43385,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 43383,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["URuleEngine"]["ClearRuleSetStack"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43382,
}
BL2SDK.g_classFuncs["URuleEngine"]["PopRuleSetSwitch"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43381,
}
BL2SDK.g_classFuncs["URuleEngine"]["PushRuleSetSwitch"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43379,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "NewRuleSetTemplate",
            "index": 43380,
            "className": "URuleSet",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43378,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["URuleEngine"]["SetRuleSet"] = {
    "fields": [
        {
            "name": "NewRuleSetTemplate",
            "index": 43377,
            "className": "URuleSet",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43376,
}
BL2SDK.g_classFuncs["URuleEngine"]["SwitchActiveRuleSet"] = {
    "fields": [
        {
            "name": "NewRuleSetTemplate",
            "index": 43375,
            "className": "URuleSet",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43374,
}
BL2SDK.g_classFuncs["URuleEngine"]["UpdateKnowledge"] = {
    "fields": [
        {
            "name": "pKnowledgeRecordType",
            "index": 43373,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43372,
}
BL2SDK.g_classFuncs["URuleEngine"]["ActivateEventRuleEx"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43368,
            "castTo": POINTER(c_int),
            "offset": 28,
        },
        {
            "name": "EventDefName",
            "index": 43371,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Participants",
            "index": 43367,
            "optional": True,
            "type": TArray_AGearboxPawnPtr,
            "castTo": POINTER(TArray_AGearboxPawnPtr),
            "flags": 8,
            "offset": 8,
        },
        {
            "name": "Subject",
            "index": 43370,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "CastSizeMustMatch",
            "index": 43369,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 32,
    "index": 43365,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["URuleEngine"]["CleanUpRuleEngineData"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43364,
}
BL2SDK.g_classFuncs["URuleEngine"]["ActivateEventRule"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43359,
            "castTo": POINTER(c_int),
            "offset": 20,
        },
        {
            "name": "EventDefName",
            "index": 43363,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Instigator",
            "index": 43362,
            "optional": True,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "Subject",
            "index": 43361,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "CastSizeMustMatch",
            "index": 43360,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 43358,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["URuleEngine"]["ActivateEventRuleByDefinition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43355,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "EventDefinition",
            "index": 43357,
            "className": "URuleEventDef",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 43356,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43354,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxRuleEngine"]["Initialize"] = {
    "fields": [
        {
            "name": "NewGearboxPawn",
            "index": 43412,
            "className": "AGearboxPawn",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "NewMind",
            "index": 43411,
            "className": "AGearboxMind",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "NewAIFactory",
            "index": 43410,
            "className": "UGearboxAIFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 43409,
}
BL2SDK.g_classFuncs["UGearboxRuleEngine"]["GetContextSource"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43408,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43407,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UTargetIterator"]["eventRecordEvalCallback"] = {
    "fields": [
        {
            "name": "EvalRuleEngine",
            "index": 45008,
            "className": "URuleEngine",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45007,
}
BL2SDK.g_classFuncs["UIPopulationSpawnPoint"]["GetInitialMovementHoldTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43731,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43730,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIPopulationSpawnPoint"]["GetInitialDestination"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43729,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43728,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIPopulationSpawnPoint"]["GetInitialActionType"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43727,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInitialActionType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 43726,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIPopulationSpawnPoint"]["GetSpawnStyleType"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43725,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESpawnStyleType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 43724,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPopulationDefinition"]["IsAllSpawnTypesDebugEnabled"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43849,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43848,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPopulationDefinition"]["ToggleAllSpawnTypesDebug"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43847,
}
BL2SDK.g_classFuncs["UPopulationDefinition"]["GetRandomFactory"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43843,
            "castTo": POINTER(POINTER(UPopulationFactory)),
            "offset": 12,
        },
        {
            "name": "SpawningOpportunity",
            "index": 43846,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "GameStage",
            "index": 43845,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Rarity",
            "index": 43844,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 43842,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventGetDescriptionOfFactoryOutput"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43964,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 43963,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventShouldSavePopulationActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43960,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "Master",
            "index": 43962,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "ActorToSave",
            "index": 43961,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43959,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventDestroyPopulationActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43952,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "Master",
            "index": 43958,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "nOpportunityIdx",
            "index": 43957,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "ActorToDestroy",
            "index": 43956,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "SpawnFactory",
            "index": 43955,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "CreationFlags",
            "index": 43954,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "bDontSaveActor",
            "index": 43953,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 43951,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventCreatePopulationActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43943,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 44,
        },
        {
            "name": "Master",
            "index": 43950,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Opportunity",
            "index": 43949,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SpawnLocationContextObject",
            "index": 43948,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "SpawnLocation",
            "index": 43947,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "SpawnRotation",
            "index": 43946,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 24,
        },
        {
            "name": "GameStage",
            "index": 43945,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "Rarity",
            "index": 43944,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 48,
    "index": 43942,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventGetSpawnVisibilityBounds"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43939,
            "cType": FBoxSphereBounds,
            "castTo": POINTER(FBoxSphereBounds),
            "offset": 8,
        },
        {
            "name": "GameStage",
            "index": 43941,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Rarity",
            "index": 43940,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 64,
    "index": 43937,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["GetActorAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43934,
            "castTo": POINTER(POINTER(UPawnAllegiance)),
            "offset": 8,
        },
        {
            "name": "GameStage",
            "index": 43936,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Rarity",
            "index": 43935,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43933,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventGetActorSpawnCost"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43929,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "GameStage",
            "index": 43932,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Rarity",
            "index": 43931,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "bCanSpawnTest",
            "index": 43930,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 43928,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventOnSpawnActor"] = {
    "fields": [
        {
            "name": "aNewActor",
            "index": 43927,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43926,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["eventSetupMatineeForActor"] = {
    "fields": [
        {
            "name": "aNewActor",
            "index": 43925,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43924,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["GetSpawnFactory"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43920,
            "castTo": POINTER(POINTER(UPopulationFactory)),
            "offset": 12,
        },
        {
            "name": "SpawningOpportunity",
            "index": 43923,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "GameStage",
            "index": 43922,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Rarity",
            "index": 43921,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 43919,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["GetSpawnProbabilityAtThisGameStage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43916,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "GameStage",
            "index": 43918,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Rarity",
            "index": 43917,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43915,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["IsFactoryWithin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43913,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TestFactory",
            "index": 43914,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43912,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationFactory"]["CanSpawn"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43910,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "SpawningOpportunity",
            "index": 43911,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43909,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationFactoryGeneric"]["eventCreatePopulationActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43971,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 44,
        },
        {
            "name": "Master",
            "index": 43978,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Opportunity",
            "index": 43977,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SpawnLocationContextObject",
            "index": 43976,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "SpawnLocation",
            "index": 43975,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "SpawnRotation",
            "index": 43974,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 24,
        },
        {
            "name": "GameStage",
            "index": 43973,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "Rarity",
            "index": 43972,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 52,
    "index": 43970,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UPopulationFactoryGeneric"]["eventGetSpawnVisibilityBounds"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43967,
            "cType": FBoxSphereBounds,
            "castTo": POINTER(FBoxSphereBounds),
            "offset": 8,
        },
        {
            "name": "GameStage",
            "index": 43969,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Rarity",
            "index": 43968,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 36,
    "index": 43966,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationFactoryPopulationDefinition"]["GetSpawnFactory"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43990,
            "castTo": POINTER(POINTER(UPopulationFactory)),
            "offset": 12,
        },
        {
            "name": "SpawningOpportunity",
            "index": 43993,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "GameStage",
            "index": 43992,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Rarity",
            "index": 43991,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 43989,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UPopulationFactoryPopulationDefinition"]["GetActorAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43986,
            "castTo": POINTER(POINTER(UPawnAllegiance)),
            "offset": 8,
        },
        {
            "name": "GameStage",
            "index": 43988,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "AwesomeLevel",
            "index": 43987,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 43985,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationFactoryPopulationDefinition"]["IsFactoryWithin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43983,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TestFactory",
            "index": 43984,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 43982,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetActorSpawnedFromOpportunity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44204,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 8,
        },
        {
            "name": "Opportunity",
            "index": 44206,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "ActorIndex",
            "index": 44205,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 44203,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetSavedActorDebugInfoForOpportunity"] = {
    "fields": [
        {
            "name": "OpportunityIndex",
            "index": 44202,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SavedActorsDebugInfo",
            "isRet": True,
            "index": 44201,
            "isOutParm": True,
            "cType": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "TArray": True,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 44199,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetNumberOfSavedActorsForOpportunity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44197,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "OpportunityIndex",
            "index": 44198,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44196,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["WillActorsOpportunityBeResetOnLevelLoad"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44194,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "TestActor",
            "index": 44195,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44193,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["ResetRespawn"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44192,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetStreamingLevelForActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44190,
            "castTo": POINTER(POINTER(ULevelStreaming)),
            "offset": 4,
        },
        {
            "name": "OpportunityInLevel",
            "index": 44191,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44189,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["HasCapacityToSpawnFromFactories"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44186,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "TheFactories",
            "isRet": True,
            "index": 44185,
            "isOutParm": True,
            "cType": TArray_UPopulationFactoryPtr,
            "castTo": POINTER(TArray_UPopulationFactoryPtr),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "GameStage",
            "index": 44188,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Rarity",
            "index": 44187,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 44183,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["HasCapacityToSpawnFromFactory"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44179,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "TheFactory",
            "index": 44182,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "GameStage",
            "index": 44181,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Rarity",
            "index": 44180,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 44178,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["IsPopulationSystemAtCapacity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44177,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44176,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["StatProfileStop"] = {
    "fields": [
        {
            "name": "nStat",
            "index": 44175,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44174,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["StatProfileStart"] = {
    "fields": [
        {
            "name": "nStat",
            "index": 44173,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44172,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetStatProfileTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44170,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "nStat",
            "index": 44171,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44169,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["AddSavedActor"] = {
    "fields": [
        {
            "name": "OpportunityIdx",
            "index": 44168,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TheActor",
            "index": 44167,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SpawnFactory",
            "index": 44166,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "CreationFlags",
            "index": 44165,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 44164,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["DisconnectEncounter"] = {
    "fields": [
        {
            "name": "Encounter",
            "index": 44163,
            "className": "APopulationEncounter",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44162,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["ConnectEncounter"] = {
    "fields": [
        {
            "name": "Encounter",
            "index": 44161,
            "className": "APopulationEncounter",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44160,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["DisconnectOpportunity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44157,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "DeactivatedOpportunity",
            "index": 44159,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bSaveState",
            "index": 44158,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 44156,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["ConnectOpportunity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44154,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ActivatedOpportunity",
            "index": 44155,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44153,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetWorldInfo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44152,
            "castTo": POINTER(POINTER(AWorldInfo)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44151,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["DestroySpawnedActors"] = {
    "fields": [
        {
            "name": "Opportunity",
            "index": 44150,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bDontSaveActors",
            "index": 44149,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 44148,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["RemoveSpawnedActor"] = {
    "fields": [
        {
            "name": "TheActor",
            "index": 44147,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bKeepBody",
            "index": 44146,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "bActorDied",
            "index": 44145,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 44144,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["SetSpawnedActorsReuse"] = {
    "fields": [
        {
            "name": "TheActor",
            "index": 44143,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bReuse",
            "index": 44142,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 44141,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["AddExternalActor"] = {
    "fields": [
        {
            "name": "SpawnedActor",
            "index": 44140,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "FactoryClass",
            "index": 44139,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 44138,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["SpawnActorFromOpportunity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44127,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 56,
        },
        {
            "name": "TheFactory",
            "index": 44137,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SpawnLocationContextObject",
            "index": 44136,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SpawnLocation",
            "index": 44135,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "SpawnRotation",
            "index": 44134,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 20,
        },
        {
            "name": "GameStage",
            "index": 44133,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 32,
        },
        {
            "name": "Rarity",
            "index": 44132,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "OpportunityIdx",
            "index": 44131,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 40,
        },
        {
            "name": "PopOppFlags",
            "index": 44130,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 44,
        },
        {
            "name": "bCanSave",
            "index": 44129,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 48,
        },
        {
            "name": "bForceSpawn",
            "index": 44128,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 52,
        },
    ],
    "dataSize": 60,
    "index": 44126,
    "retOffset": 56,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["SpawnActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44119,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 40,
        },
        {
            "name": "TheFactory",
            "index": 44125,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SpawnLocationContextObject",
            "index": 44124,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SpawnLocation",
            "index": 44123,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "SpawnRotation",
            "index": 44122,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 20,
        },
        {
            "name": "GameStage",
            "index": 44121,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 32,
        },
        {
            "name": "Rarity",
            "index": 44120,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 36,
        },
    ],
    "dataSize": 44,
    "index": 44118,
    "retOffset": 40,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetPopulationOpportunityIndex"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44116,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "Opportunity",
            "index": 44117,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44115,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["GetActorsOpportunity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44113,
            "castTo": POINTER(POINTER(APopulationOpportunity)),
            "offset": 4,
        },
        {
            "name": "SpawnedActor",
            "index": 44114,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44112,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UPopulationMaster"]["SpawnPopulationControlledActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43980,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 52,
        },
        {
            "name": "SpawnClass",
            "index": 44111,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "SpawnOwner",
            "index": 44110,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SpawnTag",
            "index": 44109,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "SpawnLocation",
            "index": 44108,
            "optional": True,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 16,
        },
        {
            "name": "SpawnRotation",
            "index": 44107,
            "optional": True,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 28,
        },
        {
            "name": "ActorTemplate",
            "index": 44106,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "bNoCollisionFail",
            "index": 44105,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 44,
        },
        {
            "name": "bPersistAcrossLevelTransitions",
            "index": 44104,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 48,
        },
    ],
    "dataSize": 56,
    "index": 43979,
    "retOffset": 52,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["ClearBodyCompositionInstance"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44260,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["ApplyPreviewBodyComposition"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44259,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetBodyInfoProvider"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44258,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44257,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["ChangeInstanceDataSwitch"] = {
    "fields": [
        {
            "name": "SwitchName",
            "index": 44256,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "NewValue",
            "index": 44255,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 9,
    "index": 44254,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["PostInitBodyComposition"] = {
    "fields": [
        {
            "name": "Identifier",
            "index": 44253,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 44252,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "BodyCompositionIndex",
            "index": 44251,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Mode",
            "index": 44250,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 17,
    "index": 44249,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["PreRemoveBodyComposition"] = {
    "fields": [
        {
            "name": "Identifier",
            "index": 44248,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 44247,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "BodyCompositionIndex",
            "index": 44246,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 44245,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetNumSpawned"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44244,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44243,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetNumAlive"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44242,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44241,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetNumDied"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44240,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44239,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["eventDestroyed"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44238,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetRarity"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44237,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44236,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetGameStage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44235,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44234,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetOpportunityGameStage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44231,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "GameStage",
            "isRet": True,
            "index": 44233,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "Rarity",
            "isRet": True,
            "index": 44232,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 44230,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["eventTriggerKismetAllSpawnedEvent"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44229,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["eventClearSequenceActionLink"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44228,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["eventSetSequenceActionLink"] = {
    "fields": [
        {
            "name": "Link",
            "index": 44227,
            "className": "UGearboxSeqAct_PopulationOpportunityLink",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44226,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["SetEnabledStatus"] = {
    "fields": [
        {
            "name": "bEnable",
            "index": 44225,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44224,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["OnToggle"] = {
    "fields": [
        {
            "name": "Action",
            "index": 44223,
            "className": "USeqAct_Toggle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44222,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetNumLeftToSpawnAndStillAlive"] = {
    "fields": [
        {
            "name": "NumLeftToSpawn",
            "isRet": True,
            "index": 44221,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "NumStillAlive",
            "isRet": True,
            "index": 44220,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 44219,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["GetNextSpawnTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44218,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44217,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["RespawnKilledActors"] = {
    "fields": [
        {
            "name": "PercentageOfKilledActorsToRespawn",
            "index": 44216,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44215,
}
BL2SDK.g_classFuncs["APopulationOpportunity"]["DoSpawning"] = {
    "fields": [
        {
            "name": "PopMaster",
            "index": 44214,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44213,
}
BL2SDK.g_classFuncs["APopulationOpportunityArea"]["ApplyPreviewBodyComposition"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44302,
}
BL2SDK.g_classFuncs["APopulationOpportunityArea"]["GetBodyInfoProvider"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44301,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44300,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityArea"]["RespawnKilledActors"] = {
    "fields": [
        {
            "name": "PercentageOfKilledActorsToRespawn",
            "index": 44299,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44298,
}
BL2SDK.g_classFuncs["APopulationOpportunityArea"]["DoSpawning"] = {
    "fields": [
        {
            "name": "PopMaster",
            "index": 44297,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44296,
}
BL2SDK.g_classFuncs["APopulationOpportunityCloner"]["ApplyPreviewBodyComposition"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44321,
}
BL2SDK.g_classFuncs["APopulationOpportunityCloner"]["GetBodyInfoProvider"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44320,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44319,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCloner"]["CloneTimer"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44318,
}
BL2SDK.g_classFuncs["APopulationOpportunityCloner"]["RespawnKilledActors"] = {
    "fields": [
        {
            "name": "PercentageOfKilledActorsToRespawn",
            "index": 44317,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44316,
}
BL2SDK.g_classFuncs["APopulationOpportunityCloner"]["DoSpawning"] = {
    "fields": [
        {
            "name": "PopMaster",
            "index": 44315,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44314,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["ApplyPreviewBodyComposition"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44388,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["GetBodyInfoProvider"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44387,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44386,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"][
    "eventTriggerKismetSingleDeathEvent"
] = {"fields": [], "dataSize": 0, "index": 44384}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["eventTriggerKismetDeathEvent"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44383,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["GetNumSpawned"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44382,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44381,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["GetNumAlive"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44380,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44379,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["GetNumDied"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44378,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44377,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["WantsToStopListening"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44376,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44375,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["GetActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44374,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44373,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["GetListenerLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44372,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44371,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["GetAllegiance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44370,
            "castTo": POINTER(POINTER(UPawnAllegiance)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44369,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["ReceiveMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44367,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Message",
            "index": 44368,
            "className": "UGbxMessage",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44366,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["CaresAboutMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44364,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Message",
            "index": 44365,
            "className": "UGbxMessage",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44363,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["PostBeginPlay"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44362,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["EnableDebugging"] = {
    "fields": [
        {
            "name": "bEnabled",
            "index": 44361,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44360,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["RespawnKilledActors"] = {
    "fields": [
        {
            "name": "PercentageOfKilledActorsToRespawn",
            "index": 44359,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44358,
}
BL2SDK.g_classFuncs["APopulationOpportunityCombat"]["DoSpawning"] = {
    "fields": [
        {
            "name": "PopMaster",
            "index": 44357,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44356,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["ClearBodyCompositionInstance"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44429,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["ApplyPreviewBodyComposition"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44428,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["GetBodyInfoProvider"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44427,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44426,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["ChangeInstanceDataSwitch"] = {
    "fields": [
        {
            "name": "SwitchName",
            "index": 44425,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "NewValue",
            "index": 44424,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 9,
    "index": 44423,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["PostInitBodyComposition"] = {
    "fields": [
        {
            "name": "Identifier",
            "index": 44422,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 44421,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "BodyCompositionIndex",
            "index": 44420,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Mode",
            "index": 44419,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 17,
    "index": 44418,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["PreRemoveBodyComposition"] = {
    "fields": [
        {
            "name": "Identifier",
            "index": 44417,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 44416,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "BodyCompositionIndex",
            "index": 44415,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 44414,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["GetInitialMovementHoldTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44413,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44412,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["GetInitialDestination"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44411,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44410,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["GetInitialActionType"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44409,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInitialActionType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44408,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["GetSpawnStyleType"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44407,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESpawnStyleType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44406,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["RespawnKilledActors"] = {
    "fields": [
        {
            "name": "PercentageOfKilledActorsToRespawn",
            "index": 44405,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44404,
}
BL2SDK.g_classFuncs["APopulationOpportunityPoint"]["DoSpawning"] = {
    "fields": [
        {
            "name": "PopMaster",
            "index": 44403,
            "className": "UPopulationMaster",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44402,
}
BL2SDK.g_classFuncs["APopulationPoint"]["CanSpawnFromFactory"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44471,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "Factory",
            "index": 44474,
            "className": "UPopulationFactory",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "GameStage",
            "index": 44473,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "AwesomeLevel",
            "index": 44472,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 44470,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["APopulationPoint"]["GetSpawnRotation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44469,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44468,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationPoint"]["GetSpawnLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44467,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44466,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationPoint"]["ActorSpawned"] = {
    "fields": [
        {
            "name": "SpawnedActor",
            "index": 44465,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44464,
}
BL2SDK.g_classFuncs["APopulationPoint"]["GetInitialMovementHoldTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44463,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44462,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationPoint"]["GetInitialDestination"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44461,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44460,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationPoint"]["RandomizeInitialDestinations"] = {
    "fields": [],
    "dataSize": 16,
    "index": 44457,
}
BL2SDK.g_classFuncs["APopulationPoint"]["GetInitialActionType"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44456,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInitialActionType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44455,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationPoint"]["GetSpawnStyleType"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44454,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESpawnStyleType",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44453,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["APopulationPoint"]["OnToggle"] = {
    "fields": [
        {
            "name": "Action",
            "index": 44452,
            "className": "USeqAct_Toggle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44451,
}
BL2SDK.g_classFuncs["USeqEvent_EncounterWaveComplete"]["NotifyWaveComplete"] = {
    "fields": [
        {
            "name": "nWave",
            "index": 44623,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44622,
}
BL2SDK.g_classFuncs["USeqEvent_PopulatedActor"]["eventNotifyPopulatedActor"] = {
    "fields": [
        {
            "name": "PopulatedActor",
            "index": 44632,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "InDestPopulationOpportunity",
            "index": 44631,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "InSpawnPoint",
            "index": 44630,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "InOriginator",
            "index": 44629,
            "className": "AWorldInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 44628,
}
BL2SDK.g_classFuncs["USeqEvent_PopulatedPoint"]["eventNotifyPopulatedActor"] = {
    "fields": [
        {
            "name": "PopulatedActor",
            "index": 44639,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "InDestPopulationOpportunity",
            "index": 44638,
            "className": "APopulationOpportunity",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "InSpawnPoint",
            "index": 44637,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "InOriginator",
            "index": 44636,
            "className": "AWorldInfo",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 44635,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnReset"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39460,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39459,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnHitByVehicle"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39458,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "Vehicle",
            "index": 39457,
            "className": "AVehicle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 39456,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnRanOver"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39455,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "Vehicle",
            "index": 39454,
            "className": "AVehicle",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 39453,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnTimerEvent"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39452,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "SpecializedEventName",
            "index": 39451,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 39450,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnKilledPawn"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39449,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "Killed",
            "index": 39448,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 39447,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnLanded"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39446,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39445,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnStopFiringWeapon"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39444,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39443,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnStartFiringWeapon"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39442,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39441,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnTargetLost"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39440,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "OldTarget",
            "index": 39439,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 39438,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnTargetChanged"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39437,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "OldTarget",
            "index": 39436,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "NewTarget",
            "index": 39435,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 39434,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnTargetAcquired"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39433,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "NewTarget",
            "index": 39432,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 39431,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnSpawned"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39430,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39429,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnTakeHeal"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39428,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "Instigator",
            "index": 39427,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "Damage",
            "index": 39426,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "ShieldDamage",
            "index": 39425,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "DamageSource",
            "index": 39424,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
        {
            "name": "DamageType",
            "index": 39423,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 39422,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnVehicleTakeDamage"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39421,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "Instigator",
            "index": 39420,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "HitVehicle",
            "index": 39419,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "Damage",
            "index": 39418,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "ShieldDamage",
            "index": 39417,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "DamageSource",
            "index": 39416,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
        {
            "name": "DamageType",
            "index": 39415,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 39414,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnTakeDamage"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39413,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "Instigator",
            "index": 39412,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "Damage",
            "index": 39411,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "ShieldDamage",
            "index": 39410,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "DamageSource",
            "index": 39409,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
        {
            "name": "DamageType",
            "index": 39408,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 39407,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnUserCouldNotAffordSecondary"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39406,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "EventOutput",
            "index": 39405,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ENPCOnUsedOutputs",
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Instigator",
            "index": 39404,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "UsedComponent",
            "index": 39403,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 39402,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnUserCouldNotAfford"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39401,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "EventOutput",
            "index": 39400,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ENPCOnUsedOutputs",
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Instigator",
            "index": 39399,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "UsedComponent",
            "index": 39398,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 39397,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnSecondaryUsed"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39396,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "EventOutput",
            "index": 39395,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ENPCOnUsedOutputs",
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Instigator",
            "index": 39394,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "UsedComponent",
            "index": 39393,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 39392,
}
BL2SDK.g_classFuncs["UAIDefinition"]["OnUsed"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 39389,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "EventOutput",
            "index": 39388,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ENPCOnUsedOutputs",
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Instigator",
            "index": 39387,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "UsedComponent",
            "index": 39386,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 39385,
}
BL2SDK.g_classFuncs["UAIDefinition"]["SetBehaviorProviderDefinition"] = {
    "fields": [
        {
            "name": "NewBehaviorProviderDefinition",
            "index": 39384,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39383,
}
BL2SDK.g_classFuncs["UAIDefinition"]["GetBehaviorProviderDefinition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39382,
            "castTo": POINTER(POINTER(UBehaviorProviderDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39381,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["RecentlyRunBehaviorsForSequence"] = {
    "fields": [
        {
            "name": "PID",
            "index": 40538,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ProvidersIndex",
            "index": 40537,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "SequencesIndex",
            "index": 40536,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "ExecutionRecord",
            "isRet": True,
            "index": 40535,
            "isOutParm": True,
            "cType": FBehaviorExecutionRecord,
            "castTo": POINTER(FBehaviorExecutionRecord),
            "offset": 12,
        },
    ],
    "dataSize": 40,
    "index": 40534,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["AllEventStateForSequence"] = {
    "fields": [
        {
            "name": "PID",
            "index": 40533,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ProvidersIndex",
            "index": 40532,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "SequencesDataIndex",
            "index": 40531,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "EventState",
            "isRet": True,
            "index": 40530,
            "isOutParm": True,
            "cType": FBehaviorEventState,
            "castTo": POINTER(FBehaviorEventState),
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 40529,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["AllWaitingThreadsForSequence"] = {
    "fields": [
        {
            "name": "PID",
            "index": 40528,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ProvidersIndex",
            "index": 40527,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "SequencesDataIndex",
            "index": 40526,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "Thread",
            "isRet": True,
            "index": 40525,
            "isOutParm": True,
            "cType": FBehaviorThread,
            "castTo": POINTER(FBehaviorThread),
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 40524,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["AllSequencesForProvider"] = {
    "fields": [
        {
            "name": "PID",
            "index": 40523,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ProvidersIndex",
            "index": 40522,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "SequenceState",
            "isRet": True,
            "index": 40521,
            "isOutParm": True,
            "cType": FBehaviorSequenceState,
            "castTo": POINTER(FBehaviorSequenceState),
            "offset": 8,
        },
    ],
    "dataSize": 32,
    "index": 40520,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["AllProvidersForProcess"] = {
    "fields": [
        {
            "name": "PID",
            "index": 40519,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ProviderDefinition",
            "isRet": True,
            "index": 40518,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UBehaviorProviderDefinition)),
            "offset": 4,
        },
        {
            "name": "ProvidersIndex",
            "isRet": True,
            "index": 40517,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 40516,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["AllProcesses"] = {
    "fields": [
        {
            "name": "Process",
            "isRet": True,
            "index": 40515,
            "isOutParm": True,
            "cType": FBehaviorProcess,
            "castTo": POINTER(FBehaviorProcess),
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 40514,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["GetVariableStateSummaryForSequence"] = {
    "fields": [
        {
            "name": "PID",
            "index": 40513,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SequencesDataIndex",
            "index": 40512,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "DebugInfo",
            "isRet": True,
            "index": 40511,
            "isOutParm": True,
            "cType": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 40509,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["GetChunkedListSummaries"] = {
    "fields": [
        {
            "name": "DebugInfo",
            "isRet": True,
            "index": 40508,
            "isOutParm": True,
            "cType": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 40506,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["GetBehaviorKernelStats"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40505,
            "cType": FBehaviorKernelStats,
            "castTo": POINTER(FBehaviorKernelStats),
            "offset": 0,
        }
    ],
    "dataSize": 104,
    "index": 40504,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["IsBehaviorKernelWatchingConsumer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40502,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ConsumerHandle",
            "index": 40503,
            "type": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40501,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["IsBehaviorSequenceEnabled"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39968,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40500,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "ProviderDefinition",
            "index": 40499,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "BehaviorSequenceName",
            "index": 40498,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 39967,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["ActivateBehaviorOutputLink"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40497,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "OutputLinkId",
            "index": 40496,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39840,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["PublishBoolOutputVariable"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40495,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Output",
            "index": 40494,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 40493,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["PublishObjectOutputVariable"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40492,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Output",
            "index": 40491,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39917,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["PublishVectorOutputVariable"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40490,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Output",
            "isRet": True,
            "index": 40489,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
    ],
    "dataSize": 40,
    "index": 40488,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["PublishFloatOutputVariable"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40487,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Output",
            "index": 40486,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39903,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["PublishIntOutputVariable"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40485,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Output",
            "index": 40484,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39889,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["BeginNondeterministicProviderRegistration"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40483,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40482,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["ProcessReplicatedBehaviorEvent"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40481,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "EventData",
            "isRet": True,
            "index": 40480,
            "isOutParm": True,
            "cType": FReplicatedBehaviorEvent,
            "castTo": POINTER(FReplicatedBehaviorEvent),
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 40479,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["ProcessReplicatedBehaviorConsumerState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40472,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40474,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "ReplicatedConsumerState",
            "isRet": True,
            "index": 40473,
            "isOutParm": True,
            "cType": FReplicatedBehaviorConsumerState,
            "castTo": POINTER(FReplicatedBehaviorConsumerState),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 40471,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["ChangeBehaviorSequenceActivationStatus"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40465,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "ProviderDefinition",
            "index": 40464,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "SequenceName",
            "index": 40463,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "ActivationStatusChanage",
            "index": 40462,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EChangeStatus",
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 17,
    "index": 39760,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["ChangeBehaviorConsumerSuspensionStatus"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40461,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "SuspensionStatusChanage",
            "index": 40460,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EChangeStatus",
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 5,
    "index": 40459,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["BroadcastBehaviorEventFromScript"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40458,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "EventName",
            "index": 40457,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "ProvidersToBroadcast",
            "isRet": True,
            "index": 40453,
            "isOutParm": True,
            "cType": TArray_UBehaviorProviderDefinitionPtr,
            "castTo": POINTER(TArray_UBehaviorProviderDefinitionPtr),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "EventOutputToActivate",
            "index": 40456,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "Parameters",
            "isRet": True,
            "index": 40455,
            "isOutParm": True,
            "cType": TArray_FBehaviorVariableValue,
            "castTo": POINTER(TArray_FBehaviorVariableValue),
            "TArray": True,
            "offset": 28,
        },
    ],
    "dataSize": 40,
    "index": 39867,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["ActivateBehaviorEventFromScript"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40451,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "ProviderDefinition",
            "index": 40450,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "EventName",
            "index": 40449,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "EventOutputToActivate",
            "index": 40448,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "Parameters",
            "isRet": True,
            "index": 40447,
            "isOutParm": True,
            "cType": TArray_FBehaviorVariableValue,
            "castTo": POINTER(TArray_FBehaviorVariableValue),
            "TArray": True,
            "offset": 20,
        },
    ],
    "dataSize": 32,
    "index": 40445,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["RemoveBehaviorProviderFromConsumer"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40444,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "ProviderDefinition",
            "index": 40443,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 40442,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["IntializeBehaviorProviderForConsumer"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40441,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "ProviderDefinition",
            "index": 40440,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 40439,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["ForceUnregisterBehaviorConsumer"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 40438,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40437,
}
BL2SDK.g_classFuncs["UBehaviorKernel"]["RegisterBehaviorConsumer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40435,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 4,
        },
        {
            "name": "BehaviorConsumer",
            "index": 40436,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 40434,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UBehaviorProviderDefinition"]["SetObjectBehaviorVariable"] = {
    "fields": [
        {
            "name": "BehaviorVariable",
            "isRet": True,
            "index": 39275,
            "isOutParm": True,
            "cType": FBehaviorVariableValue,
            "castTo": POINTER(FBehaviorVariableValue),
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 39274,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39273,
}
BL2SDK.g_classFuncs["UBehaviorProviderDefinition"]["SetVectorBehaviorVariable"] = {
    "fields": [
        {
            "name": "BehaviorVariable",
            "isRet": True,
            "index": 39272,
            "isOutParm": True,
            "cType": FBehaviorVariableValue,
            "castTo": POINTER(FBehaviorVariableValue),
            "offset": 0,
        },
        {
            "name": "Value",
            "isRet": True,
            "index": 39271,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
    ],
    "dataSize": 40,
    "index": 39270,
}
BL2SDK.g_classFuncs["UBehaviorProviderDefinition"]["SetFloatBehaviorVariable"] = {
    "fields": [
        {
            "name": "BehaviorVariable",
            "isRet": True,
            "index": 39269,
            "isOutParm": True,
            "cType": FBehaviorVariableValue,
            "castTo": POINTER(FBehaviorVariableValue),
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 39268,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39267,
}
BL2SDK.g_classFuncs["UBehaviorProviderDefinition"]["SetIntBehaviorVariable"] = {
    "fields": [
        {
            "name": "BehaviorVariable",
            "isRet": True,
            "index": 39266,
            "isOutParm": True,
            "cType": FBehaviorVariableValue,
            "castTo": POINTER(FBehaviorVariableValue),
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 39265,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39264,
}
BL2SDK.g_classFuncs["UBehaviorProviderDefinition"]["SetBoolBehaviorVariable"] = {
    "fields": [
        {
            "name": "BehaviorVariable",
            "isRet": True,
            "index": 39263,
            "isOutParm": True,
            "cType": FBehaviorVariableValue,
            "castTo": POINTER(FBehaviorVariableValue),
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 39262,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39261,
}
BL2SDK.g_classFuncs["UIBehaviorConsumer"]["GetBehaviorConsumerHandle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39759,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39758,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UIBehaviorProvider"]["SetBehaviorProviderDefinition"] = {
    "fields": [
        {
            "name": "NewBehaviorProviderDefinition",
            "index": 43691,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43690,
}
BL2SDK.g_classFuncs["UIBehaviorProvider"]["GetBehaviorProviderDefinition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43689,
            "castTo": POINTER(POINTER(UBehaviorProviderDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43688,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UICustomEvent"]["eventRunCustomEvent"] = {
    "fields": [
        {
            "name": "EventName",
            "index": 43703,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "EventInstigator",
            "index": 43702,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 43701,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "EventData",
            "index": 43700,
            "optional": True,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 43699,
}
BL2SDK.g_classFuncs["UITimerBehavior"]["SetTimerState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39795,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "TimerId",
            "index": 39794,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EBehaviorTimerID",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TimerState",
            "index": 39796,
            "type": FBehaviorTimerState,
            "castTo": POINTER(FBehaviorTimerState),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 39792,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UITimerBehavior"]["GetTimerState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39805,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "TimerId",
            "index": 39804,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EBehaviorTimerID",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TimerState",
            "isRet": True,
            "index": 39806,
            "isOutParm": True,
            "cType": FBehaviorTimerState,
            "castTo": POINTER(FBehaviorTimerState),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 39793,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UITimerBehavior"]["GetTimeSeconds"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39808,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 39803,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["GetAnimLength"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41748,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "SMC",
            "index": 41749,
            "className": "USkeletalMeshComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41747,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["eventIsPlayingLocally"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41745,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41746,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41744,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["GetSMNode"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41742,
            "castTo": POINTER(POINTER(UAnimNodeSpecialMoveBlend)),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41743,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 41741,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["PlayAnim"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41738,
            "castTo": POINTER(c_float),
            "offset": 36,
        },
        {
            "name": "SMI",
            "index": 41740,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "SMData",
            "isRet": True,
            "index": 41739,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 8,
        },
    ],
    "dataSize": 44,
    "index": 41737,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["eventAnimFinished"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41735,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "BlendNode",
            "index": 41734,
            "className": "UAnimNodeSpecialMoveBlend",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "SMData",
            "isRet": True,
            "index": 41733,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 12,
        },
        {
            "name": "bInterrupted",
            "index": 41732,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 44,
    "index": 41731,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["eventClientFinished"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41726,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "bInterrupted",
            "index": 41725,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 28,
    "index": 41722,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["eventClientStarted"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41718,
            "castTo": POINTER(c_float),
            "offset": 36,
        },
        {
            "name": "SMI",
            "index": 41720,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "SMData",
            "isRet": True,
            "index": 41719,
            "isOutParm": True,
            "cType": FSpecialMoveData,
            "castTo": POINTER(FSpecialMoveData),
            "offset": 8,
        },
    ],
    "dataSize": 52,
    "index": 41715,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["eventServerFinished"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41714,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "bInterrupted",
            "index": 41713,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 41710,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["eventServerStarted"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41707,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 41704,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["AddAnimSet"] = {
    "fields": [
        {
            "name": "SMI",
            "index": 41703,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41701,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["GetSkeletalMesh"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41697,
            "castTo": POINTER(POINTER(USkeletalMeshComponent)),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41698,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 41696,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["eventAuthorityCanPlay"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41692,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "SMI",
            "index": 41693,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 41691,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["OnTimedEvent"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 41690,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        },
        {
            "name": "SpecializedEventName",
            "index": 41689,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 41688,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["OnServerStop"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 41687,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41686,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["OnServerStart"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 41685,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41684,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["OnStop"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 41683,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41682,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["OnStart"] = {
    "fields": [
        {
            "name": "ConsumerHandle",
            "isRet": True,
            "index": 41681,
            "isOutParm": True,
            "cType": FBehaviorConsumerHandle,
            "castTo": POINTER(FBehaviorConsumerHandle),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41680,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["SetBehaviorProviderDefinition"] = {
    "fields": [
        {
            "name": "NewBehaviorProviderDefinition",
            "index": 41679,
            "className": "UBehaviorProviderDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41678,
}
BL2SDK.g_classFuncs["UGearboxAnimDefinition"]["GetBehaviorProviderDefinition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41677,
            "castTo": POINTER(POINTER(UBehaviorProviderDefinition)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41676,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UBehavior_TriggerDialogEvent"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40280,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40279,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40278,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40277,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40276,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40275,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 60,
    "index": 40274,
}
BL2SDK.g_classFuncs["UBehavior_TriggerDialogEvent"]["TriggerDialogEvent"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40273,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "SelfObject",
            "index": 40272,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40271,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40270,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "EventData",
            "isRet": True,
            "index": 40269,
            "isOutParm": True,
            "cType": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 40268,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["SetDialogNameTag"] = {
    "fields": [
        {
            "name": "NewName",
            "index": 42023,
            "className": "UGearboxDialogNameTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42022,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["GetReplicatedDialogData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42021,
            "cType": FGearboxDialogReplicatedData,
            "castTo": POINTER(FGearboxDialogReplicatedData),
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 42020,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["SetReplicatedDialogData"] = {
    "fields": [
        {
            "name": "TalkAct",
            "index": 42019,
            "className": "UGearboxDialogAct_Talk",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 42018,
            "isOutParm": True,
            "cType": FGearboxDialogData,
            "castTo": POINTER(FGearboxDialogData),
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 42017,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["GetDialogGroups"] = {
    "fields": [
        {
            "name": "Groups",
            "isRet": True,
            "index": 42016,
            "isOutParm": True,
            "cType": TArray_UGearboxDialogGroupPtr,
            "castTo": POINTER(TArray_UGearboxDialogGroupPtr),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42014,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["GetDialogComponent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42013,
            "castTo": POINTER(POINTER(UGearboxDialogComponent)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42012,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["GetDialogNameTag"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42011,
            "castTo": POINTER(POINTER(UGearboxDialogNameTag)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42010,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["GetActor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42009,
            "castTo": POINTER(POINTER(AActor)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42008,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["CanTalk"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42007,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42006,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["eventServerDialog_TriggerEvent"] = {
    "fields": [
        {
            "name": "EventTag",
            "index": 42005,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Other",
            "index": 42004,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "ObjectParameter",
            "index": 42003,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 42002,
}
BL2SDK.g_classFuncs["AGearboxDialogActor"]["eventReplicatedEvent"] = {
    "fields": [
        {
            "name": "VarName",
            "index": 42001,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 42000,
}
BL2SDK.g_classFuncs["UGearboxDialogComponent"]["IsTalking"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41991,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41990,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxDialogComponent"]["StopTalking"] = {
    "fields": [
        {
            "name": "EventTag",
            "index": 41989,
            "optional": True,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bForceStop",
            "index": 41988,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 41987,
}
BL2SDK.g_classFuncs["UGearboxDialogComponent"]["TalkReplicated"] = {
    "fields": [
        {
            "name": "NewDialogData",
            "index": 41986,
            "type": FGearboxDialogReplicatedData,
            "castTo": POINTER(FGearboxDialogReplicatedData),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 41985,
}
BL2SDK.g_classFuncs["UGearboxDialogComponent"]["Talk"] = {
    "fields": [
        {
            "name": "TalkAction",
            "index": 41978,
            "className": "UGearboxDialogAct_Talk",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41977,
}
BL2SDK.g_classFuncs["UGearboxDialogComponent"]["GetMatchingEvent"] = {
    "fields": [
        {
            "name": "InEventTag",
            "index": 41976,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "OutEvent",
            "isRet": True,
            "index": 41975,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UGearboxDialogEvent)),
            "offset": 4,
        },
        {
            "name": "OutGroup",
            "isRet": True,
            "index": 41974,
            "isOutParm": True,
            "castTo": POINTER(POINTER(UGearboxDialogGroup)),
            "offset": 8,
        },
        {
            "name": "bIncludeDisabled",
            "index": 41973,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "OtherNameTag",
            "index": 41972,
            "optional": True,
            "className": "UGearboxDialogNameTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
        {
            "name": "bAllowTemplateGroups",
            "index": 41971,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 41970,
}
BL2SDK.g_classFuncs["UGearboxDialogComponent"]["TriggerEvent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41965,
            "castTo": POINTER(POINTER(UGearboxDialogEventData)),
            "offset": 16,
        },
        {
            "name": "EventTag",
            "index": 41969,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Other",
            "index": 41968,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "ObjectParameter",
            "index": 41967,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "TemplateEventData",
            "index": 41966,
            "optional": True,
            "className": "UGearboxDialogEventData",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 41964,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGearboxDialogComponent"]["GetDialogInterface"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41963,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 41962,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxDialogEventData"]["IsActive"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40282,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40281,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxDialogGroup"]["SimpleEvent"] = {
    "fields": [
        {
            "name": "Owner",
            "index": 42084,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "NameTag",
            "index": 42083,
            "className": "UGearboxDialogNameTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "EventTag",
            "index": 42082,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 42081,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["DrawDialogDebug"] = {
    "fields": [
        {
            "name": "HUD",
            "index": 42154,
            "className": "AHUD",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "StartY",
            "index": 42153,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 56,
    "index": 42150,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"][
    "CheckpointRemoveReferencesBeforeDestroy"
] = {"fields": [], "dataSize": 0, "index": 42149}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["GetEventTagForEventInfo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42147,
            "castTo": POINTER(POINTER(UGearboxDialogEventTag)),
            "offset": 8,
        },
        {
            "name": "EventInfo",
            "index": 42148,
            "type": FDialogEventInfo,
            "castTo": POINTER(FDialogEventInfo),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 42146,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["TriggerGroupEvent"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42139,
            "castTo": POINTER(POINTER(UGearboxDialogEventData)),
            "offset": 24,
        },
        {
            "name": "Group",
            "index": 42145,
            "className": "UGearboxDialogGroup",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "EventTag",
            "index": 42144,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "Instigator",
            "index": 42143,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "Other",
            "index": 42142,
            "optional": True,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "ObjectParameter",
            "index": 42141,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
        {
            "name": "TemplateEventData",
            "index": 42140,
            "optional": True,
            "className": "UGearboxDialogEventData",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 42138,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["Cleanup"] = {
    "fields": [],
    "dataSize": 0,
    "index": 42137,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["SetGroupEventTag"] = {
    "fields": [
        {
            "name": "Group",
            "index": 42136,
            "className": "UGearboxDialogGroup",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "EventTag",
            "index": 42135,
            "className": "UGearboxDialogEventTag",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 42134,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["GetGroupEventTag"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42132,
            "castTo": POINTER(POINTER(UGearboxDialogEventTag)),
            "offset": 4,
        },
        {
            "name": "Group",
            "index": 42133,
            "className": "UGearboxDialogGroup",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42131,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["SilenceGroup"] = {
    "fields": [
        {
            "name": "Group",
            "index": 42130,
            "className": "UGearboxDialogGroup",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42129,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["AddGroup"] = {
    "fields": [
        {
            "name": "Group",
            "index": 42128,
            "className": "UGearboxDialogGroup",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42127,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["UnregisterTalker"] = {
    "fields": [
        {
            "name": "Talker",
            "index": 42126,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42125,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["RegisterTalker"] = {
    "fields": [
        {
            "name": "Talker",
            "index": 42124,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42123,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["DisableTalker"] = {
    "fields": [
        {
            "name": "Talker",
            "index": 42122,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42121,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["EnableTalker"] = {
    "fields": [
        {
            "name": "Talker",
            "index": 42120,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 42119,
}
BL2SDK.g_classFuncs["UGearboxDialogManager"]["GetPriority"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 42117,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "InPriority",
            "index": 42118,
            "className": "UGearboxDialogPriority",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 42116,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxDialogNode"]["ActivateOutput"] = {
    "fields": [
        {
            "name": "Link",
            "index": 41927,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41926,
}
BL2SDK.g_classFuncs["UGearboxDialogAction"]["eventActivate"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41928,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_Chance"]["eventActivate"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41933,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_Compare"]["eventActivate"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41934,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_ObjectParameterSwitch"]["eventActivate"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41937,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_Talk"]["eventActivate"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41953,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_Talk"]["eventTalkFinished"] = {
    "fields": [
        {
            "name": "InTalker",
            "index": 41952,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41951,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_Talk"]["eventTalkStarted"] = {
    "fields": [
        {
            "name": "InTalker",
            "index": 41950,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41949,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_Trigger"]["ActivateOutput"] = {
    "fields": [
        {
            "name": "Link",
            "index": 41958,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41957,
}
BL2SDK.g_classFuncs["UGearboxDialogAct_Trigger"]["eventActivate"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41956,
}
BL2SDK.g_classFuncs["UGearboxDialogVariable"]["ResolveToArgumentValue"] = {
    "fields": [
        {
            "name": "Out_ArgumentValue",
            "isRet": True,
            "index": 42161,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42160,
}
BL2SDK.g_classFuncs["UGearboxDialogVariable"]["GetTalkers"] = {
    "fields": [
        {
            "name": "Talkers",
            "isRet": True,
            "index": 42159,
            "isOutParm": True,
            "cType": TArray_AActorPtr,
            "castTo": POINTER(TArray_AActorPtr),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 42157,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["HandleOffersNotifiedResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41404,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 164,
    "index": 41401,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"][
    "HandleBulkEntitlementsConsumedResponse"
] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41439,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 192,
    "index": 41405,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["HandleEntitlementConsumedResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41387,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 184,
    "index": 41382,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["HandleCodeRedeemedResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41380,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 208,
    "index": 41374,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["HandleResetPasswordResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41373,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 172,
    "index": 41369,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["HandleSignUpResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41368,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 184,
    "index": 41363,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["HandleSignInResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41359,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 184,
    "index": 41354,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["ExtractArchwayResult"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41311,
            "cType": FArchwayResult,
            "castTo": POINTER(FArchwayResult),
            "offset": 12,
        },
        {
            "name": "Data",
            "index": 41310,
            "type": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "flags": 8,
            "offset": 0,
        },
    ],
    "dataSize": 140,
    "index": 41308,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["MarkOffersNotified"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 41304,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 136,
    "index": 41295,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["LocallyConsumeEntitlementWithCount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41289,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "EntitlementName",
            "index": 41292,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "NumToConsume",
            "index": 41291,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "ControllerId",
            "index": 41290,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 41287,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["eventConsumeEntitlementsWithCounts"] = {
    "fields": [
        {
            "name": "EntitlementsToConsume",
            "index": 41456,
            "type": TArray_UGearboxAccountEntitlementPtr,
            "castTo": POINTER(TArray_UGearboxAccountEntitlementPtr),
            "flags": 8,
            "offset": 0,
        },
        {
            "name": "Counts",
            "index": 41457,
            "type": TArray_int,
            "castTo": POINTER(TArray_int),
            "flags": 8,
            "offset": 12,
        },
        {
            "name": "ControllerId",
            "index": 41448,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "EntitlementConsumedDelegate",
            "index": 41449,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 28,
        },
    ],
    "dataSize": 192,
    "index": 41293,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["ConsumeEntitlementWithCount"] = {
    "fields": [
        {
            "name": "EntitlementName",
            "index": 41276,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Count",
            "index": 41275,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "ControllerId",
            "index": 41274,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "EntitlementConsumedDelegate",
            "index": 41273,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 144,
    "index": 41268,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["RedeemCode"] = {
    "fields": [
        {
            "name": "Code",
            "index": 41266,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "ControllerId",
            "index": 41265,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "CodeRedeemedDelegate",
            "index": 41264,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 144,
    "index": 41258,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["ResetPasswordGearboxAccount"] = {
    "fields": [
        {
            "name": "Email",
            "index": 41256,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "ControllerId",
            "index": 41255,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "ResetPasswordDelegate",
            "index": 41254,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 136,
    "index": 41249,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["EscapeJson"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41247,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Input",
            "index": 41248,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 36,
    "index": 41245,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["SignUpGearboxAccount"] = {
    "fields": [
        {
            "name": "Email",
            "index": 41243,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Password",
            "index": 41242,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "PasswordConfirm",
            "index": 41241,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 24,
        },
        {
            "name": "AgeString",
            "index": 41240,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 36,
        },
        {
            "name": "ControllerId",
            "index": 41239,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 48,
        },
        {
            "name": "SignUpDelegate",
            "index": 41238,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 52,
        },
    ],
    "dataSize": 176,
    "index": 41233,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["SignInGearboxAccount"] = {
    "fields": [
        {
            "name": "Email",
            "index": 41223,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Password",
            "index": 41222,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "ControllerId",
            "index": 41221,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "SignInDelegate",
            "index": 41220,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 28,
        },
    ],
    "dataSize": 152,
    "index": 41215,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["OnEntitlementConsumed"] = {
    "fields": [
        {
            "name": "ConsumeResult",
            "index": 41214,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EEntitlementConsumedResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41213,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["OnCodeRedeemed"] = {
    "fields": [
        {
            "name": "RedeemResult",
            "index": 41210,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECodeRedeemedResult",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "CustomTitle",
            "index": 41211,
            "optional": True,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "CustomBody",
            "index": 41212,
            "optional": True,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 41209,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["OnResetPasswordGearboxAccount"] = {
    "fields": [
        {
            "name": "ResetResult",
            "index": 41208,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EResetPasswordResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41207,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["OnSignUpGearboxAccount"] = {
    "fields": [
        {
            "name": "SignUpResult",
            "index": 41206,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESignUpResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41205,
}
BL2SDK.g_classFuncs["UGearboxAccountActions"]["OnSignInGearboxAccount"] = {
    "fields": [
        {
            "name": "SignInResult",
            "index": 41203,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESignInResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41202,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["CountEntitlement"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41533,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "EntitlementName",
            "index": 41535,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bIgnoreLocallyConsumed",
            "index": 41534,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 41532,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["GetTotalGoldenKeyCount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41531,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 41530,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["GetGoldenKeyCount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41528,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "bIgnoreLocallyConsumed",
            "index": 41529,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41527,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["HasGoldenKey"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41525,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "bIgnoreLocallyConsumed",
            "index": 41526,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41524,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["HasDeveloperSkin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41523,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41522,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["IsDeveloper"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41521,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41520,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["MarkOffersNotified"] = {
    "fields": [],
    "dataSize": 4,
    "index": 41519,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["GetUnnotifiedOffers"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41516,
            "cType": TArray_UGearboxAccountOfferPtr,
            "castTo": POINTER(TArray_UGearboxAccountOfferPtr),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 41305,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["GetEntitlementWithName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41280,
            "castTo": POINTER(POINTER(UGearboxAccountEntitlement)),
            "offset": 8,
        },
        {
            "name": "EntitlementName",
            "index": 41515,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41279,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["GetEntitlementWithId"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41513,
            "castTo": POINTER(POINTER(UGearboxAccountEntitlement)),
            "offset": 4,
        },
        {
            "name": "Id",
            "index": 41514,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 41512,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["HasEntitlement"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41509,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "EntitlementName",
            "index": 41511,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bIgnoreLocallyConsumed",
            "index": 41510,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 41508,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["RemoveEntitlement"] = {
    "fields": [
        {
            "name": "Entitlement",
            "index": 41507,
            "className": "UGearboxAccountEntitlement",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41506,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["ReplaceEntitlements"] = {
    "fields": [
        {
            "name": "NewEntitlements",
            "isRet": True,
            "index": 41495,
            "isOutParm": True,
            "cType": TArray_FEntitlementResult,
            "castTo": POINTER(TArray_FEntitlementResult),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "NewOffers",
            "isRet": True,
            "index": 41497,
            "isOutParm": True,
            "cType": TArray_FOfferResult,
            "castTo": POINTER(TArray_FOfferResult),
            "TArray": True,
            "offset": 12,
        },
    ],
    "dataSize": 112,
    "index": 41493,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["ReplaceServices"] = {
    "fields": [
        {
            "name": "NewServices",
            "isRet": True,
            "index": 41492,
            "isOutParm": True,
            "cType": TArray_FServiceResult,
            "castTo": POINTER(TArray_FServiceResult),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41490,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["HandleReloadEntitlementsResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41489,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 152,
    "index": 41487,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["ReloadEntitlements"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41486,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 112,
    "index": 41479,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["ResetEntitlementUpdateTimer"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41478,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["CanReloadEntitlements"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41477,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41476,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["TriggerEntitlementsUpdatedDelegates"] = {
    "fields": [],
    "dataSize": 12,
    "index": 41474,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["ClearEntitlementsUpdatedDelegate"] = {
    "fields": [
        {
            "name": "EntitlementsUpdatedDelegate",
            "index": 41473,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 41472,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["AddEntitlementsUpdatedDelegate"] = {
    "fields": [
        {
            "name": "EntitlementsUpdatedDelegate",
            "index": 41471,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41470,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["eventGetService"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41230,
            "castTo": POINTER(POINTER(USparkServiceConfiguration)),
            "offset": 8,
        },
        {
            "name": "ServiceName",
            "index": 41468,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41229,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["Clear"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41467,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["ExtractArchwayResultJson"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41361,
            "castTo": POINTER(c_bool),
            "offset": 140,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 41546,
            "isOutParm": True,
            "cType": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "ArchwayData",
            "isRet": True,
            "index": 41539,
            "isOutParm": True,
            "cType": FArchwayResult,
            "castTo": POINTER(FArchwayResult),
            "offset": 12,
        },
    ],
    "dataSize": 260,
    "index": 41360,
    "retOffset": 140,
}
BL2SDK.g_classFuncs["UGearboxAccountData"]["ExtractArchwayResult"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41465,
            "castTo": POINTER(c_bool),
            "offset": 140,
        },
        {
            "name": "Data",
            "isRet": True,
            "index": 41464,
            "isOutParm": True,
            "cType": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "ArchwayData",
            "isRet": True,
            "index": 41466,
            "isOutParm": True,
            "cType": FArchwayResult,
            "castTo": POINTER(FArchwayResult),
            "offset": 12,
        },
    ],
    "dataSize": 144,
    "index": 41462,
    "retOffset": 140,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["GetStepConfiguration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43293,
            "cType": FStepConfiguration,
            "castTo": POINTER(FStepConfiguration),
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 43292,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["GotoStep"] = {
    "fields": [
        {
            "name": "Step",
            "index": 43291,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43290,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["GotoNextStep"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43289,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["GotoFirstStep"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43288,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["eventPerformStep"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43287,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 43286,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["PauseLoop"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43285,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["Init"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43284,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["ContinueLoop"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43283,
}
BL2SDK.g_classFuncs["UGearboxProcess"]["StopLoop"] = {
    "fields": [],
    "dataSize": 0,
    "index": 43282,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"][
    "eventTriggerSparkInitializedDelegates"
] = {
    "fields": [
        {
            "name": "InitializeResult",
            "index": 44727,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInitializedResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 44725,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["ClearSparkInitializedDelegate"] = {
    "fields": [
        {
            "name": "SparkInitializedDelegate",
            "index": 44724,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 44723,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["AddSparkInitializedDelegate"] = {
    "fields": [
        {
            "name": "SparkInitializedDelegate",
            "index": 44722,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44721,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["GetStepName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44720,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44719,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["GetStepConfiguration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44718,
            "cType": FStepConfiguration,
            "castTo": POINTER(FStepConfiguration),
            "offset": 0,
        }
    ],
    "dataSize": 20,
    "index": 44717,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["IsInitialized"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44716,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44715,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["IsDisabled"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44714,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44713,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["IsInitializing"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44711,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44710,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["HandleVerificationReceived"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 44709,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 152,
    "index": 44707,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["eventVerifyAuthentication"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44706,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 0,
        }
    ],
    "dataSize": 112,
    "index": 44699,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"][
    "AuthenticateTicketStringWithDelegate"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44696,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 24,
        },
        {
            "name": "ticket",
            "index": 44698,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "SparkRequestCompleteDelegate",
            "index": 44697,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 12,
        },
    ],
    "dataSize": 128,
    "index": 44691,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["HandleAuthenticationReceived"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 44690,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 152,
    "index": 44688,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["eventAuthenticateAccount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44687,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 0,
        }
    ],
    "dataSize": 32,
    "index": 44684,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["GetConfigQuery"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44683,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44682,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["CompleteInitialization"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44681,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44680,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["HttpInit"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44679,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44678,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["CheckForTMS"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44677,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44676,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["PerformStep"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44675,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESparkStepResult",
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 44674,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["StartProcess"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44673,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44672,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInitializationProcess"]["InitWithController"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 44671,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bNewPrimary",
            "index": 44670,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "SparkInitializedDelegate",
            "index": 44669,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 8,
        },
    ],
    "dataSize": 28,
    "index": 44667,
}
BL2SDK.g_classFuncs["ULeviathanService"]["eventGetLeviathanServiceConfiguration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43764,
            "castTo": POINTER(POINTER(USparkServiceConfiguration)),
            "offset": 4,
        },
        {
            "name": "ControllerNumber",
            "index": 43765,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 43762,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["ULeviathanService"]["OnSparkInitialized"] = {
    "fields": [
        {
            "name": "InitializedResult",
            "index": 43767,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInitializedResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 43766,
}
BL2SDK.g_classFuncs["ULeviathanService"]["LoadServiceConfigurationForPlayer"] = {
    "fields": [
        {
            "name": "SplitscreenIndex",
            "index": 43761,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43760,
}
BL2SDK.g_classFuncs["ULeviathanService"]["GetLeviathanService"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43759,
            "castTo": POINTER(POINTER(ULeviathanService)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43758,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetNewsService"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41096,
            "castTo": POINTER(POINTER(USparkNews)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41093,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetTitleStorageServiceConfiguration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41099,
            "castTo": POINTER(POINTER(USparkServiceConfiguration)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41095,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetTitleStorageUrl"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41101,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41098,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["ClearGearboxAccountData"] = {
    "fields": [
        {
            "name": "IncludePrimaryPlayer",
            "index": 41103,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41100,
}
BL2SDK.g_classFuncs["USparkInterface"]["SignOutGearboxAccount"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 41105,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41102,
}
BL2SDK.g_classFuncs["USparkInterface"]["SignInGearboxAccount"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 41107,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41104,
}
BL2SDK.g_classFuncs["USparkInterface"]["eventGetGearboxAccountData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41110,
            "castTo": POINTER(POINTER(UGearboxAccountData)),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 41109,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41106,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterface"]["eventIsGearboxAccountAuthenticated"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41113,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 41112,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41108,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterface"]["IsGearboxAccountSignedIn"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41116,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 41115,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 41111,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterface"]["ConvertUtcTimeToLocalTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41119,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "UtcTime",
            "index": 41118,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 41114,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USparkInterface"]["ShouldUpdateEmergencyMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41121,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41117,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetEmergencyMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41123,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41120,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["SetEmergencyMessage"] = {
    "fields": [
        {
            "name": "Message",
            "index": 41125,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41122,
}
BL2SDK.g_classFuncs["USparkInterface"][
    "eventGetPlatformLoginNameFromSplitscreenIndex"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41128,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "SplitscreenIndex",
            "index": 41127,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41124,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetPlatformLoginNameFromController"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41131,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 41130,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 41126,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterface"]["IncreaseInteractionTries"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41129,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetInteractionTries"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41134,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41132,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetInteractionGraceTries"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41136,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41133,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetInteractionPunishmentMinWaitSeconds"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41138,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41135,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetInteractionMinWaitSeconds"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41140,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41137,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["IsTmsComplete"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41142,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41139,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["SetTmsComplete"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41141,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetSparkInitialization"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41145,
            "castTo": POINTER(POINTER(USparkInitializationProcess)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41143,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["eventRestartSparkInitialization"] = {
    "fields": [
        {
            "name": "bPrimary",
            "index": 41147,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41144,
}
BL2SDK.g_classFuncs["USparkInterface"]["RestartSparkInitializationFromScript"] = {
    "fields": [
        {
            "name": "bPrimary",
            "index": 41149,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SparkInitializedDelegate",
            "index": 41150,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 4,
        },
        {
            "name": "SparkEmergencyMessageDelegate",
            "index": 41151,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 41146,
}
BL2SDK.g_classFuncs["USparkInterface"]["StartSparkInitialization"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 41153,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SparkInitializedDelegate",
            "index": 41154,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 4,
        },
        {
            "name": "SparkEmergencyMessageDelegate",
            "index": 41155,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
        {
            "name": "EntitlementsUpdatedDelegate",
            "index": 41156,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 28,
        },
    ],
    "dataSize": 40,
    "index": 41148,
}
BL2SDK.g_classFuncs["USparkInterface"]["StartSecondaryInitialization"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 41158,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SparkInitializedDelegate",
            "index": 41159,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 4,
        },
        {
            "name": "EntitlementsUpdatedDelegate",
            "index": 41160,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 41152,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetGameName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41162,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41157,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetHardwareName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41164,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41161,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetPlatformName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41166,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41163,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["GetPlatformTicket"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41170,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 8,
        },
        {
            "name": "ControllerId",
            "index": 41168,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bPrimary",
            "index": 41169,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 41165,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USparkInterface"]["ClearSparkConfigReceivedDelegate"] = {
    "fields": [
        {
            "name": "SparkConfigReceivedDelegate",
            "index": 41172,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41167,
}
BL2SDK.g_classFuncs["USparkInterface"]["AddSparkConfigReceivedDelegate"] = {
    "fields": [
        {
            "name": "SparkConfigReceivedDelegate",
            "index": 41174,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41171,
}
BL2SDK.g_classFuncs["USparkInterface"]["ResetInitializationStatus"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41173,
}
BL2SDK.g_classFuncs["USparkInterface"]["eventIsSparkEnabled"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41177,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41175,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterface"]["IssueSparkStringRequest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41180,
            "castTo": POINTER(c_int),
            "offset": 92,
        },
        {
            "name": "HttpRequestParameters",
            "isRet": True,
            "index": 41179,
            "isOutParm": True,
            "cType": FHttpParameters,
            "castTo": POINTER(FHttpParameters),
            "offset": 0,
        },
        {
            "name": "URL",
            "index": 41181,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 56,
        },
        {
            "name": "RequestData",
            "index": 41194,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 68,
        },
        {
            "name": "SparkRequestCompleteDelegate",
            "index": 41195,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 80,
        },
    ],
    "dataSize": 96,
    "index": 41176,
    "retOffset": 92,
}
BL2SDK.g_classFuncs["USparkInterface"]["IssueSparkRequest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41197,
            "castTo": POINTER(c_int),
            "offset": 92,
        },
        {
            "name": "HttpRequestParameters",
            "isRet": True,
            "index": 41196,
            "isOutParm": True,
            "cType": FHttpParameters,
            "castTo": POINTER(FHttpParameters),
            "offset": 0,
        },
        {
            "name": "URL",
            "index": 41198,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 56,
        },
        {
            "name": "RequestData",
            "isRet": True,
            "index": 41201,
            "isOutParm": True,
            "cType": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "TArray": True,
            "offset": 68,
        },
        {
            "name": "SparkRequestCompleteDelegate",
            "index": 41200,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 80,
        },
    ],
    "dataSize": 96,
    "index": 41178,
    "retOffset": 92,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetNewsService"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44904,
            "castTo": POINTER(POINTER(USparkNews)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44902,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetTitleStorageServiceConfiguration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44900,
            "castTo": POINTER(POINTER(USparkServiceConfiguration)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44899,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetTitleStorageUrl"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44898,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44897,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["OnSparkInitialized"] = {
    "fields": [
        {
            "name": "InitializedResult",
            "index": 44893,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInitializedResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44892,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["IncreaseInteractionTries"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44891,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetInteractionTries"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44889,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44888,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetInteractionGraceTries"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44886,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44885,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetInteractionPunishmentMinWaitSeconds"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44883,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44882,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetInteractionMinWaitSeconds"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44880,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44879,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["ConvertUtcTimeToLocalTime"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44877,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "UtcTime",
            "index": 44878,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 44876,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["ShouldUpdateEmergencyMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44875,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44874,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetEmergencyMessage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44873,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44872,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["SetEmergencyMessage"] = {
    "fields": [
        {
            "name": "NewMessage",
            "index": 44869,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44868,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["IsTmsComplete"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44867,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44866,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["SetTmsComplete"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44864,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["RestartSparkInitializationFromScript"] = {
    "fields": [
        {
            "name": "bPrimary",
            "index": 44863,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SparkInitializedDelegate",
            "index": 44862,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 4,
        },
        {
            "name": "SparkEmergencyMessageDelegate",
            "index": 44861,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 44860,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["eventRestartSparkInitialization"] = {
    "fields": [
        {
            "name": "bPrimary",
            "index": 44859,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44858,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["StartSparkInitialization"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 44855,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SparkInitializedDelegate",
            "index": 44854,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 4,
        },
        {
            "name": "SparkEmergencyMessageDelegate",
            "index": 44853,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
        {
            "name": "EntitlementsUpdatedDelegate",
            "index": 44852,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 28,
        },
    ],
    "dataSize": 64,
    "index": 44849,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["ResetInitializationStatus"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44848,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["ResetSecondaryInitializationStatus"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44847,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["StartSecondaryInitialization"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 44845,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SparkInitializedDelegate",
            "index": 44844,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 4,
        },
        {
            "name": "EntitlementsUpdatedDelegate",
            "index": 44843,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 56,
    "index": 44840,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetSparkInitialization"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44838,
            "castTo": POINTER(POINTER(USparkInitializationProcess)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44837,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["SignInGearboxAccount"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 44836,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44835,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["eventGetGearboxAccountData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44833,
            "castTo": POINTER(POINTER(UGearboxAccountData)),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 44834,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 44832,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["SignOutGearboxAccount"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 44831,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44830,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["ValidPlayerIndex"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44828,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "PlayerIndex",
            "index": 44829,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44827,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetPlayerIndex"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44825,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 44826,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 44824,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["ClearGearboxAccountData"] = {
    "fields": [
        {
            "name": "IncludePrimaryPlayer",
            "index": 44822,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44821,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["IsGearboxAccountSignedIn"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44819,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 44820,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 44818,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["eventIsGearboxAccountAuthenticated"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44816,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 44817,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 44815,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetGameName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44814,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44813,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetHardwareName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44812,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44811,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetPlatformName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44810,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44809,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetPlatformTicket"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44806,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 8,
        },
        {
            "name": "ControllerId",
            "index": 44808,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bPrimary",
            "index": 44807,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 44805,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["ClearSparkConfigReceivedDelegate"] = {
    "fields": [
        {
            "name": "SparkConfigReceivedDelegate",
            "index": 44804,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44803,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["AddSparkConfigReceivedDelegate"] = {
    "fields": [
        {
            "name": "SparkConfigReceivedDelegate",
            "index": 44802,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44801,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["GetPlatformLoginNameFromController"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44799,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 44800,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 96,
    "index": 44792,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"][
    "eventGetPlatformLoginNameFromSplitscreenIndex"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44790,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "SplitscreenIndex",
            "index": 44791,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 44789,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["eventGetPlatformLoginName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44788,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44787,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["eventGetLoginStatus"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44786,
            "castTo": POINTER(c_ubyte),
            "enumName": "ELoginStatus",
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 44785,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["eventIsShiftEnabled"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44784,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44783,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["eventIsSparkEnabled"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44782,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44781,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["WithShift"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44780,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44779,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["WithSpark"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44778,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 44777,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["IssueSparkStringRequest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44772,
            "castTo": POINTER(c_int),
            "offset": 92,
        },
        {
            "name": "HttpRequestParameters",
            "isRet": True,
            "index": 44776,
            "isOutParm": True,
            "cType": FHttpParameters,
            "castTo": POINTER(FHttpParameters),
            "offset": 0,
        },
        {
            "name": "URL",
            "index": 44775,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 56,
        },
        {
            "name": "RequestData",
            "index": 44774,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 68,
        },
        {
            "name": "SparkRequestCompleteDelegate",
            "index": 44773,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 80,
        },
    ],
    "dataSize": 96,
    "index": 44771,
    "retOffset": 92,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["IssueSparkRequest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44767,
            "castTo": POINTER(c_int),
            "offset": 92,
        },
        {
            "name": "HttpParameters",
            "isRet": True,
            "index": 44770,
            "isOutParm": True,
            "cType": FHttpParameters,
            "castTo": POINTER(FHttpParameters),
            "offset": 0,
        },
        {
            "name": "URL",
            "index": 44769,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 56,
        },
        {
            "name": "RequestData",
            "isRet": True,
            "index": 44766,
            "isOutParm": True,
            "cType": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "TArray": True,
            "offset": 68,
        },
        {
            "name": "SparkRequestCompleteDelegate",
            "index": 44768,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 80,
        },
    ],
    "dataSize": 96,
    "index": 44764,
    "retOffset": 92,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["AlternativeXboxlivePlatformId"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44762,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "NetId",
            "isRet": True,
            "index": 44763,
            "isOutParm": True,
            "cType": FUniqueNetId,
            "castTo": POINTER(FUniqueNetId),
            "offset": 0,
        },
    ],
    "dataSize": 36,
    "index": 44761,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["OnSparkEmergencyMessageUpdated"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44760,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["OnSparkConfigReceived"] = {
    "fields": [
        {
            "name": "ConfigArray",
            "index": 44759,
            "type": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "flags": 8,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 44757,
}
BL2SDK.g_classFuncs["USparkInterfaceImpl"]["OnSparkRequestComplete"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 44756,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 24,
    "index": 44751,
}
BL2SDK.g_classFuncs["USparkServiceConfiguration"]["GetFloatParameter"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44938,
            "castTo": POINTER(c_float),
            "offset": 24,
        },
        {
            "name": "KeyName",
            "index": 44942,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "DefaultValue",
            "index": 44941,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "MinimumValue",
            "index": 44940,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "MaximumValue",
            "index": 44939,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 44937,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["USparkServiceConfiguration"]["GetIntParameter"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44895,
            "castTo": POINTER(c_int),
            "offset": 24,
        },
        {
            "name": "KeyName",
            "index": 44936,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "DefaultValue",
            "index": 44935,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "MinimumValue",
            "index": 44934,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "MaximumValue",
            "index": 44933,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 44894,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["USparkServiceConfiguration"]["GetStringParameter"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44930,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "KeyName",
            "index": 44932,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Default",
            "index": 44931,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 44929,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["USparkServiceConfiguration"]["GetParameter"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41232,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "KeyNameToSearchFor",
            "index": 44928,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 41231,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USparkServiceConfiguration"]["LoadService"] = {
    "fields": [
        {
            "name": "Service",
            "isRet": True,
            "index": 44927,
            "isOutParm": True,
            "cType": FServiceResult,
            "castTo": POINTER(FServiceResult),
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 44926,
}
BL2SDK.g_classFuncs["USparkServiceConfiguration"]["LoadOverrides"] = {
    "fields": [],
    "dataSize": 0,
    "index": 44924,
}
BL2SDK.g_classFuncs["USparkTypes"]["UTF8toString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 41059,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "inputBytes",
            "index": 41060,
            "type": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "flags": 8,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 41056,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USparkTypes"]["OnEntitlementsUpdated"] = {
    "fields": [
        {
            "name": "GbxAccount",
            "index": 41062,
            "className": "UGearboxAccountData",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 41057,
}
BL2SDK.g_classFuncs["USparkTypes"]["OnSparkEmergencyMessageUpdated"] = {
    "fields": [],
    "dataSize": 0,
    "index": 41061,
}
BL2SDK.g_classFuncs["USparkTypes"]["OnSparkInitialized"] = {
    "fields": [
        {
            "name": "InitializedResult",
            "index": 41065,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInitializedResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 41063,
}
BL2SDK.g_classFuncs["USparkTypes"]["OnSparkConfigReceived"] = {
    "fields": [
        {
            "name": "ConfigArray",
            "index": 41069,
            "type": TArray_unsigned_char,
            "castTo": POINTER(TArray_unsigned_char),
            "flags": 8,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 41064,
}
BL2SDK.g_classFuncs["USparkTypes"]["OnSparkRequestComplete"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 41076,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 24,
    "index": 41071,
}
BL2SDK.g_classFuncs["UAction_FaceThreat"]["eventStopSequence"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38903,
}
BL2SDK.g_classFuncs["UActorAttributeContextResolver"]["GetAttributeContext"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39164,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 8,
        },
        {
            "name": "Attribute",
            "index": 39166,
            "className": "UAttributeDefinitionBase",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AttributeContextSource",
            "index": 39165,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 39163,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UAIComponentAttributeContextResolver"]["GetAttributeContext"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 39281,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 8,
        },
        {
            "name": "Attribute",
            "index": 39283,
            "className": "UAttributeDefinitionBase",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AttributeContextSource",
            "index": 39282,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 39279,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UBehavior_AIHold"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39707,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39706,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39705,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39704,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39703,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39702,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 64,
    "index": 39700,
}
BL2SDK.g_classFuncs["UBehavior_AIPriority"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39720,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39719,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39718,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39717,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39716,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39715,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 76,
    "index": 39712,
}
BL2SDK.g_classFuncs["UBehavior_AITargeting"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39733,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39732,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39731,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39730,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39729,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39728,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 68,
    "index": 39725,
}
BL2SDK.g_classFuncs["UBehavior_ChangeAnyBehaviorSequenceState"][
    "ApplyBehaviorToContext"
] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39757,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39756,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39755,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39754,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39753,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39752,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 68,
    "index": 39749,
}
BL2SDK.g_classFuncs["UBehavior_ChangeLocalBehaviorSequenceState"][
    "ApplyBehaviorToContext"
] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39773,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39772,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39771,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39770,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39769,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39768,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 72,
    "index": 39765,
}
BL2SDK.g_classFuncs["UBehavior_CompareBool"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39839,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39838,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39837,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39836,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39835,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39834,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 56,
    "index": 39833,
}
BL2SDK.g_classFuncs["UBehavior_CompareValues"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39853,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39852,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39851,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39850,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39849,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39848,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 68,
    "index": 39847,
}
BL2SDK.g_classFuncs["UBehavior_CustomEvent"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39866,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39865,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39864,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39863,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39862,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39861,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 76,
    "index": 39857,
}
BL2SDK.g_classFuncs["UBehavior_Delay"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39877,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39876,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39875,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39874,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39873,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39872,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 56,
    "index": 39871,
}
BL2SDK.g_classFuncs["UBehavior_Gate"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39888,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39887,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39886,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39885,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39884,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39883,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 60,
    "index": 39882,
}
BL2SDK.g_classFuncs["UBehavior_GetFloatParam"]["PublishBehaviorOutput"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39902,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 39901,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 36,
    "index": 39900,
}
BL2SDK.g_classFuncs["UBehavior_GetFloatParam"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39899,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39898,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39897,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39896,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39895,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39894,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 68,
    "index": 39892,
}
BL2SDK.g_classFuncs["UBehavior_GetObjectParam"]["PublishBehaviorOutput"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39916,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 39915,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 28,
        },
    ],
    "dataSize": 36,
    "index": 39914,
}
BL2SDK.g_classFuncs["UBehavior_GetObjectParam"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39913,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39912,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39911,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39910,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39909,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39908,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 68,
    "index": 39906,
}
BL2SDK.g_classFuncs["UBehavior_GetVectorParam"]["PublishBehaviorOutput"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39936,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "R",
            "index": 39935,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
        {
            "name": "G",
            "index": 39934,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 32,
        },
        {
            "name": "B",
            "index": 39933,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "A",
            "index": 39932,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 48,
    "index": 39931,
}
BL2SDK.g_classFuncs["UBehavior_GetVectorParam"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39930,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39929,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39928,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39927,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39926,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39925,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 96,
    "index": 39921,
}
BL2SDK.g_classFuncs["UBehavior_InterpolateFloatOverTime"]["PublishBehaviorOutput"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39952,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "Result",
            "index": 39951,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39950,
}
BL2SDK.g_classFuncs["UBehavior_InterpolateFloatOverTime"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39949,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39948,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39947,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39946,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39945,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39944,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 64,
    "index": 39943,
}
BL2SDK.g_classFuncs["UBehavior_Metronome"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39982,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39981,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39980,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39979,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39978,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39977,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 64,
    "index": 39976,
}
BL2SDK.g_classFuncs["UBehavior_ModifyTimer"]["PublishBehaviorOutput"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40001,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        },
        {
            "name": "TimeRemaining",
            "index": 40000,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 39999,
}
BL2SDK.g_classFuncs["UBehavior_ModifyTimer"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 39998,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 39997,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 39996,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 39995,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 39994,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 39993,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 84,
    "index": 39989,
}
BL2SDK.g_classFuncs["UBehavior_SetFloatParam"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40119,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40118,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40117,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40116,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40115,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40114,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 64,
    "index": 40112,
}
BL2SDK.g_classFuncs["UBehavior_SetObjectParam"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40130,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40129,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40128,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40127,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40126,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40125,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 64,
    "index": 40123,
}
BL2SDK.g_classFuncs["UBehavior_SetVectorParam"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40151,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40150,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40149,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40148,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40147,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40146,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 92,
    "index": 40142,
}
BL2SDK.g_classFuncs["UBehavior_SpecialMove"]["PlaySpecialMove"] = {
    "fields": [
        {
            "name": "SMC",
            "index": 40178,
            "className": "USpecialMoveComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40177,
}
BL2SDK.g_classFuncs["UBehavior_SpecialMove"]["TriggerOutput"] = {
    "fields": [
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40176,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 40175,
}
BL2SDK.g_classFuncs["UBehavior_SpecialMove"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40168,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40167,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40166,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40165,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40164,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40163,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 72,
    "index": 40160,
}
BL2SDK.g_classFuncs["UBehavior_SpecialMoveStop"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40197,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40196,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40195,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40194,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40193,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40192,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 68,
    "index": 40189,
}
BL2SDK.g_classFuncs["UBehavior_StartAkAmbientSound"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40213,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40212,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40211,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40210,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40209,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40208,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 84,
    "index": 40204,
}
BL2SDK.g_classFuncs["UBehavior_StopAkAmbientSound"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40227,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40226,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40225,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40224,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40223,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40222,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 84,
    "index": 40218,
}
BL2SDK.g_classFuncs["UBehavior_StopDialog"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40239,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40238,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40237,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40236,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40235,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40234,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 68,
    "index": 40231,
}
BL2SDK.g_classFuncs["UBehavior_ToggleDialog"]["ApplyBehaviorToContext"] = {
    "fields": [
        {
            "name": "ContextObject",
            "index": 40253,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "KernelInfo",
            "isRet": True,
            "index": 40252,
            "isOutParm": True,
            "cType": FBehaviorKernelInfo,
            "castTo": POINTER(FBehaviorKernelInfo),
            "offset": 4,
        },
        {
            "name": "SelfObject",
            "index": 40251,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 32,
        },
        {
            "name": "MyInstigatorObject",
            "index": 40250,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "OtherEventParticipantObject",
            "index": 40249,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 40,
        },
        {
            "name": "EventData",
            "index": 40248,
            "type": FBehaviorParameters,
            "castTo": POINTER(FBehaviorParameters),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 80,
    "index": 40246,
}
BL2SDK.g_classFuncs["UCameraModifierCrossfade"]["DoCrossfade"] = {
    "fields": [],
    "dataSize": 0,
    "index": 40626,
}
BL2SDK.g_classFuncs["UCameraModifierCrossfade"]["UpdateAllLerps"] = {
    "fields": [
        {
            "name": "DeltaTime",
            "index": 40625,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "OutPOV",
            "isRet": True,
            "index": 40624,
            "isOutParm": True,
            "cType": FTPOV,
            "castTo": POINTER(FTPOV),
            "offset": 4,
        },
    ],
    "dataSize": 36,
    "index": 40623,
}
BL2SDK.g_classFuncs["UCameraModifierCrossfade"]["ModifyCamera"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40619,
            "castTo": POINTER(c_bool),
            "offset": 36,
        },
        {
            "name": "Camera",
            "index": 40622,
            "className": "ACamera",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "DeltaTime",
            "index": 40621,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "OutPOV",
            "isRet": True,
            "index": 40620,
            "isOutParm": True,
            "cType": FTPOV,
            "castTo": POINTER(FTPOV),
            "offset": 8,
        },
    ],
    "dataSize": 72,
    "index": 40617,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UCameraModifierCrossfade"]["ProcessCameraBlend"] = {
    "fields": [
        {
            "name": "Camera",
            "index": 40616,
            "className": "ACamera",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AdjustedDeltaTime",
            "index": 40615,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "OutPOV",
            "isRet": True,
            "index": 40614,
            "isOutParm": True,
            "cType": FTPOV,
            "castTo": POINTER(FTPOV),
            "offset": 8,
        },
    ],
    "dataSize": 76,
    "index": 40612,
}
BL2SDK.g_classFuncs["UCameraModifierCrossfade"]["InitializeSubModifiers"] = {
    "fields": [],
    "dataSize": 0,
    "index": 40611,
}
BL2SDK.g_classFuncs["UCameraModifierCrossfade"]["eventEnableModifier"] = {
    "fields": [],
    "dataSize": 0,
    "index": 40610,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["ExecuteFadeIfNeeded"] = {
    "fields": [
        {
            "name": "PC",
            "isRet": True,
            "index": 40704,
            "isOutParm": True,
            "castTo": POINTER(POINTER(AGearboxPlayerController)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40703,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["GetDesiredLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40700,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 32,
        },
        {
            "name": "OutPOV",
            "isRet": True,
            "index": 40702,
            "isOutParm": True,
            "cType": FTPOV,
            "castTo": POINTER(FTPOV),
            "offset": 0,
        },
        {
            "name": "PC",
            "isRet": True,
            "index": 40701,
            "isOutParm": True,
            "castTo": POINTER(POINTER(AGearboxPlayerController)),
            "offset": 28,
        },
    ],
    "dataSize": 92,
    "index": 40695,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["ModifyCamera"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40691,
            "castTo": POINTER(c_bool),
            "offset": 36,
        },
        {
            "name": "Camera",
            "index": 40694,
            "className": "ACamera",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "DeltaTime",
            "index": 40693,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "OutPOV",
            "isRet": True,
            "index": 40692,
            "isOutParm": True,
            "cType": FTPOV,
            "castTo": POINTER(FTPOV),
            "offset": 8,
        },
    ],
    "dataSize": 80,
    "index": 40687,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["GetBoneLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 40683,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "Target",
            "index": 40686,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "BoneName",
            "index": 40685,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "BoneLoc",
            "isRet": True,
            "index": 40684,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 12,
        },
    ],
    "dataSize": 32,
    "index": 40681,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetLookAtBone"] = {
    "fields": [
        {
            "name": "NewBone",
            "index": 40680,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 40679,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetLookAtTarget"] = {
    "fields": [
        {
            "name": "newLookAtTarget",
            "index": 40678,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40677,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetTargetLocation"] = {
    "fields": [
        {
            "name": "NewTargetLocation",
            "index": 40676,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "newTransitionTimeIn",
            "index": 40675,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "newTransitionTimeOut",
            "index": 40674,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 40673,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetDuration"] = {
    "fields": [
        {
            "name": "NewDuration",
            "index": 40672,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40671,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetTransitionTimes"] = {
    "fields": [
        {
            "name": "NewInTime",
            "index": 40670,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewOutTime",
            "index": 40669,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 40668,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetZoomFOV"] = {
    "fields": [
        {
            "name": "newZoom",
            "index": 40667,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40666,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetThirdPersonDistances"] = {
    "fields": [
        {
            "name": "NewX",
            "index": 40665,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewY",
            "index": 40664,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "NewZ",
            "index": 40663,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 40662,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["SetLookAtMode"] = {
    "fields": [
        {
            "name": "NewMode",
            "index": 40661,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ECameraLookAtMode",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 40660,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["DisableModifier"] = {
    "fields": [
        {
            "name": "bImmediate",
            "index": 40659,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 40658,
}
BL2SDK.g_classFuncs["UCameraModifierLookAt"]["EnableModifier"] = {
    "fields": [],
    "dataSize": 0,
    "index": 40657,
}
BL2SDK.g_classFuncs["USparkNews"]["Internal_GetService"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45126,
            "castTo": POINTER(POINTER(USparkServiceConfiguration)),
            "offset": 12,
        },
        {
            "name": "ControllerId",
            "index": 45128,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Spark",
            "index": 45127,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 24,
    "index": 45107,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["USparkNews"]["CallAndClearRetrievedDelegate"] = {
    "fields": [
        {
            "name": "RetrievealResult",
            "index": 45125,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ENewsRetrievalResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45108,
}
BL2SDK.g_classFuncs["USparkNews"]["ParseArticles"] = {
    "fields": [
        {
            "name": "NewsArticlesJSONObject",
            "index": 45123,
            "className": "UJsonObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 48,
    "index": 45119,
}
BL2SDK.g_classFuncs["USparkNews"]["HandleNewsRetrievalResponse"] = {
    "fields": [
        {
            "name": "Result",
            "isRet": True,
            "index": 45118,
            "isOutParm": True,
            "cType": FSparkResult,
            "castTo": POINTER(FSparkResult),
            "offset": 0,
        }
    ],
    "dataSize": 40,
    "index": 45116,
}
BL2SDK.g_classFuncs["USparkNews"]["GetArticle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45112,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Idx",
            "index": 45115,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Header",
            "isRet": True,
            "index": 45114,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "Body",
            "isRet": True,
            "index": 45113,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 45111,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["USparkNews"]["GetArticleCount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45110,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45109,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["USparkNews"]["RetrieveNews"] = {
    "fields": [
        {
            "name": "ControllerId",
            "index": 45106,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "RetrievalDelegate",
            "index": 45105,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 100,
    "index": 45101,
}
BL2SDK.g_classFuncs["USparkNews"]["OnNewsRetrieved"] = {
    "fields": [
        {
            "name": "RetrievealResult",
            "index": 45100,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ENewsRetrievalResult",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "newsObj",
            "index": 45099,
            "className": "USparkNews",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 45098,
}
BL2SDK.g_classFuncs["UGFxMovieDrawStyleInstanceData"]["eventRequiresClientInstance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 43604,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 43603,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPopulationMasterAttributeContextResolver"][
    "GetAttributeContext"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 44209,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 8,
        },
        {
            "name": "Attribute",
            "index": 44211,
            "className": "UAttributeDefinitionBase",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AttributeContextSource",
            "index": 44210,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 44208,
    "retOffset": 8,
}
