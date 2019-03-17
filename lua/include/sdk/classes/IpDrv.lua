
local ffi = require("ffi")

ffi.cdef[[

// 0x48 
struct UClientBeaconAddressResolver_Data {
	// Last Offset: 0x3C
	int BeaconPort; // 0x3C (0x4)
	struct FName BeaconName; // 0x40 (0x8)
};

struct UClientBeaconAddressResolver {
	struct UObject_Data UObject;
	struct UClientBeaconAddressResolver_Data UClientBeaconAddressResolver;
};

// 0xB74 
struct UHTTPDownload_Data {
	// Last Offset: 0xA70
	struct FString RedirectToURL; // 0x48 (0xC)
	BOOL UseCompression :1 ; // 0x54 (0x4)
	const unsigned long: 0;
	const unsigned char Unknown1[0xA18]; // 0x58 (0xA18) > LAST OFFSET
	struct FString ProxyServerHost; // 0xA70 (0xC)
	int ProxyServerPort; // 0xA7C (0x4)
	BOOL MaxRedirection :1 ; // 0xA80 (0x4)
	const unsigned long: 0;
	float ConnectionTimeout; // 0xA84 (0x4)
	const unsigned char Unknown2[0xEC]; // 0xA88 (0xEC) MISSING END DATA
};

struct UHTTPDownload {
	struct UObject_Data UObject;
	struct UDownload_Data UDownload;
	struct UHTTPDownload_Data UHTTPDownload;
};

// 0x1A0 
struct AInternetLink_Data {
	// Last Offset: 0x188
	unsigned char LinkMode; // 0x188 (0x1) (Enum = ELinkMode)
	unsigned char InLineMode; // 0x189 (0x1) (Enum = ELineMode)
	unsigned char OutLineMode; // 0x18A (0x1) (Enum = ELineMode)
	unsigned char ReceiveMode; // 0x18B (0x1) (Enum = EReceiveMode)
	struct FPointer Socket; // 0x18C (0x4)
	int Port; // 0x190 (0x4)
	struct FPointer RemoteSocket; // 0x194 (0x4)
	struct FPointer PrivateResolveInfo; // 0x198 (0x4)
	int DataPending; // 0x19C (0x4)
};

struct AInternetLink {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AInternetLink_Data AInternetLink;
};

// 0x1C8 
struct ATcpLink_Data {
	// Last Offset: 0x1A0
	unsigned char LinkState; // 0x1A0 (0x1) (Enum = ELinkState)
	const unsigned char Unknown1[0x3]; // 0x1A1 (0x3) > LAST OFFSET
	struct FIpAddr RemoteAddr; // 0x1A4 (0x8)
	struct UClass* AcceptClass; // 0x1AC (0x4)
	struct TArray_unsigned_char SendFIFO; // 0x1B0 (0xC)
	struct FString RecvBuf; // 0x1BC (0xC)
};

struct ATcpLink {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AInternetLink_Data AInternetLink;
	struct ATcpLink_Data ATcpLink;
};

// 0x40 
struct UMCPBase_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FTickableObject; // 0x3C (0x4)
};

struct UMCPBase {
	struct UObject_Data UObject;
	struct UMCPBase_Data UMCPBase;
};

// 0x68 
struct UOnlineEventsInterfaceMcp_Data {
	// Last Offset: 0x40
	struct TArray_FEventUploadConfig EventUploadConfigs; // 0x40 (0xC)
	struct TArray_FPointer MCPEventPostObjects; // 0x4C (0xC)
	struct TArray_unsigned_char DisabledUploadTypes; // 0x58 (0xC)
	BOOL bBinaryStats :1 ; // 0x64 (0x4)
	const unsigned long: 0;
};

struct UOnlineEventsInterfaceMcp {
	struct UObject_Data UObject;
	struct UMCPBase_Data UMCPBase;
	struct UOnlineEventsInterfaceMcp_Data UOnlineEventsInterfaceMcp;
};

// 0x68 
struct UOnlineNewsInterfaceMcp_Data {
	// Last Offset: 0x40
	struct TArray_FNewsCacheEntry NewsItems; // 0x40 (0xC)
	struct TArray_FScriptDelegate ReadNewsDelegates; // 0x4C (0xC)
	BOOL bNeedsTicking :1 ; // 0x58 (0x4)
	const unsigned long: 0;
	struct FScriptDelegate __OnReadNewsCompleted__Delegate; // 0x5C (0xC)
};

struct UOnlineNewsInterfaceMcp {
	struct UObject_Data UObject;
	struct UMCPBase_Data UMCPBase;
	struct UOnlineNewsInterfaceMcp_Data UOnlineNewsInterfaceMcp;
};

// 0x90 
struct UOnlineTitleFileDownloadMcp_Data {
	// Last Offset: 0x40
	struct TArray_FScriptDelegate ReadTitleFileCompleteDelegates; // 0x40 (0xC)
	struct TArray_FTitleFileMcp TitleFiles; // 0x4C (0xC)
	int DownloadCount; // 0x58 (0x4)
	struct FString BaseUrl; // 0x5C (0xC)
	float TimeOut; // 0x68 (0x4)
	struct TArray_FFileNameToURLMapping FilesToUrls; // 0x6C (0xC)
	struct FScriptDelegate __OnReadTitleFileComplete__Delegate; // 0x78 (0xC)
	struct FScriptDelegate __OnShareTitleFileComplete__Delegate; // 0x84 (0xC)
};

struct UOnlineTitleFileDownloadMcp {
	struct UObject_Data UObject;
	struct UMCPBase_Data UMCPBase;
	struct UOnlineTitleFileDownloadMcp_Data UOnlineTitleFileDownloadMcp;
};

// 0x78 
struct UMeshBeacon_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FTickableObject; // 0x3C (0x4)
	int MeshBeaconPort; // 0x40 (0x4)
	struct FPointer Socket; // 0x44 (0x4)
	BOOL bIsInTick :1 ; // 0x48 (0x4)
	BOOL bWantsDeferredDestroy :1 ; // 0x48 (0x4)
	BOOL bShouldTick :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	float HeartbeatTimeout; // 0x4C (0x4)
	float ElapsedHeartbeatTime; // 0x50 (0x4)
	struct FName BeaconName; // 0x54 (0x8)
	int SocketSendBufferSize; // 0x5C (0x4)
	int SocketReceiveBufferSize; // 0x60 (0x4)
	int MaxBandwidthTestBufferSize; // 0x64 (0x4)
	int MinBandwidthTestBufferSize; // 0x68 (0x4)
	float MaxBandwidthTestSendTime; // 0x6C (0x4)
	float MaxBandwidthTestReceiveTime; // 0x70 (0x4)
	int MaxBandwidthHistoryEntries; // 0x74 (0x4)
};

