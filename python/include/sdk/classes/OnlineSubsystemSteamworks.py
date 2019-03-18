
from ctypes import *
import BL2SDK





class  UOnlineAuthInterfaceSteamworks_Data(Structure):
	_fields_ = [
		("AuthCallbackBridge", FPointer),
	]

class  UOnlineAuthInterfaceSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlineAuthInterfaceBaseImpl", UOnlineAuthInterfaceBaseImpl_Data),
		("UOnlineAuthInterfaceImpl", UOnlineAuthInterfaceImpl_Data),
		("UOnlineAuthInterfaceSteamworks", UOnlineAuthInterfaceSteamworks_Data),
	]


class  UOnlineGameInterfaceSteamworks_Data(Structure):
	_fields_ = [
		("QueryToRulesResponseMap", TArray_FServerQueryToRulesResponseMapping),
		("QueryToPingResponseMap", TArray_FServerQueryToPingResponseMapping),
		("ServerListResponse", FPointer),
		("CurrentMatchmakingType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("CurrentMatchmakingQuery", FPointer),
		("GameInviteAcceptedDelegates", TArray_FScriptDelegate),
		("InviteGameSearch", POINTER(UOnlineGameSearch)),
		("RegisterPlayerCompleteDelegates", TArray_FScriptDelegate),
		("UnregisterPlayerCompleteDelegates", TArray_FScriptDelegate),
		("ActiveClientsideFilters", TArray_FClientFilterORClause),
		("bFilterEngineBuild", c_bool, 1),
		("", c_ulong, 0),
		("FilterKeyToSteamKeyMap", TArray_FFilterKeyToSteamKeyMapping),
		("ServerSessionName", FName),
		("__OnGameInviteAccepted__Delegate", FScriptDelegate),
		("__OnRegisterPlayerComplete__Delegate", FScriptDelegate),
		("__OnUnregisterPlayerComplete__Delegate", FScriptDelegate),
	]

class  UOnlineGameInterfaceSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlineGameInterfaceImpl", UOnlineGameInterfaceImpl_Data),
		("UOnlineGameInterfaceSteamworks", UOnlineGameInterfaceSteamworks_Data),
	]


class  UOnlineLobbyInterfaceSteamworks_Data(Structure):
	_fields_ = []

class  UOnlineLobbyInterfaceSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlineLobbyInterfaceSteamworks", UOnlineLobbyInterfaceSteamworks_Data),
	]


