from ctypes import *
import BL2SDK


class UActorFactoryAkAmbientSound_Data(Structure):
    _fields_ = [("AmbientEvent", POINTER(UAkEvent))]


class UActorFactoryAkAmbientSound(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UActorFactory", UActorFactory_Data),
        ("UActorFactoryAkAmbientSound", UActorFactoryAkAmbientSound_Data),
    ]


class AAkAmbientSound_Data(Structure):
    _fields_ = [
        ("PlayEvent", POINTER(UAkEvent)),
        ("Group", POINTER(AWwiseSoundGroup)),
        ("bIsRegistered", c_bool, 1),
        ("", c_ulong, 0),
    ]


class AAkAmbientSound(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AKeypoint", AKeypoint_Data),
        ("AAkAmbientSound", AAkAmbientSound_Data),
    ]


class UAkAmbientSoundRenderingComponent_Data(Structure):
    _fields_ = [("bShowOnlyIfSelected", c_bool, 1), ("", c_ulong, 0)]


class UAkAmbientSoundRenderingComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UAkAmbientSoundRenderingComponent", UAkAmbientSoundRenderingComponent_Data),
    ]


class UIAkEnvironmentalEffectProvider_Data(Structure):
    _fields_ = []


class UIAkEnvironmentalEffectProvider(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIAkEnvironmentalEffectProvider", UIAkEnvironmentalEffectProvider_Data),
    ]


class UInterpTrackAkEvent_Data(Structure):
    _fields_ = [("AkEvents", TArray_FAkEventTrackKey)]


class UInterpTrackAkEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrack", UInterpTrack_Data),
        ("UInterpTrackAkEvent", UInterpTrackAkEvent_Data),
    ]


class UInterpTrackAkRTPC_Data(Structure):
    _fields_ = [("AkRtpc", POINTER(UAkRtpc))]


class UInterpTrackAkRTPC(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrack", UInterpTrack_Data),
        ("UInterpTrackFloatBase", UInterpTrackFloatBase_Data),
        ("UInterpTrackAkRTPC", UInterpTrackAkRTPC_Data),
    ]


class UInterpTrackInstAkEvent_Data(Structure):
    _fields_ = [("LastUpdatePosition", c_float)]


class UInterpTrackInstAkEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrackInst", UInterpTrackInst_Data),
        ("UInterpTrackInstAkEvent", UInterpTrackInstAkEvent_Data),
    ]


class UInterpTrackInstAkRTPC_Data(Structure):
    _fields_ = []


class UInterpTrackInstAkRTPC(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrackInst", UInterpTrackInst_Data),
        ("UInterpTrackInstAkRTPC", UInterpTrackInstAkRTPC_Data),
    ]


class UISpecialOcclusionAccumulator_Data(Structure):
    _fields_ = []


class UISpecialOcclusionAccumulator(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UISpecialOcclusionAccumulator", UISpecialOcclusionAccumulator_Data),
    ]


class USeqAct_AkClearBanks_Data(Structure):
    _fields_ = []


class USeqAct_AkClearBanks(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkClearBanks", USeqAct_AkClearBanks_Data),
    ]


class USeqAct_AkLoadBank_Data(Structure):
    _fields_ = []


class USeqAct_AkLoadBank(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("USeqAct_AkLoadBank", USeqAct_AkLoadBank_Data),
    ]


class USeqAct_AkPostEvent_Data(Structure):
    _fields_ = [
        ("ActivePlayingIds", TArray_FAkPlayingInfo),
        ("Event", POINTER(UAkEvent)),
        ("bPlayOneInstanceFromAllLocations", c_bool, 1),
        ("bTreatAllLocationsAsOneSource", c_bool, 1),
        ("", c_ulong, 0),
    ]


class USeqAct_AkPostEvent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("USeqAct_AkPostEvent", USeqAct_AkPostEvent_Data),
    ]


class USeqAct_AkPostTrigger_Data(Structure):
    _fields_ = [("AkTrigger", POINTER(UAkTrigger))]


class USeqAct_AkPostTrigger(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkPostTrigger", USeqAct_AkPostTrigger_Data),
    ]


class USeqAct_AkSetRTPCValue_Data(Structure):
    _fields_ = [
        ("AkRtpc", POINTER(UAkRtpc)),
        ("Value", c_float),
        ("Running", c_bool, 1),
        ("", c_ulong, 0),
    ]


class USeqAct_AkSetRTPCValue(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("USeqAct_AkSetRTPCValue", USeqAct_AkSetRTPCValue_Data),
    ]


class USeqAct_AkSetState_Data(Structure):
    _fields_ = [("State", POINTER(UAkState))]


class USeqAct_AkSetState(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkSetState", USeqAct_AkSetState_Data),
    ]


class USeqAct_AkSetSwitch_Data(Structure):
    _fields_ = [("AkSwitch", POINTER(UAkSwitch))]


class USeqAct_AkSetSwitch(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkSetSwitch", USeqAct_AkSetSwitch_Data),
    ]


class USeqAct_AkStopAll_Data(Structure):
    _fields_ = []


class USeqAct_AkStopAll(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkStopAll", USeqAct_AkStopAll_Data),
    ]


