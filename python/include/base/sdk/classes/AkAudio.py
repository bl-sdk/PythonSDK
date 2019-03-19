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

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *

class UActorFactoryAkAmbientSound_Data(BL2SDK.UObject_Base):
    pass


class UActorFactoryAkAmbientSound(BL2SDK.UObject_Base):
    pass


class AAkAmbientSound_Data(BL2SDK.UObject_Base):
    pass


class AAkAmbientSound(BL2SDK.UObject_Base):
    pass


class UAkAmbientSoundRenderingComponent_Data(BL2SDK.UObject_Base):
    pass


class UAkAmbientSoundRenderingComponent(BL2SDK.UObject_Base):
    pass


class UIAkEnvironmentalEffectProvider_Data(BL2SDK.UObject_Base):
    pass


class UIAkEnvironmentalEffectProvider(BL2SDK.UObject_Base):
    pass


class UInterpTrackAkEvent_Data(BL2SDK.UObject_Base):
    pass


class UInterpTrackAkEvent(BL2SDK.UObject_Base):
    pass


class UInterpTrackAkRTPC_Data(BL2SDK.UObject_Base):
    pass


class UInterpTrackAkRTPC(BL2SDK.UObject_Base):
    pass


class UInterpTrackInstAkEvent_Data(BL2SDK.UObject_Base):
    pass


class UInterpTrackInstAkEvent(BL2SDK.UObject_Base):
    pass


class UInterpTrackInstAkRTPC_Data(BL2SDK.UObject_Base):
    pass


class UInterpTrackInstAkRTPC(BL2SDK.UObject_Base):
    pass


class UISpecialOcclusionAccumulator_Data(BL2SDK.UObject_Base):
    pass


class UISpecialOcclusionAccumulator(BL2SDK.UObject_Base):
    pass


class USeqAct_AkClearBanks_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkClearBanks(BL2SDK.UObject_Base):
    pass


class USeqAct_AkLoadBank_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkLoadBank(BL2SDK.UObject_Base):
    pass


class USeqAct_AkPostEvent_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkPostEvent(BL2SDK.UObject_Base):
    pass


class USeqAct_AkPostTrigger_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkPostTrigger(BL2SDK.UObject_Base):
    pass


class USeqAct_AkSetRTPCValue_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkSetRTPCValue(BL2SDK.UObject_Base):
    pass


class USeqAct_AkSetState_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkSetState(BL2SDK.UObject_Base):
    pass


class USeqAct_AkSetSwitch_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkSetSwitch(BL2SDK.UObject_Base):
    pass


class USeqAct_AkStopAll_Data(BL2SDK.UObject_Base):
    pass


class USeqAct_AkStopAll(BL2SDK.UObject_Base):
    pass


class AWwiseSoundGroup_Data(BL2SDK.UObject_Base):
    pass


class AWwiseSoundGroup(BL2SDK.UObject_Base):
    pass


class UWwiseSoundGroupRenderingComponent_Data(BL2SDK.UObject_Base):
    pass


class UWwiseSoundGroupRenderingComponent(BL2SDK.UObject_Base):
    pass


class AWwiseSoundVolume_Data(BL2SDK.UObject_Base):
    pass


class AWwiseSoundVolume(BL2SDK.UObject_Base):
    pass


class TArray_AWwiseSoundVolumePtr(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(POINTER(AWwiseSoundVolume))),
        ("Count", c_int),
        ("Max", c_int),
    ]

