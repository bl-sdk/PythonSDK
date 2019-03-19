from ctypes import *
import BL2SDK


class UClientBeaconAddressResolver_Data(Structure):
    pass


class UClientBeaconAddressResolver(Structure):
    pass


class UHTTPDownload_Data(Structure):
    pass


class UHTTPDownload(Structure):
    pass


class AInternetLink_Data(Structure):
    pass


class AInternetLink(Structure):
    pass


class ATcpLink_Data(Structure):
    pass


class ATcpLink(Structure):
    pass


class UMCPBase_Data(Structure):
    pass


class UMCPBase(Structure):
    pass


class UOnlineEventsInterfaceMcp_Data(Structure):
    pass


class UOnlineEventsInterfaceMcp(Structure):
    pass


class UOnlineNewsInterfaceMcp_Data(Structure):
    pass


class UOnlineNewsInterfaceMcp(Structure):
    pass


class UOnlineTitleFileDownloadMcp_Data(Structure):
    pass


class UOnlineTitleFileDownloadMcp(Structure):
    pass


class UMeshBeacon_Data(Structure):
    pass


class UMeshBeacon(Structure):
    pass


class UMeshBeaconClient_Data(Structure):
    pass


class UMeshBeaconClient(Structure):
    pass


class UMeshBeaconHost_Data(Structure):
    pass


class UMeshBeaconHost(Structure):
    pass


class UOnlineSubsystemCommonImpl_Data(Structure):
    pass


class UOnlineSubsystemCommonImpl(Structure):
    pass


class UOnlineAuthInterfaceImpl_Data(Structure):
    pass


class UOnlineAuthInterfaceImpl(Structure):
    pass


class UOnlineGameInterfaceImpl_Data(Structure):
    pass


class UOnlineGameInterfaceImpl(Structure):
    pass


class UOnlinePlaylistManager_Data(Structure):
    pass


class UOnlinePlaylistManager(Structure):
    pass


class UPartyBeacon_Data(Structure):
    pass


class UPartyBeacon(Structure):
    pass


class UPartyBeaconClient_Data(Structure):
    pass


class UPartyBeaconClient(Structure):
    pass


class UPartyBeaconHost_Data(Structure):
    pass


class UPartyBeaconHost(Structure):
    pass


class UTcpipConnection_Data(Structure):
    pass


class UTcpipConnection(Structure):
    pass


class UTcpNetDriver_Data(Structure):
    pass


class UTcpNetDriver(Structure):
    pass


class UWebRequest_Data(Structure):
    pass


class UWebRequest(Structure):
    pass


class UWebResponse_Data(Structure):
    pass


class UWebResponse(Structure):
    pass


class UOnlinePlaylistProvider_Data(Structure):
    pass


class UOnlinePlaylistProvider(Structure):
    pass


class UUIDataStore_OnlinePlaylists_Data(Structure):
    pass


class UUIDataStore_OnlinePlaylists(Structure):
    pass


class UWebApplication_Data(Structure):
    pass


class UWebApplication(Structure):
    pass


class AWebServer_Data(Structure):
    pass


class AWebServer(Structure):
    pass


class UHelloWeb_Data(Structure):
    pass


class UHelloWeb(Structure):
    pass


class UImageServer_Data(Structure):
    pass


class UImageServer(Structure):
    pass


class AWebConnection_Data(Structure):
    pass


class AWebConnection(Structure):
    pass


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *
from ..structs.GearboxFramework import *
from ..structs.WillowGame import *
from ..structs.AkAudio import *
from ..structs.IpDrv import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *
from ..classes.AkAudio import *


