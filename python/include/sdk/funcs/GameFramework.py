from cffi import FFI
import BL2SDK

ffi = FFI()

BL2SDK.g_classFuncs["AGamePlayerController"] = {}
BL2SDK.g_classFuncs["UNavMeshGoal_OutOfViewFrom"] = {}
BL2SDK.g_classFuncs["UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations"] = {}
BL2SDK.g_classFuncs["UGameStateObject"] = {}
BL2SDK.g_classFuncs["UGameStatsAggregator"] = {}
BL2SDK.g_classFuncs["APlayerCollectorGame"] = {}

BL2SDK.g_classFuncs["AGamePlayerController"]["ClientColorFade"] = {
    "fields": [
        {
            "name": "FadeColor",
            "index": 38433,
            "type": ffi.typeof("struct FColor"),
            "castTo": ffi.typeof("struct FColor*"),
            "flags": 64,
            "offset": 0,
        },
        {
            "name": "FromAlpha",
            "index": 38432,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "ToAlpha",
            "index": 38431,
            "type": "number",
            "castTo": ffi.typeof("unsigned char*"),
            "flags": 32,
            "offset": 5,
        },
        {
            "name": "FadeTime",
            "index": 38430,
            "type": "number",
            "castTo": ffi.typeof("float*"),
            "flags": 32,
            "offset": 8,
        },
    ],
    "dataSize": 12,
    "index": 38429,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["CallMemLeakCheck"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38428,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["StopMemLeakChecking"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38427,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["DoMemLeakChecking"] = {
    "fields": [
        {
            "name": "InTimeBetweenMemLeakChecks",
            "index": 38426,
            "type": "number",
            "castTo": ffi.typeof("float*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38425,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["eventWarmupPause"] = {
    "fields": [
        {
            "name": "bDesiredPauseState",
            "index": 38424,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        }
    ],
    "dataSize": 24,
    "index": 38421,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["CanUnpauseWarmup"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38420,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38419,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["GetCurrentMovie"] = {
    "fields": [
        {
            "name": "MovieName",
            "isRet": True,
            "index": 38418,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 0,
        }
    ],
    "dataSize": 12,
    "index": 38417,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["eventClientStopMovie"] = {
    "fields": [
        {
            "name": "DelayInSeconds",
            "index": 38416,
            "type": "number",
            "castTo": ffi.typeof("float*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bAllowMovieToFinish",
            "index": 38415,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "bForceStopNonSkippable",
            "index": 38414,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "bForceStopLoadingMovie",
            "index": 38413,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 12,
        },
    ],
    "dataSize": 16,
    "index": 38412,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["eventClientPlayMovie"] = {
    "fields": [
        {
            "name": "MovieName",
            "index": 38411,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "InStartOfRenderingMovieFrame",
            "index": 38410,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "InEndOfRenderingMovieFrame",
            "index": 38409,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 16,
        },
        {
            "name": "bRestrictPausing",
            "index": 38408,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 20,
        },
        {
            "name": "bPlayOnceFromStream",
            "index": 38407,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 24,
        },
        {
            "name": "bOnlyBackButtonSkipsMovie",
            "index": 38406,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 28,
        },
    ],
    "dataSize": 32,
    "index": 38405,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["KeepPlayingLoadingMovie"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38404,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["ShowLoadingMovie"] = {
    "fields": [
        {
            "name": "bShowMovie",
            "index": 38403,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "bPauseAfterHide",
            "index": 38402,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 4,
        },
        {
            "name": "PauseDuration",
            "index": 38401,
            "optional": True,
            "type": "number",
            "castTo": ffi.typeof("float*"),
            "flags": 32,
            "offset": 8,
        },
        {
            "name": "KeepPlayingDuration",
            "index": 38400,
            "optional": True,
            "type": "number",
            "castTo": ffi.typeof("float*"),
            "flags": 32,
            "offset": 12,
        },
        {
            "name": "bOverridePreviousDelays",
            "index": 38399,
            "optional": True,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 16,
        },
    ],
    "dataSize": 20,
    "index": 38398,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["SetSoundMode"] = {
    "fields": [
        {
            "name": "InSoundModeName",
            "index": 38397,
            "type": ffi.typeof("struct FName"),
            "castTo": ffi.typeof("struct FName*"),
            "flags": 2,
            "offset": 0,
        }
    ],
    "dataSize": 16,
    "index": 38396,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["DoForceFeedbackForScreenShake"] = {
    "fields": [
        {
            "name": "ShakeData",
            "index": 38390,
            "className": "UCameraShake",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "Scale",
            "index": 38389,
            "type": "number",
            "castTo": ffi.typeof("float*"),
            "flags": 32,
            "offset": 4,
        },
    ],
    "dataSize": 24,
    "index": 38388,
}
BL2SDK.g_classFuncs["AGamePlayerController"]["GetUIPlayerIndex"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38387,
            "castTo": ffi.typeof("int*"),
            "offset": 0,
        }
    ],
    "dataSize": 4,
    "index": 38386,
    "retOffset": 0,
}
BL2SDK.g_classFuncs["UNavMeshGoal_OutOfViewFrom"]["Recycle"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38573,
}
BL2SDK.g_classFuncs["UNavMeshGoal_OutOfViewFrom"]["MustBeHiddenFromThisPoint"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38570,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 16,
        },
        {
            "name": "NavHandle",
            "index": 38572,
            "className": "UNavigationHandle",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "InOutOfViewLocation",
            "index": 38571,
            "type": ffi.typeof("struct FVector"),
            "castTo": ffi.typeof("struct FVector*"),
            "flags": 64,
            "offset": 4,
        },
    ],
    "dataSize": 24,
    "index": 38569,
    "retOffset": 16,
}
BL2SDK.g_classFuncs["UNavMeshGoal_OutOfViewFrom"]["RecycleNative"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38568,
}
BL2SDK.g_classFuncs["UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations"][
    "Recycle"
] = {"fields": [], "dataSize": 0, "index": 38587}
BL2SDK.g_classFuncs["UNavMeshPath_BiasAgainstPolysWithinDistanceOfLocations"][
    "BiasAgainstPolysWithinDistanceOfLocations"
] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38582,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 44,
        },
        {
            "name": "NavHandle",
            "index": 38586,
            "className": "UNavigationHandle",
            "castTo": ffi.typeof("struct UObject**"),
            "flags": 16,
            "offset": 0,
        },
        {
            "name": "InLocation",
            "index": 38585,
            "type": ffi.typeof("struct FVector"),
            "castTo": ffi.typeof("struct FVector*"),
            "flags": 64,
            "offset": 4,
        },
        {
            "name": "InRotation",
            "index": 38584,
            "type": ffi.typeof("struct FRotator"),
            "castTo": ffi.typeof("struct FRotator*"),
            "flags": 64,
            "offset": 16,
        },
        {
            "name": "InDistanceToCheck",
            "index": 38583,
            "type": "number",
            "castTo": ffi.typeof("float*"),
            "flags": 32,
            "offset": 28,
        },
        {
            "name": "InLocationsToCheck",
            "index": 38581,
            "type": ffi.typeof("struct TArray_FVector"),
            "castTo": ffi.typeof("struct TArray_FVector*"),
            "flags": 8,
            "offset": 32,
        },
    ],
    "dataSize": 52,
    "index": 38579,
    "retOffset": 44,
}
BL2SDK.g_classFuncs["UGameStateObject"]["Reset"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38478,
}
BL2SDK.g_classFuncs["UGameStateObject"]["eventPreProcessStream"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38477,
}
BL2SDK.g_classFuncs["UGameStatsAggregator"]["GetAggregateMappingIDs"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38555,
            "castTo": ffi.typeof("BOOL*"),
            "offset": 12,
        },
        {
            "name": "EventID",
            "index": 38558,
            "type": "number",
            "castTo": ffi.typeof("int*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "AggregateID",
            "isRet": True,
            "index": 38557,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 4,
        },
        {
            "name": "TargetAggregateID",
            "isRet": True,
            "index": 38556,
            "isOutParm": True,
            "castTo": ffi.typeof("int*"),
            "offset": 8,
        },
    ],
    "dataSize": 16,
    "index": 38554,
    "retOffset": 12,
}
BL2SDK.g_classFuncs["UGameStatsAggregator"]["Reset"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38553,
}
BL2SDK.g_classFuncs["UGameStatsAggregator"]["eventPostProcessStream"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38552,
}
BL2SDK.g_classFuncs["UGameStatsAggregator"]["eventPreProcessStream"] = {
    "fields": [],
    "dataSize": 0,
    "index": 38551,
}
BL2SDK.g_classFuncs["APlayerCollectorGame"]["eventGetSeamlessTravelActorList"] = {
    "fields": [
        {
            "name": "bToEntry",
            "index": 38600,
            "type": "boolean",
            "castTo": ffi.typeof("BOOL*"),
            "flags": 32,
            "offset": 0,
        },
        {
            "name": "ActorList",
            "isRet": True,
            "index": 38599,
            "isOutParm": True,
            "cType": ffi.typeof("struct TArray_AActorPtr"),
            "castTo": ffi.typeof("struct TArray_AActorPtr*"),
            "TArray": True,
            "offset": 4,
        },
    ],
    "dataSize": 16,
    "index": 38597,
}
BL2SDK.g_classFuncs["APlayerCollectorGame"]["eventLogin"] = {
    "fields": [
        {
            "name": "ReturnValue",
            "isRet": True,
            "index": 38592,
            "castTo": ffi.typeof("struct APlayerController**"),
            "offset": 60,
        },
        {
            "name": "Portal",
            "index": 38596,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 0,
        },
        {
            "name": "Options",
            "index": 38595,
            "type": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "flags": 4,
            "offset": 12,
        },
        {
            "name": "UniqueId",
            "index": 38594,
            "type": ffi.typeof("struct FUniqueNetId"),
            "castTo": ffi.typeof("struct FUniqueNetId*"),
            "flags": 64,
            "offset": 24,
        },
        {
            "name": "ErrorMessage",
            "isRet": True,
            "index": 38593,
            "isOutParm": True,
            "cType": ffi.typeof("struct FString"),
            "castTo": ffi.typeof("struct FString*"),
            "TArray": True,
            "offset": 48,
        },
    ],
    "dataSize": 68,
    "index": 38591,
    "retOffset": 60,
}