struct UMeshBeacon {
	struct UObject_Data UObject;
	struct UMeshBeacon_Data UMeshBeacon;
};

// 0x128 
struct UMeshBeaconClient_Data {
	// Last Offset: 0x78
	struct FOnlineGameSearchResult HostPendingRequest; // 0x78 (0x8)
	struct FClientConnectionRequest ClientPendingRequest; // 0x80 (0x34)
	struct FClientBandwidthTestData CurrentBandwidthTest; // 0xB4 (0x14)
	unsigned char ClientBeaconState; // 0xC8 (0x1) (Enum = EMeshBeaconClientState)
	unsigned char ClientBeaconRequestType; // 0xC9 (0x1) (Enum = EMeshBeaconPacketType)
	const unsigned char Unknown1[0x2]; // 0xCA (0x2) > LAST OFFSET
	float ConnectionRequestTimeout; // 0xCC (0x4)
	float ConnectionRequestElapsedTime; // 0xD0 (0x4)
	struct FString ResolverClassName; // 0xD4 (0xC)
	struct UClass* ResolverClass; // 0xE0 (0x4)
	struct UClientBeaconAddressResolver* Resolver; // 0xE4 (0x4)
	BOOL bUsingRegisteredAddr :1 ; // 0xE8 (0x4)
	const unsigned long: 0;
	struct FScriptDelegate __OnConnectionRequestResult__Delegate; // 0xEC (0xC)
	struct FScriptDelegate __OnReceivedBandwidthTestRequest__Delegate; // 0xF8 (0xC)
	struct FScriptDelegate __OnReceivedBandwidthTestResults__Delegate; // 0x104 (0xC)
	struct FScriptDelegate __OnTravelRequestReceived__Delegate; // 0x110 (0xC)
	struct FScriptDelegate __OnCreateNewSessionRequestReceived__Delegate; // 0x11C (0xC)
};

