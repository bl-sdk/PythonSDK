g_classFuncs["UOnlineNewsInterfaceMcp"] = {}
g_classFuncs["UWebResponse"] = {}
g_classFuncs["UMeshBeaconHost"] = {}
g_classFuncs["UOnlinePlaylistManager"] = {}
g_classFuncs["UWebRequest"] = {}
g_classFuncs["UPartyBeaconHost"] = {}
g_classFuncs["AWebServer"] = {}
g_classFuncs["UUIDataStore_OnlinePlaylists"] = {}
g_classFuncs["UHelloWeb"] = {}
g_classFuncs["UMeshBeacon"] = {}
g_classFuncs["AInternetLink"] = {}
g_classFuncs["UPartyBeaconClient"] = {}
g_classFuncs["AWebConnection"] = {}
g_classFuncs["UOnlineGameInterfaceImpl"] = {}
g_classFuncs["ATcpLink"] = {}
g_classFuncs["UOnlineTitleFileDownloadMcp"] = {}
g_classFuncs["UOnlineAuthInterfaceImpl"] = {}
g_classFuncs["UMeshBeaconClient"] = {}
g_classFuncs["UOnlineEventsInterfaceMcp"] = {}
g_classFuncs["UImageServer"] = {}
g_classFuncs["UWebApplication"] = {}
g_classFuncs["UOnlineSubsystemCommonImpl"] = {}
g_classFuncs["UPartyBeacon"] = {}
local ffi = require("ffi")
local c = g_classFuncs

	g_classFuncs["AInternetLink"]["eventResolveFailed"] = {
		fields = {
		},
		dataSize = 0,
		index = 45220,
	}
	g_classFuncs["AInternetLink"]["eventResolved"] = {
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
	}
	g_classFuncs["AInternetLink"]["GetLocalIP"] = {
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
	}
	g_classFuncs["AInternetLink"]["StringToIpAddr"] = {
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
	}
	g_classFuncs["AInternetLink"]["IpAddrToString"] = {
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
	}
	g_classFuncs["AInternetLink"]["GetLastError"] = {
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
	}
	g_classFuncs["AInternetLink"]["Resolve"] = {
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
	}
	g_classFuncs["AInternetLink"]["ParseURL"] = {
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
	}
	g_classFuncs["AInternetLink"]["IsDataPending"] = {
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
	}
	g_classFuncs["ATcpLink"]["eventReceivedBinary"] = {
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
	}
	g_classFuncs["ATcpLink"]["eventReceivedLine"] = {
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
	}
	g_classFuncs["ATcpLink"]["eventReceivedText"] = {
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
	}
	g_classFuncs["ATcpLink"]["eventClosed"] = {
		fields = {
		},
		dataSize = 0,
		index = 46232,
	}
	g_classFuncs["ATcpLink"]["eventOpened"] = {
		fields = {
		},
		dataSize = 0,
		index = 46231,
	}
	g_classFuncs["ATcpLink"]["eventAccepted"] = {
		fields = {
		},
		dataSize = 0,
		index = 46230,
	}
	g_classFuncs["ATcpLink"]["ReadBinary"] = {
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
	}
	g_classFuncs["ATcpLink"]["ReadText"] = {
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
	}
	g_classFuncs["ATcpLink"]["SendBinary"] = {
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
	}
	g_classFuncs["ATcpLink"]["SendText"] = {
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
	}
	g_classFuncs["ATcpLink"]["IsConnected"] = {
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
	}
	g_classFuncs["ATcpLink"]["Close"] = {
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
	}
	g_classFuncs["ATcpLink"]["Open"] = {
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
	}
	g_classFuncs["ATcpLink"]["Listen"] = {
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
	}
	g_classFuncs["ATcpLink"]["BindPort"] = {
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
	}
	g_classFuncs["UOnlineEventsInterfaceMcp"]["UploadMatchmakingStats"] = {
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
	}
	g_classFuncs["UOnlineEventsInterfaceMcp"]["UpdatePlaylistPopulation"] = {
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
	}
	g_classFuncs["UOnlineEventsInterfaceMcp"]["UploadGameplayEventsData"] = {
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
	}
	g_classFuncs["UOnlineEventsInterfaceMcp"]["UploadPlayerData"] = {
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
	}
	g_classFuncs["UOnlineNewsInterfaceMcp"]["GetNews"] = {
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
	}
	g_classFuncs["UOnlineNewsInterfaceMcp"]["ClearReadNewsCompletedDelegate"] = {
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
	}
	g_classFuncs["UOnlineNewsInterfaceMcp"]["AddReadNewsCompletedDelegate"] = {
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
	}
	g_classFuncs["UOnlineNewsInterfaceMcp"]["OnReadNewsCompleted"] = {
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
	}
	g_classFuncs["UOnlineNewsInterfaceMcp"]["ReadNews"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["ClearShareTitleFileCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["AddShareTitleFileCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["ShareTitleFile"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["ClearDownloadedFile"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["ClearDownloadedFiles"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["GetTitleFileState"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["GetTitleFileContents"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["ClearReadTitleFileCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["AddReadTitleFileCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["ReadTitleFile"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["OnShareTitleFileComplete"] = {
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
	}
	g_classFuncs["UOnlineTitleFileDownloadMcp"]["OnReadTitleFileComplete"] = {
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
	}
	g_classFuncs["UMeshBeacon"]["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 45251,
	}
	g_classFuncs["UMeshBeaconClient"]["SendHostNewGameSessionResponse"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["OnCreateNewSessionRequestReceived"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["OnTravelRequestReceived"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["OnReceivedBandwidthTestResults"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["OnReceivedBandwidthTestRequest"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["OnConnectionRequestResult"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["BeginBandwidthTest"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["RequestConnection"] = {
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
	}
	g_classFuncs["UMeshBeaconClient"]["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 45289,
	}
	g_classFuncs["UMeshBeaconHost"]["OnReceivedClientCreateNewSessionResult"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["RequestClientCreateNewSession"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["TellClientsToTravel"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["OnAllPendingPlayersConnected"] = {
		fields = {
		},
		dataSize = 0,
		index = 45344,
	}
	g_classFuncs["UMeshBeaconHost"]["AllPlayersConnected"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["GetConnectionIndexForPlayer"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["SetPendingPlayerConnections"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["OnFinishedBandwidthTest"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["OnStartedBandwidthTest"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["OnReceivedClientConnectionRequest"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["AllowBandwidthTesting"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["CancelPendingBandwidthTests"] = {
		fields = {
		},
		dataSize = 0,
		index = 45368,
	}
	g_classFuncs["UMeshBeaconHost"]["HasPendingBandwidthTest"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["CancelInProgressBandwidthTests"] = {
		fields = {
		},
		dataSize = 0,
		index = 45365,
	}
	g_classFuncs["UMeshBeaconHost"]["HasInProgressBandwidthTest"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["RequestClientBandwidthTest"] = {
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
	}
	g_classFuncs["UMeshBeaconHost"]["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 45357,
	}
	g_classFuncs["UMeshBeaconHost"]["InitHostBeacon"] = {
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
	}
	g_classFuncs["UOnlineSubsystemCommonImpl"]["GetRegisteredPlayers"] = {
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
	}
	g_classFuncs["UOnlineSubsystemCommonImpl"]["IsPlayerInSession"] = {
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
	}
	g_classFuncs["UOnlineSubsystemCommonImpl"]["eventGetPlayerNicknameFromIndex"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["FindLocalServerAuthSession"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["FindServerAuthSession"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["FindLocalClientAuthSession"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["FindClientAuthSession"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthRetryServer"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthKillClient"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthBlobServer"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["SendAuthBlobClient"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearServerConnectionCloseDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddServerConnectionCloseDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearClientConnectionCloseDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddClientConnectionCloseDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthRetryServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthRetryServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthKillClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthKillClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthCompleteServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthCompleteServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthCompleteClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthCompleteClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthBlobReceivedServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthBlobReceivedServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthBlobReceivedClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthBlobReceivedClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthRequestServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthRequestServerDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthRequestClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthRequestClientDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["ClearAuthReadyDelegate"] = {
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
	}
	g_classFuncs["UOnlineAuthInterfaceImpl"]["AddAuthReadyDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["HasPendingBootInvite"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["CancelNATNegotiation"] = {
		fields = {
		},
		dataSize = 0,
		index = 45800,
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearQosStatusChangedDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddQosStatusChangedDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnQosStatusChanged"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["BindPlatformSpecificSessionToSearch"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ReadPlatformSpecificSessionInfoBySessionName"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ReadPlatformSpecificSessionInfo"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["QueryNonAdvertisedData"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearJoinMigratedOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddJoinMigratedOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnJoinMigratedOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["JoinMigratedOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearMigrateOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddMigrateOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnMigrateOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["MigrateOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearRecalculateSkillRatingCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddRecalculateSkillRatingCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnRecalculateSkillRatingComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["RecalculateSkillRating"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearGameInviteProcessingStartedDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddGameInviteProcessingStartedDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnGameInviteProcessingStarted"] = {
		fields = {
		},
		dataSize = 0,
		index = 45565,
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AcceptGameInvite"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearGameInviteAcceptedDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddGameInviteAcceptedDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnGameInviteAccepted"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["GetArbitratedPlayers"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearArbitrationRegistrationCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddArbitrationRegistrationCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnArbitrationRegistrationComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["RegisterForArbitration"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearEndOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddEndOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnEndOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["EndOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearStartOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddStartOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnStartOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["StartOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearUnregisterPlayerCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddUnregisterPlayerCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnUnregisterPlayerComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["UnregisterPlayers"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["UnregisterPlayer"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearRegisterPlayerCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddRegisterPlayerCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnRegisterPlayerComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["RegisterPlayers"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["RegisterPlayer"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["GetResolvedConnectString"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearJoinOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddJoinOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnJoinOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["JoinOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["FreeSearchResults"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearCancelFindOnlineGamesCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddCancelFindOnlineGamesCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnCancelFindOnlineGamesComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["CancelFindOnlineGames"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearFindOnlineGamesCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddFindOnlineGamesCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["FindOnlineGames"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearDestroyOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddDestroyOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnDestroyOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["DestroyOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearUpdateOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddUpdateOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnUpdateOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["UpdateOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["ClearCreateOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["AddCreateOnlineGameCompleteDelegate"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnCreateOnlineGameComplete"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["CreateOnlineGame"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["GetGameSearch"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["GetGameSettings"] = {
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
	}
	g_classFuncs["UOnlineGameInterfaceImpl"]["OnFindOnlineGamesComplete"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["ParseDataCenterId"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["OnReadDataCenterIdComplete"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["ReadDataCenterId"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["eventSendPlaylistPopulationUpdate"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetPopulationInfoFromPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["ParsePlaylistPopulationData"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["OnPlaylistPopulationDataUpdated"] = {
		fields = {
		},
		dataSize = 0,
		index = 45843,
	}
	g_classFuncs["UOnlinePlaylistManager"]["OnReadPlaylistPopulationComplete"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["ReadPlaylistPopulation"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["Reset"] = {
		fields = {
		},
		dataSize = 4,
		index = 45945,
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetContentIdsFromPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetInventorySwapFromPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetMapCycleFromPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetUrlFromPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetMatchType"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["IsPlaylistArbitrated"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetLoadBalanceIdFromPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetTeamInfoFromPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["PlaylistSupportsDedicatedServers"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["HasAnyGameSettings"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["GetGameSettings"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["FinalizePlaylistObjects"] = {
		fields = {
		},
		dataSize = 0,
		index = 45905,
	}
	g_classFuncs["UOnlinePlaylistManager"]["OnReadTitleFileComplete"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["ShouldRefreshPlaylists"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["DetermineFilesToDownload"] = {
		fields = {
		},
		dataSize = 0,
		index = 45899,
	}
	g_classFuncs["UOnlinePlaylistManager"]["DownloadPlaylist"] = {
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
	}
	g_classFuncs["UOnlinePlaylistManager"]["OnReadPlaylistComplete"] = {
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
	}
	g_classFuncs["UPartyBeacon"]["OnDestroyComplete"] = {
		fields = {
		},
		dataSize = 0,
		index = 46047,
	}
	g_classFuncs["UPartyBeacon"]["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 46071,
	}
	g_classFuncs["UPartyBeaconClient"]["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 46113,
	}
	g_classFuncs["UPartyBeaconClient"]["CancelReservation"] = {
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
	}
	g_classFuncs["UPartyBeaconClient"]["RequestReservationUpdate"] = {
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
	}
	g_classFuncs["UPartyBeaconClient"]["RequestReservation"] = {
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
	}
	g_classFuncs["UPartyBeaconClient"]["OnHostHasCancelled"] = {
		fields = {
		},
		dataSize = 0,
		index = 46073,
	}
	g_classFuncs["UPartyBeaconClient"]["OnHostIsReady"] = {
		fields = {
		},
		dataSize = 0,
		index = 46075,
	}
	g_classFuncs["UPartyBeaconClient"]["OnTravelRequestReceived"] = {
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
	}
	g_classFuncs["UPartyBeaconClient"]["OnReservationCountUpdated"] = {
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
	}
	g_classFuncs["UPartyBeaconClient"]["OnReservationRequestComplete"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["GetMaxAvailableTeamSize"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["GetPartyLeaders"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["GetPlayers"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["AppendReservationSkillsToSearch"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["eventUnregisterParty"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["eventUnregisterPartyMembers"] = {
		fields = {
		},
		dataSize = 64,
		index = 46180,
	}
	g_classFuncs["UPartyBeaconHost"]["eventRegisterPartyMembers"] = {
		fields = {
		},
		dataSize = 80,
		index = 46176,
	}
	g_classFuncs["UPartyBeaconHost"]["AreReservationsFull"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["TellClientsHostHasCancelled"] = {
		fields = {
		},
		dataSize = 0,
		index = 46173,
	}
	g_classFuncs["UPartyBeaconHost"]["TellClientsHostIsReady"] = {
		fields = {
		},
		dataSize = 0,
		index = 46172,
	}
	g_classFuncs["UPartyBeaconHost"]["TellClientsToTravel"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["eventDestroyBeacon"] = {
		fields = {
		},
		dataSize = 0,
		index = 46167,
	}
	g_classFuncs["UPartyBeaconHost"]["OnClientCancellationReceived"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["OnReservationsFull"] = {
		fields = {
		},
		dataSize = 0,
		index = 46125,
	}
	g_classFuncs["UPartyBeaconHost"]["OnReservationChange"] = {
		fields = {
		},
		dataSize = 0,
		index = 46127,
	}
	g_classFuncs["UPartyBeaconHost"]["HandlePlayerLogout"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["GetExistingReservation"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["UpdatePartyReservationEntry"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["AddPartyReservationEntry"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["InitHostBeacon"] = {
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
	}
	g_classFuncs["UPartyBeaconHost"]["PauseReservationRequests"] = {
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
	}
	g_classFuncs["UWebRequest"]["GetHexDigit"] = {
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
	}
	g_classFuncs["UWebRequest"]["DecodeFormData"] = {
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
	}
	g_classFuncs["UWebRequest"]["ProcessHeaderString"] = {
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
	}
	g_classFuncs["UWebRequest"]["Dump"] = {
		fields = {
		},
		dataSize = 0,
		index = 46368,
	}
	g_classFuncs["UWebRequest"]["GetVariables"] = {
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
	}
	g_classFuncs["UWebRequest"]["GetVariableNumber"] = {
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
	}
	g_classFuncs["UWebRequest"]["GetVariableCount"] = {
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
	}
	g_classFuncs["UWebRequest"]["GetVariable"] = {
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
	}
	g_classFuncs["UWebRequest"]["AddVariable"] = {
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
	}
	g_classFuncs["UWebRequest"]["GetHeaders"] = {
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
	}
	g_classFuncs["UWebRequest"]["GetHeader"] = {
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
	}
	g_classFuncs["UWebRequest"]["AddHeader"] = {
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
	}
	g_classFuncs["UWebRequest"]["EncodeBase64"] = {
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
	}
	g_classFuncs["UWebRequest"]["DecodeBase64"] = {
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
	}
	g_classFuncs["UWebResponse"]["SentResponse"] = {
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
	}
	g_classFuncs["UWebResponse"]["SentText"] = {
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
	}
	g_classFuncs["UWebResponse"]["Redirect"] = {
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
	}
	g_classFuncs["UWebResponse"]["SendStandardHeaders"] = {
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
	}
	g_classFuncs["UWebResponse"]["HTTPError"] = {
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
	}
	g_classFuncs["UWebResponse"]["SendHeaders"] = {
		fields = {
		},
		dataSize = 12,
		index = 46420,
	}
	g_classFuncs["UWebResponse"]["AddHeader"] = {
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
	}
	g_classFuncs["UWebResponse"]["HTTPHeader"] = {
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
	}
	g_classFuncs["UWebResponse"]["HTTPResponse"] = {
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
	}
	g_classFuncs["UWebResponse"]["FailAuthentication"] = {
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
	}
	g_classFuncs["UWebResponse"]["SendCachedFile"] = {
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
	}
	g_classFuncs["UWebResponse"]["eventSendBinary"] = {
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
	}
	g_classFuncs["UWebResponse"]["eventSendText"] = {
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
	}
	g_classFuncs["UWebResponse"]["Dump"] = {
		fields = {
		},
		dataSize = 0,
		index = 46398,
	}
	g_classFuncs["UWebResponse"]["GetHTTPExpiration"] = {
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
	}
	g_classFuncs["UWebResponse"]["LoadParsedUHTM"] = {
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
	}
	g_classFuncs["UWebResponse"]["IncludeBinaryFile"] = {
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
	}
	g_classFuncs["UWebResponse"]["IncludeUHTM"] = {
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
	}
	g_classFuncs["UWebResponse"]["ClearSubst"] = {
		fields = {
		},
		dataSize = 0,
		index = 46389,
	}
	g_classFuncs["UWebResponse"]["Subst"] = {
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
	}
	g_classFuncs["UWebResponse"]["FileExists"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["eventGetMatchTypeForPlaylistId"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetOnlinePlaylistProvider"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetPlaylistProvider"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["FindProviderIndexByFieldValue"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetProviderFieldValue"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetResourceProviderFields"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetResourceProviders"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["GetProviderCount"] = {
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
	}
	g_classFuncs["UUIDataStore_OnlinePlaylists"]["eventInit"] = {
		fields = {
		},
		dataSize = 4,
		index = 46256,
	}
	g_classFuncs["UWebApplication"]["PostQuery"] = {
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
	}
	g_classFuncs["UWebApplication"]["Query"] = {
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
	}
	g_classFuncs["UWebApplication"]["PreQuery"] = {
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
	}
	g_classFuncs["UWebApplication"]["CleanupApp"] = {
		fields = {
		},
		dataSize = 0,
		index = 45141,
	}
	g_classFuncs["UWebApplication"]["Cleanup"] = {
		fields = {
		},
		dataSize = 0,
		index = 45140,
	}
	g_classFuncs["UWebApplication"]["Init"] = {
		fields = {
		},
		dataSize = 0,
		index = 45139,
	}
	g_classFuncs["AWebServer"]["GetApplication"] = {
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
	}
	g_classFuncs["AWebServer"]["eventLostChild"] = {
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
	}
	g_classFuncs["AWebServer"]["eventGainedChild"] = {
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
	}
	g_classFuncs["AWebServer"]["eventDestroyed"] = {
		fields = {
		},
		dataSize = 4,
		index = 46446,
	}
	g_classFuncs["AWebServer"]["PostBeginPlay"] = {
		fields = {
		},
		dataSize = 28,
		index = 46443,
	}
	g_classFuncs["UHelloWeb"]["eventQuery"] = {
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
	}
	g_classFuncs["UHelloWeb"]["Init"] = {
		fields = {
		},
		dataSize = 0,
		index = 45154,
	}
	g_classFuncs["UImageServer"]["eventQuery"] = {
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
	}
	g_classFuncs["AWebConnection"]["IsHanging"] = {
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
	}
	g_classFuncs["AWebConnection"]["Cleanup"] = {
		fields = {
		},
		dataSize = 0,
		index = 46333,
	}
	g_classFuncs["AWebConnection"]["CheckRawBytes"] = {
		fields = {
		},
		dataSize = 0,
		index = 46331,
	}
	g_classFuncs["AWebConnection"]["EndOfHeaders"] = {
		fields = {
		},
		dataSize = 0,
		index = 46329,
	}
	g_classFuncs["AWebConnection"]["CreateResponseObject"] = {
		fields = {
		},
		dataSize = 4,
		index = 46326,
	}
	g_classFuncs["AWebConnection"]["ProcessPost"] = {
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
	}
	g_classFuncs["AWebConnection"]["ProcessGet"] = {
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
	}
	g_classFuncs["AWebConnection"]["ProcessHead"] = {
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
	}
	g_classFuncs["AWebConnection"]["ReceivedLine"] = {
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
	}
	g_classFuncs["AWebConnection"]["eventReceivedText"] = {
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
	}
	g_classFuncs["AWebConnection"]["eventTimer"] = {
		fields = {
		},
		dataSize = 0,
		index = 46309,
	}
	g_classFuncs["AWebConnection"]["eventClosed"] = {
		fields = {
		},
		dataSize = 0,
		index = 46308,
	}
	g_classFuncs["AWebConnection"]["eventAccepted"] = {
		fields = {
		},
		dataSize = 0,
		index = 46306,
	}