class  UOnlineSubsystemSteamworks_Data(Structure):
	_fields_ = [
		("CallbackBridge", FPointer),
		("AsyncTasks", TArray_FPointer),
		("bStoringAchievement", c_bool, 1),
		("bGSStatsStoresSuccess", c_bool, 1),
		("bNeedsKeyboardTicking", c_bool, 1),
		("bLastHasConnection", c_bool, 1),
		("bHasSteamworksAccount", c_bool, 1),
		("bShouldUseMcp", c_bool, 1),
		("bIncrementStatValues", c_bool, 1),
		("bEnableSteamQoS", c_bool, 1),
		("", c_ulong, 0),
		("TotalGSStatsStoresPending", c_int),
		("UserStatsReceivedState", c_ubyte),
		("LoggedInStatus", c_ubyte),
		("bWasKeyboardInputCanceled", c_ubyte),
		("CurrentNotificationPosition", c_ubyte),
		("CachedGameInt", POINTER(UOnlineGameInterfaceSteamworks)),
		("LocalProfileName", FString),
		("LoggedInPlayerName", FString),
		("LoggedInPlayerId", FUniqueNetId),
		("LoggedInPlayerNum", c_int),
		("ProfileDataDirectory", FString),
		("ProfileDataExtension", FString),
		("WriteProfileSettingsDelegates", TArray_FScriptDelegate),
		("CachedProfile", POINTER(UOnlineProfileSettings)),
		("LocalPlayerStorageReadDelegates", TArray_FScriptDelegate),
		("LocalPlayerStorageWriteDelegates", TArray_FScriptDelegate),
		("RemotePlayerStorageReadDelegates", TArray_FScriptDelegate),
		("SpeechRecognitionCompleteDelegates", TArray_FScriptDelegate),
		("ReadFriendsDelegates", TArray_FScriptDelegate),
		("FriendsChangeDelegates", TArray_FScriptDelegate),
		("MutingChangeDelegates", TArray_FScriptDelegate),
		("LoginChangeDelegates", TArray_FScriptDelegate),
		("LoginFailedDelegates", TArray_FScriptDelegate),
		("LogoutCompletedDelegates", TArray_FScriptDelegate),
		("GetUserAgeGroupCompletedDelegates", TArray_FScriptDelegate),
		("LoginStatusChangeDelegates", TArray_FScriptDelegate),
		("AccountCreateDelegates", TArray_FScriptDelegate),
		("TalkingDelegates", TArray_FScriptDelegate),
		("ReadOnlineStatsCompleteDelegates", TArray_FScriptDelegate),
		("FlushOnlineStatsDelegates", TArray_FScriptDelegate),
		("ConnectionStatusChangeDelegates", TArray_FScriptDelegate),
		("ControllerChangeDelegates", TArray_FScriptDelegate),
		("LinkStatusDelegates", TArray_FScriptDelegate),
		("ShareTitleFileCompleteDelegates", TArray_FScriptDelegate),
		("ReadTitleFileCompleteDelegates", TArray_FScriptDelegate),
		("AchievementDelegates", TArray_FScriptDelegate),
		("AchievementReadDelegates", TArray_FScriptDelegate),
		("AnyContentChangeDelegates", TArray_FScriptDelegate),
		("CurrentLocalTalker", FLocalTalker),
		("RemoteTalkers", TArray_FRemoteTalker),
		("GameID", c_int),
		("CurrentStatsRead", POINTER(UOnlineStatsRead)),
		("StatWriteKeyMapping", TArray_FPropertyToColumn),
		("PendingStats", TArray_FPendingPlayerStats),
		("KeyboardResultsString", FString),
		("KeyboardInputDelegates", TArray_FScriptDelegate),
		("FriendInviteReceivedDelegates", TArray_FScriptDelegate),
		("AddFriendByNameCompleteDelegates", TArray_FScriptDelegate),
		("ProfileCache", FProfileSettingsCache),
		("PlayerStorageCache", POINTER(UOnlinePlayerStorage)),
		("DeviceCache", FDeviceIdCache),
		("LocationUrl", FString),
		("SentGameInviteDelegates", TArray_FScriptDelegate),
		("ReceivedGameInviteDelegates", TArray_FScriptDelegate),
		("JoinFriendGameCompleteDelegates", TArray_FScriptDelegate),
		("GetNumberOfCurrentPlayersCompleteDelegates", TArray_FScriptDelegate),
		("RegisterHostStatGuidCompleteDelegates", TArray_FScriptDelegate),
		("CheckDownloadableContentListDelegates", TArray_FScriptDelegate),
		("StatusMappings", TArray_FOnlineStatusMapping),
		("StatusPropertyMappings", TArray_FOnlineStatusPropertyMapping),
		("StatusContextMappings", TArray_FOnlineStatusContextMapping),
		("DefaultStatus", FString),
		("GameInviteMessage", FString),
		("ControllerStates", FControllerConnectionState * 4),
		("ConnectionPresenceTimeInterval", c_float),
		("ConnectionPresenceElapsedTime", c_float),
		("EncryptedProductKey", FString),
		("MuteList", TArray_FUniqueNetId),
		("TitleManagedFiles", TArray_FTitleFile),
		("TitleFileMappings", TArray_FTitleFileMapping),
		("QueuedAvatarRequests", TArray_FQueuedAvatarRequest),
		("AchievementMappings", TArray_FAchievementMappingInfo),
		("PendingAchievementProgress", TArray_FAchievementProgressStat),
		("LeaderboardList", TArray_FLeaderboardTemplate),
		("DeferredLeaderboardReads", TArray_FDeferredLeaderboardRead),
		("DeferredLeaderboardWrites", TArray_FDeferredLeaderboardWrite),
		("PendingLeaderboardStats", TArray_FDeferredLeaderboardWrite),
		("ProcessedLeaderboardReads", TArray_FLeaderboardEntry),
		("LeaderboardNameMappings", TArray_FViewIdToLeaderboardName),
		("CachedAuthInt", POINTER(UOnlineAuthInterfaceSteamworks)),
		("PendingRedirects", TArray_FIpAddr),
		("ExternalUIChangeDelegates", TArray_FScriptDelegate),
		("DLCListCache", FMarketplaceListCache),
		("MarketplaceOffers", TArray_FMarketplaceOfferData),
		("QoSHandler", POINTER(UQoSHandlerSteamworks)),
		("__OnLoginChange__Delegate", FScriptDelegate),
		("__OnLoginCancelled__Delegate", FScriptDelegate),
		("__OnMutingChange__Delegate", FScriptDelegate),
		("__OnFriendsChange__Delegate", FScriptDelegate),
		("__OnLoginFailed__Delegate", FScriptDelegate),
		("__OnLogoutCompleted__Delegate", FScriptDelegate),
		("__OnGetUserAgeGroup__Delegate", FScriptDelegate),
		("__OnLoginStatusChange__Delegate", FScriptDelegate),
		("__OnReadProfileSettingsComplete__Delegate", FScriptDelegate),
		("__OnWriteProfileSettingsComplete__Delegate", FScriptDelegate),
		("__OnReadPlayerStorageComplete__Delegate", FScriptDelegate),
		("__OnReadPlayerStorageForNetIdComplete__Delegate", FScriptDelegate),
		("__OnWritePlayerStorageComplete__Delegate", FScriptDelegate),
		("__OnReadFriendsComplete__Delegate", FScriptDelegate),
		("__OnPlayerTalkingStateChange__Delegate", FScriptDelegate),
		("__OnRecognitionComplete__Delegate", FScriptDelegate),
		("__OnReadOnlineStatsComplete__Delegate", FScriptDelegate),
		("__OnFlushOnlineStatsComplete__Delegate", FScriptDelegate),
		("__OnLinkStatusChange__Delegate", FScriptDelegate),
		("__OnExternalUIChange__Delegate", FScriptDelegate),
		("__OnControllerChange__Delegate", FScriptDelegate),
		("__OnConnectionStatusChange__Delegate", FScriptDelegate),
		("__OnStorageDeviceChange__Delegate", FScriptDelegate),
		("__OnShareTitleFileComplete__Delegate", FScriptDelegate),
		("__OnReadTitleFileComplete__Delegate", FScriptDelegate),
		("__OnCreateOnlineAccountCompleted__Delegate", FScriptDelegate),
		("__OnKeyboardInputComplete__Delegate", FScriptDelegate),
		("__OnAddFriendByNameComplete__Delegate", FScriptDelegate),
		("__OnFriendInviteReceived__Delegate", FScriptDelegate),
		("__OnSentGameInvite__Delegate", FScriptDelegate),
		("__OnReceivedGameInvite__Delegate", FScriptDelegate),
		("__OnJoinFriendGameComplete__Delegate", FScriptDelegate),
		("__OnFriendMessageReceived__Delegate", FScriptDelegate),
		("__OnRegisterHostStatGuidComplete__Delegate", FScriptDelegate),
		("__OnDeviceSelectionComplete__Delegate", FScriptDelegate),
		("__OnUnlockAchievementComplete__Delegate", FScriptDelegate),
		("__OnProfileDataChanged__Delegate", FScriptDelegate),
		("__OnReadAchievementsComplete__Delegate", FScriptDelegate),
		("__OnReadOnlineAvatarComplete__Delegate", FScriptDelegate),
		("__OnGetNumberOfCurrentPlayersComplete__Delegate", FScriptDelegate),
		("__OnReadCrossTitleProfileSettingsComplete__Delegate", FScriptDelegate),
		("__OnUnlockAvatarAwardComplete__Delegate", FScriptDelegate),
		("__OnContentChange__Delegate", FScriptDelegate),
		("__OnReadContentComplete__Delegate", FScriptDelegate),
		("__OnReadCrossTitleContentComplete__Delegate", FScriptDelegate),
		("__OnReadCrossTitleSaveGameDataComplete__Delegate", FScriptDelegate),
		("__OnQueryAvailableDownloadsComplete__Delegate", FScriptDelegate),
		("__OnReadSaveGameDataComplete__Delegate", FScriptDelegate),
		("__OnWriteSaveGameDataComplete__Delegate", FScriptDelegate),
		("__OnReadSaveGamesComplete__Delegate", FScriptDelegate),
		("__OnReadDownloadableContentListComplete__Delegate", FScriptDelegate),
		("__OnReadHiddenDownloadableContentListComplete__Delegate", FScriptDelegate),
		("__OnReadCriticalDownloadableContentListComplete__Delegate", FScriptDelegate),
		("__OnCheckDownloadableContentList__Delegate", FScriptDelegate),
	]