struct UMeshBeaconClient {
	struct UObject_Data UObject;
	struct UMeshBeacon_Data UMeshBeacon;
	struct UMeshBeaconClient_Data UMeshBeaconClient;
};

// 0xEC 
struct UMeshBeaconHost_Data {
	// Last Offset: 0x78
	struct TArray_FClientMeshBeaconConnection ClientConnections; // 0x78 (0xC)
	struct TArray_FUniqueNetId PendingPlayerConnections; // 0x84 (0xC)
	struct FUniqueNetId OwningPlayerId; // 0x90 (0x18)
	BOOL bAllowBandwidthTesting :1 ; // 0xA8 (0x4)
	const unsigned long: 0;
	int ConnectionBacklog; // 0xAC (0x4)
	struct FScriptDelegate __OnReceivedClientConnectionRequest__Delegate; // 0xB0 (0xC)
	struct FScriptDelegate __OnStartedBandwidthTest__Delegate; // 0xBC (0xC)
	struct FScriptDelegate __OnFinishedBandwidthTest__Delegate; // 0xC8 (0xC)
	struct FScriptDelegate __OnAllPendingPlayersConnected__Delegate; // 0xD4 (0xC)
	struct FScriptDelegate __OnReceivedClientCreateNewSessionResult__Delegate; // 0xE0 (0xC)
};

struct UMeshBeaconHost {
	struct UObject_Data UObject;
	struct UMeshBeacon_Data UMeshBeacon;
	struct UMeshBeaconHost_Data UMeshBeaconHost;
};

// 0xF8 
struct UOnlineSubsystemCommonImpl_Data {
	// Last Offset: 0xE0
	struct FPointer VoiceEngine; // 0xE0 (0x4)
	int MaxLocalTalkers; // 0xE4 (0x4)
	int MaxRemoteTalkers; // 0xE8 (0x4)
	BOOL bIsUsingSpeechRecognition :1 ; // 0xEC (0x4)
	const unsigned long: 0;
	struct UOnlineGameInterfaceImpl* GameInterfaceImpl; // 0xF0 (0x4)
	struct UOnlineAuthInterfaceImpl* AuthInterfaceImpl; // 0xF4 (0x4)
};

struct UOnlineSubsystemCommonImpl {
	struct UObject_Data UObject;
	struct UOnlineSubsystem_Data UOnlineSubsystem;
	struct UOnlineSubsystemCommonImpl_Data UOnlineSubsystemCommonImpl;
};

// 0x194 
struct UOnlineAuthInterfaceImpl_Data {
	// Last Offset: 0x10C
	struct UOnlineSubsystemCommonImpl* OwningSubsystem; // 0x10C (0x4)
	struct TArray_FScriptDelegate AuthReadyDelegates; // 0x110 (0xC)
	struct TArray_FScriptDelegate AuthRequestClientDelegates; // 0x11C (0xC)
	struct TArray_FScriptDelegate AuthRequestServerDelegates; // 0x128 (0xC)
	struct TArray_FScriptDelegate AuthBlobReceivedClientDelegates; // 0x134 (0xC)
	struct TArray_FScriptDelegate AuthBlobReceivedServerDelegates; // 0x140 (0xC)
	struct TArray_FScriptDelegate AuthCompleteClientDelegates; // 0x14C (0xC)
	struct TArray_FScriptDelegate AuthCompleteServerDelegates; // 0x158 (0xC)
	struct TArray_FScriptDelegate AuthKillClientDelegates; // 0x164 (0xC)
	struct TArray_FScriptDelegate AuthRetryServerDelegates; // 0x170 (0xC)
	struct TArray_FScriptDelegate ClientConnectionCloseDelegates; // 0x17C (0xC)
	struct TArray_FScriptDelegate ServerConnectionCloseDelegates; // 0x188 (0xC)
};

struct UOnlineAuthInterfaceImpl {
	struct UObject_Data UObject;
	struct UOnlineAuthInterfaceBaseImpl_Data UOnlineAuthInterfaceBaseImpl;
	struct UOnlineAuthInterfaceImpl_Data UOnlineAuthInterfaceImpl;
};

