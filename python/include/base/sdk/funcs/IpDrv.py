from cffi import FFI
import BL2SDK

ffi = FFI()

BL2SDK.g_classFuncs["UOnlineNewsInterfaceMcp"] = {}
BL2SDK.g_classFuncs["UWebResponse"] = {}
BL2SDK.g_classFuncs["UMeshBeaconHost"] = {}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"] = {}
BL2SDK.g_classFuncs["UWebRequest"] = {}
BL2SDK.g_classFuncs["UPartyBeaconHost"] = {}
BL2SDK.g_classFuncs["AWebServer"] = {}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"] = {}
BL2SDK.g_classFuncs["UHelloWeb"] = {}
BL2SDK.g_classFuncs["UMeshBeacon"] = {}
BL2SDK.g_classFuncs["AInternetLink"] = {}
BL2SDK.g_classFuncs["UPartyBeaconClient"] = {}
BL2SDK.g_classFuncs["AWebConnection"] = {}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"] = {}
BL2SDK.g_classFuncs["ATcpLink"] = {}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"] = {}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"] = {}
BL2SDK.g_classFuncs["UMeshBeaconClient"] = {}
BL2SDK.g_classFuncs["UOnlineEventsInterfaceMcp"] = {}
BL2SDK.g_classFuncs["UImageServer"] = {}
BL2SDK.g_classFuncs["UWebApplication"] = {}
BL2SDK.g_classFuncs["UOnlineSubsystemCommonImpl"] = {}
BL2SDK.g_classFuncs["UPartyBeacon"] = {}


