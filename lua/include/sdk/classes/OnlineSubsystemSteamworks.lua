
local ffi = require("ffi")

ffi.cdef[[

// 0x198 
struct UOnlineAuthInterfaceSteamworks_Data {
	// Last Offset: 0x194
	struct FPointer AuthCallbackBridge; // 0x194 (0x4)
};

struct UOnlineAuthInterfaceSteamworks {
	struct UObject_Data UObject;
	struct UOnlineAuthInterfaceBaseImpl_Data UOnlineAuthInterfaceBaseImpl;
	struct UOnlineAuthInterfaceImpl_Data UOnlineAuthInterfaceImpl;
	struct UOnlineAuthInterfaceSteamworks_Data UOnlineAuthInterfaceSteamworks;
};

// 0x258 
struct UOnlineGameInterfaceSteamworks_Data {
	// Last Offset: 0x1C4
	struct TArray_FServerQueryToRulesResponseMapping QueryToRulesResponseMap; // 0x1C4 (0xC)
	struct TArray_FServerQueryToPingResponseMapping QueryToPingResponseMap; // 0x1D0 (0xC)
	struct FPointer ServerListResponse; // 0x1DC (0x4)
	unsigned char CurrentMatchmakingType; // 0x1E0 (0x1) (Enum = ESteamMatchmakingType)
	const unsigned char Unknown1[0x3]; // 0x1E1 (0x3) > LAST OFFSET
	struct FPointer CurrentMatchmakingQuery; // 0x1E4 (0x4)
	struct TArray_FScriptDelegate GameInviteAcceptedDelegates; // 0x1E8 (0xC)
	struct UOnlineGameSearch* InviteGameSearch; // 0x1F4 (0x4)
	struct TArray_FScriptDelegate RegisterPlayerCompleteDelegates; // 0x1F8 (0xC)
	struct TArray_FScriptDelegate UnregisterPlayerCompleteDelegates; // 0x204 (0xC)
	struct TArray_FClientFilterORClause ActiveClientsideFilters; // 0x210 (0xC)
	BOOL bFilterEngineBuild :1 ; // 0x21C (0x4)
	const unsigned long: 0;
	struct TArray_FFilterKeyToSteamKeyMapping FilterKeyToSteamKeyMap; // 0x220 (0xC)
	struct FName ServerSessionName; // 0x22C (0x8)
	struct FScriptDelegate __OnGameInviteAccepted__Delegate; // 0x234 (0xC)
	struct FScriptDelegate __OnRegisterPlayerComplete__Delegate; // 0x240 (0xC)
	struct FScriptDelegate __OnUnregisterPlayerComplete__Delegate; // 0x24C (0xC)
};

struct UOnlineGameInterfaceSteamworks {
	struct UObject_Data UObject;
	struct UOnlineGameInterfaceImpl_Data UOnlineGameInterfaceImpl;
	struct UOnlineGameInterfaceSteamworks_Data UOnlineGameInterfaceSteamworks;
};

// 0x3C 
struct UOnlineLobbyInterfaceSteamworks_Data {
	// Last Offset: 0x3C
};

struct UOnlineLobbyInterfaceSteamworks {
	struct UObject_Data UObject;
	struct UOnlineLobbyInterfaceSteamworks_Data UOnlineLobbyInterfaceSteamworks;
};

// 0x760 
struct UOnlineSubsystemSteamworks_Data {
	// Last Offset: 0xF8
	struct FPointer CallbackBridge; // 0xF8 (0x4)
	struct TArray_FPointer AsyncTasks; // 0xFC (0xC)
	BOOL bStoringAchievement :1 ; // 0x108 (0x4)
	BOOL bGSStatsStoresSuccess :1 ; // 0x108 (0x4)
	BOOL bNeedsKeyboardTicking :1 ; // 0x108 (0x4)
	BOOL bLastHasConnection :1 ; // 0x108 (0x4)
	BOOL bHasSteamworksAccount :1 ; // 0x108 (0x4)
	BOOL bShouldUseMcp :1 ; // 0x108 (0x4)
	BOOL bIncrementStatValues :1 ; // 0x108 (0x4)
	BOOL bEnableSteamQoS :1 ; // 0x108 (0x4)
	const unsigned long: 0;
	int TotalGSStatsStoresPending; // 0x10C (0x4)
	unsigned char UserStatsReceivedState; // 0x110 (0x1) (Enum = EOnlineEnumerationReadState)
	unsigned char LoggedInStatus; // 0x111 (0x1) (Enum = ELoginStatus)
	unsigned char bWasKeyboardInputCanceled; // 0x112 (0x1)
	unsigned char CurrentNotificationPosition; // 0x113 (0x1) (Enum = ENetworkNotificationPosition)
	struct UOnlineGameInterfaceSteamworks* CachedGameInt; // 0x114 (0x4)
	struct FString LocalProfileName; // 0x118 (0xC)
	struct FString LoggedInPlayerName; // 0x124 (0xC)
	struct FUniqueNetId LoggedInPlayerId; // 0x130 (0x18)
	int LoggedInPlayerNum; // 0x148 (0x4)
	struct FString ProfileDataDirectory; // 0x14C (0xC)
	struct FString ProfileDataExtension; // 0x158 (0xC)
	struct TArray_FScriptDelegate WriteProfileSettingsDelegates; // 0x164 (0xC)
	struct UOnlineProfileSettings* CachedProfile; // 0x170 (0x4)
	struct TArray_FScriptDelegate LocalPlayerStorageReadDelegates; // 0x174 (0xC)
	struct TArray_FScriptDelegate LocalPlayerStorageWriteDelegates; // 0x180 (0xC)
	struct TArray_FScriptDelegate RemotePlayerStorageReadDelegates; // 0x18C (0xC)
	struct TArray_FScriptDelegate SpeechRecognitionCompleteDelegates; // 0x198 (0xC)
	struct TArray_FScriptDelegate ReadFriendsDelegates; // 0x1A4 (0xC)
	struct TArray_FScriptDelegate FriendsChangeDelegates; // 0x1B0 (0xC)
	struct TArray_FScriptDelegate MutingChangeDelegates; // 0x1BC (0xC)
	struct TArray_FScriptDelegate LoginChangeDelegates; // 0x1C8 (0xC)
	struct TArray_FScriptDelegate LoginFailedDelegates; // 0x1D4 (0xC)
	struct TArray_FScriptDelegate LogoutCompletedDelegates; // 0x1E0 (0xC)
	struct TArray_FScriptDelegate GetUserAgeGroupCompletedDelegates; // 0x1EC (0xC)
	struct TArray_FScriptDelegate LoginStatusChangeDelegates; // 0x1F8 (0xC)
	struct TArray_FScriptDelegate AccountCreateDelegates; // 0x204 (0xC)
	struct TArray_FScriptDelegate TalkingDelegates; // 0x210 (0xC)
	struct TArray_FScriptDelegate ReadOnlineStatsCompleteDelegates; // 0x21C (0xC)
	struct TArray_FScriptDelegate FlushOnlineStatsDelegates; // 0x228 (0xC)
	struct TArray_FScriptDelegate ConnectionStatusChangeDelegates; // 0x234 (0xC)
	struct TArray_FScriptDelegate ControllerChangeDelegates; // 0x240 (0xC)
	struct TArray_FScriptDelegate LinkStatusDelegates; // 0x24C (0xC)
	struct TArray_FScriptDelegate ShareTitleFileCompleteDelegates; // 0x258 (0xC)
	struct TArray_FScriptDelegate ReadTitleFileCompleteDelegates; // 0x264 (0xC)
	struct TArray_FScriptDelegate AchievementDelegates; // 0x270 (0xC)
	struct TArray_FScriptDelegate AchievementReadDelegates; // 0x27C (0xC)
	struct TArray_FScriptDelegate AnyContentChangeDelegates; // 0x288 (0xC)
	struct FLocalTalker CurrentLocalTalker; // 0x294 (0x4)
	struct TArray_FRemoteTalker RemoteTalkers; // 0x298 (0xC)
	int GameID; // 0x2A4 (0x4)
	struct UOnlineStatsRead* CurrentStatsRead; // 0x2A8 (0x4)
	struct TArray_FPropertyToColumn StatWriteKeyMapping; // 0x2AC (0xC)
	struct TArray_FPendingPlayerStats PendingStats; // 0x2B8 (0xC)
	struct FString KeyboardResultsString; // 0x2C4 (0xC)
	struct TArray_FScriptDelegate KeyboardInputDelegates; // 0x2D0 (0xC)
	struct TArray_FScriptDelegate FriendInviteReceivedDelegates; // 0x2DC (0xC)
	struct TArray_FScriptDelegate AddFriendByNameCompleteDelegates; // 0x2E8 (0xC)
	struct FProfileSettingsCache ProfileCache; // 0x2F4 (0x28)
	struct UOnlinePlayerStorage* PlayerStorageCache; // 0x31C (0x4)
	struct FDeviceIdCache DeviceCache; // 0x320 (0x1C)
	struct FString LocationUrl; // 0x33C (0xC)
	struct TArray_FScriptDelegate SentGameInviteDelegates; // 0x348 (0xC)
	struct TArray_FScriptDelegate ReceivedGameInviteDelegates; // 0x354 (0xC)
	struct TArray_FScriptDelegate JoinFriendGameCompleteDelegates; // 0x360 (0xC)
	struct TArray_FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegates; // 0x36C (0xC)
	struct TArray_FScriptDelegate RegisterHostStatGuidCompleteDelegates; // 0x378 (0xC)
	struct TArray_FScriptDelegate CheckDownloadableContentListDelegates; // 0x384 (0xC)
	struct TArray_FOnlineStatusMapping StatusMappings; // 0x390 (0xC)
	struct TArray_FOnlineStatusPropertyMapping StatusPropertyMappings; // 0x39C (0xC)
	struct TArray_FOnlineStatusContextMapping StatusContextMappings; // 0x3A8 (0xC)
	struct FString DefaultStatus; // 0x3B4 (0xC)
	struct FString GameInviteMessage; // 0x3C0 (0xC)
	struct FControllerConnectionState ControllerStates[4]; // 0x3CC (0x20)
	float ConnectionPresenceTimeInterval; // 0x3EC (0x4)
	float ConnectionPresenceElapsedTime; // 0x3F0 (0x4)
	struct FString EncryptedProductKey; // 0x3F4 (0xC)
	struct TArray_FUniqueNetId MuteList; // 0x400 (0xC)
	struct TArray_FTitleFile TitleManagedFiles; // 0x40C (0xC)
	struct TArray_FTitleFileMapping TitleFileMappings; // 0x418 (0xC)
	struct TArray_FQueuedAvatarRequest QueuedAvatarRequests; // 0x424 (0xC)
	struct TArray_FAchievementMappingInfo AchievementMappings; // 0x430 (0xC)
	struct TArray_FAchievementProgressStat PendingAchievementProgress; // 0x43C (0xC)
	struct TArray_FLeaderboardTemplate LeaderboardList; // 0x448 (0xC)
	struct TArray_FDeferredLeaderboardRead DeferredLeaderboardReads; // 0x454 (0xC)
	struct TArray_FDeferredLeaderboardWrite DeferredLeaderboardWrites; // 0x460 (0xC)
	struct TArray_FDeferredLeaderboardWrite PendingLeaderboardStats; // 0x46C (0xC)
	struct TArray_FLeaderboardEntry ProcessedLeaderboardReads; // 0x478 (0xC)
	struct TArray_FViewIdToLeaderboardName LeaderboardNameMappings; // 0x484 (0xC)
	struct UOnlineAuthInterfaceSteamworks* CachedAuthInt; // 0x490 (0x4)
	struct TArray_FIpAddr PendingRedirects; // 0x494 (0xC)
	struct TArray_FScriptDelegate ExternalUIChangeDelegates; // 0x4A0 (0xC)
	struct FMarketplaceListCache DLCListCache; // 0x4AC (0x1C)
	struct TArray_FMarketplaceOfferData MarketplaceOffers; // 0x4C8 (0xC)
	struct UQoSHandlerSteamworks* QoSHandler; // 0x4D4 (0x4)
	struct FScriptDelegate __OnLoginChange__Delegate; // 0x4D8 (0xC)
	struct FScriptDelegate __OnLoginCancelled__Delegate; // 0x4E4 (0xC)
	struct FScriptDelegate __OnMutingChange__Delegate; // 0x4F0 (0xC)
	struct FScriptDelegate __OnFriendsChange__Delegate; // 0x4FC (0xC)
	struct FScriptDelegate __OnLoginFailed__Delegate; // 0x508 (0xC)
	struct FScriptDelegate __OnLogoutCompleted__Delegate; // 0x514 (0xC)
	struct FScriptDelegate __OnGetUserAgeGroup__Delegate; // 0x520 (0xC)
	struct FScriptDelegate __OnLoginStatusChange__Delegate; // 0x52C (0xC)
	struct FScriptDelegate __OnReadProfileSettingsComplete__Delegate; // 0x538 (0xC)
	struct FScriptDelegate __OnWriteProfileSettingsComplete__Delegate; // 0x544 (0xC)
	struct FScriptDelegate __OnReadPlayerStorageComplete__Delegate; // 0x550 (0xC)
	struct FScriptDelegate __OnReadPlayerStorageForNetIdComplete__Delegate; // 0x55C (0xC)
	struct FScriptDelegate __OnWritePlayerStorageComplete__Delegate; // 0x568 (0xC)
	struct FScriptDelegate __OnReadFriendsComplete__Delegate; // 0x574 (0xC)
	struct FScriptDelegate __OnPlayerTalkingStateChange__Delegate; // 0x580 (0xC)
	struct FScriptDelegate __OnRecognitionComplete__Delegate; // 0x58C (0xC)
	struct FScriptDelegate __OnReadOnlineStatsComplete__Delegate; // 0x598 (0xC)
	struct FScriptDelegate __OnFlushOnlineStatsComplete__Delegate; // 0x5A4 (0xC)
	struct FScriptDelegate __OnLinkStatusChange__Delegate; // 0x5B0 (0xC)
	struct FScriptDelegate __OnExternalUIChange__Delegate; // 0x5BC (0xC)
	struct FScriptDelegate __OnControllerChange__Delegate; // 0x5C8 (0xC)
	struct FScriptDelegate __OnConnectionStatusChange__Delegate; // 0x5D4 (0xC)
	struct FScriptDelegate __OnStorageDeviceChange__Delegate; // 0x5E0 (0xC)
	struct FScriptDelegate __OnShareTitleFileComplete__Delegate; // 0x5EC (0xC)
	struct FScriptDelegate __OnReadTitleFileComplete__Delegate; // 0x5F8 (0xC)
	struct FScriptDelegate __OnCreateOnlineAccountCompleted__Delegate; // 0x604 (0xC)
	struct FScriptDelegate __OnKeyboardInputComplete__Delegate; // 0x610 (0xC)
	struct FScriptDelegate __OnAddFriendByNameComplete__Delegate; // 0x61C (0xC)
	struct FScriptDelegate __OnFriendInviteReceived__Delegate; // 0x628 (0xC)
	struct FScriptDelegate __OnSentGameInvite__Delegate; // 0x634 (0xC)
	struct FScriptDelegate __OnReceivedGameInvite__Delegate; // 0x640 (0xC)
	struct FScriptDelegate __OnJoinFriendGameComplete__Delegate; // 0x64C (0xC)
	struct FScriptDelegate __OnFriendMessageReceived__Delegate; // 0x658 (0xC)
	struct FScriptDelegate __OnRegisterHostStatGuidComplete__Delegate; // 0x664 (0xC)
	struct FScriptDelegate __OnDeviceSelectionComplete__Delegate; // 0x670 (0xC)
	struct FScriptDelegate __OnUnlockAchievementComplete__Delegate; // 0x67C (0xC)
	struct FScriptDelegate __OnProfileDataChanged__Delegate; // 0x688 (0xC)
	struct FScriptDelegate __OnReadAchievementsComplete__Delegate; // 0x694 (0xC)
	struct FScriptDelegate __OnReadOnlineAvatarComplete__Delegate; // 0x6A0 (0xC)
	struct FScriptDelegate __OnGetNumberOfCurrentPlayersComplete__Delegate; // 0x6AC (0xC)
	struct FScriptDelegate __OnReadCrossTitleProfileSettingsComplete__Delegate; // 0x6B8 (0xC)
	struct FScriptDelegate __OnUnlockAvatarAwardComplete__Delegate; // 0x6C4 (0xC)
	struct FScriptDelegate __OnContentChange__Delegate; // 0x6D0 (0xC)
	struct FScriptDelegate __OnReadContentComplete__Delegate; // 0x6DC (0xC)
	struct FScriptDelegate __OnReadCrossTitleContentComplete__Delegate; // 0x6E8 (0xC)
	struct FScriptDelegate __OnReadCrossTitleSaveGameDataComplete__Delegate; // 0x6F4 (0xC)
	struct FScriptDelegate __OnQueryAvailableDownloadsComplete__Delegate; // 0x700 (0xC)
	struct FScriptDelegate __OnReadSaveGameDataComplete__Delegate; // 0x70C (0xC)
	struct FScriptDelegate __OnWriteSaveGameDataComplete__Delegate; // 0x718 (0xC)
	struct FScriptDelegate __OnReadSaveGamesComplete__Delegate; // 0x724 (0xC)
	struct FScriptDelegate __OnReadDownloadableContentListComplete__Delegate; // 0x730 (0xC)
	struct FScriptDelegate __OnReadHiddenDownloadableContentListComplete__Delegate; // 0x73C (0xC)
	struct FScriptDelegate __OnReadCriticalDownloadableContentListComplete__Delegate; // 0x748 (0xC)
	struct FScriptDelegate __OnCheckDownloadableContentList__Delegate; // 0x754 (0xC)
};

struct UOnlineSubsystemSteamworks {
	struct UObject_Data UObject;
	struct UOnlineSubsystem_Data UOnlineSubsystem;
	struct UOnlineSubsystemCommonImpl_Data UOnlineSubsystemCommonImpl;
	struct UOnlineSubsystemSteamworks_Data UOnlineSubsystemSteamworks;
};

// 0xE0 
struct UQoSHandlerSteamworks_Data {
	// Last Offset: 0x3C
	int MaxQoSRequest; // 0x3C (0x4)
	int MaxQoSListen; // 0x40 (0x4)
	int NumPingProbes; // 0x44 (0x4)
	int PingProbeSize; // 0x48 (0x4)
	float PingTimeout; // 0x4C (0x4)
	float ChallengeTimeout; // 0x50 (0x4)
	float ListenTimeout; // 0x54 (0x4)
	BOOL bEnabled :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	struct FMap_Mirror ListenEntries; // 0x5C (0x3C)
	struct FMap_Mirror RequestEntries; // 0x98 (0x3C)
	struct TArray_FPendingEntry PendingRequests; // 0xD4 (0xC)
};

struct UQoSHandlerSteamworks {
	struct UObject_Data UObject;
	struct UQoSHandlerSteamworks_Data UQoSHandlerSteamworks;
};

// 0xDC 
struct USparkInterfaceSteamworks_Data {
	// Last Offset: 0xDC
};

struct USparkInterfaceSteamworks {
	struct UObject_Data UObject;
	struct USparkInterfaceImpl_Data USparkInterfaceImpl;
	struct USparkInterfaceSteamworks_Data USparkInterfaceSteamworks;
};

// 0x1EC 
struct UIpNetDriverSteamworks_Data {
	// Last Offset: 0x1EC
};

struct UIpNetDriverSteamworks {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UNetDriver_Data UNetDriver;
	struct UTcpNetDriver_Data UTcpNetDriver;
	struct UIpNetDriverSteamworks_Data UIpNetDriverSteamworks;
};

// 0x5078 
struct UIpNetConnectionSteamworks_Data {
	// Last Offset: 0x5078
};

struct UIpNetConnectionSteamworks {
	struct UObject_Data UObject;
	struct UPlayer_Data UPlayer;
	struct UNetConnection_Data UNetConnection;
	struct UTcpipConnection_Data UTcpipConnection;
	struct UIpNetConnectionSteamworks_Data UIpNetConnectionSteamworks;
};
]]

table.insert(g_loadedClasses, { "UOnlineAuthInterfaceSteamworks", 3575, "UOnlineAuthInterfaceImpl" })
table.insert(g_loadedClasses, { "UOnlineGameInterfaceSteamworks", 3577, "UOnlineGameInterfaceImpl" })
table.insert(g_loadedClasses, { "UOnlineLobbyInterfaceSteamworks", 3579, "UObject" })
table.insert(g_loadedClasses, { "UOnlineSubsystemSteamworks", 3581, "UOnlineSubsystemCommonImpl" })
table.insert(g_loadedClasses, { "UQoSHandlerSteamworks", 3583, "UObject" })
table.insert(g_loadedClasses, { "USparkInterfaceSteamworks", 3585, "USparkInterfaceImpl" })
table.insert(g_loadedClasses, { "UIpNetDriverSteamworks", 3587, "UTcpNetDriver" })
table.insert(g_loadedClasses, { "UIpNetConnectionSteamworks", 3589, "UTcpipConnection" })
