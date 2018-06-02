local ffi = require("ffi")
local c = g_classFuncs

	["ToggleAITree"] = {
		fields = {
		},
		dataSize = 0,
		index = 39369,
	},
	["ToggleTargetViewCones"] = {
		fields = {
		},
		dataSize = 0,
		index = 39368,
	},
	["ToggleAwarenessZones"] = {
		fields = {
		},
		dataSize = 0,
		index = 39367,
	},
	["ToggleRuleEngineLoadBalance"] = {
		fields = {
		},
		dataSize = 4,
		index = 39366,
	},
	["ToggleCombat"] = {
		fields = {
		},
		dataSize = 0,
		index = 39365,
	},
	["ToggleShowTimers"] = {
		fields = {
		},
		dataSize = 0,
		index = 39364,
	},
	["ToggleResources"] = {
		fields = {
		},
		dataSize = 0,
		index = 39363,
	},
	["ToggleInactiveRules"] = {
		fields = {
		},
		dataSize = 0,
		index = 39362,
	},
	["ToggleRules"] = {
		fields = {
		},
		dataSize = 0,
		index = 39361,
	},
	["ToggleFlags"] = {
		fields = {
		},
		dataSize = 0,
		index = 39360,
	},
	["GetTracker"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39359,
				castTo = ffi.typeof("struct UAITracker**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39358,
		retOffset = 0,
	},
	["SetMind"] = {
		fields = {
			{
				name = "NewMind",
				index = 39357,
				className = "AGearboxMind",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39356,
	},
	["InitDummies"] = {
		fields = {
			{
				name = "NewNumDummies",
				index = 39355,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39354,
	},
	["WantsToDoCameraInspection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39353,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39352,
		retOffset = 0,
	},
	["SetCurrentInspectedTarget"] = {
		fields = {
			{
				name = "NewName",
				index = 39351,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39350,
	},
	["CompareRuleSetAndAdjustRuleIdx"] = {
		fields = {
			{
				name = "OldSnapshot",
				index = 39349,
				className = "USnapshotRecord",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "NewSnapshot",
				index = 39348,
				className = "USnapshotRecord",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 39347,
	},
	["SetRuleEngine"] = {
		fields = {
			{
				name = "NewRuleEngine",
				index = 39346,
				className = "URuleEngine",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39345,
	},
	["SetPrevSnapshotRule"] = {
		fields = {
		},
		dataSize = 0,
		index = 39344,
	},
	["SetNextSnapshotRule"] = {
		fields = {
		},
		dataSize = 0,
		index = 39343,
	},
	["SetPrevSnapshot"] = {
		fields = {
		},
		dataSize = 0,
		index = 39342,
	},
	["SetNextSnapshot"] = {
		fields = {
		},
		dataSize = 0,
		index = 39341,
	},
	["NotifyGameUnPaused"] = {
		fields = {
		},
		dataSize = 0,
		index = 39340,
	},
	["NotifyGamePaused"] = {
		fields = {
		},
		dataSize = 0,
		index = 39339,
	},
	["Display"] = {
		fields = {
			{
				name = "HUD",
				index = 39338,
				className = "AHUD",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39337,
	},
	["IsPlaying"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39669,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "AnimSMD",
				index = 39670,
				className = "UGearboxAnimDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39668,
		retOffset = 4,
	},
	["SetRootMotion"] = {
		fields = {
			{
				name = "RMDef",
				index = 39667,
				className = "URootMotionDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39666,
	},
	["GetCurrentAnimDef"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39665,
				castTo = ffi.typeof("struct UGearboxAnimDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39664,
		retOffset = 0,
	},
	["GetCurrentAnimName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39663,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 39662,
		retOffset = 0,
	},
	["Finish"] = {
		fields = {
			{
				name = "bInterrupted",
				index = 39661,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39660,
	},
	["Stop"] = {
		fields = {
			{
				name = "bInterrupted",
				index = 39659,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39658,
	},
	["PlayData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39652,
				castTo = ffi.typeof("float*"),
				offset = 48
			},
			{
				name = "SMData",
				isRet = true,
				index = 39657,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 0
			},
			{
				name = "AnimNameOverride",
				index = 39656,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 28
			},
			{
				name = "PlayRateScale",
				index = 39655,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 36
			},
			{
				name = "BlendInOverride",
				index = 39654,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 40
			},
			{
				name = "BlendOutOverride",
				index = 39653,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 44
			},
		},
		dataSize = 52,
		index = 39651,
		retOffset = 48,
	},
	["Play"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39645,
				castTo = ffi.typeof("float*"),
				offset = 24
			},
			{
				name = "CustomAnimSMD",
				index = 39650,
				className = "UGearboxAnimDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AnimNameOverride",
				index = 39649,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "PlayRateScale",
				index = 39648,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "BlendInOverride",
				index = 39647,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
			{
				name = "BlendOutOverride",
				index = 39646,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 28,
		index = 39644,
		retOffset = 24,
	},
	["Evaluate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39673,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 39674,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39672,
		retOffset = 4,
	},
	["CallFunction"] = {
		fields = {
			{
				name = "inActor",
				index = 39746,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "InFunctionName",
				index = 39745,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
		},
		dataSize = 12,
		index = 39744,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39743,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39742,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39741,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39740,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39739,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39738,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 60,
		index = 39737,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39788,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39787,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39786,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39785,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39784,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39783,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 72,
		index = 39780,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39830,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39829,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39828,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39827,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39826,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39825,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 76,
		index = 39822,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39967,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39966,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39965,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39964,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39963,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39962,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 72,
		index = 39959,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40020,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40019,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40018,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40017,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40016,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40015,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 84,
		index = 40012,
	},
	["RunAllBehaviorsForEvent"] = {
		fields = {
			{
				name = "EventName",
				index = 40343,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SetStrategy",
				index = 40342,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 8
			},
			{
				name = "Strategy",
				index = 40341,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 20
			},
			{
				name = "SelfObject",
				index = 40340,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40339,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40338,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40337,
				optional = true,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
			{
				name = "EnumValue",
				index = 40336,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 56
			},
		},
		dataSize = 57,
		index = 40335,
	},
	["BehaviorStrategy"] = {
		fields = {
			{
				name = "BehaviorSet",
				index = 40334,
				type = ffi.typeof("struct FPointer"),
				castTo = ffi.typeof("struct FPointer*"),
				flags = 64,
				offset = 0
			},
			{
				name = "EventName",
				index = 40333,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "BehaviorList",
				isRet = true,
				index = 40330,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UBehaviorBasePtr"),
				castTo = ffi.typeof("struct TArray_UBehaviorBasePtr*"),
				TArray = true,
				offset = 12
			},
			{
				name = "EnumValue",
				index = 40332,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 25,
		index = 40328,
	},
	["BehaviorSetStrategy"] = {
		fields = {
			{
				name = "BehaviorSetList",
				isRet = true,
				index = 40325,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FPointer"),
				castTo = ffi.typeof("struct TArray_FPointer*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 40324,
	},
	["ResolveBehaviorProviderDefinitionReference"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39790,
				castTo = ffi.typeof("struct UBehaviorProviderDefinition**"),
				offset = 60
			},
			{
				name = "SourceBehavior",
				index = 40323,
				className = "UBehaviorBase",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "ProviderReference",
				index = 40322,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "PathName",
				isRet = true,
				index = 40321,
				isOutParm = true,
				cType = ffi.typeof("struct FNameBasedObjectPath"),
				castTo = ffi.typeof("struct FNameBasedObjectPath*"),
				offset = 8
			},
		},
		dataSize = 64,
		index = 39789,
		retOffset = 60,
	},
	["IsBehaviorsV2"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40022,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40320,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
		},
		dataSize = 32,
		index = 40021,
		retOffset = 28,
	},
	["ShouldContinueExecution"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40315,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40319,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "TimeBetweenSteps",
				index = 40318,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
			{
				name = "NumSteps",
				isRet = true,
				index = 40317,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 32
			},
			{
				name = "MaxSteps",
				index = 40316,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 36
			},
		},
		dataSize = 48,
		index = 40314,
		retOffset = 40,
	},
	["GetNextFireLocationSocket"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40312,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 28
			},
			{
				name = "FireSocketSelection",
				index = 40313,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFireSocketSelectionMethod",
				flags = 32,
				offset = 0
			},
			{
				name = "FireLocationSocketNames",
				index = 40307,
				type = ffi.typeof("struct TArray_FName"),
				castTo = ffi.typeof("struct TArray_FName*"),
				flags = 8,
				offset = 4
			},
			{
				name = "FireLocationSocketsRemaining",
				isRet = true,
				index = 40309,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FName"),
				castTo = ffi.typeof("struct TArray_FName*"),
				TArray = true,
				offset = 16
			},
		},
		dataSize = 52,
		index = 40306,
		retOffset = 28,
	},
	["GetRotationFromAttachmentLocationData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40303,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "AttachmentLocation",
				index = 40305,
				type = ffi.typeof("struct FAttachmentLocationData"),
				castTo = ffi.typeof("struct FAttachmentLocationData*"),
				flags = 64,
				offset = 0
			},
			{
				name = "AttachmentLocationRotation",
				isRet = true,
				index = 40304,
				isOutParm = true,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 28
			},
		},
		dataSize = 44,
		index = 40302,
		retOffset = 40,
	},
	["GetRelativeDirection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40293,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 60
			},
			{
				name = "DesiredDirection",
				index = 40297,
				type = ffi.typeof("struct FRelativeDirectionData"),
				castTo = ffi.typeof("struct FRelativeDirectionData*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Source",
				index = 40296,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 32
			},
			{
				name = "DefaultDirection",
				index = 40295,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 40
			},
			{
				name = "SpawnSocketName",
				index = 40294,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 52
			},
		},
		dataSize = 72,
		index = 40292,
		retOffset = 60,
	},
	["Evaluate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40726,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 40727,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40725,
		retOffset = 4,
	},
	["RemoveAndDeleteActorsOfClassFromLevel"] = {
		fields = {
			{
				name = "TheClass",
				index = 41022,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "Level",
				index = 41021,
				className = "ULevel",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 41020,
	},
	["RemoveActorsOfClassFromLevel"] = {
		fields = {
			{
				name = "TheClass",
				index = 41019,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "Level",
				index = 41018,
				className = "ULevel",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 41017,
	},
	["RemoveAndDeleteActorsFromLevel"] = {
		fields = {
			{
				name = "Level",
				index = 41016,
				className = "ULevel",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41015,
	},
	["RemoveActorsFromLevel"] = {
		fields = {
			{
				name = "Level",
				index = 41014,
				className = "ULevel",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41013,
	},
	["FindNextActorByLevel"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41010,
				castTo = ffi.typeof("struct AActor**"),
				offset = 8
			},
			{
				name = "Level",
				index = 41012,
				className = "ULevel",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Index",
				isRet = true,
				index = 41011,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 41009,
		retOffset = 8,
	},
	["FindFirstActorByLevel"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41006,
				castTo = ffi.typeof("struct AActor**"),
				offset = 8
			},
			{
				name = "Level",
				index = 41008,
				className = "ULevel",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Index",
				isRet = true,
				index = 41007,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 41005,
		retOffset = 8,
	},
	["FindNextActorByClass"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41002,
				castTo = ffi.typeof("struct AActor**"),
				offset = 8
			},
			{
				name = "TheClass",
				index = 41004,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "Index",
				isRet = true,
				index = 41003,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 41001,
		retOffset = 8,
	},
	["FindFirstActorByClass"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40998,
				castTo = ffi.typeof("struct AActor**"),
				offset = 8
			},
			{
				name = "TheClass",
				index = 41000,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "Index",
				isRet = true,
				index = 40999,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 40997,
		retOffset = 8,
	},
	["RemoveActor"] = {
		fields = {
			{
				name = "Actor",
				index = 40996,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 40995,
	},
	["AddActor"] = {
		fields = {
			{
				name = "Actor",
				index = 40994,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Level",
				index = 40993,
				className = "ULevel",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 40992,
	},
	["RemoveObjectsOfClass"] = {
		fields = {
			{
				name = "TheClass",
				index = 41056,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41055,
	},
	["FindNextObjectByClass"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41052,
				castTo = ffi.typeof("struct UObject**"),
				offset = 8
			},
			{
				name = "TheClass",
				index = 41054,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "Index",
				isRet = true,
				index = 41053,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 41051,
		retOffset = 8,
	},
	["FindFirstObjectByClass"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41048,
				castTo = ffi.typeof("struct UObject**"),
				offset = 8
			},
			{
				name = "TheClass",
				index = 41050,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "Index",
				isRet = true,
				index = 41049,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 41047,
		retOffset = 8,
	},
	["RemoveObject"] = {
		fields = {
			{
				name = "TheObject",
				index = 41046,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41045,
	},
	["AddObject"] = {
		fields = {
			{
				name = "TheObject",
				index = 41044,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41043,
	},
	["ForceMoveToActor"] = {
		fields = {
			{
				name = "destActor",
				index = 41556,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41555,
	},
	["DoesPatrolPathExistToPoint"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41604,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "PatrolPoint",
				index = 41605,
				className = "AGearboxAIMoveNode",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41603,
		retOffset = 4,
	},
	["GetAllLinkedNodes"] = {
		fields = {
			{
				name = "OutNodes",
				isRet = true,
				index = 41601,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_AGearboxAIMoveNodePtr"),
				castTo = ffi.typeof("struct TArray_AGearboxAIMoveNodePtr*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41600,
	},
	["GetNextMoveNodeClosestToPoint"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41598,
				castTo = ffi.typeof("struct AGearboxAIMoveNode**"),
				offset = 12
			},
			{
				name = "TestPoint",
				index = 41599,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41597,
		retOffset = 12,
	},
	["GetNextMoveNode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41596,
				castTo = ffi.typeof("struct AGearboxAIMoveNode**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41595,
		retOffset = 0,
	},
	["RemoveNode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41593,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "OldNode",
				index = 41594,
				className = "AGearboxAIMoveNode",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41592,
		retOffset = 4,
	},
	["AddNode"] = {
		fields = {
			{
				name = "NewNode",
				index = 41591,
				className = "AGearboxAIMoveNode",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41590,
	},
	["ClearLinks"] = {
		fields = {
		},
		dataSize = 0,
		index = 41589,
	},
	["OnToggle"] = {
		fields = {
			{
				name = "Action",
				index = 41588,
				className = "USeqAct_Toggle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41587,
	},
	["eventFinishCameraLookAt"] = {
		fields = {
		},
		dataSize = 0,
		index = 41781,
	},
	["eventEnableThirdPersonLookAt"] = {
		fields = {
			{
				name = "LookAtXOffset",
				index = 41780,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LookAtYOffset",
				index = 41779,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "LookAtZOffset",
				index = 41778,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "LookAtMode",
				index = 41777,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECameraLookAtMode",
				flags = 32,
				offset = 12
			},
		},
		dataSize = 13,
		index = 41776,
	},
	["BeginCameraLookAt"] = {
		fields = {
			{
				name = "LookAtTarget",
				index = 41775,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "LookAtBone",
				index = 41774,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "TargetLocation",
				index = 41773,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Zoom",
				index = 41772,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
			{
				name = "FOV",
				index = 41771,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 28
			},
			{
				name = "Duration",
				index = 41770,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 36
			},
			{
				name = "TransitionTimeIn",
				index = 41769,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 40
			},
			{
				name = "TransitionTimeOut",
				index = 41768,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 44
			},
		},
		dataSize = 48,
		index = 41767,
	},
	["CalcSimpleThirdPersonView"] = {
		fields = {
			{
				name = "OutVT",
				isRet = true,
				index = 41766,
				isOutParm = true,
				cType = ffi.typeof("struct FTViewTarget"),
				castTo = ffi.typeof("struct FTViewTarget*"),
				offset = 0
			},
			{
				name = "DeltaTime",
				index = 41765,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 44
			},
		},
		dataSize = 112,
		index = 41759,
	},
	["CalcBaseView"] = {
		fields = {
			{
				name = "OutVT",
				isRet = true,
				index = 41758,
				isOutParm = true,
				cType = ffi.typeof("struct FTViewTarget"),
				castTo = ffi.typeof("struct FTViewTarget*"),
				offset = 0
			},
			{
				name = "DeltaTime",
				index = 41757,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 44
			},
		},
		dataSize = 48,
		index = 41756,
	},
	["UpdateViewTarget"] = {
		fields = {
			{
				name = "OutVT",
				isRet = true,
				index = 41755,
				isOutParm = true,
				cType = ffi.typeof("struct FTViewTarget"),
				castTo = ffi.typeof("struct FTViewTarget*"),
				offset = 0
			},
			{
				name = "DeltaTime",
				index = 41754,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 44
			},
		},
		dataSize = 80,
		index = 41752,
	},
	["LerpFOV"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40599,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "Src",
				index = 40602,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Dest",
				index = 40601,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "T",
				index = 40600,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 40598,
		retOffset = 12,
	},
	["LerpRotation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40594,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 28
			},
			{
				name = "Src",
				index = 40597,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Dest",
				index = 40596,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
			{
				name = "T",
				index = 40595,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 40,
		index = 40593,
		retOffset = 28,
	},
	["LerpLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40589,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
			{
				name = "Src",
				index = 40592,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Dest",
				index = 40591,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "T",
				index = 40590,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 40,
		index = 40588,
		retOffset = 28,
	},
	["UpdateAllLerps"] = {
		fields = {
			{
				name = "DeltaTime",
				index = 40587,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "OutPOV",
				isRet = true,
				index = 40586,
				isOutParm = true,
				cType = ffi.typeof("struct FTPOV"),
				castTo = ffi.typeof("struct FTPOV*"),
				offset = 4
			},
		},
		dataSize = 64,
		index = 40584,
	},
	["UpdateMasterFadePercentage"] = {
		fields = {
			{
				name = "AdjustedDeltaTime",
				index = 40583,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40582,
	},
	["IsFadingDownwards"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40581,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40580,
		retOffset = 0,
	},
	["IsFadingUpwards"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40579,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40578,
		retOffset = 0,
	},
	["IsFadeInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40577,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40576,
		retOffset = 0,
	},
	["StartFadeOut"] = {
		fields = {
			{
				name = "NewTimeSpan",
				index = 40575,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewDisableWhenFadedOut",
				index = 40574,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
			{
				name = "NewFadeMode",
				index = 40573,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECameraInterpolationMode",
				flags = 32,
				offset = 8
			},
		},
		dataSize = 9,
		index = 40572,
	},
	["StartFadeIn"] = {
		fields = {
			{
				name = "NewTimeSpan",
				index = 40571,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewFadeMode",
				index = 40570,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECameraInterpolationMode",
				flags = 32,
				offset = 4
			},
		},
		dataSize = 5,
		index = 40569,
	},
	["SetDesiredCamera"] = {
		fields = {
			{
				name = "DesiredLoc",
				index = 40568,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "DesiredRot",
				index = 40567,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
			{
				name = "DesiredFOV",
				index = 40566,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 40565,
	},
	["SetGBXCameraOwner"] = {
		fields = {
			{
				name = "InCamera",
				index = 40564,
				className = "AGearboxCameraBasic",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 40563,
	},
	["AddCameraModifier"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40561,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Camera",
				index = 40562,
				className = "ACamera",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40560,
		retOffset = 4,
	},
	["eventServerDialog_TriggerEvent"] = {
		fields = {
			{
				name = "EventTag",
				index = 42103,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Other",
				index = 42102,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "ObjectParameter",
				index = 42101,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 42100,
	},
	["SetDialogNameTag"] = {
		fields = {
			{
				name = "NewName",
				index = 42099,
				className = "UGearboxDialogNameTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42098,
	},
	["GetReplicatedDialogData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42097,
				cType = ffi.typeof("struct FGearboxDialogReplicatedData"),
				castTo = ffi.typeof("struct FGearboxDialogReplicatedData*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 42096,
		retOffset = 0,
	},
	["SetReplicatedDialogData"] = {
		fields = {
			{
				name = "TalkAct",
				index = 42095,
				className = "UGearboxDialogAct_Talk",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Data",
				isRet = true,
				index = 42094,
				isOutParm = true,
				cType = ffi.typeof("struct FGearboxDialogData"),
				castTo = ffi.typeof("struct FGearboxDialogData*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 42093,
	},
	["GetDialogGroups"] = {
		fields = {
			{
				name = "Groups",
				isRet = true,
				index = 42091,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UGearboxDialogGroupPtr"),
				castTo = ffi.typeof("struct TArray_UGearboxDialogGroupPtr*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42090,
	},
	["GetDialogComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40242,
				castTo = ffi.typeof("struct UGearboxDialogComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40241,
		retOffset = 0,
	},
	["GetDialogNameTag"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42089,
				castTo = ffi.typeof("struct UGearboxDialogNameTag**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42088,
		retOffset = 0,
	},
	["GetActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40256,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40255,
		retOffset = 0,
	},
	["CanTalk"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42087,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42086,
		retOffset = 0,
	},
	["IsChild"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39596,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TestNode",
				index = 39597,
				className = "UGearboxEditorNode",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39595,
		retOffset = 4,
	},
	["GetSparkInterface"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41226,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 41225,
		retOffset = 0,
	},
	["eventIsCurrentDeviceValid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42182,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "SizeNeeded",
				index = 42183,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 42181,
		retOffset = 4,
	},
	["HasStorageDeviceBeenRemoved"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42180,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42179,
		retOffset = 0,
	},
	["GetCurrentDeviceID"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42178,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42177,
		retOffset = 0,
	},
	["SetCurrentDeviceID"] = {
		fields = {
			{
				name = "NewDeviceID",
				index = 42176,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bProfileSignedOut",
				index = 42175,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 42174,
	},
	["eventPostLogin"] = {
		fields = {
			{
				name = "NewPlayer",
				index = 42185,
				className = "APlayerController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42184,
	},
	["extSetLanguageExt"] = {
		fields = {
			{
				name = "ClipPath",
				index = 42384,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42383,
	},
	["OnClosedOnDeath"] = {
		fields = {
		},
		dataSize = 0,
		index = 42382,
	},
	["IsShowingFlashMouse"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42381,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42380,
		retOffset = 0,
	},
	["extIsMouseablePlatform"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42379,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42378,
		retOffset = 0,
	},
	["eventSetMouseableFlag"] = {
		fields = {
		},
		dataSize = 0,
		index = 42377,
	},
	["GetStyleDebugString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42374,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 40,
		index = 42371,
		retOffset = 0,
	},
	["GetStateDebugString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42369,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "bIncludeFlags",
				index = 42370,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 44,
		index = 42366,
		retOffset = 4,
	},
	["InitializeFrom"] = {
		fields = {
			{
				name = "SrcMovie",
				index = 42365,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42364,
	},
	["RemoveStylesDrawnTo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42361,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "PrimComp",
				index = 42363,
				className = "UPrimitiveComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Target",
				index = 42362,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 42360,
		retOffset = 12,
	},
	["RemoveStyles"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42358,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "Target",
				index = 42359,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42357,
		retOffset = 8,
	},
	["RemoveStyle"] = {
		fields = {
			{
				name = "Style",
				index = 42356,
				className = "UGFxMovieDrawStyle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42355,
	},
	["AddStyle"] = {
		fields = {
			{
				name = "Style",
				index = 42354,
				className = "UGFxMovieDrawStyle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42353,
	},
	["ShutdownMoviePlayback"] = {
		fields = {
		},
		dataSize = 0,
		index = 42296,
	},
	["InitMoviePlayback"] = {
		fields = {
		},
		dataSize = 0,
		index = 42294,
	},
	["GetRenderTexture"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42352,
				castTo = ffi.typeof("struct UTextureRenderTarget2D**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42351,
		retOffset = 0,
	},
	["eventMovieState_OnChanged"] = {
		fields = {
			{
				name = "bStateWasChanged",
				index = 42349,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42348,
	},
	["eventMovieState_SetFromMovie"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42346,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Movie",
				index = 42347,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42345,
		retOffset = 4,
	},
	["MovieState_Copy"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42342,
				castTo = ffi.typeof("BOOL*"),
				offset = 48
			},
			{
				name = "StateDst",
				isRet = true,
				index = 42344,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 0
			},
			{
				name = "StateSrc",
				isRet = true,
				index = 42343,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 24
			},
		},
		dataSize = 52,
		index = 42341,
		retOffset = 48,
	},
	["MovieState_Compare"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42338,
				castTo = ffi.typeof("BOOL*"),
				offset = 48
			},
			{
				name = "S1",
				isRet = true,
				index = 42340,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 0
			},
			{
				name = "S2",
				isRet = true,
				index = 42339,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 24
			},
		},
		dataSize = 52,
		index = 42337,
		retOffset = 48,
	},
	["MovieState_Toggle"] = {
		fields = {
			{
				name = "TheState",
				index = 42336,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42335,
	},
	["MovieState_Enable"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42332,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "TheState",
				index = 42334,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bEnable",
				index = 42333,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 42331,
		retOffset = 12,
	},
	["MovieState_IsEnabled"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42329,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "TheState",
				index = 42330,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42328,
		retOffset = 8,
	},
	["MovieState_SupportsState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42326,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "TheState",
				index = 42327,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42325,
		retOffset = 8,
	},
	["MovieState_Init"] = {
		fields = {
		},
		dataSize = 0,
		index = 42324,
	},
	["InitFromDefinition"] = {
		fields = {
		},
		dataSize = 0,
		index = 42323,
	},
	["MovieState_Apply"] = {
		fields = {
			{
				name = "Movie",
				index = 42322,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "HandlerClass",
				index = 42321,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 4
			},
		},
		dataSize = 12,
		index = 42320,
	},
	["MovieState_ApplyState"] = {
		fields = {
			{
				name = "TheState",
				index = 42319,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Movie",
				index = 42318,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 42317,
	},
	["ApplyState"] = {
		fields = {
			{
				name = "StateName",
				index = 42316,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "StateAction",
				index = 42315,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 24,
		index = 42314,
	},
	["SetRenderingEnabled"] = {
		fields = {
			{
				name = "bEnabled",
				index = 42313,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42312,
	},
	["GotoAndStop"] = {
		fields = {
			{
				name = "FrameLabel",
				index = 42311,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42310,
	},
	["GotoAndPlay"] = {
		fields = {
			{
				name = "FrameLabel",
				index = 42309,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42308,
	},
	["PlaySpecialUISound"] = {
		fields = {
			{
				name = "SoundString",
				index = 42307,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 20,
		index = 42305,
	},
	["eventPlayUISound"] = {
		fields = {
			{
				name = "UIEvent",
				index = 42304,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42303,
	},
	["eventSetOtherObject"] = {
		fields = {
			{
				name = "Obj",
				index = 42302,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42301,
	},
	["GetInstanceContextObject"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42300,
				castTo = ffi.typeof("struct UObject**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42299,
		retOffset = 0,
	},
	["eventOnTick"] = {
		fields = {
		},
		dataSize = 0,
		index = 42298,
	},
	["eventOnClose"] = {
		fields = {
		},
		dataSize = 0,
		index = 42297,
	},
	["eventStart"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42292,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "StartPaused",
				index = 42293,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42291,
		retOffset = 4,
	},
	["ColorizeTooltipText"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42288,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 16
			},
			{
				name = "S",
				index = 42290,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "bDisabled",
				index = 42289,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 42287,
		retOffset = 16,
	},
	["GFxColoredText"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42283,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 20
			},
			{
				name = "C",
				isRet = true,
				index = 42286,
				isOutParm = true,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 0
			},
			{
				name = "S",
				isRet = true,
				index = 42285,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "bAppendNewline",
				index = 42284,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 32,
		index = 42282,
		retOffset = 20,
	},
	["SingleArgInvokeB"] = {
		fields = {
			{
				name = "Command",
				index = 42281,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Arg",
				index = 42280,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 42279,
	},
	["SingleArgInvokeS"] = {
		fields = {
			{
				name = "Command",
				index = 42278,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Arg",
				index = 42277,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 24,
		index = 42276,
	},
	["SingleArgInvokeF"] = {
		fields = {
			{
				name = "Command",
				index = 42275,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Arg",
				index = 42274,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 42273,
	},
	["GetLocalPlayer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42272,
				castTo = ffi.typeof("struct ULocalPlayer**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42271,
		retOffset = 0,
	},
	["OnClosed"] = {
		fields = {
			{
				name = "Movie",
				index = 42270,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42241,
	},
	["WantsControllerInput"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42268,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 42269,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42267,
		retOffset = 4,
	},
	["SetExternalTexture"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42264,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "Resource",
				index = 42266,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Texture",
				index = 42265,
				className = "UTexture",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 20,
		index = 42263,
		retOffset = 16,
	},
	["OnInputAxis"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42258,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "ControllerId",
				index = 42262,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ukey",
				index = 42261,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "Delta",
				index = 42260,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "DeltaTime",
				index = 42259,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 42243,
		retOffset = 20,
	},
	["MovieState_OnChanged"] = {
		fields = {
			{
				name = "bStateWasChanged",
				index = 43522,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43521,
	},
	["eventStart"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43519,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "StartPaused",
				index = 43520,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43518,
		retOffset = 4,
	},
	["GetBehaviorKernel"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39045,
				castTo = ffi.typeof("struct UBehaviorKernel**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39044,
		retOffset = 0,
	},
	["GetDialogManager"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39043,
				castTo = ffi.typeof("struct UGearboxDialogManager**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39042,
		retOffset = 0,
	},
	["GetPopulationRespawnDelay"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39041,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39040,
		retOffset = 0,
	},
	["eventShowDialog"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39038,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 4
			},
			{
				name = "PC",
				index = 39039,
				className = "APlayerController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 12,
		index = 39037,
		retOffset = 4,
	},
	["NotifyActorDied"] = {
		fields = {
			{
				name = "TheActor",
				index = 39036,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bKeepBody",
				index = 39035,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 39034,
	},
	["DoesLOSIntersectSpecialOccluder"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39029,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "FromLoc",
				index = 39032,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ToLoc",
				index = 39031,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "AllegianceAffected",
				index = 39030,
				className = "UPawnAllegiance",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 32,
		index = 39028,
		retOffset = 28,
	},
	["HasPhysXCapableGPU"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39046,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39033,
		retOffset = 0,
	},
	["GetPlatform"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39027,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EGBXPlatform",
				offset = 0
			},
		},
		dataSize = 1,
		index = 39026,
		retOffset = 0,
	},
	["ValidatePlayerName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39023,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "InName",
				isRet = true,
				index = 39025,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
			{
				name = "bReplaceCharacters",
				index = 39024,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 39022,
		retOffset = 16,
	},
	["RegisterStateKey"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39018,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "LevelName",
				index = 39021,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "ObjectName",
				index = 39020,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "AdditionalKey",
				index = 39019,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 16
			},
		},
		dataSize = 28,
		index = 39017,
		retOffset = 24,
	},
	["DoesStateKeyExist"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39013,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "LevelName",
				index = 39016,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "ObjectName",
				index = 39015,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "AdditionalKey",
				index = 39014,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 16
			},
		},
		dataSize = 28,
		index = 39012,
		retOffset = 24,
	},
	["FreeTexture2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39010,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Texture",
				index = 39011,
				className = "UTexture2D",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39009,
		retOffset = 4,
	},
	["GetTexture2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39008,
				castTo = ffi.typeof("struct UTexture2D**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39007,
		retOffset = 0,
	},
	["GetRenderTextureManager"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39006,
				castTo = ffi.typeof("struct UGearboxRenderTextureManager**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39005,
		retOffset = 0,
	},
	["GetGFxManager"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39004,
				castTo = ffi.typeof("struct UGFxMovieManager**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39003,
		retOffset = 0,
	},
	["GetScreenSpaceManager"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39002,
				castTo = ffi.typeof("struct UScreenSpaceManager**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39001,
		retOffset = 0,
	},
	["GetMessageManager"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39000,
				castTo = ffi.typeof("struct UGbxMessageManager**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38999,
		retOffset = 0,
	},
	["RegDynamicTextureStreaming"] = {
		fields = {
			{
				name = "A",
				index = 38998,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bRegister",
				index = 38997,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 38996,
	},
	["GetDynamicTextureActorList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38995,
				castTo = ffi.typeof("struct UGBXActorList**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38994,
		retOffset = 0,
	},
	["GetPopulationMaster"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38993,
				castTo = ffi.typeof("struct UPopulationMaster**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38992,
		retOffset = 0,
	},
	["GetWireManager"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38991,
				castTo = ffi.typeof("struct AWireManager**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38990,
		retOffset = 0,
	},
	["GetGBXObjectList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38989,
				castTo = ffi.typeof("struct UGBXObjectList**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38988,
		retOffset = 0,
	},
	["GetGBXActorList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38987,
				castTo = ffi.typeof("struct UGBXActorList**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38986,
		retOffset = 0,
	},
	["GetRuleEngineLoadBalanceManager"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38985,
				castTo = ffi.typeof("struct URuleEngineLoadBalanceManager**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38984,
		retOffset = 0,
	},
	["GetGearboxAIFactory"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38983,
				castTo = ffi.typeof("struct UGearboxAIFactory**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38982,
		retOffset = 0,
	},
	["GetExposureUtility"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38981,
				castTo = ffi.typeof("struct UExposureUtilityBase**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38980,
		retOffset = 0,
	},
	["GetGearboxGlobals"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38979,
				castTo = ffi.typeof("struct UGearboxGlobals**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38978,
		retOffset = 0,
	},
	["GetLastDirection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42404,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 42403,
		retOffset = 0,
	},
	["GetLastOrigin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42402,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 42401,
		retOffset = 0,
	},
	["GetDirection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42398,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ContextActor",
				index = 42400,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutDirection",
				isRet = true,
				index = 42399,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 42397,
		retOffset = 16,
	},
	["GetOrigin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42394,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ContextActor",
				index = 42396,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutOrigin",
				isRet = true,
				index = 42395,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 42393,
		retOffset = 16,
	},
	["Get"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42390,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ContextActor",
				index = 42392,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutLocation",
				isRet = true,
				index = 42391,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 39137,
		retOffset = 16,
	},
	["Get"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39138,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ContextActor",
				index = 43817,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutLocation",
				isRet = true,
				index = 43816,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 39136,
		retOffset = 16,
	},
	["GetAimDirection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42875,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 42874,
		retOffset = 0,
	},
	["SetDialogNameTag"] = {
		fields = {
			{
				name = "NewName",
				index = 42873,
				className = "UGearboxDialogNameTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42872,
	},
	["eventServerDialog_TriggerEvent"] = {
		fields = {
			{
				name = "EventTag",
				index = 42871,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Other",
				index = 42870,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "ObjectParameter",
				index = 42869,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 42868,
	},
	["GetReplicatedDialogData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42867,
				cType = ffi.typeof("struct FGearboxDialogReplicatedData"),
				castTo = ffi.typeof("struct FGearboxDialogReplicatedData*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 42866,
		retOffset = 0,
	},
	["SetReplicatedDialogData"] = {
		fields = {
			{
				name = "TalkAct",
				index = 42865,
				className = "UGearboxDialogAct_Talk",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Data",
				isRet = true,
				index = 42864,
				isOutParm = true,
				cType = ffi.typeof("struct FGearboxDialogData"),
				castTo = ffi.typeof("struct FGearboxDialogData*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 42863,
	},
	["GetDialogGroups"] = {
		fields = {
			{
				name = "Groups",
				isRet = true,
				index = 42861,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UGearboxDialogGroupPtr"),
				castTo = ffi.typeof("struct TArray_UGearboxDialogGroupPtr*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42860,
	},
	["GetDialogComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42859,
				castTo = ffi.typeof("struct UGearboxDialogComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42858,
		retOffset = 0,
	},
	["GetDialogNameTag"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42857,
				castTo = ffi.typeof("struct UGearboxDialogNameTag**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42856,
		retOffset = 0,
	},
	["CanTalk"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42855,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42854,
		retOffset = 0,
	},
	["OnCoverStateChanged"] = {
		fields = {
		},
		dataSize = 0,
		index = 42853,
	},
	["ServerSetCoverState"] = {
		fields = {
			{
				name = "NewCoverState",
				index = 42852,
				type = ffi.typeof("struct FGearboxCoverState"),
				castTo = ffi.typeof("struct FGearboxCoverState*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42851,
	},
	["eventSetCoverState"] = {
		fields = {
			{
				name = "NewCoverState",
				index = 42850,
				type = ffi.typeof("struct FGearboxCoverState"),
				castTo = ffi.typeof("struct FGearboxCoverState*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42849,
	},
	["GetMountAnimDistanceForSpeed"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42845,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "TheSpeed",
				index = 42848,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMovementSpeed",
				flags = 32,
				offset = 0
			},
			{
				name = "CoverHeight",
				index = 42847,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECoverType",
				flags = 32,
				offset = 1
			},
			{
				name = "CoverDir",
				index = 42846,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECoverDirection",
				flags = 32,
				offset = 2
			},
		},
		dataSize = 8,
		index = 42844,
		retOffset = 4,
	},
	["eventGetSpotOthersShouldLookAt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42843,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 36,
		index = 42840,
		retOffset = 0,
	},
	["SetReplicatedSMData"] = {
		fields = {
			{
				name = "NewSMData",
				isRet = true,
				index = 42839,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 42838,
	},
	["eventServerSpecialMove_StopAny"] = {
		fields = {
		},
		dataSize = 0,
		index = 42837,
	},
	["eventServerSpecialMove_Stop"] = {
		fields = {
			{
				name = "OldSMD",
				index = 42836,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42835,
	},
	["eventServerSpecialMove_Queue"] = {
		fields = {
			{
				name = "NewSMD",
				index = 42834,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PlayRateScale",
				index = 42833,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Duration",
				index = 42832,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "CallbackName",
				index = 42831,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "CallbackObject",
				index = 42830,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "Data",
				index = 42829,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 28,
		index = 42828,
	},
	["eventServerSpecialMove_Play"] = {
		fields = {
			{
				name = "NewSMD",
				index = 42827,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PlayRateScale",
				index = 42826,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Duration",
				index = 42825,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "CallbackName",
				index = 42824,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "CallbackObject",
				index = 42823,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "Data",
				index = 42822,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 28,
		index = 42821,
	},
	["GetDefaultRootMotionRotationMode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42820,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ERootMotionRotationMode",
				offset = 0
			},
		},
		dataSize = 1,
		index = 42819,
		retOffset = 0,
	},
	["GetDefaultRootMotionMode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42818,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ERootMotionMode",
				offset = 0
			},
		},
		dataSize = 1,
		index = 42817,
		retOffset = 0,
	},
	["GetSkelMesh"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42816,
				castTo = ffi.typeof("struct USkeletalMeshComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42815,
		retOffset = 0,
	},
	["GetSMComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42814,
				castTo = ffi.typeof("struct USpecialMoveComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42813,
		retOffset = 0,
	},
	["GetActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42812,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42811,
		retOffset = 0,
	},
	["GetNavigationHandle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42810,
				castTo = ffi.typeof("struct UGearboxNavigationHandle**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42809,
		retOffset = 0,
	},
	["PlayHit"] = {
		fields = {
			{
				name = "SomePawn",
				index = 42808,
				className = "APawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "HitLocation",
				index = 42807,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 4
			},
			{
				name = "DamageType",
				index = 42806,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 16
			},
			{
				name = "Momentum",
				index = 42805,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 20
			},
			{
				name = "HitInfo",
				index = 42804,
				type = ffi.typeof("struct FTraceHitInfo"),
				castTo = ffi.typeof("struct FTraceHitInfo*"),
				flags = 64,
				offset = 32
			},
			{
				name = "Pipeline",
				index = 42803,
				optional = true,
				className = "UDamagePipeline",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 60
			},
		},
		dataSize = 68,
		index = 42802,
	},
	["eventReplicatedEvent"] = {
		fields = {
			{
				name = "VarName",
				index = 42801,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42800,
	},
	["Died"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42795,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Killer",
				index = 42799,
				className = "AController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "DamageType",
				index = 42798,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 4
			},
			{
				name = "HitLocation",
				index = 42797,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 8
			},
			{
				name = "Pipeline",
				index = 42796,
				optional = true,
				className = "UDamagePipeline",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
		},
		dataSize = 28,
		index = 42794,
		retOffset = 24,
	},
	["SetMovementPhysics"] = {
		fields = {
		},
		dataSize = 0,
		index = 42793,
	},
	["eventPostBeginPlay"] = {
		fields = {
		},
		dataSize = 8,
		index = 42791,
	},
	["NotifyShotAtBy"] = {
		fields = {
			{
				name = "ShootingPawn",
				index = 42790,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42789,
	},
	["HaveIBeenShotAtRecently"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42788,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42787,
		retOffset = 0,
	},
	["eventCanPlayOnline"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43254,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 43252,
		retOffset = 0,
	},
	["DisplayShiftCommunicationFailedDialog"] = {
		fields = {
		},
		dataSize = 0,
		index = 43253,
	},
	["ShowEULAScreen"] = {
		fields = {
			{
				name = "EulaChain",
				isRet = true,
				index = 43256,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FEULAData"),
				castTo = ffi.typeof("struct TArray_FEULAData*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43255,
	},
	["RequestTitleStorageFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43247,
				castTo = ffi.typeof("int*"),
				offset = 40
			},
			{
				name = "Filename",
				index = 43251,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "TitleStorageRequestCompleteDelegate",
				index = 43250,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 12
			},
			{
				name = "AcceptsType",
				index = 43249,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "HttpMimeType",
				flags = 32,
				offset = 24
			},
			{
				name = "CustomAcceptsType",
				index = 43248,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
		},
		dataSize = 136,
		index = 43241,
		retOffset = 40,
	},
	["ShowSparkID"] = {
		fields = {
		},
		dataSize = 12,
		index = 43239,
	},
	["ShouldCheckRemoteControlCheckbox"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43236,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "CheckBoxName",
				index = 43238,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "HUD",
				index = 43237,
				optional = true,
				className = "AHUD",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43235,
		retOffset = 8,
	},
	["DisplayDebugSpark"] = {
		fields = {
			{
				name = "HUD",
				index = 43234,
				className = "AHUD",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "out_YL",
				isRet = true,
				index = 43233,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "out_YPos",
				isRet = true,
				index = 43232,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
		},
		dataSize = 12,
		index = 43231,
	},
	["AITree"] = {
		fields = {
		},
		dataSize = 0,
		index = 43230,
	},
	["AIToggleTargetViewCones"] = {
		fields = {
		},
		dataSize = 0,
		index = 43229,
	},
	["AIToggleAwarenessZones"] = {
		fields = {
		},
		dataSize = 0,
		index = 43228,
	},
	["AIToggleCombat"] = {
		fields = {
		},
		dataSize = 0,
		index = 43227,
	},
	["AIToggleResources"] = {
		fields = {
		},
		dataSize = 0,
		index = 43226,
	},
	["AIToggleInactiveRules"] = {
		fields = {
		},
		dataSize = 0,
		index = 43225,
	},
	["AIToggleRules"] = {
		fields = {
		},
		dataSize = 0,
		index = 43224,
	},
	["AIToggleFlags"] = {
		fields = {
		},
		dataSize = 0,
		index = 43223,
	},
	["AIDebugNextSnapshot"] = {
		fields = {
		},
		dataSize = 0,
		index = 43222,
	},
	["AIDebugPrevSnapshot"] = {
		fields = {
		},
		dataSize = 0,
		index = 43221,
	},
	["ainext"] = {
		fields = {
		},
		dataSize = 0,
		index = 43220,
	},
	["aiprev"] = {
		fields = {
		},
		dataSize = 0,
		index = 43219,
	},
	["AINextRule"] = {
		fields = {
			{
				name = "bSkipContainers",
				index = 43218,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43217,
	},
	["AIPrevRule"] = {
		fields = {
			{
				name = "bSkipContainers",
				index = 43216,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43215,
	},
	["AIDebugSetPawn"] = {
		fields = {
			{
				name = "NewPawn",
				index = 43214,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43213,
	},
	["AIDebugSetPawnByName"] = {
		fields = {
			{
				name = "NewPawnName",
				index = 43212,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43211,
	},
	["debugpawn"] = {
		fields = {
		},
		dataSize = 12,
		index = 43210,
	},
	["aisetp"] = {
		fields = {
			{
				name = "NewPawnName",
				index = 43209,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43208,
	},
	["NotifyGameUnPaused"] = {
		fields = {
		},
		dataSize = 0,
		index = 43207,
	},
	["NotifyGamePaused"] = {
		fields = {
		},
		dataSize = 0,
		index = 43206,
	},
	["SetSettingsFromProfile"] = {
		fields = {
		},
		dataSize = 0,
		index = 43205,
	},
	["GetStorageDeviceID"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43204,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43203,
		retOffset = 0,
	},
	["SetStorageDeviceID"] = {
		fields = {
			{
				name = "DeviceID",
				index = 43202,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43201,
	},
	["NotifyDeviceSelectComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 43200,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 28,
		index = 43197,
	},
	["eventDisplayStorageRemovedMenu"] = {
		fields = {
		},
		dataSize = 0,
		index = 43196,
	},
	["DisplayProfileRemovedMenu"] = {
		fields = {
		},
		dataSize = 0,
		index = 43195,
	},
	["NotifyProfileWriteFromStorageChangeComplete"] = {
		fields = {
			{
				name = "LocalUser",
				index = 43194,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 43193,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43192,
	},
	["IsCurrentStorageDeviceValid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43191,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43190,
		retOffset = 0,
	},
	["NotifyStorageDeviceChange"] = {
		fields = {
		},
		dataSize = 4,
		index = 43189,
	},
	["eventDestroyOnlineGame"] = {
		fields = {
		},
		dataSize = 8,
		index = 43187,
	},
	["ReturnToTitleScreen"] = {
		fields = {
			{
				name = "bSkipSave",
				index = 43186,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bRemoveSplitPlayer",
				index = 43185,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43184,
	},
	["GetConnectionFailureNoticeMsg"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43183,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43182,
		retOffset = 0,
	},
	["GetMainMenuMapName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43181,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43180,
		retOffset = 0,
	},
	["NotifyLinkStatusChange"] = {
		fields = {
			{
				name = "bIsConnected",
				index = 43179,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 20,
		index = 43177,
	},
	["NotifyLoginStatusChange"] = {
		fields = {
			{
				name = "NewStatus",
				index = 43176,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ELoginStatus",
				flags = 32,
				offset = 0
			},
			{
				name = "NewId",
				index = 43175,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 52,
		index = 43173,
	},
	["NotifyLoginChange"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 43171,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 37,
		index = 43168,
	},
	["OnReadProfileSettingsComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 43259,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 43260,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43172,
	},
	["OnReceivedNewProfile"] = {
		fields = {
		},
		dataSize = 0,
		index = 43258,
	},
	["ClearOnlineDelegates"] = {
		fields = {
		},
		dataSize = 4,
		index = 43167,
	},
	["RegisterOnlineDelegates"] = {
		fields = {
		},
		dataSize = 4,
		index = 43166,
	},
	["OnProfileWriteComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 43165,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 43164,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43163,
	},
	["HidePS3WritingProfileDialog"] = {
		fields = {
		},
		dataSize = 0,
		index = 43162,
	},
	["ShowPS3WritingProfileDialog"] = {
		fields = {
		},
		dataSize = 0,
		index = 43161,
	},
	["eventWriteProfile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43159,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "bShouldShowProfileDialog",
				index = 43160,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 20,
		index = 43157,
		retOffset = 4,
	},
	["eventGetProfileSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43156,
				castTo = ffi.typeof("struct UGearboxProfileSettings**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43155,
		retOffset = 0,
	},
	["GetMyControllerId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43154,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
		},
		dataSize = 1,
		index = 43153,
		retOffset = 0,
	},
	["eventReadProfile"] = {
		fields = {
		},
		dataSize = 1,
		index = 43150,
	},
	["UnregisterPlayerDataStores"] = {
		fields = {
		},
		dataSize = 0,
		index = 43152,
	},
	["RegisterCustomPlayerDataStores"] = {
		fields = {
		},
		dataSize = 0,
		index = 43149,
	},
	["SetDataStoreStringValue"] = {
		fields = {
			{
				name = "MarkupString",
				index = 43148,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "NewValue",
				index = 43147,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 24,
		index = 43146,
	},
	["GetDataStoreStringValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43144,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "MarkupString",
				index = 43145,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 43143,
		retOffset = 12,
	},
	["eventClientKeepPlayingLoadingMovie"] = {
		fields = {
		},
		dataSize = 0,
		index = 43142,
	},
	["ClientResetCamera"] = {
		fields = {
		},
		dataSize = 0,
		index = 43141,
	},
	["eventSpawnPlayerCamera"] = {
		fields = {
		},
		dataSize = 0,
		index = 43140,
	},
	["eventInitInputSystem"] = {
		fields = {
		},
		dataSize = 0,
		index = 43139,
	},
	["NoTargetAll"] = {
		fields = {
		},
		dataSize = 8,
		index = 43138,
	},
	["NoTarget"] = {
		fields = {
		},
		dataSize = 4,
		index = 43137,
	},
	["GetNoTargetPlayers"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43134,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43133,
		retOffset = 0,
	},
	["SetNoTargetPlayers"] = {
		fields = {
			{
				name = "bNoTarget",
				index = 43136,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43135,
	},
	["Possess"] = {
		fields = {
			{
				name = "aPawn",
				index = 43132,
				className = "APawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bVehicleTransition",
				index = 43131,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43130,
	},
	["DontTarget"] = {
		fields = {
			{
				name = "bModeFlag",
				index = 43129,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43128,
	},
	["ClientConsoleCommand"] = {
		fields = {
			{
				name = "Command",
				index = 43127,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43126,
	},
	["IsPlayerAllowingActiveMoment"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40709,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40708,
		retOffset = 0,
	},
	["IsActiveMomentRunning"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40707,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40706,
		retOffset = 0,
	},
	["ViewShake"] = {
		fields = {
			{
				name = "DeltaTime",
				index = 43125,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43124,
	},
	["UpdateShakeRotComponent"] = {
		fields = {
			{
				name = "Max",
				isRet = true,
				index = 43123,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
			{
				name = "Current",
				isRet = true,
				index = 43122,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "Rate",
				isRet = true,
				index = 43121,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "Time",
				index = 43120,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "DeltaTime",
				index = 43119,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 20,
		index = 43118,
	},
	["CheckShake"] = {
		fields = {
			{
				name = "MaxOffset",
				isRet = true,
				index = 43117,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
			{
				name = "Offset",
				isRet = true,
				index = 43116,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "Rate",
				isRet = true,
				index = 43115,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "Time",
				index = 43114,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 43113,
	},
	["StopViewShaking"] = {
		fields = {
		},
		dataSize = 68,
		index = 43111,
	},
	["OnCameraShake"] = {
		fields = {
			{
				name = "ShakeAction",
				index = 43108,
				className = "UGearboxSeqAct_CameraShake",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43107,
	},
	["ShakeView"] = {
		fields = {
			{
				name = "NewViewShake",
				index = 43106,
				type = ffi.typeof("struct FGearboxViewShakeInfo"),
				castTo = ffi.typeof("struct FGearboxViewShakeInfo*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 68,
		index = 43105,
	},
	["ClientDamageShake"] = {
		fields = {
			{
				name = "Damage",
				index = 43104,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 72,
		index = 43102,
	},
	["ConsoleEcho"] = {
		fields = {
			{
				name = "Text",
				index = 43101,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "bLogOutput",
				index = 43100,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 43099,
	},
	["Initialize"] = {
		fields = {
		},
		dataSize = 0,
		index = 43098,
	},
	["PostBeginPlay"] = {
		fields = {
		},
		dataSize = 0,
		index = 43097,
	},
	["TryAndSpawnLeviathanChannel"] = {
		fields = {
			{
				name = "Connection",
				index = 43096,
				className = "UNetConnection",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42186,
	},
	["GenerateNewSessionGuid"] = {
		fields = {
		},
		dataSize = 0,
		index = 43095,
	},
	["eventPlayerInput"] = {
		fields = {
			{
				name = "DeltaTime",
				index = 43263,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43262,
	},
	["SetThumbnailMesh"] = {
		fields = {
			{
				name = "Texture",
				index = 43351,
				className = "UTexture",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Mesh",
				index = 43350,
				className = "UMeshComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43349,
	},
	["FreeContext"] = {
		fields = {
			{
				name = "Context",
				index = 43348,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43347,
	},
	["FreeThumbnail"] = {
		fields = {
			{
				name = "Texture",
				index = 43346,
				className = "UTexture",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43345,
	},
	["GetThumbnail"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43338,
				castTo = ffi.typeof("struct UTexture**"),
				offset = 28
			},
			{
				name = "Context",
				index = 43344,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "TextureSizeX",
				index = 43343,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "TextureSizeY",
				index = 43342,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "UpdateType",
				index = 43341,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EThumbnailUpdate",
				flags = 32,
				offset = 16
			},
			{
				name = "SizeX",
				index = 43340,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 20
			},
			{
				name = "SizeY",
				index = 43339,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 32,
		index = 43337,
		retOffset = 28,
	},
	["FreeTexture2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43335,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Texture",
				index = 43336,
				className = "UTexture2D",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43334,
		retOffset = 4,
	},
	["GetTexture2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43333,
				castTo = ffi.typeof("struct UTexture2D**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43332,
		retOffset = 0,
	},
	["FreeRenderTexture"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43330,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Texture",
				index = 43331,
				className = "UTextureRenderTarget2D",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43329,
		retOffset = 4,
	},
	["GetRenderTexture"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43325,
				castTo = ffi.typeof("struct UTextureRenderTarget2D**"),
				offset = 12
			},
			{
				name = "InSizeX",
				index = 43328,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InSizeY",
				index = 43327,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bNeedsTwoCopies",
				index = 43326,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 43324,
		retOffset = 12,
	},
	["SetFOV"] = {
		fields = {
			{
				name = "NewFOV",
				index = 43445,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43444,
	},
	["InitGestaltAccessoryMeshDataFromParts"] = {
		fields = {
			{
				name = "MeshToBorrowBonesFrom",
				index = 43489,
				className = "USkeletalMesh",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AccessoryMatrices",
				index = 43488,
				className = "UGestaltPartMatrices",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "TargetComponent",
				index = 43487,
				className = "USkeletalMeshComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "PermutationConfiguration",
				isRet = true,
				index = 43485,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FGestaltPartPermutation"),
				castTo = ffi.typeof("struct TArray_FGestaltPartPermutation*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 24,
		index = 43484,
	},
	["InitGestaltMeshDataFromParts"] = {
		fields = {
			{
				name = "TargetComponent",
				index = 43483,
				className = "USkeletalMeshComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PartMeshNames",
				isRet = true,
				index = 43481,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FName"),
				castTo = ffi.typeof("struct TArray_FName*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 16,
		index = 43480,
	},
	["DisplayDebug"] = {
		fields = {
			{
				name = "HUD",
				index = 43513,
				className = "AHUD",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "X",
				index = 43512,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "out_YL",
				isRet = true,
				index = 43511,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "out_YPos",
				isRet = true,
				index = 43510,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
		},
		dataSize = 52,
		index = 43508,
	},
	["GetPoolName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43506,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "Index",
				index = 43507,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 28,
		index = 43504,
		retOffset = 4,
	},
	["PoolStyleString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43502,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "Pooling",
				index = 43503,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EGFxMoviePooling",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 43501,
		retOffset = 4,
	},
	["MovieStateChanged"] = {
		fields = {
			{
				name = "Movie",
				index = 43500,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42350,
	},
	["FindMovieLink"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43568,
				castTo = ffi.typeof("struct UGFxMovieDefinition**"),
				offset = 8
			},
			{
				name = "MovieName",
				index = 43569,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 16,
		index = 43567,
		retOffset = 8,
	},
	["PostMovieStart"] = {
		fields = {
			{
				name = "StartedMovie",
				index = 43566,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42295,
	},
	["SpawnPlayerMovie"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43561,
				castTo = ffi.typeof("struct UGearboxGFxMovie**"),
				offset = 16
			},
			{
				name = "Owner",
				index = 43564,
				className = "AGearboxPlayerController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "TargetActor",
				index = 43563,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
			{
				name = "ContextObject",
				index = 43562,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 20,
		index = 43560,
		retOffset = 16,
	},
	["SupportsStatePooling"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43559,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43558,
		retOffset = 0,
	},
	["GetPoolStyle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43515,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EGFxMoviePooling",
				offset = 0
			},
		},
		dataSize = 1,
		index = 43514,
		retOffset = 0,
	},
	["GetStyleDebugString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42376,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42375,
		retOffset = 0,
	},
	["eventRequiresClientInstance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43594,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43593,
		retOffset = 0,
	},
	["GetStyleDebugString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43620,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43619,
		retOffset = 0,
	},
	["eventRequiresClientInstance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43618,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43617,
		retOffset = 0,
	},
	["eventRequiresClientInstance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43622,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43621,
		retOffset = 0,
	},
	["ChangeMovieState"] = {
		fields = {
			{
				name = "TargetActor",
				index = 43652,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "State",
				index = 43651,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "Change",
				index = 43650,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EChangeStatus",
				flags = 32,
				offset = 16
			},
			{
				name = "PC",
				index = 43649,
				optional = true,
				className = "AGearboxPlayerController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
		},
		dataSize = 24,
		index = 43648,
	},
	["Unsubscribe"] = {
		fields = {
			{
				name = "PC",
				index = 43647,
				className = "AGearboxPlayerController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43646,
	},
	["Subscribe"] = {
		fields = {
			{
				name = "PC",
				index = 43645,
				className = "AGearboxPlayerController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43644,
	},
	["UnregisterMoviesDrawnTo"] = {
		fields = {
			{
				name = "PrimComp",
				index = 43643,
				className = "UPrimitiveComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "TargetActor",
				index = 43642,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43641,
	},
	["UnregisterTarget"] = {
		fields = {
			{
				name = "TargetActor",
				index = 43640,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43639,
	},
	["UnregisterMovie"] = {
		fields = {
			{
				name = "Definition",
				index = 43638,
				className = "UGFxMovieDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "TargetActor",
				index = 43637,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43636,
	},
	["RegisterMovie"] = {
		fields = {
			{
				name = "Definition",
				index = 43635,
				className = "UGFxMovieDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "TargetActor",
				index = 43634,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43633,
	},
	["GetDebugString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42198,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 8
			},
			{
				name = "Movie",
				index = 42189,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bIncludeFlags",
				index = 42190,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 40,
		index = 42187,
		retOffset = 8,
	},
	["ApplyMovieState"] = {
		fields = {
			{
				name = "Movie",
				index = 42200,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "HandlerClass",
				index = 42204,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 4
			},
		},
		dataSize = 12,
		index = 42188,
	},
	["FindMovieState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42207,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "TheState",
				index = 42206,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42199,
		retOffset = 8,
	},
	["TestState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42211,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "TheState",
				index = 42209,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "MovieState",
				isRet = true,
				index = 42210,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 8
			},
		},
		dataSize = 36,
		index = 42205,
		retOffset = 32,
	},
	["ToggleState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42220,
				castTo = ffi.typeof("int*"),
				offset = 32
			},
			{
				name = "TheState",
				index = 42218,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "MovieState",
				isRet = true,
				index = 42219,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 8
			},
		},
		dataSize = 36,
		index = 42208,
		retOffset = 32,
	},
	["EnableState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42224,
				castTo = ffi.typeof("int*"),
				offset = 36
			},
			{
				name = "TheState",
				index = 42221,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "MovieState",
				isRet = true,
				index = 42222,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 8
			},
			{
				name = "bEnable",
				index = 42223,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 40,
		index = 42217,
		retOffset = 36,
	},
	["EnableState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43665,
				castTo = ffi.typeof("int*"),
				offset = 36
			},
			{
				name = "TheState",
				index = 43668,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "MovieState",
				isRet = true,
				index = 43667,
				isOutParm = true,
				cType = ffi.typeof("struct FMovieStateStruct"),
				castTo = ffi.typeof("struct FMovieStateStruct*"),
				offset = 8
			},
			{
				name = "bEnable",
				index = 43666,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 40,
		index = 43664,
		retOffset = 36,
	},
	["InitSequence"] = {
		fields = {
			{
				name = "NewSequence",
				index = 43688,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43687,
	},
	["GetAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43686,
				castTo = ffi.typeof("struct UPawnAllegiance**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43685,
		retOffset = 0,
	},
	["GetAIDefinition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43684,
				castTo = ffi.typeof("struct UAIDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43683,
		retOffset = 0,
	},
	["GetAIComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39286,
				castTo = ffi.typeof("struct UAIComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39285,
		retOffset = 0,
	},
	["GetAIParent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43682,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 43681,
		retOffset = 0,
	},
	["GetAILocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43680,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 43679,
		retOffset = 0,
	},
	["GetAIActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43678,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43677,
		retOffset = 0,
	},
	["CanTickAI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43676,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43675,
		retOffset = 0,
	},
	["GFx_NotifyMovieDestroy"] = {
		fields = {
			{
				name = "Movie",
				index = 43722,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43721,
	},
	["GFx_NotifyMovieCreate"] = {
		fields = {
			{
				name = "Movie",
				index = 43720,
				className = "UGearboxGFxMovie",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43719,
	},
	["GFx_GetMovieActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43573,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43572,
		retOffset = 0,
	},
	["eventFinishCameraLookAt"] = {
		fields = {
		},
		dataSize = 0,
		index = 40644,
	},
	["EnableThirdPersonLookAt"] = {
		fields = {
			{
				name = "LookAtXOffset",
				index = 40643,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LookAtYOffset",
				index = 40642,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "LookAtZOffset",
				index = 40641,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "LookAtMode",
				index = 40640,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECameraLookAtMode",
				flags = 32,
				offset = 12
			},
		},
		dataSize = 13,
		index = 40639,
	},
	["BeginCameraLookAt"] = {
		fields = {
			{
				name = "LookAtTarget",
				index = 40637,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "LookAtBone",
				index = 40636,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "TargetLocation",
				index = 40635,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Zoom",
				index = 40634,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
			{
				name = "FOV",
				index = 40633,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 28
			},
			{
				name = "Duration",
				index = 40632,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 36
			},
			{
				name = "TransitionTimeIn",
				index = 40631,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 40
			},
			{
				name = "TransitionTimeOut",
				index = 40630,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 44
			},
		},
		dataSize = 48,
		index = 40629,
	},
	["eventRunStreamingDataEvent"] = {
		fields = {
			{
				name = "EventName",
				index = 43740,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "EventInstigator",
				index = 43739,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "OtherEventParticipantObject",
				index = 43738,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "IntParam",
				index = 43737,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "FloatParam",
				index = 43736,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 24,
		index = 43735,
	},
	["Evaluate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43821,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 43822,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43820,
		retOffset = 4,
	},
	["eventDenStatRemoved"] = {
		fields = {
			{
				name = "DenPawn",
				index = 43836,
				className = "APawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43835,
	},
	["eventDenStatAdded"] = {
		fields = {
			{
				name = "DenPawn",
				index = 43834,
				className = "APawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43833,
	},
	["eventEnabledStatusChanged"] = {
		fields = {
			{
				name = "bIsEnabled",
				index = 43832,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bHasActiveActors",
				index = 43831,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43830,
	},
	["eventAllActorsRemoved"] = {
		fields = {
			{
				name = "bFinishedSpawning",
				index = 43829,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43828,
	},
	["eventOnActorDeath"] = {
		fields = {
			{
				name = "DeadActor",
				index = 43827,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43826,
	},
	["eventOnSpawnActor"] = {
		fields = {
			{
				name = "SpawnedActor",
				index = 43825,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43824,
	},
	["eventInitialize"] = {
		fields = {
		},
		dataSize = 0,
		index = 43823,
	},
	["eventTriggerKismetAllSpawnedEvent"] = {
		fields = {
		},
		dataSize = 0,
		index = 43898,
	},
	["eventTriggerKismetDeathEvent"] = {
		fields = {
		},
		dataSize = 0,
		index = 43897,
	},
	["OnToggle"] = {
		fields = {
			{
				name = "Action",
				index = 43896,
				className = "USeqAct_Toggle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43895,
	},
	["UpdateOpportunityEnabledStates"] = {
		fields = {
			{
				name = "nWave",
				index = 43894,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bUpdateIfOnlyOneWave",
				index = 43893,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43892,
	},
	["UpdateKismetNotifications"] = {
		fields = {
		},
		dataSize = 0,
		index = 43891,
	},
	["Display"] = {
		fields = {
			{
				name = "DeltaSeconds",
				index = 44510,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Canvas",
				index = 44509,
				className = "UCanvas",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 44508,
	},
	["GetValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44506,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "ColumnNdx",
				index = 44507,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44505,
		retOffset = 4,
	},
	["SetValue"] = {
		fields = {
			{
				name = "ColumnNdx",
				index = 44504,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewValue",
				index = 44503,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 44502,
	},
	["AddNewColumn"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44498,
				castTo = ffi.typeof("int*"),
				offset = 20
			},
			{
				name = "ColumnColor",
				index = 44501,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "HeaderText",
				index = 44500,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "Value",
				index = 44499,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 44497,
		retOffset = 20,
	},
	["AddTitleText"] = {
		fields = {
			{
				name = "NewTitleText",
				index = 44496,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44495,
	},
	["GetDefaultRegionGameStage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44532,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "MinGameStage",
				isRet = true,
				index = 44536,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "MaxGameStage",
				isRet = true,
				index = 44535,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "AwesomeLevel",
				isRet = true,
				index = 44534,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "GameStageIncreaseOverPlayerLevel",
				isRet = true,
				index = 44533,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
		},
		dataSize = 20,
		index = 44531,
		retOffset = 16,
	},
	["TestRegionGameStage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44527,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "GameStage",
				isRet = true,
				index = 44530,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "AwesomeLevel",
				isRet = true,
				index = 44529,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "bDefaultGameStage",
				index = 44528,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 44526,
		retOffset = 12,
	},
	["GetRegionGameStage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44522,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "GameStage",
				isRet = true,
				index = 44525,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "AwesomeLevel",
				isRet = true,
				index = 44524,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "bDefaultGameStage",
				index = 44523,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 44521,
		retOffset = 12,
	},
	["SetAsDebugging"] = {
		fields = {
			{
				name = "bSetDebugging",
				index = 44580,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44579,
	},
	["AllPlayersInVolumes"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44614,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44613,
		retOffset = 0,
	},
	["PlayerIsInAVolume"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44611,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "PC",
				index = 44612,
				className = "APlayerController",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44610,
		retOffset = 4,
	},
	["IsOwnerAlwaysNetRelevant"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42773,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42772,
		retOffset = 0,
	},
	["CanPlayBehaviorData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42770,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "Data",
				isRet = true,
				index = 42771,
				isOutParm = true,
				cType = ffi.typeof("struct FSMBehavior"),
				castTo = ffi.typeof("struct FSMBehavior*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 42769,
		retOffset = 16,
	},
	["RunBehaviors"] = {
		fields = {
			{
				name = "SMBehaviors",
				isRet = true,
				index = 42767,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FSMBehavior"),
				castTo = ffi.typeof("struct TArray_FSMBehavior*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41722,
	},
	["GetCurrent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42766,
				castTo = ffi.typeof("struct USpecialMoveDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42765,
		retOffset = 0,
	},
	["GetPlayRateScale"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42764,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42763,
		retOffset = 0,
	},
	["GetDuration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42762,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42761,
		retOffset = 0,
	},
	["GetData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42760,
				castTo = ffi.typeof("struct UObject**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42759,
		retOffset = 0,
	},
	["LocalAnimFinished"] = {
		fields = {
			{
				name = "SMD",
				index = 42758,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SMData",
				isRet = true,
				index = 42757,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 4
			},
			{
				name = "bInterrupted",
				index = 42756,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 36,
		index = 41737,
	},
	["ClearQueue"] = {
		fields = {
		},
		dataSize = 0,
		index = 42755,
	},
	["StopAnyLocal"] = {
		fields = {
			{
				name = "SMNodeName",
				index = 42754,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bInterrupted",
				index = 42753,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
			{
				name = "MeshComp",
				index = 42752,
				optional = true,
				className = "USkeletalMeshComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 42751,
	},
	["StopLocal"] = {
		fields = {
			{
				name = "OldSMD",
				index = 42750,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bInterrupted",
				index = 42749,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 42748,
	},
	["StopAny"] = {
		fields = {
			{
				name = "bClearQueue",
				index = 42747,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bInterrupted",
				index = 42746,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 40200,
	},
	["Stop"] = {
		fields = {
			{
				name = "OldSMD",
				index = 42745,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bClearQueue",
				index = 42744,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bInterrupted",
				index = 42743,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 40199,
	},
	["PlayLocal"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40181,
				castTo = ffi.typeof("float*"),
				offset = 28
			},
			{
				name = "NewSMD",
				index = 42742,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PlayRateScale",
				index = 42741,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Duration",
				index = 42740,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "CallbackName",
				index = 42739,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "CallbackObject",
				index = 42738,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "Data",
				index = 42737,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 32,
		index = 40180,
		retOffset = 28,
	},
	["Queue"] = {
		fields = {
			{
				name = "NewSMD",
				index = 42736,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PlayRateScale",
				index = 42735,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Duration",
				index = 42734,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "CallbackName",
				index = 42733,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "CallbackObject",
				index = 42732,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "Data",
				index = 42731,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 28,
		index = 40186,
	},
	["Play"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40185,
				castTo = ffi.typeof("float*"),
				offset = 28
			},
			{
				name = "NewSMD",
				index = 42730,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PlayRateScale",
				index = 42729,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Duration",
				index = 42728,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "CallbackName",
				index = 42727,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "CallbackObject",
				index = 42726,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "Data",
				index = 42725,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 32,
		index = 40184,
		retOffset = 28,
	},
	["RemoveFromQueue"] = {
		fields = {
			{
				name = "SMD",
				index = 42724,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42723,
	},
	["IsQueued"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40175,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "SMD",
				index = 42722,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40174,
		retOffset = 4,
	},
	["IsPlayingClass"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42720,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "SMClass",
				index = 42721,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42719,
		retOffset = 4,
	},
	["IsPlayingAny"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40183,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40182,
		retOffset = 0,
	},
	["IsPlaying"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40173,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "SMD",
				index = 42718,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40172,
		retOffset = 4,
	},
	["GetAnimDelta"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42716,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 4
			},
			{
				name = "CustomAnimSMD",
				index = 42717,
				className = "UGearboxAnimDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 16,
		index = 42715,
		retOffset = 4,
	},
	["GetSMNode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41696,
				castTo = ffi.typeof("struct UAnimNodeSpecialMoveBlend**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41695,
		retOffset = 0,
	},
	["PlayReplicated"] = {
		fields = {
			{
				name = "NewSMData",
				index = 42714,
				type = ffi.typeof("struct FReplicatedSpecialMoveData"),
				castTo = ffi.typeof("struct FReplicatedSpecialMoveData*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 20,
		index = 42713,
	},
	["GetAnimLength"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42703,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "CustomAnimSMD",
				index = 42706,
				className = "UGearboxAnimDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bIncludeNextSMD",
				index = 42705,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
			{
				name = "SMC",
				index = 42704,
				optional = true,
				className = "USkeletalMeshComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 16,
		index = 42702,
		retOffset = 12,
	},
	["eventIsPlayingLocally"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41645,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41646,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41644,
		retOffset = 8,
	},
	["GetSMDToPlay"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41642,
				castTo = ffi.typeof("struct USpecialMoveDefinition**"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41643,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41641,
		retOffset = 8,
	},
	["Contains"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41638,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "SMD",
				index = 41640,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SMI",
				index = 41639,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 41637,
		retOffset = 12,
	},
	["eventClientFinished"] = {
		fields = {
			{
				name = "SMI",
				index = 41636,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "bInterrupted",
				index = 41635,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 41634,
	},
	["eventServerFinished"] = {
		fields = {
			{
				name = "SMI",
				index = 41633,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "bInterrupted",
				index = 41632,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 41631,
	},
	["eventClientStarted"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41628,
				castTo = ffi.typeof("float*"),
				offset = 36
			},
			{
				name = "SMI",
				index = 41630,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "SMData",
				isRet = true,
				index = 41629,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 8
			},
		},
		dataSize = 40,
		index = 41627,
		retOffset = 36,
	},
	["eventServerStarted"] = {
		fields = {
			{
				name = "SMI",
				index = 41626,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41625,
	},
	["IsLocalAuthority"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41623,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41624,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41622,
		retOffset = 8,
	},
	["eventAuthorityCanPlay"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41620,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41621,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41619,
		retOffset = 8,
	},
	["Contains"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44962,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "SMD",
				index = 44964,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SMI",
				index = 44963,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 44961,
		retOffset = 12,
	},
	["GetSMDToPlay"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44959,
				castTo = ffi.typeof("struct USpecialMoveDefinition**"),
				offset = 8
			},
			{
				name = "SMI",
				index = 44960,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44958,
		retOffset = 8,
	},
	["Contains"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44993,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "SMD",
				index = 44995,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SMI",
				index = 44994,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 44992,
		retOffset = 12,
	},
	["GetSMDToPlay"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44990,
				castTo = ffi.typeof("struct USpecialMoveDefinition**"),
				offset = 8
			},
			{
				name = "SMI",
				index = 44991,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44989,
		retOffset = 8,
	},
	["SetReplicatedSMData"] = {
		fields = {
			{
				name = "NewSMData",
				isRet = true,
				index = 44983,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 44982,
	},
	["eventServerSpecialMove_StopAny"] = {
		fields = {
		},
		dataSize = 0,
		index = 44981,
	},
	["eventServerSpecialMove_Stop"] = {
		fields = {
			{
				name = "OldSMD",
				index = 44980,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44979,
	},
	["eventServerSpecialMove_Queue"] = {
		fields = {
			{
				name = "NewSMD",
				index = 44978,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PlayRateScale",
				index = 44977,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Duration",
				index = 44976,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "CallbackName",
				index = 44975,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "CallbackObject",
				index = 44974,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "Data",
				index = 44973,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 28,
		index = 44972,
	},
	["eventServerSpecialMove_Play"] = {
		fields = {
			{
				name = "NewSMD",
				index = 44971,
				className = "USpecialMoveDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "PlayRateScale",
				index = 44970,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Duration",
				index = 44969,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "CallbackName",
				index = 44968,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "CallbackObject",
				index = 44967,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "Data",
				index = 44966,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 28,
		index = 44965,
	},
	["GetDefaultRootMotionRotationMode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41731,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ERootMotionRotationMode",
				offset = 0
			},
		},
		dataSize = 1,
		index = 41730,
		retOffset = 0,
	},
	["GetDefaultRootMotionMode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41729,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ERootMotionMode",
				offset = 0
			},
		},
		dataSize = 1,
		index = 41728,
		retOffset = 0,
	},
	["GetSkelMesh"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41701,
				castTo = ffi.typeof("struct USkeletalMeshComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41700,
		retOffset = 0,
	},
	["GetSMComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40171,
				castTo = ffi.typeof("struct USpecialMoveComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40170,
		retOffset = 0,
	},
	["GetActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41710,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41709,
		retOffset = 0,
	},
	["eventDestroyed"] = {
		fields = {
		},
		dataSize = 0,
		index = 45034,
	},
	["NotifyModifiedTerminal"] = {
		fields = {
		},
		dataSize = 0,
		index = 45033,
	},
	["TriggerBehavior"] = {
		fields = {
			{
				name = "OutputName",
				index = 38895,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38876,
	},
	["GetRangeValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38893,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "Range",
				isRet = true,
				index = 38894,
				isOutParm = true,
				cType = ffi.typeof("struct FAIRange"),
				castTo = ffi.typeof("struct FAIRange*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 38892,
		retOffset = 8,
	},
	["RangeIsValid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38890,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "Range",
				isRet = true,
				index = 38891,
				isOutParm = true,
				cType = ffi.typeof("struct FAIRange"),
				castTo = ffi.typeof("struct FAIRange*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 38889,
		retOffset = 8,
	},
	["Finish"] = {
		fields = {
			{
				name = "bFailed",
				index = 38888,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38887,
	},
	["IsRunning"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38886,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38885,
		retOffset = 0,
	},
	["eventScriptCleanUp"] = {
		fields = {
		},
		dataSize = 0,
		index = 38884,
	},
	["eventCanRun"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38883,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 38882,
		retOffset = 0,
	},
	["eventActivateEvent"] = {
		fields = {
			{
				name = "EventName",
				index = 38881,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38880,
	},
	["eventUpdate"] = {
		fields = {
		},
		dataSize = 0,
		index = 38879,
	},
	["eventInit"] = {
		fields = {
		},
		dataSize = 0,
		index = 38878,
	},
	["eventStop"] = {
		fields = {
		},
		dataSize = 0,
		index = 38877,
	},
	["eventStart"] = {
		fields = {
		},
		dataSize = 0,
		index = 38875,
	},
	["eventInterruptSequence"] = {
		fields = {
			{
				name = "InterruptingSequence",
				index = 38873,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38872,
	},
	["eventStopSequence"] = {
		fields = {
		},
		dataSize = 0,
		index = 38871,
	},
	["eventStartSequence"] = {
		fields = {
		},
		dataSize = 0,
		index = 38870,
	},
	["ExecuteSequence"] = {
		fields = {
			{
				name = "SequenceTemplate",
				index = 38869,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38868,
	},
	["Sleep"] = {
		fields = {
			{
				name = "Seconds",
				index = 38867,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38866,
	},
	["RunSubSequence"] = {
		fields = {
			{
				name = "SubSequence",
				index = 38865,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38864,
	},
	["InterruptLatentAction"] = {
		fields = {
		},
		dataSize = 0,
		index = 38863,
	},
	["DoRuleSetPop"] = {
		fields = {
		},
		dataSize = 0,
		index = 38862,
	},
	["DoRuleSetPush"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38860,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "NewRuleSet",
				index = 38861,
				className = "URuleSet",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38859,
		retOffset = 4,
	},
	["DoRuleSetSwitch"] = {
		fields = {
			{
				name = "NewRuleSet",
				index = 38858,
				className = "URuleSet",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38857,
	},
	["PreventNewRulesFromStarting"] = {
		fields = {
		},
		dataSize = 0,
		index = 38856,
	},
	["GetRuleNative"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38855,
				castTo = ffi.typeof("struct URule**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38854,
		retOffset = 0,
	},
	["GetActionSequence"] = {
		fields = {
			{
				name = "Template",
				index = 38853,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutSequence",
				isRet = true,
				index = 38852,
				isOutParm = true,
				castTo = ffi.typeof("struct UActionSequence**"),
				offset = 4
			},
		},
		dataSize = 8,
		index = 38851,
	},
	["IsInLabel"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38849,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "TestLabel",
				index = 38850,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 38848,
		retOffset = 8,
	},
	["IsAtomic"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38847,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38846,
		retOffset = 0,
	},
	["StopAtomic"] = {
		fields = {
		},
		dataSize = 0,
		index = 38845,
	},
	["StartAtomic"] = {
		fields = {
		},
		dataSize = 0,
		index = 38844,
	},
	["IsActionReadyToFinish"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38843,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38842,
		retOffset = 0,
	},
	["IsActionReadyToFinish"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39151,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39150,
		retOffset = 0,
	},
	["eventPostMovement"] = {
		fields = {
		},
		dataSize = 0,
		index = 39134,
	},
	["eventPreMovement"] = {
		fields = {
		},
		dataSize = 0,
		index = 39133,
	},
	["eventPrePathFind"] = {
		fields = {
		},
		dataSize = 0,
		index = 39132,
	},
	["eventInterruptSequence"] = {
		fields = {
			{
				name = "InterruptingSequence",
				index = 39131,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39130,
	},
	["eventStopSequence"] = {
		fields = {
		},
		dataSize = 0,
		index = 39128,
	},
	["eventStartSequence"] = {
		fields = {
		},
		dataSize = 0,
		index = 39113,
	},
	["MovePawnToDestinationLocation"] = {
		fields = {
			{
				name = "GoalLocation",
				index = 39112,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "NewUsePreciseArrival",
				index = 39111,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 39110,
	},
	["TakeDebugSnapshotMoveFailure"] = {
		fields = {
			{
				name = "Cause",
				index = 39109,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMovementFinishedCause",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 39108,
	},
	["SetMaxMovementSpeed"] = {
		fields = {
			{
				name = "NewMaxSpeed",
				index = 39107,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMovementSpeed",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 39106,
	},
	["EndMovePawnToDestinationLocation"] = {
		fields = {
		},
		dataSize = 0,
		index = 39105,
	},
	["EvaluateActionList"] = {
		fields = {
		},
		dataSize = 4,
		index = 39161,
	},
	["OverrideNextSequenceToRun"] = {
		fields = {
			{
				name = "NewSequence",
				index = 39160,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39159,
	},
	["GetRandomAction"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39158,
				castTo = ffi.typeof("struct UActionSequence**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39157,
		retOffset = 0,
	},
	["GetAIRangeTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38740,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "InRange",
				index = 38741,
				type = ffi.typeof("struct FAIRange"),
				castTo = ffi.typeof("struct FAIRange*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 12,
		index = 38739,
		retOffset = 8,
	},
	["DrawAITree"] = {
		fields = {
			{
				name = "Canvas",
				index = 38738,
				className = "UCanvas",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38737,
	},
	["LogDemigodHolds"] = {
		fields = {
		},
		dataSize = 12,
		index = 38731,
	},
	["ReleaseDialog"] = {
		fields = {
			{
				name = "HoldName",
				index = 38730,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38729,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38728,
	},
	["HoldDialog"] = {
		fields = {
			{
				name = "HoldName",
				index = 38727,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38726,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38725,
	},
	["DialogOnHold"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38724,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38723,
		retOffset = 0,
	},
	["ReleaseGod"] = {
		fields = {
			{
				name = "HoldName",
				index = 38722,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38721,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38720,
	},
	["HoldGod"] = {
		fields = {
			{
				name = "HoldName",
				index = 38719,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38718,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38717,
	},
	["GodOnHold"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38716,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38715,
		retOffset = 0,
	},
	["ReleaseDemigod"] = {
		fields = {
			{
				name = "HoldName",
				index = 38714,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38713,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38712,
	},
	["HoldDemigod"] = {
		fields = {
			{
				name = "HoldName",
				index = 38711,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38710,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38709,
	},
	["DemigodOnHold"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38708,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38707,
		retOffset = 0,
	},
	["ReleaseMovement"] = {
		fields = {
			{
				name = "HoldName",
				index = 38706,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38705,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38704,
	},
	["HoldMovement"] = {
		fields = {
			{
				name = "HoldName",
				index = 38703,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38702,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38701,
	},
	["MovementOnHold"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38700,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38699,
		retOffset = 0,
	},
	["ReleaseTarget"] = {
		fields = {
			{
				name = "HoldName",
				index = 38698,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38697,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38696,
	},
	["HoldTarget"] = {
		fields = {
			{
				name = "HoldName",
				index = 38695,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38694,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38693,
	},
	["TargetOnHold"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38692,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38691,
		retOffset = 0,
	},
	["Release"] = {
		fields = {
			{
				name = "HoldName",
				index = 38690,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38689,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38688,
	},
	["Hold"] = {
		fields = {
			{
				name = "HoldName",
				index = 38687,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Tag",
				index = 38686,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 38685,
	},
	["OnHold"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38683,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38682,
		retOffset = 0,
	},
	["ForceUpdateTargets"] = {
		fields = {
		},
		dataSize = 0,
		index = 38684,
	},
	["TargetChanged"] = {
		fields = {
			{
				name = "OldTarget",
				index = 38681,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "NewTarget",
				index = 38680,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 38679,
	},
	["SetTarget"] = {
		fields = {
			{
				name = "NewTarget",
				index = 38678,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38677,
	},
	["SetScriptedTarget"] = {
		fields = {
			{
				name = "NewScriptedTarget",
				index = 38676,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38675,
	},
	["GetTargetRecordFor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38672,
				castTo = ffi.typeof("struct UMindTargetInfo**"),
				offset = 8
			},
			{
				name = "Target",
				index = 38674,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bTryParent",
				index = 38673,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 38671,
		retOffset = 8,
	},
	["GetTargetRecord"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38669,
				castTo = ffi.typeof("struct UMindTargetInfo**"),
				offset = 4
			},
			{
				name = "bTryParent",
				index = 38670,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38668,
		retOffset = 4,
	},
	["IsTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38666,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TestTarget",
				index = 38667,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38665,
		retOffset = 4,
	},
	["GetTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38664,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38663,
		retOffset = 0,
	},
	["HasTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38662,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38661,
		retOffset = 0,
	},
	["ShouldRemoveTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38659,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TargetRec",
				index = 38660,
				className = "UMindTargetInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38658,
		retOffset = 4,
	},
	["TargetRemoved"] = {
		fields = {
			{
				name = "TargetRec",
				index = 38657,
				className = "UMindTargetInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38656,
	},
	["ForceRemoveTarget"] = {
		fields = {
			{
				name = "Target",
				index = 38655,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38654,
	},
	["ValidCurrentTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38652,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TargetRec",
				index = 38653,
				className = "UMindTargetInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38651,
		retOffset = 4,
	},
	["ValidTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38649,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Target",
				index = 38650,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38648,
		retOffset = 4,
	},
	["PrioritizeTarget"] = {
		fields = {
			{
				name = "TargetRec",
				index = 38647,
				className = "UMindTargetInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38646,
	},
	["CalcTargetInfo"] = {
		fields = {
			{
				name = "TargetRec",
				index = 38645,
				className = "UMindTargetInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38644,
	},
	["ChooseBestTarget"] = {
		fields = {
		},
		dataSize = 0,
		index = 38643,
	},
	["InheritTargets"] = {
		fields = {
			{
				name = "Parent",
				index = 38642,
				className = "UAIComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38641,
	},
	["RemoveTargets"] = {
		fields = {
		},
		dataSize = 0,
		index = 38640,
	},
	["FindTargets"] = {
		fields = {
		},
		dataSize = 0,
		index = 38639,
	},
	["GetTargets"] = {
		fields = {
		},
		dataSize = 0,
		index = 38638,
	},
	["InitializeTargetRecord"] = {
		fields = {
			{
				name = "TargetRec",
				index = 38637,
				className = "UMindTargetInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38636,
	},
	["NotifyAttackedBy"] = {
		fields = {
			{
				name = "Attacker",
				index = 38635,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 38634,
	},
	["AddTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38632,
				castTo = ffi.typeof("struct UMindTargetInfo**"),
				offset = 4
			},
			{
				name = "NewTarget",
				index = 38633,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 38631,
		retOffset = 4,
	},
	["GetParentComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38630,
				castTo = ffi.typeof("struct UAIComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38629,
		retOffset = 0,
	},
	["GetAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38628,
				castTo = ffi.typeof("struct UPawnAllegiance**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38627,
		retOffset = 0,
	},
	["ClearState"] = {
		fields = {
		},
		dataSize = 0,
		index = 38626,
	},
	["ActivateEvent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38623,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "EventName",
				index = 38624,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 38622,
		retOffset = 8,
	},
	["Evaluate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39291,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 39292,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39290,
		retOffset = 4,
	},
	["FlushPools"] = {
		fields = {
		},
		dataSize = 0,
		index = 39558,
	},
	["ReturnAIDef"] = {
		fields = {
			{
				name = "InAIDef",
				isRet = true,
				index = 39557,
				isOutParm = true,
				castTo = ffi.typeof("struct UAIDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39556,
	},
	["GetAIDef"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39553,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "AIDefTemplate",
				index = 39555,
				className = "UAIDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutAIDef",
				isRet = true,
				index = 39554,
				isOutParm = true,
				castTo = ffi.typeof("struct UAIDefinition**"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 39552,
		retOffset = 8,
	},
	["ReturnTargetRecord"] = {
		fields = {
			{
				name = "InTargetRecord",
				isRet = true,
				index = 39551,
				isOutParm = true,
				castTo = ffi.typeof("struct UMindTargetInfo**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39550,
	},
	["GetTargetRecord"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39547,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "InfoClass",
				index = 39549,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "OutTargetRecord",
				isRet = true,
				index = 39548,
				isOutParm = true,
				castTo = ffi.typeof("struct UMindTargetInfo**"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 39546,
		retOffset = 8,
	},
	["ReturnActionSequence"] = {
		fields = {
			{
				name = "InSequence",
				isRet = true,
				index = 39545,
				isOutParm = true,
				castTo = ffi.typeof("struct UActionSequence**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39544,
	},
	["GetActionSequence"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39541,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SequenceTemplate",
				index = 39543,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutSequence",
				isRet = true,
				index = 39542,
				isOutParm = true,
				castTo = ffi.typeof("struct UActionSequence**"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 39540,
		retOffset = 8,
	},
	["ReturnRuleSet"] = {
		fields = {
			{
				name = "InRuleSet",
				isRet = true,
				index = 39539,
				isOutParm = true,
				castTo = ffi.typeof("struct URuleSet**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39538,
	},
	["GetRuleSetFromArchetype"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39535,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "RuleSetArchetype",
				index = 39537,
				className = "URuleSet",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutRuleSet",
				isRet = true,
				index = 39536,
				isOutParm = true,
				castTo = ffi.typeof("struct URuleSet**"),
				offset = 4
			},
			{
				name = "CurRunningRules",
				isRet = true,
				index = 39533,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_URulePtr"),
				castTo = ffi.typeof("struct TArray_URulePtr*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 39532,
		retOffset = 20,
	},
	["ReturnKnowledgeRecord"] = {
		fields = {
			{
				name = "InKR",
				isRet = true,
				index = 39531,
				isOutParm = true,
				castTo = ffi.typeof("struct UKnowledgeRecord**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39530,
	},
	["GetKnowledgeRecordListFromArchetypes"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39529,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "KnowledgeRecordTemplates",
				index = 39525,
				type = ffi.typeof("struct TArray_UKnowledgeRecordPtr"),
				castTo = ffi.typeof("struct TArray_UKnowledgeRecordPtr*"),
				flags = 8,
				offset = 0
			},
			{
				name = "KnowledgeRecords",
				isRet = true,
				index = 39527,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UKnowledgeRecordPtr"),
				castTo = ffi.typeof("struct TArray_UKnowledgeRecordPtr*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 28,
		index = 39524,
		retOffset = 24,
	},
	["GetKnowledgeRecordFromArchetype"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39521,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "InKR",
				index = 39523,
				className = "UKnowledgeRecord",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutKR",
				isRet = true,
				index = 39522,
				isOutParm = true,
				castTo = ffi.typeof("struct UKnowledgeRecord**"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 39520,
		retOffset = 8,
	},
	["GetKnowledgeRecord"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39517,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "KnowledgeRecordClass",
				index = 39519,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "OutKR",
				isRet = true,
				index = 39518,
				isOutParm = true,
				castTo = ffi.typeof("struct UKnowledgeRecord**"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 39516,
		retOffset = 8,
	},
	["ReturnRule"] = {
		fields = {
			{
				name = "InRule",
				isRet = true,
				index = 39515,
				isOutParm = true,
				castTo = ffi.typeof("struct URule**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39514,
	},
	["GetRuleFromArchetype"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39511,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "InRule",
				index = 39513,
				className = "URule",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutRule",
				isRet = true,
				index = 39512,
				isOutParm = true,
				castTo = ffi.typeof("struct URule**"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 39510,
		retOffset = 8,
	},
	["GetRule"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39507,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "RuleClass",
				index = 39509,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "OutRule",
				isRet = true,
				index = 39508,
				isOutParm = true,
				castTo = ffi.typeof("struct URule**"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 39506,
		retOffset = 8,
	},
	["ReturnRuleEngine"] = {
		fields = {
			{
				name = "InRuleEngine",
				index = 39505,
				className = "URuleEngine",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39504,
	},
	["FreeRuleEngine"] = {
		fields = {
			{
				name = "InRuleEngine",
				index = 41571,
				className = "URuleEngine",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41570,
	},
	["GetRuleEngineFromTemplate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41567,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "OutRuleEngine",
				isRet = true,
				index = 41569,
				isOutParm = true,
				castTo = ffi.typeof("struct URuleEngine**"),
				offset = 0
			},
			{
				name = "RuleEngineTemplate",
				index = 41568,
				className = "URuleEngine",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 41566,
		retOffset = 8,
	},
	["Evaluate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39571,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 39572,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39570,
		retOffset = 4,
	},
	["Evaluate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39618,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 39619,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 39617,
		retOffset = 4,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40098,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40097,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40096,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40095,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40094,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40093,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 88,
		index = 40091,
	},
	["GetLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40085,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 20
			},
			{
				name = "SelectionParam",
				index = 40090,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "MessageBehaviorLogic",
				flags = 32,
				offset = 0
			},
			{
				name = "ContextObject",
				index = 40089,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40088,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "MyInstigatorObject",
				index = 40087,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "OtherEventParticipantObject",
				index = 40086,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
		},
		dataSize = 44,
		index = 40083,
		retOffset = 20,
	},
	["GetMessageParameter"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40077,
				castTo = ffi.typeof("struct UObject**"),
				offset = 20
			},
			{
				name = "SelectionParam",
				index = 40082,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "MessageBehaviorLogic",
				flags = 32,
				offset = 0
			},
			{
				name = "ContextObject",
				index = 40081,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40080,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "MyInstigatorObject",
				index = 40079,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "OtherEventParticipantObject",
				index = 40078,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
		},
		dataSize = 24,
		index = 40076,
		retOffset = 20,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40110,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40109,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40108,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40107,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40106,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40105,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 56,
		index = 40104,
	},
	["CalculateVantageToPoint"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40780,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "pLooker",
				index = 40782,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "TargetPoint",
				isRet = true,
				index = 40781,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 40779,
		retOffset = 16,
	},
	["CalculateTargetExposure"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40776,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "pLooker",
				index = 40778,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "pTarget",
				index = 40777,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 40775,
		retOffset = 8,
	},
	["eventGetTemplateClass"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40898,
				castTo = ffi.typeof("struct UClass**"),
				offset = 4
			},
			{
				name = "TemplateObject",
				index = 40899,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40897,
		retOffset = 4,
	},
	["eventGetZoneForDistance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40903,
				castTo = ffi.typeof("struct UFiringZoneDefinition**"),
				offset = 4
			},
			{
				name = "Distance",
				index = 40904,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 40902,
		retOffset = 4,
	},
	["ApplyFlagInitializationData"] = {
		fields = {
			{
				name = "FlagsToSet",
				isRet = true,
				index = 40926,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FFlagDefinitionInitialization"),
				castTo = ffi.typeof("struct TArray_FFlagDefinitionInitialization*"),
				TArray = true,
				offset = 0
			},
			{
				name = "ContextSource",
				index = 40928,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 40925,
	},
	["ResolveContext"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40923,
				castTo = ffi.typeof("struct UObject**"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 40924,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40922,
		retOffset = 4,
	},
	["SetTrueTimed"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40919,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "ContextSource",
				index = 40921,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "TimeSeconds",
				index = 40920,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 40918,
		retOffset = 8,
	},
	["SetValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40915,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "ContextSource",
				index = 40917,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Value",
				index = 40916,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 40914,
		retOffset = 8,
	},
	["Evaluate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40985,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ContextSource",
				index = 40986,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40984,
		retOffset = 4,
	},
	["InitializeFromDefinition"] = {
		fields = {
			{
				name = "InDefinition",
				index = 41027,
				className = "UGbxMessageDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "RadiusContextSource",
				index = 41026,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "InSender",
				index = 41025,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "InSubject",
				index = 41024,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "ManualSenderAllegiance",
				index = 41023,
				optional = true,
				className = "UPawnAllegiance",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
		},
		dataSize = 20,
		index = 40101,
	},
	["RemoveListener"] = {
		fields = {
			{
				name = "InListener",
				index = 41040,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41039,
	},
	["AddListener"] = {
		fields = {
			{
				name = "InListener",
				index = 41038,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41037,
	},
	["PostMessage"] = {
		fields = {
			{
				name = "Message",
				index = 41036,
				className = "UGbxMessage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41035,
	},
	["AllocateMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40100,
				castTo = ffi.typeof("struct UGbxMessage**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40099,
		retOffset = 0,
	},
	["InitSequence"] = {
		fields = {
			{
				name = "NewSequence",
				index = 42615,
				className = "UActionSequence",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42614,
	},
	["GetAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42613,
				castTo = ffi.typeof("struct UPawnAllegiance**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42612,
		retOffset = 0,
	},
	["GetAIDefinition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42611,
				castTo = ffi.typeof("struct UAIDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42610,
		retOffset = 0,
	},
	["GetAIComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42609,
				castTo = ffi.typeof("struct UAIComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42608,
		retOffset = 0,
	},
	["GetAIParent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42607,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 42606,
		retOffset = 0,
	},
	["GetAILocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42605,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 42604,
		retOffset = 0,
	},
	["GetAIActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42603,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42602,
		retOffset = 0,
	},
	["CanTickAI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42601,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42600,
		retOffset = 0,
	},
	["InGodMode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42599,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42598,
		retOffset = 0,
	},
	["PawnDied"] = {
		fields = {
			{
				name = "inPawn",
				index = 42597,
				className = "APawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42596,
	},
	["OnTargetPriority"] = {
		fields = {
			{
				name = "inAction",
				index = 42592,
				className = "UGearboxSeqAct_TargetPriority",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42591,
	},
	["Behavior_SetCanTarget"] = {
		fields = {
			{
				name = "ChangeStatus",
				index = 42590,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EChangeStatus",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 42589,
	},
	["GetNoTargetAllEnemies"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42588,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42587,
		retOffset = 0,
	},
	["SetNoTargetAllEnemies"] = {
		fields = {
			{
				name = "bNoTarget",
				index = 42586,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42585,
	},
	["eventClearScriptedMoveTarget"] = {
		fields = {
		},
		dataSize = 0,
		index = 42584,
	},
	["eventIsCloseEnoughToScriptedMoveTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39140,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39139,
		retOffset = 0,
	},
	["eventGetWeaponFireLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42583,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 42582,
		retOffset = 0,
	},
	["ActivateEventRule"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42580,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "RuleEventName",
				index = 42581,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42579,
		retOffset = 8,
	},
	["AddHitTargetRecord"] = {
		fields = {
			{
				name = "HitByPawn",
				index = 42578,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "NewHitLocation",
				index = 42577,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 4
			},
			{
				name = "flNewDamage",
				index = 42576,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 42575,
	},
	["StopMovement"] = {
		fields = {
		},
		dataSize = 0,
		index = 42574,
	},
	["eventPossess"] = {
		fields = {
			{
				name = "inPawn",
				index = 42573,
				className = "APawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bVehicleTransition",
				index = 42572,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 24,
		index = 42571,
	},
	["GetGearboxRuleEngine"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42570,
				castTo = ffi.typeof("struct UGearboxRuleEngine**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42569,
		retOffset = 0,
	},
	["GetRuleEngine"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42568,
				castTo = ffi.typeof("struct URuleEngine**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42567,
		retOffset = 0,
	},
	["NotifyShotAtBy"] = {
		fields = {
			{
				name = "ShootingPawn",
				index = 42566,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42565,
	},
	["FindCoverAndClaim"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42558,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "CoverSearchOrigin",
				index = 42564,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "LocationRequest",
				index = 42563,
				className = "UPawnMoveLocationRequest",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "OutDestination",
				isRet = true,
				index = 42562,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "MinSearchRadius",
				index = 42561,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
			{
				name = "MaxSearchRadius",
				index = 42560,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 32
			},
			{
				name = "bEnactCoverChanges",
				index = 42559,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 36
			},
		},
		dataSize = 44,
		index = 42557,
		retOffset = 40,
	},
	["UpdateRuleEngineKnowledge"] = {
		fields = {
			{
				name = "aKDBClass",
				index = 42556,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42555,
	},
	["GetCurrentTargetInfo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42553,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "OutTargetRec",
				isRet = true,
				index = 42554,
				isOutParm = true,
				castTo = ffi.typeof("struct UMindTargetInfo**"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 42552,
		retOffset = 4,
	},
	["IsSameAllegianceMind"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42550,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "aMind",
				index = 42551,
				className = "AGearboxMind",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42549,
		retOffset = 4,
	},
	["IsSameAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42547,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "anObject",
				index = 42548,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42546,
		retOffset = 4,
	},
	["IsNeutralMind"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42544,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "aMind",
				index = 42545,
				className = "AGearboxMind",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42543,
		retOffset = 4,
	},
	["IsNeutral"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42541,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "anObject",
				index = 42542,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42540,
		retOffset = 4,
	},
	["IsFriendlyMind"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42538,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "aMind",
				index = 42539,
				className = "AGearboxMind",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42537,
		retOffset = 4,
	},
	["IsFriendly"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42535,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "anObject",
				index = 42536,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42534,
		retOffset = 4,
	},
	["IsEnemyMind"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42532,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "aMind",
				index = 42533,
				className = "AGearboxMind",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42531,
		retOffset = 4,
	},
	["IsEnemy"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42529,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "anObject",
				index = 42530,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42528,
		retOffset = 4,
	},
	["WantsToWalk"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42527,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42526,
		retOffset = 0,
	},
	["SetWantsToWalk"] = {
		fields = {
			{
				name = "bInWantsToWalk",
				index = 42525,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42524,
	},
	["GetFacingPolicy"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42523,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFacingPolicy",
				offset = 0
			},
		},
		dataSize = 1,
		index = 42522,
		retOffset = 0,
	},
	["SetFacingPolicy"] = {
		fields = {
			{
				name = "NewFacingPolicy",
				index = 42521,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFacingPolicy",
				flags = 32,
				offset = 0
			},
			{
				name = "NewFacingActor",
				index = 42520,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "NewFacingVector",
				index = 42519,
				optional = true,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 20,
		index = 38905,
	},
	["GetCurrentTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 38908,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 38907,
		retOffset = 0,
	},
	["RemoveEnemyFromQueue"] = {
		fields = {
			{
				name = "Target",
				index = 42518,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42517,
	},
	["GetNavigationHandle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42516,
				castTo = ffi.typeof("struct UGearboxNavigationHandle**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42515,
		retOffset = 0,
	},
	["IsChangingDirection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41925,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41924,
		retOffset = 0,
	},
	["IsMantlingOverCoverInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41923,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41922,
		retOffset = 0,
	},
	["IsReturnFromPeekInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41921,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41920,
		retOffset = 0,
	},
	["IsPeekTransitionInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41919,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41918,
		retOffset = 0,
	},
	["IsPeekedUp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41916,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "bTransitionCounts",
				index = 41917,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41915,
		retOffset = 4,
	},
	["IsReturnFromLeanOutInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41914,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41913,
		retOffset = 0,
	},
	["IsLeanOutTransitionInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41912,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41911,
		retOffset = 0,
	},
	["IsLeanedOut"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41909,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "bTransitionCounts",
				index = 41910,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41908,
		retOffset = 4,
	},
	["IsReturnFromPopUpInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41907,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41906,
		retOffset = 0,
	},
	["IsPopUpTransitionInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41905,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41904,
		retOffset = 0,
	},
	["IsPoppedUp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41902,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "bTransitionCounts",
				index = 41903,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41901,
		retOffset = 4,
	},
	["IsExecutingAnyTransition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41900,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41899,
		retOffset = 0,
	},
	["GetDesiredState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41898,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EGearboxCoverState",
				offset = 0
			},
		},
		dataSize = 1,
		index = 41897,
		retOffset = 0,
	},
	["GetCurrentTransition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41896,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EGearboxCoverTransition",
				offset = 0
			},
		},
		dataSize = 1,
		index = 41895,
		retOffset = 0,
	},
	["OnMantleOverCoverAnimEnd"] = {
		fields = {
		},
		dataSize = 0,
		index = 41894,
	},
	["OnTransitionAnimEndEx"] = {
		fields = {
		},
		dataSize = 0,
		index = 41893,
	},
	["OnTransitionAnimEnd"] = {
		fields = {
			{
				name = "Transition",
				index = 41892,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EGearboxCoverTransition",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41891,
	},
	["OnDismountAnimEnd"] = {
		fields = {
		},
		dataSize = 0,
		index = 41890,
	},
	["OnMountAnimEnd"] = {
		fields = {
		},
		dataSize = 0,
		index = 41889,
	},
	["MantleOverCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41886,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "CoverActor",
				index = 41888,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "CoverSlotNdx",
				index = 41887,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 41885,
		retOffset = 8,
	},
	["ReturnToCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41884,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41883,
		retOffset = 0,
	},
	["LeanOutForFiring"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41881,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "BlindFire",
				index = 41882,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41880,
		retOffset = 4,
	},
	["PopUpForFiring"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41878,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "BlindFire",
				index = 41879,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41877,
		retOffset = 4,
	},
	["Peek"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41876,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41875,
		retOffset = 0,
	},
	["DetachFromCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41874,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41873,
		retOffset = 0,
	},
	["DismountCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41871,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "DismountType",
				index = 41872,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EGearboxCoverStateMetaData",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41870,
		retOffset = 4,
	},
	["ClaimAndMountCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41867,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "TheCoverLink",
				index = 41869,
				className = "ACoverLink",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SlotNdx",
				index = 41868,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 41866,
		retOffset = 8,
	},
	["MountDesiredCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41865,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41864,
		retOffset = 0,
	},
	["ClearDesiredCover"] = {
		fields = {
		},
		dataSize = 0,
		index = 41863,
	},
	["GetCurrentCoverLocationAndRotation"] = {
		fields = {
			{
				name = "CoverLoc",
				isRet = true,
				index = 41862,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
			{
				name = "CoverRot",
				isRet = true,
				index = 41861,
				isOutParm = true,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 12
			},
		},
		dataSize = 24,
		index = 41860,
	},
	["GetDesiredCoverLocationAndRotation"] = {
		fields = {
			{
				name = "CoverLoc",
				isRet = true,
				index = 41859,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
			{
				name = "CoverRot",
				isRet = true,
				index = 41858,
				isOutParm = true,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 12
			},
		},
		dataSize = 24,
		index = 41857,
	},
	["HasDesiredCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41856,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41855,
		retOffset = 0,
	},
	["GetLastCoverHeight"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41854,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECoverType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 41853,
		retOffset = 0,
	},
	["GetCurrentCoverHeight"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41852,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECoverType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 41851,
		retOffset = 0,
	},
	["GetDesiredCoverHeight"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41850,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECoverType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 41849,
		retOffset = 0,
	},
	["WasCoveredFrom"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41847,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "ThreatLocation",
				index = 41848,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41846,
		retOffset = 12,
	},
	["WillBeCoveredFrom"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41844,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "ThreatLocation",
				index = 41845,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41843,
		retOffset = 12,
	},
	["IsCoveredFrom"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41841,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "ThreatLocation",
				index = 41842,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41840,
		retOffset = 12,
	},
	["IsDismountInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41839,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41838,
		retOffset = 0,
	},
	["IsMountInProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41837,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41836,
		retOffset = 0,
	},
	["WasMountedOnCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41835,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41834,
		retOffset = 0,
	},
	["IsMountedOnCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41833,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41832,
		retOffset = 0,
	},
	["IsUsingCover"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41831,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41830,
		retOffset = 0,
	},
	["OnCoverStateChanged"] = {
		fields = {
		},
		dataSize = 0,
		index = 41829,
	},
	["GetLastCover"] = {
		fields = {
			{
				name = "OutCoverActor",
				isRet = true,
				index = 41828,
				isOutParm = true,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
			{
				name = "OutSlotNdx",
				isRet = true,
				index = 41827,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 8,
		index = 41826,
	},
	["GetCurrentCover"] = {
		fields = {
			{
				name = "OutCoverActor",
				isRet = true,
				index = 41825,
				isOutParm = true,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
			{
				name = "OutSlotNdx",
				isRet = true,
				index = 41824,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 8,
		index = 41823,
	},
	["GetDesiredCover"] = {
		fields = {
			{
				name = "OutCoverActor",
				isRet = true,
				index = 41822,
				isOutParm = true,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
			{
				name = "OutSlotNdx",
				isRet = true,
				index = 41821,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 8,
		index = 41820,
	},
	["FindCoverAndClaim"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41812,
				castTo = ffi.typeof("BOOL*"),
				offset = 44
			},
			{
				name = "TheMind",
				index = 41819,
				className = "AGearboxMind",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "CoverSearchOrigin",
				index = 41818,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 4
			},
			{
				name = "LocationRequest",
				index = 41817,
				className = "UPawnMoveLocationRequest",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
			{
				name = "OutDestination",
				isRet = true,
				index = 41816,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 20
			},
			{
				name = "MinSearchRadius",
				index = 41815,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 32
			},
			{
				name = "MaxSearchRadius",
				index = 41814,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 36
			},
			{
				name = "bEnactCoverChanges",
				index = 41813,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 48,
		index = 41811,
		retOffset = 44,
	},
	["Initialize"] = {
		fields = {
			{
				name = "P",
				index = 41810,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41809,
	},
	["SetDesiredMovementSpeed"] = {
		fields = {
			{
				name = "Speed",
				index = 42693,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMovementSpeed",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 39129,
	},
	["ClearAnchor"] = {
		fields = {
		},
		dataSize = 0,
		index = 42692,
	},
	["GetNearestPositionOnNavMesh"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42685,
				castTo = ffi.typeof("BOOL*"),
				offset = 160
			},
			{
				name = "Radius",
				index = 42691,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TestLoc",
				index = 42690,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 4
			},
			{
				name = "NearestPos",
				isRet = true,
				index = 42689,
				isOutParm = true,
				cType = ffi.typeof("struct FBasedPosition"),
				castTo = ffi.typeof("struct FBasedPosition*"),
				offset = 16
			},
			{
				name = "PolyUsableCheckParams",
				isRet = true,
				index = 42688,
				isOutParm = true,
				cType = ffi.typeof("struct FNavMeshPathParams"),
				castTo = ffi.typeof("struct FNavMeshPathParams*"),
				offset = 68
			},
			{
				name = "NearestPoly",
				isRet = true,
				index = 42687,
				isOutParm = true,
				cType = ffi.typeof("struct FGBXNavMeshPolyRef"),
				castTo = ffi.typeof("struct FGBXNavMeshPolyRef*"),
				offset = 148
			},
			{
				name = "bAnyHeight",
				index = 42686,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 156
			},
		},
		dataSize = 164,
		index = 42684,
		retOffset = 160,
	},
	["GetNavMeshPolyForPoint"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42680,
				castTo = ffi.typeof("BOOL*"),
				offset = 100
			},
			{
				name = "Point",
				index = 42683,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "FoundPoly",
				isRet = true,
				index = 42682,
				isOutParm = true,
				cType = ffi.typeof("struct FGBXNavMeshPolyRef"),
				castTo = ffi.typeof("struct FGBXNavMeshPolyRef*"),
				offset = 12
			},
			{
				name = "PolyUsableCheckParams",
				isRet = true,
				index = 42681,
				isOutParm = true,
				cType = ffi.typeof("struct FNavMeshPathParams"),
				castTo = ffi.typeof("struct FNavMeshPathParams*"),
				offset = 20
			},
		},
		dataSize = 104,
		index = 42679,
		retOffset = 100,
	},
	["IsDoingSpecialMove"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42678,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42677,
		retOffset = 0,
	},
	["InFinalPoly"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42675,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "TestLoc",
				index = 42676,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 42674,
		retOffset = 12,
	},
	["NeedsRegularWalkingPhysics"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42673,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42672,
		retOffset = 0,
	},
	["PopulatePathfindingParamCache"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42671,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42670,
		retOffset = 0,
	},
	["TrySpecialMove"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42668,
				castTo = ffi.typeof("BOOL*"),
				offset = 52
			},
			{
				name = "MoveTarget",
				isRet = true,
				index = 42669,
				isOutParm = true,
				cType = ffi.typeof("struct FBasedPosition"),
				castTo = ffi.typeof("struct FBasedPosition*"),
				offset = 0
			},
		},
		dataSize = 56,
		index = 42667,
		retOffset = 52,
	},
	["Finished"] = {
		fields = {
		},
		dataSize = 0,
		index = 42666,
	},
	["IsGoalValid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42665,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42664,
		retOffset = 0,
	},
	["MovePawnToGoal"] = {
		fields = {
		},
		dataSize = 0,
		index = 42663,
	},
	["PathIsValid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42660,
				castTo = ffi.typeof("BOOL*"),
				offset = 92
			},
			{
				name = "Data",
				isRet = true,
				index = 42662,
				isOutParm = true,
				cType = ffi.typeof("struct FPathFindData"),
				castTo = ffi.typeof("struct FPathFindData*"),
				offset = 0
			},
			{
				name = "bCheckAnchor",
				index = 42661,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 88
			},
		},
		dataSize = 96,
		index = 42659,
		retOffset = 92,
	},
	["IsFollowingPath"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42658,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42657,
		retOffset = 0,
	},
	["ClearPath"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42654,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "bStopMovement",
				index = 42656,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bAllowDelayedClear",
				index = 42655,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 42653,
		retOffset = 8,
	},
	["FollowPath"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42651,
				castTo = ffi.typeof("BOOL*"),
				offset = 88
			},
			{
				name = "Data",
				isRet = true,
				index = 42652,
				isOutParm = true,
				cType = ffi.typeof("struct FPathFindData"),
				castTo = ffi.typeof("struct FPathFindData*"),
				offset = 0
			},
		},
		dataSize = 92,
		index = 42650,
		retOffset = 88,
	},
	["CreatePathToLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42645,
				castTo = ffi.typeof("BOOL*"),
				offset = 112
			},
			{
				name = "PathData",
				isRet = true,
				index = 42649,
				isOutParm = true,
				cType = ffi.typeof("struct FPathFindData"),
				castTo = ffi.typeof("struct FPathFindData*"),
				offset = 0
			},
			{
				name = "DestLocation",
				index = 42648,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 88
			},
			{
				name = "DestPoly",
				index = 42647,
				optional = true,
				type = ffi.typeof("struct FGBXNavMeshPolyRef"),
				castTo = ffi.typeof("struct FGBXNavMeshPolyRef*"),
				flags = 64,
				offset = 100
			},
			{
				name = "bAdjustStartForMotion",
				index = 42646,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 108
			},
		},
		dataSize = 116,
		index = 42644,
		retOffset = 112,
	},
	["WantsToStopListening"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43718,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43717,
		retOffset = 0,
	},
	["GetActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43716,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43715,
		retOffset = 0,
	},
	["GetListenerLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43714,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 43713,
		retOffset = 0,
	},
	["GetAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43712,
				castTo = ffi.typeof("struct UPawnAllegiance**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43711,
		retOffset = 0,
	},
	["ReceiveMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43709,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Message",
				index = 43710,
				className = "UGbxMessage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43708,
		retOffset = 4,
	},
	["CaresAboutMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43706,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Message",
				index = 43707,
				className = "UGbxMessage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43705,
		retOffset = 4,
	},
	["GetRuleEngine"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43734,
				castTo = ffi.typeof("struct URuleEngine**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43733,
		retOffset = 0,
	},
	["eventRecordEvalCallback"] = {
		fields = {
			{
				name = "EvalRuleEngine",
				index = 43753,
				className = "URuleEngine",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43752,
	},
	["GetAverageHitTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43802,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43801,
		retOffset = 0,
	},
	["AddHitTargetRecord"] = {
		fields = {
			{
				name = "vecNewHitLoc",
				index = 43800,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "flNewDamage",
				index = 43799,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 43798,
	},
	["GetRuleName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40931,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 40929,
		retOffset = 0,
	},
	["GetRuleFName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40933,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 40930,
		retOffset = 0,
	},
	["GetOtherEventParticipant"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40935,
				castTo = ffi.typeof("struct UObject**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40932,
		retOffset = 0,
	},
	["ApplyFlagInitializationData"] = {
		fields = {
			{
				name = "FlagsToSet",
				isRet = true,
				index = 43404,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FFlagDefinitionInitialization"),
				castTo = ffi.typeof("struct TArray_FFlagDefinitionInitialization*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43403,
	},
	["IsResourceInUse"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43401,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TestResourceClass",
				index = 43402,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43400,
		retOffset = 4,
	},
	["GetContextSource"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43399,
				castTo = ffi.typeof("struct UObject**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43398,
		retOffset = 0,
	},
	["IsRunningRuleWhichBlocksRuleSetChange"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43397,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43396,
		retOffset = 0,
	},
	["GetDynamicFlagValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43394,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "FlagDefinition",
				index = 43395,
				className = "UFlagDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43393,
		retOffset = 4,
	},
	["SetDynamicFlagDefTrueTimed"] = {
		fields = {
			{
				name = "FlagDefinition",
				index = 43392,
				className = "UFlagDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Time",
				index = 43391,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43390,
	},
	["SetDynamicFlagDefValue"] = {
		fields = {
			{
				name = "FlagDefinition",
				index = 43389,
				className = "UFlagDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Value",
				index = 43388,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 43387,
	},
	["GetRuleSetFromReference"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43385,
				castTo = ffi.typeof("struct URuleSet**"),
				offset = 8
			},
			{
				name = "ReferenceName",
				index = 43386,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43384,
		retOffset = 8,
	},
	["ClearRuleSetStack"] = {
		fields = {
		},
		dataSize = 0,
		index = 43383,
	},
	["PopRuleSetSwitch"] = {
		fields = {
		},
		dataSize = 0,
		index = 43382,
	},
	["PushRuleSetSwitch"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43380,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "NewRuleSetTemplate",
				index = 43381,
				className = "URuleSet",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43379,
		retOffset = 4,
	},
	["SetRuleSet"] = {
		fields = {
			{
				name = "NewRuleSetTemplate",
				index = 43378,
				className = "URuleSet",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43377,
	},
	["SwitchActiveRuleSet"] = {
		fields = {
			{
				name = "NewRuleSetTemplate",
				index = 43376,
				className = "URuleSet",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43375,
	},
	["UpdateKnowledge"] = {
		fields = {
			{
				name = "pKnowledgeRecordType",
				index = 43374,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43373,
	},
	["ActivateEventRuleEx"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43369,
				castTo = ffi.typeof("int*"),
				offset = 28
			},
			{
				name = "EventDefName",
				index = 43372,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Participants",
				index = 43367,
				optional = true,
				type = ffi.typeof("struct TArray_AGearboxPawnPtr"),
				castTo = ffi.typeof("struct TArray_AGearboxPawnPtr*"),
				flags = 8,
				offset = 8
			},
			{
				name = "Subject",
				index = 43371,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "CastSizeMustMatch",
				index = 43370,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 32,
		index = 43366,
		retOffset = 28,
	},
	["CleanUpRuleEngineData"] = {
		fields = {
		},
		dataSize = 0,
		index = 43365,
	},
	["ActivateEventRule"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43360,
				castTo = ffi.typeof("int*"),
				offset = 20
			},
			{
				name = "EventDefName",
				index = 43364,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Instigator",
				index = 43363,
				optional = true,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "Subject",
				index = 43362,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "CastSizeMustMatch",
				index = 43361,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 43359,
		retOffset = 20,
	},
	["ActivateEventRuleByDefinition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43356,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "EventDefinition",
				index = 43358,
				className = "URuleEventDef",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OtherEventParticipantObject",
				index = 43357,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43355,
		retOffset = 8,
	},
	["Initialize"] = {
		fields = {
			{
				name = "NewGearboxPawn",
				index = 43413,
				className = "AGearboxPawn",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "NewMind",
				index = 43412,
				className = "AGearboxMind",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "NewAIFactory",
				index = 43411,
				className = "UGearboxAIFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 43410,
	},
	["GetContextSource"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43409,
				castTo = ffi.typeof("struct UObject**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43408,
		retOffset = 0,
	},
	["eventRecordEvalCallback"] = {
		fields = {
			{
				name = "EvalRuleEngine",
				index = 45009,
				className = "URuleEngine",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 45008,
	},
	["GetInitialMovementHoldTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43732,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43731,
		retOffset = 0,
	},
	["GetInitialDestination"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43730,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43729,
		retOffset = 0,
	},
	["GetInitialActionType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43728,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInitialActionType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 43727,
		retOffset = 0,
	},
	["GetSpawnStyleType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43726,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESpawnStyleType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 43725,
		retOffset = 0,
	},
	["IsAllSpawnTypesDebugEnabled"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43850,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43849,
		retOffset = 0,
	},
	["ToggleAllSpawnTypesDebug"] = {
		fields = {
		},
		dataSize = 0,
		index = 43848,
	},
	["GetRandomFactory"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43844,
				castTo = ffi.typeof("struct UPopulationFactory**"),
				offset = 12
			},
			{
				name = "SpawningOpportunity",
				index = 43847,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "GameStage",
				index = 43846,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Rarity",
				index = 43845,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 43843,
		retOffset = 12,
	},
	["eventGetDescriptionOfFactoryOutput"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43965,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 43964,
		retOffset = 0,
	},
	["eventShouldSavePopulationActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43961,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "Master",
				index = 43963,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "ActorToSave",
				index = 43962,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43960,
		retOffset = 8,
	},
	["eventDestroyPopulationActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43953,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Master",
				index = 43959,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "nOpportunityIdx",
				index = 43958,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "ActorToDestroy",
				index = 43957,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "SpawnFactory",
				index = 43956,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "CreationFlags",
				index = 43955,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "bDontSaveActor",
				index = 43954,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 28,
		index = 43952,
		retOffset = 24,
	},
	["eventCreatePopulationActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43944,
				castTo = ffi.typeof("struct AActor**"),
				offset = 44
			},
			{
				name = "Master",
				index = 43951,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Opportunity",
				index = 43950,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SpawnLocationContextObject",
				index = 43949,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "SpawnLocation",
				index = 43948,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "SpawnRotation",
				index = 43947,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 24
			},
			{
				name = "GameStage",
				index = 43946,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 36
			},
			{
				name = "Rarity",
				index = 43945,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 48,
		index = 43943,
		retOffset = 44,
	},
	["eventGetSpawnVisibilityBounds"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43940,
				cType = ffi.typeof("struct FBoxSphereBounds"),
				castTo = ffi.typeof("struct FBoxSphereBounds*"),
				offset = 8
			},
			{
				name = "GameStage",
				index = 43942,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Rarity",
				index = 43941,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 64,
		index = 43938,
		retOffset = 8,
	},
	["GetActorAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43935,
				castTo = ffi.typeof("struct UPawnAllegiance**"),
				offset = 8
			},
			{
				name = "GameStage",
				index = 43937,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Rarity",
				index = 43936,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43934,
		retOffset = 8,
	},
	["eventGetActorSpawnCost"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43930,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "GameStage",
				index = 43933,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Rarity",
				index = 43932,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bCanSpawnTest",
				index = 43931,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 43929,
		retOffset = 12,
	},
	["eventOnSpawnActor"] = {
		fields = {
			{
				name = "aNewActor",
				index = 43928,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43927,
	},
	["eventSetupMatineeForActor"] = {
		fields = {
			{
				name = "aNewActor",
				index = 43926,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43925,
	},
	["GetSpawnFactory"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43921,
				castTo = ffi.typeof("struct UPopulationFactory**"),
				offset = 12
			},
			{
				name = "SpawningOpportunity",
				index = 43924,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "GameStage",
				index = 43923,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Rarity",
				index = 43922,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 43920,
		retOffset = 12,
	},
	["GetSpawnProbabilityAtThisGameStage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43917,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "GameStage",
				index = 43919,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Rarity",
				index = 43918,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43916,
		retOffset = 8,
	},
	["IsFactoryWithin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43914,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TestFactory",
				index = 43915,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43913,
		retOffset = 4,
	},
	["CanSpawn"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43911,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "SpawningOpportunity",
				index = 43912,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43910,
		retOffset = 4,
	},
	["eventCreatePopulationActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43972,
				castTo = ffi.typeof("struct AActor**"),
				offset = 44
			},
			{
				name = "Master",
				index = 43979,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Opportunity",
				index = 43978,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SpawnLocationContextObject",
				index = 43977,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "SpawnLocation",
				index = 43976,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "SpawnRotation",
				index = 43975,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 24
			},
			{
				name = "GameStage",
				index = 43974,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 36
			},
			{
				name = "Rarity",
				index = 43973,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 52,
		index = 43971,
		retOffset = 44,
	},
	["eventGetSpawnVisibilityBounds"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43968,
				cType = ffi.typeof("struct FBoxSphereBounds"),
				castTo = ffi.typeof("struct FBoxSphereBounds*"),
				offset = 8
			},
			{
				name = "GameStage",
				index = 43970,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Rarity",
				index = 43969,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 36,
		index = 43967,
		retOffset = 8,
	},
	["GetSpawnFactory"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43991,
				castTo = ffi.typeof("struct UPopulationFactory**"),
				offset = 12
			},
			{
				name = "SpawningOpportunity",
				index = 43994,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "GameStage",
				index = 43993,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Rarity",
				index = 43992,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 43990,
		retOffset = 12,
	},
	["GetActorAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43987,
				castTo = ffi.typeof("struct UPawnAllegiance**"),
				offset = 8
			},
			{
				name = "GameStage",
				index = 43989,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "AwesomeLevel",
				index = 43988,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 43986,
		retOffset = 8,
	},
	["IsFactoryWithin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43984,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TestFactory",
				index = 43985,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 43983,
		retOffset = 4,
	},
	["GetActorSpawnedFromOpportunity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44205,
				castTo = ffi.typeof("struct AActor**"),
				offset = 8
			},
			{
				name = "Opportunity",
				index = 44207,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "ActorIndex",
				index = 44206,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 44204,
		retOffset = 8,
	},
	["GetSavedActorDebugInfoForOpportunity"] = {
		fields = {
			{
				name = "OpportunityIndex",
				index = 44203,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SavedActorsDebugInfo",
				isRet = true,
				index = 44201,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 16,
		index = 44200,
	},
	["GetNumberOfSavedActorsForOpportunity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44198,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "OpportunityIndex",
				index = 44199,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44197,
		retOffset = 4,
	},
	["WillActorsOpportunityBeResetOnLevelLoad"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44195,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "TestActor",
				index = 44196,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44194,
		retOffset = 4,
	},
	["ResetRespawn"] = {
		fields = {
		},
		dataSize = 0,
		index = 44193,
	},
	["GetStreamingLevelForActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44191,
				castTo = ffi.typeof("struct ULevelStreaming**"),
				offset = 4
			},
			{
				name = "OpportunityInLevel",
				index = 44192,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44190,
		retOffset = 4,
	},
	["HasCapacityToSpawnFromFactories"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44187,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "TheFactories",
				isRet = true,
				index = 44185,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UPopulationFactoryPtr"),
				castTo = ffi.typeof("struct TArray_UPopulationFactoryPtr*"),
				TArray = true,
				offset = 0
			},
			{
				name = "GameStage",
				index = 44189,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "Rarity",
				index = 44188,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 44184,
		retOffset = 20,
	},
	["HasCapacityToSpawnFromFactory"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44180,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "TheFactory",
				index = 44183,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "GameStage",
				index = 44182,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Rarity",
				index = 44181,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 44179,
		retOffset = 12,
	},
	["IsPopulationSystemAtCapacity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44178,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44177,
		retOffset = 0,
	},
	["StatProfileStop"] = {
		fields = {
			{
				name = "nStat",
				index = 44176,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44175,
	},
	["StatProfileStart"] = {
		fields = {
			{
				name = "nStat",
				index = 44174,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44173,
	},
	["GetStatProfileTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44171,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "nStat",
				index = 44172,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44170,
		retOffset = 4,
	},
	["AddSavedActor"] = {
		fields = {
			{
				name = "OpportunityIdx",
				index = 44169,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TheActor",
				index = 44168,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SpawnFactory",
				index = 44167,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "CreationFlags",
				index = 44166,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 44165,
	},
	["DisconnectEncounter"] = {
		fields = {
			{
				name = "Encounter",
				index = 44164,
				className = "APopulationEncounter",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44163,
	},
	["ConnectEncounter"] = {
		fields = {
			{
				name = "Encounter",
				index = 44162,
				className = "APopulationEncounter",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44161,
	},
	["DisconnectOpportunity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44158,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "DeactivatedOpportunity",
				index = 44160,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bSaveState",
				index = 44159,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 44157,
		retOffset = 8,
	},
	["ConnectOpportunity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44155,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ActivatedOpportunity",
				index = 44156,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44154,
		retOffset = 4,
	},
	["GetWorldInfo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44153,
				castTo = ffi.typeof("struct AWorldInfo**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44152,
		retOffset = 0,
	},
	["DestroySpawnedActors"] = {
		fields = {
			{
				name = "Opportunity",
				index = 44151,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bDontSaveActors",
				index = 44150,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 44149,
	},
	["RemoveSpawnedActor"] = {
		fields = {
			{
				name = "TheActor",
				index = 44148,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bKeepBody",
				index = 44147,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bActorDied",
				index = 44146,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 44145,
	},
	["SetSpawnedActorsReuse"] = {
		fields = {
			{
				name = "TheActor",
				index = 44144,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bReuse",
				index = 44143,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 44142,
	},
	["AddExternalActor"] = {
		fields = {
			{
				name = "SpawnedActor",
				index = 44141,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "FactoryClass",
				index = 44140,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 4
			},
		},
		dataSize = 8,
		index = 44139,
	},
	["SpawnActorFromOpportunity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44128,
				castTo = ffi.typeof("struct AActor**"),
				offset = 56
			},
			{
				name = "TheFactory",
				index = 44138,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SpawnLocationContextObject",
				index = 44137,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SpawnLocation",
				index = 44136,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 8
			},
			{
				name = "SpawnRotation",
				index = 44135,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 20
			},
			{
				name = "GameStage",
				index = 44134,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 32
			},
			{
				name = "Rarity",
				index = 44133,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 36
			},
			{
				name = "OpportunityIdx",
				index = 44132,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 40
			},
			{
				name = "PopOppFlags",
				index = 44131,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 44
			},
			{
				name = "bCanSave",
				index = 44130,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 48
			},
			{
				name = "bForceSpawn",
				index = 44129,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 52
			},
		},
		dataSize = 60,
		index = 44127,
		retOffset = 56,
	},
	["SpawnActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44120,
				castTo = ffi.typeof("struct AActor**"),
				offset = 40
			},
			{
				name = "TheFactory",
				index = 44126,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SpawnLocationContextObject",
				index = 44125,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SpawnLocation",
				index = 44124,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 8
			},
			{
				name = "SpawnRotation",
				index = 44123,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 20
			},
			{
				name = "GameStage",
				index = 44122,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 32
			},
			{
				name = "Rarity",
				index = 44121,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 36
			},
		},
		dataSize = 44,
		index = 44119,
		retOffset = 40,
	},
	["GetPopulationOpportunityIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44117,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "Opportunity",
				index = 44118,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44116,
		retOffset = 4,
	},
	["GetActorsOpportunity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44114,
				castTo = ffi.typeof("struct APopulationOpportunity**"),
				offset = 4
			},
			{
				name = "SpawnedActor",
				index = 44115,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44113,
		retOffset = 4,
	},
	["SpawnPopulationControlledActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43981,
				castTo = ffi.typeof("struct AActor**"),
				offset = 52
			},
			{
				name = "SpawnClass",
				index = 44112,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "SpawnOwner",
				index = 44111,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SpawnTag",
				index = 44110,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "SpawnLocation",
				index = 44109,
				optional = true,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 16
			},
			{
				name = "SpawnRotation",
				index = 44108,
				optional = true,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 28
			},
			{
				name = "ActorTemplate",
				index = 44107,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "bNoCollisionFail",
				index = 44106,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 44
			},
			{
				name = "bPersistAcrossLevelTransitions",
				index = 44105,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 48
			},
		},
		dataSize = 56,
		index = 43980,
		retOffset = 52,
	},
	["ClearBodyCompositionInstance"] = {
		fields = {
		},
		dataSize = 0,
		index = 44261,
	},
	["ApplyPreviewBodyComposition"] = {
		fields = {
		},
		dataSize = 0,
		index = 44260,
	},
	["GetBodyInfoProvider"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44259,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 44258,
		retOffset = 0,
	},
	["ChangeInstanceDataSwitch"] = {
		fields = {
			{
				name = "SwitchName",
				index = 44257,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "NewValue",
				index = 44256,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 9,
		index = 44255,
	},
	["PostInitBodyComposition"] = {
		fields = {
			{
				name = "Identifier",
				index = 44254,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Value",
				index = 44253,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "BodyCompositionIndex",
				index = 44252,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "Mode",
				index = 44251,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 17,
		index = 44250,
	},
	["PreRemoveBodyComposition"] = {
		fields = {
			{
				name = "Identifier",
				index = 44249,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Value",
				index = 44248,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "BodyCompositionIndex",
				index = 44247,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 44246,
	},
	["GetNumSpawned"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44245,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44244,
		retOffset = 0,
	},
	["GetNumAlive"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44243,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44242,
		retOffset = 0,
	},
	["GetNumDied"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44241,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44240,
		retOffset = 0,
	},
	["eventDestroyed"] = {
		fields = {
		},
		dataSize = 0,
		index = 44239,
	},
	["GetRarity"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44238,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44237,
		retOffset = 0,
	},
	["GetGameStage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44236,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44235,
		retOffset = 0,
	},
	["GetOpportunityGameStage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44232,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "GameStage",
				isRet = true,
				index = 44234,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "Rarity",
				isRet = true,
				index = 44233,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 44231,
		retOffset = 8,
	},
	["eventTriggerKismetAllSpawnedEvent"] = {
		fields = {
		},
		dataSize = 0,
		index = 44230,
	},
	["eventClearSequenceActionLink"] = {
		fields = {
		},
		dataSize = 0,
		index = 44229,
	},
	["eventSetSequenceActionLink"] = {
		fields = {
			{
				name = "Link",
				index = 44228,
				className = "UGearboxSeqAct_PopulationOpportunityLink",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44227,
	},
	["SetEnabledStatus"] = {
		fields = {
			{
				name = "bEnable",
				index = 44226,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44225,
	},
	["OnToggle"] = {
		fields = {
			{
				name = "Action",
				index = 44224,
				className = "USeqAct_Toggle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44223,
	},
	["GetNumLeftToSpawnAndStillAlive"] = {
		fields = {
			{
				name = "NumLeftToSpawn",
				isRet = true,
				index = 44222,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "NumStillAlive",
				isRet = true,
				index = 44221,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 8,
		index = 44220,
	},
	["GetNextSpawnTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44219,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44218,
		retOffset = 0,
	},
	["RespawnKilledActors"] = {
		fields = {
			{
				name = "PercentageOfKilledActorsToRespawn",
				index = 44217,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44216,
	},
	["DoSpawning"] = {
		fields = {
			{
				name = "PopMaster",
				index = 44215,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44214,
	},
	["ApplyPreviewBodyComposition"] = {
		fields = {
		},
		dataSize = 0,
		index = 44303,
	},
	["GetBodyInfoProvider"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44302,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 44301,
		retOffset = 0,
	},
	["RespawnKilledActors"] = {
		fields = {
			{
				name = "PercentageOfKilledActorsToRespawn",
				index = 44300,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44299,
	},
	["DoSpawning"] = {
		fields = {
			{
				name = "PopMaster",
				index = 44298,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44297,
	},
	["ApplyPreviewBodyComposition"] = {
		fields = {
		},
		dataSize = 0,
		index = 44322,
	},
	["GetBodyInfoProvider"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44321,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 44320,
		retOffset = 0,
	},
	["CloneTimer"] = {
		fields = {
		},
		dataSize = 0,
		index = 44319,
	},
	["RespawnKilledActors"] = {
		fields = {
			{
				name = "PercentageOfKilledActorsToRespawn",
				index = 44318,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44317,
	},
	["DoSpawning"] = {
		fields = {
			{
				name = "PopMaster",
				index = 44316,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44315,
	},
	["ApplyPreviewBodyComposition"] = {
		fields = {
		},
		dataSize = 0,
		index = 44389,
	},
	["GetBodyInfoProvider"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44388,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 44387,
		retOffset = 0,
	},
	["eventTriggerKismetSingleDeathEvent"] = {
		fields = {
		},
		dataSize = 0,
		index = 44385,
	},
	["eventTriggerKismetDeathEvent"] = {
		fields = {
		},
		dataSize = 0,
		index = 44384,
	},
	["GetNumSpawned"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44383,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44382,
		retOffset = 0,
	},
	["GetNumAlive"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44381,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44380,
		retOffset = 0,
	},
	["GetNumDied"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44379,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44378,
		retOffset = 0,
	},
	["WantsToStopListening"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44377,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44376,
		retOffset = 0,
	},
	["GetActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44375,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44374,
		retOffset = 0,
	},
	["GetListenerLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44373,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 44372,
		retOffset = 0,
	},
	["GetAllegiance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44371,
				castTo = ffi.typeof("struct UPawnAllegiance**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44370,
		retOffset = 0,
	},
	["ReceiveMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44368,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Message",
				index = 44369,
				className = "UGbxMessage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44367,
		retOffset = 4,
	},
	["CaresAboutMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44365,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Message",
				index = 44366,
				className = "UGbxMessage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44364,
		retOffset = 4,
	},
	["PostBeginPlay"] = {
		fields = {
		},
		dataSize = 0,
		index = 44363,
	},
	["EnableDebugging"] = {
		fields = {
			{
				name = "bEnabled",
				index = 44362,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44361,
	},
	["RespawnKilledActors"] = {
		fields = {
			{
				name = "PercentageOfKilledActorsToRespawn",
				index = 44360,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44359,
	},
	["DoSpawning"] = {
		fields = {
			{
				name = "PopMaster",
				index = 44358,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44357,
	},
	["ClearBodyCompositionInstance"] = {
		fields = {
		},
		dataSize = 0,
		index = 44430,
	},
	["ApplyPreviewBodyComposition"] = {
		fields = {
		},
		dataSize = 0,
		index = 44429,
	},
	["GetBodyInfoProvider"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44428,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 44427,
		retOffset = 0,
	},
	["ChangeInstanceDataSwitch"] = {
		fields = {
			{
				name = "SwitchName",
				index = 44426,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "NewValue",
				index = 44425,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 9,
		index = 44424,
	},
	["PostInitBodyComposition"] = {
		fields = {
			{
				name = "Identifier",
				index = 44423,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Value",
				index = 44422,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "BodyCompositionIndex",
				index = 44421,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "Mode",
				index = 44420,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 17,
		index = 44419,
	},
	["PreRemoveBodyComposition"] = {
		fields = {
			{
				name = "Identifier",
				index = 44418,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Value",
				index = 44417,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "BodyCompositionIndex",
				index = 44416,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 44415,
	},
	["GetInitialMovementHoldTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44414,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44413,
		retOffset = 0,
	},
	["GetInitialDestination"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44412,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 44411,
		retOffset = 0,
	},
	["GetInitialActionType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44410,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInitialActionType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44409,
		retOffset = 0,
	},
	["GetSpawnStyleType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44408,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESpawnStyleType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44407,
		retOffset = 0,
	},
	["RespawnKilledActors"] = {
		fields = {
			{
				name = "PercentageOfKilledActorsToRespawn",
				index = 44406,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44405,
	},
	["DoSpawning"] = {
		fields = {
			{
				name = "PopMaster",
				index = 44404,
				className = "UPopulationMaster",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44403,
	},
	["CanSpawnFromFactory"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44472,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Factory",
				index = 44475,
				className = "UPopulationFactory",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "GameStage",
				index = 44474,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "AwesomeLevel",
				index = 44473,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 44471,
		retOffset = 12,
	},
	["GetSpawnRotation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44470,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 44469,
		retOffset = 0,
	},
	["GetSpawnLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44468,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 44467,
		retOffset = 0,
	},
	["ActorSpawned"] = {
		fields = {
			{
				name = "SpawnedActor",
				index = 44466,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44465,
	},
	["GetInitialMovementHoldTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44464,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44463,
		retOffset = 0,
	},
	["GetInitialDestination"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44462,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 44461,
		retOffset = 0,
	},
	["RandomizeInitialDestinations"] = {
		fields = {
		},
		dataSize = 16,
		index = 44458,
	},
	["GetInitialActionType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44457,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInitialActionType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44456,
		retOffset = 0,
	},
	["GetSpawnStyleType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44455,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESpawnStyleType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44454,
		retOffset = 0,
	},
	["OnToggle"] = {
		fields = {
			{
				name = "Action",
				index = 44453,
				className = "USeqAct_Toggle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44452,
	},
	["NotifyWaveComplete"] = {
		fields = {
			{
				name = "nWave",
				index = 44624,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44623,
	},
	["eventNotifyPopulatedActor"] = {
		fields = {
			{
				name = "PopulatedActor",
				index = 44633,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "InDestPopulationOpportunity",
				index = 44632,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "InSpawnPoint",
				index = 44631,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "InOriginator",
				index = 44630,
				className = "AWorldInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 44629,
	},
	["eventNotifyPopulatedActor"] = {
		fields = {
			{
				name = "PopulatedActor",
				index = 44640,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "InDestPopulationOpportunity",
				index = 44639,
				className = "APopulationOpportunity",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "InSpawnPoint",
				index = 44638,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "InOriginator",
				index = 44637,
				className = "AWorldInfo",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 44636,
	},
	["OnReset"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39461,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39460,
	},
	["OnHitByVehicle"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39459,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "Vehicle",
				index = 39458,
				className = "AVehicle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 39457,
	},
	["OnRanOver"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39456,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "Vehicle",
				index = 39455,
				className = "AVehicle",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 39454,
	},
	["OnTimerEvent"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39453,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "SpecializedEventName",
				index = 39452,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
		},
		dataSize = 12,
		index = 39451,
	},
	["OnKilledPawn"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39450,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "Killed",
				index = 39449,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 39448,
	},
	["OnLanded"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39447,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39446,
	},
	["OnStopFiringWeapon"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39445,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39444,
	},
	["OnStartFiringWeapon"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39443,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39442,
	},
	["OnTargetLost"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39441,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "OldTarget",
				index = 39440,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 39439,
	},
	["OnTargetChanged"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39438,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "OldTarget",
				index = 39437,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "NewTarget",
				index = 39436,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 39435,
	},
	["OnTargetAcquired"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39434,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "NewTarget",
				index = 39433,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 39432,
	},
	["OnSpawned"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39431,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39430,
	},
	["OnTakeHeal"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39429,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "Instigator",
				index = 39428,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "Damage",
				index = 39427,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "ShieldDamage",
				index = 39426,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "DamageSource",
				index = 39425,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
			{
				name = "DamageType",
				index = 39424,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
		},
		dataSize = 24,
		index = 39423,
	},
	["OnVehicleTakeDamage"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39422,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "Instigator",
				index = 39421,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "HitVehicle",
				index = 39420,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "Damage",
				index = 39419,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "ShieldDamage",
				index = 39418,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
			{
				name = "DamageSource",
				index = 39417,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
			{
				name = "DamageType",
				index = 39416,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 28,
		index = 39415,
	},
	["OnTakeDamage"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39414,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "Instigator",
				index = 39413,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "Damage",
				index = 39412,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "ShieldDamage",
				index = 39411,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "DamageSource",
				index = 39410,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
			{
				name = "DamageType",
				index = 39409,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
		},
		dataSize = 24,
		index = 39408,
	},
	["OnUserCouldNotAffordSecondary"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39407,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "EventOutput",
				index = 39406,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENPCOnUsedOutputs",
				flags = 32,
				offset = 4
			},
			{
				name = "Instigator",
				index = 39405,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "UsedComponent",
				index = 39404,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 39403,
	},
	["OnUserCouldNotAfford"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39402,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "EventOutput",
				index = 39401,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENPCOnUsedOutputs",
				flags = 32,
				offset = 4
			},
			{
				name = "Instigator",
				index = 39400,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "UsedComponent",
				index = 39399,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 39398,
	},
	["OnSecondaryUsed"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39397,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "EventOutput",
				index = 39396,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENPCOnUsedOutputs",
				flags = 32,
				offset = 4
			},
			{
				name = "Instigator",
				index = 39395,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "UsedComponent",
				index = 39394,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 39393,
	},
	["OnUsed"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 39390,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "EventOutput",
				index = 39389,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENPCOnUsedOutputs",
				flags = 32,
				offset = 4
			},
			{
				name = "Instigator",
				index = 39388,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "UsedComponent",
				index = 39387,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 16,
		index = 39386,
	},
	["SetBehaviorProviderDefinition"] = {
		fields = {
			{
				name = "NewBehaviorProviderDefinition",
				index = 39385,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 39384,
	},
	["GetBehaviorProviderDefinition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39383,
				castTo = ffi.typeof("struct UBehaviorProviderDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39382,
		retOffset = 0,
	},
	["RecentlyRunBehaviorsForSequence"] = {
		fields = {
			{
				name = "PID",
				index = 40539,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProvidersIndex",
				index = 40538,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "SequencesIndex",
				index = 40537,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "ExecutionRecord",
				isRet = true,
				index = 40536,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorExecutionRecord"),
				castTo = ffi.typeof("struct FBehaviorExecutionRecord*"),
				offset = 12
			},
		},
		dataSize = 40,
		index = 40535,
	},
	["AllEventStateForSequence"] = {
		fields = {
			{
				name = "PID",
				index = 40534,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProvidersIndex",
				index = 40533,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "SequencesDataIndex",
				index = 40532,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "EventState",
				isRet = true,
				index = 40531,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorEventState"),
				castTo = ffi.typeof("struct FBehaviorEventState*"),
				offset = 12
			},
		},
		dataSize = 24,
		index = 40530,
	},
	["AllWaitingThreadsForSequence"] = {
		fields = {
			{
				name = "PID",
				index = 40529,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProvidersIndex",
				index = 40528,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "SequencesDataIndex",
				index = 40527,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "Thread",
				isRet = true,
				index = 40526,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorThread"),
				castTo = ffi.typeof("struct FBehaviorThread*"),
				offset = 12
			},
		},
		dataSize = 36,
		index = 40525,
	},
	["AllSequencesForProvider"] = {
		fields = {
			{
				name = "PID",
				index = 40524,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProvidersIndex",
				index = 40523,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "SequenceState",
				isRet = true,
				index = 40522,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorSequenceState"),
				castTo = ffi.typeof("struct FBehaviorSequenceState*"),
				offset = 8
			},
		},
		dataSize = 32,
		index = 40521,
	},
	["AllProvidersForProcess"] = {
		fields = {
			{
				name = "PID",
				index = 40520,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProviderDefinition",
				isRet = true,
				index = 40519,
				isOutParm = true,
				castTo = ffi.typeof("struct UBehaviorProviderDefinition**"),
				offset = 4
			},
			{
				name = "ProvidersIndex",
				isRet = true,
				index = 40518,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
		},
		dataSize = 12,
		index = 40517,
	},
	["AllProcesses"] = {
		fields = {
			{
				name = "Process",
				isRet = true,
				index = 40516,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorProcess"),
				castTo = ffi.typeof("struct FBehaviorProcess*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 40515,
	},
	["GetVariableStateSummaryForSequence"] = {
		fields = {
			{
				name = "PID",
				index = 40514,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SequencesDataIndex",
				index = 40513,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "DebugInfo",
				isRet = true,
				index = 40511,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 20,
		index = 40510,
	},
	["GetChunkedListSummaries"] = {
		fields = {
			{
				name = "DebugInfo",
				isRet = true,
				index = 40508,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 40507,
	},
	["GetBehaviorKernelStats"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40506,
				cType = ffi.typeof("struct FBehaviorKernelStats"),
				castTo = ffi.typeof("struct FBehaviorKernelStats*"),
				offset = 0
			},
		},
		dataSize = 104,
		index = 40505,
		retOffset = 0,
	},
	["IsBehaviorKernelWatchingConsumer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40503,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ConsumerHandle",
				index = 40504,
				type = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40502,
		retOffset = 4,
	},
	["IsBehaviorSequenceEnabled"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39969,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40501,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "ProviderDefinition",
				index = 40500,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "BehaviorSequenceName",
				index = 40499,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
		},
		dataSize = 20,
		index = 39968,
		retOffset = 16,
	},
	["ActivateBehaviorOutputLink"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40498,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "OutputLinkId",
				index = 40497,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39841,
	},
	["PublishBoolOutputVariable"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40496,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Output",
				index = 40495,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 40494,
	},
	["PublishObjectOutputVariable"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40493,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Output",
				index = 40492,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39918,
	},
	["PublishVectorOutputVariable"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40491,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Output",
				isRet = true,
				index = 40490,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
		},
		dataSize = 40,
		index = 40489,
	},
	["PublishFloatOutputVariable"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40488,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Output",
				index = 40487,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39904,
	},
	["PublishIntOutputVariable"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40486,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Output",
				index = 40485,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39890,
	},
	["BeginNondeterministicProviderRegistration"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40484,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40483,
	},
	["ProcessReplicatedBehaviorEvent"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40482,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "EventData",
				isRet = true,
				index = 40481,
				isOutParm = true,
				cType = ffi.typeof("struct FReplicatedBehaviorEvent"),
				castTo = ffi.typeof("struct FReplicatedBehaviorEvent*"),
				offset = 4
			},
		},
		dataSize = 8,
		index = 40480,
	},
	["ProcessReplicatedBehaviorConsumerState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40473,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40475,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "ReplicatedConsumerState",
				isRet = true,
				index = 40474,
				isOutParm = true,
				cType = ffi.typeof("struct FReplicatedBehaviorConsumerState"),
				castTo = ffi.typeof("struct FReplicatedBehaviorConsumerState*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 40472,
		retOffset = 16,
	},
	["ChangeBehaviorSequenceActivationStatus"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40466,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "ProviderDefinition",
				index = 40465,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "SequenceName",
				index = 40464,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "ActivationStatusChanage",
				index = 40463,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EChangeStatus",
				flags = 32,
				offset = 16
			},
		},
		dataSize = 17,
		index = 39761,
	},
	["ChangeBehaviorConsumerSuspensionStatus"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40462,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "SuspensionStatusChanage",
				index = 40461,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EChangeStatus",
				flags = 32,
				offset = 4
			},
		},
		dataSize = 5,
		index = 40460,
	},
	["BroadcastBehaviorEventFromScript"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40459,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "EventName",
				index = 40458,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "ProvidersToBroadcast",
				isRet = true,
				index = 40453,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UBehaviorProviderDefinitionPtr"),
				castTo = ffi.typeof("struct TArray_UBehaviorProviderDefinitionPtr*"),
				TArray = true,
				offset = 12
			},
			{
				name = "EventOutputToActivate",
				index = 40457,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
			{
				name = "Parameters",
				isRet = true,
				index = 40455,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FBehaviorVariableValue"),
				castTo = ffi.typeof("struct TArray_FBehaviorVariableValue*"),
				TArray = true,
				offset = 28
			},
		},
		dataSize = 40,
		index = 39868,
	},
	["ActivateBehaviorEventFromScript"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40452,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "ProviderDefinition",
				index = 40451,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "EventName",
				index = 40450,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "EventOutputToActivate",
				index = 40449,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "Parameters",
				isRet = true,
				index = 40447,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FBehaviorVariableValue"),
				castTo = ffi.typeof("struct TArray_FBehaviorVariableValue*"),
				TArray = true,
				offset = 20
			},
		},
		dataSize = 32,
		index = 40446,
	},
	["RemoveBehaviorProviderFromConsumer"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40445,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "ProviderDefinition",
				index = 40444,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 40443,
	},
	["IntializeBehaviorProviderForConsumer"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40442,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "ProviderDefinition",
				index = 40441,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 40440,
	},
	["ForceUnregisterBehaviorConsumer"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 40439,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40438,
	},
	["RegisterBehaviorConsumer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40436,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 4
			},
			{
				name = "BehaviorConsumer",
				index = 40437,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40435,
		retOffset = 4,
	},
	["SetObjectBehaviorVariable"] = {
		fields = {
			{
				name = "BehaviorVariable",
				isRet = true,
				index = 39276,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorVariableValue"),
				castTo = ffi.typeof("struct FBehaviorVariableValue*"),
				offset = 0
			},
			{
				name = "Value",
				index = 39275,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39274,
	},
	["SetVectorBehaviorVariable"] = {
		fields = {
			{
				name = "BehaviorVariable",
				isRet = true,
				index = 39273,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorVariableValue"),
				castTo = ffi.typeof("struct FBehaviorVariableValue*"),
				offset = 0
			},
			{
				name = "Value",
				isRet = true,
				index = 39272,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
		},
		dataSize = 40,
		index = 39271,
	},
	["SetFloatBehaviorVariable"] = {
		fields = {
			{
				name = "BehaviorVariable",
				isRet = true,
				index = 39270,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorVariableValue"),
				castTo = ffi.typeof("struct FBehaviorVariableValue*"),
				offset = 0
			},
			{
				name = "Value",
				index = 39269,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39268,
	},
	["SetIntBehaviorVariable"] = {
		fields = {
			{
				name = "BehaviorVariable",
				isRet = true,
				index = 39267,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorVariableValue"),
				castTo = ffi.typeof("struct FBehaviorVariableValue*"),
				offset = 0
			},
			{
				name = "Value",
				index = 39266,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39265,
	},
	["SetBoolBehaviorVariable"] = {
		fields = {
			{
				name = "BehaviorVariable",
				isRet = true,
				index = 39264,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorVariableValue"),
				castTo = ffi.typeof("struct FBehaviorVariableValue*"),
				offset = 0
			},
			{
				name = "Value",
				index = 39263,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39262,
	},
	["GetBehaviorConsumerHandle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39760,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39759,
		retOffset = 0,
	},
	["SetBehaviorProviderDefinition"] = {
		fields = {
			{
				name = "NewBehaviorProviderDefinition",
				index = 43692,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43691,
	},
	["GetBehaviorProviderDefinition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43690,
				castTo = ffi.typeof("struct UBehaviorProviderDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43689,
		retOffset = 0,
	},
	["eventRunCustomEvent"] = {
		fields = {
			{
				name = "EventName",
				index = 43704,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "EventInstigator",
				index = 43703,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "OtherEventParticipantObject",
				index = 43702,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "EventData",
				index = 43701,
				optional = true,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 28,
		index = 43700,
	},
	["SetTimerState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39796,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "TimerId",
				index = 39795,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EBehaviorTimerID",
				flags = 32,
				offset = 0
			},
			{
				name = "TimerState",
				index = 39797,
				type = ffi.typeof("struct FBehaviorTimerState"),
				castTo = ffi.typeof("struct FBehaviorTimerState*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 20,
		index = 39793,
		retOffset = 16,
	},
	["GetTimerState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39806,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "TimerId",
				index = 39805,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EBehaviorTimerID",
				flags = 32,
				offset = 0
			},
			{
				name = "TimerState",
				isRet = true,
				index = 39807,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorTimerState"),
				castTo = ffi.typeof("struct FBehaviorTimerState*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 39794,
		retOffset = 16,
	},
	["GetTimeSeconds"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39809,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 39804,
		retOffset = 0,
	},
	["GetAnimLength"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41749,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "SMC",
				index = 41750,
				className = "USkeletalMeshComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41748,
		retOffset = 4,
	},
	["eventIsPlayingLocally"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41746,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41747,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41745,
		retOffset = 8,
	},
	["GetSMNode"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41743,
				castTo = ffi.typeof("struct UAnimNodeSpecialMoveBlend**"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41744,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 20,
		index = 41742,
		retOffset = 8,
	},
	["PlayAnim"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41739,
				castTo = ffi.typeof("float*"),
				offset = 36
			},
			{
				name = "SMI",
				index = 41741,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "SMData",
				isRet = true,
				index = 41740,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 8
			},
		},
		dataSize = 44,
		index = 41738,
		retOffset = 36,
	},
	["eventAnimFinished"] = {
		fields = {
			{
				name = "SMI",
				index = 41736,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "BlendNode",
				index = 41735,
				className = "UAnimNodeSpecialMoveBlend",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "SMData",
				isRet = true,
				index = 41734,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 12
			},
			{
				name = "bInterrupted",
				index = 41733,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 44,
		index = 41732,
	},
	["eventClientFinished"] = {
		fields = {
			{
				name = "SMI",
				index = 41727,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "bInterrupted",
				index = 41726,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 28,
		index = 41723,
	},
	["eventClientStarted"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41719,
				castTo = ffi.typeof("float*"),
				offset = 36
			},
			{
				name = "SMI",
				index = 41721,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "SMData",
				isRet = true,
				index = 41720,
				isOutParm = true,
				cType = ffi.typeof("struct FSpecialMoveData"),
				castTo = ffi.typeof("struct FSpecialMoveData*"),
				offset = 8
			},
		},
		dataSize = 52,
		index = 41716,
		retOffset = 36,
	},
	["eventServerFinished"] = {
		fields = {
			{
				name = "SMI",
				index = 41715,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "bInterrupted",
				index = 41714,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 24,
		index = 41711,
	},
	["eventServerStarted"] = {
		fields = {
			{
				name = "SMI",
				index = 41708,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 20,
		index = 41705,
	},
	["AddAnimSet"] = {
		fields = {
			{
				name = "SMI",
				index = 41704,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41702,
	},
	["GetSkeletalMesh"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41698,
				castTo = ffi.typeof("struct USkeletalMeshComponent**"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41699,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41697,
		retOffset = 8,
	},
	["eventAuthorityCanPlay"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41693,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SMI",
				index = 41694,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41692,
		retOffset = 8,
	},
	["OnTimedEvent"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 41691,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
			{
				name = "SpecializedEventName",
				index = 41690,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
		},
		dataSize = 12,
		index = 41689,
	},
	["OnServerStop"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 41688,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41687,
	},
	["OnServerStart"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 41686,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41685,
	},
	["OnStop"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 41684,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41683,
	},
	["OnStart"] = {
		fields = {
			{
				name = "ConsumerHandle",
				isRet = true,
				index = 41682,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorConsumerHandle"),
				castTo = ffi.typeof("struct FBehaviorConsumerHandle*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41681,
	},
	["SetBehaviorProviderDefinition"] = {
		fields = {
			{
				name = "NewBehaviorProviderDefinition",
				index = 41680,
				className = "UBehaviorProviderDefinition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41679,
	},
	["GetBehaviorProviderDefinition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41678,
				castTo = ffi.typeof("struct UBehaviorProviderDefinition**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41677,
		retOffset = 0,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40281,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40280,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40279,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40278,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40277,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40276,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 60,
		index = 40275,
	},
	["TriggerDialogEvent"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40274,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "SelfObject",
				index = 40273,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "MyInstigatorObject",
				index = 40272,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "OtherEventParticipantObject",
				index = 40271,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "EventData",
				isRet = true,
				index = 40270,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				offset = 16
			},
		},
		dataSize = 28,
		index = 40269,
	},
	["SetDialogNameTag"] = {
		fields = {
			{
				name = "NewName",
				index = 42024,
				className = "UGearboxDialogNameTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42023,
	},
	["GetReplicatedDialogData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42022,
				cType = ffi.typeof("struct FGearboxDialogReplicatedData"),
				castTo = ffi.typeof("struct FGearboxDialogReplicatedData*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 42021,
		retOffset = 0,
	},
	["SetReplicatedDialogData"] = {
		fields = {
			{
				name = "TalkAct",
				index = 42020,
				className = "UGearboxDialogAct_Talk",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Data",
				isRet = true,
				index = 42019,
				isOutParm = true,
				cType = ffi.typeof("struct FGearboxDialogData"),
				castTo = ffi.typeof("struct FGearboxDialogData*"),
				offset = 4
			},
		},
		dataSize = 20,
		index = 42018,
	},
	["GetDialogGroups"] = {
		fields = {
			{
				name = "Groups",
				isRet = true,
				index = 42016,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UGearboxDialogGroupPtr"),
				castTo = ffi.typeof("struct TArray_UGearboxDialogGroupPtr*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42015,
	},
	["GetDialogComponent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42014,
				castTo = ffi.typeof("struct UGearboxDialogComponent**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42013,
		retOffset = 0,
	},
	["GetDialogNameTag"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42012,
				castTo = ffi.typeof("struct UGearboxDialogNameTag**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42011,
		retOffset = 0,
	},
	["GetActor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42010,
				castTo = ffi.typeof("struct AActor**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42009,
		retOffset = 0,
	},
	["CanTalk"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42008,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 42007,
		retOffset = 0,
	},
	["eventServerDialog_TriggerEvent"] = {
		fields = {
			{
				name = "EventTag",
				index = 42006,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Other",
				index = 42005,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "ObjectParameter",
				index = 42004,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 42003,
	},
	["eventReplicatedEvent"] = {
		fields = {
			{
				name = "VarName",
				index = 42002,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42001,
	},
	["IsTalking"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41992,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41991,
		retOffset = 0,
	},
	["StopTalking"] = {
		fields = {
			{
				name = "EventTag",
				index = 41990,
				optional = true,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "bForceStop",
				index = 41989,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 41988,
	},
	["TalkReplicated"] = {
		fields = {
			{
				name = "NewDialogData",
				index = 41987,
				type = ffi.typeof("struct FGearboxDialogReplicatedData"),
				castTo = ffi.typeof("struct FGearboxDialogReplicatedData*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 20,
		index = 41986,
	},
	["Talk"] = {
		fields = {
			{
				name = "TalkAction",
				index = 41979,
				className = "UGearboxDialogAct_Talk",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41978,
	},
	["GetMatchingEvent"] = {
		fields = {
			{
				name = "InEventTag",
				index = 41977,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "OutEvent",
				isRet = true,
				index = 41976,
				isOutParm = true,
				castTo = ffi.typeof("struct UGearboxDialogEvent**"),
				offset = 4
			},
			{
				name = "OutGroup",
				isRet = true,
				index = 41975,
				isOutParm = true,
				castTo = ffi.typeof("struct UGearboxDialogGroup**"),
				offset = 8
			},
			{
				name = "bIncludeDisabled",
				index = 41974,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
			{
				name = "OtherNameTag",
				index = 41973,
				optional = true,
				className = "UGearboxDialogNameTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
			{
				name = "bAllowTemplateGroups",
				index = 41972,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 24,
		index = 41971,
	},
	["TriggerEvent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41966,
				castTo = ffi.typeof("struct UGearboxDialogEventData**"),
				offset = 16
			},
			{
				name = "EventTag",
				index = 41970,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Other",
				index = 41969,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "ObjectParameter",
				index = 41968,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "TemplateEventData",
				index = 41967,
				optional = true,
				className = "UGearboxDialogEventData",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 20,
		index = 41965,
		retOffset = 16,
	},
	["GetDialogInterface"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41964,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 41963,
		retOffset = 0,
	},
	["IsActive"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40283,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40282,
		retOffset = 0,
	},
	["SimpleEvent"] = {
		fields = {
			{
				name = "Owner",
				index = 42085,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "NameTag",
				index = 42084,
				className = "UGearboxDialogNameTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "EventTag",
				index = 42083,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 12,
		index = 42082,
	},
	["DrawDialogDebug"] = {
		fields = {
			{
				name = "HUD",
				index = 42155,
				className = "AHUD",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "StartY",
				index = 42154,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 56,
		index = 42151,
	},
	["CheckpointRemoveReferencesBeforeDestroy"] = {
		fields = {
		},
		dataSize = 0,
		index = 42150,
	},
	["GetEventTagForEventInfo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42148,
				castTo = ffi.typeof("struct UGearboxDialogEventTag**"),
				offset = 8
			},
			{
				name = "EventInfo",
				index = 42149,
				type = ffi.typeof("struct FDialogEventInfo"),
				castTo = ffi.typeof("struct FDialogEventInfo*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42147,
		retOffset = 8,
	},
	["TriggerGroupEvent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42140,
				castTo = ffi.typeof("struct UGearboxDialogEventData**"),
				offset = 24
			},
			{
				name = "Group",
				index = 42146,
				className = "UGearboxDialogGroup",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "EventTag",
				index = 42145,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "Instigator",
				index = 42144,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "Other",
				index = 42143,
				optional = true,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
			{
				name = "ObjectParameter",
				index = 42142,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
			{
				name = "TemplateEventData",
				index = 42141,
				optional = true,
				className = "UGearboxDialogEventData",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 20
			},
		},
		dataSize = 28,
		index = 42139,
		retOffset = 24,
	},
	["Cleanup"] = {
		fields = {
		},
		dataSize = 0,
		index = 42138,
	},
	["SetGroupEventTag"] = {
		fields = {
			{
				name = "Group",
				index = 42137,
				className = "UGearboxDialogGroup",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "EventTag",
				index = 42136,
				className = "UGearboxDialogEventTag",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 42135,
	},
	["GetGroupEventTag"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42133,
				castTo = ffi.typeof("struct UGearboxDialogEventTag**"),
				offset = 4
			},
			{
				name = "Group",
				index = 42134,
				className = "UGearboxDialogGroup",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42132,
		retOffset = 4,
	},
	["SilenceGroup"] = {
		fields = {
			{
				name = "Group",
				index = 42131,
				className = "UGearboxDialogGroup",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42130,
	},
	["AddGroup"] = {
		fields = {
			{
				name = "Group",
				index = 42129,
				className = "UGearboxDialogGroup",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42128,
	},
	["UnregisterTalker"] = {
		fields = {
			{
				name = "Talker",
				index = 42127,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42126,
	},
	["RegisterTalker"] = {
		fields = {
			{
				name = "Talker",
				index = 42125,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42124,
	},
	["DisableTalker"] = {
		fields = {
			{
				name = "Talker",
				index = 42123,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42122,
	},
	["EnableTalker"] = {
		fields = {
			{
				name = "Talker",
				index = 42121,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 42120,
	},
	["GetPriority"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 42118,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "InPriority",
				index = 42119,
				className = "UGearboxDialogPriority",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 42117,
		retOffset = 4,
	},
	["ActivateOutput"] = {
		fields = {
			{
				name = "Link",
				index = 41928,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41927,
	},
	["eventActivate"] = {
		fields = {
		},
		dataSize = 0,
		index = 41929,
	},
	["eventActivate"] = {
		fields = {
		},
		dataSize = 0,
		index = 41934,
	},
	["eventActivate"] = {
		fields = {
		},
		dataSize = 0,
		index = 41935,
	},
	["eventActivate"] = {
		fields = {
		},
		dataSize = 0,
		index = 41938,
	},
	["eventActivate"] = {
		fields = {
		},
		dataSize = 0,
		index = 41954,
	},
	["eventTalkFinished"] = {
		fields = {
			{
				name = "InTalker",
				index = 41953,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41952,
	},
	["eventTalkStarted"] = {
		fields = {
			{
				name = "InTalker",
				index = 41951,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41950,
	},
	["ActivateOutput"] = {
		fields = {
			{
				name = "Link",
				index = 41959,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41958,
	},
	["eventActivate"] = {
		fields = {
		},
		dataSize = 0,
		index = 41957,
	},
	["ResolveToArgumentValue"] = {
		fields = {
			{
				name = "Out_ArgumentValue",
				isRet = true,
				index = 42162,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42161,
	},
	["GetTalkers"] = {
		fields = {
			{
				name = "Talkers",
				isRet = true,
				index = 42159,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_AActorPtr"),
				castTo = ffi.typeof("struct TArray_AActorPtr*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 42158,
	},
	["HandleEULAInteractionCompleteResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41409,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 164,
		index = 41407,
	},
	["HandleEULAInteractionComplete"] = {
		fields = {
			{
				name = "ControllerId",
				index = 41413,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "EULAState",
				isRet = true,
				index = 41415,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FEULAData"),
				castTo = ffi.typeof("struct TArray_FEULAData*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 148,
		index = 41408,
	},
	["HandleEULAChainResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41428,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 216,
		index = 41412,
	},
	["ReadEULAChain"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41439,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "ControllerId",
				index = 41433,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bAllowRetries",
				index = 41438,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 116,
		index = 41427,
		retOffset = 8,
	},
	["HandleOffersNotifiedResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41405,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 164,
		index = 41402,
	},
	["HandleBulkEntitlementsConsumedResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41440,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 192,
		index = 41406,
	},
	["HandleEntitlementConsumedResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41388,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 184,
		index = 41383,
	},
	["HandleCodeRedeemedResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41381,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 208,
		index = 41375,
	},
	["HandleResetPasswordResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41374,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 172,
		index = 41370,
	},
	["HandleSignUpResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41369,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 184,
		index = 41364,
	},
	["HandleSignInResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41360,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 184,
		index = 41355,
	},
	["ExtractArchwayResult"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41312,
				cType = ffi.typeof("struct FArchwayResult"),
				castTo = ffi.typeof("struct FArchwayResult*"),
				offset = 12
			},
			{
				name = "Data",
				index = 41310,
				type = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				flags = 8,
				offset = 0
			},
		},
		dataSize = 140,
		index = 41309,
		retOffset = 12,
	},
	["MarkOffersNotified"] = {
		fields = {
			{
				name = "ControllerId",
				index = 41305,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 136,
		index = 41296,
	},
	["LocallyConsumeEntitlementWithCount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41290,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "EntitlementName",
				index = 41293,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "NumToConsume",
				index = 41292,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "ControllerId",
				index = 41291,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 36,
		index = 41288,
		retOffset = 16,
	},
	["eventConsumeEntitlementsWithCounts"] = {
		fields = {
			{
				name = "EntitlementsToConsume",
				index = 41447,
				type = ffi.typeof("struct TArray_UGearboxAccountEntitlementPtr"),
				castTo = ffi.typeof("struct TArray_UGearboxAccountEntitlementPtr*"),
				flags = 8,
				offset = 0
			},
			{
				name = "Counts",
				index = 41451,
				type = ffi.typeof("struct TArray_int"),
				castTo = ffi.typeof("struct TArray_int*"),
				flags = 8,
				offset = 12
			},
			{
				name = "ControllerId",
				index = 41449,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 24
			},
			{
				name = "EntitlementConsumedDelegate",
				index = 41450,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 28
			},
		},
		dataSize = 192,
		index = 41294,
	},
	["ConsumeEntitlementWithCount"] = {
		fields = {
			{
				name = "EntitlementName",
				index = 41277,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Count",
				index = 41276,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "ControllerId",
				index = 41275,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
			{
				name = "EntitlementConsumedDelegate",
				index = 41274,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
		},
		dataSize = 144,
		index = 41269,
	},
	["RedeemCode"] = {
		fields = {
			{
				name = "Code",
				index = 41267,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "ControllerId",
				index = 41266,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
			{
				name = "CodeRedeemedDelegate",
				index = 41265,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
		},
		dataSize = 144,
		index = 41259,
	},
	["ResetPasswordGearboxAccount"] = {
		fields = {
			{
				name = "Email",
				index = 41257,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "ControllerId",
				index = 41256,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
			{
				name = "ResetPasswordDelegate",
				index = 41255,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
		},
		dataSize = 136,
		index = 41250,
	},
	["EscapeJson"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41248,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "Input",
				index = 41249,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 36,
		index = 41246,
		retOffset = 12,
	},
	["SignUpGearboxAccount"] = {
		fields = {
			{
				name = "Email",
				index = 41244,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Password",
				index = 41243,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "PasswordConfirm",
				index = 41242,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "AgeString",
				index = 41241,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 36
			},
			{
				name = "ControllerId",
				index = 41240,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 48
			},
			{
				name = "SignUpDelegate",
				index = 41239,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 52
			},
		},
		dataSize = 176,
		index = 41234,
	},
	["SignInGearboxAccount"] = {
		fields = {
			{
				name = "Email",
				index = 41224,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Password",
				index = 41223,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "ControllerId",
				index = 41222,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 24
			},
			{
				name = "SignInDelegate",
				index = 41221,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 28
			},
		},
		dataSize = 152,
		index = 41216,
	},
	["OnEntitlementConsumed"] = {
		fields = {
			{
				name = "ConsumeResult",
				index = 41215,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EEntitlementConsumedResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41214,
	},
	["OnCodeRedeemed"] = {
		fields = {
			{
				name = "RedeemResult",
				index = 41211,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECodeRedeemedResult",
				flags = 32,
				offset = 0
			},
			{
				name = "CustomTitle",
				index = 41212,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "CustomBody",
				index = 41213,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
		},
		dataSize = 28,
		index = 41210,
	},
	["OnResetPasswordGearboxAccount"] = {
		fields = {
			{
				name = "ResetResult",
				index = 41209,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EResetPasswordResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41208,
	},
	["OnSignUpGearboxAccount"] = {
		fields = {
			{
				name = "SignUpResult",
				index = 41207,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESignUpResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41206,
	},
	["OnSignInGearboxAccount"] = {
		fields = {
			{
				name = "SignInResult",
				index = 41204,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESignInResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41203,
	},
	["HasSignedAllEulas"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41538,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41537,
		retOffset = 0,
	},
	["CountEntitlement"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41534,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "EntitlementName",
				index = 41536,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bIgnoreLocallyConsumed",
				index = 41535,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 20,
		index = 41533,
		retOffset = 12,
	},
	["GetTotalGoldenKeyCount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41532,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 41531,
		retOffset = 0,
	},
	["GetGoldenKeyCount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41529,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "bIgnoreLocallyConsumed",
				index = 41530,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41528,
		retOffset = 4,
	},
	["HasGoldenKey"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41526,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "bIgnoreLocallyConsumed",
				index = 41527,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41525,
		retOffset = 4,
	},
	["HasDeveloperSkin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41524,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41523,
		retOffset = 0,
	},
	["IsDeveloper"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41522,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41521,
		retOffset = 0,
	},
	["MarkOffersNotified"] = {
		fields = {
		},
		dataSize = 4,
		index = 41520,
	},
	["GetUnnotifiedOffers"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41307,
				cType = ffi.typeof("struct TArray_UGearboxAccountOfferPtr"),
				castTo = ffi.typeof("struct TArray_UGearboxAccountOfferPtr*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 28,
		index = 41306,
		retOffset = 0,
	},
	["GetEntitlementWithName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41281,
				castTo = ffi.typeof("struct UGearboxAccountEntitlement**"),
				offset = 8
			},
			{
				name = "EntitlementName",
				index = 41516,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41280,
		retOffset = 8,
	},
	["GetEntitlementWithId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41514,
				castTo = ffi.typeof("struct UGearboxAccountEntitlement**"),
				offset = 4
			},
			{
				name = "Id",
				index = 41515,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41513,
		retOffset = 4,
	},
	["HasEntitlement"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41510,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "EntitlementName",
				index = 41512,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bIgnoreLocallyConsumed",
				index = 41511,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 20,
		index = 41509,
		retOffset = 12,
	},
	["RemoveEntitlement"] = {
		fields = {
			{
				name = "Entitlement",
				index = 41508,
				className = "UGearboxAccountEntitlement",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41507,
	},
	["ReplaceEntitlements"] = {
		fields = {
			{
				name = "NewEntitlements",
				isRet = true,
				index = 41495,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FEntitlementResult"),
				castTo = ffi.typeof("struct TArray_FEntitlementResult*"),
				TArray = true,
				offset = 0
			},
			{
				name = "NewOffers",
				isRet = true,
				index = 41497,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FOfferResult"),
				castTo = ffi.typeof("struct TArray_FOfferResult*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 112,
		index = 41494,
	},
	["ReplaceServices"] = {
		fields = {
			{
				name = "NewServices",
				isRet = true,
				index = 41492,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FServiceResult"),
				castTo = ffi.typeof("struct TArray_FServiceResult*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41491,
	},
	["HandleReloadEntitlementsResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41490,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 152,
		index = 41488,
	},
	["ReloadEntitlements"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41487,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 112,
		index = 41480,
		retOffset = 0,
	},
	["ResetEntitlementUpdateTimer"] = {
		fields = {
		},
		dataSize = 0,
		index = 41479,
	},
	["CanReloadEntitlements"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41478,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41477,
		retOffset = 0,
	},
	["TriggerEntitlementsUpdatedDelegates"] = {
		fields = {
		},
		dataSize = 12,
		index = 41475,
	},
	["ClearEntitlementsUpdatedDelegate"] = {
		fields = {
			{
				name = "EntitlementsUpdatedDelegate",
				index = 41474,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41473,
	},
	["AddEntitlementsUpdatedDelegate"] = {
		fields = {
			{
				name = "EntitlementsUpdatedDelegate",
				index = 41472,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41471,
	},
	["eventGetService"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41231,
				castTo = ffi.typeof("struct USparkServiceConfiguration**"),
				offset = 8
			},
			{
				name = "ServiceName",
				index = 41469,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41230,
		retOffset = 8,
	},
	["Clear"] = {
		fields = {
		},
		dataSize = 0,
		index = 41468,
	},
	["ExtractArchwayResultJson"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41362,
				castTo = ffi.typeof("BOOL*"),
				offset = 140
			},
			{
				name = "Data",
				isRet = true,
				index = 41539,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 0
			},
			{
				name = "ArchwayData",
				isRet = true,
				index = 41540,
				isOutParm = true,
				cType = ffi.typeof("struct FArchwayResult"),
				castTo = ffi.typeof("struct FArchwayResult*"),
				offset = 12
			},
		},
		dataSize = 260,
		index = 41361,
		retOffset = 140,
	},
	["ExtractArchwayResult"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41466,
				castTo = ffi.typeof("BOOL*"),
				offset = 140
			},
			{
				name = "Data",
				isRet = true,
				index = 41464,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 0
			},
			{
				name = "ArchwayData",
				isRet = true,
				index = 41467,
				isOutParm = true,
				cType = ffi.typeof("struct FArchwayResult"),
				castTo = ffi.typeof("struct FArchwayResult*"),
				offset = 12
			},
		},
		dataSize = 144,
		index = 41463,
		retOffset = 140,
	},
	["GetStepConfiguration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43294,
				cType = ffi.typeof("struct FStepConfiguration"),
				castTo = ffi.typeof("struct FStepConfiguration*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 43293,
		retOffset = 0,
	},
	["GotoStep"] = {
		fields = {
			{
				name = "Step",
				index = 43292,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43291,
	},
	["GotoNextStep"] = {
		fields = {
		},
		dataSize = 0,
		index = 43290,
	},
	["GotoFirstStep"] = {
		fields = {
		},
		dataSize = 0,
		index = 43289,
	},
	["eventPerformStep"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43288,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 0
			},
		},
		dataSize = 1,
		index = 43287,
		retOffset = 0,
	},
	["PauseLoop"] = {
		fields = {
		},
		dataSize = 0,
		index = 43286,
	},
	["Init"] = {
		fields = {
		},
		dataSize = 0,
		index = 43285,
	},
	["ContinueLoop"] = {
		fields = {
		},
		dataSize = 0,
		index = 43284,
	},
	["StopLoop"] = {
		fields = {
		},
		dataSize = 0,
		index = 43283,
	},
	["eventTriggerSparkInitializedDelegates"] = {
		fields = {
			{
				name = "InitializeResult",
				index = 44728,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInitializedResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 44726,
	},
	["ClearSparkInitializedDelegate"] = {
		fields = {
			{
				name = "SparkInitializedDelegate",
				index = 44725,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 44724,
	},
	["AddSparkInitializedDelegate"] = {
		fields = {
			{
				name = "SparkInitializedDelegate",
				index = 44723,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44722,
	},
	["GetStepName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44721,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44720,
		retOffset = 0,
	},
	["GetStepConfiguration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44719,
				cType = ffi.typeof("struct FStepConfiguration"),
				castTo = ffi.typeof("struct FStepConfiguration*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 44718,
		retOffset = 0,
	},
	["IsInitialized"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44717,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44716,
		retOffset = 0,
	},
	["IsDisabled"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44715,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44714,
		retOffset = 0,
	},
	["IsInitializing"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44712,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44711,
		retOffset = 0,
	},
	["UpdateAgreementsSigning"] = {
		fields = {
			{
				name = "GbxAccountData",
				index = 44729,
				className = "UGearboxAccountData",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "NeedsSignAgreements",
				index = 44730,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 16,
		index = 44713,
	},
	["HandleVerificationReceived"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 44710,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 152,
		index = 44708,
	},
	["eventVerifyAuthentication"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44707,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 0
			},
		},
		dataSize = 112,
		index = 44700,
		retOffset = 0,
	},
	["AuthenticateTicketStringWithDelegate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44697,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 24
			},
			{
				name = "ticket",
				index = 44699,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "SparkRequestCompleteDelegate",
				index = 44698,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 12
			},
		},
		dataSize = 128,
		index = 44692,
		retOffset = 24,
	},
	["HandleAuthenticationReceived"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 44691,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 152,
		index = 44689,
	},
	["eventAuthenticateAccount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44688,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 0
			},
		},
		dataSize = 32,
		index = 44685,
		retOffset = 0,
	},
	["GetConfigQuery"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44684,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44683,
		retOffset = 0,
	},
	["CompleteInitialization"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44682,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44681,
		retOffset = 0,
	},
	["HttpInit"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44680,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44679,
		retOffset = 0,
	},
	["CheckForTMS"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44678,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44677,
		retOffset = 0,
	},
	["PerformStep"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44676,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ESparkStepResult",
				offset = 0
			},
		},
		dataSize = 1,
		index = 44675,
		retOffset = 0,
	},
	["StartProcess"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44674,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44673,
		retOffset = 0,
	},
	["InitWithController"] = {
		fields = {
			{
				name = "ControllerId",
				index = 44672,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bNewPrimary",
				index = 44671,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
			{
				name = "SparkInitializedDelegate",
				index = 44670,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 8
			},
		},
		dataSize = 28,
		index = 44668,
	},
	["eventGetLeviathanServiceConfiguration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43765,
				castTo = ffi.typeof("struct USparkServiceConfiguration**"),
				offset = 4
			},
			{
				name = "ControllerNumber",
				index = 43766,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 20,
		index = 43763,
		retOffset = 4,
	},
	["OnSparkInitialized"] = {
		fields = {
			{
				name = "InitializedResult",
				index = 43768,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInitializedResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 43767,
	},
	["LoadServiceConfigurationForPlayer"] = {
		fields = {
			{
				name = "SplitscreenIndex",
				index = 43762,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 43761,
	},
	["GetLeviathanService"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43760,
				castTo = ffi.typeof("struct ULeviathanService**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43759,
		retOffset = 0,
	},
	["RemoveScriptCallback"] = {
		fields = {
			{
				name = "HttpRequestId",
				index = 41095,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41093,
	},
	["GetNewsService"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41097,
				castTo = ffi.typeof("struct USparkNews**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41094,
		retOffset = 0,
	},
	["GetTitleStorageServiceConfiguration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41100,
				castTo = ffi.typeof("struct USparkServiceConfiguration**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41096,
		retOffset = 0,
	},
	["GetTitleStorageUrl"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41102,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41099,
		retOffset = 0,
	},
	["ClearGearboxAccountData"] = {
		fields = {
			{
				name = "IncludePrimaryPlayer",
				index = 41104,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41101,
	},
	["SignOutGearboxAccount"] = {
		fields = {
			{
				name = "ControllerId",
				index = 41106,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41103,
	},
	["SignInGearboxAccount"] = {
		fields = {
			{
				name = "ControllerId",
				index = 41108,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41105,
	},
	["eventGetGearboxAccountData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41111,
				castTo = ffi.typeof("struct UGearboxAccountData**"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 41110,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41107,
		retOffset = 4,
	},
	["eventIsGearboxAccountAuthenticated"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41114,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 41113,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41109,
		retOffset = 4,
	},
	["IsGearboxAccountSignedIn"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41117,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 41116,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 41112,
		retOffset = 4,
	},
	["ConvertUtcTimeToLocalTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41120,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "UtcTime",
				index = 41119,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 41115,
		retOffset = 12,
	},
	["ShouldUpdateEmergencyMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41122,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41118,
		retOffset = 0,
	},
	["GetEmergencyMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41124,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41121,
		retOffset = 0,
	},
	["SetEmergencyMessage"] = {
		fields = {
			{
				name = "Message",
				index = 41126,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41123,
	},
	["eventGetPlatformLoginNameFromSplitscreenIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41129,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "SplitscreenIndex",
				index = 41128,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41125,
		retOffset = 4,
	},
	["GetPlatformLoginNameFromController"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41132,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "ControllerId",
				index = 41131,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 41127,
		retOffset = 4,
	},
	["IncreaseInteractionTries"] = {
		fields = {
		},
		dataSize = 0,
		index = 41130,
	},
	["GetInteractionTries"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41135,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41133,
		retOffset = 0,
	},
	["GetInteractionGraceTries"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41137,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41134,
		retOffset = 0,
	},
	["GetInteractionPunishmentMinWaitSeconds"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41139,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41136,
		retOffset = 0,
	},
	["GetInteractionMinWaitSeconds"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41141,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41138,
		retOffset = 0,
	},
	["IsTmsComplete"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41143,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41140,
		retOffset = 0,
	},
	["SetTmsComplete"] = {
		fields = {
		},
		dataSize = 0,
		index = 41142,
	},
	["GetSparkInitialization"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41146,
				castTo = ffi.typeof("struct USparkInitializationProcess**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41144,
		retOffset = 0,
	},
	["eventRestartSparkInitialization"] = {
		fields = {
			{
				name = "bPrimary",
				index = 41148,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41145,
	},
	["RestartSparkInitializationFromScript"] = {
		fields = {
			{
				name = "bPrimary",
				index = 41150,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SparkInitializedDelegate",
				index = 41151,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
			{
				name = "SparkEmergencyMessageDelegate",
				index = 41152,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
		},
		dataSize = 28,
		index = 41147,
	},
	["StartSparkInitialization"] = {
		fields = {
			{
				name = "ControllerId",
				index = 41154,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SparkInitializedDelegate",
				index = 41155,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
			{
				name = "SparkEmergencyMessageDelegate",
				index = 41156,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
			{
				name = "EntitlementsUpdatedDelegate",
				index = 41157,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 28
			},
		},
		dataSize = 40,
		index = 41149,
	},
	["StartSecondaryInitialization"] = {
		fields = {
			{
				name = "ControllerId",
				index = 41159,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SparkInitializedDelegate",
				index = 41160,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
			{
				name = "EntitlementsUpdatedDelegate",
				index = 41161,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
		},
		dataSize = 28,
		index = 41153,
	},
	["GetGameName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41163,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41158,
		retOffset = 0,
	},
	["GetHardwareName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41165,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41162,
		retOffset = 0,
	},
	["GetPlatformName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41167,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41164,
		retOffset = 0,
	},
	["GetPlatformTicket"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41171,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 8
			},
			{
				name = "ControllerId",
				index = 41169,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bPrimary",
				index = 41170,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 20,
		index = 41166,
		retOffset = 8,
	},
	["ClearSparkConfigReceivedDelegate"] = {
		fields = {
			{
				name = "SparkConfigReceivedDelegate",
				index = 41173,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41168,
	},
	["AddSparkConfigReceivedDelegate"] = {
		fields = {
			{
				name = "SparkConfigReceivedDelegate",
				index = 41175,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41172,
	},
	["ResetInitializationStatus"] = {
		fields = {
		},
		dataSize = 0,
		index = 41174,
	},
	["eventIsSparkEnabled"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41178,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 41176,
		retOffset = 0,
	},
	["IssueSparkStringRequest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41181,
				castTo = ffi.typeof("int*"),
				offset = 92
			},
			{
				name = "HttpRequestParameters",
				isRet = true,
				index = 41180,
				isOutParm = true,
				cType = ffi.typeof("struct FHttpParameters"),
				castTo = ffi.typeof("struct FHttpParameters*"),
				offset = 0
			},
			{
				name = "URL",
				index = 41182,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 56
			},
			{
				name = "RequestData",
				index = 41195,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 68
			},
			{
				name = "SparkRequestCompleteDelegate",
				index = 41196,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 80
			},
		},
		dataSize = 96,
		index = 41177,
		retOffset = 92,
	},
	["IssueSparkRequest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41198,
				castTo = ffi.typeof("int*"),
				offset = 92
			},
			{
				name = "HttpRequestParameters",
				isRet = true,
				index = 41197,
				isOutParm = true,
				cType = ffi.typeof("struct FHttpParameters"),
				castTo = ffi.typeof("struct FHttpParameters*"),
				offset = 0
			},
			{
				name = "URL",
				index = 41199,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 56
			},
			{
				name = "RequestData",
				isRet = true,
				index = 41200,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 68
			},
			{
				name = "SparkRequestCompleteDelegate",
				index = 41201,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 80
			},
		},
		dataSize = 96,
		index = 41179,
		retOffset = 92,
	},
	["RemoveScriptCallback"] = {
		fields = {
			{
				name = "HttpRequestId",
				index = 44904,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44902,
	},
	["GetNewsService"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44905,
				castTo = ffi.typeof("struct USparkNews**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44903,
		retOffset = 0,
	},
	["GetTitleStorageServiceConfiguration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44901,
				castTo = ffi.typeof("struct USparkServiceConfiguration**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44900,
		retOffset = 0,
	},
	["GetTitleStorageUrl"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44899,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44898,
		retOffset = 0,
	},
	["OnSparkInitialized"] = {
		fields = {
			{
				name = "InitializedResult",
				index = 44894,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInitializedResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44893,
	},
	["IncreaseInteractionTries"] = {
		fields = {
		},
		dataSize = 0,
		index = 44892,
	},
	["GetInteractionTries"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44890,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44889,
		retOffset = 0,
	},
	["GetInteractionGraceTries"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44887,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44886,
		retOffset = 0,
	},
	["GetInteractionPunishmentMinWaitSeconds"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44884,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44883,
		retOffset = 0,
	},
	["GetInteractionMinWaitSeconds"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44881,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44880,
		retOffset = 0,
	},
	["ConvertUtcTimeToLocalTime"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44878,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "UtcTime",
				index = 44879,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 44877,
		retOffset = 12,
	},
	["ShouldUpdateEmergencyMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44876,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44875,
		retOffset = 0,
	},
	["GetEmergencyMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44874,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44873,
		retOffset = 0,
	},
	["SetEmergencyMessage"] = {
		fields = {
			{
				name = "NewMessage",
				index = 44870,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44869,
	},
	["IsTmsComplete"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44868,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44867,
		retOffset = 0,
	},
	["SetTmsComplete"] = {
		fields = {
		},
		dataSize = 0,
		index = 44865,
	},
	["RestartSparkInitializationFromScript"] = {
		fields = {
			{
				name = "bPrimary",
				index = 44864,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SparkInitializedDelegate",
				index = 44863,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
			{
				name = "SparkEmergencyMessageDelegate",
				index = 44862,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
		},
		dataSize = 32,
		index = 44861,
	},
	["eventRestartSparkInitialization"] = {
		fields = {
			{
				name = "bPrimary",
				index = 44860,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 44859,
	},
	["StartSparkInitialization"] = {
		fields = {
			{
				name = "ControllerId",
				index = 44856,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SparkInitializedDelegate",
				index = 44855,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
			{
				name = "SparkEmergencyMessageDelegate",
				index = 44854,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
			{
				name = "EntitlementsUpdatedDelegate",
				index = 44853,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 28
			},
		},
		dataSize = 64,
		index = 44850,
	},
	["ResetInitializationStatus"] = {
		fields = {
		},
		dataSize = 0,
		index = 44849,
	},
	["ResetSecondaryInitializationStatus"] = {
		fields = {
		},
		dataSize = 0,
		index = 44848,
	},
	["StartSecondaryInitialization"] = {
		fields = {
			{
				name = "ControllerId",
				index = 44846,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SparkInitializedDelegate",
				index = 44845,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
			{
				name = "EntitlementsUpdatedDelegate",
				index = 44844,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 16
			},
		},
		dataSize = 56,
		index = 44841,
	},
	["GetSparkInitialization"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44839,
				castTo = ffi.typeof("struct USparkInitializationProcess**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44838,
		retOffset = 0,
	},
	["SignInGearboxAccount"] = {
		fields = {
			{
				name = "ControllerId",
				index = 44837,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44836,
	},
	["eventGetGearboxAccountData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44834,
				castTo = ffi.typeof("struct UGearboxAccountData**"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 44835,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 44833,
		retOffset = 4,
	},
	["SignOutGearboxAccount"] = {
		fields = {
			{
				name = "ControllerId",
				index = 44832,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44831,
	},
	["ValidPlayerIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44829,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "PlayerIndex",
				index = 44830,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44828,
		retOffset = 4,
	},
	["GetPlayerIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44826,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 44827,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44825,
		retOffset = 4,
	},
	["ClearGearboxAccountData"] = {
		fields = {
			{
				name = "IncludePrimaryPlayer",
				index = 44823,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 44822,
	},
	["IsGearboxAccountSignedIn"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44820,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 44821,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44819,
		retOffset = 4,
	},
	["eventIsGearboxAccountAuthenticated"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44817,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 44818,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44816,
		retOffset = 4,
	},
	["GetGameName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44815,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44814,
		retOffset = 0,
	},
	["GetHardwareName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44813,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44812,
		retOffset = 0,
	},
	["GetPlatformName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44811,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44810,
		retOffset = 0,
	},
	["GetPlatformTicket"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44807,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 8
			},
			{
				name = "ControllerId",
				index = 44809,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bPrimary",
				index = 44808,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 20,
		index = 44806,
		retOffset = 8,
	},
	["ClearSparkConfigReceivedDelegate"] = {
		fields = {
			{
				name = "SparkConfigReceivedDelegate",
				index = 44805,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44804,
	},
	["AddSparkConfigReceivedDelegate"] = {
		fields = {
			{
				name = "SparkConfigReceivedDelegate",
				index = 44803,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44802,
	},
	["GetPlatformLoginNameFromController"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44800,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "ControllerId",
				index = 44801,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 96,
		index = 44793,
		retOffset = 4,
	},
	["eventGetPlatformLoginNameFromSplitscreenIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44791,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "SplitscreenIndex",
				index = 44792,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 32,
		index = 44790,
		retOffset = 4,
	},
	["eventGetPlatformLoginName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44789,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44788,
		retOffset = 0,
	},
	["eventGetLoginStatus"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44787,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ELoginStatus",
				offset = 0
			},
		},
		dataSize = 8,
		index = 44786,
		retOffset = 0,
	},
	["eventIsShiftEnabled"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44785,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44784,
		retOffset = 0,
	},
	["eventIsSparkEnabled"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44783,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44782,
		retOffset = 0,
	},
	["WithShift"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44781,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44780,
		retOffset = 0,
	},
	["WithSpark"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44779,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 44778,
		retOffset = 0,
	},
	["IssueSparkStringRequest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44773,
				castTo = ffi.typeof("int*"),
				offset = 92
			},
			{
				name = "HttpRequestParameters",
				isRet = true,
				index = 44777,
				isOutParm = true,
				cType = ffi.typeof("struct FHttpParameters"),
				castTo = ffi.typeof("struct FHttpParameters*"),
				offset = 0
			},
			{
				name = "URL",
				index = 44776,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 56
			},
			{
				name = "RequestData",
				index = 44775,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 68
			},
			{
				name = "SparkRequestCompleteDelegate",
				index = 44774,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 80
			},
		},
		dataSize = 96,
		index = 44772,
		retOffset = 92,
	},
	["IssueSparkRequest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44768,
				castTo = ffi.typeof("int*"),
				offset = 92
			},
			{
				name = "HttpParameters",
				isRet = true,
				index = 44771,
				isOutParm = true,
				cType = ffi.typeof("struct FHttpParameters"),
				castTo = ffi.typeof("struct FHttpParameters*"),
				offset = 0
			},
			{
				name = "URL",
				index = 44770,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 56
			},
			{
				name = "RequestData",
				isRet = true,
				index = 44766,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 68
			},
			{
				name = "SparkRequestCompleteDelegate",
				index = 44769,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 80
			},
		},
		dataSize = 96,
		index = 44765,
		retOffset = 92,
	},
	["AlternativeXboxlivePlatformId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44763,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "NetId",
				isRet = true,
				index = 44764,
				isOutParm = true,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 0
			},
		},
		dataSize = 36,
		index = 44762,
		retOffset = 24,
	},
	["OnSparkEmergencyMessageUpdated"] = {
		fields = {
		},
		dataSize = 0,
		index = 44761,
	},
	["OnSparkConfigReceived"] = {
		fields = {
			{
				name = "ConfigArray",
				index = 44759,
				type = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				flags = 8,
				offset = 0
			},
		},
		dataSize = 12,
		index = 44758,
	},
	["OnSparkRequestComplete"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 44757,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 24,
		index = 44752,
	},
	["GetBoolParameter"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44947,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "KeyName",
				index = 44945,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Default",
				index = 44946,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 44944,
		retOffset = 16,
	},
	["GetFloatParameter"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44939,
				castTo = ffi.typeof("float*"),
				offset = 24
			},
			{
				name = "KeyName",
				index = 44943,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "DefaultValue",
				index = 44942,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "MinimumValue",
				index = 44941,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
			{
				name = "MaximumValue",
				index = 44940,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 28,
		index = 44938,
		retOffset = 24,
	},
	["GetIntParameter"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44896,
				castTo = ffi.typeof("int*"),
				offset = 24
			},
			{
				name = "KeyName",
				index = 44937,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "DefaultValue",
				index = 44936,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "MinimumValue",
				index = 44935,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "MaximumValue",
				index = 44934,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 28,
		index = 44895,
		retOffset = 24,
	},
	["GetStringParameter"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44931,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "KeyName",
				index = 44933,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Default",
				index = 44932,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 44930,
		retOffset = 24,
	},
	["GetParameter"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41233,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "KeyNameToSearchFor",
				index = 44929,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 41232,
		retOffset = 12,
	},
	["LoadService"] = {
		fields = {
			{
				name = "Service",
				isRet = true,
				index = 44928,
				isOutParm = true,
				cType = ffi.typeof("struct FServiceResult"),
				castTo = ffi.typeof("struct FServiceResult*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 44927,
	},
	["LoadOverrides"] = {
		fields = {
		},
		dataSize = 0,
		index = 44925,
	},
	["UTF8toString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 41060,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "inputBytes",
				index = 41059,
				type = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				flags = 8,
				offset = 0
			},
		},
		dataSize = 24,
		index = 41057,
		retOffset = 12,
	},
	["OnEntitlementsUpdated"] = {
		fields = {
			{
				name = "GbxAccount",
				index = 41063,
				className = "UGearboxAccountData",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 41058,
	},
	["OnSparkEmergencyMessageUpdated"] = {
		fields = {
		},
		dataSize = 0,
		index = 41062,
	},
	["OnSparkInitialized"] = {
		fields = {
			{
				name = "InitializedResult",
				index = 41066,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInitializedResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 41064,
	},
	["OnSparkConfigReceived"] = {
		fields = {
			{
				name = "ConfigArray",
				index = 41069,
				type = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				flags = 8,
				offset = 0
			},
		},
		dataSize = 12,
		index = 41065,
	},
	["OnSparkRequestComplete"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 41077,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 24,
		index = 41072,
	},
	["eventStopSequence"] = {
		fields = {
		},
		dataSize = 0,
		index = 38904,
	},
	["GetAttributeContext"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39165,
				castTo = ffi.typeof("struct UObject**"),
				offset = 8
			},
			{
				name = "Attribute",
				index = 39167,
				className = "UAttributeDefinitionBase",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AttributeContextSource",
				index = 39166,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 16,
		index = 39164,
		retOffset = 8,
	},
	["GetAttributeContext"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 39282,
				castTo = ffi.typeof("struct UObject**"),
				offset = 8
			},
			{
				name = "Attribute",
				index = 39284,
				className = "UAttributeDefinitionBase",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AttributeContextSource",
				index = 39283,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 20,
		index = 39280,
		retOffset = 8,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39708,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39707,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39706,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39705,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39704,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39703,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 64,
		index = 39701,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39721,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39720,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39719,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39718,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39717,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39716,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 76,
		index = 39713,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39734,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39733,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39732,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39731,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39730,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39729,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 68,
		index = 39726,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39758,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39757,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39756,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39755,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39754,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39753,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 68,
		index = 39750,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39774,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39773,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39772,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39771,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39770,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39769,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 72,
		index = 39766,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39840,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39839,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39838,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39837,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39836,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39835,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 56,
		index = 39834,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39854,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39853,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39852,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39851,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39850,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39849,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 68,
		index = 39848,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39867,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39866,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39865,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39864,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39863,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39862,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 76,
		index = 39858,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39878,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39877,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39876,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39875,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39874,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39873,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 56,
		index = 39872,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39889,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39888,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39887,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39886,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39885,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39884,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 60,
		index = 39883,
	},
	["PublishBehaviorOutput"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 39903,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Value",
				index = 39902,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 36,
		index = 39901,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39900,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39899,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39898,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39897,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39896,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39895,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 68,
		index = 39893,
	},
	["PublishBehaviorOutput"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 39917,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Value",
				index = 39916,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 28
			},
		},
		dataSize = 36,
		index = 39915,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39914,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39913,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39912,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39911,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39910,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39909,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 68,
		index = 39907,
	},
	["PublishBehaviorOutput"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 39937,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "R",
				index = 39936,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
			{
				name = "G",
				index = 39935,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 32
			},
			{
				name = "B",
				index = 39934,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 36
			},
			{
				name = "A",
				index = 39933,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 48,
		index = 39932,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39931,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39930,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39929,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39928,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39927,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39926,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 96,
		index = 39922,
	},
	["PublishBehaviorOutput"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 39953,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "Result",
				index = 39952,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 39951,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39950,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39949,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39948,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39947,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39946,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39945,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 64,
		index = 39944,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39983,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39982,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39981,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39980,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39979,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39978,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 64,
		index = 39977,
	},
	["PublishBehaviorOutput"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40002,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
			{
				name = "TimeRemaining",
				index = 40001,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 40000,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 39999,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 39998,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 39997,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 39996,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 39995,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 39994,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 84,
		index = 39990,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40120,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40119,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40118,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40117,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40116,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40115,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 64,
		index = 40113,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40131,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40130,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40129,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40128,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40127,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40126,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 64,
		index = 40124,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40152,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40151,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40150,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40149,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40148,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40147,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 92,
		index = 40143,
	},
	["PlaySpecialMove"] = {
		fields = {
			{
				name = "SMC",
				index = 40179,
				className = "USpecialMoveComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 40178,
	},
	["TriggerOutput"] = {
		fields = {
			{
				name = "KernelInfo",
				isRet = true,
				index = 40177,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 40176,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40169,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40168,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40167,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40166,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40165,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40164,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 72,
		index = 40161,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40198,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40197,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40196,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40195,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40194,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40193,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 68,
		index = 40190,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40214,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40213,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40212,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40211,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40210,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40209,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 84,
		index = 40205,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40228,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40227,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40226,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40225,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40224,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40223,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 84,
		index = 40219,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40240,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40239,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40238,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40237,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40236,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40235,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 68,
		index = 40232,
	},
	["ApplyBehaviorToContext"] = {
		fields = {
			{
				name = "ContextObject",
				index = 40254,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "KernelInfo",
				isRet = true,
				index = 40253,
				isOutParm = true,
				cType = ffi.typeof("struct FBehaviorKernelInfo"),
				castTo = ffi.typeof("struct FBehaviorKernelInfo*"),
				offset = 4
			},
			{
				name = "SelfObject",
				index = 40252,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
			{
				name = "MyInstigatorObject",
				index = 40251,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "OtherEventParticipantObject",
				index = 40250,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
			{
				name = "EventData",
				index = 40249,
				type = ffi.typeof("struct FBehaviorParameters"),
				castTo = ffi.typeof("struct FBehaviorParameters*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 80,
		index = 40247,
	},
	["DoCrossfade"] = {
		fields = {
		},
		dataSize = 0,
		index = 40627,
	},
	["UpdateAllLerps"] = {
		fields = {
			{
				name = "DeltaTime",
				index = 40626,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "OutPOV",
				isRet = true,
				index = 40625,
				isOutParm = true,
				cType = ffi.typeof("struct FTPOV"),
				castTo = ffi.typeof("struct FTPOV*"),
				offset = 4
			},
		},
		dataSize = 36,
		index = 40624,
	},
	["ModifyCamera"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40620,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "Camera",
				index = 40623,
				className = "ACamera",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "DeltaTime",
				index = 40622,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "OutPOV",
				isRet = true,
				index = 40621,
				isOutParm = true,
				cType = ffi.typeof("struct FTPOV"),
				castTo = ffi.typeof("struct FTPOV*"),
				offset = 8
			},
		},
		dataSize = 72,
		index = 40618,
		retOffset = 36,
	},
	["ProcessCameraBlend"] = {
		fields = {
			{
				name = "Camera",
				index = 40617,
				className = "ACamera",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AdjustedDeltaTime",
				index = 40616,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "OutPOV",
				isRet = true,
				index = 40615,
				isOutParm = true,
				cType = ffi.typeof("struct FTPOV"),
				castTo = ffi.typeof("struct FTPOV*"),
				offset = 8
			},
		},
		dataSize = 76,
		index = 40613,
	},
	["InitializeSubModifiers"] = {
		fields = {
		},
		dataSize = 0,
		index = 40612,
	},
	["eventEnableModifier"] = {
		fields = {
		},
		dataSize = 0,
		index = 40611,
	},
	["ExecuteFadeIfNeeded"] = {
		fields = {
			{
				name = "PC",
				isRet = true,
				index = 40705,
				isOutParm = true,
				castTo = ffi.typeof("struct AGearboxPlayerController**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 40704,
	},
	["GetDesiredLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40701,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 32
			},
			{
				name = "OutPOV",
				isRet = true,
				index = 40703,
				isOutParm = true,
				cType = ffi.typeof("struct FTPOV"),
				castTo = ffi.typeof("struct FTPOV*"),
				offset = 0
			},
			{
				name = "PC",
				isRet = true,
				index = 40702,
				isOutParm = true,
				castTo = ffi.typeof("struct AGearboxPlayerController**"),
				offset = 28
			},
		},
		dataSize = 92,
		index = 40696,
		retOffset = 32,
	},
	["ModifyCamera"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40692,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "Camera",
				index = 40695,
				className = "ACamera",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "DeltaTime",
				index = 40694,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "OutPOV",
				isRet = true,
				index = 40693,
				isOutParm = true,
				cType = ffi.typeof("struct FTPOV"),
				castTo = ffi.typeof("struct FTPOV*"),
				offset = 8
			},
		},
		dataSize = 80,
		index = 40688,
		retOffset = 36,
	},
	["GetBoneLocation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 40684,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Target",
				index = 40687,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "BoneName",
				index = 40686,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "BoneLoc",
				isRet = true,
				index = 40685,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 12
			},
		},
		dataSize = 32,
		index = 40682,
		retOffset = 24,
	},
	["SetLookAtBone"] = {
		fields = {
			{
				name = "NewBone",
				index = 40681,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 40680,
	},
	["SetLookAtTarget"] = {
		fields = {
			{
				name = "newLookAtTarget",
				index = 40679,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 40678,
	},
	["SetTargetLocation"] = {
		fields = {
			{
				name = "NewTargetLocation",
				index = 40677,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "newTransitionTimeIn",
				index = 40676,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "newTransitionTimeOut",
				index = 40675,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 20,
		index = 40674,
	},
	["SetDuration"] = {
		fields = {
			{
				name = "NewDuration",
				index = 40673,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 40672,
	},
	["SetTransitionTimes"] = {
		fields = {
			{
				name = "NewInTime",
				index = 40671,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewOutTime",
				index = 40670,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 40669,
	},
	["SetZoomFOV"] = {
		fields = {
			{
				name = "newZoom",
				index = 40668,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 40667,
	},
	["SetThirdPersonDistances"] = {
		fields = {
			{
				name = "NewX",
				index = 40666,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewY",
				index = 40665,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "NewZ",
				index = 40664,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 40663,
	},
	["SetLookAtMode"] = {
		fields = {
			{
				name = "NewMode",
				index = 40662,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ECameraLookAtMode",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 40661,
	},
	["DisableModifier"] = {
		fields = {
			{
				name = "bImmediate",
				index = 40660,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 40659,
	},
	["EnableModifier"] = {
		fields = {
		},
		dataSize = 0,
		index = 40658,
	},
	["Internal_GetService"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45127,
				castTo = ffi.typeof("struct USparkServiceConfiguration**"),
				offset = 12
			},
			{
				name = "ControllerId",
				index = 45129,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Spark",
				index = 45128,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 24,
		index = 45108,
		retOffset = 12,
	},
	["CallAndClearRetrievedDelegate"] = {
		fields = {
			{
				name = "RetrievealResult",
				index = 45126,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENewsRetrievalResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45109,
	},
	["ParseArticles"] = {
		fields = {
			{
				name = "NewsArticlesJSONObject",
				index = 45124,
				className = "UJsonObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 48,
		index = 45120,
	},
	["HandleNewsRetrievalResponse"] = {
		fields = {
			{
				name = "Result",
				isRet = true,
				index = 45119,
				isOutParm = true,
				cType = ffi.typeof("struct FSparkResult"),
				castTo = ffi.typeof("struct FSparkResult*"),
				offset = 0
			},
		},
		dataSize = 40,
		index = 45117,
	},
	["GetArticle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45113,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "Idx",
				index = 45116,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Header",
				isRet = true,
				index = 45115,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "Body",
				isRet = true,
				index = 45114,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 16
			},
		},
		dataSize = 32,
		index = 45112,
		retOffset = 28,
	},
	["GetArticleCount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45111,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45110,
		retOffset = 0,
	},
	["RetrieveNews"] = {
		fields = {
			{
				name = "ControllerId",
				index = 45107,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "RetrievalDelegate",
				index = 45106,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 100,
		index = 45102,
	},
	["OnNewsRetrieved"] = {
		fields = {
			{
				name = "RetrievealResult",
				index = 45101,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENewsRetrievalResult",
				flags = 32,
				offset = 0
			},
			{
				name = "newsObj",
				index = 45100,
				className = "USparkNews",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 45099,
	},
	["eventRequiresClientInstance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 43605,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 43604,
		retOffset = 0,
	},
	["GetAttributeContext"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 44210,
				castTo = ffi.typeof("struct UObject**"),
				offset = 8
			},
			{
				name = "Attribute",
				index = 44212,
				className = "UAttributeDefinitionBase",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AttributeContextSource",
				index = 44211,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 44209,
		retOffset = 8,
	},
	["HandleInputKey"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45077,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ControllerId",
				index = 45080,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ukey",
				index = 45079,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "uevent",
				index = 45078,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EInputEvent",
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 45076,
		retOffset = 16,
	},
	["ShowEULA"] = {
		fields = {
		},
		dataSize = 0,
		index = 45075,
	},
	["OnDeclineButtonClick"] = {
		fields = {
		},
		dataSize = 0,
		index = 45074,
	},
	["OnAcceptButtonClick"] = {
		fields = {
		},
		dataSize = 0,
		index = 45073,
	},
	["FireCompleteDelegate"] = {
		fields = {
		},
		dataSize = 0,
		index = 45072,
	},
	["extClosed"] = {
		fields = {
		},
		dataSize = 0,
		index = 45071,
	},
	["extOnDeclineButtonClick"] = {
		fields = {
		},
		dataSize = 0,
		index = 45070,
	},
	["extOnAcceptButtonClick"] = {
		fields = {
		},
		dataSize = 0,
		index = 45069,
	},
	["extOnLoad"] = {
		fields = {
			{
				name = "Path",
				index = 45068,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45067,
	},
	["eventOnClose"] = {
		fields = {
		},
		dataSize = 0,
		index = 45066,
	},
	["eventStart"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45064,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "StartPaused",
				index = 45065,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45063,
		retOffset = 4,
	},
	["OnEULAInteractionComplete"] = {
		fields = {
			{
				name = "EULAState",
				isRet = true,
				index = 45061,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FEULAData"),
				castTo = ffi.typeof("struct TArray_FEULAData*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45056,
	},
	["NavigateDown"] = {
		fields = {
		},
		dataSize = 0,
		index = 45090,
	},
	["NavigateUp"] = {
		fields = {
		},
		dataSize = 0,
		index = 45089,
	},
	["SetTooltipText"] = {
		fields = {
			{
				name = "AcceptText",
				index = 45088,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "DeclineText",
				index = 45087,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 24,
		index = 45086,
	},
	["SetEULAText"] = {
		fields = {
			{
				name = "Title",
				index = 45085,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Text",
				index = 45084,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 24,
		index = 45083,
	},
	["Init"] = {
		fields = {
		},
		dataSize = 0,
		index = 45082,
	},