// 0x1C4 
struct UOnlineGameInterfaceImpl_Data {
	// Last Offset: 0x3C
	struct UOnlineSubsystemCommonImpl* OwningSubsystem; // 0x3C (0x4)
	struct UOnlineGameSettings* GameSettings; // 0x40 (0x4)
	struct UOnlineGameSearch* GameSearch; // 0x44 (0x4)
	unsigned char CurrentGameState; // 0x48 (0x1) (Enum = EOnlineGameState)
	unsigned char LanBeaconState; // 0x49 (0x1) (Enum = ELanBeaconState)
	unsigned char LanNonce[8]; // 0x4A (0x8)
	const unsigned char Unknown1[0x2]; // 0x52 (0x2) > LAST OFFSET
	struct TArray_FScriptDelegate CreateOnlineGameCompleteDelegates; // 0x54 (0xC)
	struct TArray_FScriptDelegate UpdateOnlineGameCompleteDelegates; // 0x60 (0xC)
	struct TArray_FScriptDelegate DestroyOnlineGameCompleteDelegates; // 0x6C (0xC)
	struct TArray_FScriptDelegate JoinOnlineGameCompleteDelegates; // 0x78 (0xC)
	struct TArray_FScriptDelegate MigrateOnlineGameCompleteDelegates; // 0x84 (0xC)
	struct TArray_FScriptDelegate JoinMigratedOnlineGameCompleteDelegates; // 0x90 (0xC)
	struct TArray_FScriptDelegate RecalculateSkillRatingCompleteDelegates; // 0x9C (0xC)
	struct TArray_FScriptDelegate StartOnlineGameCompleteDelegates; // 0xA8 (0xC)
	struct TArray_FScriptDelegate EndOnlineGameCompleteDelegates; // 0xB4 (0xC)
	struct TArray_FScriptDelegate FindOnlineGamesCompleteDelegates; // 0xC0 (0xC)
	struct TArray_FScriptDelegate CancelFindOnlineGamesCompleteDelegates; // 0xCC (0xC)
	int LanAnnouncePort; // 0xD8 (0x4)
	int LanGameUniqueId; // 0xDC (0x4)
	int LanPacketPlatformMask; // 0xE0 (0x4)
	float LanQueryTimeLeft; // 0xE4 (0x4)
	float LanQueryTimeout; // 0xE8 (0x4)
	struct FPointer LanBeacon; // 0xEC (0x4)
	struct FPointer SessionInfo; // 0xF0 (0x4)
	int NATResolutionTimeout; // 0xF4 (0x4)
	struct FScriptDelegate __OnFindOnlineGamesComplete__Delegate; // 0xF8 (0xC)
	struct FScriptDelegate __OnCreateOnlineGameComplete__Delegate; // 0x104 (0xC)
	struct FScriptDelegate __OnUpdateOnlineGameComplete__Delegate; // 0x110 (0xC)
	struct FScriptDelegate __OnDestroyOnlineGameComplete__Delegate; // 0x11C (0xC)
	struct FScriptDelegate __OnCancelFindOnlineGamesComplete__Delegate; // 0x128 (0xC)
	struct FScriptDelegate __OnJoinOnlineGameComplete__Delegate; // 0x134 (0xC)
	struct FScriptDelegate __OnRegisterPlayerComplete__Delegate; // 0x140 (0xC)
	struct FScriptDelegate __OnUnregisterPlayerComplete__Delegate; // 0x14C (0xC)
	struct FScriptDelegate __OnStartOnlineGameComplete__Delegate; // 0x158 (0xC)
	struct FScriptDelegate __OnEndOnlineGameComplete__Delegate; // 0x164 (0xC)
	struct FScriptDelegate __OnArbitrationRegistrationComplete__Delegate; // 0x170 (0xC)
	struct FScriptDelegate __OnGameInviteAccepted__Delegate; // 0x17C (0xC)
	struct FScriptDelegate __OnGameInviteProcessingStarted__Delegate; // 0x188 (0xC)
	struct FScriptDelegate __OnRecalculateSkillRatingComplete__Delegate; // 0x194 (0xC)
	struct FScriptDelegate __OnMigrateOnlineGameComplete__Delegate; // 0x1A0 (0xC)
	struct FScriptDelegate __OnJoinMigratedOnlineGameComplete__Delegate; // 0x1AC (0xC)
	struct FScriptDelegate __OnQosStatusChanged__Delegate; // 0x1B8 (0xC)
};

