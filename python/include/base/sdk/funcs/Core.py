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

BL2SDK.g_classFuncs["UCommandlet"] = {}
BL2SDK.g_classFuncs["UObject"] = {}
BL2SDK.g_classFuncs["UDistributionFloat"] = {}
BL2SDK.g_classFuncs["UHelpCommandlet"] = {}
BL2SDK.g_classFuncs["UDistributionVector"] = {}

BL2SDK.g_classFuncs["UObject"]["IsRelevantForDebugging"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5380,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Source",
            "index": 5379,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 5377,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["GetGlobalDebugTarget"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5382,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5378,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["SetGlobalDebugTarget"] = {
    "fields": [
        {
            "name": "Target",
            "index": 5384,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5381,
}
BL2SDK.g_classFuncs["UObject"]["LogContentDebug"] = {
    "fields": [
        {
            "name": "Message",
            "index": 5386,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 5383,
}
BL2SDK.g_classFuncs["UObject"]["GetLanguage"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5388,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 5385,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["GetRandomOptionSumFrequency"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5391,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "FreqList",
            "isRet": True,
            "index": 5392,
            "isOutParm": True,
            "cType": TArray_float,
            "castTo": POINTER(TArray_float),
            "TArray": True,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 5387,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["GetBuildChangelistNumber"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5394,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5389,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["GetEngineVersion"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5396,
            "castTo": POINTER(c_int),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5393,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["GetSystemTime"] = {
    "fields": [
        {
            "name": "Year",
            "isRet": True,
            "index": 5398,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "Month",
            "isRet": True,
            "index": 5399,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "DayOfWeek",
            "isRet": True,
            "index": 5400,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "Day",
            "isRet": True,
            "index": 5401,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "Hour",
            "isRet": True,
            "index": 5402,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 16,
        },
        {
            "name": "Min",
            "isRet": True,
            "index": 5403,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 20,
        },
        {
            "name": "Sec",
            "isRet": True,
            "index": 5404,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 24,
        },
        {
            "name": "MSec",
            "isRet": True,
            "index": 5405,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 5395,
}
BL2SDK.g_classFuncs["UObject"]["TimeStamp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5407,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 5397,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["TransformVectorByRotation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5423,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
        {
            "name": "SourceRotation",
            "index": 5409,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "SourceVector",
            "index": 5410,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "bInverse",
            "index": 5411,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 40,
    "index": 5406,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["GetPackageName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5425,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5408,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["IsPendingKill"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5427,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5424,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["ByteToFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5431,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "inputByte",
            "index": 5429,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bSigned",
            "index": 5430,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5426,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["FloatToByte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5435,
            "castTo": POINTER(c_ubyte),
            "offset": 8,
        },
        {
            "name": "inputFloat",
            "index": 5433,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bSigned",
            "index": 5434,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 9,
    "index": 5428,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["UnwindHeading"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5438,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 5437,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 5432,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["FindDeltaAngle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5442,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A1",
            "index": 5440,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "A2",
            "index": 5441,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 5436,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GetHeadingAngle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5446,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Dir",
            "index": 5444,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5439,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["GetAngularDegreesFromRadians"] = {
    "fields": [
        {
            "name": "OutFOV",
            "isRet": True,
            "index": 5448,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5443,
}
BL2SDK.g_classFuncs["UObject"]["GetAngularFromDotDist"] = {
    "fields": [
        {
            "name": "OutAngDist",
            "isRet": True,
            "index": 5453,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        },
        {
            "name": "DotDist",
            "index": 5454,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 5447,
}
BL2SDK.g_classFuncs["UObject"]["GetAngularDistance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5461,
            "castTo": POINTER(c_bool),
            "offset": 56,
        },
        {
            "name": "OutAngularDist",
            "isRet": True,
            "index": 5456,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        },
        {
            "name": "Direction",
            "index": 5457,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "AxisX",
            "index": 5458,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 20,
        },
        {
            "name": "AxisY",
            "index": 5459,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 32,
        },
        {
            "name": "AxisZ",
            "index": 5460,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 60,
    "index": 5452,
    "retOffset": 56,
}
BL2SDK.g_classFuncs["UObject"]["GetDotDistance"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5468,
            "castTo": POINTER(c_bool),
            "offset": 56,
        },
        {
            "name": "OutDotDist",
            "isRet": True,
            "index": 5463,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        },
        {
            "name": "Direction",
            "index": 5464,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "AxisX",
            "index": 5465,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 20,
        },
        {
            "name": "AxisY",
            "index": 5466,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 32,
        },
        {
            "name": "AxisZ",
            "index": 5467,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 44,
        },
    ],
    "dataSize": 60,
    "index": 5455,
    "retOffset": 56,
}
BL2SDK.g_classFuncs["UObject"]["PointProjectToPlane"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5474,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 48,
        },
        {
            "name": "Point",
            "index": 5470,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "A",
            "index": 5471,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "B",
            "index": 5472,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 24,
        },
        {
            "name": "C",
            "index": 5473,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 36,
        },
    ],
    "dataSize": 60,
    "index": 5462,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UObject"]["PointDistToPlane"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5485,
            "castTo": POINTER(c_float),
            "offset": 48,
        },
        {
            "name": "Point",
            "index": 5476,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Orientation",
            "index": 5477,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Origin",
            "index": 5483,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 24,
        },
        {
            "name": "out_ClosestPoint",
            "isRet": True,
            "index": 5484,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 36,
        },
    ],
    "dataSize": 120,
    "index": 5469,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UObject"]["PointDistToSegment"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5491,
            "castTo": POINTER(c_float),
            "offset": 48,
        },
        {
            "name": "Point",
            "index": 5487,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "StartPoint",
            "index": 5488,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "EndPoint",
            "index": 5489,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 24,
        },
        {
            "name": "OutClosestPoint",
            "isRet": True,
            "index": 5490,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 36,
        },
    ],
    "dataSize": 52,
    "index": 5475,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UObject"]["PointDistToLine"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5497,
            "castTo": POINTER(c_float),
            "offset": 48,
        },
        {
            "name": "Point",
            "index": 5493,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Line",
            "index": 5494,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Origin",
            "index": 5495,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 24,
        },
        {
            "name": "OutClosestPoint",
            "isRet": True,
            "index": 5496,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 36,
        },
    ],
    "dataSize": 52,
    "index": 5486,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UObject"]["GetPerObjectConfigSections"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5504,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "SearchClass",
            "index": 5499,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "out_SectionNames",
            "isRet": True,
            "index": 5503,
            "isOutParm": True,
            "cType": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "ObjectOuter",
            "index": 5501,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
        {
            "name": "MaxResults",
            "index": 5502,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 5492,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["StaticSaveConfig"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5498,
}
BL2SDK.g_classFuncs["UObject"]["SaveConfig"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5505,
}
BL2SDK.g_classFuncs["UObject"]["GetAttributeModiferDescriptor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5509,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 8,
        },
        {
            "name": "AttributeName",
            "index": 5508,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5506,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GetAttributeValueByName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5512,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "AttributeName",
            "index": 5511,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 5507,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["RemoveModifier"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5517,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "mod",
            "index": 5514,
            "className": "UAttributeModifier",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AttributeName",
            "index": 5515,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "bSuppressNotify",
            "index": 5516,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 5510,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["AddModifier"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5522,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "mod",
            "index": 5519,
            "className": "UAttributeModifier",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AttributeName",
            "index": 5520,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "bSuppressNotify",
            "index": 5521,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 5513,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FindObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5526,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 16,
        },
        {
            "name": "ObjectName",
            "index": 5524,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "ObjectClass",
            "index": 5525,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 5518,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["DynamicLoadObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5531,
            "castTo": POINTER(POINTER(UObject)),
            "offset": 20,
        },
        {
            "name": "ObjectName",
            "index": 5528,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "ObjectClass",
            "index": 5529,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 12,
        },
        {
            "name": "MayFail",
            "index": 5530,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 5523,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["GetEnum"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5535,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 8,
        },
        {
            "name": "E",
            "index": 5533,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "I",
            "index": 5534,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 5527,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Disable"] = {
    "fields": [
        {
            "name": "ProbeFunc",
            "index": 5537,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5532,
}
BL2SDK.g_classFuncs["UObject"]["Enable"] = {
    "fields": [
        {
            "name": "ProbeFunc",
            "index": 5539,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5536,
}
BL2SDK.g_classFuncs["UObject"]["eventContinuedState"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5538,
}
BL2SDK.g_classFuncs["UObject"]["eventPausedState"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5540,
}
BL2SDK.g_classFuncs["UObject"]["eventPoppedState"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5541,
}
BL2SDK.g_classFuncs["UObject"]["eventPushedState"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5542,
}
BL2SDK.g_classFuncs["UObject"]["eventEndState"] = {
    "fields": [
        {
            "name": "NextStateName",
            "index": 5545,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5543,
}
BL2SDK.g_classFuncs["UObject"]["eventBeginState"] = {
    "fields": [
        {
            "name": "PreviousStateName",
            "index": 5547,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5544,
}
BL2SDK.g_classFuncs["UObject"]["BreakPoint"] = {
    "fields": [
        {
            "name": "SomeObject",
            "index": 5549,
            "optional": True,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5546,
}
BL2SDK.g_classFuncs["UObject"]["PrintScriptStack"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5548,
}
BL2SDK.g_classFuncs["UObject"]["DumpStateStack"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5550,
}
BL2SDK.g_classFuncs["UObject"]["PopState"] = {
    "fields": [
        {
            "name": "bPopAll",
            "index": 5553,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5551,
}
BL2SDK.g_classFuncs["UObject"]["PushState"] = {
    "fields": [
        {
            "name": "NewState",
            "index": 5555,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "NewLabel",
            "index": 5556,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 5552,
}
BL2SDK.g_classFuncs["UObject"]["GetStateName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5558,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5554,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["IsChildState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5562,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "TestState",
            "index": 5560,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "TestParentState",
            "index": 5561,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5557,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["IsInState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5566,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "TestState",
            "index": 5564,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bTestStateStack",
            "index": 5565,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 5559,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["GotoState"] = {
    "fields": [
        {
            "name": "NewState",
            "index": 5568,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Label",
            "index": 5569,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "bForceEvents",
            "index": 5570,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "bKeepStack",
            "index": 5571,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 5563,
}
BL2SDK.g_classFuncs["UObject"]["IsUTracing"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5573,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5567,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["SetUTracing"] = {
    "fields": [
        {
            "name": "bShouldUTrace",
            "index": 5575,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 5572,
}
BL2SDK.g_classFuncs["UObject"]["GetFuncName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5577,
            "cType": FName,
            "castTo": POINTER(FName),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 5574,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["DebugBreak"] = {
    "fields": [
        {
            "name": "UserFlags",
            "index": 5579,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "DebuggerType",
            "index": 5580,
            "optional": True,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EDebugBreakType",
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 5,
    "index": 5576,
}
BL2SDK.g_classFuncs["UObject"]["GetScriptTrace"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5584,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 5578,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["ScriptTrace"] = {
    "fields": [],
    "dataSize": 0,
    "index": 5583,
}
BL2SDK.g_classFuncs["UObject"]["ParseLocalizedPropertyPath"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5590,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "PathName",
            "index": 5587,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 36,
    "index": 5585,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Localize"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5596,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 36,
        },
        {
            "name": "SectionName",
            "index": 5593,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "KeyName",
            "index": 5594,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "PackageName",
            "index": 5595,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 24,
        },
    ],
    "dataSize": 48,
    "index": 5586,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UObject"]["LogIndentedInternal"] = {
    "fields": [
        {
            "name": "S",
            "index": 5598,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "LogTag",
            "index": 5599,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "IndentationLevelChange",
            "index": 5600,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 5592,
}
BL2SDK.g_classFuncs["UObject"]["WarnInternal"] = {
    "fields": [
        {
            "name": "S",
            "index": 5602,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 5597,
}
BL2SDK.g_classFuncs["UObject"]["LogInternal"] = {
    "fields": [
        {
            "name": "S",
            "index": 5604,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Tag",
            "index": 5605,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 5601,
}
BL2SDK.g_classFuncs["UObject"]["GetStringForNameBasedObjectPath"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5608,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 52,
        },
        {
            "name": "ObjectPath",
            "index": 5607,
            "type": FNameBasedObjectPath,
            "castTo": POINTER(FNameBasedObjectPath),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 64,
    "index": 5603,
    "retOffset": 52,
}
BL2SDK.g_classFuncs["UObject"]["SetNameBasedObjectPath"] = {
    "fields": [
        {
            "name": "ObjectPath",
            "isRet": True,
            "index": 5614,
            "isOutParm": True,
            "cType": FNameBasedObjectPath,
            "castTo": POINTER(FNameBasedObjectPath),
            "offset": 0,
        },
        {
            "name": "Object",
            "index": 5615,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 52,
        },
    ],
    "dataSize": 56,
    "index": 5606,
}
BL2SDK.g_classFuncs["UObject"]["FlagHasBeenTrueFor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5628,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5617,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
        {
            "name": "TimeSeconds",
            "index": 5618,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 5613,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["FlagTimeRemaining"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5631,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5630,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5616,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FlagTimeSinceRaised"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5634,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5633,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5629,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FlagSetValue"] = {
    "fields": [
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5636,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
        {
            "name": "bNewValue",
            "index": 5637,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "bForceTimeStamp",
            "index": 5638,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 5632,
}
BL2SDK.g_classFuncs["UObject"]["FlagIsLowered"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5641,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5640,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5635,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FlagIsRaised"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5644,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5643,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5639,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FlagIsFalse"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5647,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5646,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5642,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FlagIsTrue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5650,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5649,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5645,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FlagSetTrueTimed"] = {
    "fields": [
        {
            "name": "theFlag",
            "isRet": True,
            "index": 5652,
            "isOutParm": True,
            "cType": FFlag,
            "castTo": POINTER(FFlag),
            "offset": 0,
        },
        {
            "name": "Duration",
            "index": 5653,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 5648,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectTimeRemaining"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5656,
            "castTo": POINTER(c_float),
            "offset": 28,
        },
        {
            "name": "theSV",
            "isRet": True,
            "index": 5655,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 5651,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectTimeSinceSet"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5662,
            "castTo": POINTER(c_float),
            "offset": 28,
        },
        {
            "name": "theSV",
            "isRet": True,
            "index": 5661,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 5654,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectGetVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5666,
            "castTo": POINTER(c_bool),
            "offset": 40,
        },
        {
            "name": "theSV",
            "isRet": True,
            "index": 5664,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        },
        {
            "name": "OutVector",
            "isRet": True,
            "index": 5665,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
    ],
    "dataSize": 44,
    "index": 5660,
    "retOffset": 40,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectIsSet"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5669,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "theSV",
            "isRet": True,
            "index": 5668,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 5663,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectSetVectorTimed"] = {
    "fields": [
        {
            "name": "theSV",
            "isRet": True,
            "index": 5671,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        },
        {
            "name": "InVector",
            "index": 5672,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 28,
        },
        {
            "name": "Duration",
            "index": 5673,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 44,
    "index": 5667,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5676,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
        {
            "name": "theSV",
            "isRet": True,
            "index": 5675,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        },
    ],
    "dataSize": 40,
    "index": 5670,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectReset"] = {
    "fields": [
        {
            "name": "theSV",
            "isRet": True,
            "index": 5678,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 5674,
}
BL2SDK.g_classFuncs["UObject"]["SmartVectSetVector"] = {
    "fields": [
        {
            "name": "theSV",
            "isRet": True,
            "index": 5680,
            "isOutParm": True,
            "cType": FSmartVector,
            "castTo": POINTER(FSmartVector),
            "offset": 0,
        },
        {
            "name": "InVector",
            "index": 5681,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 28,
        },
        {
            "name": "bUpdateTime",
            "index": 5682,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 44,
    "index": 5677,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_LinearColorLinearColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5690,
            "cType": FLinearColor,
            "castTo": POINTER(FLinearColor),
            "offset": 32,
        },
        {
            "name": "A",
            "index": 5684,
            "type": FLinearColor,
            "castTo": POINTER(FLinearColor),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5687,
            "type": FLinearColor,
            "castTo": POINTER(FLinearColor),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 48,
    "index": 5679,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_LinearColorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5696,
            "cType": FLinearColor,
            "castTo": POINTER(FLinearColor),
            "offset": 20,
        },
        {
            "name": "LC",
            "index": 5694,
            "type": FLinearColor,
            "castTo": POINTER(FLinearColor),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Mult",
            "index": 5695,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 36,
    "index": 5683,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["ColorToLinearColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5703,
            "cType": FLinearColor,
            "castTo": POINTER(FLinearColor),
            "offset": 4,
        },
        {
            "name": "OldColor",
            "index": 5698,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 5693,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["MakeLinearColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5711,
            "cType": FLinearColor,
            "castTo": POINTER(FLinearColor),
            "offset": 16,
        },
        {
            "name": "R",
            "index": 5706,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "G",
            "index": 5708,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "B",
            "index": 5709,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "A",
            "index": 5710,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 48,
    "index": 5697,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["GetHTMLColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5714,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "C",
            "isRet": True,
            "index": 5713,
            "isOutParm": True,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 5705,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["LerpColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5723,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 5716,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5719,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "Alpha",
            "index": 5721,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 68,
    "index": 5712,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["MakeColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5730,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 4,
        },
        {
            "name": "R",
            "index": 5725,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "G",
            "index": 5727,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 1,
        },
        {
            "name": "B",
            "index": 5728,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 2,
        },
        {
            "name": "A",
            "index": 5729,
            "optional": True,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 3,
        },
    ],
    "dataSize": 12,
    "index": 5715,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Add_ColorColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5734,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 5732,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5733,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5724,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_ColorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5738,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 5736,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5737,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5731,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_FloatColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5742,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 5740,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5741,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5735,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_ColorColor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5746,
            "cType": FColor,
            "castTo": POINTER(FColor),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 5744,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5745,
            "type": FColor,
            "castTo": POINTER(FColor),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5739,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["EvalInterpCurveVector2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5764,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 20,
        },
        {
            "name": "Vector2DCurve",
            "index": 5748,
            "type": FInterpCurveVector2D,
            "castTo": POINTER(FInterpCurveVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "InVal",
            "index": 5749,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 5743,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["EvalInterpCurveVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5778,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 20,
        },
        {
            "name": "VectorCurve",
            "index": 5766,
            "type": FInterpCurveVector,
            "castTo": POINTER(FInterpCurveVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "InVal",
            "index": 5767,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 5747,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["EvalInterpCurveFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5791,
            "castTo": POINTER(c_float),
            "offset": 20,
        },
        {
            "name": "FloatCurve",
            "index": 5780,
            "type": FInterpCurveFloat,
            "castTo": POINTER(FInterpCurveFloat),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "InVal",
            "index": 5781,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 5765,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["vect2d"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5796,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 8,
        },
        {
            "name": "InX",
            "index": 5793,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "InY",
            "index": 5795,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 24,
    "index": 5779,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GetMappedRangeValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5801,
            "castTo": POINTER(c_float),
            "offset": 20,
        },
        {
            "name": "InputRange",
            "index": 5798,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "OutputRange",
            "index": 5799,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "Value",
            "index": 5800,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 5792,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["GetRangePctByValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5805,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Range",
            "index": 5803,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 5804,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 5797,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["GetRangeValueByPct"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5809,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Range",
            "index": 5807,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Pct",
            "index": 5808,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 5802,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["SubtractEqual_Vector2DVector2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5813,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 16,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 5811,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5812,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 5806,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["AddEqual_Vector2DVector2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5817,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 16,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 5815,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5816,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 5810,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["DivideEqual_Vector2DFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5821,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 12,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 5819,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5820,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5814,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_Vector2DFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5825,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 12,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 5823,
            "isOutParm": True,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5824,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5818,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Divide_Vector2DFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5829,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 5827,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5828,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5822,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_Vector2DFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5833,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 5831,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5832,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5826,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_Vector2DVector2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5837,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5835,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5836,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 5830,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Add_Vector2DVector2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5841,
            "cType": FVector2D,
            "castTo": POINTER(FVector2D),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5839,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5840,
            "type": FVector2D,
            "castTo": POINTER(FVector2D),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 5834,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_QuatQuat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5850,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 32,
        },
        {
            "name": "A",
            "index": 5843,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5844,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 48,
    "index": 5838,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["Add_QuatQuat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5854,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 32,
        },
        {
            "name": "A",
            "index": 5852,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5853,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 48,
    "index": 5842,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["QuatSlerp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5860,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 48,
        },
        {
            "name": "A",
            "index": 5856,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5857,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 16,
        },
        {
            "name": "Alpha",
            "index": 5858,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 32,
        },
        {
            "name": "bShortestPath",
            "index": 5859,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 36,
        },
    ],
    "dataSize": 64,
    "index": 5851,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UObject"]["QuatToRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5863,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5862,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 5855,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["QuatFromRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5866,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5865,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 5861,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["QuatFromAxisAndAngle"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5870,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 16,
        },
        {
            "name": "Axis",
            "index": 5868,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Angle",
            "index": 5869,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 32,
    "index": 5864,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["QuatFindBetween"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5874,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 32,
        },
        {
            "name": "A",
            "index": 5872,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5873,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 48,
    "index": 5867,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["QuatRotateVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5878,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
        {
            "name": "A",
            "index": 5876,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5877,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 40,
    "index": 5871,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["QuatInvert"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5881,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5880,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 5875,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["QuatDot"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5885,
            "castTo": POINTER(c_float),
            "offset": 32,
        },
        {
            "name": "A",
            "index": 5883,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5884,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 36,
    "index": 5879,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["QuatProduct"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5889,
            "cType": FQuat,
            "castTo": POINTER(FQuat),
            "offset": 32,
        },
        {
            "name": "A",
            "index": 5887,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5888,
            "type": FQuat,
            "castTo": POINTER(FQuat),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 48,
    "index": 5882,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["MatrixGetAxis"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5902,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 68,
        },
        {
            "name": "TM",
            "index": 5891,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Axis",
            "index": 5892,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EAxis",
            "flags": 32,
            "offset": 64,
        },
    ],
    "dataSize": 80,
    "index": 5886,
    "retOffset": 68,
}
BL2SDK.g_classFuncs["UObject"]["MatrixGetOrigin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5907,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 64,
        },
        {
            "name": "TM",
            "index": 5906,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 76,
    "index": 5890,
    "retOffset": 64,
}
BL2SDK.g_classFuncs["UObject"]["MatrixGetRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5910,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 64,
        },
        {
            "name": "TM",
            "index": 5909,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 76,
    "index": 5905,
    "retOffset": 64,
}
BL2SDK.g_classFuncs["UObject"]["MakeRotationMatrix"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5913,
            "cType": FMatrix,
            "castTo": POINTER(FMatrix),
            "offset": 16,
        },
        {
            "name": "Rotation",
            "index": 5912,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 80,
    "index": 5908,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["MakeRotationTranslationMatrix"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5917,
            "cType": FMatrix,
            "castTo": POINTER(FMatrix),
            "offset": 32,
        },
        {
            "name": "Translation",
            "index": 5915,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Rotation",
            "index": 5916,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 96,
    "index": 5911,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["InverseTransformNormal"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5921,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 76,
        },
        {
            "name": "TM",
            "index": 5919,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "A",
            "index": 5920,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 64,
        },
    ],
    "dataSize": 88,
    "index": 5914,
    "retOffset": 76,
}
BL2SDK.g_classFuncs["UObject"]["TransformNormal"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5925,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 76,
        },
        {
            "name": "TM",
            "index": 5923,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "A",
            "index": 5924,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 64,
        },
    ],
    "dataSize": 88,
    "index": 5918,
    "retOffset": 76,
}
BL2SDK.g_classFuncs["UObject"]["InverseTransformVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5929,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 76,
        },
        {
            "name": "TM",
            "index": 5927,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "A",
            "index": 5928,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 64,
        },
    ],
    "dataSize": 88,
    "index": 5922,
    "retOffset": 76,
}
BL2SDK.g_classFuncs["UObject"]["TransformVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5933,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 76,
        },
        {
            "name": "TM",
            "index": 5931,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "A",
            "index": 5932,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 64,
        },
    ],
    "dataSize": 88,
    "index": 5926,
    "retOffset": 76,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_MatrixMatrix"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5937,
            "cType": FMatrix,
            "castTo": POINTER(FMatrix),
            "offset": 128,
        },
        {
            "name": "A",
            "index": 5935,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5936,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 64,
        },
    ],
    "dataSize": 192,
    "index": 5930,
    "retOffset": 128,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_NameName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5941,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5939,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5940,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5934,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_NameName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5945,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5943,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5944,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5938,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["QueryInterface"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5948,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 4,
        },
        {
            "name": "InterfaceClass",
            "index": 5947,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 5942,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["IsA"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5951,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "ClassName",
            "index": 5950,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 5946,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["ClassIsChildOf"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5955,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "TestClass",
            "index": 5953,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 0,
        },
        {
            "name": "ParentClass",
            "index": 5954,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5949,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_InterfaceInterface"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5959,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5957,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5958,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5952,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_InterfaceInterface"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5963,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 5961,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5962,
            "type": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "flags": 0,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 5956,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_ObjectObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5967,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 5965,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5966,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5960,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_ObjectObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5971,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 5969,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 5970,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 5964,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GuidToString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5974,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 16,
        },
        {
            "name": "G",
            "isRet": True,
            "index": 5973,
            "isOutParm": True,
            "cType": FGuid,
            "castTo": POINTER(FGuid),
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 5968,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["PathName"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5982,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "CheckObject",
            "index": 5981,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 5972,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["SplitString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 5988,
            "cType": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "Source",
            "index": 5983,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Delimiter",
            "index": 5985,
            "optional": True,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "bCullEmpty",
            "index": 5986,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 52,
    "index": 5980,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["ParseStringIntoArray"] = {
    "fields": [
        {
            "name": "BaseString",
            "index": 5991,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Pieces",
            "isRet": True,
            "index": 5995,
            "isOutParm": True,
            "cType": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "delim",
            "index": 5993,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 24,
        },
        {
            "name": "bCullEmpty",
            "index": 5994,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 36,
        },
    ],
    "dataSize": 40,
    "index": 5588,
}
BL2SDK.g_classFuncs["UObject"]["JoinArray"] = {
    "fields": [
        {
            "name": "StringArray",
            "index": 6003,
            "type": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "flags": 8,
            "offset": 0,
        },
        {
            "name": "out_Result",
            "isRet": True,
            "index": 5998,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "delim",
            "index": 6002,
            "optional": True,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 24,
        },
        {
            "name": "bIgnoreBlanks",
            "index": 5999,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 36,
        },
    ],
    "dataSize": 44,
    "index": 5990,
}
BL2SDK.g_classFuncs["UObject"]["GetRightMost"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6006,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Text",
            "index": 6005,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 5996,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Split"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6011,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "Text",
            "index": 6008,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "SplitStr",
            "index": 6009,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "bOmitSplitStr",
            "index": 6010,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 44,
    "index": 6004,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["StringHash"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6014,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "S",
            "index": 6013,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6007,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Repl"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6020,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 40,
        },
        {
            "name": "Src",
            "index": 6016,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Match",
            "index": 6017,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "With",
            "index": 6018,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 24,
        },
        {
            "name": "bCaseSensitive",
            "index": 6019,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 36,
        },
    ],
    "dataSize": 52,
    "index": 6012,
    "retOffset": 40,
}
BL2SDK.g_classFuncs["UObject"]["Asc"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6023,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "S",
            "index": 6022,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6015,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Chr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6026,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "I",
            "index": 6025,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6021,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Locs"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6029,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "S",
            "index": 6028,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 6024,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Caps"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6032,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "S",
            "index": 6031,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 6027,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Right"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6036,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 16,
        },
        {
            "name": "S",
            "index": 6034,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "I",
            "index": 6035,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6030,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Left"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6040,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 16,
        },
        {
            "name": "S",
            "index": 6038,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "I",
            "index": 6039,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6033,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Mid"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6045,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 20,
        },
        {
            "name": "S",
            "index": 6042,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "I",
            "index": 6043,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "J",
            "index": 6044,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 6037,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["InStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6052,
            "castTo": POINTER(c_int),
            "offset": 36,
        },
        {
            "name": "S",
            "index": 6047,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "T",
            "index": 6048,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "bSearchFromRight",
            "index": 6049,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "bIgnoreCase",
            "index": 6050,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 28,
        },
        {
            "name": "StartPos",
            "index": 6051,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 40,
    "index": 6041,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UObject"]["Len"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6055,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "S",
            "index": 6054,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6046,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["SubtractEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6059,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6057,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6058,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6053,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["AtEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6062,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6060,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6061,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6056,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["ConcatEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6001,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6064,
            "isOutParm": True,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6065,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6000,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["ComplementEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6069,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6067,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6068,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6063,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6073,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6071,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6072,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6066,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6077,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6075,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6076,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6070,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["GreaterEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6081,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6079,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6080,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6074,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["LessEqual_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6085,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6083,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6084,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6078,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Greater_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6089,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6087,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6088,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6082,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Less_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6093,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6091,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6092,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6086,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["At_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6097,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6095,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6096,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6090,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Concat_StrStr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6101,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6099,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6100,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6094,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["MakeRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6107,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 12,
        },
        {
            "name": "Pitch",
            "index": 6103,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Yaw",
            "index": 6105,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Roll",
            "index": 6106,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 36,
    "index": 6098,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["SClampRotAxis"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6117,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "DeltaTime",
            "index": 6109,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ViewAxis",
            "index": 6112,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "out_DeltaViewAxis",
            "isRet": True,
            "index": 6110,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "MaxLimit",
            "index": 6113,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "MinLimit",
            "index": 6116,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "InterpolationSpeed",
            "index": 6115,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 32,
    "index": 6102,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["ClampRotAxisFromRange"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6122,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "Current",
            "index": 6119,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Min",
            "index": 6121,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Max",
            "index": 6120,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 6108,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["ClampRotAxisFromBase"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6127,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "Current",
            "index": 6124,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Center",
            "index": 6125,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "MaxDelta",
            "index": 6126,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 20,
    "index": 6118,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["ClampRotAxis"] = {
    "fields": [
        {
            "name": "ViewAxis",
            "index": 6129,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "out_DeltaViewAxis",
            "isRet": True,
            "index": 6130,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "MaxLimit",
            "index": 6131,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "MinLimit",
            "index": 6132,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 6123,
}
BL2SDK.g_classFuncs["UObject"]["RSize"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6135,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "R",
            "index": 6134,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6128,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["RDiff"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6138,
            "castTo": POINTER(c_float),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6136,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6137,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6133,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["NormalizeRotAxis"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6141,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "Angle",
            "index": 6140,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6111,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["RInterpTo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6148,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 36,
        },
        {
            "name": "Current",
            "index": 6143,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Target",
            "index": 6144,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "DeltaTime",
            "index": 6145,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "InterpSpeed",
            "index": 6146,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
        {
            "name": "bConstantInterpSpeed",
            "index": 6147,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 48,
    "index": 6139,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UObject"]["RTransform"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6152,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 24,
        },
        {
            "name": "R",
            "index": 6150,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "RBasis",
            "index": 6151,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6142,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["RLerp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6158,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 32,
        },
        {
            "name": "A",
            "index": 6154,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6155,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Alpha",
            "index": 6156,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "bShortestPath",
            "index": 6157,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 44,
    "index": 6149,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["Normalize"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6161,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 12,
        },
        {
            "name": "Rot",
            "index": 6160,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 6153,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["OrthoRotation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6166,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 36,
        },
        {
            "name": "X",
            "index": 6163,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Y",
            "index": 6164,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Z",
            "index": 6165,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 24,
        },
    ],
    "dataSize": 48,
    "index": 6159,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UObject"]["RotRand"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6169,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 4,
        },
        {
            "name": "bRoll",
            "index": 6168,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6162,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["GetRotatorAxis"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6173,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6171,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Axis",
            "index": 6172,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6167,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["GetUnAxes"] = {
    "fields": [
        {
            "name": "A",
            "index": 6175,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "X",
            "isRet": True,
            "index": 6176,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 12,
        },
        {
            "name": "Y",
            "isRet": True,
            "index": 6177,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "Z",
            "isRet": True,
            "index": 6178,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 36,
        },
    ],
    "dataSize": 48,
    "index": 6170,
}
BL2SDK.g_classFuncs["UObject"]["GetAxes"] = {
    "fields": [
        {
            "name": "A",
            "index": 6180,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "X",
            "isRet": True,
            "index": 6181,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 12,
        },
        {
            "name": "Y",
            "isRet": True,
            "index": 6182,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "Z",
            "isRet": True,
            "index": 6183,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 36,
        },
    ],
    "dataSize": 48,
    "index": 6174,
}
BL2SDK.g_classFuncs["UObject"]["ClockwiseFrom_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6187,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6185,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6186,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6179,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["SubtractEqual_RotatorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6191,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6189,
            "isOutParm": True,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6190,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6184,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["AddEqual_RotatorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6195,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6193,
            "isOutParm": True,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6194,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6188,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_RotatorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6199,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6197,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6198,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6192,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Add_RotatorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6203,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6201,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6202,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6196,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["DivideEqual_RotatorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6207,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 16,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6205,
            "isOutParm": True,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6206,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6200,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_RotatorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6211,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 16,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6209,
            "isOutParm": True,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6210,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6204,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Divide_RotatorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6215,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6213,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6214,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6208,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_FloatRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6219,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6217,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6218,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 28,
    "index": 6212,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_RotatorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6223,
            "cType": FRotator,
            "castTo": POINTER(FRotator),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6221,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6222,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6216,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_RotatorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6227,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6225,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6226,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6220,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_RotatorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6231,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6229,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6230,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6224,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["InCylinder"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6240,
            "castTo": POINTER(c_bool),
            "offset": 44,
        },
        {
            "name": "Origin",
            "index": 6233,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Dir",
            "index": 6235,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Width",
            "index": 6239,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6236,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 28,
        },
        {
            "name": "bIgnoreZ",
            "index": 6234,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 72,
    "index": 6228,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UObject"]["NoZDot"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6244,
            "castTo": POINTER(c_float),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6242,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6243,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6232,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["ClampLength"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6248,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "V",
            "index": 6246,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "MaxLength",
            "index": 6247,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6241,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["VInterpTo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6254,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 32,
        },
        {
            "name": "Current",
            "index": 6250,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Target",
            "index": 6251,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "DeltaTime",
            "index": 6252,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "InterpSpeed",
            "index": 6253,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 44,
    "index": 6245,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UObject"]["IsZero"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6257,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6256,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6249,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["ProjectOnTo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6261,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "X",
            "index": 6259,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Y",
            "index": 6260,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6255,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["MirrorVectorByNormal"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6265,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "InVect",
            "index": 6263,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "InNormal",
            "index": 6264,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6258,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["VRandCone2"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6270,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 20,
        },
        {
            "name": "Dir",
            "index": 6267,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "HorizontalConeHalfAngleRadians",
            "index": 6268,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "VerticalConeHalfAngleRadians",
            "index": 6269,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 6262,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["VRandCone"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6274,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "Dir",
            "index": 6272,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "ConeHalfAngleRadians",
            "index": 6273,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6266,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["VRand"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6276,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 6271,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["VLerp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6281,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 28,
        },
        {
            "name": "A",
            "index": 6278,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6279,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
        {
            "name": "Alpha",
            "index": 6280,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 40,
    "index": 6275,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UObject"]["Normal"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6284,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6283,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 6277,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["VSizeSq2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6287,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6286,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6282,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["VSizeSq"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6290,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6289,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6285,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["VSize2D"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6293,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6292,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6288,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["VSize"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6296,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6295,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6291,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["SubtractEqual_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6300,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6298,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6299,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6294,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["AddEqual_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6304,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6302,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6303,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6297,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["DivideEqual_VectorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6308,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6306,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6307,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6301,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6312,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6310,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6311,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6305,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_VectorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6316,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6314,
            "isOutParm": True,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6315,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6309,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Cross_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6320,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6318,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6319,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6313,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Dot_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6324,
            "castTo": POINTER(c_float),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6322,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6323,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6317,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6328,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6326,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6327,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6321,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6332,
            "castTo": POINTER(c_bool),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6330,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6331,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6325,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["GreaterGreater_VectorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6336,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6334,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6335,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6329,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["LessLess_VectorRotator"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6340,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6338,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6339,
            "type": FRotator,
            "castTo": POINTER(FRotator),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6333,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6344,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6342,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6343,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6337,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Add_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6348,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6346,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6347,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6341,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Divide_VectorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6352,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6350,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6351,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6345,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_VectorVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6356,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 24,
        },
        {
            "name": "A",
            "index": 6354,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6355,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 6349,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_FloatVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6360,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6358,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6359,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 28,
    "index": 6353,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_VectorFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6364,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6362,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6363,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 6357,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_PreVector"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6367,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6366,
            "type": FVector,
            "castTo": POINTER(FVector),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 6361,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["SmoothInterp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6373,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "DeltaTime",
            "index": 6369,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "InterpSpeed",
            "index": 6370,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "deltaDist",
            "index": 6371,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "overallDist",
            "index": 6372,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 6365,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FInterpConstantTo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6378,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "Current",
            "index": 6374,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Target",
            "index": 6375,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "DeltaTime",
            "index": 6376,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "InterpSpeed",
            "index": 6377,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 6368,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FInterpTo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6384,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "Current",
            "index": 6380,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Target",
            "index": 6381,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "DeltaTime",
            "index": 6382,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "InterpSpeed",
            "index": 6383,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 6114,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FPctByRange"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6389,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Value",
            "index": 6386,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "InMin",
            "index": 6387,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "InMax",
            "index": 6388,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 6379,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["RandRange"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6393,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "InMin",
            "index": 6391,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "InMax",
            "index": 6392,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6385,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["FInterpEaseInOut"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6399,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6395,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6396,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Alpha",
            "index": 6397,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "Exp",
            "index": 6398,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 6390,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FInterpEaseOut"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6405,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6401,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6402,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Alpha",
            "index": 6403,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "Exp",
            "index": 6404,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 6394,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FInterpEaseIn"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6411,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "A",
            "index": 6407,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6408,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Alpha",
            "index": 6409,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "Exp",
            "index": 6410,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 6400,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UObject"]["FCubicInterp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6418,
            "castTo": POINTER(c_float),
            "offset": 20,
        },
        {
            "name": "P0",
            "index": 6413,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "T0",
            "index": 6414,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "P1",
            "index": 6415,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "T1",
            "index": 6416,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6417,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 6406,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UObject"]["FCeil"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6421,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6420,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6412,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["FFloor"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6424,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6423,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6419,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Round"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6427,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6426,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6422,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Lerp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6432,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "A",
            "index": 6429,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6430,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Alpha",
            "index": 6431,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 6425,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["FClamp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6437,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "V",
            "index": 6434,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "A",
            "index": 6435,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "B",
            "index": 6436,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 6428,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["FMax"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6441,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6439,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6440,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6433,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["FMin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6445,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6443,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6444,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6438,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["FRand"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6447,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 6442,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UObject"]["Square"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6450,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6449,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6446,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Sqrt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6453,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6452,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6448,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Loge"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6456,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6455,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6451,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Exp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6459,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6458,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6454,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Atan2"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6463,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6461,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6462,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6457,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Atan"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6466,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6465,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6460,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Tan"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6468,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6467,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6464,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Acos"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6471,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6470,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 5445,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Cos"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6474,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6473,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6469,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Asin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6477,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6476,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6472,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Sin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6480,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6479,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6475,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Abs"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6483,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6482,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6478,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["SubtractEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6487,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6485,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6486,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6481,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["AddEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6491,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6489,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6490,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6484,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["DivideEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6495,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6493,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6494,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6488,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6499,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6497,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6498,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6492,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6503,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6501,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6502,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6496,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["ComplementEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6507,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6505,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6506,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6500,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6511,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6509,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6510,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6504,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GreaterEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6515,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6513,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6514,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6508,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["LessEqual_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6519,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6517,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6518,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6512,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Greater_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6523,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6521,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6522,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6516,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Less_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6527,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6525,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6526,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6520,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6531,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6529,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6530,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6524,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Add_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6535,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6533,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6534,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6528,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Percent_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6539,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6537,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6538,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6532,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Divide_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6543,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6541,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6542,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6536,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6547,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6545,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6546,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6540,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyMultiply_FloatFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6551,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "Base",
            "index": 6549,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Exp",
            "index": 6550,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6544,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_PreFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6554,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6553,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6548,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["ToHex"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6557,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6556,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6552,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Clamp"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6562,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "V",
            "index": 6559,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "A",
            "index": 6560,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "B",
            "index": 6561,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 6555,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UObject"]["Max"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6566,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6564,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6565,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6558,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Min"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6570,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6568,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6569,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6563,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Rand"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6573,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "Max",
            "index": 6572,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6567,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["SubtractSubtract_Int"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6576,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6575,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6571,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["AddAdd_Int"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6579,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6578,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6574,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["SubtractSubtract_PreInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6582,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6581,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6577,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["AddAdd_PreInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6585,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6584,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6580,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["SubtractEqual_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6589,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6587,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6588,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6583,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["AddEqual_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6593,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6591,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6592,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6586,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["DivideEqual_IntFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6597,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6595,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6596,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6590,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_IntFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6601,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6599,
            "isOutParm": True,
            "castTo": POINTER(c_int),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6600,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6594,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Or_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6605,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6603,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6604,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6598,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Xor_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6609,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6607,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6608,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6602,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["And_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6613,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6611,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6612,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6606,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6617,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6615,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6616,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6610,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6621,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6619,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6620,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6614,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GreaterEqual_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6625,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6623,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6624,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6618,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["LessEqual_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6629,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6627,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6628,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6622,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Greater_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6633,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6631,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6632,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6626,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Less_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6637,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6635,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6636,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6630,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GreaterGreaterGreater_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6641,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6639,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6640,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6634,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["GreaterGreater_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6645,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6643,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6644,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6638,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["LessLess_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6649,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6647,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6648,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6642,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6653,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6651,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6652,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6646,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Add_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6657,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6655,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6656,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6650,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Percent_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6661,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6659,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6660,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6654,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Divide_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6665,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6663,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6664,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6658,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Multiply_IntInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6669,
            "castTo": POINTER(c_int),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6667,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6668,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6662,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Subtract_PreInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6672,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6671,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6666,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["Complement_PreInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6675,
            "castTo": POINTER(c_int),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6674,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6670,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UObject"]["SubtractSubtract_Byte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6678,
            "castTo": POINTER(c_ubyte),
            "offset": 1,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6677,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
    ],
    "dataSize": 2,
    "index": 6673,
    "retOffset": 1,
}
BL2SDK.g_classFuncs["UObject"]["AddAdd_Byte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6681,
            "castTo": POINTER(c_ubyte),
            "offset": 1,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6680,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
    ],
    "dataSize": 2,
    "index": 6676,
    "retOffset": 1,
}
BL2SDK.g_classFuncs["UObject"]["SubtractSubtract_PreByte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6684,
            "castTo": POINTER(c_ubyte),
            "offset": 1,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6683,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
    ],
    "dataSize": 2,
    "index": 6679,
    "retOffset": 1,
}
BL2SDK.g_classFuncs["UObject"]["AddAdd_PreByte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6687,
            "castTo": POINTER(c_ubyte),
            "offset": 1,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6686,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
    ],
    "dataSize": 2,
    "index": 6682,
    "retOffset": 1,
}
BL2SDK.g_classFuncs["UObject"]["SubtractEqual_ByteByte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6691,
            "castTo": POINTER(c_ubyte),
            "offset": 2,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6689,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6690,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 1,
        },
    ],
    "dataSize": 3,
    "index": 6685,
    "retOffset": 2,
}
BL2SDK.g_classFuncs["UObject"]["AddEqual_ByteByte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6695,
            "castTo": POINTER(c_ubyte),
            "offset": 2,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6693,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6694,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 1,
        },
    ],
    "dataSize": 3,
    "index": 6688,
    "retOffset": 2,
}
BL2SDK.g_classFuncs["UObject"]["DivideEqual_ByteByte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6699,
            "castTo": POINTER(c_ubyte),
            "offset": 2,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6697,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6698,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 1,
        },
    ],
    "dataSize": 3,
    "index": 6692,
    "retOffset": 2,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_ByteFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6703,
            "castTo": POINTER(c_ubyte),
            "offset": 8,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6701,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6702,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 9,
    "index": 6696,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["MultiplyEqual_ByteByte"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6707,
            "castTo": POINTER(c_ubyte),
            "offset": 2,
        },
        {
            "name": "A",
            "isRet": True,
            "index": 6705,
            "isOutParm": True,
            "castTo": POINTER(c_ubyte),
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6706,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 1,
        },
    ],
    "dataSize": 3,
    "index": 6700,
    "retOffset": 2,
}
BL2SDK.g_classFuncs["UObject"]["OrOr_BoolBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6711,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6709,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6710,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6704,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["XorXor_BoolBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6715,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6713,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6714,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6708,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["AndAnd_BoolBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6719,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6717,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6718,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6712,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["NotEqual_BoolBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6723,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6721,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6722,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6716,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["EqualEqual_BoolBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6727,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "A",
            "index": 6725,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 6726,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 6720,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UObject"]["Not_PreBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6729,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "A",
            "index": 6728,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6724,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UDistributionVector"]["GetVectorValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6960,
            "cType": FVector,
            "castTo": POINTER(FVector),
            "offset": 8,
        },
        {
            "name": "F",
            "index": 6962,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "LastExtreme",
            "index": 6961,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 6959,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UDistributionFloat"]["GetFloatValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6950,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "F",
            "index": 6951,
            "optional": True,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 6949,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UHelpCommandlet"]["eventMain"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6976,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "Params",
            "index": 6977,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6975,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UCommandlet"]["eventMain"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 6942,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "Params",
            "index": 6943,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 6941,
    "retOffset": 12,
}
