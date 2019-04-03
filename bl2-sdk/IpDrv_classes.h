#pragma once
#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/

#define CONST_PLAYER_MATCH                                       0
#define CONST_RANKED_MATCH                                       1
#define CONST_REC_MATCH                                          2
#define CONST_PRIVATE_MATCH                                      3
#define CONST_RANKEDPROVIDERTAG                                  "PlaylistsRanked"
#define CONST_UNRANKEDPROVIDERTAG                                "PlaylistsUnranked"
#define CONST_RECMODEPROVIDERTAG                                 "PlaylistsRecMode"
#define CONST_PRIVATEPROVIDERTAG                                 "PlaylistsPrivate"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.InternetLink.ELinkMode
/*enum ELinkMode
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_MAX                                           = 3
};*/

// Enum IpDrv.InternetLink.EReceiveMode
/*enum EReceiveMode
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_MAX                                          = 2
};*/

// Enum IpDrv.InternetLink.ELineMode
/*enum ELineMode
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_MAX                                          = 4
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
/*enum EMeshBeaconPacketType
{
	MB_Packet_UnknownType                              = 0,
	MB_Packet_ClientNewConnectionRequest               = 1,
	MB_Packet_ClientBeginBandwidthTest                 = 2,
	MB_Packet_ClientCreateNewSessionResponse           = 3,
	MB_Packet_HostNewConnectionResponse                = 4,
	MB_Packet_HostBandwidthTestRequest                 = 5,
	MB_Packet_HostCompletedBandwidthTest               = 6,
	MB_Packet_HostTravelRequest                        = 7,
	MB_Packet_HostCreateNewSessionRequest              = 8,
	MB_Packet_DummyData                                = 9,
	MB_Packet_Heartbeat                                = 10,
	MB_Packet_MAX                                      = 11
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
/*enum EMeshBeaconConnectionResult
{
	MB_ConnectionResult_Succeeded                      = 0,
	MB_ConnectionResult_Duplicate                      = 1,
	MB_ConnectionResult_Timeout                        = 2,
	MB_ConnectionResult_Error                          = 3,
	MB_ConnectionResult_MAX                            = 4
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
/*enum EMeshBeaconBandwidthTestState
{
	MB_BandwidthTestState_NotStarted                   = 0,
	MB_BandwidthTestState_RequestPending               = 1,
	MB_BandwidthTestState_StartPending                 = 2,
	MB_BandwidthTestState_InProgress                   = 3,
	MB_BandwidthTestState_Completed                    = 4,
	MB_BandwidthTestState_Incomplete                   = 5,
	MB_BandwidthTestState_Timeout                      = 6,
	MB_BandwidthTestState_Error                        = 7,
	MB_BandwidthTestState_MAX                          = 8
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
/*enum EMeshBeaconBandwidthTestResult
{
	MB_BandwidthTestResult_Succeeded                   = 0,
	MB_BandwidthTestResult_Timeout                     = 1,
	MB_BandwidthTestResult_Error                       = 2,
	MB_BandwidthTestResult_MAX                         = 3
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
/*enum EMeshBeaconBandwidthTestType
{
	MB_BandwidthTestType_Upstream                      = 0,
	MB_BandwidthTestType_Downstream                    = 1,
	MB_BandwidthTestType_RoundtripLatency              = 2,
	MB_BandwidthTestType_MAX                           = 3
};*/

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
/*enum EMeshBeaconClientState
{
	MBCS_None                                          = 0,
	MBCS_Connecting                                    = 1,
	MBCS_Connected                                     = 2,
	MBCS_ConnectionFailed                              = 3,
	MBCS_AwaitingResponse                              = 4,
	MBCS_Closed                                        = 5,
	MBCS_MAX                                           = 6
};*/

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
/*enum EEventUploadType
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_MatchmakingData                                = 2,
	EUT_PlaylistPopulation                             = 3,
	EUT_MAX                                            = 4
};*/

// Enum IpDrv.PartyBeacon.EReservationPacketType
/*enum EReservationPacketType
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostReservationCountUpdate                     = 5,
	RPT_HostTravelRequest                              = 6,
	RPT_HostIsReady                                    = 7,
	RPT_HostHasCancelled                               = 8,
	RPT_Heartbeat                                      = 9,
	RPT_MAX                                            = 10
};*/

// Enum IpDrv.PartyBeacon.EPartyReservationResult
/*enum EPartyReservationResult
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_ReservationDenied                              = 7,
	PRR_MAX                                            = 8
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
/*enum EPartyBeaconClientRequest
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_MAX                                = 2
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
/*enum EPartyBeaconClientState
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_MAX                                           = 6
};*/

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
/*enum EPartyBeaconHostState
{
	PBHS_AllowReservations                             = 0,
	PBHS_DenyReservations                              = 1,
	PBHS_MAX                                           = 2
};*/

