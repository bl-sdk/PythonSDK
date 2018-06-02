local ffi = require("ffi")
local c = g_classFuncs

	["eventResolveFailed"] = {
		fields = {
		},
		dataSize = 0,
		index = 45220,
	},
	["eventResolved"] = {
		fields = {
			{
				name = "Addr",
				index = 45219,
				type = ffi.typeof("struct FIpAddr"),
				castTo = ffi.typeof("struct FIpAddr*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45218,
	},
	["GetLocalIP"] = {
		fields = {
			{
				name = "Arg",
				isRet = true,
				index = 45217,
				isOutParm = true,
				cType = ffi.typeof("struct FIpAddr"),
				castTo = ffi.typeof("struct FIpAddr*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 45216,
	},
	["StringToIpAddr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45213,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "Str",
				index = 45215,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Addr",
				isRet = true,
				index = 45214,
				isOutParm = true,
				cType = ffi.typeof("struct FIpAddr"),
				castTo = ffi.typeof("struct FIpAddr*"),
				offset = 12
			},
		},
		dataSize = 24,
		index = 45212,
		retOffset = 20,
	},
	["IpAddrToString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45210,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 8
			},
			{
				name = "Arg",
				index = 45211,
				type = ffi.typeof("struct FIpAddr"),
				castTo = ffi.typeof("struct FIpAddr*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 20,
		index = 45209,
		retOffset = 8,
	},
	["GetLastError"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45208,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45207,
		retOffset = 0,
	},
	["Resolve"] = {
		fields = {
			{
				name = "Domain",
				index = 45206,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45205,
	},
	["ParseURL"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45199,
				castTo = ffi.typeof("BOOL*"),
				offset = 52
			},
			{
				name = "URL",
				index = 45204,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Addr",
				isRet = true,
				index = 45203,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "PortNum",
				isRet = true,
				index = 45202,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 24
			},
			{
				name = "LevelName",
				isRet = true,
				index = 45201,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 28
			},
			{
				name = "EntryName",
				isRet = true,
				index = 45200,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 40
			},
		},
		dataSize = 56,
		index = 45198,
		retOffset = 52,
	},
	["IsDataPending"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45197,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45196,
		retOffset = 0,
	},
	["eventReceivedBinary"] = {
		fields = {
			{
				name = "Count",
				index = 46239,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 46238,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 259,
		index = 46237,
	},
	["eventReceivedLine"] = {
		fields = {
			{
				name = "Line",
				index = 46236,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46235,
	},
	["eventReceivedText"] = {
		fields = {
			{
				name = "Text",
				index = 46234,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46233,
	},
	["eventClosed"] = {
		fields = {
		},
		dataSize = 0,
		index = 46232,
	},
	["eventOpened"] = {
		fields = {
		},
		dataSize = 0,
		index = 46231,
	},
	["eventAccepted"] = {
		fields = {
		},
		dataSize = 0,
		index = 46230,
	},
	["ReadBinary"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46227,
				castTo = ffi.typeof("int*"),
				offset = 260
			},
			{
				name = "Count",
				index = 46229,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				isRet = true,
				index = 46228,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 4
			},
		},
		dataSize = 264,
		index = 46226,
		retOffset = 260,
	},
	["ReadText"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46224,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "Str",
				isRet = true,
				index = 46225,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46223,
		retOffset = 12,
	},
	["SendBinary"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46220,
				castTo = ffi.typeof("int*"),
				offset = 260
			},
			{
				name = "Count",
				index = 46222,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 46221,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 264,
		index = 46219,
		retOffset = 260,
	},
	["SendText"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46217,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "Str",
				index = 46218,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46216,
		retOffset = 12,
	},
	["IsConnected"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46215,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46214,
		retOffset = 0,
	},
	["Close"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46213,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46212,
		retOffset = 0,
	},
	["Open"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46210,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "Addr",
				index = 46211,
				type = ffi.typeof("struct FIpAddr"),
				castTo = ffi.typeof("struct FIpAddr*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46209,
		retOffset = 8,
	},
	["Listen"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46208,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46207,
		retOffset = 0,
	},
	["BindPort"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46204,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "PortNum",
				index = 46206,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bUseNextAvailable",
				index = 46205,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 46203,
		retOffset = 8,
	},
	["UploadMatchmakingStats"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45523,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "UniqueId",
				index = 45525,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "MMStats",
				index = 45524,
				className = "UOnlineMatchmakingStats",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 32,
		index = 45522,
		retOffset = 28,
	},
	["UpdatePlaylistPopulation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45519,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "PlaylistId",
				index = 45521,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NumPlayers",
				index = 45520,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 45518,
		retOffset = 8,
	},
	["UploadGameplayEventsData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45516,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "UniqueId",
				index = 45517,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Payload",
				isRet = true,
				index = 45514,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 24
			},
		},
		dataSize = 40,
		index = 45513,
		retOffset = 36,
	},
	["UploadPlayerData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45508,
				castTo = ffi.typeof("BOOL*"),
				offset = 44
			},
			{
				name = "UniqueId",
				index = 45512,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "PlayerNick",
				index = 45511,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "ProfileSettings",
				index = 45510,
				className = "UOnlineProfileSettings",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 36
			},
			{
				name = "PlayerStorage",
				index = 45509,
				className = "UOnlinePlayerStorage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 40
			},
		},
		dataSize = 48,
		index = 45507,
		retOffset = 44,
	},
	["GetNews"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45829,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 45831,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewsType",
				index = 45830,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineNewsType",
				flags = 32,
				offset = 1
			},
		},
		dataSize = 20,
		index = 45828,
		retOffset = 4,
	},
	["ClearReadNewsCompletedDelegate"] = {
		fields = {
			{
				name = "ReadGameNewsDelegate",
				index = 45827,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45826,
	},
	["AddReadNewsCompletedDelegate"] = {
		fields = {
			{
				name = "ReadNewsDelegate",
				index = 45825,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45824,
	},
	["OnReadNewsCompleted"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 45823,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewsType",
				index = 45822,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineNewsType",
				flags = 32,
				offset = 4
			},
		},
		dataSize = 5,
		index = 45808,
	},
	["ReadNews"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45819,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 45821,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewsType",
				index = 45820,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineNewsType",
				flags = 32,
				offset = 1
			},
		},
		dataSize = 8,
		index = 45818,
		retOffset = 4,
	},
	["ClearShareTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ShareTitleFileCompleteDelegate",
				index = 46045,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46044,
	},
	["AddShareTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ShareTitleFileCompleteDelegate",
				index = 46043,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46042,
	},
	["ShareTitleFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46040,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "FileToShare",
				index = 46041,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46039,
		retOffset = 12,
	},
	["ClearDownloadedFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46037,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Filename",
				index = 46038,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46036,
		retOffset = 12,
	},
	["ClearDownloadedFiles"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46035,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46034,
		retOffset = 0,
	},
	["GetTitleFileState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46032,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 12
			},
			{
				name = "Filename",
				index = 46033,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 20,
		index = 46031,
		retOffset = 12,
	},
	["GetTitleFileContents"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46029,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Filename",
				index = 46030,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "FileContents",
				isRet = true,
				index = 46027,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 28,
		index = 46026,
		retOffset = 24,
	},
	["ClearReadTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ReadTitleFileCompleteDelegate",
				index = 46025,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46024,
	},
	["AddReadTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ReadTitleFileCompleteDelegate",
				index = 46023,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46022,
	},
	["ReadTitleFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46019,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 46021,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FileToRead",
				index = 46020,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46018,
		retOffset = 16,
	},
	["OnShareTitleFileComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 46017,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Filename",
				index = 46016,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "UGCHandle",
				index = 46015,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
		},
		dataSize = 28,
		index = 46005,
	},
	["OnReadTitleFileComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 46014,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Filename",
				index = 46013,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 16,
		index = 45997,
	},
	["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 45251,
	},
	["SendHostNewGameSessionResponse"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45312,
				castTo = ffi.typeof("BOOL*"),
				offset = 96
			},
			{
				name = "bSuccess",
				index = 45316,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45315,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "SearchClass",
				index = 45314,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 12
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 45313,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 16
			},
		},
		dataSize = 100,
		index = 45311,
		retOffset = 96,
	},
	["OnCreateNewSessionRequestReceived"] = {
		fields = {
			{
				name = "SessionName",
				index = 45310,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SearchClass",
				index = 45309,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 8
			},
			{
				name = "Players",
				isRet = true,
				index = 45307,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FPlayerMember"),
				castTo = ffi.typeof("struct TArray_FPlayerMember*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 24,
		index = 45253,
	},
	["OnTravelRequestReceived"] = {
		fields = {
			{
				name = "SessionName",
				index = 45306,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SearchClass",
				index = 45305,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 8
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 45304,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 12
			},
		},
		dataSize = 92,
		index = 45255,
	},
	["OnReceivedBandwidthTestResults"] = {
		fields = {
			{
				name = "TestType",
				index = 45303,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestType",
				flags = 32,
				offset = 0
			},
			{
				name = "TestResult",
				index = 45302,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestResult",
				flags = 32,
				offset = 1
			},
			{
				name = "BandwidthStats",
				isRet = true,
				index = 45301,
				isOutParm = true,
				cType = ffi.typeof("struct FConnectionBandwidthStats"),
				castTo = ffi.typeof("struct FConnectionBandwidthStats*"),
				offset = 4
			},
		},
		dataSize = 16,
		index = 45257,
	},
	["OnReceivedBandwidthTestRequest"] = {
		fields = {
			{
				name = "TestType",
				index = 45300,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestType",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 45259,
	},
	["OnConnectionRequestResult"] = {
		fields = {
			{
				name = "ConnectionResult",
				index = 45299,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconConnectionResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 45261,
	},
	["BeginBandwidthTest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45296,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "TestType",
				index = 45298,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestType",
				flags = 32,
				offset = 0
			},
			{
				name = "TestBufferSize",
				index = 45297,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 45295,
		retOffset = 8,
	},
	["RequestConnection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45291,
				castTo = ffi.typeof("BOOL*"),
				offset = 64
			},
			{
				name = "DesiredHost",
				isRet = true,
				index = 45294,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 0
			},
			{
				name = "ClientRequest",
				isRet = true,
				index = 45293,
				isOutParm = true,
				cType = ffi.typeof("struct FClientConnectionRequest"),
				castTo = ffi.typeof("struct FClientConnectionRequest*"),
				offset = 8
			},
			{
				name = "bRegisterSecureAddress",
				index = 45292,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 60
			},
		},
		dataSize = 68,
		index = 45290,
		retOffset = 64,
	},
	["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 45289,
	},
	["OnReceivedClientCreateNewSessionResult"] = {
		fields = {
			{
				name = "bSucceeded",
				index = 45402,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45401,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "SearchClass",
				index = 45400,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 12
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 45399,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 16
			},
		},
		dataSize = 96,
		index = 45342,
	},
	["RequestClientCreateNewSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45395,
				castTo = ffi.typeof("BOOL*"),
				offset = 48
			},
			{
				name = "PlayerNetId",
				index = 45398,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45397,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 24
			},
			{
				name = "SearchClass",
				index = 45396,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 32
			},
			{
				name = "Players",
				isRet = true,
				index = 45393,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FPlayerMember"),
				castTo = ffi.typeof("struct TArray_FPlayerMember*"),
				TArray = true,
				offset = 36
			},
		},
		dataSize = 52,
		index = 45392,
		retOffset = 48,
	},
	["TellClientsToTravel"] = {
		fields = {
			{
				name = "SessionName",
				index = 45391,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SearchClass",
				index = 45390,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 8
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 45389,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 12
			},
		},
		dataSize = 92,
		index = 45388,
	},
	["OnAllPendingPlayersConnected"] = {
		fields = {
		},
		dataSize = 0,
		index = 45344,
	},
	["AllPlayersConnected"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45387,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Players",
				isRet = true,
				index = 45385,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45384,
		retOffset = 12,
	},
	["GetConnectionIndexForPlayer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45382,
				castTo = ffi.typeof("int*"),
				offset = 24
			},
			{
				name = "PlayerNetId",
				index = 45383,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 45381,
		retOffset = 24,
	},
	["SetPendingPlayerConnections"] = {
		fields = {
			{
				name = "Players",
				isRet = true,
				index = 45379,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45378,
	},
	["OnFinishedBandwidthTest"] = {
		fields = {
			{
				name = "PlayerNetId",
				index = 45377,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "TestType",
				index = 45376,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestType",
				flags = 32,
				offset = 24
			},
			{
				name = "TestResult",
				index = 45375,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestResult",
				flags = 32,
				offset = 25
			},
			{
				name = "BandwidthStats",
				isRet = true,
				index = 45374,
				isOutParm = true,
				cType = ffi.typeof("struct FConnectionBandwidthStats"),
				castTo = ffi.typeof("struct FConnectionBandwidthStats*"),
				offset = 28
			},
		},
		dataSize = 40,
		index = 45346,
	},
	["OnStartedBandwidthTest"] = {
		fields = {
			{
				name = "PlayerNetId",
				index = 45373,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "TestType",
				index = 45372,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestType",
				flags = 32,
				offset = 24
			},
		},
		dataSize = 25,
		index = 45348,
	},
	["OnReceivedClientConnectionRequest"] = {
		fields = {
			{
				name = "NewClientConnection",
				isRet = true,
				index = 45371,
				isOutParm = true,
				cType = ffi.typeof("struct FClientMeshBeaconConnection"),
				castTo = ffi.typeof("struct FClientMeshBeaconConnection*"),
				offset = 0
			},
		},
		dataSize = 104,
		index = 45350,
	},
	["AllowBandwidthTesting"] = {
		fields = {
			{
				name = "bEnabled",
				index = 45370,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 45369,
	},
	["CancelPendingBandwidthTests"] = {
		fields = {
		},
		dataSize = 0,
		index = 45368,
	},
	["HasPendingBandwidthTest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45367,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45366,
		retOffset = 0,
	},
	["CancelInProgressBandwidthTests"] = {
		fields = {
		},
		dataSize = 0,
		index = 45365,
	},
	["HasInProgressBandwidthTest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45364,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45363,
		retOffset = 0,
	},
	["RequestClientBandwidthTest"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45359,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "PlayerNetId",
				index = 45362,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "TestType",
				index = 45361,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EMeshBeaconBandwidthTestType",
				flags = 32,
				offset = 24
			},
			{
				name = "TestBufferSize",
				index = 45360,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 36,
		index = 45358,
		retOffset = 32,
	},
	["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 45357,
	},
	["InitHostBeacon"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45355,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "InOwningPlayerId",
				index = 45356,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 45354,
		retOffset = 24,
	},
	["GetRegisteredPlayers"] = {
		fields = {
			{
				name = "SessionName",
				index = 45994,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "OutRegisteredPlayers",
				isRet = true,
				index = 45992,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 28,
		index = 45991,
	},
	["IsPlayerInSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45988,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "SessionName",
				index = 45990,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 45989,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 36,
		index = 45987,
		retOffset = 32,
	},
	["eventGetPlayerNicknameFromIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45985,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "UserIndex",
				index = 45986,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45984,
		retOffset = 4,
	},
	["FindLocalServerAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45492,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "ClientConnection",
				index = 45493,
				className = "UPlayer",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45491,
		retOffset = 4,
	},
	["FindServerAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45489,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "ServerConnection",
				index = 45490,
				className = "UPlayer",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45488,
		retOffset = 4,
	},
	["FindLocalClientAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45486,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "ServerConnection",
				index = 45487,
				className = "UPlayer",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45485,
		retOffset = 4,
	},
	["FindClientAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45483,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "ClientConnection",
				index = 45484,
				className = "UPlayer",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45482,
		retOffset = 4,
	},
	["SendAuthRetryServer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45481,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45480,
		retOffset = 0,
	},
	["SendAuthKillClient"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45478,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ClientConnection",
				index = 45479,
				className = "UPlayer",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45477,
		retOffset = 4,
	},
	["SendAuthBlobServer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45474,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "ClientConnection",
				index = 45476,
				className = "UPlayer",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "AuthBlobUID",
				index = 45475,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 45473,
		retOffset = 8,
	},
	["SendAuthBlobClient"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45471,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "AuthBlobUID",
				index = 45472,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45470,
		retOffset = 4,
	},
	["ClearServerConnectionCloseDelegate"] = {
		fields = {
			{
				name = "ServerConnectionCloseDelegate",
				index = 45469,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45468,
	},
	["AddServerConnectionCloseDelegate"] = {
		fields = {
			{
				name = "ServerConnectionCloseDelegate",
				index = 45467,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45466,
	},
	["ClearClientConnectionCloseDelegate"] = {
		fields = {
			{
				name = "ClientConnectionCloseDelegate",
				index = 45465,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45464,
	},
	["AddClientConnectionCloseDelegate"] = {
		fields = {
			{
				name = "ClientConnectionCloseDelegate",
				index = 45463,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45462,
	},
	["ClearAuthRetryServerDelegate"] = {
		fields = {
			{
				name = "AuthRetryServerDelegate",
				index = 45461,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45460,
	},
	["AddAuthRetryServerDelegate"] = {
		fields = {
			{
				name = "AuthRetryServerDelegate",
				index = 45459,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45458,
	},
	["ClearAuthKillClientDelegate"] = {
		fields = {
			{
				name = "AuthKillClientDelegate",
				index = 45457,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45456,
	},
	["AddAuthKillClientDelegate"] = {
		fields = {
			{
				name = "AuthKillClientDelegate",
				index = 45455,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45454,
	},
	["ClearAuthCompleteServerDelegate"] = {
		fields = {
			{
				name = "AuthCompleteServerDelegate",
				index = 45453,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45452,
	},
	["AddAuthCompleteServerDelegate"] = {
		fields = {
			{
				name = "AuthCompleteServerDelegate",
				index = 45451,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45450,
	},
	["ClearAuthCompleteClientDelegate"] = {
		fields = {
			{
				name = "AuthCompleteClientDelegate",
				index = 45449,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45448,
	},
	["AddAuthCompleteClientDelegate"] = {
		fields = {
			{
				name = "AuthCompleteClientDelegate",
				index = 45447,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45446,
	},
	["ClearAuthBlobReceivedServerDelegate"] = {
		fields = {
			{
				name = "AuthBlobReceivedServerDelegate",
				index = 45445,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45444,
	},
	["AddAuthBlobReceivedServerDelegate"] = {
		fields = {
			{
				name = "AuthBlobReceivedServerDelegate",
				index = 45443,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45442,
	},
	["ClearAuthBlobReceivedClientDelegate"] = {
		fields = {
			{
				name = "AuthBlobReceivedClientDelegate",
				index = 45441,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45440,
	},
	["AddAuthBlobReceivedClientDelegate"] = {
		fields = {
			{
				name = "AuthBlobReceivedClientDelegate",
				index = 45439,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45438,
	},
	["ClearAuthRequestServerDelegate"] = {
		fields = {
			{
				name = "AuthRequestServerDelegate",
				index = 45437,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45436,
	},
	["AddAuthRequestServerDelegate"] = {
		fields = {
			{
				name = "AuthRequestServerDelegate",
				index = 45435,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45434,
	},
	["ClearAuthRequestClientDelegate"] = {
		fields = {
			{
				name = "AuthRequestClientDelegate",
				index = 45433,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45432,
	},
	["AddAuthRequestClientDelegate"] = {
		fields = {
			{
				name = "AuthRequestClientDelegate",
				index = 45431,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45430,
	},
	["ClearAuthReadyDelegate"] = {
		fields = {
			{
				name = "AuthReadyDelegate",
				index = 45429,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45428,
	},
	["AddAuthReadyDelegate"] = {
		fields = {
			{
				name = "AuthReadyDelegate",
				index = 45427,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45426,
	},
	["HasPendingBootInvite"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45802,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45801,
		retOffset = 0,
	},
	["CancelNATNegotiation"] = {
		fields = {
		},
		dataSize = 0,
		index = 45800,
	},
	["ClearQosStatusChangedDelegate"] = {
		fields = {
			{
				name = "QosStatusChangedDelegate",
				index = 45799,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45798,
	},
	["AddQosStatusChangedDelegate"] = {
		fields = {
			{
				name = "QosStatusChangedDelegate",
				index = 45797,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45796,
	},
	["OnQosStatusChanged"] = {
		fields = {
			{
				name = "NumComplete",
				index = 45795,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NumTotal",
				index = 45794,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 45560,
	},
	["BindPlatformSpecificSessionToSearch"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45790,
				castTo = ffi.typeof("BOOL*"),
				offset = 88
			},
			{
				name = "SearchingPlayerNum",
				index = 45793,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SearchSettings",
				index = 45792,
				className = "UOnlineGameSearch",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "PlatformSpecificInfo",
				index = 45791,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 92,
		index = 45789,
		retOffset = 88,
	},
	["ReadPlatformSpecificSessionInfoBySessionName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45786,
				castTo = ffi.typeof("BOOL*"),
				offset = 88
			},
			{
				name = "SessionName",
				index = 45788,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 45787,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 8
			},
		},
		dataSize = 92,
		index = 45785,
		retOffset = 88,
	},
	["ReadPlatformSpecificSessionInfo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45782,
				castTo = ffi.typeof("BOOL*"),
				offset = 88
			},
			{
				name = "DesiredGame",
				isRet = true,
				index = 45784,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 0
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 45783,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 8
			},
		},
		dataSize = 92,
		index = 45781,
		retOffset = 88,
	},
	["QueryNonAdvertisedData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45778,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "StartAt",
				index = 45780,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NumberToQuery",
				index = 45779,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 45777,
		retOffset = 8,
	},
	["ClearJoinMigratedOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "JoinMigratedOnlineGameCompleteDelegate",
				index = 45776,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45775,
	},
	["AddJoinMigratedOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "JoinMigratedOnlineGameCompleteDelegate",
				index = 45774,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45773,
	},
	["OnJoinMigratedOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45772,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45771,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45543,
	},
	["JoinMigratedOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45767,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "PlayerNum",
				index = 45770,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45769,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "DesiredGame",
				isRet = true,
				index = 45768,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 12
			},
		},
		dataSize = 24,
		index = 45766,
		retOffset = 20,
	},
	["ClearMigrateOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "MigrateOnlineGameCompleteDelegate",
				index = 45765,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45764,
	},
	["AddMigrateOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "MigrateOnlineGameCompleteDelegate",
				index = 45763,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45762,
	},
	["OnMigrateOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45761,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45760,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45540,
	},
	["MigrateOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45757,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "HostingPlayerNum",
				index = 45759,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45758,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
		},
		dataSize = 16,
		index = 45756,
		retOffset = 12,
	},
	["ClearRecalculateSkillRatingCompleteDelegate"] = {
		fields = {
			{
				name = "RecalculateSkillRatingGameCompleteDelegate",
				index = 45755,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45754,
	},
	["AddRecalculateSkillRatingCompleteDelegate"] = {
		fields = {
			{
				name = "RecalculateSkillRatingCompleteDelegate",
				index = 45753,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45752,
	},
	["OnRecalculateSkillRatingComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45751,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45750,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45546,
	},
	["RecalculateSkillRating"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45748,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "SessionName",
				index = 45749,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Players",
				isRet = true,
				index = 45746,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 45745,
		retOffset = 20,
	},
	["ClearGameInviteProcessingStartedDelegate"] = {
		fields = {
			{
				name = "GameInviteProcessingStartedDelegate",
				index = 45744,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45743,
	},
	["AddGameInviteProcessingStartedDelegate"] = {
		fields = {
			{
				name = "GameInviteProcessingStartedDelegate",
				index = 45742,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45741,
	},
	["OnGameInviteProcessingStarted"] = {
		fields = {
		},
		dataSize = 0,
		index = 45565,
	},
	["AcceptGameInvite"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45738,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 45740,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45739,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
		},
		dataSize = 16,
		index = 45737,
		retOffset = 12,
	},
	["ClearGameInviteAcceptedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 45736,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "GameInviteAcceptedDelegate",
				index = 45735,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 45734,
	},
	["AddGameInviteAcceptedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 45733,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "GameInviteAcceptedDelegate",
				index = 45732,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 45731,
	},
	["OnGameInviteAccepted"] = {
		fields = {
			{
				name = "InviteResult",
				isRet = true,
				index = 45730,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 45567,
	},
	["GetArbitratedPlayers"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45727,
				cType = ffi.typeof("struct TArray_FOnlineArbitrationRegistrant"),
				castTo = ffi.typeof("struct TArray_FOnlineArbitrationRegistrant*"),
				TArray = true,
				offset = 8
			},
			{
				name = "SessionName",
				index = 45729,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 20,
		index = 45726,
		retOffset = 8,
	},
	["ClearArbitrationRegistrationCompleteDelegate"] = {
		fields = {
			{
				name = "ArbitrationRegistrationCompleteDelegate",
				index = 45725,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45724,
	},
	["AddArbitrationRegistrationCompleteDelegate"] = {
		fields = {
			{
				name = "ArbitrationRegistrationCompleteDelegate",
				index = 45723,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45722,
	},
	["OnArbitrationRegistrationComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45721,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45720,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45569,
	},
	["RegisterForArbitration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45718,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SessionName",
				index = 45719,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45717,
		retOffset = 8,
	},
	["ClearEndOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "EndOnlineGameCompleteDelegate",
				index = 45716,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45715,
	},
	["AddEndOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "EndOnlineGameCompleteDelegate",
				index = 45714,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45713,
	},
	["OnEndOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45712,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45711,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45552,
	},
	["EndOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45709,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SessionName",
				index = 45710,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45708,
		retOffset = 8,
	},
	["ClearStartOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "StartOnlineGameCompleteDelegate",
				index = 45707,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45706,
	},
	["AddStartOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "StartOnlineGameCompleteDelegate",
				index = 45705,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45704,
	},
	["OnStartOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45703,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45702,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45549,
	},
	["StartOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45700,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SessionName",
				index = 45701,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45699,
		retOffset = 8,
	},
	["ClearUnregisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "UnregisterPlayerCompleteDelegate",
				index = 45698,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45697,
	},
	["AddUnregisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "UnregisterPlayerCompleteDelegate",
				index = 45696,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45695,
	},
	["OnUnregisterPlayerComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45694,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 45693,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "bWasSuccessful",
				index = 45692,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 36,
		index = 45573,
	},
	["UnregisterPlayers"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45690,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "SessionName",
				index = 45691,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Players",
				isRet = true,
				index = 45688,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 45687,
		retOffset = 20,
	},
	["UnregisterPlayer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45684,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "SessionName",
				index = 45686,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 45685,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 36,
		index = 45683,
		retOffset = 32,
	},
	["ClearRegisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "RegisterPlayerCompleteDelegate",
				index = 45682,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45681,
	},
	["AddRegisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "RegisterPlayerCompleteDelegate",
				index = 45680,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45679,
	},
	["OnRegisterPlayerComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45678,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 45677,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "bWasSuccessful",
				index = 45676,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 36,
		index = 45575,
	},
	["RegisterPlayers"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45674,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "SessionName",
				index = 45675,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Players",
				isRet = true,
				index = 45672,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 45671,
		retOffset = 20,
	},
	["RegisterPlayer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45667,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "SessionName",
				index = 45670,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 45669,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "bWasInvited",
				index = 45668,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 40,
		index = 45666,
		retOffset = 36,
	},
	["GetResolvedConnectString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45663,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "SessionName",
				index = 45665,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "ConnectInfo",
				isRet = true,
				index = 45664,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 45662,
		retOffset = 20,
	},
	["ClearJoinOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "JoinOnlineGameCompleteDelegate",
				index = 45661,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45660,
	},
	["AddJoinOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "JoinOnlineGameCompleteDelegate",
				index = 45659,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45658,
	},
	["OnJoinOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45657,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45656,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45537,
	},
	["JoinOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45652,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "PlayerNum",
				index = 45655,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45654,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "DesiredGame",
				isRet = true,
				index = 45653,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 12
			},
		},
		dataSize = 24,
		index = 45651,
		retOffset = 20,
	},
	["FreeSearchResults"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45649,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "Search",
				index = 45650,
				className = "UOnlineGameSearch",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45648,
		retOffset = 4,
	},
	["ClearCancelFindOnlineGamesCompleteDelegate"] = {
		fields = {
			{
				name = "CancelFindOnlineGamesCompleteDelegate",
				index = 45647,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45646,
	},
	["AddCancelFindOnlineGamesCompleteDelegate"] = {
		fields = {
			{
				name = "CancelFindOnlineGamesCompleteDelegate",
				index = 45645,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45644,
	},
	["OnCancelFindOnlineGamesComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 45643,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 45558,
	},
	["CancelFindOnlineGames"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45642,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45641,
		retOffset = 0,
	},
	["ClearFindOnlineGamesCompleteDelegate"] = {
		fields = {
			{
				name = "FindOnlineGamesCompleteDelegate",
				index = 45640,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45639,
	},
	["AddFindOnlineGamesCompleteDelegate"] = {
		fields = {
			{
				name = "FindOnlineGamesCompleteDelegate",
				index = 45638,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45637,
	},
	["FindOnlineGames"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45634,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SearchingPlayerNum",
				index = 45636,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SearchSettings",
				index = 45635,
				className = "UOnlineGameSearch",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 45633,
		retOffset = 8,
	},
	["ClearDestroyOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "DestroyOnlineGameCompleteDelegate",
				index = 45632,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45631,
	},
	["AddDestroyOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "DestroyOnlineGameCompleteDelegate",
				index = 45630,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45629,
	},
	["OnDestroyOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45628,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45627,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45534,
	},
	["DestroyOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45625,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SessionName",
				index = 45626,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45624,
		retOffset = 8,
	},
	["ClearUpdateOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "UpdateOnlineGameCompleteDelegate",
				index = 45623,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45622,
	},
	["AddUpdateOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "UpdateOnlineGameCompleteDelegate",
				index = 45621,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45620,
	},
	["OnUpdateOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45619,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45618,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45531,
	},
	["UpdateOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45614,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "SessionName",
				index = 45617,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "UpdatedGameSettings",
				index = 45616,
				className = "UOnlineGameSettings",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "bShouldRefreshOnlineData",
				index = 45615,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 45613,
		retOffset = 16,
	},
	["ClearCreateOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "CreateOnlineGameCompleteDelegate",
				index = 45612,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45611,
	},
	["AddCreateOnlineGameCompleteDelegate"] = {
		fields = {
			{
				name = "CreateOnlineGameCompleteDelegate",
				index = 45610,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45609,
	},
	["OnCreateOnlineGameComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 45608,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 45607,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 45528,
	},
	["CreateOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45603,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "HostingPlayerNum",
				index = 45606,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 45605,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
			{
				name = "NewGameSettings",
				index = 45604,
				className = "UOnlineGameSettings",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 20,
		index = 45602,
		retOffset = 16,
	},
	["GetGameSearch"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45601,
				castTo = ffi.typeof("struct UOnlineGameSearch**"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45600,
		retOffset = 0,
	},
	["GetGameSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45598,
				castTo = ffi.typeof("struct UOnlineGameSettings**"),
				offset = 8
			},
			{
				name = "SessionName",
				index = 45599,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45597,
		retOffset = 8,
	},
	["OnFindOnlineGamesComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 45596,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 45555,
	},
	["ParseDataCenterId"] = {
		fields = {
			{
				name = "Data",
				isRet = true,
				index = 45971,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45970,
	},
	["OnReadDataCenterIdComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 45969,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Filename",
				index = 45968,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 28,
		index = 45965,
	},
	["ReadDataCenterId"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 45964,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45963,
	},
	["eventSendPlaylistPopulationUpdate"] = {
		fields = {
			{
				name = "NumPlayers",
				index = 45962,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45960,
	},
	["GetPopulationInfoFromPlaylist"] = {
		fields = {
			{
				name = "PlaylistId",
				index = 45959,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "WorldwideTotal",
				isRet = true,
				index = 45958,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "RegionTotal",
				isRet = true,
				index = 45957,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
		},
		dataSize = 16,
		index = 45956,
	},
	["ParsePlaylistPopulationData"] = {
		fields = {
			{
				name = "Data",
				isRet = true,
				index = 45954,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45953,
	},
	["OnPlaylistPopulationDataUpdated"] = {
		fields = {
		},
		dataSize = 0,
		index = 45843,
	},
	["OnReadPlaylistPopulationComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 45952,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Filename",
				index = 45951,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 28,
		index = 45948,
	},
	["ReadPlaylistPopulation"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 45947,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 45946,
	},
	["Reset"] = {
		fields = {
		},
		dataSize = 4,
		index = 45945,
	},
	["GetContentIdsFromPlaylist"] = {
		fields = {
			{
				name = "PlaylistId",
				index = 45944,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentIds",
				isRet = true,
				index = 45942,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_int"),
				castTo = ffi.typeof("struct TArray_int*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 20,
		index = 45941,
	},
	["GetInventorySwapFromPlaylist"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45938,
				castTo = ffi.typeof("struct UClass**"),
				offset = 8
			},
			{
				name = "PlaylistId",
				index = 45940,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SourceInventory",
				index = 45939,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 4
			},
		},
		dataSize = 20,
		index = 45937,
		retOffset = 8,
	},
	["GetMapCycleFromPlaylist"] = {
		fields = {
			{
				name = "PlaylistId",
				index = 45936,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "MapCycle",
				isRet = true,
				index = 45934,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FName"),
				castTo = ffi.typeof("struct TArray_FName*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 20,
		index = 45933,
	},
	["GetUrlFromPlaylist"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45931,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "PlaylistId",
				index = 45932,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 20,
		index = 45930,
		retOffset = 4,
	},
	["GetMatchType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45928,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "PlaylistId",
				index = 45929,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45927,
		retOffset = 4,
	},
	["IsPlaylistArbitrated"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45925,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "PlaylistId",
				index = 45926,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45924,
		retOffset = 4,
	},
	["GetLoadBalanceIdFromPlaylist"] = {
		fields = {
			{
				name = "PlaylistId",
				index = 45923,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LoadBalanceId",
				isRet = true,
				index = 45922,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 45921,
	},
	["GetTeamInfoFromPlaylist"] = {
		fields = {
			{
				name = "PlaylistId",
				index = 45920,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TeamSize",
				isRet = true,
				index = 45919,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "TeamCount",
				isRet = true,
				index = 45918,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "MaxPartySize",
				isRet = true,
				index = 45917,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
		},
		dataSize = 20,
		index = 45916,
	},
	["PlaylistSupportsDedicatedServers"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45914,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "PlaylistId",
				index = 45915,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45913,
		retOffset = 4,
	},
	["HasAnyGameSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45911,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "PlaylistId",
				index = 45912,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45910,
		retOffset = 4,
	},
	["GetGameSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45907,
				castTo = ffi.typeof("struct UOnlineGameSettings**"),
				offset = 8
			},
			{
				name = "PlaylistId",
				index = 45909,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "GameSettingsId",
				index = 45908,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 20,
		index = 45906,
		retOffset = 8,
	},
	["FinalizePlaylistObjects"] = {
		fields = {
		},
		dataSize = 0,
		index = 45905,
	},
	["OnReadTitleFileComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 45904,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Filename",
				index = 45903,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 24,
		index = 45902,
	},
	["ShouldRefreshPlaylists"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45901,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 45900,
		retOffset = 0,
	},
	["DetermineFilesToDownload"] = {
		fields = {
		},
		dataSize = 0,
		index = 45899,
	},
	["DownloadPlaylist"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 45898,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 12,
		index = 45897,
	},
	["OnReadPlaylistComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 45896,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 45845,
	},
	["OnDestroyComplete"] = {
		fields = {
		},
		dataSize = 0,
		index = 46047,
	},
	["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 46071,
	},
	["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 46113,
	},
	["CancelReservation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46111,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "CancellingPartyLeader",
				index = 46112,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 46110,
		retOffset = 24,
	},
	["RequestReservationUpdate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46107,
				castTo = ffi.typeof("BOOL*"),
				offset = 44
			},
			{
				name = "DesiredHost",
				isRet = true,
				index = 46109,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 0
			},
			{
				name = "RequestingPartyLeader",
				index = 46108,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "PlayersToAdd",
				isRet = true,
				index = 46105,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FPlayerReservation"),
				castTo = ffi.typeof("struct TArray_FPlayerReservation*"),
				TArray = true,
				offset = 32
			},
		},
		dataSize = 48,
		index = 46104,
		retOffset = 44,
	},
	["RequestReservation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46101,
				castTo = ffi.typeof("BOOL*"),
				offset = 44
			},
			{
				name = "DesiredHost",
				isRet = true,
				index = 46103,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 0
			},
			{
				name = "RequestingPartyLeader",
				index = 46102,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "Players",
				isRet = true,
				index = 46099,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FPlayerReservation"),
				castTo = ffi.typeof("struct TArray_FPlayerReservation*"),
				TArray = true,
				offset = 32
			},
		},
		dataSize = 48,
		index = 46098,
		retOffset = 44,
	},
	["OnHostHasCancelled"] = {
		fields = {
		},
		dataSize = 0,
		index = 46073,
	},
	["OnHostIsReady"] = {
		fields = {
		},
		dataSize = 0,
		index = 46075,
	},
	["OnTravelRequestReceived"] = {
		fields = {
			{
				name = "SessionName",
				index = 46097,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SearchClass",
				index = 46096,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 8
			},
			{
				name = "PlatformSpecificInfo",
				index = 46095,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 92,
		index = 46077,
	},
	["OnReservationCountUpdated"] = {
		fields = {
			{
				name = "ReservationRemaining",
				index = 46094,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46079,
	},
	["OnReservationRequestComplete"] = {
		fields = {
			{
				name = "ReservationResult",
				index = 46093,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EPartyReservationResult",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 46081,
	},
	["GetMaxAvailableTeamSize"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46195,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46194,
		retOffset = 0,
	},
	["GetPartyLeaders"] = {
		fields = {
			{
				name = "PartyLeaders",
				isRet = true,
				index = 46192,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46191,
	},
	["GetPlayers"] = {
		fields = {
			{
				name = "Players",
				isRet = true,
				index = 46188,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 72,
		index = 46187,
	},
	["AppendReservationSkillsToSearch"] = {
		fields = {
			{
				name = "Search",
				index = 46186,
				className = "UOnlineGameSearch",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46185,
	},
	["eventUnregisterParty"] = {
		fields = {
			{
				name = "PartyLeader",
				index = 46184,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 88,
		index = 46182,
	},
	["eventUnregisterPartyMembers"] = {
		fields = {
		},
		dataSize = 64,
		index = 46180,
	},
	["eventRegisterPartyMembers"] = {
		fields = {
		},
		dataSize = 80,
		index = 46176,
	},
	["AreReservationsFull"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46175,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46174,
		retOffset = 0,
	},
	["TellClientsHostHasCancelled"] = {
		fields = {
		},
		dataSize = 0,
		index = 46173,
	},
	["TellClientsHostIsReady"] = {
		fields = {
		},
		dataSize = 0,
		index = 46172,
	},
	["TellClientsToTravel"] = {
		fields = {
			{
				name = "SessionName",
				index = 46171,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SearchClass",
				index = 46170,
				type = ffi.typeof("struct UClass*"),
				castTo = ffi.typeof("struct UClass**"),
				flags = 1,
				offset = 8
			},
			{
				name = "PlatformSpecificInfo",
				index = 46169,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 92,
		index = 46168,
	},
	["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 46167,
	},
	["OnClientCancellationReceived"] = {
		fields = {
			{
				name = "PartyLeader",
				index = 46166,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 24,
		index = 46123,
	},
	["OnReservationsFull"] = {
		fields = {
		},
		dataSize = 0,
		index = 46125,
	},
	["OnReservationChange"] = {
		fields = {
		},
		dataSize = 0,
		index = 46127,
	},
	["HandlePlayerLogout"] = {
		fields = {
			{
				name = "PlayerID",
				index = 46165,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "bMaintainParty",
				index = 46164,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 46163,
	},
	["GetExistingReservation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46161,
				castTo = ffi.typeof("int*"),
				offset = 24
			},
			{
				name = "PartyLeader",
				isRet = true,
				index = 46162,
				isOutParm = true,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 46160,
		retOffset = 24,
	},
	["UpdatePartyReservationEntry"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46158,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EPartyReservationResult",
				offset = 36
			},
			{
				name = "PartyLeader",
				index = 46159,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "PlayerMembers",
				isRet = true,
				index = 46156,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FPlayerReservation"),
				castTo = ffi.typeof("struct TArray_FPlayerReservation*"),
				TArray = true,
				offset = 24
			},
		},
		dataSize = 37,
		index = 46155,
		retOffset = 36,
	},
	["AddPartyReservationEntry"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46151,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EPartyReservationResult",
				offset = 44
			},
			{
				name = "PartyLeader",
				index = 46154,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "PlayerMembers",
				isRet = true,
				index = 46149,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FPlayerReservation"),
				castTo = ffi.typeof("struct TArray_FPlayerReservation*"),
				TArray = true,
				offset = 24
			},
			{
				name = "TeamNum",
				index = 46153,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 36
			},
			{
				name = "bIsHost",
				index = 46152,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 40
			},
		},
		dataSize = 45,
		index = 46148,
		retOffset = 44,
	},
	["InitHostBeacon"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46142,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "InNumTeams",
				index = 46147,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InNumPlayersPerTeam",
				index = 46146,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "InNumReservations",
				index = 46145,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "InSessionName",
				index = 46144,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 12
			},
			{
				name = "InForceTeamNum",
				index = 46143,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 28,
		index = 46141,
		retOffset = 24,
	},
	["PauseReservationRequests"] = {
		fields = {
			{
				name = "bPause",
				index = 46140,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46139,
	},
	["GetHexDigit"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46376,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "D",
				index = 46377,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46375,
		retOffset = 12,
	},
	["DecodeFormData"] = {
		fields = {
			{
				name = "Data",
				index = 46374,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 68,
		index = 46371,
	},
	["ProcessHeaderString"] = {
		fields = {
			{
				name = "S",
				index = 46370,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46369,
	},
	["Dump"] = {
		fields = {
		},
		dataSize = 0,
		index = 46368,
	},
	["GetVariables"] = {
		fields = {
			{
				name = "varNames",
				isRet = true,
				index = 46366,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46365,
	},
	["GetVariableNumber"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45166,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 28
			},
			{
				name = "VariableName",
				index = 46364,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Number",
				index = 46363,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "DefaultValue",
				index = 46362,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
		},
		dataSize = 40,
		index = 45165,
		retOffset = 28,
	},
	["GetVariableCount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45164,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
			{
				name = "VariableName",
				index = 46361,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45163,
		retOffset = 12,
	},
	["GetVariable"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45162,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "VariableName",
				index = 46360,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "DefaultValue",
				index = 46359,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 45161,
		retOffset = 24,
	},
	["AddVariable"] = {
		fields = {
			{
				name = "VariableName",
				index = 46358,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Value",
				index = 46357,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 24,
		index = 46356,
	},
	["GetHeaders"] = {
		fields = {
			{
				name = "headers",
				isRet = true,
				index = 46354,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46353,
	},
	["GetHeader"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46350,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "HeaderName",
				index = 46352,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "DefaultValue",
				index = 46351,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 36,
		index = 46349,
		retOffset = 24,
	},
	["AddHeader"] = {
		fields = {
			{
				name = "HeaderName",
				index = 46348,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Value",
				index = 46347,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 24,
		index = 46346,
	},
	["EncodeBase64"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46344,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "Decoded",
				index = 46345,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 46343,
		retOffset = 12,
	},
	["DecodeBase64"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46341,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "Encoded",
				index = 46342,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 46340,
		retOffset = 12,
	},
	["SentResponse"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46434,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46433,
		retOffset = 0,
	},
	["SentText"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46432,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46431,
		retOffset = 0,
	},
	["Redirect"] = {
		fields = {
			{
				name = "URL",
				index = 46430,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46429,
	},
	["SendStandardHeaders"] = {
		fields = {
			{
				name = "ContentType",
				index = 46427,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "bCache",
				index = 46426,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 46425,
	},
	["HTTPError"] = {
		fields = {
			{
				name = "ErrorNum",
				index = 46424,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Data",
				index = 46423,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46422,
	},
	["SendHeaders"] = {
		fields = {
		},
		dataSize = 12,
		index = 46420,
	},
	["AddHeader"] = {
		fields = {
			{
				name = "Header",
				index = 46419,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "bReplace",
				index = 46418,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 48,
		index = 46415,
	},
	["HTTPHeader"] = {
		fields = {
			{
				name = "Header",
				index = 46414,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46413,
	},
	["HTTPResponse"] = {
		fields = {
			{
				name = "Header",
				index = 46412,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46411,
	},
	["FailAuthentication"] = {
		fields = {
			{
				name = "Realm",
				index = 46410,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46409,
	},
	["SendCachedFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46406,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Filename",
				index = 46408,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "ContentType",
				index = 46407,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 46405,
		retOffset = 24,
	},
	["eventSendBinary"] = {
		fields = {
			{
				name = "Count",
				index = 46404,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "B",
				index = 46403,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 259,
		index = 46402,
	},
	["eventSendText"] = {
		fields = {
			{
				name = "Text",
				index = 46401,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "bNoCRLF",
				index = 46400,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 16,
		index = 46399,
	},
	["Dump"] = {
		fields = {
		},
		dataSize = 0,
		index = 46398,
	},
	["GetHTTPExpiration"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46396,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "OffsetSeconds",
				index = 46397,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46395,
		retOffset = 4,
	},
	["LoadParsedUHTM"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46393,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
			{
				name = "Filename",
				index = 46394,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 24,
		index = 46392,
		retOffset = 12,
	},
	["IncludeBinaryFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45179,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Filename",
				index = 46391,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45178,
		retOffset = 12,
	},
	["IncludeUHTM"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45169,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Filename",
				index = 46390,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45168,
		retOffset = 12,
	},
	["ClearSubst"] = {
		fields = {
		},
		dataSize = 0,
		index = 46389,
	},
	["Subst"] = {
		fields = {
			{
				name = "Variable",
				index = 46388,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Value",
				index = 46387,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "bClear",
				index = 46386,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 45167,
	},
	["FileExists"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45177,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Filename",
				index = 46385,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 45176,
		retOffset = 12,
	},
	["eventGetMatchTypeForPlaylistId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46293,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "PlaylistId",
				index = 46294,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46292,
		retOffset = 4,
	},
	["GetOnlinePlaylistProvider"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46288,
				castTo = ffi.typeof("struct UOnlinePlaylistProvider**"),
				offset = 16
			},
			{
				name = "ProviderTag",
				index = 46291,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlaylistId",
				index = 46290,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "ProviderIndex",
				isRet = true,
				index = 46289,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 12
			},
		},
		dataSize = 128,
		index = 46286,
		retOffset = 16,
	},
	["GetPlaylistProvider"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46282,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "ProviderTag",
				index = 46285,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "ProviderIndex",
				index = 46284,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "out_Provider",
				isRet = true,
				index = 46283,
				isOutParm = true,
				castTo = ffi.typeof("struct UUIResourceDataProvider**"),
				offset = 12
			},
		},
		dataSize = 20,
		index = 46281,
		retOffset = 16,
	},
	["FindProviderIndexByFieldValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46277,
				castTo = ffi.typeof("int*"),
				offset = 116
			},
			{
				name = "ProviderTag",
				index = 46280,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SearchField",
				index = 46279,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "ValueToSearchFor",
				isRet = true,
				index = 46278,
				isOutParm = true,
				cType = ffi.typeof("struct FUIProviderScriptFieldValue"),
				castTo = ffi.typeof("struct FUIProviderScriptFieldValue*"),
				offset = 16
			},
		},
		dataSize = 120,
		index = 46276,
		retOffset = 116,
	},
	["GetProviderFieldValue"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46271,
				castTo = ffi.typeof("BOOL*"),
				offset = 120
			},
			{
				name = "ProviderTag",
				index = 46275,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "SearchField",
				index = 46274,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 8
			},
			{
				name = "ProviderIndex",
				index = 46273,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "out_FieldValue",
				isRet = true,
				index = 46272,
				isOutParm = true,
				cType = ffi.typeof("struct FUIProviderScriptFieldValue"),
				castTo = ffi.typeof("struct FUIProviderScriptFieldValue*"),
				offset = 20
			},
		},
		dataSize = 124,
		index = 46270,
		retOffset = 120,
	},
	["GetResourceProviderFields"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46268,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "ProviderTag",
				index = 46269,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "ProviderFieldTags",
				isRet = true,
				index = 46266,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FName"),
				castTo = ffi.typeof("struct TArray_FName*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 46265,
		retOffset = 20,
	},
	["GetResourceProviders"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46263,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "ProviderTag",
				index = 46264,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "out_Providers",
				isRet = true,
				index = 46261,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_UUIResourceDataProviderPtr"),
				castTo = ffi.typeof("struct TArray_UUIResourceDataProviderPtr*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 46260,
		retOffset = 20,
	},
	["GetProviderCount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46258,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
			{
				name = "ProviderTag",
				index = 46259,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46257,
		retOffset = 8,
	},
	["eventInit"] = {
		fields = {
		},
		dataSize = 4,
		index = 46256,
	},
	["PostQuery"] = {
		fields = {
			{
				name = "Request",
				index = 45151,
				className = "UWebRequest",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Response",
				index = 45150,
				className = "UWebResponse",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 45149,
	},
	["Query"] = {
		fields = {
			{
				name = "Request",
				index = 45148,
				className = "UWebRequest",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Response",
				index = 45147,
				className = "UWebResponse",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 8,
		index = 45146,
	},
	["PreQuery"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 45143,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "Request",
				index = 45145,
				className = "UWebRequest",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Response",
				index = 45144,
				className = "UWebResponse",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 45142,
		retOffset = 8,
	},
	["CleanupApp"] = {
		fields = {
		},
		dataSize = 0,
		index = 45141,
	},
	["Cleanup"] = {
		fields = {
		},
		dataSize = 0,
		index = 45140,
	},
	["Init"] = {
		fields = {
		},
		dataSize = 0,
		index = 45139,
	},
	["GetApplication"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46321,
				castTo = ffi.typeof("struct UWebApplication**"),
				offset = 24
			},
			{
				name = "URI",
				index = 46452,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "SubURI",
				isRet = true,
				index = 46451,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 36,
		index = 46320,
		retOffset = 24,
	},
	["eventLostChild"] = {
		fields = {
			{
				name = "C",
				index = 46450,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46449,
	},
	["eventGainedChild"] = {
		fields = {
			{
				name = "C",
				index = 46448,
				className = "AActor",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46447,
	},
	["eventDestroyed"] = {
		fields = {
		},
		dataSize = 4,
		index = 46446,
	},
	["PostBeginPlay"] = {
		fields = {
		},
		dataSize = 28,
		index = 46443,
	},
	["eventQuery"] = {
		fields = {
			{
				name = "Request",
				index = 45157,
				className = "UWebRequest",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Response",
				index = 45156,
				className = "UWebResponse",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 45155,
	},
	["Init"] = {
		fields = {
		},
		dataSize = 0,
		index = 45154,
	},
	["eventQuery"] = {
		fields = {
			{
				name = "Request",
				index = 45175,
				className = "UWebRequest",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "Response",
				index = 45174,
				className = "UWebResponse",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 20,
		index = 45172,
	},
	["IsHanging"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46335,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46334,
		retOffset = 0,
	},
	["Cleanup"] = {
		fields = {
		},
		dataSize = 0,
		index = 46333,
	},
	["CheckRawBytes"] = {
		fields = {
		},
		dataSize = 0,
		index = 46331,
	},
	["EndOfHeaders"] = {
		fields = {
		},
		dataSize = 0,
		index = 46329,
	},
	["CreateResponseObject"] = {
		fields = {
		},
		dataSize = 4,
		index = 46326,
	},
	["ProcessPost"] = {
		fields = {
			{
				name = "S",
				index = 46325,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46324,
	},
	["ProcessGet"] = {
		fields = {
			{
				name = "S",
				index = 46318,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46317,
	},
	["ProcessHead"] = {
		fields = {
			{
				name = "S",
				index = 46316,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46315,
	},
	["ReceivedLine"] = {
		fields = {
			{
				name = "S",
				index = 46314,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46313,
	},
	["eventReceivedText"] = {
		fields = {
			{
				name = "Text",
				index = 46312,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 28,
		index = 46310,
	},
	["eventTimer"] = {
		fields = {
		},
		dataSize = 0,
		index = 46309,
	},
	["eventClosed"] = {
		fields = {
		},
		dataSize = 0,
		index = 46308,
	},
	["eventAccepted"] = {
		fields = {
		},
		dataSize = 0,
		index = 46306,
	},