BL2SDK.g_classFuncs["AInternetLink"]["eventResolveFailed"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45219,
}
BL2SDK.g_classFuncs["AInternetLink"]["eventResolved"] = {
    "fields": [
        {
            "name": "Addr",
            "index": 45218,
            "type": ffi.typeof("struct FIpAddr"),
            "castTo": ffi.typeof("struct FIpAddr*"),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 45217,
}
BL2SDK.g_classFuncs["AInternetLink"]["GetLocalIP"] = {
    "fields": [
        {
            "name": "Arg",
            "isRet": True,
            "index": 45216,
            "isOutParm": True,
            "cType": ffi.typeof("struct FIpAddr"),
            "castTo": ffi.typeof("struct FIpAddr*"),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 45215,
}
BL2SDK.g_classFuncs["AInternetLink"]["StringToIpAddr"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45212,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "Str",
            "index": 45214,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Addr",
            "isRet": True,
            "index": 45213,
            "isOutParm": True,
            "cType": ffi.typeof("struct FIpAddr"),
            "castTo": ffi.typeof("struct FIpAddr*"),
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 45211,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["AInternetLink"]["IpAddrToString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45209,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 8,
        },
        {
            "name": "Arg",
            "index": 45210,
            "type": ffi.typeof("struct FIpAddr"),
            "castTo": ffi.typeof("struct FIpAddr*"),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 45208,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["AInternetLink"]["GetLastError"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45207,
            "castTo": ffi.typeof("int*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45206,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AInternetLink"]["Resolve"] = {
    "fields": [
        {
            "name": "Domain",
            "index": 45205,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45204,
}
BL2SDK.g_classFuncs["AInternetLink"]["ParseURL"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45198,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 52,
        },
        {
            "name": "URL",
            "index": 45203,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Addr",
            "isRet": True,
            "index": 45202,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "PortNum",
            "isRet": True,
            "index": 45201,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 24,
        },
        {
            "name": "LevelName",
            "isRet": True,
            "index": 45200,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "EntryName",
            "isRet": True,
            "index": 45199,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 40,
        },
    ],
    "dataSize": 56,
    "index": 45197,
    "retOffset": 52,
}
BL2SDK.g_classFuncs["AInternetLink"]["IsDataPending"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45196,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45195,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["ATcpLink"]["eventReceivedBinary"] = {
    "fields": [
        {
            "name": "Count",
            "index": 46238,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 46237,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 259,
    "index": 46236,
}
BL2SDK.g_classFuncs["ATcpLink"]["eventReceivedLine"] = {
    "fields": [
        {
            "name": "Line",
            "index": 46235,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46234,
}
BL2SDK.g_classFuncs["ATcpLink"]["eventReceivedText"] = {
    "fields": [
        {
            "name": "Text",
            "index": 46233,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46232,
}
BL2SDK.g_classFuncs["ATcpLink"]["eventClosed"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46231,
}
BL2SDK.g_classFuncs["ATcpLink"]["eventOpened"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46230,
}
BL2SDK.g_classFuncs["ATcpLink"]["eventAccepted"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46229,
}
BL2SDK.g_classFuncs["ATcpLink"]["ReadBinary"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46226,
            "castTo": ffi.typeof("int*"),
            "offset": 260,
        },
        {
            "name": "Count",
            "index": 46228,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "isRet": True,
            "index": 46227,
            "isOutParm": True,
            "castTo": ffi.typeof("unsigned char*"),
            "offset": 4,
        },
    ],
    "dataSize": 264,
    "index": 46225,
    "retOffset": 260,
}
BL2SDK.g_classFuncs["ATcpLink"]["ReadText"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46223,
            "castTo": ffi.typeof("int*"),
            "offset": 12,
        },
        {
            "name": "Str",
            "isRet": True,
            "index": 46224,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 46222,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["ATcpLink"]["SendBinary"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46219,
            "castTo": ffi.typeof("int*"),
            "offset": 260,
        },
        {
            "name": "Count",
            "index": 46221,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 46220,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 264,
    "index": 46218,
    "retOffset": 260,
}
BL2SDK.g_classFuncs["ATcpLink"]["SendText"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46216,
            "castTo": ffi.typeof("int*"),
            "offset": 12,
        },
        {
            "name": "Str",
            "index": 46217,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 46215,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["ATcpLink"]["IsConnected"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46214,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46213,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["ATcpLink"]["Close"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46212,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46211,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["ATcpLink"]["Open"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46209,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "Addr",
            "index": 46210,
            "type": ffi.typeof("struct FIpAddr"),
            "castTo": ffi.typeof("struct FIpAddr*"),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 46208,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["ATcpLink"]["Listen"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46207,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46206,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["ATcpLink"]["BindPort"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46203,
            "castTo": ffi.typeof("int*"),
            "offset": 8,
        },
        {
            "name": "PortNum",
            "index": 46205,
            "optional": True,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bUseNextAvailable",
            "index": 46204,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 46202,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineEventsInterfaceMcp"]["UploadMatchmakingStats"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45522,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 28,
        },
        {
            "name": "UniqueId",
            "index": 45524,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "MMStats",
            "index": 45523,
            "className": "UOnlineMatchmakingStats",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 24,
        },
    ],
    "dataSize": 32,
    "index": 45521,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UOnlineEventsInterfaceMcp"]["UpdatePlaylistPopulation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45518,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "PlaylistId",
            "index": 45520,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NumPlayers",
            "index": 45519,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45517,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineEventsInterfaceMcp"]["UploadGameplayEventsData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45515,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 36,
        },
        {
            "name": "UniqueId",
            "index": 45516,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "Payload",
            "isRet": True,
            "index": 45514,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_unsigned_char"),
            "castTo": ffi.typeof("struct TArray_unsigned_char*"),
            "TArray": True,
            "offset": 24,
        },
    ],
    "dataSize": 40,
    "index": 45512,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UOnlineEventsInterfaceMcp"]["UploadPlayerData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45507,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 44,
        },
        {
            "name": "UniqueId",
            "index": 45511,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "PlayerNick",
            "index": 45510,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 24,
        },
        {
            "name": "ProfileSettings",
            "index": 45509,
            "className": "UOnlineProfileSettings",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 36,
        },
        {
            "name": "PlayerStorage",
            "index": 45508,
            "className": "UOnlinePlayerStorage",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 40,
        },
    ],
    "dataSize": 48,
    "index": 45506,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UOnlineNewsInterfaceMcp"]["GetNews"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45828,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "LocalUserNum",
            "index": 45830,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewsType",
            "index": 45829,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EOnlineNewsType",
            "flags": 32,
            "offset": 1,
        },
    ],
    "dataSize": 20,
    "index": 45827,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineNewsInterfaceMcp"]["ClearReadNewsCompletedDelegate"] = {
    "fields": [
        {
            "name": "ReadGameNewsDelegate",
            "index": 45826,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45825,
}
BL2SDK.g_classFuncs["UOnlineNewsInterfaceMcp"]["AddReadNewsCompletedDelegate"] = {
    "fields": [
        {
            "name": "ReadNewsDelegate",
            "index": 45824,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45823,
}
BL2SDK.g_classFuncs["UOnlineNewsInterfaceMcp"]["OnReadNewsCompleted"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 45822,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewsType",
            "index": 45821,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EOnlineNewsType",
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 5,
    "index": 45807,
}
BL2SDK.g_classFuncs["UOnlineNewsInterfaceMcp"]["ReadNews"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45818,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 4,
        },
        {
            "name": "LocalUserNum",
            "index": 45820,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NewsType",
            "index": 45819,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EOnlineNewsType",
            "flags": 32,
            "offset": 1,
        },
    ],
    "dataSize": 8,
    "index": 45817,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"][
    "ClearShareTitleFileCompleteDelegate"
] = {
    "fields": [
        {
            "name": "ShareTitleFileCompleteDelegate",
            "index": 46044,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46043,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"][
    "AddShareTitleFileCompleteDelegate"
] = {
    "fields": [
        {
            "name": "ShareTitleFileCompleteDelegate",
            "index": 46042,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46041,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["ShareTitleFile"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46039,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "FileToShare",
            "index": 46040,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 46038,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["ClearDownloadedFile"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46036,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "Filename",
            "index": 46037,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 46035,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["ClearDownloadedFiles"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46034,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46033,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["GetTitleFileState"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46031,
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EOnlineEnumerationReadState",
            "offset": 12,
        },
        {
            "name": "Filename",
            "index": 46032,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 46030,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["GetTitleFileContents"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46028,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 24,
        },
        {
            "name": "Filename",
            "index": 46029,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "FileContents",
            "isRet": True,
            "index": 46027,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_unsigned_char"),
            "castTo": ffi.typeof("struct TArray_unsigned_char*"),
            "TArray": True,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 46025,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"][
    "ClearReadTitleFileCompleteDelegate"
] = {
    "fields": [
        {
            "name": "ReadTitleFileCompleteDelegate",
            "index": 46024,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 46023,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"][
    "AddReadTitleFileCompleteDelegate"
] = {
    "fields": [
        {
            "name": "ReadTitleFileCompleteDelegate",
            "index": 46022,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46021,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["ReadTitleFile"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46018,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 16,
        },
        {
            "name": "LocalUserNum",
            "index": 46020,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "FileToRead",
            "index": 46019,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 46017,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["OnShareTitleFileComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 46016,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Filename",
            "index": 46015,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 4,
        },
        {
            "name": "UGCHandle",
            "index": 46014,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 16,
        },
    ],
    "dataSize": 28,
    "index": 46004,
}
BL2SDK.g_classFuncs["UOnlineTitleFileDownloadMcp"]["OnReadTitleFileComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 46013,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Filename",
            "index": 46012,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 45996,
}
BL2SDK.g_classFuncs["UMeshBeacon"]["eventDestroyBeacon"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45250,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["SendHostNewGameSessionResponse"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45311,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 96,
        },
        {
            "name": "bSuccess",
            "index": 45315,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45314,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "SearchClass",
            "index": 45313,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 12,
        },
        {
            "name": "PlatformSpecificInfo",
            "isRet": True,
            "index": 45312,
            "isOutParm": True,
            "castTo": ffi.typeof("unsigned char*"),
            "offset": 16,
        },
    ],
    "dataSize": 100,
    "index": 45310,
    "retOffset": 96,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["OnCreateNewSessionRequestReceived"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45309,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SearchClass",
            "index": 45308,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 8,
        },
        {
            "name": "Players",
            "isRet": True,
            "index": 45307,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FPlayerMember"),
            "castTo": ffi.typeof("struct TArray_FPlayerMember*"),
            "TArray": True,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 45252,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["OnTravelRequestReceived"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45305,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SearchClass",
            "index": 45304,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 8,
        },
        {
            "name": "PlatformSpecificInfo",
            "isRet": True,
            "index": 45303,
            "isOutParm": True,
            "castTo": ffi.typeof("unsigned char*"),
            "offset": 12,
        },
    ],
    "dataSize": 92,
    "index": 45254,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["OnReceivedBandwidthTestResults"] = {
    "fields": [
        {
            "name": "TestType",
            "index": 45302,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestType",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TestResult",
            "index": 45301,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestResult",
            "flags": 32,
            "offset": 1,
        },
        {
            "name": "BandwidthStats",
            "isRet": True,
            "index": 45300,
            "isOutParm": True,
            "cType": ffi.typeof("struct FConnectionBandwidthStats"),
            "castTo": ffi.typeof("struct FConnectionBandwidthStats*"),
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 45256,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["OnReceivedBandwidthTestRequest"] = {
    "fields": [
        {
            "name": "TestType",
            "index": 45299,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestType",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 45258,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["OnConnectionRequestResult"] = {
    "fields": [
        {
            "name": "ConnectionResult",
            "index": 45298,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconConnectionResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 45260,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["BeginBandwidthTest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45295,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "TestType",
            "index": 45297,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestType",
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TestBufferSize",
            "index": 45296,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45294,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["RequestConnection"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45290,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 64,
        },
        {
            "name": "DesiredHost",
            "isRet": True,
            "index": 45293,
            "isOutParm": True,
            "cType": ffi.typeof("struct FOnlineGameSearchResult"),
            "castTo": ffi.typeof("struct FOnlineGameSearchResult*"),
            "offset": 0,
        },
        {
            "name": "ClientRequest",
            "isRet": True,
            "index": 45292,
            "isOutParm": True,
            "cType": ffi.typeof("struct FClientConnectionRequest"),
            "castTo": ffi.typeof("struct FClientConnectionRequest*"),
            "offset": 8,
        },
        {
            "name": "bRegisterSecureAddress",
            "index": 45291,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 60,
        },
    ],
    "dataSize": 68,
    "index": 45289,
    "retOffset": 64,
}
BL2SDK.g_classFuncs["UMeshBeaconClient"]["eventDestroyBeacon"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45288,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["OnReceivedClientCreateNewSessionResult"] = {
    "fields": [
        {
            "name": "bSucceeded",
            "index": 45401,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45400,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "SearchClass",
            "index": 45399,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 12,
        },
        {
            "name": "PlatformSpecificInfo",
            "isRet": True,
            "index": 45398,
            "isOutParm": True,
            "castTo": ffi.typeof("unsigned char*"),
            "offset": 16,
        },
    ],
    "dataSize": 96,
    "index": 45341,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["RequestClientCreateNewSession"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45394,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 48,
        },
        {
            "name": "PlayerNetId",
            "index": 45397,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45396,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 24,
        },
        {
            "name": "SearchClass",
            "index": 45395,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 32,
        },
        {
            "name": "Players",
            "isRet": True,
            "index": 45393,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FPlayerMember"),
            "castTo": ffi.typeof("struct TArray_FPlayerMember*"),
            "TArray": True,
            "offset": 36,
        },
    ],
    "dataSize": 52,
    "index": 45391,
    "retOffset": 48,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["TellClientsToTravel"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45390,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SearchClass",
            "index": 45389,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 8,
        },
        {
            "name": "PlatformSpecificInfo",
            "isRet": True,
            "index": 45388,
            "isOutParm": True,
            "castTo": ffi.typeof("unsigned char*"),
            "offset": 12,
        },
    ],
    "dataSize": 92,
    "index": 45387,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["OnAllPendingPlayersConnected"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45343,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["AllPlayersConnected"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45386,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "Players",
            "isRet": True,
            "index": 45385,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 45383,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["GetConnectionIndexForPlayer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45381,
            "castTo": ffi.typeof("int*"),
            "offset": 24,
        },
        {
            "name": "PlayerNetId",
            "index": 45382,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 45380,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["SetPendingPlayerConnections"] = {
    "fields": [
        {
            "name": "Players",
            "isRet": True,
            "index": 45379,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45377,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["OnFinishedBandwidthTest"] = {
    "fields": [
        {
            "name": "PlayerNetId",
            "index": 45376,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "TestType",
            "index": 45375,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestType",
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "TestResult",
            "index": 45374,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestResult",
            "flags": 32,
            "offset": 25,
        },
        {
            "name": "BandwidthStats",
            "isRet": True,
            "index": 45373,
            "isOutParm": True,
            "cType": ffi.typeof("struct FConnectionBandwidthStats"),
            "castTo": ffi.typeof("struct FConnectionBandwidthStats*"),
            "offset": 28,
        },
    ],
    "dataSize": 40,
    "index": 45345,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["OnStartedBandwidthTest"] = {
    "fields": [
        {
            "name": "PlayerNetId",
            "index": 45372,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "TestType",
            "index": 45371,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestType",
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 25,
    "index": 45347,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["OnReceivedClientConnectionRequest"] = {
    "fields": [
        {
            "name": "NewClientConnection",
            "isRet": True,
            "index": 45370,
            "isOutParm": True,
            "cType": ffi.typeof("struct FClientMeshBeaconConnection"),
            "castTo": ffi.typeof("struct FClientMeshBeaconConnection*"),
            "offset": 0,
        }
    ],
    "dataSize": 104,
    "index": 45349,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["AllowBandwidthTesting"] = {
    "fields": [
        {
            "name": "bEnabled",
            "index": 45369,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45368,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["CancelPendingBandwidthTests"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45367,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["HasPendingBandwidthTest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45366,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45365,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["CancelInProgressBandwidthTests"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45364,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["HasInProgressBandwidthTest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45363,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45362,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["RequestClientBandwidthTest"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45358,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 32,
        },
        {
            "name": "PlayerNetId",
            "index": 45361,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "TestType",
            "index": 45360,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EMeshBeaconBandwidthTestType",
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "TestBufferSize",
            "index": 45359,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 36,
    "index": 45357,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["eventDestroyBeacon"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45356,
}
BL2SDK.g_classFuncs["UMeshBeaconHost"]["InitHostBeacon"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45354,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 24,
        },
        {
            "name": "InOwningPlayerId",
            "index": 45355,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 45353,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UOnlineSubsystemCommonImpl"]["GetRegisteredPlayers"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45993,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "OutRegisteredPlayers",
            "isRet": True,
            "index": 45992,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 28,
    "index": 45990,
}
BL2SDK.g_classFuncs["UOnlineSubsystemCommonImpl"]["IsPlayerInSession"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45987,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 32,
        },
        {
            "name": "SessionName",
            "index": 45989,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "PlayerID",
            "index": 45988,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 36,
    "index": 45986,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UOnlineSubsystemCommonImpl"]["eventGetPlayerNicknameFromIndex"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45984,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "UserIndex",
            "index": 45985,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 45983,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["FindLocalServerAuthSession"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45491,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "ClientConnection",
            "index": 45492,
            "className": "UPlayer",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 45490,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["FindServerAuthSession"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45488,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "ServerConnection",
            "index": 45489,
            "className": "UPlayer",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 45487,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["FindLocalClientAuthSession"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45485,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "ServerConnection",
            "index": 45486,
            "className": "UPlayer",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 45484,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["FindClientAuthSession"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45482,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "ClientConnection",
            "index": 45483,
            "className": "UPlayer",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 45481,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthRetryServer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45480,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45479,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthKillClient"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45477,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 4,
        },
        {
            "name": "ClientConnection",
            "index": 45478,
            "className": "UPlayer",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 45476,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthBlobServer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45473,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "ClientConnection",
            "index": 45475,
            "className": "UPlayer",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "AuthBlobUID",
            "index": 45474,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45472,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthBlobClient"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45470,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 4,
        },
        {
            "name": "AuthBlobUID",
            "index": 45471,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 45469,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"][
    "ClearServerConnectionCloseDelegate"
] = {
    "fields": [
        {
            "name": "ServerConnectionCloseDelegate",
            "index": 45468,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45467,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddServerConnectionCloseDelegate"] = {
    "fields": [
        {
            "name": "ServerConnectionCloseDelegate",
            "index": 45466,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45465,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"][
    "ClearClientConnectionCloseDelegate"
] = {
    "fields": [
        {
            "name": "ClientConnectionCloseDelegate",
            "index": 45464,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45463,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddClientConnectionCloseDelegate"] = {
    "fields": [
        {
            "name": "ClientConnectionCloseDelegate",
            "index": 45462,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45461,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthRetryServerDelegate"] = {
    "fields": [
        {
            "name": "AuthRetryServerDelegate",
            "index": 45460,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45459,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthRetryServerDelegate"] = {
    "fields": [
        {
            "name": "AuthRetryServerDelegate",
            "index": 45458,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45457,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthKillClientDelegate"] = {
    "fields": [
        {
            "name": "AuthKillClientDelegate",
            "index": 45456,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45455,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthKillClientDelegate"] = {
    "fields": [
        {
            "name": "AuthKillClientDelegate",
            "index": 45454,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45453,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthCompleteServerDelegate"] = {
    "fields": [
        {
            "name": "AuthCompleteServerDelegate",
            "index": 45452,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45451,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthCompleteServerDelegate"] = {
    "fields": [
        {
            "name": "AuthCompleteServerDelegate",
            "index": 45450,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45449,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthCompleteClientDelegate"] = {
    "fields": [
        {
            "name": "AuthCompleteClientDelegate",
            "index": 45448,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45447,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthCompleteClientDelegate"] = {
    "fields": [
        {
            "name": "AuthCompleteClientDelegate",
            "index": 45446,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45445,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"][
    "ClearAuthBlobReceivedServerDelegate"
] = {
    "fields": [
        {
            "name": "AuthBlobReceivedServerDelegate",
            "index": 45444,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45443,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthBlobReceivedServerDelegate"] = {
    "fields": [
        {
            "name": "AuthBlobReceivedServerDelegate",
            "index": 45442,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45441,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"][
    "ClearAuthBlobReceivedClientDelegate"
] = {
    "fields": [
        {
            "name": "AuthBlobReceivedClientDelegate",
            "index": 45440,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45439,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthBlobReceivedClientDelegate"] = {
    "fields": [
        {
            "name": "AuthBlobReceivedClientDelegate",
            "index": 45438,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45437,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthRequestServerDelegate"] = {
    "fields": [
        {
            "name": "AuthRequestServerDelegate",
            "index": 45436,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45435,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthRequestServerDelegate"] = {
    "fields": [
        {
            "name": "AuthRequestServerDelegate",
            "index": 45434,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45433,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthRequestClientDelegate"] = {
    "fields": [
        {
            "name": "AuthRequestClientDelegate",
            "index": 45432,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45431,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthRequestClientDelegate"] = {
    "fields": [
        {
            "name": "AuthRequestClientDelegate",
            "index": 45430,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45429,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthReadyDelegate"] = {
    "fields": [
        {
            "name": "AuthReadyDelegate",
            "index": 45428,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45427,
}
BL2SDK.g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthReadyDelegate"] = {
    "fields": [
        {
            "name": "AuthReadyDelegate",
            "index": 45426,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45425,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["HasPendingBootInvite"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45801,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45800,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["CancelNATNegotiation"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45799,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["ClearQosStatusChangedDelegate"] = {
    "fields": [
        {
            "name": "QosStatusChangedDelegate",
            "index": 45798,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45797,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["AddQosStatusChangedDelegate"] = {
    "fields": [
        {
            "name": "QosStatusChangedDelegate",
            "index": 45796,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45795,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnQosStatusChanged"] = {
    "fields": [
        {
            "name": "NumComplete",
            "index": 45794,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NumTotal",
            "index": 45793,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 45559,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "BindPlatformSpecificSessionToSearch"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45789,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 88,
        },
        {
            "name": "SearchingPlayerNum",
            "index": 45792,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SearchSettings",
            "index": 45791,
            "className": "UOnlineGameSearch",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 4,
        },
        {
            "name": "PlatformSpecificInfo",
            "index": 45790,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 92,
    "index": 45788,
    "retOffset": 88,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ReadPlatformSpecificSessionInfoBySessionName"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45785,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 88,
        },
        {
            "name": "SessionName",
            "index": 45787,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "PlatformSpecificInfo",
            "isRet": True,
            "index": 45786,
            "isOutParm": True,
            "castTo": ffi.typeof("unsigned char*"),
            "offset": 8,
        },
    ],
    "dataSize": 92,
    "index": 45784,
    "retOffset": 88,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["ReadPlatformSpecificSessionInfo"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45781,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 88,
        },
        {
            "name": "DesiredGame",
            "isRet": True,
            "index": 45783,
            "isOutParm": True,
            "cType": ffi.typeof("struct FOnlineGameSearchResult"),
            "castTo": ffi.typeof("struct FOnlineGameSearchResult*"),
            "offset": 0,
        },
        {
            "name": "PlatformSpecificInfo",
            "isRet": True,
            "index": 45782,
            "isOutParm": True,
            "castTo": ffi.typeof("unsigned char*"),
            "offset": 8,
        },
    ],
    "dataSize": 92,
    "index": 45780,
    "retOffset": 88,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["QueryNonAdvertisedData"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45777,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "StartAt",
            "index": 45779,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "NumberToQuery",
            "index": 45778,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45776,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearJoinMigratedOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "JoinMigratedOnlineGameCompleteDelegate",
            "index": 45775,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45774,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddJoinMigratedOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "JoinMigratedOnlineGameCompleteDelegate",
            "index": 45773,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45772,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnJoinMigratedOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45771,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45770,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45542,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["JoinMigratedOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45766,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "PlayerNum",
            "index": 45769,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45768,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "DesiredGame",
            "isRet": True,
            "index": 45767,
            "isOutParm": True,
            "cType": ffi.typeof("struct FOnlineGameSearchResult"),
            "castTo": ffi.typeof("struct FOnlineGameSearchResult*"),
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 45765,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearMigrateOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "MigrateOnlineGameCompleteDelegate",
            "index": 45764,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45763,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddMigrateOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "MigrateOnlineGameCompleteDelegate",
            "index": 45762,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45761,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnMigrateOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45760,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45759,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45539,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["MigrateOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45756,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "HostingPlayerNum",
            "index": 45758,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45757,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 45755,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearRecalculateSkillRatingCompleteDelegate"
] = {
    "fields": [
        {
            "name": "RecalculateSkillRatingGameCompleteDelegate",
            "index": 45754,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45753,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddRecalculateSkillRatingCompleteDelegate"
] = {
    "fields": [
        {
            "name": "RecalculateSkillRatingCompleteDelegate",
            "index": 45752,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45751,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnRecalculateSkillRatingComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45750,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45749,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45545,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["RecalculateSkillRating"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45747,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "SessionName",
            "index": 45748,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Players",
            "isRet": True,
            "index": 45746,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 45744,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearGameInviteProcessingStartedDelegate"
] = {
    "fields": [
        {
            "name": "GameInviteProcessingStartedDelegate",
            "index": 45743,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45742,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddGameInviteProcessingStartedDelegate"
] = {
    "fields": [
        {
            "name": "GameInviteProcessingStartedDelegate",
            "index": 45741,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45740,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnGameInviteProcessingStarted"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45564,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["AcceptGameInvite"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45737,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "LocalUserNum",
            "index": 45739,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45738,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 45736,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["ClearGameInviteAcceptedDelegate"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 45735,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "GameInviteAcceptedDelegate",
            "index": 45734,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 45733,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["AddGameInviteAcceptedDelegate"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 45732,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "GameInviteAcceptedDelegate",
            "index": 45731,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 45730,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnGameInviteAccepted"] = {
    "fields": [
        {
            "name": "InviteResult",
            "isRet": True,
            "index": 45729,
            "isOutParm": True,
            "cType": ffi.typeof("struct FOnlineGameSearchResult"),
            "castTo": ffi.typeof("struct FOnlineGameSearchResult*"),
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 45566,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["GetArbitratedPlayers"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45727,
            "cType": ffi.typeof("struct TArray_FOnlineArbitrationRegistrant"),
            "castTo": ffi.typeof("struct TArray_FOnlineArbitrationRegistrant*"),
            "TArray": True,
            "offset": 8,
        },
        {
            "name": "SessionName",
            "index": 45728,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 45725,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearArbitrationRegistrationCompleteDelegate"
] = {
    "fields": [
        {
            "name": "ArbitrationRegistrationCompleteDelegate",
            "index": 45724,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45723,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddArbitrationRegistrationCompleteDelegate"
] = {
    "fields": [
        {
            "name": "ArbitrationRegistrationCompleteDelegate",
            "index": 45722,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45721,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnArbitrationRegistrationComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45720,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45719,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45568,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["RegisterForArbitration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45717,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "SessionName",
            "index": 45718,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45716,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearEndOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "EndOnlineGameCompleteDelegate",
            "index": 45715,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45714,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["AddEndOnlineGameCompleteDelegate"] = {
    "fields": [
        {
            "name": "EndOnlineGameCompleteDelegate",
            "index": 45713,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45712,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnEndOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45711,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45710,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45551,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["EndOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45708,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "SessionName",
            "index": 45709,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45707,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearStartOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "StartOnlineGameCompleteDelegate",
            "index": 45706,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45705,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddStartOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "StartOnlineGameCompleteDelegate",
            "index": 45704,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45703,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnStartOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45702,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45701,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45548,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["StartOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45699,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "SessionName",
            "index": 45700,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45698,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearUnregisterPlayerCompleteDelegate"
] = {
    "fields": [
        {
            "name": "UnregisterPlayerCompleteDelegate",
            "index": 45697,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45696,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddUnregisterPlayerCompleteDelegate"
] = {
    "fields": [
        {
            "name": "UnregisterPlayerCompleteDelegate",
            "index": 45695,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45694,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnUnregisterPlayerComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45693,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "PlayerID",
            "index": 45692,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "bWasSuccessful",
            "index": 45691,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 36,
    "index": 45572,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["UnregisterPlayers"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45689,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "SessionName",
            "index": 45690,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Players",
            "isRet": True,
            "index": 45688,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 45686,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["UnregisterPlayer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45683,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 32,
        },
        {
            "name": "SessionName",
            "index": 45685,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "PlayerID",
            "index": 45684,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 8,
        },
    ],
    "dataSize": 36,
    "index": 45682,
    "retOffset": 32,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearRegisterPlayerCompleteDelegate"
] = {
    "fields": [
        {
            "name": "RegisterPlayerCompleteDelegate",
            "index": 45681,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45680,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["AddRegisterPlayerCompleteDelegate"] = {
    "fields": [
        {
            "name": "RegisterPlayerCompleteDelegate",
            "index": 45679,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45678,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnRegisterPlayerComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45677,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "PlayerID",
            "index": 45676,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "bWasSuccessful",
            "index": 45675,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 36,
    "index": 45574,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["RegisterPlayers"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45673,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "SessionName",
            "index": 45674,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "Players",
            "isRet": True,
            "index": 45672,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 45670,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["RegisterPlayer"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45666,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 36,
        },
        {
            "name": "SessionName",
            "index": 45669,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "PlayerID",
            "index": 45668,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "bWasInvited",
            "index": 45667,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 32,
        },
    ],
    "dataSize": 40,
    "index": 45665,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["GetResolvedConnectString"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45662,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "SessionName",
            "index": 45664,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "ConnectInfo",
            "isRet": True,
            "index": 45663,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 45661,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearJoinOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "JoinOnlineGameCompleteDelegate",
            "index": 45660,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45659,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["AddJoinOnlineGameCompleteDelegate"] = {
    "fields": [
        {
            "name": "JoinOnlineGameCompleteDelegate",
            "index": 45658,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45657,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnJoinOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45656,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45655,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45536,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["JoinOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45651,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "PlayerNum",
            "index": 45654,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45653,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "DesiredGame",
            "isRet": True,
            "index": 45652,
            "isOutParm": True,
            "cType": ffi.typeof("struct FOnlineGameSearchResult"),
            "castTo": ffi.typeof("struct FOnlineGameSearchResult*"),
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 45650,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["FreeSearchResults"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45648,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 4,
        },
        {
            "name": "Search",
            "index": 45649,
            "className": "UOnlineGameSearch",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 45647,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearCancelFindOnlineGamesCompleteDelegate"
] = {
    "fields": [
        {
            "name": "CancelFindOnlineGamesCompleteDelegate",
            "index": 45646,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45645,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddCancelFindOnlineGamesCompleteDelegate"
] = {
    "fields": [
        {
            "name": "CancelFindOnlineGamesCompleteDelegate",
            "index": 45644,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45643,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnCancelFindOnlineGamesComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 45642,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45557,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["CancelFindOnlineGames"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45641,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45640,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearFindOnlineGamesCompleteDelegate"
] = {
    "fields": [
        {
            "name": "FindOnlineGamesCompleteDelegate",
            "index": 45639,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45638,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddFindOnlineGamesCompleteDelegate"
] = {
    "fields": [
        {
            "name": "FindOnlineGamesCompleteDelegate",
            "index": 45637,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45636,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["FindOnlineGames"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45633,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "SearchingPlayerNum",
            "index": 45635,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SearchSettings",
            "index": 45634,
            "className": "UOnlineGameSearch",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45632,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearDestroyOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "DestroyOnlineGameCompleteDelegate",
            "index": 45631,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45630,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddDestroyOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "DestroyOnlineGameCompleteDelegate",
            "index": 45629,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45628,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnDestroyOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45627,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45626,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45533,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["DestroyOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45624,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "SessionName",
            "index": 45625,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45623,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearUpdateOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "UpdateOnlineGameCompleteDelegate",
            "index": 45622,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45621,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddUpdateOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "UpdateOnlineGameCompleteDelegate",
            "index": 45620,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45619,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnUpdateOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45618,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45617,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45530,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["UpdateOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45613,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 16,
        },
        {
            "name": "SessionName",
            "index": 45616,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "UpdatedGameSettings",
            "index": 45615,
            "className": "UOnlineGameSettings",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 8,
        },
        {
            "name": "bShouldRefreshOnlineData",
            "index": 45614,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 45612,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "ClearCreateOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "CreateOnlineGameCompleteDelegate",
            "index": 45611,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45610,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"][
    "AddCreateOnlineGameCompleteDelegate"
] = {
    "fields": [
        {
            "name": "CreateOnlineGameCompleteDelegate",
            "index": 45609,
            "type": ffi.typeof("struct FScriptDelegate"),
            "castTo": ffi.typeof("struct FScriptDelegate*"),
            "flags": 0,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45608,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnCreateOnlineGameComplete"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 45607,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "bWasSuccessful",
            "index": 45606,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 45527,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["CreateOnlineGame"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45602,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 16,
        },
        {
            "name": "HostingPlayerNum",
            "index": 45605,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SessionName",
            "index": 45604,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 4,
        },
        {
            "name": "NewGameSettings",
            "index": 45603,
            "className": "UOnlineGameSettings",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 45601,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["GetGameSearch"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45600,
            "castTo": ffi.typeof("struct UOnlineGameSearch**"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45599,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["GetGameSettings"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45597,
            "castTo": ffi.typeof("struct UOnlineGameSettings**"),
            "offset": 8,
        },
        {
            "name": "SessionName",
            "index": 45598,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45596,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlineGameInterfaceImpl"]["OnFindOnlineGamesComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 45595,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45554,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["ParseDataCenterId"] = {
    "fields": [
        {
            "name": "Data",
            "isRet": True,
            "index": 45971,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_unsigned_char"),
            "castTo": ffi.typeof("struct TArray_unsigned_char*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45969,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["OnReadDataCenterIdComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 45968,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Filename",
            "index": 45967,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 28,
    "index": 45964,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["ReadDataCenterId"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 45963,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 45962,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["eventSendPlaylistPopulationUpdate"] = {
    "fields": [
        {
            "name": "NumPlayers",
            "index": 45961,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 45959,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetPopulationInfoFromPlaylist"] = {
    "fields": [
        {
            "name": "PlaylistId",
            "index": 45958,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "WorldwideTotal",
            "isRet": True,
            "index": 45957,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "RegionTotal",
            "isRet": True,
            "index": 45956,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 45955,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["ParsePlaylistPopulationData"] = {
    "fields": [
        {
            "name": "Data",
            "isRet": True,
            "index": 45954,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_unsigned_char"),
            "castTo": ffi.typeof("struct TArray_unsigned_char*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45952,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["OnPlaylistPopulationDataUpdated"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45842,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["OnReadPlaylistPopulationComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 45951,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Filename",
            "index": 45950,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 28,
    "index": 45947,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["ReadPlaylistPopulation"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 45946,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 8,
    "index": 45945,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["Reset"] = {
    "fields": [],
    "dataSize": 4,
    "index": 45944,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetContentIdsFromPlaylist"] = {
    "fields": [
        {
            "name": "PlaylistId",
            "index": 45943,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ContentIds",
            "isRet": True,
            "index": 45942,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_int"),
            "castTo": ffi.typeof("struct TArray_int*"),
            "TArray": True,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 45940,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetInventorySwapFromPlaylist"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45937,
            "castTo": ffi.typeof("struct UClass**"),
            "offset": 8,
        },
        {
            "name": "PlaylistId",
            "index": 45939,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "SourceInventory",
            "index": 45938,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 45936,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetMapCycleFromPlaylist"] = {
    "fields": [
        {
            "name": "PlaylistId",
            "index": 45935,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "MapCycle",
            "isRet": True,
            "index": 45934,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FName"),
            "castTo": ffi.typeof("struct TArray_FName*"),
            "TArray": True,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 45932,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetUrlFromPlaylist"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45930,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "PlaylistId",
            "index": 45931,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 20,
    "index": 45929,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetMatchType"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45927,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "PlaylistId",
            "index": 45928,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45926,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["IsPlaylistArbitrated"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45924,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 4,
        },
        {
            "name": "PlaylistId",
            "index": 45925,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45923,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetLoadBalanceIdFromPlaylist"] = {
    "fields": [
        {
            "name": "PlaylistId",
            "index": 45922,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "LoadBalanceId",
            "isRet": True,
            "index": 45921,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45920,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetTeamInfoFromPlaylist"] = {
    "fields": [
        {
            "name": "PlaylistId",
            "index": 45919,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "TeamSize",
            "isRet": True,
            "index": 45918,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "TeamCount",
            "isRet": True,
            "index": 45917,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 8,
        },
        {
            "name": "MaxPartySize",
            "isRet": True,
            "index": 45916,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 45915,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["PlaylistSupportsDedicatedServers"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45913,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 4,
        },
        {
            "name": "PlaylistId",
            "index": 45914,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 45912,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["HasAnyGameSettings"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45910,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 4,
        },
        {
            "name": "PlaylistId",
            "index": 45911,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 45909,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["GetGameSettings"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45906,
            "castTo": ffi.typeof("struct UOnlineGameSettings**"),
            "offset": 8,
        },
        {
            "name": "PlaylistId",
            "index": 45908,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "GameSettingsId",
            "index": 45907,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 45905,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["FinalizePlaylistObjects"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45904,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["OnReadTitleFileComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 45903,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Filename",
            "index": 45902,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 24,
    "index": 45901,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["ShouldRefreshPlaylists"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45900,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45899,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["DetermineFilesToDownload"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45898,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["DownloadPlaylist"] = {
    "fields": [
        {
            "name": "LocalUserNum",
            "index": 45897,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 45896,
}
BL2SDK.g_classFuncs["UOnlinePlaylistManager"]["OnReadPlaylistComplete"] = {
    "fields": [
        {
            "name": "bWasSuccessful",
            "index": 45895,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 45844,
}
BL2SDK.g_classFuncs["UPartyBeacon"]["OnDestroyComplete"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46046,
}
BL2SDK.g_classFuncs["UPartyBeacon"]["eventDestroyBeacon"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46070,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["eventDestroyBeacon"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46112,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["CancelReservation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46110,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 24,
        },
        {
            "name": "CancellingPartyLeader",
            "index": 46111,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 46109,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["RequestReservationUpdate"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46106,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 44,
        },
        {
            "name": "DesiredHost",
            "isRet": True,
            "index": 46108,
            "isOutParm": True,
            "cType": ffi.typeof("struct FOnlineGameSearchResult"),
            "castTo": ffi.typeof("struct FOnlineGameSearchResult*"),
            "offset": 0,
        },
        {
            "name": "RequestingPartyLeader",
            "index": 46107,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "PlayersToAdd",
            "isRet": True,
            "index": 46105,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FPlayerReservation"),
            "castTo": ffi.typeof("struct TArray_FPlayerReservation*"),
            "TArray": True,
            "offset": 32,
        },
    ],
    "dataSize": 48,
    "index": 46103,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["RequestReservation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46100,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 44,
        },
        {
            "name": "DesiredHost",
            "isRet": True,
            "index": 46102,
            "isOutParm": True,
            "cType": ffi.typeof("struct FOnlineGameSearchResult"),
            "castTo": ffi.typeof("struct FOnlineGameSearchResult*"),
            "offset": 0,
        },
        {
            "name": "RequestingPartyLeader",
            "index": 46101,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 8,
        },
        {
            "name": "Players",
            "isRet": True,
            "index": 46099,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FPlayerReservation"),
            "castTo": ffi.typeof("struct TArray_FPlayerReservation*"),
            "TArray": True,
            "offset": 32,
        },
    ],
    "dataSize": 48,
    "index": 46097,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["OnHostHasCancelled"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46072,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["OnHostIsReady"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46074,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["OnTravelRequestReceived"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 46096,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SearchClass",
            "index": 46095,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 8,
        },
        {
            "name": "PlatformSpecificInfo",
            "index": 46094,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 92,
    "index": 46076,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["OnReservationCountUpdated"] = {
    "fields": [
        {
            "name": "ReservationRemaining",
            "index": 46093,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46078,
}
BL2SDK.g_classFuncs["UPartyBeaconClient"]["OnReservationRequestComplete"] = {
    "fields": [
        {
            "name": "ReservationResult",
            "index": 46092,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EPartyReservationResult",
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 1,
    "index": 46080,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["GetMaxAvailableTeamSize"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46194,
            "castTo": ffi.typeof("int*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46193,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["GetPartyLeaders"] = {
    "fields": [
        {
            "name": "PartyLeaders",
            "isRet": True,
            "index": 46192,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 46190,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["GetPlayers"] = {
    "fields": [
        {
            "name": "Players",
            "isRet": True,
            "index": 46188,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FUniqueNetId"),
            "castTo": ffi.typeof("struct TArray_FUniqueNetId*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 72,
    "index": 46186,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["AppendReservationSkillsToSearch"] = {
    "fields": [
        {
            "name": "Search",
            "index": 46185,
            "className": "UOnlineGameSearch",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46184,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["eventUnregisterParty"] = {
    "fields": [
        {
            "name": "PartyLeader",
            "index": 46183,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 88,
    "index": 46181,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["eventUnregisterPartyMembers"] = {
    "fields": [],
    "dataSize": 64,
    "index": 46179,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["eventRegisterPartyMembers"] = {
    "fields": [],
    "dataSize": 80,
    "index": 46175,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["AreReservationsFull"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46174,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46173,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["TellClientsHostHasCancelled"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46172,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["TellClientsHostIsReady"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46171,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["TellClientsToTravel"] = {
    "fields": [
        {
            "name": "SessionName",
            "index": 46170,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SearchClass",
            "index": 46169,
            "type": ffi.typeof("struct UClass*"),
            "castTo": ffi.typeof("struct UClass**"),
            "flags": 1,
            "offset": 8,
        },
        {
            "name": "PlatformSpecificInfo",
            "index": 46168,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 92,
    "index": 46167,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["eventDestroyBeacon"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46166,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["OnClientCancellationReceived"] = {
    "fields": [
        {
            "name": "PartyLeader",
            "index": 46165,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        }
    ],
    "dataSize": 24,
    "index": 46122,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["OnReservationsFull"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46124,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["OnReservationChange"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46126,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["HandlePlayerLogout"] = {
    "fields": [
        {
            "name": "PlayerID",
            "index": 46164,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "bMaintainParty",
            "index": 46163,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 46162,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["GetExistingReservation"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46160,
            "castTo": ffi.typeof("int*"),
            "offset": 24,
        },
        {
            "name": "PartyLeader",
            "isRet": True,
            "index": 46161,
            "isOutParm": True,
            "cType": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "offset": 0,
        },
    ],
    "dataSize": 28,
    "index": 46159,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["UpdatePartyReservationEntry"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46157,
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EPartyReservationResult",
            "offset": 36,
        },
        {
            "name": "PartyLeader",
            "index": 46158,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "PlayerMembers",
            "isRet": True,
            "index": 46156,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FPlayerReservation"),
            "castTo": ffi.typeof("struct TArray_FPlayerReservation*"),
            "TArray": True,
            "offset": 24,
        },
    ],
    "dataSize": 37,
    "index": 46154,
    "retOffset": 36,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["AddPartyReservationEntry"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46150,
            "castTo": ffi.typeof("unsigned char*"),
            "enumName": "EPartyReservationResult",
            "offset": 44,
        },
        {
            "name": "PartyLeader",
            "index": 46153,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "PlayerMembers",
            "isRet": True,
            "index": 46149,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FPlayerReservation"),
            "castTo": ffi.typeof("struct TArray_FPlayerReservation*"),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "TeamNum",
            "index": 46152,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 36,
        },
        {
            "name": "bIsHost",
            "index": 46151,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 40,
        },
    ],
    "dataSize": 45,
    "index": 46147,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["InitHostBeacon"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46141,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 24,
        },
        {
            "name": "InNumTeams",
            "index": 46146,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "InNumPlayersPerTeam",
            "index": 46145,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "InNumReservations",
            "index": 46144,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "InSessionName",
            "index": 46143,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 12,
        },
        {
            "name": "InForceTeamNum",
            "index": 46142,
            "optional": True,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 20,
        },
    ],
    "dataSize": 28,
    "index": 46140,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UPartyBeaconHost"]["PauseReservationRequests"] = {
    "fields": [
        {
            "name": "bPause",
            "index": 46139,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46138,
}
BL2SDK.g_classFuncs["UWebRequest"]["GetHexDigit"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46375,
            "castTo": ffi.typeof("int*"),
            "offset": 12,
        },
        {
            "name": "D",
            "index": 46376,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 46374,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UWebRequest"]["DecodeFormData"] = {
    "fields": [
        {
            "name": "Data",
            "index": 46373,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 68,
    "index": 46370,
}
BL2SDK.g_classFuncs["UWebRequest"]["ProcessHeaderString"] = {
    "fields": [
        {
            "name": "S",
            "index": 46369,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 46368,
}
BL2SDK.g_classFuncs["UWebRequest"]["Dump"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46367,
}
BL2SDK.g_classFuncs["UWebRequest"]["GetVariables"] = {
    "fields": [
        {
            "name": "varNames",
            "isRet": True,
            "index": 46366,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FString"),
            "castTo": ffi.typeof("struct TArray_FString*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46364,
}
BL2SDK.g_classFuncs["UWebRequest"]["GetVariableNumber"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45165,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 28,
        },
        {
            "name": "VariableName",
            "index": 46363,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Number",
            "index": 46362,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "DefaultValue",
            "index": 46361,
            "optional": True,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 16,
        },
    ],
    "dataSize": 40,
    "index": 45164,
    "retOffset": 28,
}
BL2SDK.g_classFuncs["UWebRequest"]["GetVariableCount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45163,
            "castTo": ffi.typeof("int*"),
            "offset": 12,
        },
        {
            "name": "VariableName",
            "index": 46360,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 45162,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UWebRequest"]["GetVariable"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45161,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "VariableName",
            "index": 46359,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "DefaultValue",
            "index": 46358,
            "optional": True,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 45160,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UWebRequest"]["AddVariable"] = {
    "fields": [
        {
            "name": "VariableName",
            "index": 46357,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 46356,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 46355,
}
BL2SDK.g_classFuncs["UWebRequest"]["GetHeaders"] = {
    "fields": [
        {
            "name": "headers",
            "isRet": True,
            "index": 46354,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FString"),
            "castTo": ffi.typeof("struct TArray_FString*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46352,
}
BL2SDK.g_classFuncs["UWebRequest"]["GetHeader"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46349,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 24,
        },
        {
            "name": "HeaderName",
            "index": 46351,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "DefaultValue",
            "index": 46350,
            "optional": True,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 46348,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UWebRequest"]["AddHeader"] = {
    "fields": [
        {
            "name": "HeaderName",
            "index": 46347,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 46346,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 24,
    "index": 46345,
}
BL2SDK.g_classFuncs["UWebRequest"]["EncodeBase64"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46343,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Decoded",
            "index": 46344,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 46342,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UWebRequest"]["DecodeBase64"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46340,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Encoded",
            "index": 46341,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 46339,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UWebResponse"]["SentResponse"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46433,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46432,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UWebResponse"]["SentText"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46431,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46430,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UWebResponse"]["Redirect"] = {
    "fields": [
        {
            "name": "URL",
            "index": 46429,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46428,
}
BL2SDK.g_classFuncs["UWebResponse"]["SendStandardHeaders"] = {
    "fields": [
        {
            "name": "ContentType",
            "index": 46426,
            "optional": True,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "bCache",
            "index": 46425,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 46424,
}
BL2SDK.g_classFuncs["UWebResponse"]["HTTPError"] = {
    "fields": [
        {
            "name": "ErrorNum",
            "index": 46423,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "Data",
            "index": 46422,
            "optional": True,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 46421,
}
BL2SDK.g_classFuncs["UWebResponse"]["SendHeaders"] = {
    "fields": [],
    "dataSize": 12,
    "index": 46419,
}
BL2SDK.g_classFuncs["UWebResponse"]["AddHeader"] = {
    "fields": [
        {
            "name": "Header",
            "index": 46418,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "bReplace",
            "index": 46417,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 48,
    "index": 46414,
}
BL2SDK.g_classFuncs["UWebResponse"]["HTTPHeader"] = {
    "fields": [
        {
            "name": "Header",
            "index": 46413,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46412,
}
BL2SDK.g_classFuncs["UWebResponse"]["HTTPResponse"] = {
    "fields": [
        {
            "name": "Header",
            "index": 46411,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46410,
}
BL2SDK.g_classFuncs["UWebResponse"]["FailAuthentication"] = {
    "fields": [
        {
            "name": "Realm",
            "index": 46409,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46408,
}
BL2SDK.g_classFuncs["UWebResponse"]["SendCachedFile"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46405,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 24,
        },
        {
            "name": "Filename",
            "index": 46407,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "ContentType",
            "index": 46406,
            "optional": True,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 12,
        },
    ],
    "dataSize": 28,
    "index": 46404,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["UWebResponse"]["eventSendBinary"] = {
    "fields": [
        {
            "name": "Count",
            "index": 46403,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "B",
            "index": 46402,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 259,
    "index": 46401,
}
BL2SDK.g_classFuncs["UWebResponse"]["eventSendText"] = {
    "fields": [
        {
            "name": "Text",
            "index": 46400,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "bNoCRLF",
            "index": 46399,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 46398,
}
BL2SDK.g_classFuncs["UWebResponse"]["Dump"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46397,
}
BL2SDK.g_classFuncs["UWebResponse"]["GetHTTPExpiration"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46395,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 4,
        },
        {
            "name": "OffsetSeconds",
            "index": 46396,
            "optional": True,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 46394,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UWebResponse"]["LoadParsedUHTM"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46392,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 12,
        },
        {
            "name": "Filename",
            "index": 46393,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 24,
    "index": 46391,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UWebResponse"]["IncludeBinaryFile"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45178,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "Filename",
            "index": 46390,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 45177,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UWebResponse"]["IncludeUHTM"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45168,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "Filename",
            "index": 46389,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 45167,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UWebResponse"]["ClearSubst"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46388,
}
BL2SDK.g_classFuncs["UWebResponse"]["Subst"] = {
    "fields": [
        {
            "name": "Variable",
            "index": 46387,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Value",
            "index": 46386,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "bClear",
            "index": 46385,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 24,
        },
    ],
    "dataSize": 28,
    "index": 45166,
}
BL2SDK.g_classFuncs["UWebResponse"]["FileExists"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45176,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "Filename",
            "index": 46384,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
    ],
    "dataSize": 16,
    "index": 45175,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"][
    "eventGetMatchTypeForPlaylistId"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46292,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "PlaylistId",
            "index": 46293,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
    ],
    "dataSize": 8,
    "index": 46291,
    "retOffset": 4,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetOnlinePlaylistProvider"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46287,
            "castTo": ffi.typeof("struct UOnlinePlaylistProvider**"),
            "offset": 16,
        },
        {
            "name": "ProviderTag",
            "index": 46290,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "PlaylistId",
            "index": 46289,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "ProviderIndex",
            "isRet": True,
            "index": 46288,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 12,
        },
    ],
    "dataSize": 128,
    "index": 46285,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetPlaylistProvider"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46281,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 16,
        },
        {
            "name": "ProviderTag",
            "index": 46284,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "ProviderIndex",
            "index": 46283,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "out_Provider",
            "isRet": True,
            "index": 46282,
            "isOutParm": True,
            "castTo": ffi.typeof("struct UUIResourceDataProvider**"),
            "offset": 12,
        },
    ],
    "dataSize": 20,
    "index": 46280,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["FindProviderIndexByFieldValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46276,
            "castTo": ffi.typeof("int*"),
            "offset": 116,
        },
        {
            "name": "ProviderTag",
            "index": 46279,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SearchField",
            "index": 46278,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "ValueToSearchFor",
            "isRet": True,
            "index": 46277,
            "isOutParm": True,
            "cType": ffi.typeof("struct FUIProviderScriptFieldValue"),
            "castTo": ffi.typeof("struct FUIProviderScriptFieldValue*"),
            "offset": 16,
        },
    ],
    "dataSize": 120,
    "index": 46275,
    "retOffset": 116,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetProviderFieldValue"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46270,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 120,
        },
        {
            "name": "ProviderTag",
            "index": 46274,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "SearchField",
            "index": 46273,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 8,
        },
        {
            "name": "ProviderIndex",
            "index": 46272,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "out_FieldValue",
            "isRet": True,
            "index": 46271,
            "isOutParm": True,
            "cType": ffi.typeof("struct FUIProviderScriptFieldValue"),
            "castTo": ffi.typeof("struct FUIProviderScriptFieldValue*"),
            "offset": 20,
        },
    ],
    "dataSize": 124,
    "index": 46269,
    "retOffset": 120,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetResourceProviderFields"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46267,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "ProviderTag",
            "index": 46268,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "ProviderFieldTags",
            "isRet": True,
            "index": 46266,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_FName"),
            "castTo": ffi.typeof("struct TArray_FName*"),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 46264,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetResourceProviders"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46262,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 20,
        },
        {
            "name": "ProviderTag",
            "index": 46263,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
        {
            "name": "out_Providers",
            "isRet": True,
            "index": 46261,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_UUIResourceDataProviderPtr"),
            "castTo": ffi.typeof("struct TArray_UUIResourceDataProviderPtr*"),
            "TArray": True,
            "offset": 8,
        },
    ],
    "dataSize": 24,
    "index": 46259,
    "retOffset": 20,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetProviderCount"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46257,
            "castTo": ffi.typeof("int*"),
            "offset": 8,
        },
        {
            "name": "ProviderTag",
            "index": 46258,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        },
    ],
    "dataSize": 12,
    "index": 46256,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UUIDataStore_OnlinePlaylists"]["eventInit"] = {
    "fields": [],
    "dataSize": 4,
    "index": 46255,
}
BL2SDK.g_classFuncs["UWebApplication"]["PostQuery"] = {
    "fields": [
        {
            "name": "Request",
            "index": 45150,
            "className": "UWebRequest",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Response",
            "index": 45149,
            "className": "UWebResponse",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 45148,
}
BL2SDK.g_classFuncs["UWebApplication"]["Query"] = {
    "fields": [
        {
            "name": "Request",
            "index": 45147,
            "className": "UWebRequest",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Response",
            "index": 45146,
            "className": "UWebResponse",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 8,
    "index": 45145,
}
BL2SDK.g_classFuncs["UWebApplication"]["PreQuery"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 45142,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 8,
        },
        {
            "name": "Request",
            "index": 45144,
            "className": "UWebRequest",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Response",
            "index": 45143,
            "className": "UWebResponse",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45141,
    "retOffset": 8,
}
BL2SDK.g_classFuncs["UWebApplication"]["CleanupApp"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45140,
}
BL2SDK.g_classFuncs["UWebApplication"]["Cleanup"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45139,
}
BL2SDK.g_classFuncs["UWebApplication"]["Init"] = {
    "fields": [],
    "dataSize": 0,
    "index": 45138,
}
BL2SDK.g_classFuncs["AWebServer"]["GetApplication"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46320,
            "castTo": ffi.typeof("struct UWebApplication**"),
            "offset": 24,
        },
        {
            "name": "URI",
            "index": 46451,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "SubURI",
            "isRet": True,
            "index": 46450,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 12,
        },
    ],
    "dataSize": 36,
    "index": 46319,
    "retOffset": 24,
}
BL2SDK.g_classFuncs["AWebServer"]["eventLostChild"] = {
    "fields": [
        {
            "name": "C",
            "index": 46449,
            "className": "AActor",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46448,
}
BL2SDK.g_classFuncs["AWebServer"]["eventGainedChild"] = {
    "fields": [
        {
            "name": "C",
            "index": 46447,
            "className": "AActor",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46446,
}
BL2SDK.g_classFuncs["AWebServer"]["eventDestroyed"] = {
    "fields": [],
    "dataSize": 4,
    "index": 46445,
}
BL2SDK.g_classFuncs["AWebServer"]["PostBeginPlay"] = {
    "fields": [],
    "dataSize": 28,
    "index": 46442,
}
BL2SDK.g_classFuncs["UHelloWeb"]["eventQuery"] = {
    "fields": [
        {
            "name": "Request",
            "index": 45156,
            "className": "UWebRequest",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Response",
            "index": 45155,
            "className": "UWebResponse",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 12,
    "index": 45154,
}
BL2SDK.g_classFuncs["UHelloWeb"]["Init"] = {"fields": [], "dataSize": 0, "index": 45153}
BL2SDK.g_classFuncs["UImageServer"]["eventQuery"] = {
    "fields": [
        {
            "name": "Request",
            "index": 45174,
            "className": "UWebRequest",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Response",
            "index": 45173,
            "className": "UWebResponse",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 4,
        },
    ],
    "dataSize": 20,
    "index": 45171,
}
BL2SDK.g_classFuncs["AWebConnection"]["IsHanging"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 46334,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 46333,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AWebConnection"]["Cleanup"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46332,
}
BL2SDK.g_classFuncs["AWebConnection"]["CheckRawBytes"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46330,
}
BL2SDK.g_classFuncs["AWebConnection"]["EndOfHeaders"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46328,
}
BL2SDK.g_classFuncs["AWebConnection"]["CreateResponseObject"] = {
    "fields": [],
    "dataSize": 4,
    "index": 46325,
}
BL2SDK.g_classFuncs["AWebConnection"]["ProcessPost"] = {
    "fields": [
        {
            "name": "S",
            "index": 46324,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 46323,
}
BL2SDK.g_classFuncs["AWebConnection"]["ProcessGet"] = {
    "fields": [
        {
            "name": "S",
            "index": 46317,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 46316,
}
BL2SDK.g_classFuncs["AWebConnection"]["ProcessHead"] = {
    "fields": [
        {
            "name": "S",
            "index": 46315,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46314,
}
BL2SDK.g_classFuncs["AWebConnection"]["ReceivedLine"] = {
    "fields": [
        {
            "name": "S",
            "index": 46313,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 46312,
}
BL2SDK.g_classFuncs["AWebConnection"]["eventReceivedText"] = {
    "fields": [
        {
            "name": "Text",
            "index": 46311,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        }
    ],
    "dataSize": 28,
    "index": 46309,
}
BL2SDK.g_classFuncs["AWebConnection"]["eventTimer"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46308,
}
BL2SDK.g_classFuncs["AWebConnection"]["eventClosed"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46307,
}
BL2SDK.g_classFuncs["AWebConnection"]["eventAccepted"] = {
    "fields": [],
    "dataSize": 0,
    "index": 46305,
}
