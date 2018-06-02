local ffi = require("ffi")
local c = g_classFuncs

	["ClientColorFade"] = {
		fields = {
			{
				name = "FadeColor",
				index = 38434,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "FromAlpha",
				index = 38433,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 4
			},
			{
				name = "ToAlpha",
				index = 38432,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 5
			},
			{
				name = "FadeTime",
				index = 38431,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38430,
	},
	["CallMemLeakCheck"] = {
		fields = {
		},
		dataSize = 0,
		index = 38429,
	},
	["StopMemLeakChecking"] = {
		fields = {
		},
		dataSize = 0,
		index = 38428,
	},
	["DoMemLeakChecking"] = {
		fields = {
			{
				name = "InTimeBetweenMemLeakChecks",
				index = 38427,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38426,
	},
	["eventWarmupPause"] = {
		fields = {
			{
				name = "bDesiredPauseState",
				index = 38425,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 24,
		index = 38422,
	},
	["CanUnpauseWarmup"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38421,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38420,
		retOffset = 0,
	},
	["GetCurrentMovie"] = {
		fields = {
			{
				name = "MovieName",
				isRet = true,
				index = 38419,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 38418,
	},
	["eventClientStopMovie"] = {
		fields = {
			{
				name = "DelayInSeconds",
				index = 38417,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bAllowMovieToFinish",
				index = 38416,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bForceStopNonSkippable",
				index = 38415,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
			{
				name = "bForceStopLoadingMovie",
				index = 38414,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 38413,
	},
	["eventClientPlayMovie"] = {
		fields = {
			{
				name = "MovieName",
				index = 38412,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "InStartOfRenderingMovieFrame",
				index = 38411,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "InEndOfRenderingMovieFrame",
				index = 38410,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "bRestrictPausing",
				index = 38409,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 20
			},
			{
				name = "bPlayOnceFromStream",
				index = 38408,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
			{
				name = "bOnlyBackButtonSkipsMovie",
				index = 38407,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 38406,
	},
	["KeepPlayingLoadingMovie"] = {
		fields = {
		},
		dataSize = 0,
		index = 38405,
	},
	["ShowLoadingMovie"] = {
		fields = {
			{
				name = "bShowMovie",
				index = 38404,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bPauseAfterHide",
				index = 38403,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
			{
				name = "PauseDuration",
				index = 38402,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "KeepPlayingDuration",
				index = 38401,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "bOverridePreviousDelays",
				index = 38400,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 20,
		index = 38399,
	},
	["SetSoundMode"] = {
		fields = {
			{
				name = "InSoundModeName",
				index = 38398,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 16,
		index = 38397,
	},
	["DoForceFeedbackForScreenShake"] = {
		fields = {
			{
				name = "ShakeData",
				index = 38391,
				className = "UCameraShake",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Scale",
				index = 38390,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 24,
		index = 38389,
	},
	["GetUIPlayerIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38388,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38387,
		retOffset = 0,
	},
	["Recycle"] = {
		fields = {
		},
		dataSize = 0,
		index = 38574,
	},
	["MustBeHiddenFromThisPoint"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38571,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "NavHandle",
				index = 38573,
				className = "UNavigationHandle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "InOutOfViewLocation",
				index = 38572,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 24,
		index = 38570,
		retOffset = 16,
	},
	["RecycleNative"] = {
		fields = {
		},
		dataSize = 0,
		index = 38569,
	},
	["Recycle"] = {
		fields = {
		},
		dataSize = 0,
		index = 38588,
	},
	["BiasAgainstPolysWithinDistanceOfLocations"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38583,
				castTo = ffi.typeof("BOOL*"),
				offset = 44
			},
			{
				name = "NavHandle",
				index = 38587,
				className = "UNavigationHandle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "InLocation",
				index = 38586,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 4
			},
			{
				name = "InRotation",
				index = 38585,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 16
			},
			{
				name = "InDistanceToCheck",
				index = 38584,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
			{
				name = "InLocationsToCheck",
				index = 38581,
				type = ffi.typeof("struct TArray_FVector"),
				castTo = ffi.typeof("struct TArray_FVector*"),
				flags = 8,
				offset = 32
			},
		},
		dataSize = 52,
		index = 38580,
		retOffset = 44,
	},
	["Reset"] = {
		fields = {
		},
		dataSize = 0,
		index = 38479,
	},
	["eventPreProcessStream"] = {
		fields = {
		},
		dataSize = 0,
		index = 38478,
	},
	["GetAggregateMappingIDs"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38556,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "EventID",
				index = 38559,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "AggregateID",
				isRet = true,
				index = 38558,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "TargetAggregateID",
				isRet = true,
				index = 38557,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
		},
		dataSize = 16,
		index = 38555,
		retOffset = 12,
	},
	["Reset"] = {
		fields = {
		},
		dataSize = 0,
		index = 38554,
	},
	["eventPostProcessStream"] = {
		fields = {
		},
		dataSize = 0,
		index = 38553,
	},
	["eventPreProcessStream"] = {
		fields = {
		},
		dataSize = 0,
		index = 38552,
	},
	["eventGetSeamlessTravelActorList"] = {
		fields = {
			{
				name = "bToEntry",
				index = 38601,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ActorList",
				isRet = true,
				index = 38599,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_AActorPtr"),
				castTo = ffi.typeof("struct TArray_AActorPtr*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 16,
		index = 38598,
	},
	["eventLogin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38593,
				castTo = ffi.typeof("struct APlayerController**"),
				offset = 60
			},
			{
				name = "Portal",
				index = 38597,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Options",
				index = 38596,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "UniqueId",
				index = 38595,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 24
			},
			{
				name = "ErrorMessage",
				isRet = true,
				index = 38594,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 48
			},
		},
		dataSize = 68,
		index = 38592,
		retOffset = 60,
	},