// Enum IpDrv.TcpLink.ELinkState
/*enum ELinkState
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_MAX                                          = 9
};*/

// Enum IpDrv.WebRequest.ERequestType
/*enum ERequestType
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_MAX                                        = 2
};*/

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0048 - 0x003C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                       		// 0x003C (0x0004) [0x0000000000000000]
	struct FName                                       BeaconName;                                       		// 0x0040 (0x0008) [0x0000000000000000]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3467];

		return pClassPointer;
	};
};

// UClass* UClientBeaconAddressResolver::pClassPointer = NULL;

// Class IpDrv.HTTPDownload
// 0x0104 (0x0B74 - 0x0A70)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                  		// 0x0A70 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                ProxyServerPort;                                  		// 0x0A7C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      MaxRedirection : 1;                               		// 0x0A80 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	float                                              ConnectionTimeout;                                		// 0x0A84 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData00[0xEC];                            		// 0x0A88 (0x00EC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3469];

		return pClassPointer;
	};
};

// UClass* UHTTPDownload::pClassPointer = NULL;

// Class IpDrv.InternetLink
// 0x0018 (0x01A0 - 0x0188)
class AInternetLink : public AInfo
{
public:
	unsigned char                                      LinkMode;                                         		// 0x0188 (0x0001) [0x0000000000000000]
	unsigned char                                      InLineMode;                                       		// 0x0189 (0x0001) [0x0000000000000000]
	unsigned char                                      OutLineMode;                                      		// 0x018A (0x0001) [0x0000000000000000]
	unsigned char                                      ReceiveMode;                                      		// 0x018B (0x0001) [0x0000000000000000]
	struct FPointer                                    Socket;                                           		// 0x018C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Port;                                             		// 0x0190 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    RemoteSocket;                                     		// 0x0194 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    PrivateResolveInfo;                               		// 0x0198 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                DataPending;                                      		// 0x019C (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3477];

		return pClassPointer;
	};

	void eventResolveFailed();
	void eventResolved(struct FIpAddr Addr);
	void GetLocalIP(struct FIpAddr* Arg);
	bool StringToIpAddr(struct FString Str, struct FIpAddr* Addr);
	struct FString IpAddrToString(struct FIpAddr Arg);
	int GetLastError();
	void Resolve(struct FString Domain);
	bool ParseURL(struct FString URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName);
	bool IsDataPending();
};

// UClass* AInternetLink::pClassPointer = NULL;

// Class IpDrv.TcpLink
// 0x0028 (0x01C8 - 0x01A0)
class ATcpLink : public AInternetLink
{
public:
	unsigned char                                      LinkState;                                        		// 0x01A0 (0x0001) [0x0000000000000000]
	struct FIpAddr                                     RemoteAddr;                                       		// 0x01A4 (0x0008) [0x0000000000000000]
	class UClass*                                      AcceptClass;                                      		// 0x01AC (0x0004) [0x0000000000000000]
	TArray< unsigned char >                            SendFIFO;                                         		// 0x01B0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     RecvBuf;                                          		// 0x01BC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3479];

		return pClassPointer;
	};

	void eventReceivedBinary(int Count, unsigned char* B);
	void eventReceivedLine(struct FString Line);
	void eventReceivedText(struct FString Text);
	void eventClosed();
	void eventOpened();
	void eventAccepted();
	int ReadBinary(int Count, unsigned char* B);
	int ReadText(struct FString* Str);
	int SendBinary(int Count, unsigned char* B);
	int SendText(struct FString Str);
	bool IsConnected();
	bool Close();
	bool Open(struct FIpAddr Addr);
	bool Listen();
	int BindPort(int PortNum, unsigned long bUseNextAvailable);
};

// UClass* ATcpLink::pClassPointer = NULL;

// Class IpDrv.MCPBase
// 0x0004 (0x0040 - 0x003C)
class UMCPBase : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3481];

		return pClassPointer;
	};
};

// UClass* UMCPBase::pClassPointer = NULL;

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FEventUploadConfig >                EventUploadConfigs;                               		// 0x0040 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPointer >                          MCPEventPostObjects;                              		// 0x004C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< unsigned char >                            DisabledUploadTypes;                              		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bBinaryStats : 1;                                 		// 0x0064 (0x0004) [0x0000000000004002] [0x00000001] ( CPF_Const | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3483];

		return pClassPointer;
	};

	bool UploadMatchmakingStats(struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int PlaylistId, int NumPlayers);
	bool UploadGameplayEventsData(struct FUniqueNetId UniqueId, TArray< unsigned char >* Payload);
	bool UploadPlayerData(struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};

