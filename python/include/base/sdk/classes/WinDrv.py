from ctypes import *
import BL2SDK


class UWindowsClient_Data(Structure):
    pass


class UWindowsClient(Structure):
    pass


class UXnaForceFeedbackManager_Data(Structure):
    pass


class UXnaForceFeedbackManager(Structure):
    pass


class UFacebookWindows_Data(Structure):
    pass


class UFacebookWindows(Structure):
    pass


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

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *
from ..classes.AkAudio import *
from ..classes.IpDrv import *


def init():
    UWindowsClient_Data._fields_ = [
        ("Unknown1", c_ubyte * 0x15C),
        ("AudioDeviceClass", POINTER(UClass)),
        ("Unknown2", c_ubyte * 0x30),
        ("AllowJoystickInput", c_int),
        ("Unknown3", c_ubyte * 0xC),
    ]

    UWindowsClient._fields_ = [
        ("UObject", UObject_Data),
        ("UClient", UClient_Data),
        ("UWindowsClient", UWindowsClient_Data),
    ]

    UXnaForceFeedbackManager_Data._fields_ = []

    UXnaForceFeedbackManager._fields_ = [
        ("UObject", UObject_Data),
        ("UForceFeedbackManager", UForceFeedbackManager_Data),
        ("UXnaForceFeedbackManager", UXnaForceFeedbackManager_Data),
    ]

    UFacebookWindows_Data._fields_ = [("Unknown1", c_ubyte * 0x38)]

    UFacebookWindows._fields_ = [
        ("UObject", UObject_Data),
        ("UFacebookIntegration", UFacebookIntegration_Data),
        ("UFacebookWindows", UFacebookWindows_Data),
    ]

    BL2SDK.g_loadedClasses += [("UWindowsClient", 3566, "UClient")]
    BL2SDK.g_loadedClasses += [
        ("UXnaForceFeedbackManager", 3570, "UForceFeedbackManager")
    ]
    BL2SDK.g_loadedClasses += [("UFacebookWindows", 3572, "UFacebookIntegration")]
