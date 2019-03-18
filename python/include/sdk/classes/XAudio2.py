from ctypes import *
import BL2SDK


class UXAudio2Device_Data(Structure):
    _fields_ = [("Unknown1", c_ubyte, 0x9C)]


class UXAudio2Device(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("USubsystem", USubsystem_Data),
        ("UAudioDevice", UAudioDevice_Data),
        ("UXAudio2Device", UXAudio2Device_Data),
    ]


BL2SDK.g_loadedClasses += [("UXAudio2Device", 3522, "UAudioDevice")]