// UClass* UOnlineEventsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0028 (0x0068 - 0x0040)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FNewsCacheEntry >                   NewsItems;                                        		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadNewsDelegates;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedsTicking : 1;                                		// 0x0058 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                  		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3485];

		return pClassPointer;
	};

	struct FString GetNews(unsigned char LocalUserNum, unsigned char NewsType);
	void ClearReadNewsCompletedDelegate(struct FScriptDelegate ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(struct FScriptDelegate ReadNewsDelegate);
	void OnReadNewsCompleted(unsigned long bWasSuccessful, unsigned char NewsType);
	bool ReadNews(unsigned char LocalUserNum, unsigned char NewsType);
};

// UClass* UOnlineNewsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0050 (0x0090 - 0x0040)
class UOnlineTitleFileDownloadMcp : public UMCPBase
{
public:
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFileMcp >                     TitleFiles;                                       		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DownloadCount;                                    		// 0x0058 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FString                                     BaseUrl;                                          		// 0x005C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FFileNameToURLMapping >             FilesToUrls;                                      		// 0x006C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnShareTitleFileComplete__Delegate;             		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3487];

		return pClassPointer;
	};

	void ClearShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate);
	void AddShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate);
	bool ShareTitleFile(struct FString FileToShare);
	bool ClearDownloadedFile(struct FString Filename);
	bool ClearDownloadedFiles();
	unsigned char GetTitleFileState(struct FString Filename);
	bool GetTitleFileContents(struct FString Filename, TArray< unsigned char >* FileContents);
	void ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(unsigned char LocalUserNum, struct FString FileToRead);
	void OnShareTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename, struct FString UGCHandle);
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
};

// UClass* UOnlineTitleFileDownloadMcp::pClassPointer = NULL;

// Class IpDrv.MeshBeacon
// 0x003C (0x0078 - 0x003C)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                MeshBeaconPort;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    Socket;                                           		// 0x0044 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bIsInTick : 1;                                    		// 0x0048 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0048 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bShouldTick : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004]
	float                                              HeartbeatTimeout;                                 		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ElapsedHeartbeatTime;                             		// 0x0050 (0x0004) [0x0000000000000000]
	struct FName                                       BeaconName;                                       		// 0x0054 (0x0008) [0x0000000000000000]
	int                                                SocketSendBufferSize;                             		// 0x005C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SocketReceiveBufferSize;                          		// 0x0060 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxBandwidthTestBufferSize;                       		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinBandwidthTestBufferSize;                       		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBandwidthTestSendTime;                         		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBandwidthTestReceiveTime;                      		// 0x0070 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxBandwidthHistoryEntries;                       		// 0x0074 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3489];

		return pClassPointer;
	};

	void eventDestroyBeacon();
};

// UClass* UMeshBeacon::pClassPointer = NULL;

// Class IpDrv.MeshBeaconClient
// 0x00B0 (0x0128 - 0x0078)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x0078 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FClientConnectionRequest                    ClientPendingRequest;                             		// 0x0080 (0x0034) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                             		// 0x00B4 (0x0014) [0x0000000000000000]
	unsigned char                                      ClientBeaconState;                                		// 0x00C8 (0x0001) [0x0000000000000000]
	unsigned char                                      ClientBeaconRequestType;                          		// 0x00C9 (0x0001) [0x0000000000000000]
	float                                              ConnectionRequestTimeout;                         		// 0x00CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ConnectionRequestElapsedTime;                     		// 0x00D0 (0x0004) [0x0000000000000000]
	struct FString                                     ResolverClassName;                                		// 0x00D4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ResolverClass;                                    		// 0x00E0 (0x0004) [0x0000000000000000]
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x00E4 (0x0004) [0x0000000000000000]
	unsigned long                                      bUsingRegisteredAddr : 1;                         		// 0x00E8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;            		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;       		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;       		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;    		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3491];

		return pClassPointer;
	};

	bool SendHostNewGameSessionResponse(unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players);
	void OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnReceivedBandwidthTestRequest(unsigned char TestType);
	void OnConnectionRequestResult(unsigned char ConnectionResult);
	bool BeginBandwidthTest(unsigned char TestType, int TestBufferSize);
	bool RequestConnection(unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest);
	void eventDestroyBeacon();
};

// UClass* UMeshBeaconClient::pClassPointer = NULL;

// Class IpDrv.MeshBeaconHost
// 0x0074 (0x00EC - 0x0078)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray< struct FClientMeshBeaconConnection >       ClientConnections;                                		// 0x0078 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      PendingPlayerConnections;                         		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                OwningPlayerId;                                   		// 0x0090 (0x0018) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bAllowBandwidthTesting : 1;                       		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001]
	int                                                ConnectionBacklog;                                		// 0x00AC (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;    		// 0x00B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;               		// 0x00BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;              		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;         		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;		// 0x00E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3493];

		return pClassPointer;
	};

	void OnReceivedClientCreateNewSessionResult(unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	bool RequestClientCreateNewSession(struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players);
	void TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(TArray< struct FUniqueNetId >* Players);
	int GetConnectionIndexForPlayer(struct FUniqueNetId PlayerNetId);
	void SetPendingPlayerConnections(TArray< struct FUniqueNetId >* Players);
	void OnFinishedBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnStartedBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection);
	void AllowBandwidthTesting(unsigned long bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType, int TestBufferSize);
	void eventDestroyBeacon();
	bool InitHostBeacon(struct FUniqueNetId InOwningPlayerId);
};

