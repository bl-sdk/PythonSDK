from ctypes import *
import BL2SDK


class UWindowsClient_Data(Structure):
    _fields_ = [
        ("Unknown1", c_ubyte, 0x15C),
        ("AudioDeviceClass", POINTER(UClass)),
        ("Unknown2", c_ubyte, 0x30),
        ("AllowJoystickInput", c_int),
        ("Unknown3", c_ubyte, 0xC),
    ]


class UWindowsClient(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UClient", UClient_Data),
        ("UWindowsClient", UWindowsClient_Data),
    ]


class UXnaForceFeedbackManager_Data(Structure):
    _fields_ = []


class UXnaForceFeedbackManager(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UForceFeedbackManager", UForceFeedbackManager_Data),
        ("UXnaForceFeedbackManager", UXnaForceFeedbackManager_Data),
    ]


class UFacebookWindows_Data(Structure):
    _fields_ = [("Unknown1", c_ubyte, 0x38)]


class UFacebookWindows(Structure):
    _fields_ = [
        ("UObject", UObject_Data),
        ("UFacebookIntegration", UFacebookIntegration_Data),
        ("UFacebookWindows", UFacebookWindows_Data),
    ]


BL2SDK.g_loadedClasses += [("UWindowsClient", 3566, "UClient")]
BL2SDK.g_loadedClasses += [("UXnaForceFeedbackManager", 3570, "UForceFeedbackManager")]
BL2SDK.g_loadedClasses += [("UFacebookWindows", 3572, "UFacebookIntegration")]
