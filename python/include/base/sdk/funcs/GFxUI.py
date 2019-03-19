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

BL2SDK.g_classFuncs["UGFxAction_Invoke"] = {}
BL2SDK.g_classFuncs["UGFxClikWidget"] = {}
BL2SDK.g_classFuncs["UGFxAction_SetVariable"] = {}
BL2SDK.g_classFuncs["UGFxObject"] = {}
BL2SDK.g_classFuncs["UGFxMoviePlayer"] = {}
BL2SDK.g_classFuncs["UGFxAction_CloseMovie"] = {}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"] = {}
BL2SDK.g_classFuncs["UGFxFSCmdHandler"] = {}
BL2SDK.g_classFuncs["UGFxFSCmdHandler_Kismet"] = {}
BL2SDK.g_classFuncs["USwfMovie"] = {}
BL2SDK.g_classFuncs["UGFxAction_GetVariable"] = {}
BL2SDK.g_classFuncs["UGFxAction_OpenMovie"] = {}
BL2SDK.g_classFuncs["UGFxManager"] = {}
BL2SDK.g_classFuncs["UGFxInteraction"] = {}

BL2SDK.g_classFuncs["UGFxFSCmdHandler"]["eventFSCommand"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38338,
            "castTo": POINTER(c_bool),
            "offset": 32,
        },
        {
            "name": "Movie",
            "index": 38342,
            "className": "UGFxMoviePlayer",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Event",
            "index": 38341,
            "className": "UGFxEvent_FSCommand",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "Cmd",
            "index": 38340,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 8,
        },
        {
            "name": "Arg",
            "index": 38339,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 20,
        },
    ],
    "dataSize": 36,
    "index": 38337,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UGFxInteraction"]["CloseAllMoviePlayers"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38361,
}
BL2SDK.g_classFuncs["UGFxInteraction"]["NotifySplitscreenLayoutChanged"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38360,
}
BL2SDK.g_classFuncs["UGFxInteraction"]["NotifyPlayerRemoved"] = {
    "fields": [
        {
            "name": "PlayerIndex",
            "index": 38359,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "RemovedPlayer",
            "index": 38358,
            "className": "ULocalPlayer",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38357,
}
BL2SDK.g_classFuncs["UGFxInteraction"]["NotifyPlayerAdded"] = {
    "fields": [
        {
            "name": "PlayerIndex",
            "index": 38356,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "AddedPlayer",
            "index": 38355,
            "className": "ULocalPlayer",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38354,
}
BL2SDK.g_classFuncs["UGFxInteraction"]["NotifyGameSessionEnded"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38353,
}
BL2SDK.g_classFuncs["UGFxInteraction"]["GetFocusMovie"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38351,
            "castTo": POINTER(POINTER(UGFxMoviePlayer)),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 38352,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38350,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxManager"]["GetFocusMovie"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38376,
            "castTo": POINTER(POINTER(UGFxMoviePlayer)),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 38377,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38375,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxManager"]["eventLookupSound"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38370,
            "castTo": POINTER(POINTER(UAkEvent)),
            "offset": 8,
        },
        {
            "name": "UIEvent",
            "index": 38371,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38369,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxManager"]["eventShowDialog"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38367,
            "cType": FScriptInterface,
            "castTo": POINTER(FScriptInterface),
            "offset": 4,
        },
        {
            "name": "PC",
            "index": 38368,
            "className": "APlayerController",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 38366,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxManager"]["eventInit"] = {
    "fields": [
        {
            "name": "Def",
            "index": 38365,
            "className": "UGFxManagerDefinition",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38364,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["UnregisterGFxObject"] = {
    "fields": [
        {
            "name": "anObject",
            "index": 37624,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37622,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["RegisterGFxObject"] = {
    "fields": [
        {
            "name": "anObject",
            "index": 37626,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37623,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SendMousePos"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37625,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["IsShowingFlashMouse"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37629,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37627,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["HookSaveScreenshot"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37628,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["UpdateRenderTexture"] = {
    "fields": [
        {
            "name": "NewRenderTexture",
            "index": 37632,
            "className": "UTextureRenderTarget2D",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37630,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["OnInputKey"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37635,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ControllerId",
            "index": 37634,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ukey",
            "index": 37636,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "uevent",
            "index": 37637,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInputEvent",
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 37631,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["WantsInput"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37640,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "ukey",
            "index": 37639,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 37633,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["WantsControllerInput"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37643,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "ControllerId",
            "index": 37642,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 37638,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["InputKey"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37648,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ControllerId",
            "index": 37645,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ukey",
            "index": 37646,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "uevent",
            "index": 37647,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInputEvent",
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 37641,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetGFxManager"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37650,
            "castTo": POINTER(POINTER(UGFxManager)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37644,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ResolveDataStoreMarkup"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37653,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Markup",
            "index": 37652,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 37649,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["UpdateSplitscreenLayout"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37651,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ApplyPriorityVisibilityEffect"] = {
    "fields": [
        {
            "name": "bRemoveEffect",
            "index": 37656,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37654,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ApplyPriorityBlurEffect"] = {
    "fields": [
        {
            "name": "bRemoveEffect",
            "index": 37658,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37655,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventApplyPriorityEffect"] = {
    "fields": [
        {
            "name": "bRequestedBlurState",
            "index": 37660,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bRequestedHiddenState",
            "index": 37661,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 37657,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["PlaySoundFromTheme"] = {
    "fields": [
        {
            "name": "EventName",
            "index": 37667,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SoundThemeName",
            "index": 37669,
            "optional": True,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 37659,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventOnFocusLost"] = {
    "fields": [
        {
            "name": "LocalPlayerIndex",
            "index": 37674,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37666,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventOnFocusGained"] = {
    "fields": [
        {
            "name": "LocalPlayerIndex",
            "index": 37676,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37673,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ConsoleCommand"] = {
    "fields": [
        {
            "name": "Command",
            "index": 37678,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 37675,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetLP"] = {
    "fields": [
        {
            "name": "LocPlay",
            "index": 37679,
            "className": "ULocalPlayer",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37677,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetPC"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37681,
            "castTo": POINTER(POINTER(APlayerController)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37672,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetLP"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37683,
            "castTo": POINTER(POINTER(ULocalPlayer)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37680,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["Init"] = {
    "fields": [
        {
            "name": "LocPlay",
            "index": 37685,
            "optional": True,
            "className": "ULocalPlayer",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37682,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetWidgetPathBinding"] = {
    "fields": [
        {
            "name": "WidgetToBind",
            "index": 37691,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Path",
            "index": 37692,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 37684,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventPostWidgetInit"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37690,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventWidgetUnloaded"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37696,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "WidgetName",
            "index": 37695,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "WidgetPath",
            "index": 37697,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "Widget",
            "index": 37698,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 37693,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventWidgetInitialized"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37701,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "WidgetName",
            "index": 37700,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "WidgetPath",
            "index": 37702,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "Widget",
            "index": 37703,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 37694,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ActionScriptObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37706,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37705,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 37699,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ActionScriptString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37709,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37708,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 37704,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ActionScriptFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37712,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37711,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 37707,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ActionScriptInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37715,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37714,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 37710,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ActionScriptVoid"] = {
    "fields": [
        {
            "name": "Path",
            "index": 37717,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 37713,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ActionScript"] = {
    "fields": [
        {
            "name": "Path",
            "index": 37719,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 37716,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["Invoke"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37723,
            "cType": FASValue,
            "castTo": POINTER(FASValue),
            "offset": 24,
        },
        {
            "name": "Method",
            "index": 37721,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "args",
            "index": 37724,
            "type": TArray_FASValue,
            "castTo": POINTER(TArray_FASValue),
            "flags": 8,
            "offset": 12,
        },
    ],
    "dataSize": 48,
    "index": 37718,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ActionScriptSetFunction"] = {
    "fields": [
        {
            "name": "Object",
            "index": 37733,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 37734,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 37720,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["CreateArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37736,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37732,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["CreateObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37740,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 16,
        },
        {
            "name": "ASClass",
            "index": 37738,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Type",
            "index": 37739,
            "optional": True,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 37735,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableStringArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37745,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37742,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37743,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "index": 37746,
            "type": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "flags": 8,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37737,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableFloatArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37751,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37748,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37749,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "index": 37752,
            "type": TArray_float,
            "castTo": POINTER(TArray_float),
            "flags": 8,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37741,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableIntArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37757,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37754,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37755,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "index": 37758,
            "type": TArray_int,
            "castTo": POINTER(TArray_int),
            "flags": 8,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37747,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37763,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37760,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37761,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "index": 37764,
            "type": TArray_FASValue,
            "castTo": POINTER(TArray_FASValue),
            "flags": 8,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37753,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableStringArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37769,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37766,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37767,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "isRet": True,
            "index": 37770,
            "isOutParm": True,
            "cType": TArray_FString,
            "castTo": POINTER(TArray_FString),
            "TArray": True,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37759,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableFloatArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37775,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37772,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37773,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "isRet": True,
            "index": 37776,
            "isOutParm": True,
            "cType": TArray_float,
            "castTo": POINTER(TArray_float),
            "TArray": True,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37765,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableIntArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37781,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37778,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37779,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "isRet": True,
            "index": 37782,
            "isOutParm": True,
            "cType": TArray_int,
            "castTo": POINTER(TArray_int),
            "TArray": True,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37771,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37787,
            "castTo": POINTER(c_bool),
            "offset": 28,
        },
        {
            "name": "Path",
            "index": 37784,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Index",
            "index": 37785,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Arg",
            "isRet": True,
            "index": 37788,
            "isOutParm": True,
            "cType": TArray_FASValue,
            "castTo": POINTER(TArray_FASValue),
            "TArray": True,
            "offset": 16,
        },
    ],
    "dataSize": 32,
    "index": 37777,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableObject"] = {
    "fields": [
        {
            "name": "Path",
            "index": 37790,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Object",
            "index": 37791,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 37783,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableString"] = {
    "fields": [
        {
            "name": "Path",
            "index": 37793,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "S",
            "index": 37794,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 37789,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableNumber"] = {
    "fields": [
        {
            "name": "Path",
            "index": 37796,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "F",
            "index": 37797,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 37792,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariableBool"] = {
    "fields": [
        {
            "name": "Path",
            "index": 37799,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 37800,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 37795,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetVariable"] = {
    "fields": [
        {
            "name": "Path",
            "index": 37802,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Arg",
            "index": 37803,
            "type": FASValue,
            "castTo": POINTER(FASValue),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 37798,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37807,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 16,
        },
        {
            "name": "Path",
            "index": 37805,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Type",
            "index": 37806,
            "optional": True,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 37801,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37810,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37809,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 37804,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableNumber"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37813,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37812,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 37808,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariableBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37816,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37815,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 37811,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVariable"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37819,
            "cType": FASValue,
            "castTo": POINTER(FASValue),
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 37818,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 36,
    "index": 37814,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventFilterAxisInput"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37822,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "ControllerId",
            "index": 37821,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Key",
            "index": 37823,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "Delta",
            "index": 37824,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "DeltaTime",
            "index": 37825,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 37817,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventFilterButtonInput"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37828,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "ControllerId",
            "index": 37827,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ButtonName",
            "index": 37829,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "InputEvent",
            "index": 37830,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "EInputEvent",
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 37820,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["FlushPlayerInput"] = {
    "fields": [
        {
            "name": "capturekeysonly",
            "index": 37832,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37826,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ClearFocusIgnoreKeys"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37831,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["AddFocusIgnoreKey"] = {
    "fields": [
        {
            "name": "Key",
            "index": 37835,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 37833,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["ClearCaptureKeys"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37834,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["AddCaptureKey"] = {
    "fields": [
        {
            "name": "Key",
            "index": 37838,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 37836,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetMovieCanReceiveInput"] = {
    "fields": [
        {
            "name": "bCanReceiveInput",
            "index": 37840,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37837,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetMovieCanReceiveFocus"] = {
    "fields": [
        {
            "name": "bCanReceiveFocus",
            "index": 37842,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37839,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetSceneDPG"] = {
    "fields": [
        {
            "name": "NewDPG",
            "index": 37844,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "ESceneDepthPriorityGroup",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 37841,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetPerspective3D"] = {
    "fields": [
        {
            "name": "matPersp",
            "isRet": True,
            "index": 37846,
            "isOutParm": True,
            "cType": FMatrix,
            "castTo": POINTER(FMatrix),
            "offset": 0,
        }
    ],
    "dataSize": 64,
    "index": 37843,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetView3D"] = {
    "fields": [
        {
            "name": "matView",
            "isRet": True,
            "index": 37848,
            "isOutParm": True,
            "cType": FMatrix,
            "castTo": POINTER(FMatrix),
            "offset": 0,
        }
    ],
    "dataSize": 64,
    "index": 37845,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetVisibleFrameRect"] = {
    "fields": [
        {
            "name": "x0",
            "isRet": True,
            "index": 37850,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "y0",
            "isRet": True,
            "index": 37851,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "X1",
            "isRet": True,
            "index": 37852,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 8,
        },
        {
            "name": "Y1",
            "isRet": True,
            "index": 37853,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 37847,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetAlignment"] = {
    "fields": [
        {
            "name": "A",
            "index": 37855,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "GFxAlign",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 37849,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetViewScaleMode"] = {
    "fields": [
        {
            "name": "SM",
            "index": 37859,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "GFxScaleMode",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 37854,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventOnSetViewport"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37858,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetViewport"] = {
    "fields": [
        {
            "name": "X",
            "index": 37862,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Y",
            "index": 37863,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Width",
            "index": 37864,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "Height",
            "index": 37865,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 37860,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["GetGameViewportClient"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37867,
            "castTo": POINTER(POINTER(UGameViewportClient)),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37861,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetPriority"] = {
    "fields": [
        {
            "name": "NewPriority",
            "index": 37869,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 37866,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["PublishDataStoreValues"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37868,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["RefreshDataStoreBindings"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37870,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetExternalTexture"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37875,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "Resource",
            "index": 37873,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Texture",
            "index": 37874,
            "className": "UTexture",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 37871,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetExternalInterface"] = {
    "fields": [
        {
            "name": "H",
            "index": 37877,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37872,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetTimingMode"] = {
    "fields": [
        {
            "name": "Mode",
            "index": 37880,
            "type": c_ubyte,
            "castTo": POINTER(c_ubyte),
            "enumName": "GFxTimingMode",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 37876,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetMovieInfo"] = {
    "fields": [
        {
            "name": "Data",
            "index": 37883,
            "className": "USwfMovie",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37879,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventConditionalClearPause"] = {
    "fields": [],
    "dataSize": 4,
    "index": 37882,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventOnCleanup"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37884,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventOnClose"] = {
    "fields": [],
    "dataSize": 0,
    "index": 37886,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["Close"] = {
    "fields": [
        {
            "name": "Unload",
            "index": 37889,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37887,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["SetPause"] = {
    "fields": [
        {
            "name": "bPausePlayback",
            "index": 37891,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37888,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["OnPostAdvance"] = {
    "fields": [
        {
            "name": "DeltaTime",
            "index": 37893,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37890,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["PostAdvance"] = {
    "fields": [
        {
            "name": "DeltaTime",
            "index": 37894,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37892,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["Advance"] = {
    "fields": [
        {
            "name": "Time",
            "index": 37896,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37689,
}
BL2SDK.g_classFuncs["UGFxMoviePlayer"]["eventStart"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37898,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "StartPaused",
            "index": 37897,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 37895,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxObject"]["eventWidgetUnloaded"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38265,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "WidgetName",
            "index": 38268,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "WidgetPath",
            "index": 38267,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "Widget",
            "index": 38266,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 38264,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxObject"]["eventWidgetInitialized"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38260,
            "castTo": POINTER(c_bool),
            "offset": 20,
        },
        {
            "name": "WidgetName",
            "index": 38263,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "WidgetPath",
            "index": 38262,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "Widget",
            "index": 38261,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 38259,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxObject"]["MouseHitTest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38258,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38257,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxObject"]["HitTest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38253,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "TestX",
            "index": 38256,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TestY",
            "index": 38255,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "bTestShape",
            "index": 38254,
            "optional": True,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 38252,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["_HitTest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38248,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "TestX",
            "index": 38251,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TestY",
            "index": 38250,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "bTestShape",
            "index": 38249,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 38247,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetNextHighestDepth"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38246,
            "castTo": POINTER(c_float),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38245,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxObject"]["RemoveMovieClip"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38244,
}
BL2SDK.g_classFuncs["UGFxObject"]["AttachMovie"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38239,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 32,
        },
        {
            "name": "symbolname",
            "index": 38243,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "instancename",
            "index": 38242,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "Depth",
            "index": 38241,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "Type",
            "index": 38240,
            "optional": True,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 28,
        },
    ],
    "dataSize": 36,
    "index": 38238,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UGFxObject"]["CreateEmptyMovieClip"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38234,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 20,
        },
        {
            "name": "instancename",
            "index": 38237,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Depth",
            "index": 38236,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "Type",
            "index": 38235,
            "optional": True,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 38233,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxObject"]["GotoAndStopI"] = {
    "fields": [
        {
            "name": "frame",
            "index": 38232,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38231,
}
BL2SDK.g_classFuncs["UGFxObject"]["GotoAndStop"] = {
    "fields": [
        {
            "name": "frame",
            "index": 38230,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38229,
}
BL2SDK.g_classFuncs["UGFxObject"]["GotoAndPlayI"] = {
    "fields": [
        {
            "name": "frame",
            "index": 38228,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38227,
}
BL2SDK.g_classFuncs["UGFxObject"]["GotoAndPlay"] = {
    "fields": [
        {
            "name": "frame",
            "index": 38226,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38225,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptArray"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38223,
            "cType": TArray_UGFxObjectPtr,
            "castTo": POINTER(TArray_UGFxObjectPtr),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 38224,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 38221,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38219,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 12,
        },
        {
            "name": "Path",
            "index": 38220,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38218,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38216,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Method",
            "index": 38217,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 38215,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38213,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Method",
            "index": 38214,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38212,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptInt"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38210,
            "castTo": POINTER(c_int),
            "offset": 12,
        },
        {
            "name": "Method",
            "index": 38211,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38209,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptVoid"] = {
    "fields": [
        {
            "name": "Method",
            "index": 38208,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38207,
}
BL2SDK.g_classFuncs["UGFxObject"]["Invoke"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38205,
            "cType": FASValue,
            "castTo": POINTER(FASValue),
            "offset": 24,
        },
        {
            "name": "Member",
            "index": 38206,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "args",
            "index": 38204,
            "type": TArray_FASValue,
            "castTo": POINTER(TArray_FASValue),
            "flags": 8,
            "offset": 12,
        },
    ],
    "dataSize": 48,
    "index": 38202,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptSetFunctionOn"] = {
    "fields": [
        {
            "name": "Target",
            "index": 38201,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38200,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 38199,
}
BL2SDK.g_classFuncs["UGFxObject"]["ActionScriptSetFunction"] = {
    "fields": [
        {
            "name": "Member",
            "index": 38198,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38197,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementMemberString"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38196,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38195,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "S",
            "index": 38194,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 38193,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementMemberFloat"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38192,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38191,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "F",
            "index": 38190,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 38189,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementMemberBool"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38188,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38187,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "B",
            "index": 38186,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 38185,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementMemberObject"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38184,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38183,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "val",
            "index": 38182,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 38181,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementMember"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38180,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38179,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "Arg",
            "index": 38178,
            "type": FASValue,
            "castTo": POINTER(FASValue),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 40,
    "index": 38177,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementMemberString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38174,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 16,
        },
        {
            "name": "Index",
            "index": 38176,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38175,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 28,
    "index": 38173,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementMemberFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38170,
            "castTo": POINTER(c_float),
            "offset": 16,
        },
        {
            "name": "Index",
            "index": 38172,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38171,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 38169,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementMemberBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38166,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "Index",
            "index": 38168,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38167,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 38165,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementMemberObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38161,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 20,
        },
        {
            "name": "Index",
            "index": 38164,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38163,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "Type",
            "index": 38162,
            "optional": True,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 38160,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementMember"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38157,
            "cType": FASValue,
            "castTo": POINTER(FASValue),
            "offset": 16,
        },
        {
            "name": "Index",
            "index": 38159,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38158,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 40,
    "index": 38156,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementColorTransform"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38155,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "cxform",
            "index": 38154,
            "type": FASColorTransform,
            "castTo": POINTER(FASColorTransform),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 36,
    "index": 38153,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementPosition"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38152,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "X",
            "index": 38151,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "Y",
            "index": 38150,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38149,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementVisible"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38148,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Visible",
            "index": 38147,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38146,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementDisplayMatrix"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38145,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "M",
            "index": 38144,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 16,
        },
    ],
    "dataSize": 80,
    "index": 38143,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementDisplayInfo"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38142,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "D",
            "index": 38141,
            "type": FASDisplayInfo,
            "castTo": POINTER(FASDisplayInfo),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 48,
    "index": 38140,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementDisplayMatrix"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38138,
            "cType": FMatrix,
            "castTo": POINTER(FMatrix),
            "offset": 16,
        },
        {
            "name": "Index",
            "index": 38139,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 80,
    "index": 38137,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementDisplayInfo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38135,
            "cType": FASDisplayInfo,
            "castTo": POINTER(FASDisplayInfo),
            "offset": 4,
        },
        {
            "name": "Index",
            "index": 38136,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 48,
    "index": 38134,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementString"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38133,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "S",
            "index": 38132,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 38131,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementFloat"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38130,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "F",
            "index": 38129,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38128,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementBool"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38127,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 38126,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38125,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElementObject"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38124,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "val",
            "index": 38123,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38122,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetElement"] = {
    "fields": [
        {
            "name": "Index",
            "index": 38121,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Arg",
            "index": 38120,
            "type": FASValue,
            "castTo": POINTER(FASValue),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 28,
    "index": 38119,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38117,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "Index",
            "index": 38118,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38116,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38114,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
        {
            "name": "Index",
            "index": 38115,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38113,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38111,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "Index",
            "index": 38112,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38110,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElementObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38107,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 8,
        },
        {
            "name": "Index",
            "index": 38109,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Type",
            "index": 38108,
            "optional": True,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 38106,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetElement"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38104,
            "cType": FASValue,
            "castTo": POINTER(FASValue),
            "offset": 4,
        },
        {
            "name": "Index",
            "index": 38105,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 38103,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetText"] = {
    "fields": [
        {
            "name": "Text",
            "index": 38102,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "InContext",
            "index": 38101,
            "optional": True,
            "className": "UTranslationContext",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 38100,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetText"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38099,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38098,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetVisible"] = {
    "fields": [
        {
            "name": "Visible",
            "index": 38097,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38096,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetDisplayMatrix3D"] = {
    "fields": [
        {
            "name": "M",
            "index": 38095,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 64,
    "index": 38094,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetDisplayMatrix"] = {
    "fields": [
        {
            "name": "M",
            "index": 38093,
            "type": FMatrix,
            "castTo": POINTER(FMatrix),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 64,
    "index": 38092,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetColorTransform"] = {
    "fields": [
        {
            "name": "cxform",
            "index": 38091,
            "type": FASColorTransform,
            "castTo": POINTER(FASColorTransform),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 32,
    "index": 38090,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetPosition"] = {
    "fields": [
        {
            "name": "X",
            "index": 38089,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Y",
            "index": 38088,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 38087,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetDisplayInfo"] = {
    "fields": [
        {
            "name": "D",
            "isRet": True,
            "index": 38086,
            "isOutParm": True,
            "cType": FASDisplayInfo,
            "castTo": POINTER(FASDisplayInfo),
            "offset": 0,
        }
    ],
    "dataSize": 44,
    "index": 38085,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetDisplayMatrix"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38084,
            "cType": FMatrix,
            "castTo": POINTER(FMatrix),
            "offset": 0,
        }
    ],
    "dataSize": 64,
    "index": 38083,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetColorTransform"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38082,
            "cType": FASColorTransform,
            "castTo": POINTER(FASColorTransform),
            "offset": 0,
        }
    ],
    "dataSize": 32,
    "index": 38081,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetPosition"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38078,
            "castTo": POINTER(c_bool),
            "offset": 8,
        },
        {
            "name": "X",
            "isRet": True,
            "index": 38080,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 0,
        },
        {
            "name": "Y",
            "isRet": True,
            "index": 38079,
            "isOutParm": True,
            "castTo": POINTER(c_float),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 38077,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetDisplayInfo"] = {
    "fields": [
        {
            "name": "D",
            "isRet": True,
            "index": 38076,
            "isOutParm": True,
            "cType": FASDisplayInfo,
            "castTo": POINTER(FASDisplayInfo),
            "offset": 0,
        }
    ],
    "dataSize": 44,
    "index": 38075,
}
BL2SDK.g_classFuncs["UGFxObject"]["TranslateString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38072,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 16,
        },
        {
            "name": "StringToTranslate",
            "index": 38074,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "InContext",
            "index": 38073,
            "optional": True,
            "className": "UTranslationContext",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 38071,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetFunction"] = {
    "fields": [
        {
            "name": "Member",
            "index": 38070,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Context",
            "index": 38069,
            "className": "UObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "fname",
            "index": 38068,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 16,
        },
    ],
    "dataSize": 24,
    "index": 38067,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetObject"] = {
    "fields": [
        {
            "name": "Member",
            "index": 38066,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "val",
            "index": 38065,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 38064,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetString"] = {
    "fields": [
        {
            "name": "Member",
            "index": 38063,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "S",
            "index": 38062,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "InContext",
            "index": 38061,
            "optional": True,
            "className": "UTranslationContext",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 38060,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetFloat"] = {
    "fields": [
        {
            "name": "Member",
            "index": 38059,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "F",
            "index": 38058,
            "type": c_float,
            "castTo": POINTER(c_float),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 38057,
}
BL2SDK.g_classFuncs["UGFxObject"]["SetBool"] = {
    "fields": [
        {
            "name": "Member",
            "index": 38056,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 38055,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 38054,
}
BL2SDK.g_classFuncs["UGFxObject"]["Set"] = {
    "fields": [
        {
            "name": "Member",
            "index": 38053,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Arg",
            "index": 38052,
            "type": FASValue,
            "castTo": POINTER(FASValue),
            "flags": 64,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 38051,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38048,
            "castTo": POINTER(POINTER(UGFxObject)),
            "offset": 16,
        },
        {
            "name": "Member",
            "index": 38050,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Type",
            "index": 38049,
            "optional": True,
            "type": POINTER(UClass),
            "castTo": POINTER(POINTER(UClass)),
            "flags": 1,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 38047,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38045,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Member",
            "index": 38046,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 38044,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetFloat"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38042,
            "castTo": POINTER(c_float),
            "offset": 12,
        },
        {
            "name": "Member",
            "index": 38043,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38041,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["GetBool"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38039,
            "castTo": POINTER(c_bool),
            "offset": 12,
        },
        {
            "name": "Member",
            "index": 38040,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38038,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxObject"]["Get"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38036,
            "cType": FASValue,
            "castTo": POINTER(FASValue),
            "offset": 12,
        },
        {
            "name": "Member",
            "index": 38037,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 36,
    "index": 38035,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGFxClikWidget"]["ASRemoveAllEventListeners"] = {
    "fields": [
        {
            "name": "Event",
            "index": 38299,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38289,
}
BL2SDK.g_classFuncs["UGFxClikWidget"]["ASAddEventListener"] = {
    "fields": [
        {
            "name": "Type",
            "index": 38298,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "O",
            "index": 38297,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 12,
        },
        {
            "name": "func",
            "index": 38296,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 38286,
}
BL2SDK.g_classFuncs["UGFxClikWidget"]["SetListener"] = {
    "fields": [
        {
            "name": "O",
            "index": 38295,
            "className": "UGFxObject",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Member",
            "index": 38294,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "Listener",
            "index": 38293,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 38285,
}
BL2SDK.g_classFuncs["UGFxClikWidget"]["GetEventStringFromTypename"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38291,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 8,
        },
        {
            "name": "Typename",
            "index": 38292,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 32,
    "index": 38284,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UGFxClikWidget"]["RemoveAllEventListeners"] = {
    "fields": [
        {
            "name": "Event",
            "index": 38288,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38287,
}
BL2SDK.g_classFuncs["UGFxClikWidget"]["AddEventListener"] = {
    "fields": [
        {
            "name": "Type",
            "index": 38283,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Listener",
            "index": 38282,
            "type": FScriptDelegate,
            "castTo": POINTER(FScriptDelegate),
            "flags": 0,
            "offset": 8,
        },
    ],
    "dataSize": 36,
    "index": 38280,
}
BL2SDK.g_classFuncs["UGFxClikWidget"]["EventListener"] = {
    "fields": [
        {
            "name": "Data",
            "index": 38278,
            "type": FEventData,
            "castTo": POINTER(FEventData),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 36,
    "index": 38277,
}
BL2SDK.g_classFuncs["USwfMovie"]["GetPathForLoadMovie"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37613,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 37612,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxAction_CloseMovie"]["eventIsValidLevelSequenceObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37617,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37616,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxAction_GetVariable"]["eventIsValidLevelSequenceObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37621,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37620,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxAction_Invoke"]["eventIsValidLevelSequenceObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37979,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37978,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxAction_OpenMovie"]["eventIsValidLevelSequenceObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 37998,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 37997,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxAction_SetVariable"]["eventIsValidLevelSequenceObject"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38005,
            "castTo": POINTER(c_bool),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38004,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UGFxFSCmdHandler_Kismet"]["eventFSCommand"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38344,
            "castTo": POINTER(c_bool),
            "offset": 32,
        },
        {
            "name": "Movie",
            "index": 38348,
            "className": "UGFxMoviePlayer",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Event",
            "index": 38347,
            "className": "UGFxEvent_FSCommand",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "Cmd",
            "index": 38346,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 8,
        },
        {
            "name": "Arg",
            "index": 38345,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 20,
        },
    ],
    "dataSize": 36,
    "index": 38343,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["SaveSubscriberValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38325,
            "castTo": POINTER(c_bool),
            "offset": 16,
        },
        {
            "name": "out_BoundDataStores",
            "isRet": True,
            "index": 38324,
            "isOutParm": True,
            "cType": TArray_UUIDataStorePtr,
            "castTo": POINTER(TArray_UUIDataStorePtr),
            "TArray": True,
            "offset": 0,
        },
        {
            "name": "BindingIndex",
            "index": 38326,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 38322,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["ClearBoundDataStores"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38321,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["GetBoundDataStores"] = {
    "fields": [
        {
            "name": "out_BoundDataStores",
            "isRet": True,
            "index": 38320,
            "isOutParm": True,
            "cType": TArray_UUIDataStorePtr,
            "castTo": POINTER(TArray_UUIDataStorePtr),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38318,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["NotifyDataStoreValueUpdated"] = {
    "fields": [
        {
            "name": "SourceDataStore",
            "index": 38317,
            "className": "UUIDataStore",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "bValuesInvalidated",
            "index": 38316,
            "type": bool,
            "castTo": POINTER(c_bool),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "PropertyTag",
            "index": 38315,
            "type": FName,
            "castTo": POINTER(FName),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "SourceProvider",
            "index": 38314,
            "className": "UUIDataProvider",
            "castTo": POINTER(POINTER(UObject)),
            "flags": 16,
            "offset": 16,
        },
        {
            "name": "ArrayIndex",
            "index": 38313,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 24,
    "index": 38312,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["RefreshSubscriberValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38310,
            "castTo": POINTER(c_bool),
            "offset": 4,
        },
        {
            "name": "BindingIndex",
            "index": 38311,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 38309,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["GetDataStoreBinding"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38307,
            "cType": FString,
            "castTo": POINTER(FString),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "BindingIndex",
            "index": 38308,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 38306,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["SetDataStoreBinding"] = {
    "fields": [
        {
            "name": "MarkupText",
            "index": 38305,
            "type": FString,
            "castTo": POINTER(FString),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "BindingIndex",
            "index": 38304,
            "optional": True,
            "type": c_int,
            "castTo": POINTER(c_int),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 38303,
}
BL2SDK.g_classFuncs["UGFxDataStoreSubscriber"]["PublishValues"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38302,
}