// UClass* UMeshBeaconHost::pClassPointer = NULL;

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0018 (0x00F8 - 0x00E0)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                      		// 0x00E0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                MaxLocalTalkers;                                  		// 0x00E4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxRemoteTalkers;                                 		// 0x00E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bIsUsingSpeechRecognition : 1;                    		// 0x00EC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                		// 0x00F0 (0x0004) [0x0000000000000000]
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                                		// 0x00F4 (0x0004) [0x0000000000000000]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3495];

		return pClassPointer;
	};

	void GetRegisteredPlayers(struct FName SessionName, TArray< struct FUniqueNetId >* OutRegisteredPlayers);
	bool IsPlayerInSession(struct FName SessionName, struct FUniqueNetId PlayerID);
	struct FString eventGetPlayerNicknameFromIndex(int UserIndex);
};

// UClass* UOnlineSubsystemCommonImpl::pClassPointer = NULL;

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x0088 (0x0194 - 0x010C)
class UOnlineAuthInterfaceImpl : public UOnlineAuthInterfaceBaseImpl
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x010C (0x0004) [0x0000000000000000]
	TArray< struct FScriptDelegate >                   AuthReadyDelegates;                               		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthRequestClientDelegates;                       		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthRequestServerDelegates;                       		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthBlobReceivedClientDelegates;                  		// 0x0134 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthBlobReceivedServerDelegates;                  		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthCompleteClientDelegates;                      		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthCompleteServerDelegates;                      		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthKillClientDelegates;                          		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AuthRetryServerDelegates;                         		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClientConnectionCloseDelegates;                   		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ServerConnectionCloseDelegates;                   		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3497];

		return pClassPointer;
	};

	int FindLocalServerAuthSession(class UPlayer* ClientConnection);
	int FindServerAuthSession(class UPlayer* ServerConnection);
	int FindLocalClientAuthSession(class UPlayer* ServerConnection);
	int FindClientAuthSession(class UPlayer* ClientConnection);
	bool SendAuthRetryServer();
	bool SendAuthKillClient(class UPlayer* ClientConnection);
	bool SendAuthBlobServer(class UPlayer* ClientConnection, int AuthBlobUID);
	bool SendAuthBlobClient(int AuthBlobUID);
	void ClearServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate);
	void ClearClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate);
	void ClearAuthRetryServerDelegate(struct FScriptDelegate AuthRetryServerDelegate);
	void AddAuthRetryServerDelegate(struct FScriptDelegate AuthRetryServerDelegate);
	void ClearAuthKillClientDelegate(struct FScriptDelegate AuthKillClientDelegate);
	void AddAuthKillClientDelegate(struct FScriptDelegate AuthKillClientDelegate);
	void ClearAuthCompleteServerDelegate(struct FScriptDelegate AuthCompleteServerDelegate);
	void AddAuthCompleteServerDelegate(struct FScriptDelegate AuthCompleteServerDelegate);
	void ClearAuthCompleteClientDelegate(struct FScriptDelegate AuthCompleteClientDelegate);
	void AddAuthCompleteClientDelegate(struct FScriptDelegate AuthCompleteClientDelegate);
	void ClearAuthBlobReceivedServerDelegate(struct FScriptDelegate AuthBlobReceivedServerDelegate);
	void AddAuthBlobReceivedServerDelegate(struct FScriptDelegate AuthBlobReceivedServerDelegate);
	void ClearAuthBlobReceivedClientDelegate(struct FScriptDelegate AuthBlobReceivedClientDelegate);
	void AddAuthBlobReceivedClientDelegate(struct FScriptDelegate AuthBlobReceivedClientDelegate);
	void ClearAuthRequestServerDelegate(struct FScriptDelegate AuthRequestServerDelegate);
	void AddAuthRequestServerDelegate(struct FScriptDelegate AuthRequestServerDelegate);
	void ClearAuthRequestClientDelegate(struct FScriptDelegate AuthRequestClientDelegate);
	void AddAuthRequestClientDelegate(struct FScriptDelegate AuthRequestClientDelegate);
	void ClearAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate);
	void AddAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate);
};

// UClass* UOnlineAuthInterfaceImpl::pClassPointer = NULL;

