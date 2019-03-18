
from ctypes import *
import BL2SDK





class  UClientBeaconAddressResolver_Data(Structure):
	_fields_ = [
		("BeaconPort", c_int),
		("BeaconName", FName),
	]

class  UClientBeaconAddressResolver(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UClientBeaconAddressResolver", UClientBeaconAddressResolver_Data),
	]


class  UHTTPDownload_Data(Structure):
	_fields_ = [
		("RedirectToURL", FString),
		("UseCompression", c_bool, 1),
		("", c_ulong, 0),
		("Unknown1", c_ubyte, 0x),
		("ProxyServerHost", FString),
		("ProxyServerPort", c_int),
		("MaxRedirection", c_bool, 1),
		("", c_ulong, 0),
		("ConnectionTimeout", c_float),
		("Unknown2", c_ubyte, 0x),
	]

class  UHTTPDownload(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UDownload", UDownload_Data),
		("UHTTPDownload", UHTTPDownload_Data),
	]


class  AInternetLink_Data(Structure):
	_fields_ = [
		("LinkMode", c_ubyte),
		("InLineMode", c_ubyte),
		("OutLineMode", c_ubyte),
		("ReceiveMode", c_ubyte),
		("Socket", FPointer),
		("Port", c_int),
		("RemoteSocket", FPointer),
		("PrivateResolveInfo", FPointer),
		("DataPending", c_int),
	]

class  AInternetLink(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("AActor", AActor_Data),
		("AInfo", AInfo_Data),
		("AInternetLink", AInternetLink_Data),
	]