def init():

    UClientBeaconAddressResolver_Data._fields_ = [
        ("BeaconPort", c_int),
        ("BeaconName", FName),
    ]

    UClientBeaconAddressResolver._fields_ = [
        ("UObject", UObject_Data),
        ("UClientBeaconAddressResolver", UClientBeaconAddressResolver_Data),
    ]

    UHTTPDownload_Data._fields_ = [
        ("RedirectToURL", FString),
        ("UseCompression", c_bool, 1),
        ("Unknown1", c_ubyte * 0xA18),
        ("ProxyServerHost", FString),
        ("ProxyServerPort", c_int),
        ("MaxRedirection", c_bool, 1),
        ("ConnectionTimeout", c_float),
        ("Unknown2", c_ubyte * 0xEC),
    ]

    UHTTPDownload._fields_ = [
        ("UObject", UObject_Data),
        ("UDownload", UDownload_Data),
        ("UHTTPDownload", UHTTPDownload_Data),
    ]

    AInternetLink_Data._fields_ = [
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

    AInternetLink._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AInternetLink", AInternetLink_Data),
    ]

    ATcpLink_Data._fields_ = [
        ("LinkState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("RemoteAddr", FIpAddr),
        ("AcceptClass", POINTER(UClass)),
        ("SendFIFO", TArray_unsigned_char),
        ("RecvBuf", FString),
    ]

    ATcpLink._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AInternetLink", AInternetLink_Data),
        ("ATcpLink", ATcpLink_Data),
    ]

    UMCPBase_Data._fields_ = [("VfTable_FTickableObject", FPointer)]

    UMCPBase._fields_ = [("UObject", UObject_Data), ("UMCPBase", UMCPBase_Data)]

    UOnlineEventsInterfaceMcp_Data._fields_ = [
        ("EventUploadConfigs", TArray_FEventUploadConfig),
        ("MCPEventPostObjects", TArray_FPointer),
        ("DisabledUploadTypes", TArray_unsigned_char),
        ("bBinaryStats", c_bool, 1),
    ]

    UOnlineEventsInterfaceMcp._fields_ = [
        ("UObject", UObject_Data),
        ("UMCPBase", UMCPBase_Data),
        ("UOnlineEventsInterfaceMcp", UOnlineEventsInterfaceMcp_Data),
    ]

    UOnlineNewsInterfaceMcp_Data._fields_ = [
        ("NewsItems", TArray_FNewsCacheEntry),
        ("ReadNewsDelegates", TArray_FScriptDelegate),
        ("bNeedsTicking", c_bool, 1),
        ("__OnReadNewsCompleted__Delegate", FScriptDelegate),
    ]

    UOnlineNewsInterfaceMcp._fields_ = [
        ("UObject", UObject_Data),
        ("UMCPBase", UMCPBase_Data),
        ("UOnlineNewsInterfaceMcp", UOnlineNewsInterfaceMcp_Data),
    ]

    UOnlineTitleFileDownloadMcp_Data._fields_ = [
        ("ReadTitleFileCompleteDelegates", TArray_FScriptDelegate),
        ("TitleFiles", TArray_FTitleFileMcp),
        ("DownloadCount", c_int),
        ("BaseUrl", FString),
        ("TimeOut", c_float),
        ("FilesToUrls", TArray_FFileNameToURLMapping),
        ("__OnReadTitleFileComplete__Delegate", FScriptDelegate),
        ("__OnShareTitleFileComplete__Delegate", FScriptDelegate),
    ]

    UOnlineTitleFileDownloadMcp._fields_ = [
        ("UObject", UObject_Data),
        ("UMCPBase", UMCPBase_Data),
        ("UOnlineTitleFileDownloadMcp", UOnlineTitleFileDownloadMcp_Data),
    ]

    UMeshBeacon_Data._fields_ = [
        ("VfTable_FTickableObject", FPointer),
        ("MeshBeaconPort", c_int),
        ("Socket", FPointer),
        ("bIsInTick", c_bool, 1),
        ("bWantsDeferredDestroy", c_bool, 1),
        ("bShouldTick", c_bool, 1),
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

    UMeshBeacon._fields_ = [
        ("UObject", UObject_Data),
        ("UMeshBeacon", UMeshBeacon_Data),
    ]

    UMeshBeaconClient_Data._fields_ = [
        ("HostPendingRequest", FOnlineGameSearchResult),
        ("ClientPendingRequest", FClientConnectionRequest),
        ("CurrentBandwidthTest", FClientBandwidthTestData),
        ("ClientBeaconState", c_ubyte),
        ("ClientBeaconRequestType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("ConnectionRequestTimeout", c_float),
        ("ConnectionRequestElapsedTime", c_float),
        ("ResolverClassName", FString),
        ("ResolverClass", POINTER(UClass)),
        ("Resolver", POINTER(UClientBeaconAddressResolver)),
        ("bUsingRegisteredAddr", c_bool, 1),
        ("__OnConnectionRequestResult__Delegate", FScriptDelegate),
        ("__OnReceivedBandwidthTestRequest__Delegate", FScriptDelegate),
        ("__OnReceivedBandwidthTestResults__Delegate", FScriptDelegate),
        ("__OnTravelRequestReceived__Delegate", FScriptDelegate),
        ("__OnCreateNewSessionRequestReceived__Delegate", FScriptDelegate),
    ]

    UMeshBeaconClient._fields_ = [
        ("UObject", UObject_Data),
        ("UMeshBeacon", UMeshBeacon_Data),
        ("UMeshBeaconClient", UMeshBeaconClient_Data),
    ]

    UMeshBeaconHost_Data._fields_ = [
        ("ClientConnections", TArray_FClientMeshBeaconConnection),
        ("PendingPlayerConnections", TArray_FUniqueNetId),
        ("OwningPlayerId", FUniqueNetId),
        ("bAllowBandwidthTesting", c_bool, 1),
        ("ConnectionBacklog", c_int),
        ("__OnReceivedClientConnectionRequest__Delegate", FScriptDelegate),
        ("__OnStartedBandwidthTest__Delegate", FScriptDelegate),
        ("__OnFinishedBandwidthTest__Delegate", FScriptDelegate),
        ("__OnAllPendingPlayersConnected__Delegate", FScriptDelegate),
        ("__OnReceivedClientCreateNewSessionResult__Delegate", FScriptDelegate),
    ]

    UMeshBeaconHost._fields_ = [
        ("UObject", UObject_Data),
        ("UMeshBeacon", UMeshBeacon_Data),
        ("UMeshBeaconHost", UMeshBeaconHost_Data),
    ]

    UOnlineSubsystemCommonImpl_Data._fields_ = [
        ("VoiceEngine", FPointer),
        ("MaxLocalTalkers", c_int),
        ("MaxRemoteTalkers", c_int),
        ("bIsUsingSpeechRecognition", c_bool, 1),
        ("GameInterfaceImpl", POINTER(UOnlineGameInterfaceImpl)),
        ("AuthInterfaceImpl", POINTER(UOnlineAuthInterfaceImpl)),
    ]

    UOnlineSubsystemCommonImpl._fields_ = [
        ("UObject", UObject_Data),
        ("UOnlineSubsystem", UOnlineSubsystem_Data),
        ("UOnlineSubsystemCommonImpl", UOnlineSubsystemCommonImpl_Data),
    ]

    UOnlineAuthInterfaceImpl_Data._fields_ = [
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

    UOnlineAuthInterfaceImpl._fields_ = [
        ("UObject", UObject_Data),
        ("UOnlineAuthInterfaceBaseImpl", UOnlineAuthInterfaceBaseImpl_Data),
        ("UOnlineAuthInterfaceImpl", UOnlineAuthInterfaceImpl_Data),
    ]

    UOnlineGameInterfaceImpl_Data._fields_ = [
        ("OwningSubsystem", POINTER(UOnlineSubsystemCommonImpl)),
        ("GameSettings", POINTER(UOnlineGameSettings)),
        ("GameSearch", POINTER(UOnlineGameSearch)),
        ("CurrentGameState", c_ubyte),
        ("LanBeaconState", c_ubyte),
        ("LanNonce", c_ubyte * 8),
        ("Unknown1", c_ubyte * 0x2),
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

    UOnlineGameInterfaceImpl._fields_ = [
        ("UObject", UObject_Data),
        ("UOnlineGameInterfaceImpl", UOnlineGameInterfaceImpl_Data),
    ]

    UOnlinePlaylistManager_Data._fields_ = [
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

    UOnlinePlaylistManager._fields_ = [
        ("UObject", UObject_Data),
        ("UOnlinePlaylistManager", UOnlinePlaylistManager_Data),
    ]

    UPartyBeacon_Data._fields_ = [
        ("VfTable_FTickableObject", FPointer),
        ("PartyBeaconPort", c_int),
        ("Socket", FPointer),
        ("bIsInTick", c_bool, 1),
        ("bWantsDeferredDestroy", c_bool, 1),
        ("bShouldTick", c_bool, 1),
        ("HeartbeatTimeout", c_float),
        ("ElapsedHeartbeatTime", c_float),
        ("BeaconName", FName),
        ("__OnDestroyComplete__Delegate", FScriptDelegate),
    ]

    UPartyBeacon._fields_ = [
        ("UObject", UObject_Data),
        ("UPartyBeacon", UPartyBeacon_Data),
    ]

    UPartyBeaconClient_Data._fields_ = [
        ("HostPendingRequest", FOnlineGameSearchResult),
        ("PendingRequest", FPartyReservation),
        ("ClientBeaconState", c_ubyte),
        ("ClientBeaconRequestType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
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

    UPartyBeaconClient._fields_ = [
        ("UObject", UObject_Data),
        ("UPartyBeacon", UPartyBeacon_Data),
        ("UPartyBeaconClient", UPartyBeaconClient_Data),
    ]

    UPartyBeaconHost_Data._fields_ = [
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
        ("BeaconState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("__OnReservationChange__Delegate", FScriptDelegate),
        ("__OnReservationsFull__Delegate", FScriptDelegate),
        ("__OnClientCancellationReceived__Delegate", FScriptDelegate),
    ]

    UPartyBeaconHost._fields_ = [
        ("UObject", UObject_Data),
        ("UPartyBeacon", UPartyBeacon_Data),
        ("UPartyBeaconHost", UPartyBeaconHost_Data),
    ]

    UTcpipConnection_Data._fields_ = [("Unknown1", c_ubyte * 0x20)]

    UTcpipConnection._fields_ = [
        ("UObject", UObject_Data),
        ("UPlayer", UPlayer_Data),
        ("UNetConnection", UNetConnection_Data),
        ("UTcpipConnection", UTcpipConnection_Data),
    ]

    UTcpNetDriver_Data._fields_ = [
        ("AllowPlayerPortUnreach", c_bool),
        ("LogPortUnreach", c_bool, 1),
        ("Unknown1", c_ubyte * 0x18),
    ]

    UTcpNetDriver._fields_ = [
        ("UObject", UObject_Data),
        ("USubsystem", USubsystem_Data),
        ("UNetDriver", UNetDriver_Data),
        ("UTcpNetDriver", UTcpNetDriver_Data),
    ]

    UWebRequest_Data._fields_ = [
        ("RemoteAddr", FString),
        ("URI", FString),
        ("UserName", FString),
        ("Password", FString),
        ("ContentLength", c_int),
        ("ContentType", FString),
        ("RequestType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("HeaderMap", FMap_Mirror),
        ("VariableMap", FMap_Mirror),
    ]

    UWebRequest._fields_ = [
        ("UObject", UObject_Data),
        ("UWebRequest", UWebRequest_Data),
    ]

    UWebResponse_Data._fields_ = [
        ("headers", TArray_FString),
        ("ReplacementMap", FMap_Mirror),
        ("IncludePath", FString),
        ("CharSet", FString),
        ("Connection", POINTER(AWebConnection)),
        ("bSentText", c_bool, 1),
        ("bSentResponse", c_bool, 1),
    ]

    UWebResponse._fields_ = [
        ("UObject", UObject_Data),
        ("UWebResponse", UWebResponse_Data),
    ]

    UOnlinePlaylistProvider_Data._fields_ = [
        ("PlaylistId", c_int),
        ("PlaylistGameTypeNames", TArray_FName),
        ("DisplayName", FString),
        ("Priority", c_int),
    ]

    UOnlinePlaylistProvider._fields_ = [
        ("UObject", UObject_Data),
        ("UUIRoot", UUIRoot_Data),
        ("UUIDataProvider", UUIDataProvider_Data),
        ("UUIPropertyDataProvider", UUIPropertyDataProvider_Data),
        ("UUIResourceDataProvider", UUIResourceDataProvider_Data),
        ("UOnlinePlaylistProvider", UOnlinePlaylistProvider_Data),
    ]

    UUIDataStore_OnlinePlaylists_Data._fields_ = [
        ("VfTable_IUIListElementProvider", FPointer),
        ("ProviderClassName", FString),
        ("ProviderClass", POINTER(UClass)),
        ("RankedDataProviders", TArray_UUIResourceDataProviderPtr),
        ("UnrankedDataProviders", TArray_UUIResourceDataProviderPtr),
        ("RecModeDataProviders", TArray_UUIResourceDataProviderPtr),
        ("PrivateDataProviders", TArray_UUIResourceDataProviderPtr),
        ("PlaylistMan", POINTER(UOnlinePlaylistManager)),
    ]

    UUIDataStore_OnlinePlaylists._fields_ = [
        ("UObject", UObject_Data),
        ("UUIRoot", UUIRoot_Data),
        ("UUIDataProvider", UUIDataProvider_Data),
        ("UUIDataStore", UUIDataStore_Data),
        ("UUIDataStore_OnlinePlaylists", UUIDataStore_OnlinePlaylists_Data),
    ]

    UWebApplication_Data._fields_ = [
        ("WorldInfo", POINTER(AWorldInfo)),
        ("WebServer", POINTER(AWebServer)),
        ("Path", FString),
    ]

    UWebApplication._fields_ = [
        ("UObject", UObject_Data),
        ("UWebApplication", UWebApplication_Data),
    ]

    AWebServer_Data._fields_ = [
        ("ServerName", FString),
        ("Applications", FString * 10),
        ("ApplicationPaths", FString * 10),
        ("bEnabled", c_bool, 1),
        ("ListenPort", c_int),
        ("MaxConnections", c_int),
        ("DefaultApplication", c_int),
        ("ExpirationSeconds", c_int),
        ("ServerURL", FString),
        ("ApplicationObjects", POINTER(UWebApplication) * 10),
        ("ConnectionCount", c_int),
        ("ConnID", c_int),
    ]

    AWebServer._fields_ = [
        ("UObject", UObject_Data),
        ("AActor", AActor_Data),
        ("AInfo", AInfo_Data),
        ("AInternetLink", AInternetLink_Data),
        ("ATcpLink", ATcpLink_Data),
        ("AWebServer", AWebServer_Data),
    ]

    UHelloWeb_Data._fields_ = []

    UHelloWeb._fields_ = [
        ("UObject", UObject_Data),
        ("UWebApplication", UWebApplication_Data),
        ("UHelloWeb", UHelloWeb_Data),
    ]

    UImageServer_Data._fields_ = []

    UImageServer._fields_ = [
        ("UObject", UObject_Data),
        ("UWebApplication", UWebApplication_Data),
        ("UImageServer", UImageServer_Data),
    ]

    AWebConnection_Data._fields_ = [
        ("WebServer", POINTER(AWebServer)),
        ("ReceivedData", FString),
        ("Request", POINTER(UWebRequest)),
        ("Response", POINTER(UWebResponse)),
        ("Application", POINTER(UWebApplication)),
        ("bDelayCleanup", c_bool, 1),
        ("RawBytesExpecting", c_int),
        ("MaxValueLength", c_int),
        ("MaxLineLength", c_int),
        ("ConnID", c_int),
    ]

    AWebConnection._fields_ = [
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
    BL2SDK.g_loadedClasses += [
        ("UOnlineAuthInterfaceImpl", 3495, "UOnlineAuthInterfaceBaseImpl")
    ]
    BL2SDK.g_loadedClasses += [("UOnlineGameInterfaceImpl", 3497, "UObject")]
    BL2SDK.g_loadedClasses += [("UOnlinePlaylistManager", 3499, "UObject")]
    BL2SDK.g_loadedClasses += [("UPartyBeacon", 3501, "UObject")]
    BL2SDK.g_loadedClasses += [("UPartyBeaconClient", 3503, "UPartyBeacon")]
    BL2SDK.g_loadedClasses += [("UPartyBeaconHost", 3505, "UPartyBeacon")]
    BL2SDK.g_loadedClasses += [("UTcpipConnection", 3507, "UNetConnection")]
    BL2SDK.g_loadedClasses += [("UTcpNetDriver", 3509, "UNetDriver")]
    BL2SDK.g_loadedClasses += [("UWebRequest", 3513, "UObject")]
    BL2SDK.g_loadedClasses += [("UWebResponse", 3515, "UObject")]
    BL2SDK.g_loadedClasses += [
        ("UOnlinePlaylistProvider", 3517, "UUIResourceDataProvider")
    ]
    BL2SDK.g_loadedClasses += [("UUIDataStore_OnlinePlaylists", 3519, "UUIDataStore")]
    BL2SDK.g_loadedClasses += [("UWebApplication", 45133, "UObject")]
    BL2SDK.g_loadedClasses += [("AWebServer", 45136, "ATcpLink")]
    BL2SDK.g_loadedClasses += [("UHelloWeb", 45152, "UWebApplication")]
    BL2SDK.g_loadedClasses += [("UImageServer", 45170, "UWebApplication")]
    BL2SDK.g_loadedClasses += [("AWebConnection", 46294, "ATcpLink")]