// Class IpDrv.OnlineGameInterfaceImpl
// 0x0188 (0x01C4 - 0x003C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x003C (0x0004) [0x0000000000000000]
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentGameState;                                 		// 0x0048 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanBeaconState;                                   		// 0x0049 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanNonce[0x8];                                  		// 0x004A (0x0008) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FScriptDelegate >                   CreateOnlineGameCompleteDelegates;                		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UpdateOnlineGameCompleteDelegates;                		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DestroyOnlineGameCompleteDelegates;               		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinOnlineGameCompleteDelegates;                  		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MigrateOnlineGameCompleteDelegates;               		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinMigratedOnlineGameCompleteDelegates;          		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RecalculateSkillRatingCompleteDelegates;          		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   StartOnlineGameCompleteDelegates;                 		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EndOnlineGameCompleteDelegates;                   		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FindOnlineGamesCompleteDelegates;                 		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CancelFindOnlineGamesCompleteDelegates;           		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LanAnnouncePort;                                  		// 0x00D8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanGameUniqueId;                                  		// 0x00DC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanPacketPlatformMask;                            		// 0x00E0 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              LanQueryTimeLeft;                                 		// 0x00E4 (0x0004) [0x0000000000000000]
	float                                              LanQueryTimeout;                                  		// 0x00E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    LanBeacon;                                        		// 0x00EC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    SessionInfo;                                      		// 0x00F0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                NATResolutionTimeout;                             		// 0x00F4 (0x0004) [0x0000000000000000]
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x0110 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x011C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x0134 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0140 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x014C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x0158 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x0170 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x017C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteProcessingStarted__Delegate;        		// 0x0188 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;     		// 0x0194 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;          		// 0x01A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;     		// 0x01AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                   		// 0x01B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3499];

		return pClassPointer;
	};

	bool HasPendingBootInvite();
	void CancelNATNegotiation();
	void ClearQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate);
	void OnQosStatusChanged(int NumComplete, int NumTotal);
	bool BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool JoinMigratedOnlineGame(unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool MigrateOnlineGame(unsigned char HostingPlayerNum, struct FName SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool RecalculateSkillRating(struct FName SessionName, TArray< struct FUniqueNetId >* Players);
	void ClearGameInviteProcessingStartedDelegate(struct FScriptDelegate GameInviteProcessingStartedDelegate);
	void AddGameInviteProcessingStartedDelegate(struct FScriptDelegate GameInviteProcessingStartedDelegate);
	void OnGameInviteProcessingStarted();
	bool AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	TArray< struct FOnlineArbitrationRegistrant > GetArbitratedPlayers(struct FName SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool RegisterForArbitration(struct FName SessionName);
	void ClearEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool EndOnlineGame(struct FName SessionName);
	void ClearStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool StartOnlineGame(struct FName SessionName);
	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool UnregisterPlayers(struct FName SessionName, TArray< struct FUniqueNetId >* Players);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool RegisterPlayers(struct FName SessionName, TArray< struct FUniqueNetId >* Players);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited);
	bool GetResolvedConnectString(struct FName SessionName, struct FString* ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool JoinOnlineGame(unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(unsigned long bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool DestroyOnlineGame(struct FName SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(struct FName SessionName);
	void OnFindOnlineGamesComplete(unsigned long bWasSuccessful);
};

// UClass* UOnlineGameInterfaceImpl::pClassPointer = NULL;

// Class IpDrv.OnlinePlaylistManager
// 0x00A4 (0x00E0 - 0x003C)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FPlaylist >                         Playlists;                                        		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           PlaylistFileNames;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             DatastoresToRefresh;                              		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                DownloadCount;                                    		// 0x0064 (0x0004) [0x0000000000000000]
	int                                                SuccessfulCount;                                  		// 0x0068 (0x0004) [0x0000000000000000]
	int                                                VersionNumber;                                    		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FPlaylistPopulation >               PopulationData;                                   		// 0x0070 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                WorldwideTotalPlayers;                            		// 0x007C (0x0004) [0x0000000000000000]
	int                                                RegionTotalPlayers;                               		// 0x0080 (0x0004) [0x0000000000000000]
	class UOnlineTitleFileInterface*                   TitleFileInterface;                               		// 0x0084 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[0x4];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FString                                     PopulationFileName;                               		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              NextPlaylistPopulationUpdateTime;                 		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PlaylistPopulationUpdateInterval;                 		// 0x009C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinPlaylistIdToReport;                            		// 0x00A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentPlaylistId;                                		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       EventsInterfaceName;                              		// 0x00A8 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                DataCenterId;                                     		// 0x00B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     DataCenterFileName;                               		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastPlaylistDownloadTime;                         		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PlaylistRefreshInterval;                          		// 0x00C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;               		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;      		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3501];

		return pClassPointer;
	};

	void ParseDataCenterId(TArray< unsigned char >* Data);
	void OnReadDataCenterIdComplete(unsigned long bWasSuccessful, struct FString Filename);
	void ReadDataCenterId(unsigned char LocalUserNum);
	void eventSendPlaylistPopulationUpdate(int NumPlayers);
	void GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal);
	void ParsePlaylistPopulationData(TArray< unsigned char >* Data);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(unsigned long bWasSuccessful, struct FString Filename);
	void ReadPlaylistPopulation(unsigned char LocalUserNum);
	void Reset();
	void GetContentIdsFromPlaylist(int PlaylistId, TArray< int >* ContentIds);
	class UClass* GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory);
	void GetMapCycleFromPlaylist(int PlaylistId, TArray< struct FName >* MapCycle);
	struct FString GetUrlFromPlaylist(int PlaylistId);
	int GetMatchType(int PlaylistId);
	bool IsPlaylistArbitrated(int PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId);
	void GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize);
	bool PlaylistSupportsDedicatedServers(int PlaylistId);
	bool HasAnyGameSettings(int PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int PlaylistId, int GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist(unsigned char LocalUserNum);
	void OnReadPlaylistComplete(unsigned long bWasSuccessful);
};

// UClass* UOnlinePlaylistManager::pClassPointer = NULL;

// Class IpDrv.PartyBeacon
// 0x002C (0x0068 - 0x003C)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                PartyBeaconPort;                                  		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    Socket;                                           		// 0x0044 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bIsInTick : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002]
	unsigned long                                      bShouldTick : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004]
	float                                              HeartbeatTimeout;                                 		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ElapsedHeartbeatTime;                             		// 0x0050 (0x0004) [0x0000000000000000]
	struct FName                                       BeaconName;                                       		// 0x0054 (0x0008) [0x0000000000000000]
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                    		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3503];

		return pClassPointer;
	};

	void OnDestroyComplete();
	void eventDestroyBeacon();
};