class  UOnlineSubsystemSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlineSubsystem", UOnlineSubsystem_Data),
		("UOnlineSubsystemCommonImpl", UOnlineSubsystemCommonImpl_Data),
		("UOnlineSubsystemSteamworks", UOnlineSubsystemSteamworks_Data),
	]


class  UQoSHandlerSteamworks_Data(Structure):
	_fields_ = [
		("MaxQoSRequest", c_int),
		("MaxQoSListen", c_int),
		("NumPingProbes", c_int),
		("PingProbeSize", c_int),
		("PingTimeout", c_float),
		("ChallengeTimeout", c_float),
		("ListenTimeout", c_float),
		("bEnabled", c_bool, 1),
		("", c_ulong, 0),
		("ListenEntries", FMap_Mirror),
		("RequestEntries", FMap_Mirror),
		("PendingRequests", TArray_FPendingEntry),
	]

class  UQoSHandlerSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UQoSHandlerSteamworks", UQoSHandlerSteamworks_Data),
	]


class  USparkInterfaceSteamworks_Data(Structure):
	_fields_ = []

class  USparkInterfaceSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USparkInterfaceImpl", USparkInterfaceImpl_Data),
		("USparkInterfaceSteamworks", USparkInterfaceSteamworks_Data),
	]


class  UIpNetDriverSteamworks_Data(Structure):
	_fields_ = []

