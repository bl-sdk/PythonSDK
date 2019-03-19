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

BL2SDK.g_classFuncs["AWwiseSoundGroup"] = {}
BL2SDK.g_classFuncs["UISpecialOcclusionAccumulator"] = {}
BL2SDK.g_classFuncs["UIAkEnvironmentalEffectProvider"] = {}
BL2SDK.g_classFuncs["AWwiseSoundVolume"] = {}




BL2SDK.g_classFuncs["UIAkEnvironmentalEffectProvider"][
    "GetEnvironmentalEffectsForLocation"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37462,
            "cType": TArray_FEnvironmentalEffectInfo,
            "castTo": POINTER(TArray_FEnvironmentalEffectInfo),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "GameObjComponent",
            "index": 37465,
            "className": "UAkComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "ListenerLocation",
            "index": 37464,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "ObjectLocation",
            "index": 37463,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 40,
    "index": 37460,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UISpecialOcclusionAccumulator"]["RemoveOcclusionProvider"] = {
    "fields": [
        {
            "name": "Source",
            "index": 37477,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37476,
}
BL2SDK.g_classFuncs["UISpecialOcclusionAccumulator"]["SetOcclusionForProvider"] = {
    "fields": [
        {
            "name": "Source",
            "index": 37475,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Amount",
            "index": 37474,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 37473,
}
BL2SDK.g_classFuncs["AWwiseSoundGroup"]["RemoveOcclusionProvider"] = {
    "fields": [
        {
            "name": "Source",
            "index": 37506,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37505,
}
BL2SDK.g_classFuncs["AWwiseSoundGroup"]["SetOcclusionForProvider"] = {
    "fields": [
        {
            "name": "Source",
            "index": 37504,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Amount",
            "index": 37503,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 37502,
}
BL2SDK.g_classFuncs["AWwiseSoundGroup"]["GetOcclusionAmount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37501,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37500,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AWwiseSoundGroup"]["SetAkSwitchObject"] = {
    "fields": [
        {
            "name": "Switch",
            "index": 37499,
            "className": "UAkSwitch",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37498,
}
BL2SDK.g_classFuncs["AWwiseSoundGroup"]["SetRTPCObjectValue"] = {
    "fields": [
        {
            "name": "InRtpc",
            "index": 37497,
            "className": "UAkRtpc",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TargetValue",
            "index": 37496,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 37495,
}
BL2SDK.g_classFuncs["AWwiseSoundVolume"]["RemoveOcclusionProvider"] = {
    "fields": [
        {
            "name": "Source",
            "index": 37586,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37585,
}
BL2SDK.g_classFuncs["AWwiseSoundVolume"]["SetOcclusionForProvider"] = {
    "fields": [
        {
            "name": "Source",
            "index": 37584,
            "className": "AActor",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Amount",
            "index": 37583,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 37582,
}
BL2SDK.g_classFuncs["AWwiseSoundVolume"]["GetOcclusionAmount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37581,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37580,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AWwiseSoundVolume"]["UpdateAkComponentPosition"] = {
    "fields": [
        {
            "name": "ListenerPositions",
            "isRet": True,
            "index": 37577,
            "isOutParm": True,
            "cType": TArray_FVector,
            "castTo": POINTER(TArray_FVector),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "ListenerOrientations",
            "isRet": True,
            "index": 37579,
            "isOutParm": True,
            "cType": TArray_FRotator,
            "castTo": POINTER(TArray_FRotator),
            "TArray": True,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 37575,
}
BL2SDK.g_classFuncs["AWwiseSoundVolume"]["GetEnvironmentalEffectsForLocation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37571,
            "cType": TArray_FEnvironmentalEffectInfo,
            "castTo": POINTER(TArray_FEnvironmentalEffectInfo),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "GameObjComponent",
            "index": 37574,
            "className": "UAkComponent",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "ListenerLocation",
            "index": 37573,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "ObjectLocation",
            "index": 37572,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 40,
    "index": 37569,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["AWwiseSoundVolume"]["CalculateFacePlanes"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37568,
}