// UClass* UPartyBeacon::pClassPointer = NULL;

// Class IpDrv.PartyBeaconClient
// 0x008C (0x00F4 - 0x0068)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x0068 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FPartyReservation                           PendingRequest;                                   		// 0x0070 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ClientBeaconState;                                		// 0x0098 (0x0001) [0x0000000000000000]
	unsigned char                                      ClientBeaconRequestType;                          		// 0x0099 (0x0001) [0x0000000000000000]
	float                                              ReservationRequestTimeout;                        		// 0x009C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ReservationRequestElapsedTime;                    		// 0x00A0 (0x0004) [0x0000000000000000]
	struct FString                                     ResolverClassName;                                		// 0x00A4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ResolverClass;                                    		// 0x00B0 (0x0004) [0x0000000000000000]
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x00B4 (0x0004) [0x0000000000000000]
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;         		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;            		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                        		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                   		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3505];

		return pClassPointer;
	};

	void eventDestroyBeacon();
	bool CancelReservation(struct FUniqueNetId CancellingPartyLeader);
	bool RequestReservationUpdate(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* PlayersToAdd);
	bool RequestReservation(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReservationCountUpdated(int ReservationRemaining);
	void OnReservationRequestComplete(unsigned char ReservationResult);
};

// UClass* UPartyBeaconClient::pClassPointer = NULL;

// Class IpDrv.PartyBeaconHost
// 0x0068 (0x00D0 - 0x0068)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray< struct FClientBeaconConnection >           Clients;                                          		// 0x0068 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                NumTeams;                                         		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumPlayersPerTeam;                                		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumReservations;                                  		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumConsumedReservations;                          		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPartyReservation >                 Reservations;                                     		// 0x0084 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FName                                       OnlineSessionName;                                		// 0x0090 (0x0008) [0x0000000000000000]
	int                                                ConnectionBacklog;                                		// 0x0098 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ForceTeamNum;                                     		// 0x009C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ReservedHostTeamNum;                              		// 0x00A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bBestFitTeamAssignment : 1;                       		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001]
	unsigned char                                      BeaconState;                                      		// 0x00A8 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __OnReservationChange__Delegate;                  		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                   		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;         		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3507];

		return pClassPointer;
	};

	int GetMaxAvailableTeamSize();
	void GetPartyLeaders(TArray< struct FUniqueNetId >* PartyLeaders);
	void GetPlayers(TArray< struct FUniqueNetId >* Players);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void eventUnregisterParty(struct FUniqueNetId PartyLeader);
	void eventUnregisterPartyMembers();
	void eventRegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void eventDestroyBeacon();
	void OnClientCancellationReceived(struct FUniqueNetId PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(struct FUniqueNetId PlayerID, unsigned long bMaintainParty);
	int GetExistingReservation(struct FUniqueNetId* PartyLeader);
	unsigned char UpdatePartyReservationEntry(struct FUniqueNetId PartyLeader, TArray< struct FPlayerReservation >* PlayerMembers);
	unsigned char AddPartyReservationEntry(struct FUniqueNetId PartyLeader, int TeamNum, unsigned long bIsHost, TArray< struct FPlayerReservation >* PlayerMembers);
	bool InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct FName InSessionName, int InForceTeamNum);
	void PauseReservationRequests(unsigned long bPause);
};

