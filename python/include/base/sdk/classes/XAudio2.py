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

class UXAudio2Device_Data(BL2SDK.UObject_Base):
    pass


class UXAudio2Device(BL2SDK.UObject_Base):
    pass

def init():
    UXAudio2Device_Data._fields_ = [("Unknown1", c_ubyte * 0x9C)]

    UXAudio2Device._fields_ = [
        ("UObject", UObject_Data),
        ("USubsystem", USubsystem_Data),
        ("UAudioDevice", UAudioDevice_Data),
        ("UXAudio2Device", UXAudio2Device_Data),
    ]

    BL2SDK.g_loadedClasses += [("UXAudio2Device", 3522, "UAudioDevice")]