struct UOnlineGameInterfaceImpl {
	struct UObject_Data UObject;
	struct UOnlineGameInterfaceImpl_Data UOnlineGameInterfaceImpl;
};

// 0xE0 
struct UOnlinePlaylistManager_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FTickableObject; // 0x3C (0x4)
	struct TArray_FPlaylist Playlists; // 0x40 (0xC)
	struct TArray_FString PlaylistFileNames; // 0x4C (0xC)
	struct TArray_FName DatastoresToRefresh; // 0x58 (0xC)
	int DownloadCount; // 0x64 (0x4)
	int SuccessfulCount; // 0x68 (0x4)
	int VersionNumber; // 0x6C (0x4)
	struct TArray_FPlaylistPopulation PopulationData; // 0x70 (0xC)
	int WorldwideTotalPlayers; // 0x7C (0x4)
	int RegionTotalPlayers; // 0x80 (0x4)
	struct FScriptInterface TitleFileInterface; // 0x84 (0x8)
	struct FString PopulationFileName; // 0x8C (0xC)
	float NextPlaylistPopulationUpdateTime; // 0x98 (0x4)
	float PlaylistPopulationUpdateInterval; // 0x9C (0x4)
	int MinPlaylistIdToReport; // 0xA0 (0x4)
	int CurrentPlaylistId; // 0xA4 (0x4)
	struct FName EventsInterfaceName; // 0xA8 (0x8)
	int DataCenterId; // 0xB0 (0x4)
	struct FString DataCenterFileName; // 0xB4 (0xC)
	float LastPlaylistDownloadTime; // 0xC0 (0x4)
	float PlaylistRefreshInterval; // 0xC4 (0x4)
	struct FScriptDelegate __OnReadPlaylistComplete__Delegate; // 0xC8 (0xC)
	struct FScriptDelegate __OnPlaylistPopulationDataUpdated__Delegate; // 0xD4 (0xC)
};

struct UOnlinePlaylistManager {
	struct UObject_Data UObject;
	struct UOnlinePlaylistManager_Data UOnlinePlaylistManager;
};

// 0x68 
struct UPartyBeacon_Data {
	// Last Offset: 0x3C
	struct FPointer VfTable_FTickableObject; // 0x3C (0x4)
	int PartyBeaconPort; // 0x40 (0x4)
	struct FPointer Socket; // 0x44 (0x4)
	BOOL bIsInTick :1 ; // 0x48 (0x4)
	BOOL bWantsDeferredDestroy :1 ; // 0x48 (0x4)
	BOOL bShouldTick :1 ; // 0x48 (0x4)
	const unsigned long: 0;
	float HeartbeatTimeout; // 0x4C (0x4)
	float ElapsedHeartbeatTime; // 0x50 (0x4)
	struct FName BeaconName; // 0x54 (0x8)
	struct FScriptDelegate __OnDestroyComplete__Delegate; // 0x5C (0xC)
};

struct UPartyBeacon {
	struct UObject_Data UObject;
	struct UPartyBeacon_Data UPartyBeacon;
};

// 0xF4 
struct UPartyBeaconClient_Data {
	// Last Offset: 0x68
	struct FOnlineGameSearchResult HostPendingRequest; // 0x68 (0x8)
	struct FPartyReservation PendingRequest; // 0x70 (0x28)
	unsigned char ClientBeaconState; // 0x98 (0x1) (Enum = EPartyBeaconClientState)
	unsigned char ClientBeaconRequestType; // 0x99 (0x1) (Enum = EPartyBeaconClientRequest)
	const unsigned char Unknown1[0x2]; // 0x9A (0x2) > LAST OFFSET
	float ReservationRequestTimeout; // 0x9C (0x4)
	float ReservationRequestElapsedTime; // 0xA0 (0x4)
	struct FString ResolverClassName; // 0xA4 (0xC)
	struct UClass* ResolverClass; // 0xB0 (0x4)
	struct UClientBeaconAddressResolver* Resolver; // 0xB4 (0x4)
	struct FScriptDelegate __OnReservationRequestComplete__Delegate; // 0xB8 (0xC)
	struct FScriptDelegate __OnReservationCountUpdated__Delegate; // 0xC4 (0xC)
	struct FScriptDelegate __OnTravelRequestReceived__Delegate; // 0xD0 (0xC)
	struct FScriptDelegate __OnHostIsReady__Delegate; // 0xDC (0xC)
	struct FScriptDelegate __OnHostHasCancelled__Delegate; // 0xE8 (0xC)
};