// UClass* UPartyBeaconHost::pClassPointer = NULL;

// Class IpDrv.TcpipConnection
// 0x0020 (0x5078 - 0x5058)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                            		// 0x5058 (0x0020) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3509];

		return pClassPointer;
	};
};

// UClass* UTcpipConnection::pClassPointer = NULL;

// Class IpDrv.TcpNetDriver
// 0x0020 (0x01EC - 0x01CC)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                       		// 0x01CC (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      LogPortUnreach : 1;                               		// 0x01D0 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned char                                      UnknownData00[0x18];                            		// 0x01D4 (0x0018) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3511];

		return pClassPointer;
	};
};

// UClass* UTcpNetDriver::pClassPointer = NULL;

// Class IpDrv.WebRequest
// 0x00BC (0x00F8 - 0x003C)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URI;                                              		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ContentLength;                                    		// 0x006C (0x0004) [0x0000000000000000]
	struct FString                                     ContentType;                                      		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      RequestType;                                      		// 0x007C (0x0001) [0x0000000000000000]
	struct FMap_Mirror                                 HeaderMap;                                        		// 0x0080 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMap_Mirror                                 VariableMap;                                      		// 0x00BC (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3515];

		return pClassPointer;
	};

	int GetHexDigit(struct FString D);
	void DecodeFormData(struct FString Data);
	void ProcessHeaderString(struct FString S);
	void Dump();
	void GetVariables(TArray< struct FString >* varNames);
	struct FString GetVariableNumber(struct FString VariableName, int Number, struct FString DefaultValue);
	int GetVariableCount(struct FString VariableName);
	struct FString GetVariable(struct FString VariableName, struct FString DefaultValue);
	void AddVariable(struct FString VariableName, struct FString Value);
	void GetHeaders(TArray< struct FString >* headers);
	struct FString GetHeader(struct FString HeaderName, struct FString DefaultValue);
	void AddHeader(struct FString HeaderName, struct FString Value);
	struct FString EncodeBase64(struct FString Decoded);
	struct FString DecodeBase64(struct FString Encoded);
};

// UClass* UWebRequest::pClassPointer = NULL;

// Class IpDrv.WebResponse
// 0x0068 (0x00A4 - 0x003C)
class UWebResponse : public UObject
{
public:
	TArray< struct FString >                           headers;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMap_Mirror                                 ReplacementMap;                                   		// 0x0048 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     IncludePath;                                      		// 0x0084 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CharSet;                                          		// 0x0090 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class AWebConnection*                              Connection;                                       		// 0x009C (0x0004) [0x0000000000000000]
	unsigned long                                      bSentText : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      bSentResponse : 1;                                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3517];

		return pClassPointer;
	};

	bool SentResponse();
	bool SentText();
	void Redirect(struct FString URL);
	void SendStandardHeaders(struct FString ContentType, unsigned long bCache);
	void HTTPError(int ErrorNum, struct FString Data);
	void SendHeaders();
	void AddHeader(struct FString Header, unsigned long bReplace);
	void HTTPHeader(struct FString Header);
	void HTTPResponse(struct FString Header);
	void FailAuthentication(struct FString Realm);
	bool SendCachedFile(struct FString Filename, struct FString ContentType);
	void eventSendBinary(int Count, unsigned char* B);
	void eventSendText(struct FString Text, unsigned long bNoCRLF);
	void Dump();
	struct FString GetHTTPExpiration(int OffsetSeconds);
	struct FString LoadParsedUHTM(struct FString Filename);
	bool IncludeBinaryFile(struct FString Filename);
	bool IncludeUHTM(struct FString Filename);
	void ClearSubst();
	void Subst(struct FString Variable, struct FString Value, unsigned long bClear);
	bool FileExists(struct FString Filename);
};

// UClass* UWebResponse::pClassPointer = NULL;

// Class IpDrv.OnlinePlaylistProvider
// 0x0020 (0x00A8 - 0x0088)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int                                                PlaylistId;                                       		// 0x0088 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FName >                             PlaylistGameTypeNames;                            		// 0x008C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0098 (0x000C) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	int                                                Priority;                                         		// 0x00A4 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3519];

		return pClassPointer;
	};
};

