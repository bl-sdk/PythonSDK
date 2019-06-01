#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Constants
//---------------------------------------------------------------------------

#define CONST_PLAYER_MATCH                                       0
#define CONST_UNRANKEDPROVIDERTAG                                "PlaylistsUnranked"
#define CONST_RANKED_MATCH                                       1
#define CONST_REC_MATCH                                          2
#define CONST_PRIVATE_MATCH                                      3
#define CONST_RECMODEPROVIDERTAG                                 "PlaylistsRecMode"
#define CONST_RANKEDPROVIDERTAG                                  "PlaylistsRanked"
#define CONST_PRIVATEPROVIDERTAG                                 "PlaylistsPrivate"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum IpDrv.InternetLink.ELinkMode
//enum class ELinkMode : uint8_t
//{
//	MODE_Text                      = 0,
//	MODE_Line                      = 1,
//	MODE_Binary                    = 2,
//	MODE_MAX                       = 3
//};


// Enum IpDrv.InternetLink.EReceiveMode
//enum class EReceiveMode : uint8_t
//{
//	RMODE_Manual                   = 0,
//	RMODE_Event                    = 1,
//	RMODE_MAX                      = 2
//};


// Enum IpDrv.InternetLink.ELineMode
//enum class ELineMode : uint8_t
//{
//	LMODE_auto                     = 0,
//	LMODE_DOS                      = 1,
//	LMODE_UNIX                     = 2,
//	LMODE_MAC                      = 3,
//	LMODE_MAX                      = 4
//};


// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
//enum class EMeshBeaconPacketType : uint8_t
//{
//	MB_Packet_UnknownType          = 0,
//	MB_Packet_ClientNewConnectionRequest = 1,
//	MB_Packet_ClientBeginBandwidthTest = 2,
//	MB_Packet_ClientCreateNewSessionResponse = 3,
//	MB_Packet_HostNewConnectionResponse = 4,
//	MB_Packet_HostBandwidthTestRequest = 5,
//	MB_Packet_HostCompletedBandwidthTest = 6,
//	MB_Packet_HostTravelRequest    = 7,
//	MB_Packet_HostCreateNewSessionRequest = 8,
//	MB_Packet_DummyData            = 9,
//	MB_Packet_Heartbeat            = 10,
//	MB_Packet_MAX                  = 11
//};


// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
//enum class EMeshBeaconConnectionResult : uint8_t
//{
//	MB_ConnectionResult_Succeeded  = 0,
//	MB_ConnectionResult_Duplicate  = 1,
//	MB_ConnectionResult_Timeout    = 2,
//	MB_ConnectionResult_Error      = 3,
//	MB_ConnectionResult_MAX        = 4
//};


// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
//enum class EMeshBeaconBandwidthTestState : uint8_t
//{
//	MB_BandwidthTestState_NotStarted = 0,
//	MB_BandwidthTestState_RequestPending = 1,
//	MB_BandwidthTestState_StartPending = 2,
//	MB_BandwidthTestState_InProgress = 3,
//	MB_BandwidthTestState_Completed = 4,
//	MB_BandwidthTestState_Incomplete = 5,
//	MB_BandwidthTestState_Timeout  = 6,
//	MB_BandwidthTestState_Error    = 7,
//	MB_BandwidthTestState_MAX      = 8
//};


// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
//enum class EMeshBeaconBandwidthTestResult : uint8_t
//{
//	MB_BandwidthTestResult_Succeeded = 0,
//	MB_BandwidthTestResult_Timeout = 1,
//	MB_BandwidthTestResult_Error   = 2,
//	MB_BandwidthTestResult_MAX     = 3
//};


// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
//enum class EMeshBeaconBandwidthTestType : uint8_t
//{
//	MB_BandwidthTestType_Upstream  = 0,
//	MB_BandwidthTestType_Downstream = 1,
//	MB_BandwidthTestType_RoundtripLatency = 2,
//	MB_BandwidthTestType_MAX       = 3
//};


// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
//enum class EMeshBeaconClientState : uint8_t
//{
//	MBCS_None                      = 0,
//	MBCS_Connecting                = 1,
//	MBCS_Connected                 = 2,
//	MBCS_ConnectionFailed          = 3,
//	MBCS_AwaitingResponse          = 4,
//	MBCS_Closed                    = 5,
//	MBCS_MAX                       = 6
//};


// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
//enum class EEventUploadType : uint8_t
//{
//	EUT_GenericStats               = 0,
//	EUT_ProfileData                = 1,
//	EUT_MatchmakingData            = 2,
//	EUT_PlaylistPopulation         = 3,
//	EUT_MAX                        = 4
//};


// Enum IpDrv.PartyBeacon.EReservationPacketType
//enum class EReservationPacketType : uint8_t
//{
//	RPT_UnknownPacketType          = 0,
//	RPT_ClientReservationRequest   = 1,
//	RPT_ClientReservationUpdateRequest = 2,
//	RPT_ClientCancellationRequest  = 3,
//	RPT_HostReservationResponse    = 4,
//	RPT_HostReservationCountUpdate = 5,
//	RPT_HostTravelRequest          = 6,
//	RPT_HostIsReady                = 7,
//	RPT_HostHasCancelled           = 8,
//	RPT_Heartbeat                  = 9,
//	RPT_MAX                        = 10
//};


// Enum IpDrv.PartyBeacon.EPartyReservationResult
//enum class EPartyReservationResult : uint8_t
//{
//	PRR_GeneralError               = 0,
//	PRR_PartyLimitReached          = 1,
//	PRR_IncorrectPlayerCount       = 2,
//	PRR_RequestTimedOut            = 3,
//	PRR_ReservationDuplicate       = 4,
//	PRR_ReservationNotFound        = 5,
//	PRR_ReservationAccepted        = 6,
//	PRR_ReservationDenied          = 7,
//	PRR_MAX                        = 8
//};


// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
//enum class EPartyBeaconClientRequest : uint8_t
//{
//	PBClientRequest_NewReservation = 0,
//	PBClientRequest_UpdateReservation = 1,
//	PBClientRequest_MAX            = 2
//};


// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
//enum class EPartyBeaconClientState : uint8_t
//{
//	PBCS_None                      = 0,
//	PBCS_Connecting                = 1,
//	PBCS_Connected                 = 2,
//	PBCS_ConnectionFailed          = 3,
//	PBCS_AwaitingResponse          = 4,
//	PBCS_Closed                    = 5,
//	PBCS_MAX                       = 6
//};


// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
//enum class EPartyBeaconHostState : uint8_t
//{
//	PBHS_AllowReservations         = 0,
//	PBHS_DenyReservations          = 1,
//	PBHS_MAX                       = 2
//};


// Enum IpDrv.TcpLink.ELinkState
//enum class ELinkState : uint8_t
//{
//	STATE_Initialized              = 0,
//	STATE_Ready                    = 1,
//	STATE_Listening                = 2,
//	STATE_Connecting               = 3,
//	STATE_Connected                = 4,
//	STATE_ListenClosePending       = 5,
//	STATE_ConnectClosePending      = 6,
//	STATE_ListenClosing            = 7,
//	STATE_ConnectClosing           = 8,
//	STATE_MAX                      = 9
//};


// Enum IpDrv.WebRequest.ERequestType
//enum class ERequestType : uint8_t
//{
//	Request_GET                    = 0,
//	Request_POST                   = 1,
//	Request_MAX                    = 2
//};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct IpDrv.InternetLink.IpAddr
// 0x0008
struct FIpAddr
{
	int                                                Addr;                                                     // 0x0000(0x0004)
	int                                                Port;                                                     // 0x0004(0x0004)
};

// ScriptStruct IpDrv.OnlineEventsInterfaceMcp.EventUploadConfig
// 0x0018
struct FEventUploadConfig
{
	unsigned char                                      UploadType;                                               // 0x0000(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     UploadUrl;                                                // 0x0004(0x000C) (Const, NeedCtorLink)
	float                                              TimeOut;                                                  // 0x0010(0x0004) (Const)
	unsigned long                                      bUseCompression : 1;                                      // 0x0014(0x0004) (Const)
};