struct UPartyBeaconClient {
	struct UObject_Data UObject;
	struct UPartyBeacon_Data UPartyBeacon;
	struct UPartyBeaconClient_Data UPartyBeaconClient;
};

// 0xD0 
struct UPartyBeaconHost_Data {
	// Last Offset: 0x68
	struct TArray_FClientBeaconConnection Clients; // 0x68 (0xC)
	int NumTeams; // 0x74 (0x4)
	int NumPlayersPerTeam; // 0x78 (0x4)
	int NumReservations; // 0x7C (0x4)
	int NumConsumedReservations; // 0x80 (0x4)
	struct TArray_FPartyReservation Reservations; // 0x84 (0xC)
	struct FName OnlineSessionName; // 0x90 (0x8)
	int ConnectionBacklog; // 0x98 (0x4)
	int ForceTeamNum; // 0x9C (0x4)
	int ReservedHostTeamNum; // 0xA0 (0x4)
	BOOL bBestFitTeamAssignment :1 ; // 0xA4 (0x4)
	const unsigned long: 0;
	unsigned char BeaconState; // 0xA8 (0x1) (Enum = EPartyBeaconHostState)
	const unsigned char Unknown1[0x3]; // 0xA9 (0x3) > LAST OFFSET
	struct FScriptDelegate __OnReservationChange__Delegate; // 0xAC (0xC)
	struct FScriptDelegate __OnReservationsFull__Delegate; // 0xB8 (0xC)
	struct FScriptDelegate __OnClientCancellationReceived__Delegate; // 0xC4 (0xC)
};

struct UPartyBeaconHost {
	struct UObject_Data UObject;
	struct UPartyBeacon_Data UPartyBeacon;
	struct UPartyBeaconHost_Data UPartyBeaconHost;
};

// 0x5078 
struct UTcpipConnection_Data {
	// Last Offset: 0x5058
	const unsigned char Unknown1[0x20]; // 0x5058 (0x20) MISSING END DATA
};

struct UTcpipConnection {
	struct UObject_Data UObject;
	struct UPlayer_Data UPlayer;
	struct UNetConnection_Data UNetConnection;
	struct UTcpipConnection_Data UTcpipConnection;
};

// 0x1EC 
struct UTcpNetDriver_Data {
	// Last Offset: 0x1CC
	BOOL AllowPlayerPortUnreach; // 0x1CC (0x4)
	BOOL LogPortUnreach :1 ; // 0x1D0 (0x4)
	const unsigned long: 0;
	const unsigned char Unknown1[0x18]; // 0x1D4 (0x18) MISSING END DATA
};

struct UTcpNetDriver {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UNetDriver_Data UNetDriver;
	struct UTcpNetDriver_Data UTcpNetDriver;
};

// 0xF8 
struct UWebRequest_Data {
	// Last Offset: 0x3C
	struct FString RemoteAddr; // 0x3C (0xC)
	struct FString URI; // 0x48 (0xC)
	struct FString UserName; // 0x54 (0xC)
	struct FString Password; // 0x60 (0xC)
	int ContentLength; // 0x6C (0x4)
	struct FString ContentType; // 0x70 (0xC)
	unsigned char RequestType; // 0x7C (0x1) (Enum = ERequestType)
	const unsigned char Unknown1[0x3]; // 0x7D (0x3) > LAST OFFSET
	struct FMap_Mirror HeaderMap; // 0x80 (0x3C)
	struct FMap_Mirror VariableMap; // 0xBC (0x3C)
};

struct UWebRequest {
	struct UObject_Data UObject;
	struct UWebRequest_Data UWebRequest;
};