def init():
    UActorFactoryAkAmbientSound_Data._fields_ = [("AmbientEvent", POINTER(UAkEvent))]

    UActorFactoryAkAmbientSound._fields_ = [
        ("UObject", UObject_Data),
        ("UActorFactory", UActorFactory_Data),
        ("UActorFactoryAkAmbientSound", UActorFactoryAkAmbientSound_Data),
    ]

    AAkAmbientSound_Data._fields_ = [
        ("PlayEvent", POINTER(UAkEvent)),
        ("Group", POINTER(AWwiseSoundGroup)),
        ("bIsRegistered", c_bool, 1),
    ]

    AAkAmbientSound._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AKeypoint", AKeypoint_Data),
        ("AAkAmbientSound", AAkAmbientSound_Data),
    ]

    UAkAmbientSoundRenderingComponent_Data._fields_ = [
        ("bShowOnlyIfSelected", c_bool, 1)
    ]

    UAkAmbientSoundRenderingComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UAkAmbientSoundRenderingComponent", UAkAmbientSoundRenderingComponent_Data),
    ]

    UIAkEnvironmentalEffectProvider_Data._fields_ = []

    UIAkEnvironmentalEffectProvider._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UIAkEnvironmentalEffectProvider", UIAkEnvironmentalEffectProvider_Data),
    ]

    UInterpTrackAkEvent_Data._fields_ = [("AkEvents", TArray_FAkEventTrackKey)]

    UInterpTrackAkEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrack", UInterpTrack_Data),
        ("UInterpTrackAkEvent", UInterpTrackAkEvent_Data),
    ]

    UInterpTrackAkRTPC_Data._fields_ = [("AkRtpc", POINTER(UAkRtpc))]

    UInterpTrackAkRTPC._fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrack", UInterpTrack_Data),
        ("UInterpTrackFloatBase", UInterpTrackFloatBase_Data),
        ("UInterpTrackAkRTPC", UInterpTrackAkRTPC_Data),
    ]

    UInterpTrackInstAkEvent_Data._fields_ = [("LastUpdatePosition", c_float)]

    UInterpTrackInstAkEvent._fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrackInst", UInterpTrackInst_Data),
        ("UInterpTrackInstAkEvent", UInterpTrackInstAkEvent_Data),
    ]

    UInterpTrackInstAkRTPC_Data._fields_ = []

    UInterpTrackInstAkRTPC._fields_ = [
        ("UObject", UObject_Data),
        ("UInterpTrackInst", UInterpTrackInst_Data),
        ("UInterpTrackInstAkRTPC", UInterpTrackInstAkRTPC_Data),
    ]

    UISpecialOcclusionAccumulator_Data._fields_ = []

    UISpecialOcclusionAccumulator._fields_ = [
        ("UObject", UObject_Data),
        ("UInterface", UInterface_Data),
        ("UISpecialOcclusionAccumulator", UISpecialOcclusionAccumulator_Data),
    ]

    USeqAct_AkClearBanks_Data._fields_ = []

    USeqAct_AkClearBanks._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkClearBanks", USeqAct_AkClearBanks_Data),
    ]

    USeqAct_AkLoadBank_Data._fields_ = []

    USeqAct_AkLoadBank._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("USeqAct_AkLoadBank", USeqAct_AkLoadBank_Data),
    ]

    USeqAct_AkPostEvent_Data._fields_ = [
        ("ActivePlayingIds", TArray_FAkPlayingInfo),
        ("Event", POINTER(UAkEvent)),
        ("bPlayOneInstanceFromAllLocations", c_bool, 1),
        ("bTreatAllLocationsAsOneSource", c_bool, 1),
    ]

    USeqAct_AkPostEvent._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("USeqAct_AkPostEvent", USeqAct_AkPostEvent_Data),
    ]

    USeqAct_AkPostTrigger_Data._fields_ = [("AkTrigger", POINTER(UAkTrigger))]

    USeqAct_AkPostTrigger._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkPostTrigger", USeqAct_AkPostTrigger_Data),
    ]

    USeqAct_AkSetRTPCValue_Data._fields_ = [
        ("AkRtpc", POINTER(UAkRtpc)),
        ("Value", c_float),
        ("Running", c_bool, 1),
    ]

    USeqAct_AkSetRTPCValue._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_Latent", USeqAct_Latent_Data),
        ("USeqAct_AkSetRTPCValue", USeqAct_AkSetRTPCValue_Data),
    ]

    USeqAct_AkSetState_Data._fields_ = [("State", POINTER(UAkState))]

    USeqAct_AkSetState._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkSetState", USeqAct_AkSetState_Data),
    ]

    USeqAct_AkSetSwitch_Data._fields_ = [("AkSwitch", POINTER(UAkSwitch))]

    USeqAct_AkSetSwitch._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkSetSwitch", USeqAct_AkSetSwitch_Data),
    ]

    USeqAct_AkStopAll_Data._fields_ = []

    USeqAct_AkStopAll._fields_ = [
        ("UObject", UObject_Data),
        ("USequenceObject", USequenceObject_Data),
        ("USequenceOp", USequenceOp_Data),
        ("USequenceAction", USequenceAction_Data),
        ("USeqAct_AkStopAll", USeqAct_AkStopAll_Data),
    ]

    AWwiseSoundGroup_Data._fields_ = [
        ("VfTable_IISpecialOcclusionProvider", FPointer),
        ("VfTable_IISpecialOcclusionAccumulator", FPointer),
        ("Members", TArray_AActorPtr),
        ("ActiveOccluders", FMap_Mirror),
    ]

    AWwiseSoundGroup._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AKeypoint", AKeypoint_Data),
        ("AWwiseSoundGroup", AWwiseSoundGroup_Data),
    ]

    UWwiseSoundGroupRenderingComponent_Data._fields_ = []

    UWwiseSoundGroupRenderingComponent._fields_ = [
        ("UObject", UObject_Data),
        ("UComponent", UComponent_Data),
        ("UActorComponent", UActorComponent_Data),
        ("UPrimitiveComponent", UPrimitiveComponent_Data),
        ("UWwiseSoundGroupRenderingComponent", UWwiseSoundGroupRenderingComponent_Data),
    ]

    AWwiseSoundVolume_Data._fields_ = [
        ("VfTable_IIAkEnvironmentalEffectProvider", FPointer),
        ("VfTable_IISpecialOcclusionProvider", FPointer),
        ("VfTable_IISpecialOcclusionAccumulator", FPointer),
        ("akPlayEvent", POINTER(UAkEvent)),
        ("bAutoPlay", c_bool, 1),
        ("bAutomaticallySetPlayAndStopDistances", c_bool, 1),
        ("bPlaySoundsFromAllSubBrushes", c_bool, 1),
        ("bEffectBankLoaded", c_bool, 1),
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

    AWwiseSoundVolume._fields_ = [
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