// UClass* UOnlinePlaylistProvider::pClassPointer = NULL;

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0048 (0x00CC - 0x0084)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FPointer                                    VfTable_IUIListElementProvider;                   		// 0x0084 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     ProviderClassName;                                		// 0x0088 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ProviderClass;                                    		// 0x0094 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UUIResourceDataProvider* >           RankedDataProviders;                              		// 0x0098 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UUIResourceDataProvider* >           UnrankedDataProviders;                            		// 0x00A4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UUIResourceDataProvider* >           RecModeDataProviders;                             		// 0x00B0 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UUIResourceDataProvider* >           PrivateDataProviders;                             		// 0x00BC (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UOnlinePlaylistManager*                      PlaylistMan;                                      		// 0x00C8 (0x0004) [0x0000000000000000]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3521];

		return pClassPointer;
	};

	int eventGetMatchTypeForPlaylistId(int PlaylistId);
	class UOnlinePlaylistProvider* GetOnlinePlaylistProvider(struct FName ProviderTag, int PlaylistId, int* ProviderIndex);
	bool GetPlaylistProvider(struct FName ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider);
	int FindProviderIndexByFieldValue(struct FName ProviderTag, struct FName SearchField, struct FUIProviderScriptFieldValue* ValueToSearchFor);
	bool GetProviderFieldValue(struct FName ProviderTag, struct FName SearchField, int ProviderIndex, struct FUIProviderScriptFieldValue* out_FieldValue);
	bool GetResourceProviderFields(struct FName ProviderTag, TArray< struct FName >* ProviderFieldTags);
	bool GetResourceProviders(struct FName ProviderTag, TArray< class UUIResourceDataProvider* >* out_Providers);
	int GetProviderCount(struct FName ProviderTag);
	void eventInit();
};

// UClass* UUIDataStore_OnlinePlaylists::pClassPointer = NULL;

// Class IpDrv.WebApplication
// 0x0014 (0x0050 - 0x003C)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                        		// 0x003C (0x0004) [0x0000000000000000]
	class AWebServer*                                  WebServer;                                        		// 0x0040 (0x0004) [0x0000000000000000]
	struct FString                                     Path;                                             		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[45168];

		return pClassPointer;
	};

	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};

// UClass* UWebApplication::pClassPointer = NULL;

// Class IpDrv.WebServer
// 0x014C (0x0314 - 0x01C8)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                       		// 0x01C8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Applications[0xA];                              		// 0x01D4 (0x0078) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ApplicationPaths[0xA];                          		// 0x024C (0x0078) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bEnabled : 1;                                     		// 0x02C4 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	int                                                ListenPort;                                       		// 0x02C8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxConnections;                                   		// 0x02CC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultApplication;                               		// 0x02D0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ExpirationSeconds;                                		// 0x02D4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ServerURL;                                        		// 0x02D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebApplication*                             ApplicationObjects[0xA];                        		// 0x02E4 (0x0028) [0x0000000000000000]
	int                                                ConnectionCount;                                  		// 0x030C (0x0004) [0x0000000000000000]
	int                                                ConnID;                                           		// 0x0310 (0x0004) [0x0000000000000000]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[45171];

		return pClassPointer;
	};

	class UWebApplication* GetApplication(struct FString URI, struct FString* SubURI);
	void eventLostChild(class AActor* C);
	void eventGainedChild(class AActor* C);
	void eventDestroyed();
	void PostBeginPlay();
};

// UClass* AWebServer::pClassPointer = NULL;

// Class IpDrv.HelloWeb
// 0x0000 (0x0050 - 0x0050)
class UHelloWeb : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[45187];

		return pClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};

// UClass* UHelloWeb::pClassPointer = NULL;

// Class IpDrv.ImageServer
// 0x0000 (0x0050 - 0x0050)
class UImageServer : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[45205];

		return pClassPointer;
	};

	void eventQuery(class UWebRequest* Request, class UWebResponse* Response);
};

// UClass* UImageServer::pClassPointer = NULL;

// Class IpDrv.WebConnection
// 0x0030 (0x01F8 - 0x01C8)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                        		// 0x01C8 (0x0004) [0x0000000000000000]
	struct FString                                     ReceivedData;                                     		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebRequest*                                 Request;                                          		// 0x01D8 (0x0004) [0x0000000000000000]
	class UWebResponse*                                Response;                                         		// 0x01DC (0x0004) [0x0000000000000000]
	class UWebApplication*                             Application;                                      		// 0x01E0 (0x0004) [0x0000000000000000]
	unsigned long                                      bDelayCleanup : 1;                                		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001]
	int                                                RawBytesExpecting;                                		// 0x01E8 (0x0004) [0x0000000000000000]
	int                                                MaxValueLength;                                   		// 0x01EC (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxLineLength;                                    		// 0x01F0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ConnID;                                           		// 0x01F4 (0x0004) [0x0000000000000000]

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[46329];

		return pClassPointer;
	};

	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(struct FString S);
	void ProcessGet(struct FString S);
	void ProcessHead(struct FString S);
	void ReceivedLine(struct FString S);
	void eventReceivedText(struct FString Text);
	void eventTimer();
	void eventClosed();
	void eventAccepted();
};

// UClass* AWebConnection::pClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack ( pop )
#endif