// 0xA4 
struct UWebResponse_Data {
	// Last Offset: 0x3C
	struct TArray_FString headers; // 0x3C (0xC)
	struct FMap_Mirror ReplacementMap; // 0x48 (0x3C)
	struct FString IncludePath; // 0x84 (0xC)
	struct FString CharSet; // 0x90 (0xC)
	struct AWebConnection* Connection; // 0x9C (0x4)
	BOOL bSentText :1 ; // 0xA0 (0x4)
	BOOL bSentResponse :1 ; // 0xA0 (0x4)
	const unsigned long: 0;
};

struct UWebResponse {
	struct UObject_Data UObject;
	struct UWebResponse_Data UWebResponse;
};

// 0xA8 
struct UOnlinePlaylistProvider_Data {
	// Last Offset: 0x88
	int PlaylistId; // 0x88 (0x4)
	struct TArray_FName PlaylistGameTypeNames; // 0x8C (0xC)
	struct FString DisplayName; // 0x98 (0xC)
	int Priority; // 0xA4 (0x4)
};

struct UOnlinePlaylistProvider {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIPropertyDataProvider_Data UUIPropertyDataProvider;
	struct UUIResourceDataProvider_Data UUIResourceDataProvider;
	struct UOnlinePlaylistProvider_Data UOnlinePlaylistProvider;
};

// 0xCC 
struct UUIDataStore_OnlinePlaylists_Data {
	// Last Offset: 0x84
	struct FPointer VfTable_IUIListElementProvider; // 0x84 (0x4)
	struct FString ProviderClassName; // 0x88 (0xC)
	struct UClass* ProviderClass; // 0x94 (0x4)
	struct TArray_UUIResourceDataProviderPtr RankedDataProviders; // 0x98 (0xC)
	struct TArray_UUIResourceDataProviderPtr UnrankedDataProviders; // 0xA4 (0xC)
	struct TArray_UUIResourceDataProviderPtr RecModeDataProviders; // 0xB0 (0xC)
	struct TArray_UUIResourceDataProviderPtr PrivateDataProviders; // 0xBC (0xC)
	struct UOnlinePlaylistManager* PlaylistMan; // 0xC8 (0x4)
};

struct UUIDataStore_OnlinePlaylists {
	struct UObject_Data UObject;
	struct UUIRoot_Data UUIRoot;
	struct UUIDataProvider_Data UUIDataProvider;
	struct UUIDataStore_Data UUIDataStore;
	struct UUIDataStore_OnlinePlaylists_Data UUIDataStore_OnlinePlaylists;
};

// 0x50 
struct UWebApplication_Data {
	// Last Offset: 0x3C
	struct AWorldInfo* WorldInfo; // 0x3C (0x4)
	struct AWebServer* WebServer; // 0x40 (0x4)
	struct FString Path; // 0x44 (0xC)
};

struct UWebApplication {
	struct UObject_Data UObject;
	struct UWebApplication_Data UWebApplication;
};

// 0x314 
struct AWebServer_Data {
	// Last Offset: 0x1C8
	struct FString ServerName; // 0x1C8 (0xC)
	struct FString Applications[10]; // 0x1D4 (0x78)
	struct FString ApplicationPaths[10]; // 0x24C (0x78)
	BOOL bEnabled :1 ; // 0x2C4 (0x4)
	const unsigned long: 0;
	int ListenPort; // 0x2C8 (0x4)
	int MaxConnections; // 0x2CC (0x4)
	int DefaultApplication; // 0x2D0 (0x4)
	int ExpirationSeconds; // 0x2D4 (0x4)
	struct FString ServerURL; // 0x2D8 (0xC)
	struct UWebApplication* ApplicationObjects[10]; // 0x2E4 (0x28)
	int ConnectionCount; // 0x30C (0x4)
	int ConnID; // 0x310 (0x4)
};

struct AWebServer {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AInternetLink_Data AInternetLink;
	struct ATcpLink_Data ATcpLink;
	struct AWebServer_Data AWebServer;
};

// 0x50 
struct UHelloWeb_Data {
	// Last Offset: 0x50
};

struct UHelloWeb {
	struct UObject_Data UObject;
	struct UWebApplication_Data UWebApplication;
	struct UHelloWeb_Data UHelloWeb;
};

// 0x50 
struct UImageServer_Data {
	// Last Offset: 0x50
};

