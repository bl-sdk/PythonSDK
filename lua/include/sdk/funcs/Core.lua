g_classFuncs["UCommandlet"] = {}
g_classFuncs["UObject"] = {}
g_classFuncs["UDistributionFloat"] = {}
g_classFuncs["UHelpCommandlet"] = {}
g_classFuncs["UDistributionVector"] = {}
local ffi = require("ffi")
local c = g_classFuncs

	g_classFuncs["UObject"]["IsRelevantForDebugging"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5380,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Source",
				index = 5379,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 5377,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["GetGlobalDebugTarget"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5382,
				castTo = ffi.typeof("struct UObject**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 5378,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["SetGlobalDebugTarget"] = {
		fields = {
			{
				name = "Target",
				index = 5384,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 5381,
	}
	g_classFuncs["UObject"]["LogContentDebug"] = {
		fields = {
			{
				name = "Message",
				index = 5386,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5383,
	}
	g_classFuncs["UObject"]["GetLanguage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5388,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5385,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["GetRandomOptionSumFrequency"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5391,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "FreqList",
				isRet = true,
				index = 5392,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_float"),
				castTo = ffi.typeof("struct TArray_float*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 28,
		index = 5387,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["GetBuildChangelistNumber"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5394,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 5389,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["GetEngineVersion"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5396,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 5393,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["GetSystemTime"] = {
		fields = {
			{
				name = "Year",
				isRet = true,
				index = 5398,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "Month",
				isRet = true,
				index = 5399,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "DayOfWeek",
				isRet = true,
				index = 5400,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "Day",
				isRet = true,
				index = 5401,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "Hour",
				isRet = true,
				index = 5402,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 16
			},
			{
				name = "Min",
				isRet = true,
				index = 5403,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 20
			},
			{
				name = "Sec",
				isRet = true,
				index = 5404,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 24
			},
			{
				name = "MSec",
				isRet = true,
				index = 5405,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 28
			},
		},
		dataSize = 32,
		index = 5395,
	}
	g_classFuncs["UObject"]["TimeStamp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5407,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5397,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["TransformVectorByRotation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5423,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
			{
				name = "SourceRotation",
				index = 5409,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "SourceVector",
				index = 5410,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "bInverse",
				index = 5411,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 40,
		index = 5406,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["GetPackageName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5425,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 5408,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["IsPendingKill"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5427,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 5424,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["ByteToFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5431,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "inputByte",
				index = 5429,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bSigned",
				index = 5430,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5426,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["FloatToByte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5435,
				castTo = ffi.typeof("unsigned char*"),
				offset = 8
			},
			{
				name = "inputFloat",
				index = 5433,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bSigned",
				index = 5434,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 9,
		index = 5428,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["UnwindHeading"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5438,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 5437,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 5432,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["FindDeltaAngle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5442,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A1",
				index = 5440,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "A2",
				index = 5441,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 16,
		index = 5436,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GetHeadingAngle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5446,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "Dir",
				index = 5444,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 20,
		index = 5439,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["GetAngularDegreesFromRadians"] = {
		fields = {
			{
				name = "OutFOV",
				isRet = true,
				index = 5448,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 5443,
	}
	g_classFuncs["UObject"]["GetAngularFromDotDist"] = {
		fields = {
			{
				name = "OutAngDist",
				isRet = true,
				index = 5453,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
			{
				name = "DotDist",
				index = 5454,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 16,
		index = 5447,
	}
	g_classFuncs["UObject"]["GetAngularDistance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5461,
				castTo = ffi.typeof("BOOL*"),
				offset = 56
			},
			{
				name = "OutAngularDist",
				isRet = true,
				index = 5456,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
			{
				name = "Direction",
				index = 5457,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 8
			},
			{
				name = "AxisX",
				index = 5458,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 20
			},
			{
				name = "AxisY",
				index = 5459,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 32
			},
			{
				name = "AxisZ",
				index = 5460,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 60,
		index = 5452,
		retOffset = 56,
	}
	g_classFuncs["UObject"]["GetDotDistance"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5468,
				castTo = ffi.typeof("BOOL*"),
				offset = 56
			},
			{
				name = "OutDotDist",
				isRet = true,
				index = 5463,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
			{
				name = "Direction",
				index = 5464,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 8
			},
			{
				name = "AxisX",
				index = 5465,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 20
			},
			{
				name = "AxisY",
				index = 5466,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 32
			},
			{
				name = "AxisZ",
				index = 5467,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 44
			},
		},
		dataSize = 60,
		index = 5455,
		retOffset = 56,
	}
	g_classFuncs["UObject"]["PointProjectToPlane"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5474,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 48
			},
			{
				name = "Point",
				index = 5470,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "A",
				index = 5471,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "B",
				index = 5472,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 24
			},
			{
				name = "C",
				index = 5473,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 36
			},
		},
		dataSize = 60,
		index = 5462,
		retOffset = 48,
	}
	g_classFuncs["UObject"]["PointDistToPlane"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5485,
				castTo = ffi.typeof("float*"),
				offset = 48
			},
			{
				name = "Point",
				index = 5476,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Orientation",
				index = 5477,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Origin",
				index = 5483,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 24
			},
			{
				name = "out_ClosestPoint",
				isRet = true,
				index = 5484,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 36
			},
		},
		dataSize = 120,
		index = 5469,
		retOffset = 48,
	}
	g_classFuncs["UObject"]["PointDistToSegment"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5491,
				castTo = ffi.typeof("float*"),
				offset = 48
			},
			{
				name = "Point",
				index = 5487,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "StartPoint",
				index = 5488,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "EndPoint",
				index = 5489,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 24
			},
			{
				name = "OutClosestPoint",
				isRet = true,
				index = 5490,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 36
			},
		},
		dataSize = 52,
		index = 5475,
		retOffset = 48,
	}
	g_classFuncs["UObject"]["PointDistToLine"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5497,
				castTo = ffi.typeof("float*"),
				offset = 48
			},
			{
				name = "Point",
				index = 5493,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Line",
				index = 5494,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Origin",
				index = 5495,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 24
			},
			{
				name = "OutClosestPoint",
				isRet = true,
				index = 5496,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 36
			},
		},
		dataSize = 52,
		index = 5486,
		retOffset = 48,
	}
	g_classFuncs["UObject"]["GetPerObjectConfigSections"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5504,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "SearchClass",
				index = 5499,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "out_SectionNames",
				isRet = true,
				index = 5503,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "ObjectOuter",
				index = 5501,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 16
			},
			{
				name = "MaxResults",
				index = 5502,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 28,
		index = 5492,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["StaticSaveConfig"] = {
		fields = {
		},
		dataSize = 0,
		index = 5498,
	}
	g_classFuncs["UObject"]["SaveConfig"] = {
		fields = {
		},
		dataSize = 0,
		index = 5505,
	}
	g_classFuncs["UObject"]["GetAttributeModiferDescriptor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5509,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 8
			},
			{
				name = "AttributeName",
				index = 5508,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 20,
		index = 5506,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GetAttributeValueByName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5512,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "AttributeName",
				index = 5511,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5507,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["RemoveModifier"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5517,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "mod",
				index = 5514,
				className = "UAttributeModifier",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AttributeName",
				index = 5515,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "bSuppressNotify",
				index = 5516,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 5510,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["AddModifier"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5522,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "mod",
				index = 5519,
				className = "UAttributeModifier",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AttributeName",
				index = 5520,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "bSuppressNotify",
				index = 5521,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 5513,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FindObject"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5526,
				castTo = ffi.typeof("struct UObject**"),
				offset = 16
			},
			{
				name = "ObjectName",
				index = 5524,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "ObjectClass",
				index = 5525,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 12
			},
		},
		dataSize = 20,
		index = 5518,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["DynamicLoadObject"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5531,
				castTo = ffi.typeof("struct UObject**"),
				offset = 20
			},
			{
				name = "ObjectName",
				index = 5528,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "ObjectClass",
				index = 5529,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 12
			},
			{
				name = "MayFail",
				index = 5530,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 5523,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["GetEnum"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5535,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 8
			},
			{
				name = "E",
				index = 5533,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "I",
				index = 5534,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 16,
		index = 5527,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Disable"] = {
		fields = {
			{
				name = "ProbeFunc",
				index = 5537,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 5532,
	}
	g_classFuncs["UObject"]["Enable"] = {
		fields = {
			{
				name = "ProbeFunc",
				index = 5539,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 5536,
	}
	g_classFuncs["UObject"]["eventContinuedState"] = {
		fields = {
		},
		dataSize = 0,
		index = 5538,
	}
	g_classFuncs["UObject"]["eventPausedState"] = {
		fields = {
		},
		dataSize = 0,
		index = 5540,
	}
	g_classFuncs["UObject"]["eventPoppedState"] = {
		fields = {
		},
		dataSize = 0,
		index = 5541,
	}
	g_classFuncs["UObject"]["eventPushedState"] = {
		fields = {
		},
		dataSize = 0,
		index = 5542,
	}
	g_classFuncs["UObject"]["eventEndState"] = {
		fields = {
			{
				name = "NextStateName",
				index = 5545,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 5543,
	}
	g_classFuncs["UObject"]["eventBeginState"] = {
		fields = {
			{
				name = "PreviousStateName",
				index = 5547,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 8,
		index = 5544,
	}
	g_classFuncs["UObject"]["BreakPoint"] = {
		fields = {
			{
				name = "SomeObject",
				index = 5549,
				optional = true,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 5546,
	}
	g_classFuncs["UObject"]["PrintScriptStack"] = {
		fields = {
		},
		dataSize = 0,
		index = 5548,
	}
	g_classFuncs["UObject"]["DumpStateStack"] = {
		fields = {
		},
		dataSize = 0,
		index = 5550,
	}
	g_classFuncs["UObject"]["PopState"] = {
		fields = {
			{
				name = "bPopAll",
				index = 5553,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 5551,
	}
	g_classFuncs["UObject"]["PushState"] = {
		fields = {
			{
				name = "NewState",
				index = 5555,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "NewLabel",
				index = 5556,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
		},
		dataSize = 16,
		index = 5552,
	}
	g_classFuncs["UObject"]["GetStateName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5558,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 5554,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["IsChildState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5562,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "TestState",
				index = 5560,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "TestParentState",
				index = 5561,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5557,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["IsInState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5566,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "TestState",
				index = 5564,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bTestStateStack",
				index = 5565,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 5559,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["GotoState"] = {
		fields = {
			{
				name = "NewState",
				index = 5568,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Label",
				index = 5569,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "bForceEvents",
				index = 5570,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 16
			},
			{
				name = "bKeepStack",
				index = 5571,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 24,
		index = 5563,
	}
	g_classFuncs["UObject"]["IsUTracing"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5573,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 5567,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["SetUTracing"] = {
		fields = {
			{
				name = "bShouldUTrace",
				index = 5575,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 5572,
	}
	g_classFuncs["UObject"]["GetFuncName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5577,
				cType = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 5574,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["DebugBreak"] = {
		fields = {
			{
				name = "UserFlags",
				index = 5579,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DebuggerType",
				index = 5580,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EDebugBreakType",
				flags = 32,
				offset = 4
			},
		},
		dataSize = 5,
		index = 5576,
	}
	g_classFuncs["UObject"]["GetScriptTrace"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5584,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5578,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["ScriptTrace"] = {
		fields = {
		},
		dataSize = 0,
		index = 5583,
	}
	g_classFuncs["UObject"]["ParseLocalizedPropertyPath"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5590,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "PathName",
				index = 5587,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 36,
		index = 5585,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Localize"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5596,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 36
			},
			{
				name = "SectionName",
				index = 5593,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "KeyName",
				index = 5594,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "PackageName",
				index = 5595,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
		},
		dataSize = 48,
		index = 5586,
		retOffset = 36,
	}
	g_classFuncs["UObject"]["LogIndentedInternal"] = {
		fields = {
			{
				name = "S",
				index = 5598,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "LogTag",
				index = 5599,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "IndentationLevelChange",
				index = 5600,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 24,
		index = 5592,
	}
	g_classFuncs["UObject"]["WarnInternal"] = {
		fields = {
			{
				name = "S",
				index = 5602,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5597,
	}
	g_classFuncs["UObject"]["LogInternal"] = {
		fields = {
			{
				name = "S",
				index = 5604,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Tag",
				index = 5605,
				optional = true,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
		},
		dataSize = 20,
		index = 5601,
	}
	g_classFuncs["UObject"]["GetStringForNameBasedObjectPath"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5608,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 52
			},
			{
				name = "ObjectPath",
				index = 5607,
				type = ffi.typeof("struct FNameBasedObjectPath"),
				castTo = ffi.typeof("struct FNameBasedObjectPath*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 64,
		index = 5603,
		retOffset = 52,
	}
	g_classFuncs["UObject"]["SetNameBasedObjectPath"] = {
		fields = {
			{
				name = "ObjectPath",
				isRet = true,
				index = 5614,
				isOutParm = true,
				cType = ffi.typeof("struct FNameBasedObjectPath"),
				castTo = ffi.typeof("struct FNameBasedObjectPath*"),
				offset = 0
			},
			{
				name = "Object",
				index = 5615,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 52
			},
		},
		dataSize = 56,
		index = 5606,
	}
	g_classFuncs["UObject"]["FlagHasBeenTrueFor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5628,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "theFlag",
				isRet = true,
				index = 5617,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
			{
				name = "TimeSeconds",
				index = 5618,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 5613,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["FlagTimeRemaining"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5631,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "theFlag",
				isRet = true,
				index = 5630,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 5616,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FlagTimeSinceRaised"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5634,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "theFlag",
				isRet = true,
				index = 5633,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 5629,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FlagSetValue"] = {
		fields = {
			{
				name = "theFlag",
				isRet = true,
				index = 5636,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
			{
				name = "bNewValue",
				index = 5637,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 16
			},
			{
				name = "bForceTimeStamp",
				index = 5638,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 24,
		index = 5632,
	}
	g_classFuncs["UObject"]["FlagIsLowered"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5641,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "theFlag",
				isRet = true,
				index = 5640,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 5635,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FlagIsRaised"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5644,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "theFlag",
				isRet = true,
				index = 5643,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 5639,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FlagIsFalse"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5647,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "theFlag",
				isRet = true,
				index = 5646,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 5642,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FlagIsTrue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5650,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "theFlag",
				isRet = true,
				index = 5649,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
		},
		dataSize = 20,
		index = 5645,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FlagSetTrueTimed"] = {
		fields = {
			{
				name = "theFlag",
				isRet = true,
				index = 5652,
				isOutParm = true,
				cType = ffi.typeof("struct FFlag"),
				castTo = ffi.typeof("struct FFlag*"),
				offset = 0
			},
			{
				name = "Duration",
				index = 5653,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 20,
		index = 5648,
	}
	g_classFuncs["UObject"]["SmartVectTimeRemaining"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5656,
				castTo = ffi.typeof("float*"),
				offset = 28
			},
			{
				name = "theSV",
				isRet = true,
				index = 5655,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
		},
		dataSize = 32,
		index = 5651,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["SmartVectTimeSinceSet"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5662,
				castTo = ffi.typeof("float*"),
				offset = 28
			},
			{
				name = "theSV",
				isRet = true,
				index = 5661,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
		},
		dataSize = 32,
		index = 5654,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["SmartVectGetVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5666,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "theSV",
				isRet = true,
				index = 5664,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
			{
				name = "OutVector",
				isRet = true,
				index = 5665,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
		},
		dataSize = 44,
		index = 5660,
		retOffset = 40,
	}
	g_classFuncs["UObject"]["SmartVectIsSet"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5669,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "theSV",
				isRet = true,
				index = 5668,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
		},
		dataSize = 32,
		index = 5663,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["SmartVectSetVectorTimed"] = {
		fields = {
			{
				name = "theSV",
				isRet = true,
				index = 5671,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
			{
				name = "InVector",
				index = 5672,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 28
			},
			{
				name = "Duration",
				index = 5673,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 44,
		index = 5667,
	}
	g_classFuncs["UObject"]["SmartVectValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5676,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
			{
				name = "theSV",
				isRet = true,
				index = 5675,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
		},
		dataSize = 40,
		index = 5670,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["SmartVectReset"] = {
		fields = {
			{
				name = "theSV",
				isRet = true,
				index = 5678,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 5674,
	}
	g_classFuncs["UObject"]["SmartVectSetVector"] = {
		fields = {
			{
				name = "theSV",
				isRet = true,
				index = 5680,
				isOutParm = true,
				cType = ffi.typeof("struct FSmartVector"),
				castTo = ffi.typeof("struct FSmartVector*"),
				offset = 0
			},
			{
				name = "InVector",
				index = 5681,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 28
			},
			{
				name = "bUpdateTime",
				index = 5682,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 44,
		index = 5677,
	}
	g_classFuncs["UObject"]["Subtract_LinearColorLinearColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5690,
				cType = ffi.typeof("struct FLinearColor"),
				castTo = ffi.typeof("struct FLinearColor*"),
				offset = 32
			},
			{
				name = "A",
				index = 5684,
				type = ffi.typeof("struct FLinearColor"),
				castTo = ffi.typeof("struct FLinearColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5687,
				type = ffi.typeof("struct FLinearColor"),
				castTo = ffi.typeof("struct FLinearColor*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 48,
		index = 5679,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["Multiply_LinearColorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5696,
				cType = ffi.typeof("struct FLinearColor"),
				castTo = ffi.typeof("struct FLinearColor*"),
				offset = 20
			},
			{
				name = "LC",
				index = 5694,
				type = ffi.typeof("struct FLinearColor"),
				castTo = ffi.typeof("struct FLinearColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Mult",
				index = 5695,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 36,
		index = 5683,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["ColorToLinearColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5703,
				cType = ffi.typeof("struct FLinearColor"),
				castTo = ffi.typeof("struct FLinearColor*"),
				offset = 4
			},
			{
				name = "OldColor",
				index = 5698,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 20,
		index = 5693,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["MakeLinearColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5711,
				cType = ffi.typeof("struct FLinearColor"),
				castTo = ffi.typeof("struct FLinearColor*"),
				offset = 16
			},
			{
				name = "R",
				index = 5706,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "G",
				index = 5708,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "B",
				index = 5709,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "A",
				index = 5710,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 48,
		index = 5697,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["GetHTMLColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5714,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "C",
				isRet = true,
				index = 5713,
				isOutParm = true,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 0
			},
		},
		dataSize = 16,
		index = 5705,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["LerpColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5723,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 12
			},
			{
				name = "A",
				index = 5716,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5719,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 4
			},
			{
				name = "Alpha",
				index = 5721,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 68,
		index = 5712,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["MakeColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5730,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 4
			},
			{
				name = "R",
				index = 5725,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "G",
				index = 5727,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 1
			},
			{
				name = "B",
				index = 5728,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 2
			},
			{
				name = "A",
				index = 5729,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 3
			},
		},
		dataSize = 12,
		index = 5715,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Add_ColorColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5734,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 8
			},
			{
				name = "A",
				index = 5732,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5733,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5724,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Multiply_ColorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5738,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 8
			},
			{
				name = "A",
				index = 5736,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5737,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5731,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Multiply_FloatColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5742,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 8
			},
			{
				name = "A",
				index = 5740,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 5741,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5735,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Subtract_ColorColor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5746,
				cType = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				offset = 8
			},
			{
				name = "A",
				index = 5744,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5745,
				type = ffi.typeof("struct FColor"),
				castTo = ffi.typeof("struct FColor*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5739,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["EvalInterpCurveVector2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5764,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 20
			},
			{
				name = "Vector2DCurve",
				index = 5748,
				type = ffi.typeof("struct FInterpCurveVector2D"),
				castTo = ffi.typeof("struct FInterpCurveVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "InVal",
				index = 5749,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 28,
		index = 5743,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["EvalInterpCurveVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5778,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 20
			},
			{
				name = "VectorCurve",
				index = 5766,
				type = ffi.typeof("struct FInterpCurveVector"),
				castTo = ffi.typeof("struct FInterpCurveVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "InVal",
				index = 5767,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 32,
		index = 5747,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["EvalInterpCurveFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5791,
				castTo = ffi.typeof("float*"),
				offset = 20
			},
			{
				name = "FloatCurve",
				index = 5780,
				type = ffi.typeof("struct FInterpCurveFloat"),
				castTo = ffi.typeof("struct FInterpCurveFloat*"),
				flags = 64,
				offset = 0
			},
			{
				name = "InVal",
				index = 5781,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 5765,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["vect2d"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5796,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 8
			},
			{
				name = "InX",
				index = 5793,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InY",
				index = 5795,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 24,
		index = 5779,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GetMappedRangeValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5801,
				castTo = ffi.typeof("float*"),
				offset = 20
			},
			{
				name = "InputRange",
				index = 5798,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "OutputRange",
				index = 5799,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 8
			},
			{
				name = "Value",
				index = 5800,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 5792,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["GetRangePctByValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5805,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "Range",
				index = 5803,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Value",
				index = 5804,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 5797,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["GetRangeValueByPct"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5809,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "Range",
				index = 5807,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Pct",
				index = 5808,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 5802,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["SubtractEqual_Vector2DVector2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5813,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 16
			},
			{
				name = "A",
				isRet = true,
				index = 5811,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
			{
				name = "B",
				index = 5812,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 24,
		index = 5806,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["AddEqual_Vector2DVector2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5817,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 16
			},
			{
				name = "A",
				isRet = true,
				index = 5815,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
			{
				name = "B",
				index = 5816,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 24,
		index = 5810,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["DivideEqual_Vector2DFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5821,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 12
			},
			{
				name = "A",
				isRet = true,
				index = 5819,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
			{
				name = "B",
				index = 5820,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5814,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["MultiplyEqual_Vector2DFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5825,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 12
			},
			{
				name = "A",
				isRet = true,
				index = 5823,
				isOutParm = true,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 0
			},
			{
				name = "B",
				index = 5824,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5818,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Divide_Vector2DFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5829,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 12
			},
			{
				name = "A",
				index = 5827,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5828,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5822,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Multiply_Vector2DFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5833,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 12
			},
			{
				name = "A",
				index = 5831,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5832,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5826,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Subtract_Vector2DVector2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5837,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 16
			},
			{
				name = "A",
				index = 5835,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5836,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 24,
		index = 5830,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Add_Vector2DVector2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5841,
				cType = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				offset = 16
			},
			{
				name = "A",
				index = 5839,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5840,
				type = ffi.typeof("struct FVector2D"),
				castTo = ffi.typeof("struct FVector2D*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 24,
		index = 5834,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Subtract_QuatQuat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5850,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 32
			},
			{
				name = "A",
				index = 5843,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5844,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 48,
		index = 5838,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["Add_QuatQuat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5854,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 32
			},
			{
				name = "A",
				index = 5852,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5853,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 48,
		index = 5842,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["QuatSlerp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5860,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 48
			},
			{
				name = "A",
				index = 5856,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5857,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 16
			},
			{
				name = "Alpha",
				index = 5858,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 32
			},
			{
				name = "bShortestPath",
				index = 5859,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 36
			},
		},
		dataSize = 64,
		index = 5851,
		retOffset = 48,
	}
	g_classFuncs["UObject"]["QuatToRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5863,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 16
			},
			{
				name = "A",
				index = 5862,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 5855,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["QuatFromRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5866,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 16
			},
			{
				name = "A",
				index = 5865,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 32,
		index = 5861,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["QuatFromAxisAndAngle"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5870,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 16
			},
			{
				name = "Axis",
				index = 5868,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Angle",
				index = 5869,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 32,
		index = 5864,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["QuatFindBetween"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5874,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 32
			},
			{
				name = "A",
				index = 5872,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5873,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 48,
		index = 5867,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["QuatRotateVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5878,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
			{
				name = "A",
				index = 5876,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5877,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 40,
		index = 5871,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["QuatInvert"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5881,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 16
			},
			{
				name = "A",
				index = 5880,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 32,
		index = 5875,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["QuatDot"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5885,
				castTo = ffi.typeof("float*"),
				offset = 32
			},
			{
				name = "A",
				index = 5883,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5884,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 36,
		index = 5879,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["QuatProduct"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5889,
				cType = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				offset = 32
			},
			{
				name = "A",
				index = 5887,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5888,
				type = ffi.typeof("struct FQuat"),
				castTo = ffi.typeof("struct FQuat*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 48,
		index = 5882,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["MatrixGetAxis"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5902,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 68
			},
			{
				name = "TM",
				index = 5891,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Axis",
				index = 5892,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EAxis",
				flags = 32,
				offset = 64
			},
		},
		dataSize = 80,
		index = 5886,
		retOffset = 68,
	}
	g_classFuncs["UObject"]["MatrixGetOrigin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5907,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 64
			},
			{
				name = "TM",
				index = 5906,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 76,
		index = 5890,
		retOffset = 64,
	}
	g_classFuncs["UObject"]["MatrixGetRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5910,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 64
			},
			{
				name = "TM",
				index = 5909,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 76,
		index = 5905,
		retOffset = 64,
	}
	g_classFuncs["UObject"]["MakeRotationMatrix"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5913,
				cType = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				offset = 16
			},
			{
				name = "Rotation",
				index = 5912,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 80,
		index = 5908,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["MakeRotationTranslationMatrix"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5917,
				cType = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				offset = 32
			},
			{
				name = "Translation",
				index = 5915,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Rotation",
				index = 5916,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 96,
		index = 5911,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["InverseTransformNormal"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5921,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 76
			},
			{
				name = "TM",
				index = 5919,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
			{
				name = "A",
				index = 5920,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 64
			},
		},
		dataSize = 88,
		index = 5914,
		retOffset = 76,
	}
	g_classFuncs["UObject"]["TransformNormal"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5925,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 76
			},
			{
				name = "TM",
				index = 5923,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
			{
				name = "A",
				index = 5924,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 64
			},
		},
		dataSize = 88,
		index = 5918,
		retOffset = 76,
	}
	g_classFuncs["UObject"]["InverseTransformVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5929,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 76
			},
			{
				name = "TM",
				index = 5927,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
			{
				name = "A",
				index = 5928,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 64
			},
		},
		dataSize = 88,
		index = 5922,
		retOffset = 76,
	}
	g_classFuncs["UObject"]["TransformVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5933,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 76
			},
			{
				name = "TM",
				index = 5931,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
			{
				name = "A",
				index = 5932,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 64
			},
		},
		dataSize = 88,
		index = 5926,
		retOffset = 76,
	}
	g_classFuncs["UObject"]["Multiply_MatrixMatrix"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5937,
				cType = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				offset = 128
			},
			{
				name = "A",
				index = 5935,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 5936,
				type = ffi.typeof("struct FMatrix"),
				castTo = ffi.typeof("struct FMatrix*"),
				flags = 64,
				offset = 64
			},
		},
		dataSize = 192,
		index = 5930,
		retOffset = 128,
	}
	g_classFuncs["UObject"]["NotEqual_NameName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5941,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "A",
				index = 5939,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "B",
				index = 5940,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5934,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["EqualEqual_NameName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5945,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "A",
				index = 5943,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "B",
				index = 5944,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5938,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["QueryInterface"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5948,
				cType = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				offset = 4
			},
			{
				name = "InterfaceClass",
				index = 5947,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5942,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["IsA"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5951,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "ClassName",
				index = 5950,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 5946,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["ClassIsChildOf"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5955,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "TestClass",
				index = 5953,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 0
			},
			{
				name = "ParentClass",
				index = 5954,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5949,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["NotEqual_InterfaceInterface"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5959,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "A",
				index = 5957,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "B",
				index = 5958,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5952,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["EqualEqual_InterfaceInterface"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5963,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "A",
				index = 5961,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 0
			},
			{
				name = "B",
				index = 5962,
				type = ffi.typeof("struct FScriptInterface"),
				castTo = ffi.typeof("struct FScriptInterface*"),
				flags = 0,
				offset = 8
			},
		},
		dataSize = 20,
		index = 5956,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["NotEqual_ObjectObject"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5967,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 5965,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "B",
				index = 5966,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5960,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["EqualEqual_ObjectObject"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5971,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 5969,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "B",
				index = 5970,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 5964,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GuidToString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5974,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 16
			},
			{
				name = "G",
				isRet = true,
				index = 5973,
				isOutParm = true,
				cType = ffi.typeof("struct FGuid"),
				castTo = ffi.typeof("struct FGuid*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 5968,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["PathName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5982,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "CheckObject",
				index = 5981,
				className = "UObject",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 16,
		index = 5972,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["SplitString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 5988,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 28
			},
			{
				name = "Source",
				index = 5983,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Delimiter",
				index = 5985,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "bCullEmpty",
				index = 5986,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 52,
		index = 5980,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["ParseStringIntoArray"] = {
		fields = {
			{
				name = "BaseString",
				index = 5991,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Pieces",
				isRet = true,
				index = 5995,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "delim",
				index = 5993,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "bCullEmpty",
				index = 5994,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 36
			},
		},
		dataSize = 40,
		index = 5588,
	}
	g_classFuncs["UObject"]["JoinArray"] = {
		fields = {
			{
				name = "StringArray",
				index = 6003,
				type = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				flags = 8,
				offset = 0
			},
			{
				name = "out_Result",
				isRet = true,
				index = 5998,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "delim",
				index = 6002,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "bIgnoreBlanks",
				index = 5999,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 36
			},
		},
		dataSize = 44,
		index = 5990,
	}
	g_classFuncs["UObject"]["GetRightMost"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6006,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "Text",
				index = 6005,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 28,
		index = 5996,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Split"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6011,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 28
			},
			{
				name = "Text",
				index = 6008,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "SplitStr",
				index = 6009,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "bOmitSplitStr",
				index = 6010,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 44,
		index = 6004,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["StringHash"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6014,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "S",
				index = 6013,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6007,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Repl"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6020,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 40
			},
			{
				name = "Src",
				index = 6016,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Match",
				index = 6017,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "With",
				index = 6018,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "bCaseSensitive",
				index = 6019,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 36
			},
		},
		dataSize = 52,
		index = 6012,
		retOffset = 40,
	}
	g_classFuncs["UObject"]["Asc"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6023,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "S",
				index = 6022,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6015,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Chr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6026,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "I",
				index = 6025,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6021,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Locs"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6029,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "S",
				index = 6028,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 6024,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Caps"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6032,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "S",
				index = 6031,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 6027,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Right"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6036,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 16
			},
			{
				name = "S",
				index = 6034,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "I",
				index = 6035,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6030,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Left"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6040,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 16
			},
			{
				name = "S",
				index = 6038,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "I",
				index = 6039,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6033,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Mid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6045,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 20
			},
			{
				name = "S",
				index = 6042,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "I",
				index = 6043,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "J",
				index = 6044,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 32,
		index = 6037,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["InStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6052,
				castTo = ffi.typeof("int*"),
				offset = 36
			},
			{
				name = "S",
				index = 6047,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "T",
				index = 6048,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "bSearchFromRight",
				index = 6049,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
			{
				name = "bIgnoreCase",
				index = 6050,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
			{
				name = "StartPos",
				index = 6051,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 40,
		index = 6041,
		retOffset = 36,
	}
	g_classFuncs["UObject"]["Len"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6055,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "S",
				index = 6054,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6046,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["SubtractEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6059,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6057,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
			{
				name = "B",
				index = 6058,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6053,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["AtEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6062,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6060,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
			{
				name = "B",
				index = 6061,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6056,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["ConcatEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6001,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6064,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
			{
				name = "B",
				index = 6065,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6000,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["ComplementEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6069,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6067,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6068,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6063,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["NotEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6073,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6071,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6072,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6066,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["EqualEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6077,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6075,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6076,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6070,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["GreaterEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6081,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6079,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6080,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6074,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["LessEqual_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6085,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6083,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6084,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6078,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Greater_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6089,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6087,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6088,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6082,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Less_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6093,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6091,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6092,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6086,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["At_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6097,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "A",
				index = 6095,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6096,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6090,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Concat_StrStr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6101,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "A",
				index = 6099,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "B",
				index = 6100,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6094,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["MakeRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6107,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 12
			},
			{
				name = "Pitch",
				index = 6103,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Yaw",
				index = 6105,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Roll",
				index = 6106,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 36,
		index = 6098,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["SClampRotAxis"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6117,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "DeltaTime",
				index = 6109,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ViewAxis",
				index = 6112,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "out_DeltaViewAxis",
				isRet = true,
				index = 6110,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "MaxLimit",
				index = 6113,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "MinLimit",
				index = 6116,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "InterpolationSpeed",
				index = 6115,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 32,
		index = 6102,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["ClampRotAxisFromRange"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6122,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "Current",
				index = 6119,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Min",
				index = 6121,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Max",
				index = 6120,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 24,
		index = 6108,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["ClampRotAxisFromBase"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6127,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "Current",
				index = 6124,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Center",
				index = 6125,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "MaxDelta",
				index = 6126,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 20,
		index = 6118,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["ClampRotAxis"] = {
		fields = {
			{
				name = "ViewAxis",
				index = 6129,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "out_DeltaViewAxis",
				isRet = true,
				index = 6130,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "MaxLimit",
				index = 6131,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "MinLimit",
				index = 6132,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 6123,
	}
	g_classFuncs["UObject"]["RSize"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6135,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "R",
				index = 6134,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6128,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["RDiff"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6138,
				castTo = ffi.typeof("float*"),
				offset = 24
			},
			{
				name = "A",
				index = 6136,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6137,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6133,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["NormalizeRotAxis"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6141,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "Angle",
				index = 6140,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6111,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["RInterpTo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6148,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 36
			},
			{
				name = "Current",
				index = 6143,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Target",
				index = 6144,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
			{
				name = "DeltaTime",
				index = 6145,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
			{
				name = "InterpSpeed",
				index = 6146,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
			{
				name = "bConstantInterpSpeed",
				index = 6147,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 48,
		index = 6139,
		retOffset = 36,
	}
	g_classFuncs["UObject"]["RTransform"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6152,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 24
			},
			{
				name = "R",
				index = 6150,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "RBasis",
				index = 6151,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6142,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["RLerp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6158,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 32
			},
			{
				name = "A",
				index = 6154,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6155,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Alpha",
				index = 6156,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
			{
				name = "bShortestPath",
				index = 6157,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 44,
		index = 6149,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["Normalize"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6161,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 12
			},
			{
				name = "Rot",
				index = 6160,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 24,
		index = 6153,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["OrthoRotation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6166,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 36
			},
			{
				name = "X",
				index = 6163,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Y",
				index = 6164,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Z",
				index = 6165,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 24
			},
		},
		dataSize = 48,
		index = 6159,
		retOffset = 36,
	}
	g_classFuncs["UObject"]["RotRand"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6169,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 4
			},
			{
				name = "bRoll",
				index = 6168,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6162,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["GetRotatorAxis"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6173,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "A",
				index = 6171,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Axis",
				index = 6172,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6167,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["GetUnAxes"] = {
		fields = {
			{
				name = "A",
				index = 6175,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "X",
				isRet = true,
				index = 6176,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 12
			},
			{
				name = "Y",
				isRet = true,
				index = 6177,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "Z",
				isRet = true,
				index = 6178,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 36
			},
		},
		dataSize = 48,
		index = 6170,
	}
	g_classFuncs["UObject"]["GetAxes"] = {
		fields = {
			{
				name = "A",
				index = 6180,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "X",
				isRet = true,
				index = 6181,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 12
			},
			{
				name = "Y",
				isRet = true,
				index = 6182,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "Z",
				isRet = true,
				index = 6183,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 36
			},
		},
		dataSize = 48,
		index = 6174,
	}
	g_classFuncs["UObject"]["ClockwiseFrom_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6187,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6185,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6186,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6179,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["SubtractEqual_RotatorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6191,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6189,
				isOutParm = true,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 0
			},
			{
				name = "B",
				index = 6190,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6184,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["AddEqual_RotatorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6195,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6193,
				isOutParm = true,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 0
			},
			{
				name = "B",
				index = 6194,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6188,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Subtract_RotatorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6199,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 24
			},
			{
				name = "A",
				index = 6197,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6198,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6192,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Add_RotatorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6203,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 24
			},
			{
				name = "A",
				index = 6201,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6202,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6196,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["DivideEqual_RotatorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6207,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 16
			},
			{
				name = "A",
				isRet = true,
				index = 6205,
				isOutParm = true,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 0
			},
			{
				name = "B",
				index = 6206,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6200,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["MultiplyEqual_RotatorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6211,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 16
			},
			{
				name = "A",
				isRet = true,
				index = 6209,
				isOutParm = true,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 0
			},
			{
				name = "B",
				index = 6210,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6204,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Divide_RotatorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6215,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 16
			},
			{
				name = "A",
				index = 6213,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6214,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6208,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Multiply_FloatRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6219,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 16
			},
			{
				name = "A",
				index = 6217,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6218,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 28,
		index = 6212,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Multiply_RotatorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6223,
				cType = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				offset = 16
			},
			{
				name = "A",
				index = 6221,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6222,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6216,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["NotEqual_RotatorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6227,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6225,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6226,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6220,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["EqualEqual_RotatorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6231,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6229,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6230,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6224,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["InCylinder"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6240,
				castTo = ffi.typeof("BOOL*"),
				offset = 44
			},
			{
				name = "Origin",
				index = 6233,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Dir",
				index = 6235,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Width",
				index = 6239,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
			{
				name = "A",
				index = 6236,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 28
			},
			{
				name = "bIgnoreZ",
				index = 6234,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 72,
		index = 6228,
		retOffset = 44,
	}
	g_classFuncs["UObject"]["NoZDot"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6244,
				castTo = ffi.typeof("float*"),
				offset = 24
			},
			{
				name = "A",
				index = 6242,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6243,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6232,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["ClampLength"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6248,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "V",
				index = 6246,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "MaxLength",
				index = 6247,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6241,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["VInterpTo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6254,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 32
			},
			{
				name = "Current",
				index = 6250,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Target",
				index = 6251,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "DeltaTime",
				index = 6252,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
			{
				name = "InterpSpeed",
				index = 6253,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 44,
		index = 6245,
		retOffset = 32,
	}
	g_classFuncs["UObject"]["IsZero"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6257,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "A",
				index = 6256,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6249,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["ProjectOnTo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6261,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "X",
				index = 6259,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Y",
				index = 6260,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6255,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["MirrorVectorByNormal"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6265,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "InVect",
				index = 6263,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "InNormal",
				index = 6264,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6258,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["VRandCone2"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6270,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 20
			},
			{
				name = "Dir",
				index = 6267,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "HorizontalConeHalfAngleRadians",
				index = 6268,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "VerticalConeHalfAngleRadians",
				index = 6269,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 32,
		index = 6262,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["VRandCone"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6274,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "Dir",
				index = 6272,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ConeHalfAngleRadians",
				index = 6273,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6266,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["VRand"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6276,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
		},
		dataSize = 12,
		index = 6271,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["VLerp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6281,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 28
			},
			{
				name = "A",
				index = 6278,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6279,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
			{
				name = "Alpha",
				index = 6280,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 40,
		index = 6275,
		retOffset = 28,
	}
	g_classFuncs["UObject"]["Normal"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6284,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 12
			},
			{
				name = "A",
				index = 6283,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 24,
		index = 6277,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["VSizeSq2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6287,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "A",
				index = 6286,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6282,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["VSizeSq"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6290,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "A",
				index = 6289,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6285,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["VSize2D"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6293,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "A",
				index = 6292,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6288,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["VSize"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6296,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "A",
				index = 6295,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6291,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["SubtractEqual_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6300,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6298,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
			{
				name = "B",
				index = 6299,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6294,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["AddEqual_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6304,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6302,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
			{
				name = "B",
				index = 6303,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6297,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["DivideEqual_VectorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6308,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "A",
				isRet = true,
				index = 6306,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
			{
				name = "B",
				index = 6307,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6301,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["MultiplyEqual_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6312,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				isRet = true,
				index = 6310,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
			{
				name = "B",
				index = 6311,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6305,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["MultiplyEqual_VectorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6316,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "A",
				isRet = true,
				index = 6314,
				isOutParm = true,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 0
			},
			{
				name = "B",
				index = 6315,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6309,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Cross_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6320,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				index = 6318,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6319,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6313,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Dot_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6324,
				castTo = ffi.typeof("float*"),
				offset = 24
			},
			{
				name = "A",
				index = 6322,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6323,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6317,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["NotEqual_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6328,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6326,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6327,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6321,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["EqualEqual_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6332,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "A",
				index = 6330,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6331,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6325,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["GreaterGreater_VectorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6336,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				index = 6334,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6335,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6329,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["LessLess_VectorRotator"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6340,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				index = 6338,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6339,
				type = ffi.typeof("struct FRotator"),
				castTo = ffi.typeof("struct FRotator*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6333,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Subtract_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6344,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				index = 6342,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6343,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6337,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Add_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6348,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				index = 6346,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6347,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6341,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Divide_VectorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6352,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "A",
				index = 6350,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6351,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6345,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Multiply_VectorVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6356,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 24
			},
			{
				name = "A",
				index = 6354,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6355,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 12
			},
		},
		dataSize = 36,
		index = 6349,
		retOffset = 24,
	}
	g_classFuncs["UObject"]["Multiply_FloatVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6360,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "A",
				index = 6358,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6359,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 28,
		index = 6353,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Multiply_VectorFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6364,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 16
			},
			{
				name = "A",
				index = 6362,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
			{
				name = "B",
				index = 6363,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 28,
		index = 6357,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["Subtract_PreVector"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6367,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 12
			},
			{
				name = "A",
				index = 6366,
				type = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 24,
		index = 6361,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["SmoothInterp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6373,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "DeltaTime",
				index = 6369,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InterpSpeed",
				index = 6370,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "deltaDist",
				index = 6371,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "overallDist",
				index = 6372,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 6365,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FInterpConstantTo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6378,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "Current",
				index = 6374,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Target",
				index = 6375,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "DeltaTime",
				index = 6376,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "InterpSpeed",
				index = 6377,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 6368,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FInterpTo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6384,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "Current",
				index = 6380,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Target",
				index = 6381,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "DeltaTime",
				index = 6382,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "InterpSpeed",
				index = 6383,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 6114,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FPctByRange"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6389,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "Value",
				index = 6386,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InMin",
				index = 6387,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "InMax",
				index = 6388,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 6379,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["RandRange"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6393,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "InMin",
				index = 6391,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InMax",
				index = 6392,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6385,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["FInterpEaseInOut"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6399,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "A",
				index = 6395,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6396,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Alpha",
				index = 6397,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "Exp",
				index = 6398,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 6390,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FInterpEaseOut"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6405,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "A",
				index = 6401,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6402,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Alpha",
				index = 6403,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "Exp",
				index = 6404,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 6394,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FInterpEaseIn"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6411,
				castTo = ffi.typeof("float*"),
				offset = 16
			},
			{
				name = "A",
				index = 6407,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6408,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Alpha",
				index = 6409,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "Exp",
				index = 6410,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 6400,
		retOffset = 16,
	}
	g_classFuncs["UObject"]["FCubicInterp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6418,
				castTo = ffi.typeof("float*"),
				offset = 20
			},
			{
				name = "P0",
				index = 6413,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "T0",
				index = 6414,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "P1",
				index = 6415,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
			{
				name = "T1",
				index = 6416,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 12
			},
			{
				name = "A",
				index = 6417,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 24,
		index = 6406,
		retOffset = 20,
	}
	g_classFuncs["UObject"]["FCeil"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6421,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				index = 6420,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6412,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["FFloor"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6424,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				index = 6423,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6419,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Round"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6427,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				index = 6426,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6422,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Lerp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6432,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "A",
				index = 6429,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6430,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "Alpha",
				index = 6431,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 6425,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["FClamp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6437,
				castTo = ffi.typeof("float*"),
				offset = 12
			},
			{
				name = "V",
				index = 6434,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "A",
				index = 6435,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
			{
				name = "B",
				index = 6436,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 6428,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["FMax"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6441,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6439,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6440,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6433,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["FMin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6445,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6443,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6444,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6438,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["FRand"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6447,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 6442,
		retOffset = 0,
	}
	g_classFuncs["UObject"]["Square"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6450,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6449,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6446,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Sqrt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6453,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6452,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6448,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Loge"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6456,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6455,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6451,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Exp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6459,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6458,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6454,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Atan2"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6463,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6461,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6462,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6457,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Atan"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6466,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6465,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6460,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Tan"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6468,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6467,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6464,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Acos"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6471,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6470,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 5445,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Cos"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6474,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6473,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6469,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Asin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6477,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6476,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6472,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Sin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6480,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6479,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6475,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Abs"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6483,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6482,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6478,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["SubtractEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6487,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6485,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
			{
				name = "B",
				index = 6486,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6481,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["AddEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6491,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6489,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
			{
				name = "B",
				index = 6490,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6484,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["DivideEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6495,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6493,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
			{
				name = "B",
				index = 6494,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6488,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["MultiplyEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6499,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6497,
				isOutParm = true,
				castTo = ffi.typeof("float*"),
				offset = 0
			},
			{
				name = "B",
				index = 6498,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6492,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["NotEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6503,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6501,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6502,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6496,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["ComplementEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6507,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6505,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6506,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6500,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["EqualEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6511,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6509,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6510,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6504,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GreaterEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6515,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6513,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6514,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6508,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["LessEqual_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6519,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6517,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6518,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6512,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Greater_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6523,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6521,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6522,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6516,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Less_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6527,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6525,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6526,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6520,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Subtract_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6531,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6529,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6530,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6524,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Add_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6535,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6533,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6534,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6528,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Percent_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6539,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6537,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6538,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6532,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Divide_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6543,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6541,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6542,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6536,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Multiply_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6547,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "A",
				index = 6545,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6546,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6540,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["MultiplyMultiply_FloatFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6551,
				castTo = ffi.typeof("float*"),
				offset = 8
			},
			{
				name = "Base",
				index = 6549,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Exp",
				index = 6550,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6544,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Subtract_PreFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6554,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "A",
				index = 6553,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6548,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["ToHex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6557,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "A",
				index = 6556,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6552,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Clamp"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6562,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "V",
				index = 6559,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "A",
				index = 6560,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "B",
				index = 6561,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 6555,
		retOffset = 12,
	}
	g_classFuncs["UObject"]["Max"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6566,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6564,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6565,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6558,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Min"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6570,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6568,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6569,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6563,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Rand"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6573,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "Max",
				index = 6572,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6567,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["SubtractSubtract_Int"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6576,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				isRet = true,
				index = 6575,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 6571,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["AddAdd_Int"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6579,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				isRet = true,
				index = 6578,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 6574,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["SubtractSubtract_PreInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6582,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				isRet = true,
				index = 6581,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 6577,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["AddAdd_PreInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6585,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				isRet = true,
				index = 6584,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 6580,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["SubtractEqual_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6589,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6587,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "B",
				index = 6588,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6583,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["AddEqual_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6593,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6591,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "B",
				index = 6592,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6586,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["DivideEqual_IntFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6597,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6595,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "B",
				index = 6596,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6590,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["MultiplyEqual_IntFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6601,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6599,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "B",
				index = 6600,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6594,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Or_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6605,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6603,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6604,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6598,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Xor_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6609,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6607,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6608,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6602,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["And_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6613,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6611,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6612,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6606,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["NotEqual_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6617,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6615,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6616,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6610,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["EqualEqual_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6621,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6619,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6620,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6614,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GreaterEqual_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6625,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6623,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6624,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6618,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["LessEqual_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6629,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6627,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6628,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6622,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Greater_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6633,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6631,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6632,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6626,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Less_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6637,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6635,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6636,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6630,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GreaterGreaterGreater_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6641,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6639,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6640,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6634,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["GreaterGreater_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6645,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6643,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6644,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6638,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["LessLess_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6649,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6647,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6648,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6642,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Subtract_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6653,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6651,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6652,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6646,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Add_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6657,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6655,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6656,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6650,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Percent_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6661,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6659,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6660,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6654,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Divide_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6665,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6663,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6664,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6658,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Multiply_IntInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6669,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "A",
				index = 6667,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6668,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6662,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Subtract_PreInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6672,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				index = 6671,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6666,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["Complement_PreInt"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6675,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "A",
				index = 6674,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6670,
		retOffset = 4,
	}
	g_classFuncs["UObject"]["SubtractSubtract_Byte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6678,
				castTo = ffi.typeof("unsigned char*"),
				offset = 1
			},
			{
				name = "A",
				isRet = true,
				index = 6677,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
		},
		dataSize = 2,
		index = 6673,
		retOffset = 1,
	}
	g_classFuncs["UObject"]["AddAdd_Byte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6681,
				castTo = ffi.typeof("unsigned char*"),
				offset = 1
			},
			{
				name = "A",
				isRet = true,
				index = 6680,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
		},
		dataSize = 2,
		index = 6676,
		retOffset = 1,
	}
	g_classFuncs["UObject"]["SubtractSubtract_PreByte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6684,
				castTo = ffi.typeof("unsigned char*"),
				offset = 1
			},
			{
				name = "A",
				isRet = true,
				index = 6683,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
		},
		dataSize = 2,
		index = 6679,
		retOffset = 1,
	}
	g_classFuncs["UObject"]["AddAdd_PreByte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6687,
				castTo = ffi.typeof("unsigned char*"),
				offset = 1
			},
			{
				name = "A",
				isRet = true,
				index = 6686,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
		},
		dataSize = 2,
		index = 6682,
		retOffset = 1,
	}
	g_classFuncs["UObject"]["SubtractEqual_ByteByte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6691,
				castTo = ffi.typeof("unsigned char*"),
				offset = 2
			},
			{
				name = "A",
				isRet = true,
				index = 6689,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
			{
				name = "B",
				index = 6690,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 1
			},
		},
		dataSize = 3,
		index = 6685,
		retOffset = 2,
	}
	g_classFuncs["UObject"]["AddEqual_ByteByte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6695,
				castTo = ffi.typeof("unsigned char*"),
				offset = 2
			},
			{
				name = "A",
				isRet = true,
				index = 6693,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
			{
				name = "B",
				index = 6694,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 1
			},
		},
		dataSize = 3,
		index = 6688,
		retOffset = 2,
	}
	g_classFuncs["UObject"]["DivideEqual_ByteByte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6699,
				castTo = ffi.typeof("unsigned char*"),
				offset = 2
			},
			{
				name = "A",
				isRet = true,
				index = 6697,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
			{
				name = "B",
				index = 6698,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 1
			},
		},
		dataSize = 3,
		index = 6692,
		retOffset = 2,
	}
	g_classFuncs["UObject"]["MultiplyEqual_ByteFloat"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6703,
				castTo = ffi.typeof("unsigned char*"),
				offset = 8
			},
			{
				name = "A",
				isRet = true,
				index = 6701,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
			{
				name = "B",
				index = 6702,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 9,
		index = 6696,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["MultiplyEqual_ByteByte"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6707,
				castTo = ffi.typeof("unsigned char*"),
				offset = 2
			},
			{
				name = "A",
				isRet = true,
				index = 6705,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
			{
				name = "B",
				index = 6706,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 1
			},
		},
		dataSize = 3,
		index = 6700,
		retOffset = 2,
	}
	g_classFuncs["UObject"]["OrOr_BoolBool"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6711,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6709,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6710,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6704,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["XorXor_BoolBool"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6715,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6713,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6714,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6708,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["AndAnd_BoolBool"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6719,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6717,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6718,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6712,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["NotEqual_BoolBool"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6723,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6721,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6722,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6716,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["EqualEqual_BoolBool"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6727,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "A",
				index = 6725,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 6726,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 6720,
		retOffset = 8,
	}
	g_classFuncs["UObject"]["Not_PreBool"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6729,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "A",
				index = 6728,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6724,
		retOffset = 4,
	}
	g_classFuncs["UDistributionVector"]["GetVectorValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6960,
				cType = ffi.typeof("struct FVector"),
				castTo = ffi.typeof("struct FVector*"),
				offset = 8
			},
			{
				name = "F",
				index = 6962,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LastExtreme",
				index = 6961,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 20,
		index = 6959,
		retOffset = 8,
	}
	g_classFuncs["UDistributionFloat"]["GetFloatValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6950,
				castTo = ffi.typeof("float*"),
				offset = 4
			},
			{
				name = "F",
				index = 6951,
				optional = true,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 6949,
		retOffset = 4,
	}
	g_classFuncs["UHelpCommandlet"]["eventMain"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6976,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "Params",
				index = 6977,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6975,
		retOffset = 12,
	}
	g_classFuncs["UCommandlet"]["eventMain"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 6942,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "Params",
				index = 6943,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 6941,
		retOffset = 12,
	}