class AWwiseSoundGroup_Data(Structure):
    _fields_ = [
        ("VfTable_IISpecialOcclusionProvider", FPointer),
        ("VfTable_IISpecialOcclusionAccumulator", FPointer),
        ("Members", TArray_AActorPtr),
        ("ActiveOccluders", FMap_Mirror),
    ]


class AWwiseSoundGroup(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AKeypoint", AKeypoint_Data),
        ("AWwiseSoundGroup", AWwiseSoundGroup_Data),
    ]


class UWwiseSoundGroupRenderingComponent_Data(Structure):
    _fields_ = []


class UWwiseSoundGroupRenderingComponent(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UWwiseSoundGroupRenderingComponent", UWwiseSoundGroupRenderingComponent_Data),
    ]


class AWwiseSoundVolume_Data(Structure):
    _fields_ = [
        ("VfTable_IIAkEnvironmentalEffectProvider", FPointer),
        ("VfTable_IISpecialOcclusionProvider", FPointer),
        ("VfTable_IISpecialOcclusionAccumulator", FPointer),
        ("akPlayEvent", POINTER(UAkEvent)),
        ("bAutoPlay", c_bool, 1),
        ("bAutomaticallySetPlayAndStopDistances", c_bool, 1),
        ("bPlaySoundsFromAllSubBrushes", c_bool, 1),
        ("bEffectBankLoaded", c_bool, 1),
        ("", c_ulong, 0),
        ("AutoPlayDistance", c_float),
        ("AutoStopDistance", c_float),
        ("ParentVolume", POINTER(AWwiseSoundVolume)),
        ("SubBrushes", TArray_AWwiseSoundVolumePtr),
        ("EnvironmentFadeDistance", c_float),
        ("Group", POINTER(AWwiseSoundGroup)),
        ("AkComponent", POINTER(UAkComponent)),
        ("Midpoint", FVector),
        ("FarthestVertexDistance", c_float),
        ("LastLocationUpdateTime", c_float),
        ("DistancePerAdditionalSecondBetweenUpdates", c_float),
        ("LastEnvironmentStrength", c_float),
        ("LastEnvironmentSuppressionModifier", c_float),
        ("EnvironmentSuppressors", FMap_Mirror),
        ("EnvironmentalEffects", TArray_FEnvironmentalEffectSetting),
        ("SuppressedEnvironments", TArray_AWwiseSoundVolumePtr),
        ("RTPCs", TArray_FRTPCSetting),
        ("OccludedVolumes", TArray_FOccludedVolume),
        ("LastOcclusionLevel", c_float),
        ("ActiveOccluders", FMap_Mirror),
        ("FacePlanes", TArray_FPlane),
        ("SoundSourceLocations", TArray_FVector),
        ("CachedListenerDistances", TArray_float),
        ("EffectSoundBank", POINTER(UAkBank)),
        ("EffectSoundBankLoadDistance", c_float),
    ]


class AWwiseSoundVolume(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("ABrush", ABrush_Data),
        ("AVolume", AVolume_Data),
        ("AWwiseSoundVolume", AWwiseSoundVolume_Data),
    ]


BL2SDK.g_loadedClasses += [("UActorFactoryAkAmbientSound", 3525, "UActorFactory")]
BL2SDK.g_loadedClasses += [("AAkAmbientSound", 3527, "AKeypoint")]
BL2SDK.g_loadedClasses += [
    ("UAkAmbientSoundRenderingComponent", 3529, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [("UIAkEnvironmentalEffectProvider", 3531, "UInterface")]
BL2SDK.g_loadedClasses += [("UInterpTrackAkEvent", 3533, "UInterpTrack")]
BL2SDK.g_loadedClasses += [("UInterpTrackAkRTPC", 3535, "UInterpTrackFloatBase")]
BL2SDK.g_loadedClasses += [("UInterpTrackInstAkEvent", 3537, "UInterpTrackInst")]
BL2SDK.g_loadedClasses += [("UInterpTrackInstAkRTPC", 3539, "UInterpTrackInst")]
BL2SDK.g_loadedClasses += [("UISpecialOcclusionAccumulator", 3541, "UInterface")]
BL2SDK.g_loadedClasses += [("USeqAct_AkClearBanks", 3543, "USequenceAction")]
BL2SDK.g_loadedClasses += [("USeqAct_AkLoadBank", 3545, "USeqAct_Latent")]
BL2SDK.g_loadedClasses += [("USeqAct_AkPostEvent", 3547, "USeqAct_Latent")]
BL2SDK.g_loadedClasses += [("USeqAct_AkPostTrigger", 3549, "USequenceAction")]
BL2SDK.g_loadedClasses += [("USeqAct_AkSetRTPCValue", 3551, "USeqAct_Latent")]
BL2SDK.g_loadedClasses += [("USeqAct_AkSetState", 3553, "USequenceAction")]
BL2SDK.g_loadedClasses += [("USeqAct_AkSetSwitch", 3555, "USequenceAction")]
BL2SDK.g_loadedClasses += [("USeqAct_AkStopAll", 3557, "USequenceAction")]
BL2SDK.g_loadedClasses += [("AWwiseSoundGroup", 3559, "AKeypoint")]
BL2SDK.g_loadedClasses += [
    ("UWwiseSoundGroupRenderingComponent", 3561, "UPrimitiveComponent")
]
BL2SDK.g_loadedClasses += [("AWwiseSoundVolume", 3563, "AVolume")]