class  UIpNetDriverSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USubsystem", USubsystem_Data),
		("UNetDriver", UNetDriver_Data),
		("UTcpNetDriver", UTcpNetDriver_Data),
		("UIpNetDriverSteamworks", UIpNetDriverSteamworks_Data),
	]


class  UIpNetConnectionSteamworks_Data(Structure):
	_fields_ = []

class  UIpNetConnectionSteamworks(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UPlayer", UPlayer_Data),
		("UNetConnection", UNetConnection_Data),
		("UTcpipConnection", UTcpipConnection_Data),
		("UIpNetConnectionSteamworks", UIpNetConnectionSteamworks_Data),
	]

BL2SDK.g_loadedClasses += [("UOnlineAuthInterfaceSteamworks", 3575, "UOnlineAuthInterfaceImpl")]
BL2SDK.g_loadedClasses += [("UOnlineGameInterfaceSteamworks", 3577, "UOnlineGameInterfaceImpl")]
BL2SDK.g_loadedClasses += [("UOnlineLobbyInterfaceSteamworks", 3579, "UObject")]
BL2SDK.g_loadedClasses += [("UOnlineSubsystemSteamworks", 3581, "UOnlineSubsystemCommonImpl")]
BL2SDK.g_loadedClasses += [("UQoSHandlerSteamworks", 3583, "UObject")]
BL2SDK.g_loadedClasses += [("USparkInterfaceSteamworks", 3585, "USparkInterfaceImpl")]
BL2SDK.g_loadedClasses += [("UIpNetDriverSteamworks", 3587, "UTcpNetDriver")]
BL2SDK.g_loadedClasses += [("UIpNetConnectionSteamworks", 3589, "UTcpipConnection")]
