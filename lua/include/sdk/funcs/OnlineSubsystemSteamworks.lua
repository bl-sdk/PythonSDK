local ffi = require("ffi")
local c = g_classFuncs

	["GetServerAddr"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46504,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "OutServerIP",
				isRet = true,
				index = 46506,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
			{
				name = "OutServerPort",
				isRet = true,
				index = 46505,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
		},
		dataSize = 12,
		index = 46503,
		retOffset = 8,
	},
	["GetServerUniqueId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46501,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "OutServerUID",
				isRet = true,
				index = 46502,
				isOutParm = true,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 0
			},
		},
		dataSize = 28,
		index = 46500,
		retOffset = 24,
	},
	["EndRemoteServerAuthSession"] = {
		fields = {
			{
				name = "ServerUID",
				index = 46499,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ServerIP",
				index = 46498,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 46497,
	},
	["EndLocalServerAuthSession"] = {
		fields = {
			{
				name = "ClientUID",
				index = 46496,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ClientIP",
				index = 46495,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 46494,
	},
	["VerifyServerAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46490,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "ServerUID",
				index = 46493,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ServerIP",
				index = 46492,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
			{
				name = "AuthBlobUID",
				index = 46491,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 36,
		index = 46489,
		retOffset = 32,
	},
	["CreateServerAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46484,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "ClientUID",
				index = 46488,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ClientIP",
				index = 46487,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
			{
				name = "ClientPort",
				index = 46486,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
			{
				name = "OutAuthBlobUID",
				isRet = true,
				index = 46485,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 32
			},
		},
		dataSize = 40,
		index = 46483,
		retOffset = 36,
	},
	["EndRemoteClientAuthSession"] = {
		fields = {
			{
				name = "ClientUID",
				index = 46482,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ClientIP",
				index = 46481,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 46480,
	},
	["EndLocalClientAuthSession"] = {
		fields = {
			{
				name = "ServerUID",
				index = 46479,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ServerIP",
				index = 46478,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
			{
				name = "ServerPort",
				index = 46477,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 32,
		index = 46476,
	},
	["VerifyClientAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46471,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "ClientUID",
				index = 46475,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ClientIP",
				index = 46474,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
			{
				name = "ClientPort",
				index = 46473,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
			{
				name = "AuthBlobUID",
				index = 46472,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 40,
		index = 46470,
		retOffset = 36,
	},
	["CreateClientAuthSession"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46464,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "ServerUID",
				index = 46469,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ServerIP",
				index = 46468,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
			{
				name = "ServerPort",
				index = 46467,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
			{
				name = "bSecure",
				index = 46466,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
			{
				name = "OutAuthBlobUID",
				isRet = true,
				index = 46465,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 36
			},
		},
		dataSize = 44,
		index = 46463,
		retOffset = 40,
	},
	["SendAuthRequestServer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46461,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "ServerUID",
				index = 46462,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 46460,
		retOffset = 24,
	},
	["SendAuthRequestClient"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46457,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "ClientConnection",
				index = 46459,
				className = "UPlayer",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "ClientUID",
				index = 46458,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 46456,
		retOffset = 28,
	},
	["GetGameSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46610,
				castTo = ffi.typeof("struct UOnlineGameSettings**"),
				offset = 8
			},
			{
				name = "SessionName",
				index = 46611,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46609,
		retOffset = 8,
	},
	["GetResolvedConnectString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46606,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "SessionName",
				index = 46608,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "ConnectInfo",
				isRet = true,
				index = 46607,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 8
			},
		},
		dataSize = 24,
		index = 46605,
		retOffset = 20,
	},
	["BindPlatformSpecificSessionToSearch"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46601,
				castTo = ffi.typeof("BOOL*"),
				offset = 88
			},
			{
				name = "SearchingPlayerNum",
				index = 46604,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SearchSettings",
				index = 46603,
				className = "UOnlineGameSearch",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "PlatformSpecificInfo",
				index = 46602,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 92,
		index = 46600,
		retOffset = 88,
	},
	["ReadPlatformSpecificSessionInfoBySessionName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46597,
				castTo = ffi.typeof("BOOL*"),
				offset = 88
			},
			{
				name = "SessionName",
				index = 46599,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 46598,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 8
			},
		},
		dataSize = 92,
		index = 46596,
		retOffset = 88,
	},
	["ReadPlatformSpecificSessionInfo"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46593,
				castTo = ffi.typeof("BOOL*"),
				offset = 88
			},
			{
				name = "DesiredGame",
				isRet = true,
				index = 46595,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 0
			},
			{
				name = "PlatformSpecificInfo",
				isRet = true,
				index = 46594,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 8
			},
		},
		dataSize = 92,
		index = 46592,
		retOffset = 88,
	},
	["QueryNonAdvertisedData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46589,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "StartAt",
				index = 46591,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NumberToQuery",
				index = 46590,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 46588,
		retOffset = 8,
	},
	["ClearUnregisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "UnregisterPlayerCompleteDelegate",
				index = 46587,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46586,
	},
	["AddUnregisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "UnregisterPlayerCompleteDelegate",
				index = 46585,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46584,
	},
	["OnUnregisterPlayerComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 46583,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46582,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "bWasSuccessful",
				index = 46581,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 36,
		index = 46521,
	},
	["UnregisterPlayer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46578,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "SessionName",
				index = 46580,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46579,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
		},
		dataSize = 36,
		index = 46577,
		retOffset = 32,
	},
	["ClearRegisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "RegisterPlayerCompleteDelegate",
				index = 46576,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46575,
	},
	["AddRegisterPlayerCompleteDelegate"] = {
		fields = {
			{
				name = "RegisterPlayerCompleteDelegate",
				index = 46574,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46573,
	},
	["OnRegisterPlayerComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 46572,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46571,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "bWasSuccessful",
				index = 46570,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 36,
		index = 46518,
	},
	["RegisterPlayer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46566,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "SessionName",
				index = 46569,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46568,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "bWasInvited",
				index = 46567,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
		},
		dataSize = 40,
		index = 46565,
		retOffset = 36,
	},
	["AcceptGameInvite"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46562,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 46564,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SessionName",
				index = 46563,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46561,
		retOffset = 12,
	},
	["OnGameInviteAccepted"] = {
		fields = {
			{
				name = "InviteResult",
				isRet = true,
				index = 46560,
				isOutParm = true,
				cType = ffi.typeof("struct FOnlineGameSearchResult"),
				castTo = ffi.typeof("struct FOnlineGameSearchResult*"),
				offset = 0
			},
		},
		dataSize = 8,
		index = 46515,
	},
	["ClearGameInviteAcceptedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46559,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "GameInviteAcceptedDelegate",
				index = 46558,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46557,
	},
	["AddGameInviteAcceptedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46556,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "GameInviteAcceptedDelegate",
				index = 46555,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46554,
	},
	["UpdateOnlineGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46550,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "SessionName",
				index = 46553,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "UpdatedGameSettings",
				index = 46552,
				className = "UOnlineGameSettings",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
			{
				name = "bShouldRefreshOnlineData",
				index = 46551,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 46549,
		retOffset = 16,
	},
	["GetCountryString"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47812,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47810,
		retOffset = 0,
	},
	["ClearCheckDownloadableContentListDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47814,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "CheckDownloadableContentListDelegate",
				index = 47816,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47811,
	},
	["AddCheckDownloadableContentListDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47819,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "CheckDownloadableContentListDelegate",
				index = 47820,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47813,
	},
	["CheckDownloadableContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47823,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47821,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 24,
		index = 47818,
		retOffset = 4,
	},
	["OnCheckDownloadableContentList"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47824,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bDownloadableContentListAvailable",
				index = 47825,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 47817,
	},
	["GetCriticalDownloadableContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47808,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47809,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DLCList",
				isRet = true,
				index = 47806,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FMarketplaceContent"),
				castTo = ffi.typeof("struct TArray_FMarketplaceContent*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 17,
		index = 47805,
		retOffset = 16,
	},
	["ReadCriticalDownloadableContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47802,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47804,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "CategoryMask",
				index = 47803,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47801,
		retOffset = 8,
	},
	["ClearReadCriticalDownloadableContentListComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47800,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadCriticalDownloadableContentListCompleteDelegate",
				index = 47799,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47798,
	},
	["AddReadCriticalDownloadableContentListComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47797,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadCriticalDownloadableContentListCompleteDelegate",
				index = 47796,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47795,
	},
	["OnReadCriticalDownloadableContentListComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47794,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47793,
	},
	["GetHiddenDownloadableContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47791,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47792,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DLCList",
				isRet = true,
				index = 47789,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FMarketplaceContent"),
				castTo = ffi.typeof("struct TArray_FMarketplaceContent*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 17,
		index = 47788,
		retOffset = 16,
	},
	["ReadHiddenDownloadableContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47786,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47787,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "OfferIds",
				index = 47784,
				type = ffi.typeof("struct TArray_int"),
				castTo = ffi.typeof("struct TArray_int*"),
				flags = 8,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47783,
		retOffset = 16,
	},
	["ClearReadHiddenDownloadableContentListComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47782,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadHiddenDownloadableContentListCompleteDelegate",
				index = 47781,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47780,
	},
	["AddReadHiddenDownloadableContentListComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47779,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadHiddenDownloadableContentListCompleteDelegate",
				index = 47778,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47777,
	},
	["OnReadHiddenDownloadableContentListComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47776,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47775,
	},
	["GetDownloadableContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47773,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47774,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DLCList",
				isRet = true,
				index = 47771,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FMarketplaceContent"),
				castTo = ffi.typeof("struct TArray_FMarketplaceContent*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 17,
		index = 47770,
		retOffset = 16,
	},
	["ReadDownloadableContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47767,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47769,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "CategoryMask",
				index = 47768,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47766,
		retOffset = 8,
	},
	["ClearReadDownloadableContentListComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47765,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadDownloadableContentListCompleteDelegate",
				index = 47764,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47763,
	},
	["AddReadDownloadableContentListComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47761,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadDownloadableContentListCompleteDelegate",
				index = 47760,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47759,
	},
	["OnReadDownloadableContentListComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47758,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46650,
	},
	["GetSaveGamesList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47756,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47757,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SaveGamesList",
				isRet = true,
				index = 47754,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FOnlineContent"),
				castTo = ffi.typeof("struct TArray_FOnlineContent*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 17,
		index = 47753,
		retOffset = 16,
	},
	["ReadSaveGamesList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47749,
				castTo = ffi.typeof("BOOL*"),
				offset = 20
			},
			{
				name = "LocalUserNum",
				index = 47752,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceID",
				index = 47751,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "SaveFilePrefix",
				index = 47750,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 8
			},
		},
		dataSize = 24,
		index = 47748,
		retOffset = 20,
	},
	["ClearReadSaveGamesComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47747,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadSaveGamesCompleteDelegate",
				index = 47746,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47745,
	},
	["AddReadSaveGamesComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47744,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadSaveGamesCompleteDelegate",
				index = 47743,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47742,
	},
	["OnReadSaveGamesComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47741,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47740,
	},
	["ClearSaveGames"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47738,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47739,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47737,
		retOffset = 4,
	},
	["DeleteSaveGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47732,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "LocalUserNum",
				index = 47736,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceID",
				index = 47735,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "FriendlyName",
				index = 47734,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 8
			},
			{
				name = "Filename",
				index = 47733,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 20
			},
		},
		dataSize = 36,
		index = 47731,
		retOffset = 32,
	},
	["ClearWriteSaveGameDataComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47730,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "WriteSaveGameDataCompleteDelegate",
				index = 47729,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47728,
	},
	["AddWriteSaveGameDataComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47727,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "WriteSaveGameDataCompleteDelegate",
				index = 47726,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47725,
	},
	["OnWriteSaveGameDataComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47724,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LocalUserNum",
				index = 47723,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 4
			},
			{
				name = "DeviceID",
				index = 47722,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "FriendlyName",
				index = 47721,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "Filename",
				index = 47720,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "SaveFileName",
				index = 47719,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 36
			},
		},
		dataSize = 48,
		index = 47718,
	},
	["WriteSaveGameData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47712,
				castTo = ffi.typeof("BOOL*"),
				offset = 56
			},
			{
				name = "LocalUserNum",
				index = 47717,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceID",
				index = 47716,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "FriendlyName",
				index = 47715,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 8
			},
			{
				name = "Filename",
				index = 47714,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 20
			},
			{
				name = "SaveFileName",
				index = 47713,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 32
			},
			{
				name = "SaveGameData",
				isRet = true,
				index = 47710,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 44
			},
		},
		dataSize = 60,
		index = 47709,
		retOffset = 56,
	},
	["ClearReadSaveGameDataComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47708,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadSaveGameDataCompleteDelegate",
				index = 47707,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47706,
	},
	["AddReadSaveGameDataComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47705,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadSaveGameDataCompleteDelegate",
				index = 47704,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47703,
	},
	["OnReadSaveGameDataComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47702,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LocalUserNum",
				index = 47701,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 4
			},
			{
				name = "DeviceID",
				index = 47700,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "FriendlyName",
				index = 47699,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "Filename",
				index = 47698,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "SaveFileName",
				index = 47697,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 36
			},
		},
		dataSize = 48,
		index = 47696,
	},
	["GetSaveGameData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47689,
				castTo = ffi.typeof("BOOL*"),
				offset = 60
			},
			{
				name = "LocalUserNum",
				index = 47695,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceID",
				index = 47694,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "FriendlyName",
				index = 47693,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 8
			},
			{
				name = "Filename",
				index = 47692,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 20
			},
			{
				name = "SaveFileName",
				index = 47691,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 32
			},
			{
				name = "bIsValid",
				isRet = true,
				index = 47690,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 44
			},
			{
				name = "SaveGameData",
				isRet = true,
				index = 47687,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 48
			},
		},
		dataSize = 64,
		index = 47686,
		retOffset = 60,
	},
	["ReadSaveGameData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47680,
				castTo = ffi.typeof("BOOL*"),
				offset = 44
			},
			{
				name = "LocalUserNum",
				index = 47685,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceID",
				index = 47684,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "FriendlyName",
				index = 47683,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 8
			},
			{
				name = "Filename",
				index = 47682,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 20
			},
			{
				name = "SaveFileName",
				index = 47681,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 32
			},
		},
		dataSize = 48,
		index = 47679,
		retOffset = 44,
	},
	["GetAvailableDownloadCounts"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47678,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewDownloads",
				isRet = true,
				index = 47677,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 4
			},
			{
				name = "TotalDownloads",
				isRet = true,
				index = 47676,
				isOutParm = true,
				castTo = ffi.typeof("int*"),
				offset = 8
			},
		},
		dataSize = 12,
		index = 47675,
	},
	["ClearQueryAvailableDownloadsComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47674,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "QueryDownloadsDelegate",
				index = 47673,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47672,
	},
	["AddQueryAvailableDownloadsComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47671,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "QueryDownloadsDelegate",
				index = 47670,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47669,
	},
	["OnQueryAvailableDownloadsComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47668,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47667,
	},
	["QueryAvailableDownloads"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47664,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47666,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "CategoryMask",
				index = 47665,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47663,
		retOffset = 8,
	},
	["ClearCrossTitleSaveGames"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47661,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47662,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47660,
		retOffset = 4,
	},
	["ClearReadCrossTitleSaveGameDataComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47659,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadSaveGameDataCompleteDelegate",
				index = 47658,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47657,
	},
	["AddReadCrossTitleSaveGameDataComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47656,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadSaveGameDataCompleteDelegate",
				index = 47655,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47654,
	},
	["OnReadCrossTitleSaveGameDataComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47653,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LocalUserNum",
				index = 47652,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 4
			},
			{
				name = "DeviceID",
				index = 47651,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "TitleId",
				index = 47650,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 12
			},
			{
				name = "FriendlyName",
				index = 47649,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
			{
				name = "Filename",
				index = 47648,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
			{
				name = "SaveFileName",
				index = 47647,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 40
			},
		},
		dataSize = 52,
		index = 47646,
	},
	["GetCrossTitleSaveGameData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47638,
				castTo = ffi.typeof("BOOL*"),
				offset = 64
			},
			{
				name = "LocalUserNum",
				index = 47645,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceID",
				index = 47644,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "TitleId",
				index = 47643,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "FriendlyName",
				index = 47642,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "Filename",
				index = 47641,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "SaveFileName",
				index = 47640,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 36
			},
			{
				name = "bIsValid",
				isRet = true,
				index = 47639,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 48
			},
			{
				name = "SaveGameData",
				isRet = true,
				index = 47636,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 52
			},
		},
		dataSize = 68,
		index = 47635,
		retOffset = 64,
	},
	["ReadCrossTitleSaveGameData"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47628,
				castTo = ffi.typeof("BOOL*"),
				offset = 48
			},
			{
				name = "LocalUserNum",
				index = 47634,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceID",
				index = 47633,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "TitleId",
				index = 47632,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "FriendlyName",
				index = 47631,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "Filename",
				index = 47630,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "SaveFileName",
				index = 47629,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 36
			},
		},
		dataSize = 52,
		index = 47627,
		retOffset = 48,
	},
	["ClearReadCrossTitleContentCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47626,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47625,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "ReadContentCompleteDelegate",
				index = 47624,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47623,
	},
	["AddReadCrossTitleContentCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47622,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47621,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "ReadContentCompleteDelegate",
				index = 47620,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47619,
	},
	["OnReadCrossTitleContentComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47618,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47617,
	},
	["GetCrossTitleContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47614,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47616,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47615,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "ContentList",
				isRet = true,
				index = 47612,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FOnlineCrossTitleContent"),
				castTo = ffi.typeof("struct TArray_FOnlineCrossTitleContent*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 17,
		index = 47611,
		retOffset = 16,
	},
	["ClearCrossTitleContentList"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47610,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47609,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
		},
		dataSize = 2,
		index = 47608,
	},
	["ReadCrossTitleContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47603,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 47607,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47606,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "TitleId",
				index = 47605,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "DeviceID",
				index = 47604,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 47602,
		retOffset = 12,
	},
	["GetContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47599,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47601,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47600,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "ContentList",
				isRet = true,
				index = 47597,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FOnlineContent"),
				castTo = ffi.typeof("struct TArray_FOnlineContent*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 17,
		index = 47596,
		retOffset = 16,
	},
	["ClearContentList"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47595,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47594,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
		},
		dataSize = 2,
		index = 47593,
	},
	["ReadContentList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47589,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47592,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47591,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "DeviceID",
				index = 47590,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47588,
		retOffset = 8,
	},
	["ClearReadContentComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47587,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47586,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "ReadContentCompleteDelegate",
				index = 47585,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47584,
	},
	["AddReadContentComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47583,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ContentType",
				index = 47582,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineContentType",
				flags = 32,
				offset = 1
			},
			{
				name = "ReadContentCompleteDelegate",
				index = 47581,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47580,
	},
	["OnReadContentComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47579,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47578,
	},
	["ClearContentChangeDelegate"] = {
		fields = {
			{
				name = "ContentDelegate",
				index = 47577,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
			{
				name = "LocalUserNum",
				index = 47576,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 13,
		index = 47575,
	},
	["AddContentChangeDelegate"] = {
		fields = {
			{
				name = "ContentDelegate",
				index = 47574,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
			{
				name = "LocalUserNum",
				index = 47573,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 13,
		index = 47572,
	},
	["ClearContentChangeDelegateEx"] = {
		fields = {
			{
				name = "ContentDelegate",
				index = 47571,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47570,
	},
	["AddContentChangeDelegateEx"] = {
		fields = {
			{
				name = "ContentDelegate",
				index = 47568,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47567,
	},
	["OnContentChange"] = {
		fields = {
		},
		dataSize = 0,
		index = 47566,
	},
	["ShowRedeemCodeUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47564,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47565,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47563,
		retOffset = 4,
	},
	["DumpSteamworksSessionState"] = {
		fields = {
		},
		dataSize = 0,
		index = 47562,
	},
	["DumpSessionState"] = {
		fields = {
		},
		dataSize = 0,
		index = 47561,
	},
	["SetVoiceVolume"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47558,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "VolType",
				index = 47560,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EVoiceVolumeType",
				flags = 32,
				offset = 0
			},
			{
				name = "VolumeParam",
				index = 47559,
				type = "number",
				castTo = ffi.typeof("float*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47557,
		retOffset = 8,
	},
	["ClearUnlockAvatarAwardCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47556,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "UnlockAvatarAwardCompleteDelegate",
				index = 47555,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47554,
	},
	["AddUnlockAvatarAwardCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47553,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "UnlockAvatarAwardCompleteDelegate",
				index = 47552,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47551,
	},
	["OnUnlockAvatarAwardComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47550,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47549,
	},
	["GetFriendJoinURL"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47545,
				castTo = ffi.typeof("BOOL*"),
				offset = 48
			},
			{
				name = "FriendUID",
				index = 47548,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ServerURL",
				isRet = true,
				index = 47547,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "ServerUID",
				isRet = true,
				index = 47546,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 36
			},
		},
		dataSize = 52,
		index = 47544,
		retOffset = 48,
	},
	["GetCommandlineJoinURL"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47540,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "bMarkAsJoined",
				index = 47543,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ServerURL",
				isRet = true,
				index = 47542,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "ServerUID",
				isRet = true,
				index = 47541,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 16
			},
		},
		dataSize = 32,
		index = 47539,
		retOffset = 28,
	},
	["Int64ToUniqueNetId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47536,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "UIDString",
				index = 47538,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "OutUID",
				isRet = true,
				index = 47537,
				isOutParm = true,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 12
			},
		},
		dataSize = 40,
		index = 47535,
		retOffset = 36,
	},
	["UniqueNetIdToInt64"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47533,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "Uid",
				isRet = true,
				index = 47534,
				isOutParm = true,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 0
			},
		},
		dataSize = 36,
		index = 47532,
		retOffset = 24,
	},
	["NotifyVOIPPlaybackFinished"] = {
		fields = {
			{
				name = "VOIPAudioComponent",
				index = 47531,
				className = "UAudioComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47530,
	},
	["OnVOIPPlaybackFinished"] = {
		fields = {
			{
				name = "AC",
				index = 47529,
				className = "UAudioComponent",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47528,
	},
	["ShowProfileUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47524,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "LocalUserNum",
				index = 47527,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SubURL",
				index = 47526,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "PlayerUID",
				index = 47525,
				optional = true,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 16
			},
		},
		dataSize = 44,
		index = 47523,
		retOffset = 40,
	},
	["UniqueNetIdToPlayerName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47521,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
			{
				name = "Uid",
				isRet = true,
				index = 47522,
				isOutParm = true,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 0
			},
		},
		dataSize = 36,
		index = 47520,
		retOffset = 24,
	},
	["DisplayAchievementProgress"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47516,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "AchievementId",
				index = 47519,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProgressCount",
				index = 47518,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "MaxProgress",
				index = 47517,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 47515,
		retOffset = 12,
	},
	["CreateLeaderboard"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47511,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LeaderboardName",
				index = 47514,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "SortType",
				index = 47513,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ELeaderboardSortType",
				flags = 32,
				offset = 12
			},
			{
				name = "DisplayFormat",
				index = 47512,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ELeaderboardFormat",
				flags = 32,
				offset = 13
			},
		},
		dataSize = 20,
		index = 47510,
		retOffset = 16,
	},
	["ResetStats"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47508,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "bResetAchievements",
				index = 47509,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47507,
		retOffset = 4,
	},
	["ShowCustomMessageUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47502,
				castTo = ffi.typeof("BOOL*"),
				offset = 52
			},
			{
				name = "LocalUserNum",
				index = 47506,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Recipients",
				isRet = true,
				index = 47500,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 4
			},
			{
				name = "MessageTitle",
				index = 47505,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
			{
				name = "NonEditableMessage",
				index = 47504,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
			{
				name = "EditableMessage",
				index = 47503,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 40
			},
		},
		dataSize = 56,
		index = 47499,
		retOffset = 52,
	},
	["ClearCrossTitleProfileSettings"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47498,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TitleId",
				index = 47497,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 47496,
	},
	["GetCrossTitleProfileSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47493,
				castTo = ffi.typeof("struct UOnlineProfileSettings**"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47495,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TitleId",
				index = 47494,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47492,
		retOffset = 8,
	},
	["ClearReadCrossTitleProfileSettingsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47491,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadProfileSettingsCompleteDelegate",
				index = 47490,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47489,
	},
	["AddReadCrossTitleProfileSettingsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47488,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadProfileSettingsCompleteDelegate",
				index = 47487,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47486,
	},
	["OnReadCrossTitleProfileSettingsComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47485,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TitleId",
				index = 47484,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bWasSuccessful",
				index = 47483,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 47482,
	},
	["ReadCrossTitleProfileSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47478,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 47481,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TitleId",
				index = 47480,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "ProfileSettings",
				index = 47479,
				className = "UOnlineProfileSettings",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 8
			},
		},
		dataSize = 16,
		index = 47477,
		retOffset = 12,
	},
	["UnlockAvatarAward"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47474,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47476,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "AvatarItemId",
				index = 47475,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47473,
		retOffset = 8,
	},
	["EnumerateFilesOnRemoteStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47471,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47470,
		retOffset = 0,
	},
	["DeleteFileFromRemoteStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47468,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Filename",
				index = 47469,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47467,
		retOffset = 12,
	},
	["ReadBytesFromRemoteStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47465,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Filename",
				index = 47466,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Data",
				isRet = true,
				index = 47463,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47462,
		retOffset = 24,
	},
	["ReadStringFromRemoteStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47459,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Filename",
				index = 47461,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Data",
				isRet = true,
				index = 47460,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47458,
		retOffset = 24,
	},
	["WriteBytesToRemoteStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47456,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Filename",
				index = 47457,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Data",
				index = 47454,
				type = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				flags = 8,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47453,
		retOffset = 24,
	},
	["WriteStringToRemoteStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47450,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Filename",
				index = 47452,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Data",
				index = 47451,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47449,
		retOffset = 24,
	},
	["GetSteamClanData"] = {
		fields = {
			{
				name = "Results",
				isRet = true,
				index = 47447,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FSteamPlayerClanData"),
				castTo = ffi.typeof("struct TArray_FSteamPlayerClanData*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47446,
	},
	["ClearGetNumberOfCurrentPlayersCompleteDelegate"] = {
		fields = {
			{
				name = "GetNumberOfCurrentPlayersCompleteDelegate",
				index = 47445,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47444,
	},
	["AddGetNumberOfCurrentPlayersCompleteDelegate"] = {
		fields = {
			{
				name = "GetNumberOfCurrentPlayersCompleteDelegate",
				index = 47442,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47441,
	},
	["OnGetNumberOfCurrentPlayersComplete"] = {
		fields = {
			{
				name = "TotalPlayers",
				index = 47440,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47439,
	},
	["GetNumberOfCurrentPlayers"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47438,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 47437,
		retOffset = 0,
	},
	["ReadOnlineAvatar"] = {
		fields = {
			{
				name = "PlayerNetId",
				index = 47436,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Size",
				index = 47435,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 24
			},
			{
				name = "ReadOnlineAvatarCompleteDelegate",
				index = 47434,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 28
			},
		},
		dataSize = 40,
		index = 47433,
	},
	["OnReadOnlineAvatarComplete"] = {
		fields = {
			{
				name = "PlayerNetId",
				index = 47432,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "Avatar",
				index = 47431,
				className = "UTexture2D",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 24
			},
		},
		dataSize = 28,
		index = 47430,
	},
	["ShowCustomPlayersUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47426,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "LocalUserNum",
				index = 47429,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Players",
				isRet = true,
				index = 47424,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 4
			},
			{
				name = "Title",
				index = 47428,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
			{
				name = "Description",
				index = 47427,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
		},
		dataSize = 44,
		index = 47423,
		retOffset = 40,
	},
	["GetAchievements"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47420,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 20
			},
			{
				name = "LocalUserNum",
				index = 47422,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Achievements",
				isRet = true,
				index = 47418,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FAchievementDetails"),
				castTo = ffi.typeof("struct TArray_FAchievementDetails*"),
				TArray = true,
				offset = 4
			},
			{
				name = "TitleId",
				index = 47421,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
		},
		dataSize = 21,
		index = 47417,
		retOffset = 20,
	},
	["ClearReadAchievementsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47416,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadAchievementsCompleteDelegate",
				index = 47415,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47414,
	},
	["AddReadAchievementsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47412,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadAchievementsCompleteDelegate",
				index = 47411,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47410,
	},
	["OnReadAchievementsComplete"] = {
		fields = {
			{
				name = "TitleId",
				index = 47409,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47408,
	},
	["ReadAchievements"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47403,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47407,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TitleId",
				index = 47406,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bShouldReadText",
				index = 47405,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
			{
				name = "bShouldReadImages",
				index = 47404,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 47402,
		retOffset = 16,
	},
	["ShowPlayersUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47400,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47401,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47399,
		retOffset = 4,
	},
	["ShowFriendsInviteUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47396,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47398,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 47397,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 47395,
		retOffset = 28,
	},
	["ShowFriendsUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47393,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47394,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47392,
		retOffset = 4,
	},
	["ClearProfileDataChangedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47391,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProfileDataChangedDelegate",
				index = 47390,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47389,
	},
	["AddProfileDataChangedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47387,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProfileDataChangedDelegate",
				index = 47386,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47385,
	},
	["OnProfileDataChanged"] = {
		fields = {
		},
		dataSize = 0,
		index = 47384,
	},
	["UnlockGamerPicture"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47381,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47383,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PictureId",
				index = 47382,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47380,
		retOffset = 8,
	},
	["ClearUnlockAchievementCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47379,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "UnlockAchievementCompleteDelegate",
				index = 47378,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47377,
	},
	["AddUnlockAchievementCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47375,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "UnlockAchievementCompleteDelegate",
				index = 47374,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47373,
	},
	["OnUnlockAchievementComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47372,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47371,
	},
	["UnlockAchievement"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47368,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47370,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "AchievementId",
				index = 47369,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47367,
		retOffset = 8,
	},
	["IsDeviceValid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47364,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "DeviceID",
				index = 47366,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SizeNeeded",
				index = 47365,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47363,
		retOffset = 8,
	},
	["GetDeviceSelectionResults"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47360,
				castTo = ffi.typeof("int*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47362,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceName",
				isRet = true,
				index = 47361,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47359,
		retOffset = 16,
	},
	["ClearDeviceSelectionDoneDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47358,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceDelegate",
				index = 47357,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47356,
	},
	["AddDeviceSelectionDoneDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47352,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "DeviceDelegate",
				index = 47351,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47350,
	},
	["OnDeviceSelectionComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47349,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47348,
	},
	["ShowDeviceSelectionUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47343,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47347,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SizeNeeded",
				index = 47346,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bForceShow",
				index = 47345,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
			{
				name = "bManageStorage",
				index = 47344,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 47342,
		retOffset = 16,
	},
	["ShowMembershipMarketplaceUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47340,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47341,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47339,
		retOffset = 4,
	},
	["ShowContentMarketplaceUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47335,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 47338,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "CategoryMask",
				index = 47337,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "OfferId",
				index = 47336,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 47334,
		retOffset = 12,
	},
	["ShowInviteUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47331,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47333,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InviteText",
				index = 47332,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47330,
		retOffset = 16,
	},
	["ShowAchievementsUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47328,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47329,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47327,
		retOffset = 4,
	},
	["ShowMessagesUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47325,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47326,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47324,
		retOffset = 4,
	},
	["ShowGamerCardUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47321,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47323,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 47322,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 47320,
		retOffset = 28,
	},
	["ShowFeedbackUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47317,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47319,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 47318,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 47316,
		retOffset = 28,
	},
	["DeleteMessage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47313,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47315,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "MessageIndex",
				index = 47314,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47312,
		retOffset = 8,
	},
	["UnmuteAll"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47310,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 47311,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47309,
		retOffset = 4,
	},
	["MuteAll"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47306,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 47308,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bAllowFriends",
				index = 47307,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 47305,
		retOffset = 8,
	},
	["CalcAggregateSkill"] = {
		fields = {
			{
				name = "Mus",
				index = 47299,
				type = ffi.typeof("struct TArray_FDouble"),
				castTo = ffi.typeof("struct TArray_FDouble*"),
				flags = 8,
				offset = 0
			},
			{
				name = "Sigmas",
				index = 47301,
				type = ffi.typeof("struct TArray_FDouble"),
				castTo = ffi.typeof("struct TArray_FDouble*"),
				flags = 8,
				offset = 12
			},
			{
				name = "OutAggregateMu",
				isRet = true,
				index = 47304,
				isOutParm = true,
				cType = ffi.typeof("struct FDouble"),
				castTo = ffi.typeof("struct FDouble*"),
				offset = 24
			},
			{
				name = "OutAggregateSigma",
				isRet = true,
				index = 47303,
				isOutParm = true,
				cType = ffi.typeof("struct FDouble"),
				castTo = ffi.typeof("struct FDouble*"),
				offset = 32
			},
		},
		dataSize = 40,
		index = 47298,
	},
	["RegisterStatGuid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47295,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "PlayerID",
				index = 47297,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ClientStatGuid",
				isRet = true,
				index = 47296,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 24
			},
		},
		dataSize = 40,
		index = 47294,
		retOffset = 36,
	},
	["GetClientStatGuid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47293,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47292,
		retOffset = 0,
	},
	["ClearRegisterHostStatGuidCompleteDelegateDelegate"] = {
		fields = {
			{
				name = "RegisterHostStatGuidCompleteDelegate",
				index = 47291,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47290,
	},
	["AddRegisterHostStatGuidCompleteDelegate"] = {
		fields = {
			{
				name = "RegisterHostStatGuidCompleteDelegate",
				index = 47288,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47287,
	},
	["OnRegisterHostStatGuidComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47286,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47285,
	},
	["RegisterHostStatGuid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47283,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "HostStatGuid",
				isRet = true,
				index = 47284,
				isOutParm = true,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47282,
		retOffset = 12,
	},
	["GetHostStatGuid"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47281,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47280,
		retOffset = 0,
	},
	["ClearFriendMessageReceivedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47279,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "MessageDelegate",
				index = 47278,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47277,
	},
	["AddFriendMessageReceivedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47276,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "MessageDelegate",
				index = 47275,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47274,
	},
	["OnFriendMessageReceived"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47273,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SendingPlayer",
				index = 47272,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "SendingNick",
				index = 47271,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
			{
				name = "Message",
				index = 47270,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 40
			},
		},
		dataSize = 52,
		index = 47269,
	},
	["GetFriendMessages"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47268,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FriendMessages",
				isRet = true,
				index = 47266,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FOnlineFriendMessage"),
				castTo = ffi.typeof("struct TArray_FOnlineFriendMessage*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47265,
	},
	["ClearJoinFriendGameCompleteDelegate"] = {
		fields = {
			{
				name = "JoinFriendGameCompleteDelegate",
				index = 47264,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47263,
	},
	["AddJoinFriendGameCompleteDelegate"] = {
		fields = {
			{
				name = "JoinFriendGameCompleteDelegate",
				index = 47261,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47260,
	},
	["OnJoinFriendGameComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47259,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47258,
	},
	["JoinFriendGame"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47255,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47257,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Friend",
				index = 47256,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 47254,
		retOffset = 28,
	},
	["ClearReceivedGameInviteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47253,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReceivedGameInviteDelegate",
				index = 47252,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47251,
	},
	["AddReceivedGameInviteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47249,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReceivedGameInviteDelegate",
				index = 47248,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47247,
	},
	["OnReceivedGameInvite"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47246,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InviterName",
				index = 47245,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47244,
	},
	["ClearSentGameInviteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47243,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SentGameInviteDelegate",
				index = 47242,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47241,
	},
	["AddSentGameInviteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47239,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SentGameInviteDelegate",
				index = 47238,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47237,
	},
	["OnSentGameInvite"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47236,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 47235,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 47234,
	},
	["SendGameInviteToFriends"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47231,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47233,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Friends",
				index = 47229,
				type = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				flags = 8,
				offset = 4
			},
			{
				name = "Text",
				index = 47232,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
		},
		dataSize = 32,
		index = 47228,
		retOffset = 28,
	},
	["SendGameInviteToFriend"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47224,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "LocalUserNum",
				index = 47227,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Friend",
				index = 47226,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "Text",
				index = 47225,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
		},
		dataSize = 44,
		index = 47223,
		retOffset = 40,
	},
	["SendMessageToFriend"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47219,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "LocalUserNum",
				index = 47222,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Friend",
				index = 47221,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "Message",
				index = 47220,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
		},
		dataSize = 44,
		index = 47218,
		retOffset = 40,
	},
	["ClearFriendInviteReceivedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47217,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InviteDelegate",
				index = 47216,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47215,
	},
	["AddFriendInviteReceivedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47213,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "InviteDelegate",
				index = 47212,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47211,
	},
	["OnFriendInviteReceived"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47210,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "RequestingPlayer",
				index = 47209,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "RequestingNick",
				index = 47208,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
			{
				name = "Message",
				index = 47207,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 40
			},
		},
		dataSize = 52,
		index = 47206,
	},
	["DenyFriendInvite"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47203,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47205,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "RequestingPlayer",
				index = 47204,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 47202,
		retOffset = 28,
	},
	["AcceptFriendInvite"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47199,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47201,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "RequestingPlayer",
				index = 47200,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 47198,
		retOffset = 28,
	},
	["RemoveFriend"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47195,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47197,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FormerFriend",
				index = 47196,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 47194,
		retOffset = 28,
	},
	["ClearAddFriendByNameCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47193,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FriendDelegate",
				index = 47192,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47191,
	},
	["AddAddFriendByNameCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47189,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FriendDelegate",
				index = 47188,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47187,
	},
	["OnAddFriendByNameComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47186,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47185,
	},
	["AddFriendByName"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47181,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 47184,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FriendName",
				index = 47183,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "Message",
				index = 47182,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
		},
		dataSize = 32,
		index = 47180,
		retOffset = 28,
	},
	["AddFriend"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47176,
				castTo = ffi.typeof("BOOL*"),
				offset = 40
			},
			{
				name = "LocalUserNum",
				index = 47179,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NewFriend",
				index = 47178,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "Message",
				index = 47177,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 28
			},
		},
		dataSize = 44,
		index = 47175,
		retOffset = 40,
	},
	["GetKeyboardInputResults"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47171,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "bWasCanceled",
				isRet = true,
				index = 47172,
				isOutParm = true,
				castTo = ffi.typeof("unsigned char*"),
				offset = 0
			},
		},
		dataSize = 16,
		index = 47170,
		retOffset = 4,
	},
	["ClearKeyboardInputDoneDelegate"] = {
		fields = {
			{
				name = "InputDelegate",
				index = 47169,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47168,
	},
	["AddKeyboardInputDoneDelegate"] = {
		fields = {
			{
				name = "InputDelegate",
				index = 47166,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47165,
	},
	["OnKeyboardInputComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47164,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47163,
	},
	["ShowKeyboardUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47155,
				castTo = ffi.typeof("BOOL*"),
				offset = 52
			},
			{
				name = "LocalUserNum",
				index = 47162,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "TitleText",
				index = 47161,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "DescriptionText",
				index = 47160,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
			{
				name = "KeyboardType",
				index = 47159,
				optional = true,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EShowKeyboardType",
				flags = 32,
				offset = 28
			},
			{
				name = "bShouldValidate",
				index = 47158,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 32
			},
			{
				name = "DefaultText",
				index = 47157,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 36
			},
			{
				name = "MaxResultLength",
				index = 47156,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 48
			},
		},
		dataSize = 56,
		index = 47154,
		retOffset = 52,
	},
	["SetOnlineStatus"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 47153,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "StatusId",
				index = 47152,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "LocalizedStringSettings",
				isRet = true,
				index = 47148,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FLocalizedStringSetting"),
				castTo = ffi.typeof("struct TArray_FLocalizedStringSetting*"),
				TArray = true,
				offset = 8
			},
			{
				name = "Properties",
				isRet = true,
				index = 47150,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FSettingsProperty"),
				castTo = ffi.typeof("struct TArray_FSettingsProperty*"),
				TArray = true,
				offset = 20
			},
		},
		dataSize = 32,
		index = 47147,
	},
	["GetLocalAccountNames"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47146,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Accounts",
				isRet = true,
				index = 47144,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FString"),
				castTo = ffi.typeof("struct TArray_FString*"),
				TArray = true,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47143,
		retOffset = 12,
	},
	["DeleteLocalAccount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47140,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "UserName",
				index = 47142,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Password",
				index = 47141,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47139,
		retOffset = 24,
	},
	["RenameLocalAccount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47135,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "NewUserName",
				index = 47138,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "OldUserName",
				index = 47137,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "Password",
				index = 47136,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
		},
		dataSize = 40,
		index = 47134,
		retOffset = 36,
	},
	["CreateLocalAccount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47131,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "UserName",
				index = 47133,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Password",
				index = 47132,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47130,
		retOffset = 24,
	},
	["ClearCreateOnlineAccountCompletedDelegate"] = {
		fields = {
			{
				name = "AccountCreateDelegate",
				index = 47129,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47128,
	},
	["AddCreateOnlineAccountCompletedDelegate"] = {
		fields = {
			{
				name = "AccountCreateDelegate",
				index = 47126,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47125,
	},
	["OnCreateOnlineAccountCompleted"] = {
		fields = {
			{
				name = "ErrorStatus",
				index = 47124,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineAccountCreateStatus",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 47123,
	},
	["CreateOnlineAccount"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47118,
				castTo = ffi.typeof("BOOL*"),
				offset = 48
			},
			{
				name = "UserName",
				index = 47122,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "Password",
				index = 47121,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 12
			},
			{
				name = "EmailAddress",
				index = 47120,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 24
			},
			{
				name = "ProductKey",
				index = 47119,
				optional = true,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 36
			},
		},
		dataSize = 52,
		index = 47117,
		retOffset = 48,
	},
	["ClearDownloadedFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47115,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "Filename",
				index = 47116,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47114,
		retOffset = 12,
	},
	["ClearDownloadedFiles"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47113,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 47112,
		retOffset = 0,
	},
	["GetTitleFileState"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47109,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 12
			},
			{
				name = "Filename",
				index = 47110,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 20,
		index = 47108,
		retOffset = 12,
	},
	["GetTitleFileContents"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47106,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "Filename",
				index = 47107,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
			{
				name = "FileContents",
				isRet = true,
				index = 47104,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_unsigned_char"),
				castTo = ffi.typeof("struct TArray_unsigned_char*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47103,
		retOffset = 24,
	},
	["ClearReadTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ReadTitleFileCompleteDelegate",
				index = 47102,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47101,
	},
	["AddReadTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ReadTitleFileCompleteDelegate",
				index = 47099,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47098,
	},
	["ReadTitleFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47095,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 47097,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FileToRead",
				index = 47096,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 20,
		index = 47094,
		retOffset = 16,
	},
	["OnReadTitleFileComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47093,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Filename",
				index = 47092,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
		},
		dataSize = 16,
		index = 47091,
	},
	["ClearShareTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ShareTitleFileCompleteDelegate",
				index = 47090,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47089,
	},
	["AddShareTitleFileCompleteDelegate"] = {
		fields = {
			{
				name = "ShareTitleFileCompleteDelegate",
				index = 47087,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47086,
	},
	["ShareTitleFile"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47084,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "FileToShare",
				index = 47085,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47083,
		retOffset = 12,
	},
	["OnShareTitleFileComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 47082,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Filename",
				index = 47081,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "UGCHandle",
				index = 47080,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
		},
		dataSize = 28,
		index = 47079,
	},
	["ClearStorageDeviceChangeDelegate"] = {
		fields = {
			{
				name = "StorageDeviceChangeDelegate",
				index = 47078,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47077,
	},
	["AddStorageDeviceChangeDelegate"] = {
		fields = {
			{
				name = "StorageDeviceChangeDelegate",
				index = 47076,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47075,
	},
	["OnStorageDeviceChange"] = {
		fields = {
		},
		dataSize = 0,
		index = 47074,
	},
	["GetLocale"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47073,
				castTo = ffi.typeof("int*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 47072,
		retOffset = 0,
	},
	["GetNATType"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47071,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENATType",
				offset = 0
			},
		},
		dataSize = 1,
		index = 47070,
		retOffset = 0,
	},
	["ClearConnectionStatusChangeDelegate"] = {
		fields = {
			{
				name = "ConnectionStatusDelegate",
				index = 47069,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47068,
	},
	["AddConnectionStatusChangeDelegate"] = {
		fields = {
			{
				name = "ConnectionStatusDelegate",
				index = 47066,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47065,
	},
	["OnConnectionStatusChange"] = {
		fields = {
			{
				name = "ConnectionStatus",
				index = 47064,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineServerConnectionStatus",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 47063,
	},
	["IsControllerConnected"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47061,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "ControllerId",
				index = 47062,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 47060,
		retOffset = 4,
	},
	["ClearControllerChangeDelegate"] = {
		fields = {
			{
				name = "ControllerChangeDelegate",
				index = 47059,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47058,
	},
	["AddControllerChangeDelegate"] = {
		fields = {
			{
				name = "ControllerChangeDelegate",
				index = 47056,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47055,
	},
	["OnControllerChange"] = {
		fields = {
			{
				name = "ControllerId",
				index = 47054,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bIsConnected",
				index = 47053,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 47052,
	},
	["SetNetworkNotificationPosition"] = {
		fields = {
			{
				name = "NewPos",
				index = 47051,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENetworkNotificationPosition",
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 47050,
	},
	["GetNetworkNotificationPosition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47048,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ENetworkNotificationPosition",
				offset = 0
			},
		},
		dataSize = 1,
		index = 47047,
		retOffset = 0,
	},
	["ClearExternalUIChangeDelegate"] = {
		fields = {
			{
				name = "ExternalUIDelegate",
				index = 47046,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47045,
	},
	["AddExternalUIChangeDelegate"] = {
		fields = {
			{
				name = "ExternalUIDelegate",
				index = 47043,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47042,
	},
	["OnExternalUIChange"] = {
		fields = {
			{
				name = "bIsOpening",
				index = 47041,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47040,
	},
	["ClearLinkStatusChangeDelegate"] = {
		fields = {
			{
				name = "LinkStatusDelegate",
				index = 47039,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47038,
	},
	["AddLinkStatusChangeDelegate"] = {
		fields = {
			{
				name = "LinkStatusDelegate",
				index = 47036,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47035,
	},
	["OnLinkStatusChange"] = {
		fields = {
			{
				name = "bIsConnected",
				index = 47034,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47033,
	},
	["HasLinkConnection"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47032,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 47031,
		retOffset = 0,
	},
	["eventGetPlayerUniqueNetIdFromIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47029,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 4
			},
			{
				name = "UserIndex",
				index = 47030,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 52,
		index = 47027,
		retOffset = 4,
	},
	["eventGetPlayerNicknameFromIndex"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47025,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "UserIndex",
				index = 47026,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47024,
		retOffset = 4,
	},
	["WriteOnlinePlayerScores"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47021,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "SessionName",
				index = 47023,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "LeaderboardId",
				index = 47022,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
			{
				name = "PlayerScores",
				isRet = true,
				index = 47019,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FOnlinePlayerScore"),
				castTo = ffi.typeof("struct TArray_FOnlinePlayerScore*"),
				TArray = true,
				offset = 12
			},
		},
		dataSize = 28,
		index = 47018,
		retOffset = 24,
	},
	["ClearFlushOnlineStatsCompleteDelegate"] = {
		fields = {
			{
				name = "FlushOnlineStatsCompleteDelegate",
				index = 47017,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 47016,
	},
	["AddFlushOnlineStatsCompleteDelegate"] = {
		fields = {
			{
				name = "FlushOnlineStatsCompleteDelegate",
				index = 47014,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47013,
	},
	["OnFlushOnlineStatsComplete"] = {
		fields = {
			{
				name = "SessionName",
				index = 47012,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 47011,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 12,
		index = 47010,
	},
	["FlushOnlineStats"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47008,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "SessionName",
				index = 47009,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
		},
		dataSize = 12,
		index = 47007,
		retOffset = 8,
	},
	["WriteOnlineStats"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 47003,
				castTo = ffi.typeof("BOOL*"),
				offset = 36
			},
			{
				name = "SessionName",
				index = 47006,
				type = ffi.typeof("struct FName"),
				castTo = ffi.typeof("struct FName*"),
				flags = 2,
				offset = 0
			},
			{
				name = "Player",
				index = 47005,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 8
			},
			{
				name = "StatsWrite",
				index = 47004,
				className = "UOnlineStatsWrite",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 32
			},
		},
		dataSize = 40,
		index = 47002,
		retOffset = 36,
	},
	["FreeStats"] = {
		fields = {
			{
				name = "StatsRead",
				index = 47001,
				className = "UOnlineStatsRead",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
		},
		dataSize = 4,
		index = 47000,
	},
	["ClearReadOnlineStatsCompleteDelegate"] = {
		fields = {
			{
				name = "ReadOnlineStatsCompleteDelegate",
				index = 46999,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46998,
	},
	["AddReadOnlineStatsCompleteDelegate"] = {
		fields = {
			{
				name = "ReadOnlineStatsCompleteDelegate",
				index = 46996,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46995,
	},
	["OnReadOnlineStatsComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 46994,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46993,
	},
	["ReadOnlineStatsByRankAroundPlayer"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46989,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 46992,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "StatsRead",
				index = 46991,
				className = "UOnlineStatsRead",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "NumRows",
				index = 46990,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 46988,
		retOffset = 12,
	},
	["ReadOnlineStatsByRank"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46984,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "StatsRead",
				index = 46987,
				className = "UOnlineStatsRead",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 0
			},
			{
				name = "StartIndex",
				index = 46986,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "NumToRead",
				index = 46985,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 46983,
		retOffset = 12,
	},
	["ReadOnlineStatsForFriends"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46980,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 46982,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "StatsRead",
				index = 46981,
				className = "UOnlineStatsRead",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 46979,
		retOffset = 8,
	},
	["ReadOnlineStats"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46977,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "Players",
				isRet = true,
				index = 46975,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FUniqueNetId"),
				castTo = ffi.typeof("struct TArray_FUniqueNetId*"),
				TArray = true,
				offset = 0
			},
			{
				name = "StatsRead",
				index = 46978,
				className = "UOnlineStatsRead",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 12
			},
		},
		dataSize = 20,
		index = 46974,
		retOffset = 16,
	},
	["SetSpeechRecognitionObject"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46971,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 46973,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "SpeechRecogObj",
				index = 46972,
				className = "USpeechRecognition",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 46970,
		retOffset = 8,
	},
	["SelectVocabulary"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46967,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 46969,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "VocabularyId",
				index = 46968,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 12,
		index = 46966,
		retOffset = 8,
	},
	["ClearRecognitionCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46965,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "RecognitionDelegate",
				index = 46964,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46963,
	},
	["AddRecognitionCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46961,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "RecognitionDelegate",
				index = 46960,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46959,
	},
	["OnRecognitionComplete"] = {
		fields = {
		},
		dataSize = 0,
		index = 46958,
	},
	["GetRecognitionResults"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46956,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 46957,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Words",
				isRet = true,
				index = 46954,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FSpeechRecognizedWord"),
				castTo = ffi.typeof("struct TArray_FSpeechRecognizedWord*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46953,
		retOffset = 16,
	},
	["StopSpeechRecognition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46951,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46952,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46950,
		retOffset = 4,
	},
	["StartSpeechRecognition"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46948,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46949,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46947,
		retOffset = 4,
	},
	["StopNetworkedVoice"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46946,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 46945,
	},
	["StartNetworkedVoice"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46944,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 46943,
	},
	["ClearPlayerTalkingDelegate"] = {
		fields = {
			{
				name = "TalkerDelegate",
				index = 46942,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46941,
	},
	["AddPlayerTalkingDelegate"] = {
		fields = {
			{
				name = "TalkerDelegate",
				index = 46939,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46938,
	},
	["OnPlayerTalkingStateChange"] = {
		fields = {
			{
				name = "Player",
				index = 46937,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "bIsTalking",
				index = 46936,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 46935,
	},
	["UnmuteRemoteTalker"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46931,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "LocalUserNum",
				index = 46934,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46933,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "bIsSystemWide",
				index = 46932,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 36,
		index = 46930,
		retOffset = 32,
	},
	["MuteRemoteTalker"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46926,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "LocalUserNum",
				index = 46929,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46928,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "bIsSystemWide",
				index = 46927,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 36,
		index = 46925,
		retOffset = 32,
	},
	["SetRemoteTalkerPriority"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46921,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "LocalUserNum",
				index = 46924,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46923,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "Priority",
				index = 46922,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 36,
		index = 46920,
		retOffset = 32,
	},
	["IsHeadsetPresent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46918,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46919,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46917,
		retOffset = 4,
	},
	["IsRemotePlayerTalking"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46915,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "PlayerID",
				index = 46916,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 46914,
		retOffset = 24,
	},
	["IsLocalPlayerTalking"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46912,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46913,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46911,
		retOffset = 4,
	},
	["UnregisterRemoteTalker"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46909,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "PlayerID",
				index = 46910,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 46908,
		retOffset = 24,
	},
	["RegisterRemoteTalker"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46906,
				castTo = ffi.typeof("BOOL*"),
				offset = 24
			},
			{
				name = "PlayerID",
				index = 46907,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
		},
		dataSize = 28,
		index = 46905,
		retOffset = 24,
	},
	["UnregisterLocalTalker"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46903,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46904,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46902,
		retOffset = 4,
	},
	["RegisterLocalTalker"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46900,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46901,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46899,
		retOffset = 4,
	},
	["GetFriendsList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46895,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineEnumerationReadState",
				offset = 24
			},
			{
				name = "LocalUserNum",
				index = 46898,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Friends",
				isRet = true,
				index = 46893,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FOnlineFriend"),
				castTo = ffi.typeof("struct TArray_FOnlineFriend*"),
				TArray = true,
				offset = 4
			},
			{
				name = "Count",
				index = 46897,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 16
			},
			{
				name = "StartingAt",
				index = 46896,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 20
			},
		},
		dataSize = 25,
		index = 46892,
		retOffset = 24,
	},
	["ClearReadFriendsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46891,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadFriendsCompleteDelegate",
				index = 46890,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46889,
	},
	["AddReadFriendsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46887,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadFriendsCompleteDelegate",
				index = 46886,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46885,
	},
	["OnReadFriendsComplete"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 46884,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46883,
	},
	["ReadFriendsList"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46879,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 46882,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Count",
				index = 46881,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "StartingAt",
				index = 46880,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 46878,
		retOffset = 12,
	},
	["ClearWritePlayerStorageCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46877,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "WritePlayerStorageCompleteDelegate",
				index = 46876,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46875,
	},
	["AddWritePlayerStorageCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46873,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "WritePlayerStorageCompleteDelegate",
				index = 46872,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46871,
	},
	["OnWritePlayerStorageComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46870,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 46869,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 46868,
	},
	["WritePlayerStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46864,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 46867,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerStorage",
				index = 46866,
				className = "UOnlinePlayerStorage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "DeviceID",
				index = 46865,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 46863,
		retOffset = 12,
	},
	["GetPlayerStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46860,
				castTo = ffi.typeof("struct UOnlinePlayerStorage**"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46861,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46859,
		retOffset = 4,
	},
	["ClearReadPlayerStorageForNetIdCompleteDelegate"] = {
		fields = {
			{
				name = "NetId",
				index = 46858,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ReadPlayerStorageForNetIdCompleteDelegate",
				index = 46857,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 24
			},
		},
		dataSize = 40,
		index = 46856,
	},
	["AddReadPlayerStorageForNetIdCompleteDelegate"] = {
		fields = {
			{
				name = "NetId",
				index = 46854,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "ReadPlayerStorageForNetIdCompleteDelegate",
				index = 46853,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 24
			},
		},
		dataSize = 36,
		index = 46852,
	},
	["OnReadPlayerStorageForNetIdComplete"] = {
		fields = {
			{
				name = "NetId",
				index = 46851,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 46850,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 24
			},
		},
		dataSize = 28,
		index = 46849,
	},
	["ReadPlayerStorageForNetId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46845,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "LocalUserNum",
				index = 46848,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NetId",
				index = 46847,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
			{
				name = "PlayerStorage",
				index = 46846,
				className = "UOnlinePlayerStorage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 28
			},
		},
		dataSize = 36,
		index = 46844,
		retOffset = 32,
	},
	["ClearReadPlayerStorageCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46843,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadPlayerStorageCompleteDelegate",
				index = 46842,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46841,
	},
	["AddReadPlayerStorageCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46839,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadPlayerStorageCompleteDelegate",
				index = 46838,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46837,
	},
	["OnReadPlayerStorageComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46836,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 46835,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 46834,
	},
	["ReadPlayerStorage"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46830,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "LocalUserNum",
				index = 46833,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerStorage",
				index = 46832,
				className = "UOnlinePlayerStorage",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
			{
				name = "DeviceID",
				index = 46831,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 46829,
		retOffset = 12,
	},
	["ClearWriteProfileSettingsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46828,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "WriteProfileSettingsCompleteDelegate",
				index = 46827,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46826,
	},
	["AddWriteProfileSettingsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46824,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "WriteProfileSettingsCompleteDelegate",
				index = 46823,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46822,
	},
	["OnWriteProfileSettingsComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46821,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 46820,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 46819,
	},
	["WriteProfileSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46816,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 46818,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProfileSettings",
				index = 46817,
				className = "UOnlineProfileSettings",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 46815,
		retOffset = 8,
	},
	["GetProfileSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46812,
				castTo = ffi.typeof("struct UOnlineProfileSettings**"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46813,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46811,
		retOffset = 4,
	},
	["ClearReadProfileSettingsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46810,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadProfileSettingsCompleteDelegate",
				index = 46809,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46808,
	},
	["AddReadProfileSettingsCompleteDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46804,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ReadProfileSettingsCompleteDelegate",
				index = 46803,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46802,
	},
	["OnReadProfileSettingsComplete"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46801,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "bWasSuccessful",
				index = 46800,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 4
			},
		},
		dataSize = 8,
		index = 46799,
	},
	["ReadProfileSettings"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46796,
				castTo = ffi.typeof("BOOL*"),
				offset = 8
			},
			{
				name = "LocalUserNum",
				index = 46798,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ProfileSettings",
				index = 46797,
				className = "UOnlineProfileSettings",
				castTo = ffi.typeof("struct UObject**"),
				flags = 16,
				offset = 4
			},
		},
		dataSize = 12,
		index = 46795,
		retOffset = 8,
	},
	["ClearFriendsChangeDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46794,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FriendsDelegate",
				index = 46793,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46792,
	},
	["AddFriendsChangeDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46790,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "FriendsDelegate",
				index = 46789,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46788,
	},
	["ClearMutingChangeDelegate"] = {
		fields = {
			{
				name = "MutingDelegate",
				index = 46787,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46786,
	},
	["AddMutingChangeDelegate"] = {
		fields = {
			{
				name = "MutingDelegate",
				index = 46784,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46783,
	},
	["ClearLoginCancelledDelegate"] = {
		fields = {
			{
				name = "CancelledDelegate",
				index = 46782,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46781,
	},
	["AddLoginCancelledDelegate"] = {
		fields = {
			{
				name = "CancelledDelegate",
				index = 46780,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46779,
	},
	["ClearLoginStatusChangeDelegate"] = {
		fields = {
			{
				name = "LoginStatusDelegate",
				index = 46778,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
			{
				name = "LocalUserNum",
				index = 46777,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 20,
		index = 46776,
	},
	["AddLoginStatusChangeDelegate"] = {
		fields = {
			{
				name = "LoginStatusDelegate",
				index = 46773,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
			{
				name = "LocalUserNum",
				index = 46772,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 12
			},
		},
		dataSize = 13,
		index = 46771,
	},
	["OnLoginStatusChange"] = {
		fields = {
			{
				name = "NewStatus",
				index = 46770,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ELoginStatus",
				flags = 32,
				offset = 0
			},
			{
				name = "NewId",
				index = 46769,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 28,
		index = 46768,
	},
	["ClearLoginChangeDelegate"] = {
		fields = {
			{
				name = "LoginDelegate",
				index = 46767,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46766,
	},
	["AddLoginChangeDelegate"] = {
		fields = {
			{
				name = "LoginDelegate",
				index = 46764,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 0
			},
		},
		dataSize = 12,
		index = 46763,
	},
	["IsMuted"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46760,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 46762,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46761,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 46759,
		retOffset = 28,
	},
	["AreAnyFriends"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46757,
				castTo = ffi.typeof("BOOL*"),
				offset = 16
			},
			{
				name = "LocalUserNum",
				index = 46758,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "Query",
				isRet = true,
				index = 46755,
				isOutParm = true,
				cType = ffi.typeof("struct TArray_FFriendsQuery"),
				castTo = ffi.typeof("struct TArray_FFriendsQuery*"),
				TArray = true,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46754,
		retOffset = 16,
	},
	["IsFriend"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46751,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 46753,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				index = 46752,
				type = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				flags = 64,
				offset = 4
			},
		},
		dataSize = 32,
		index = 46750,
		retOffset = 28,
	},
	["CanShowPresenceInformation"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46748,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFeaturePrivilegeLevel",
				offset = 1
			},
			{
				name = "LocalUserNum",
				index = 46749,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 2,
		index = 46747,
		retOffset = 1,
	},
	["CanViewPlayerProfiles"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46745,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFeaturePrivilegeLevel",
				offset = 1
			},
			{
				name = "LocalUserNum",
				index = 46746,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 2,
		index = 46744,
		retOffset = 1,
	},
	["CanPurchaseContent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46742,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFeaturePrivilegeLevel",
				offset = 1
			},
			{
				name = "LocalUserNum",
				index = 46743,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 2,
		index = 46741,
		retOffset = 1,
	},
	["CanDownloadUserContent"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46739,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFeaturePrivilegeLevel",
				offset = 1
			},
			{
				name = "LocalUserNum",
				index = 46740,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 2,
		index = 46738,
		retOffset = 1,
	},
	["CanCommunicate"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46736,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFeaturePrivilegeLevel",
				offset = 1
			},
			{
				name = "LocalUserNum",
				index = 46737,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 2,
		index = 46735,
		retOffset = 1,
	},
	["CanPlayOnline"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46733,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EFeaturePrivilegeLevel",
				offset = 1
			},
			{
				name = "LocalUserNum",
				index = 46734,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 2,
		index = 46732,
		retOffset = 1,
	},
	["ClearGetUserAgeGroupDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46731,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "GetUserAgeGroupDelegate",
				index = 46730,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46729,
	},
	["AddGetUserAgeGroupDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46728,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "GetUserAgeGroupDelegate",
				index = 46727,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46726,
	},
	["GetUserAgeGroup"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46723,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46724,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 28,
		index = 46720,
		retOffset = 4,
	},
	["OnGetUserAgeGroup"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46719,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "UserAgeGroup",
				index = 46718,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EUserAgeGroup",
				flags = 32,
				offset = 1
			},
		},
		dataSize = 2,
		index = 46717,
	},
	["GetPlayerNickname"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46714,
				cType = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				TArray = true,
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46715,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 16,
		index = 46713,
		retOffset = 4,
	},
	["GetUniquePlayerId"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46709,
				castTo = ffi.typeof("BOOL*"),
				offset = 28
			},
			{
				name = "LocalUserNum",
				index = 46711,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "PlayerID",
				isRet = true,
				index = 46710,
				isOutParm = true,
				cType = ffi.typeof("struct FUniqueNetId"),
				castTo = ffi.typeof("struct FUniqueNetId*"),
				offset = 4
			},
		},
		dataSize = 32,
		index = 46708,
		retOffset = 28,
	},
	["IsLocalLogin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46706,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46707,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46705,
		retOffset = 4,
	},
	["IsGuestLogin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46703,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46704,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46702,
		retOffset = 4,
	},
	["GetLoginStatus"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46700,
				castTo = ffi.typeof("unsigned char*"),
				enumName = "ELoginStatus",
				offset = 1
			},
			{
				name = "LocalUserNum",
				index = 46701,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 2,
		index = 46699,
		retOffset = 1,
	},
	["ClearLogoutCompletedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46698,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LogoutDelegate",
				index = 46697,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46696,
	},
	["AddLogoutCompletedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46694,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LogoutDelegate",
				index = 46693,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46692,
	},
	["OnLogoutCompleted"] = {
		fields = {
			{
				name = "bWasSuccessful",
				index = 46691,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 4,
		index = 46690,
	},
	["Logout"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46688,
				castTo = ffi.typeof("BOOL*"),
				offset = 4
			},
			{
				name = "LocalUserNum",
				index = 46689,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 8,
		index = 46687,
		retOffset = 4,
	},
	["ClearLoginFailedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46686,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LoginFailedDelegate",
				index = 46685,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 20,
		index = 46684,
	},
	["AddLoginFailedDelegate"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46682,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LoginFailedDelegate",
				index = 46681,
				type = ffi.typeof("struct FScriptDelegate"),
				castTo = ffi.typeof("struct FScriptDelegate*"),
				flags = 0,
				offset = 4
			},
		},
		dataSize = 16,
		index = 46680,
	},
	["OnLoginFailed"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46679,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "ErrorCode",
				index = 46678,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				enumName = "EOnlineServerConnectionStatus",
				flags = 32,
				offset = 1
			},
		},
		dataSize = 2,
		index = 46677,
	},
	["AutoLogin"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46676,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46675,
		retOffset = 0,
	},
	["Login"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46670,
				castTo = ffi.typeof("BOOL*"),
				offset = 32
			},
			{
				name = "LocalUserNum",
				index = 46674,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
			{
				name = "LoginName",
				index = 46673,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 4
			},
			{
				name = "Password",
				index = 46672,
				type = ffi.typeof("struct FString"),
				castTo = ffi.typeof("struct FString*"),
				flags = 4,
				offset = 16
			},
			{
				name = "bWantsLocalOnly",
				index = 46671,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 28
			},
		},
		dataSize = 36,
		index = 46669,
		retOffset = 32,
	},
	["ShowLoginUI"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46665,
				castTo = ffi.typeof("BOOL*"),
				offset = 12
			},
			{
				name = "bShowOnlineOnly",
				index = 46668,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 0
			},
			{
				name = "NumLoginOverride",
				index = 46667,
				optional = true,
				type = "number",
				castTo = ffi.typeof("int*"),
				flags = 32,
				offset = 4
			},
			{
				name = "bAddUser",
				index = 46666,
				optional = true,
				type = "boolean",
				castTo = ffi.typeof("BOOL*"),
				flags = 32,
				offset = 8
			},
		},
		dataSize = 16,
		index = 46664,
		retOffset = 12,
	},
	["OnFriendsChange"] = {
		fields = {
		},
		dataSize = 0,
		index = 46663,
	},
	["OnMutingChange"] = {
		fields = {
		},
		dataSize = 0,
		index = 46662,
	},
	["OnLoginCancelled"] = {
		fields = {
		},
		dataSize = 0,
		index = 46661,
	},
	["OnLoginChange"] = {
		fields = {
			{
				name = "LocalUserNum",
				index = 46660,
				type = "number",
				castTo = ffi.typeof("unsigned char*"),
				flags = 32,
				offset = 0
			},
		},
		dataSize = 1,
		index = 46659,
	},
	["eventExit"] = {
		fields = {
		},
		dataSize = 0,
		index = 46658,
	},
	["eventInit"] = {
		fields = {
			{
				name = "ReturnValue",
				isRet = true,
				index = 46657,
				castTo = ffi.typeof("BOOL*"),
				offset = 0
			},
		},
		dataSize = 4,
		index = 46656,
		retOffset = 0,
	},