struct UImageServer {
	struct UObject_Data UObject;
	struct UWebApplication_Data UWebApplication;
	struct UImageServer_Data UImageServer;
};

// 0x1F8 
struct AWebConnection_Data {
	// Last Offset: 0x1C8
	struct AWebServer* WebServer; // 0x1C8 (0x4)
	struct FString ReceivedData; // 0x1CC (0xC)
	struct UWebRequest* Request; // 0x1D8 (0x4)
	struct UWebResponse* Response; // 0x1DC (0x4)
	struct UWebApplication* Application; // 0x1E0 (0x4)
	BOOL bDelayCleanup :1 ; // 0x1E4 (0x4)
	const unsigned long: 0;
	int RawBytesExpecting; // 0x1E8 (0x4)
	int MaxValueLength; // 0x1EC (0x4)
	int MaxLineLength; // 0x1F0 (0x4)
	int ConnID; // 0x1F4 (0x4)
};

struct AWebConnection {
	struct UObject_Data UObject;
	struct AActor_Data AActor;
	struct AInfo_Data AInfo;
	struct AInternetLink_Data AInternetLink;
	struct ATcpLink_Data ATcpLink;
	struct AWebConnection_Data AWebConnection;
};
]]

table.insert(g_loadedClasses, { "UClientBeaconAddressResolver", 3465, "UObject" })
table.insert(g_loadedClasses, { "UHTTPDownload", 3467, "UDownload" })
table.insert(g_loadedClasses, { "AInternetLink", 3475, "AInfo" })
table.insert(g_loadedClasses, { "ATcpLink", 3477, "AInternetLink" })
table.insert(g_loadedClasses, { "UMCPBase", 3479, "UObject" })
table.insert(g_loadedClasses, { "UOnlineEventsInterfaceMcp", 3481, "UMCPBase" })
table.insert(g_loadedClasses, { "UOnlineNewsInterfaceMcp", 3483, "UMCPBase" })
table.insert(g_loadedClasses, { "UOnlineTitleFileDownloadMcp", 3485, "UMCPBase" })
table.insert(g_loadedClasses, { "UMeshBeacon", 3487, "UObject" })
table.insert(g_loadedClasses, { "UMeshBeaconClient", 3489, "UMeshBeacon" })
table.insert(g_loadedClasses, { "UMeshBeaconHost", 3491, "UMeshBeacon" })
table.insert(g_loadedClasses, { "UOnlineSubsystemCommonImpl", 3493, "UOnlineSubsystem" })
table.insert(g_loadedClasses, { "UOnlineAuthInterfaceImpl", 3495, "UOnlineAuthInterfaceBaseImpl" })
table.insert(g_loadedClasses, { "UOnlineGameInterfaceImpl", 3497, "UObject" })
table.insert(g_loadedClasses, { "UOnlinePlaylistManager", 3499, "UObject" })
table.insert(g_loadedClasses, { "UPartyBeacon", 3501, "UObject" })
table.insert(g_loadedClasses, { "UPartyBeaconClient", 3503, "UPartyBeacon" })
table.insert(g_loadedClasses, { "UPartyBeaconHost", 3505, "UPartyBeacon" })
table.insert(g_loadedClasses, { "UTcpipConnection", 3507, "UNetConnection" })
table.insert(g_loadedClasses, { "UTcpNetDriver", 3509, "UNetDriver" })
table.insert(g_loadedClasses, { "UWebRequest", 3513, "UObject" })
table.insert(g_loadedClasses, { "UWebResponse", 3515, "UObject" })
table.insert(g_loadedClasses, { "UOnlinePlaylistProvider", 3517, "UUIResourceDataProvider" })
table.insert(g_loadedClasses, { "UUIDataStore_OnlinePlaylists", 3519, "UUIDataStore" })
table.insert(g_loadedClasses, { "UWebApplication", 45134, "UObject" })
table.insert(g_loadedClasses, { "AWebServer", 45137, "ATcpLink" })
table.insert(g_loadedClasses, { "UHelloWeb", 45153, "UWebApplication" })
table.insert(g_loadedClasses, { "UImageServer", 45171, "UWebApplication" })
table.insert(g_loadedClasses, { "AWebConnection", 46295, "ATcpLink" })