class  ATcpLink_Data(Structure):
	_fields_ = [
		("LinkState", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("RemoteAddr", FIpAddr),
		("AcceptClass", POINTER(UClass)),
		("SendFIFO", TArray_unsigned_char),
		("RecvBuf", FString),
	]

class  ATcpLink(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("AActor", AActor_Data),
		("AInfo", AInfo_Data),
		("AInternetLink", AInternetLink_Data),
		("ATcpLink", ATcpLink_Data),
	]


class  UMCPBase_Data(Structure):
	_fields_ = [
		("VfTable_FTickableObject", FPointer),
	]

class  UMCPBase(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMCPBase", UMCPBase_Data),
	]


class  UOnlineEventsInterfaceMcp_Data(Structure):
	_fields_ = [
		("EventUploadConfigs", TArray_FEventUploadConfig),
		("MCPEventPostObjects", TArray_FPointer),
		("DisabledUploadTypes", TArray_unsigned_char),
		("bBinaryStats", c_bool, 1),
		("", c_ulong, 0),
	]

class  UOnlineEventsInterfaceMcp(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMCPBase", UMCPBase_Data),
		("UOnlineEventsInterfaceMcp", UOnlineEventsInterfaceMcp_Data),
	]


class  UOnlineNewsInterfaceMcp_Data(Structure):
	_fields_ = [
		("NewsItems", TArray_FNewsCacheEntry),
		("ReadNewsDelegates", TArray_FScriptDelegate),
		("bNeedsTicking", c_bool, 1),
		("", c_ulong, 0),
		("__OnReadNewsCompleted__Delegate", FScriptDelegate),
	]

class  UOnlineNewsInterfaceMcp(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMCPBase", UMCPBase_Data),
		("UOnlineNewsInterfaceMcp", UOnlineNewsInterfaceMcp_Data),
	]


class  UOnlineTitleFileDownloadMcp_Data(Structure):
	_fields_ = [
		("ReadTitleFileCompleteDelegates", TArray_FScriptDelegate),
		("TitleFiles", TArray_FTitleFileMcp),
		("DownloadCount", c_int),
		("BaseUrl", FString),
		("TimeOut", c_float),
		("FilesToUrls", TArray_FFileNameToURLMapping),
		("__OnReadTitleFileComplete__Delegate", FScriptDelegate),
		("__OnShareTitleFileComplete__Delegate", FScriptDelegate),
	]

class  UOnlineTitleFileDownloadMcp(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMCPBase", UMCPBase_Data),
		("UOnlineTitleFileDownloadMcp", UOnlineTitleFileDownloadMcp_Data),
	]


class  UMeshBeacon_Data(Structure):
	_fields_ = [
		("VfTable_FTickableObject", FPointer),
		("MeshBeaconPort", c_int),
		("Socket", FPointer),
		("bIsInTick", c_bool, 1),
		("bWantsDeferredDestroy", c_bool, 1),
		("bShouldTick", c_bool, 1),
		("", c_ulong, 0),
		("HeartbeatTimeout", c_float),
		("ElapsedHeartbeatTime", c_float),
		("BeaconName", FName),
		("SocketSendBufferSize", c_int),
		("SocketReceiveBufferSize", c_int),
		("MaxBandwidthTestBufferSize", c_int),
		("MinBandwidthTestBufferSize", c_int),
		("MaxBandwidthTestSendTime", c_float),
		("MaxBandwidthTestReceiveTime", c_float),
		("MaxBandwidthHistoryEntries", c_int),
	]

class  UMeshBeacon(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMeshBeacon", UMeshBeacon_Data),
	]


class  UMeshBeaconClient_Data(Structure):
	_fields_ = [
		("HostPendingRequest", FOnlineGameSearchResult),
		("ClientPendingRequest", FClientConnectionRequest),
		("CurrentBandwidthTest", FClientBandwidthTestData),
		("ClientBeaconState", c_ubyte),
		("ClientBeaconRequestType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("ConnectionRequestTimeout", c_float),
		("ConnectionRequestElapsedTime", c_float),
		("ResolverClassName", FString),
		("ResolverClass", POINTER(UClass)),
		("Resolver", POINTER(UClientBeaconAddressResolver)),
		("bUsingRegisteredAddr", c_bool, 1),
		("", c_ulong, 0),
		("__OnConnectionRequestResult__Delegate", FScriptDelegate),
		("__OnReceivedBandwidthTestRequest__Delegate", FScriptDelegate),
		("__OnReceivedBandwidthTestResults__Delegate", FScriptDelegate),
		("__OnTravelRequestReceived__Delegate", FScriptDelegate),
		("__OnCreateNewSessionRequestReceived__Delegate", FScriptDelegate),
	]

class  UMeshBeaconClient(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMeshBeacon", UMeshBeacon_Data),
		("UMeshBeaconClient", UMeshBeaconClient_Data),
	]


class  UMeshBeaconHost_Data(Structure):
	_fields_ = [
		("ClientConnections", TArray_FClientMeshBeaconConnection),
		("PendingPlayerConnections", TArray_FUniqueNetId),
		("OwningPlayerId", FUniqueNetId),
		("bAllowBandwidthTesting", c_bool, 1),
		("", c_ulong, 0),
		("ConnectionBacklog", c_int),
		("__OnReceivedClientConnectionRequest__Delegate", FScriptDelegate),
		("__OnStartedBandwidthTest__Delegate", FScriptDelegate),
		("__OnFinishedBandwidthTest__Delegate", FScriptDelegate),
		("__OnAllPendingPlayersConnected__Delegate", FScriptDelegate),
		("__OnReceivedClientCreateNewSessionResult__Delegate", FScriptDelegate),
	]

class  UMeshBeaconHost(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UMeshBeacon", UMeshBeacon_Data),
		("UMeshBeaconHost", UMeshBeaconHost_Data),
	]


class  UOnlineSubsystemCommonImpl_Data(Structure):
	_fields_ = [
		("VoiceEngine", FPointer),
		("MaxLocalTalkers", c_int),
		("MaxRemoteTalkers", c_int),
		("bIsUsingSpeechRecognition", c_bool, 1),
		("", c_ulong, 0),
		("GameInterfaceImpl", POINTER(UOnlineGameInterfaceImpl)),
		("AuthInterfaceImpl", POINTER(UOnlineAuthInterfaceImpl)),
	]

class  UOnlineSubsystemCommonImpl(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlineSubsystem", UOnlineSubsystem_Data),
		("UOnlineSubsystemCommonImpl", UOnlineSubsystemCommonImpl_Data),
	]


class  UOnlineAuthInterfaceImpl_Data(Structure):
	_fields_ = [
		("OwningSubsystem", POINTER(UOnlineSubsystemCommonImpl)),
		("AuthReadyDelegates", TArray_FScriptDelegate),
		("AuthRequestClientDelegates", TArray_FScriptDelegate),
		("AuthRequestServerDelegates", TArray_FScriptDelegate),
		("AuthBlobReceivedClientDelegates", TArray_FScriptDelegate),
		("AuthBlobReceivedServerDelegates", TArray_FScriptDelegate),
		("AuthCompleteClientDelegates", TArray_FScriptDelegate),
		("AuthCompleteServerDelegates", TArray_FScriptDelegate),
		("AuthKillClientDelegates", TArray_FScriptDelegate),
		("AuthRetryServerDelegates", TArray_FScriptDelegate),
		("ClientConnectionCloseDelegates", TArray_FScriptDelegate),
		("ServerConnectionCloseDelegates", TArray_FScriptDelegate),
	]

class  UOnlineAuthInterfaceImpl(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlineAuthInterfaceBaseImpl", UOnlineAuthInterfaceBaseImpl_Data),
		("UOnlineAuthInterfaceImpl", UOnlineAuthInterfaceImpl_Data),
	]


class  UOnlineGameInterfaceImpl_Data(Structure):
	_fields_ = [
		("OwningSubsystem", POINTER(UOnlineSubsystemCommonImpl)),
		("GameSettings", POINTER(UOnlineGameSettings)),
		("GameSearch", POINTER(UOnlineGameSearch)),
		("CurrentGameState", c_ubyte),
		("LanBeaconState", c_ubyte),
		("LanNonce", c_ubyte * 8),
		("Unknown1", c_ubyte, 0x),
		("CreateOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("UpdateOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("DestroyOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("JoinOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("MigrateOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("JoinMigratedOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("RecalculateSkillRatingCompleteDelegates", TArray_FScriptDelegate),
		("StartOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("EndOnlineGameCompleteDelegates", TArray_FScriptDelegate),
		("FindOnlineGamesCompleteDelegates", TArray_FScriptDelegate),
		("CancelFindOnlineGamesCompleteDelegates", TArray_FScriptDelegate),
		("LanAnnouncePort", c_int),
		("LanGameUniqueId", c_int),
		("LanPacketPlatformMask", c_int),
		("LanQueryTimeLeft", c_float),
		("LanQueryTimeout", c_float),
		("LanBeacon", FPointer),
		("SessionInfo", FPointer),
		("NATResolutionTimeout", c_int),
		("__OnFindOnlineGamesComplete__Delegate", FScriptDelegate),
		("__OnCreateOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnUpdateOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnDestroyOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnCancelFindOnlineGamesComplete__Delegate", FScriptDelegate),
		("__OnJoinOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnRegisterPlayerComplete__Delegate", FScriptDelegate),
		("__OnUnregisterPlayerComplete__Delegate", FScriptDelegate),
		("__OnStartOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnEndOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnArbitrationRegistrationComplete__Delegate", FScriptDelegate),
		("__OnGameInviteAccepted__Delegate", FScriptDelegate),
		("__OnGameInviteProcessingStarted__Delegate", FScriptDelegate),
		("__OnRecalculateSkillRatingComplete__Delegate", FScriptDelegate),
		("__OnMigrateOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnJoinMigratedOnlineGameComplete__Delegate", FScriptDelegate),
		("__OnQosStatusChanged__Delegate", FScriptDelegate),
	]

class  UOnlineGameInterfaceImpl(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlineGameInterfaceImpl", UOnlineGameInterfaceImpl_Data),
	]


class  UOnlinePlaylistManager_Data(Structure):
	_fields_ = [
		("VfTable_FTickableObject", FPointer),
		("Playlists", TArray_FPlaylist),
		("PlaylistFileNames", TArray_FString),
		("DatastoresToRefresh", TArray_FName),
		("DownloadCount", c_int),
		("SuccessfulCount", c_int),
		("VersionNumber", c_int),
		("PopulationData", TArray_FPlaylistPopulation),
		("WorldwideTotalPlayers", c_int),
		("RegionTotalPlayers", c_int),
		("TitleFileInterface", FScriptInterface),
		("PopulationFileName", FString),
		("NextPlaylistPopulationUpdateTime", c_float),
		("PlaylistPopulationUpdateInterval", c_float),
		("MinPlaylistIdToReport", c_int),
		("CurrentPlaylistId", c_int),
		("EventsInterfaceName", FName),
		("DataCenterId", c_int),
		("DataCenterFileName", FString),
		("LastPlaylistDownloadTime", c_float),
		("PlaylistRefreshInterval", c_float),
		("__OnReadPlaylistComplete__Delegate", FScriptDelegate),
		("__OnPlaylistPopulationDataUpdated__Delegate", FScriptDelegate),
	]

class  UOnlinePlaylistManager(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UOnlinePlaylistManager", UOnlinePlaylistManager_Data),
	]


class  UPartyBeacon_Data(Structure):
	_fields_ = [
		("VfTable_FTickableObject", FPointer),
		("PartyBeaconPort", c_int),
		("Socket", FPointer),
		("bIsInTick", c_bool, 1),
		("bWantsDeferredDestroy", c_bool, 1),
		("bShouldTick", c_bool, 1),
		("", c_ulong, 0),
		("HeartbeatTimeout", c_float),
		("ElapsedHeartbeatTime", c_float),
		("BeaconName", FName),
		("__OnDestroyComplete__Delegate", FScriptDelegate),
	]

class  UPartyBeacon(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UPartyBeacon", UPartyBeacon_Data),
	]


class  UPartyBeaconClient_Data(Structure):
	_fields_ = [
		("HostPendingRequest", FOnlineGameSearchResult),
		("PendingRequest", FPartyReservation),
		("ClientBeaconState", c_ubyte),
		("ClientBeaconRequestType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("ReservationRequestTimeout", c_float),
		("ReservationRequestElapsedTime", c_float),
		("ResolverClassName", FString),
		("ResolverClass", POINTER(UClass)),
		("Resolver", POINTER(UClientBeaconAddressResolver)),
		("__OnReservationRequestComplete__Delegate", FScriptDelegate),
		("__OnReservationCountUpdated__Delegate", FScriptDelegate),
		("__OnTravelRequestReceived__Delegate", FScriptDelegate),
		("__OnHostIsReady__Delegate", FScriptDelegate),
		("__OnHostHasCancelled__Delegate", FScriptDelegate),
	]

class  UPartyBeaconClient(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UPartyBeacon", UPartyBeacon_Data),
		("UPartyBeaconClient", UPartyBeaconClient_Data),
	]


class  UPartyBeaconHost_Data(Structure):
	_fields_ = [
		("Clients", TArray_FClientBeaconConnection),
		("NumTeams", c_int),
		("NumPlayersPerTeam", c_int),
		("NumReservations", c_int),
		("NumConsumedReservations", c_int),
		("Reservations", TArray_FPartyReservation),
		("OnlineSessionName", FName),
		("ConnectionBacklog", c_int),
		("ForceTeamNum", c_int),
		("ReservedHostTeamNum", c_int),
		("bBestFitTeamAssignment", c_bool, 1),
		("", c_ulong, 0),
		("BeaconState", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("__OnReservationChange__Delegate", FScriptDelegate),
		("__OnReservationsFull__Delegate", FScriptDelegate),
		("__OnClientCancellationReceived__Delegate", FScriptDelegate),
	]

class  UPartyBeaconHost(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UPartyBeacon", UPartyBeacon_Data),
		("UPartyBeaconHost", UPartyBeaconHost_Data),
	]


class  UTcpipConnection_Data(Structure):
	_fields_ = [
	
		("Unknown1", c_ubyte, 0x),
	]

class  UTcpipConnection(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UPlayer", UPlayer_Data),
		("UNetConnection", UNetConnection_Data),
		("UTcpipConnection", UTcpipConnection_Data),
	]


class  UTcpNetDriver_Data(Structure):
	_fields_ = [
		("AllowPlayerPortUnreach", BOOL),
		("LogPortUnreach", c_bool, 1),
		("", c_ulong, 0),
		("Unknown1", c_ubyte, 0x),
	]

class  UTcpNetDriver(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("USubsystem", USubsystem_Data),
		("UNetDriver", UNetDriver_Data),
		("UTcpNetDriver", UTcpNetDriver_Data),
	]


class  UWebRequest_Data(Structure):
	_fields_ = [
		("RemoteAddr", FString),
		("URI", FString),
		("UserName", FString),
		("Password", FString),
		("ContentLength", c_int),
		("ContentType", FString),
		("RequestType", c_ubyte),
		("Unknown1", c_ubyte, 0x),
		("HeaderMap", FMap_Mirror),
		("VariableMap", FMap_Mirror),
	]

class  UWebRequest(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UWebRequest", UWebRequest_Data),
	]


class  UWebResponse_Data(Structure):
	_fields_ = [
		("headers", TArray_FString),
		("ReplacementMap", FMap_Mirror),
		("IncludePath", FString),
		("CharSet", FString),
		("Connection", POINTER(AWebConnection)),
		("bSentText", c_bool, 1),
		("bSentResponse", c_bool, 1),
		("", c_ulong, 0),
	]

class  UWebResponse(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UWebResponse", UWebResponse_Data),
	]


class  UOnlinePlaylistProvider_Data(Structure):
	_fields_ = [
		("PlaylistId", c_int),
		("PlaylistGameTypeNames", TArray_FName),
		("DisplayName", FString),
		("Priority", c_int),
	]

class  UOnlinePlaylistProvider(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UUIRoot", UUIRoot_Data),
		("UUIDataProvider", UUIDataProvider_Data),
		("UUIPropertyDataProvider", UUIPropertyDataProvider_Data),
		("UUIResourceDataProvider", UUIResourceDataProvider_Data),
		("UOnlinePlaylistProvider", UOnlinePlaylistProvider_Data),
	]


class  UUIDataStore_OnlinePlaylists_Data(Structure):
	_fields_ = [
		("VfTable_IUIListElementProvider", FPointer),
		("ProviderClassName", FString),
		("ProviderClass", POINTER(UClass)),
		("RankedDataProviders", TArray_UUIResourceDataProviderPtr),
		("UnrankedDataProviders", TArray_UUIResourceDataProviderPtr),
		("RecModeDataProviders", TArray_UUIResourceDataProviderPtr),
		("PrivateDataProviders", TArray_UUIResourceDataProviderPtr),
		("PlaylistMan", POINTER(UOnlinePlaylistManager)),
	]

class  UUIDataStore_OnlinePlaylists(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UUIRoot", UUIRoot_Data),
		("UUIDataProvider", UUIDataProvider_Data),
		("UUIDataStore", UUIDataStore_Data),
		("UUIDataStore_OnlinePlaylists", UUIDataStore_OnlinePlaylists_Data),
	]


class  UWebApplication_Data(Structure):
	_fields_ = [
		("WorldInfo", POINTER(AWorldInfo)),
		("WebServer", POINTER(AWebServer)),
		("Path", FString),
	]

class  UWebApplication(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UWebApplication", UWebApplication_Data),
	]


class  AWebServer_Data(Structure):
	_fields_ = [
		("ServerName", FString),
		("Applications", FString * 10),
		("ApplicationPaths", FString * 10),
		("bEnabled", c_bool, 1),
		("", c_ulong, 0),
		("ListenPort", c_int),
		("MaxConnections", c_int),
		("DefaultApplication", c_int),
		("ExpirationSeconds", c_int),
		("ServerURL", FString),
		("ApplicationObjects", POINTER(UWebApplication) * 10),
		("ConnectionCount", c_int),
		("ConnID", c_int),
	]

class  AWebServer(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("AActor", AActor_Data),
		("AInfo", AInfo_Data),
		("AInternetLink", AInternetLink_Data),
		("ATcpLink", ATcpLink_Data),
		("AWebServer", AWebServer_Data),
	]


class  UHelloWeb_Data(Structure):
	_fields_ = []

class  UHelloWeb(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UWebApplication", UWebApplication_Data),
		("UHelloWeb", UHelloWeb_Data),
	]


class  UImageServer_Data(Structure):
	_fields_ = []

class  UImageServer(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("UWebApplication", UWebApplication_Data),
		("UImageServer", UImageServer_Data),
	]


class  AWebConnection_Data(Structure):
	_fields_ = [
		("WebServer", POINTER(AWebServer)),
		("ReceivedData", FString),
		("Request", POINTER(UWebRequest)),
		("Response", POINTER(UWebResponse)),
		("Application", POINTER(UWebApplication)),
		("bDelayCleanup", c_bool, 1),
		("", c_ulong, 0),
		("RawBytesExpecting", c_int),
		("MaxValueLength", c_int),
		("MaxLineLength", c_int),
		("ConnID", c_int),
	]

class  AWebConnection(Structure):
	_fields_ = [
		("UObject", UObject_Data),
		("AActor", AActor_Data),
		("AInfo", AInfo_Data),
		("AInternetLink", AInternetLink_Data),
		("ATcpLink", ATcpLink_Data),
		("AWebConnection", AWebConnection_Data),
	]

BL2SDK.g_loadedClasses += [("UClientBeaconAddressResolver", 3465, "UObject")]
BL2SDK.g_loadedClasses += [("UHTTPDownload", 3467, "UDownload")]
BL2SDK.g_loadedClasses += [("AInternetLink", 3475, "AInfo")]
BL2SDK.g_loadedClasses += [("ATcpLink", 3477, "AInternetLink")]
BL2SDK.g_loadedClasses += [("UMCPBase", 3479, "UObject")]
BL2SDK.g_loadedClasses += [("UOnlineEventsInterfaceMcp", 3481, "UMCPBase")]
BL2SDK.g_loadedClasses += [("UOnlineNewsInterfaceMcp", 3483, "UMCPBase")]
BL2SDK.g_loadedClasses += [("UOnlineTitleFileDownloadMcp", 3485, "UMCPBase")]
BL2SDK.g_loadedClasses += [("UMeshBeacon", 3487, "UObject")]
BL2SDK.g_loadedClasses += [("UMeshBeaconClient", 3489, "UMeshBeacon")]
BL2SDK.g_loadedClasses += [("UMeshBeaconHost", 3491, "UMeshBeacon")]
BL2SDK.g_loadedClasses += [("UOnlineSubsystemCommonImpl", 3493, "UOnlineSubsystem")]
BL2SDK.g_loadedClasses += [("UOnlineAuthInterfaceImpl", 3495, "UOnlineAuthInterfaceBaseImpl")]
BL2SDK.g_loadedClasses += [("UOnlineGameInterfaceImpl", 3497, "UObject")]
BL2SDK.g_loadedClasses += [("UOnlinePlaylistManager", 3499, "UObject")]
BL2SDK.g_loadedClasses += [("UPartyBeacon", 3501, "UObject")]
BL2SDK.g_loadedClasses += [("UPartyBeaconClient", 3503, "UPartyBeacon")]
BL2SDK.g_loadedClasses += [("UPartyBeaconHost", 3505, "UPartyBeacon")]
BL2SDK.g_loadedClasses += [("UTcpipConnection", 3507, "UNetConnection")]
BL2SDK.g_loadedClasses += [("UTcpNetDriver", 3509, "UNetDriver")]
BL2SDK.g_loadedClasses += [("UWebRequest", 3513, "UObject")]
BL2SDK.g_loadedClasses += [("UWebResponse", 3515, "UObject")]
BL2SDK.g_loadedClasses += [("UOnlinePlaylistProvider", 3517, "UUIResourceDataProvider")]
BL2SDK.g_loadedClasses += [("UUIDataStore_OnlinePlaylists", 3519, "UUIDataStore")]
BL2SDK.g_loadedClasses += [("UWebApplication", 45133, "UObject")]
BL2SDK.g_loadedClasses += [("AWebServer", 45136, "ATcpLink")]
BL2SDK.g_loadedClasses += [("UHelloWeb", 45152, "UWebApplication")]
BL2SDK.g_loadedClasses += [("UImageServer", 45170, "UWebApplication")]
BL2SDK.g_loadedClasses += [("AWebConnection", 46294, "ATcpLink")]