// ScriptStruct IpDrv.OnlineNewsInterfaceMcp.NewsCacheEntry
// 0x0028
struct FNewsCacheEntry
{
	struct FString                                     NewsUrl;                                                  // 0x0000(0x000C) (Const, NeedCtorLink)
	unsigned char                                      ReadState;                                                // 0x000C(0x0001)
	unsigned char                                      NewsType;                                                 // 0x000D(0x0001) (Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	struct FString                                     NewsItem;                                                 // 0x0010(0x000C) (NeedCtorLink)
	float                                              TimeOut;                                                  // 0x001C(0x0004) (Const)
	unsigned long                                      bIsUnicode : 1;                                           // 0x0020(0x0004) (Const)
	struct FPointer                                    HttpDownloader;                                           // 0x0024(0x0004) (Const, Native)
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.TitleFileMcp
// 0x0004 (0x001C - 0x0020)
struct FTitleFileMcp : public FTitleFile
{
	struct FPointer                                    HttpDownloader;                                           // 0x001C(0x0004) (Const, Native)
};

// ScriptStruct IpDrv.OnlineTitleFileDownloadMcp.FileNameToURLMapping
// 0x0010
struct FFileNameToURLMapping
{
	struct FName                                       Filename;                                                 // 0x0000(0x0008)
	struct FName                                       UrlMapping;                                               // 0x0008(0x0008)
};

// ScriptStruct IpDrv.MeshBeacon.PlayerMember
// 0x0020
struct FPlayerMember
{
	int                                                TeamNum;                                                  // 0x0000(0x0004)
	int                                                Skill;                                                    // 0x0004(0x0004)
	struct FUniqueNetId                                NetId;                                                    // 0x0008(0x0018)
};

// ScriptStruct IpDrv.MeshBeacon.ConnectionBandwidthStats
// 0x000C
struct FConnectionBandwidthStats
{
	int                                                UpstreamRate;                                             // 0x0000(0x0004)
	int                                                DownstreamRate;                                           // 0x0004(0x0004)
	int                                                RoundtripLatency;                                         // 0x0008(0x0004)
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientConnectionRequest
// 0x0034
struct FClientConnectionRequest
{
	struct FUniqueNetId                                PlayerNetId;                                              // 0x0000(0x0018)
	unsigned char                                      NatType;                                                  // 0x0018(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	unsigned long                                      bCanHostVs : 1;                                           // 0x001C(0x0004)
	float                                              GoodHostRatio;                                            // 0x0020(0x0004)
	TArray<struct FConnectionBandwidthStats>           BandwidthHistory;                                         // 0x0024(0x000C) (NeedCtorLink)
	int                                                MinutesSinceLastTest;                                     // 0x0030(0x0004)
};

// ScriptStruct IpDrv.MeshBeaconClient.ClientBandwidthTestData
// 0x0014
struct FClientBandwidthTestData
{
	unsigned char                                      TestType;                                                 // 0x0000(0x0001)
	unsigned char                                      CurrentState;                                             // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                NumBytesToSendTotal;                                      // 0x0004(0x0004)
	int                                                NumBytesSentTotal;                                        // 0x0008(0x0004)
	int                                                NumBytesSentLast;                                         // 0x000C(0x0004)
	float                                              ElapsedTestTime;                                          // 0x0010(0x0004)
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientConnectionBandwidthTestData
// 0x0028
struct FClientConnectionBandwidthTestData
{
	unsigned char                                      CurrentState;                                             // 0x0000(0x0001)
	unsigned char                                      TestType;                                                 // 0x0001(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	int                                                BytesTotalNeeded;                                         // 0x0004(0x0004)
	int                                                BytesReceived;                                            // 0x0008(0x0004)
	struct FDouble                                     RequestTestStartTime;                                     // 0x000C(0x0008)
	struct FDouble                                     TestStartTime;                                            // 0x0014(0x0008)
	struct FConnectionBandwidthStats                   BandwidthStats;                                           // 0x001C(0x000C)
};

// ScriptStruct IpDrv.MeshBeaconHost.ClientMeshBeaconConnection
// 0x0068
struct FClientMeshBeaconConnection
{
	struct FUniqueNetId                                PlayerNetId;                                              // 0x0000(0x0018)
	float                                              ElapsedHeartbeatTime;                                     // 0x0018(0x0004)
	struct FPointer                                    Socket;                                                   // 0x001C(0x0004) (Native, Transient)
	unsigned long                                      bConnectionAccepted : 1;                                  // 0x0020(0x0004)
	struct FClientConnectionBandwidthTestData          BandwidthTest;                                            // 0x0024(0x0028)
	unsigned char                                      NatType;                                                  // 0x004C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	unsigned long                                      bCanHostVs : 1;                                           // 0x0050(0x0004)
	float                                              GoodHostRatio;                                            // 0x0054(0x0004)
	TArray<struct FConnectionBandwidthStats>           BandwidthHistory;                                         // 0x0058(0x000C) (NeedCtorLink)
	int                                                MinutesSinceLastTest;                                     // 0x0064(0x0004)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.ConfiguredGameSetting
// 0x0020
struct FConfiguredGameSetting
{
	int                                                GameSettingId;                                            // 0x0000(0x0004)
	struct FString                                     GameSettingsClassName;                                    // 0x0004(0x000C) (NeedCtorLink)
	struct FString                                     URL;                                                      // 0x0010(0x000C) (NeedCtorLink)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x001C(0x0004) (Transient)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.InventorySwap
// 0x0014
struct FInventorySwap
{
	struct FName                                       Original;                                                 // 0x0000(0x0008)
	struct FString                                     SwapTo;                                                   // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.Playlist
// 0x0070
struct FPlaylist
{
	TArray<struct FConfiguredGameSetting>              ConfiguredGames;                                          // 0x0000(0x000C) (NeedCtorLink)
	int                                                PlaylistId;                                               // 0x000C(0x0004)
	int                                                LoadBalanceId;                                            // 0x0010(0x0004)
	struct FString                                     LocalizationString;                                       // 0x0014(0x000C) (NeedCtorLink)
	TArray<int>                                        ContentIds;                                               // 0x0020(0x000C) (NeedCtorLink)
	int                                                TeamSize;                                                 // 0x002C(0x0004)
	int                                                TeamCount;                                                // 0x0030(0x0004)
	int                                                MaxPartySize;                                             // 0x0034(0x0004)
	struct FString                                     Name;                                                     // 0x0038(0x000C) (NeedCtorLink)
	struct FString                                     URL;                                                      // 0x0044(0x000C) (NeedCtorLink)
	int                                                MatchType;                                                // 0x0050(0x0004)
	unsigned long                                      bDisableDedicatedServerSearches : 1;                      // 0x0054(0x0004)
	TArray<struct FName>                               MapCycle;                                                 // 0x0058(0x000C) (NeedCtorLink)
	TArray<struct FInventorySwap>                      InventorySwaps;                                           // 0x0064(0x000C) (NeedCtorLink)
};

// ScriptStruct IpDrv.OnlinePlaylistManager.PlaylistPopulation
// 0x000C
struct FPlaylistPopulation
{
	int                                                PlaylistId;                                               // 0x0000(0x0004)
	int                                                WorldwideTotal;                                           // 0x0004(0x0004)
	int                                                RegionTotal;                                              // 0x0008(0x0004)
};

// ScriptStruct IpDrv.PartyBeacon.PlayerReservation
// 0x0034
struct FPlayerReservation
{
	struct FUniqueNetId                                NetId;                                                    // 0x0000(0x0018)
	int                                                Skill;                                                    // 0x0018(0x0004)
	int                                                XpLevel;                                                  // 0x001C(0x0004)
	struct FDouble                                     Mu;                                                       // 0x0020(0x0008)
	struct FDouble                                     Sigma;                                                    // 0x0028(0x0008)
	float                                              ElapsedSessionTime;                                       // 0x0030(0x0004)
};

// ScriptStruct IpDrv.PartyBeacon.PartyReservation
// 0x0028
struct FPartyReservation
{
	int                                                TeamNum;                                                  // 0x0000(0x0004)
	struct FUniqueNetId                                PartyLeader;                                              // 0x0004(0x0018)
	TArray<struct FPlayerReservation>                  PartyMembers;                                             // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct IpDrv.PartyBeaconHost.ClientBeaconConnection
// 0x0020
struct FClientBeaconConnection
{
	struct FUniqueNetId                                PartyLeader;                                              // 0x0000(0x0018)
	float                                              ElapsedHeartbeatTime;                                     // 0x0018(0x0004)
	struct FPointer                                    Socket;                                                   // 0x001C(0x0004) (Native, Transient)
};

#ifdef _MSC_VER
#pragma pack(pop)
#endif
