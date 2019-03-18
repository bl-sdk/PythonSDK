from ctypes import *
import BL2SDK


class FEnvironmentalEffectInfo(Structure):
    _fields_ = [("EffectID", c_int), ("Volume", c_float)]


class FAkEventTrackKey(Structure):
    _fields_ = [("Time", c_float), ("Event", POINTER(UAkEvent))]


class FEnvironmentalEffectSetting(Structure):
    _fields_ = [
        ("Effect", POINTER(UAkEffect)),
        ("Volume", c_float),
        ("FadeDistance", c_float),
        ("MinDistance", c_float),
        ("MaxDistance", c_float),
    ]


class FRTPCSetting(Structure):
    _fields_ = [
        ("Target", POINTER(AActor)),
        ("AkRtpc", POINTER(UAkRtpc)),
        ("ValueAtMaxRange", c_float),
        ("ValueWithinVolume", c_float),
        ("FadeDistance", c_float),
        ("LastEvalValue", c_float),
    ]


class FOccludedVolume(Structure):
    _fields_ = [
        ("SoundVolume", POINTER(AWwiseSoundVolume)),
        ("Target", FScriptInterface),
        ("MaxOcclusion", c_float),
        ("FadeDistance", c_float),
        ("bFadeIn", c_bool, 1),
        ("bExternalFade", c_bool, 1),
        ("", c_ulong, 0),
    ]
