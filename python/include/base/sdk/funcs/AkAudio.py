from cffi import FFI
import BL2SDK

BL2SDK.g_classFuncs["AWwiseSoundGroup"] = {}
BL2SDK.g_classFuncs["UISpecialOcclusionAccumulator"] = {}
BL2SDK.g_classFuncs["UIAkEnvironmentalEffectProvider"] = {}
BL2SDK.g_classFuncs["AWwiseSoundVolume"] = {}

ffi = FFI()


BL2SDK.g_classFuncs["UIAkEnvironmentalEffectProvider"][
    "GetEnvironmentalEffectsForLocation"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37462,
            "cType": ffi.typeof("struct TArray_FEnvironmentalEffectInfo"),
            "castTo": ffi.typeof("struct TArray_FEnvironmentalEffectInfo*"),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "GameObjComponent",
            "index": 37465,
            "className": "UAkComponent",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "ListenerLocation",
            "index": 37464,
            "type": ffi.typeof("struct FVector"),
            "castTo": ffi.typeof("struct FVector*"),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "ObjectLocation",
            "index": 37463,
            "type": ffi.typeof("struct FVector"),
            "castTo": ffi.typeof("struct FVector*"),
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
            "castTo": ffi.typeof("struct UObject**"),
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
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Amount",
            "index": 37474,
            "type": "number",
            "castTo": ffi.typeof("float*"),
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
            "castTo": ffi.typeof("struct UObject**"),
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
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Amount",
            "index": 37503,
            "type": "number",
            "castTo": ffi.typeof("float*"),
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
            "castTo": ffi.typeof("float*"),
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
            "castTo": ffi.typeof("struct UObject**"),
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
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "TargetValue",
            "index": 37496,
            "type": "number",
            "castTo": ffi.typeof("float*"),
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
            "castTo": ffi.typeof("struct UObject**"),
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
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Amount",
            "index": 37583,
            "type": "number",
            "castTo": ffi.typeof("float*"),
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
            "castTo": ffi.typeof("float*"),
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
            "cType": ffi.typeof("struct TArray_FVector"),
            "castTo": ffi.typeof("struct TArray_FVector*"),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "ListenerOrientations",
            "isRet": True,
            "index": 37579,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FRotator"),
            "castTo": ffi.typeof("struct TArray_FRotator*"),
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
            "cType": ffi.typeof("struct TArray_FEnvironmentalEffectInfo"),
            "castTo": ffi.typeof("struct TArray_FEnvironmentalEffectInfo*"),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "GameObjComponent",
            "index": 37574,
            "className": "UAkComponent",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "ListenerLocation",
            "index": 37573,
            "type": ffi.typeof("struct FVector"),
            "castTo": ffi.typeof("struct FVector*"),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "ObjectLocation",
            "index": 37572,
            "type": ffi.typeof("struct FVector"),
            "castTo": ffi.typeof("struct FVector*"),
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
