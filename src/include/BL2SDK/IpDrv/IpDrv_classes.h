#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x003C - 0x0048)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                               // 0x003C(0x0004)
	struct FName                                       BeaconName;                                               // 0x0040(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ClientBeaconAddressResolver");
		return ptr;
	}

};


// Class IpDrv.HTTPDownload
// 0x0104 (0x0A70 - 0x0B74)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                          // 0x0A70(0x000C) (Config, NeedCtorLink)
	int                                                ProxyServerPort;                                          // 0x0A7C(0x0004) (Config)
	unsigned long                                      MaxRedirection : 1;                                       // 0x0A80(0x0004) (Config)
	float                                              ConnectionTimeout;                                        // 0x0A84(0x0004) (Config)
	unsigned char                                      UnknownData00[0xEC];                                      // 0x0A88(0x00EC) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("HTTPDownload");
		return ptr;
	}

};


// Class IpDrv.InternetLink
// 0x0018 (0x0188 - 0x01A0)
class AInternetLink : public AInfo
{
public:
	unsigned char                                      LinkMode;                                                 // 0x0188(0x0001)
	unsigned char                                      InLineMode;                                               // 0x0189(0x0001)
	unsigned char                                      OutLineMode;                                              // 0x018A(0x0001)
	unsigned char                                      ReceiveMode;                                              // 0x018B(0x0001)
	struct FPointer                                    Socket;                                                   // 0x018C(0x0004) (Const)
	int                                                Port;                                                     // 0x0190(0x0004) (Const)
	struct FPointer                                    RemoteSocket;                                             // 0x0194(0x0004) (Const)
	struct FPointer                                    PrivateResolveInfo;                                       // 0x0198(0x0004) (Const, Native)
	int                                                DataPending;                                              // 0x019C(0x0004) (Const)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("InternetLink");
		return ptr;
	}


	void ResolveFailed();
	void Resolved(const struct FIpAddr& Addr);
	void GetLocalIP(struct FIpAddr* Arg);
	bool StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr);
	struct FString IpAddrToString(const struct FIpAddr& Arg);
	int GetLastError();
	void Resolve(const struct FString& Domain);
	bool ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName);
	bool IsDataPending();
};


// Class IpDrv.TcpLink
// 0x0028 (0x01A0 - 0x01C8)
class ATcpLink : public AInternetLink
{
public:
	unsigned char                                      LinkState;                                                // 0x01A0(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	struct FIpAddr                                     RemoteAddr;                                               // 0x01A4(0x0008)
	class UClass*                                      AcceptClass;                                              // 0x01AC(0x0004)
	TArray<unsigned char>                              SendFIFO;                                                 // 0x01B0(0x000C) (Const, NeedCtorLink)
	struct FString                                     RecvBuf;                                                  // 0x01BC(0x000C) (Const, NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TcpLink");
		return ptr;
	}


	void ReceivedBinary(int Count, unsigned char B);
	void ReceivedLine(const struct FString& Line);
	void ReceivedText(const struct FString& Text);
	void Closed();
	void Opened();
	void Accepted();
	int ReadBinary(int Count, unsigned char* B);
	int ReadText(struct FString* Str);
	int SendBinary(int Count, unsigned char B);
	int SendText(const struct FString& Str);
	bool IsConnected();
	bool Close();
	bool Open(const struct FIpAddr& Addr);
	bool Listen();
	int BindPort(int PortNum, bool bUseNextAvailable);
};


// Class IpDrv.MCPBase
// 0x0004 (0x003C - 0x0040)
class UMCPBase : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("MCPBase");
		return ptr;
	}

};


// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0028 (0x0040 - 0x0068)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FEventUploadConfig>                  EventUploadConfigs;                                       // 0x0040(0x000C) (Const, Config, NeedCtorLink)
	TArray<struct FPointer>                            MCPEventPostObjects;                                      // 0x004C(0x000C) (Const, Native)
	TArray<unsigned char>                              DisabledUploadTypes;                                      // 0x0058(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bBinaryStats : 1;                                         // 0x0064(0x0004) (Const, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlineEventsInterfaceMcp");
		return ptr;
	}


	bool UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats);
	bool UpdatePlaylistPopulation(int PlaylistId, int NumPlayers);
	bool UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, TArray<unsigned char>* Payload);
	bool UploadPlayerData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage);
};


// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0028 (0x0040 - 0x0068)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray<struct FNewsCacheEntry>                     NewsItems;                                                // 0x0040(0x000C) (Config, NeedCtorLink)
	TArray<struct FScriptDelegate>                     ReadNewsDelegates;                                        // 0x004C(0x000C) (NeedCtorLink)
	unsigned long                                      bNeedsTicking : 1;                                        // 0x0058(0x0004) (Transient)
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                          // 0x005C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlineNewsInterfaceMcp");
		return ptr;
	}


	struct FString GetNews(unsigned char LocalUserNum, unsigned char NewsType);
	void ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate);
	void AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate);
	void OnReadNewsCompleted(bool bWasSuccessful, unsigned char NewsType);
	bool ReadNews(unsigned char LocalUserNum, unsigned char NewsType);
};


// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0050 (0x0040 - 0x0090)
class UOnlineTitleFileDownloadMcp : public UMCPBase
{
public:
	TArray<struct FScriptDelegate>                     ReadTitleFileCompleteDelegates;                           // 0x0040(0x000C) (NeedCtorLink)
	TArray<struct FTitleFileMcp>                       TitleFiles;                                               // 0x004C(0x000C) (NeedCtorLink)
	int                                                DownloadCount;                                            // 0x0058(0x0004) (Transient)
	struct FString                                     BaseUrl;                                                  // 0x005C(0x000C) (Config, NeedCtorLink)
	float                                              TimeOut;                                                  // 0x0068(0x0004) (Config)
	TArray<struct FFileNameToURLMapping>               FilesToUrls;                                              // 0x006C(0x000C) (Config, NeedCtorLink)
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;                      // 0x0078(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnShareTitleFileComplete__Delegate;                     // 0x0084(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlineTitleFileDownloadMcp");
		return ptr;
	}


	void ClearShareTitleFileCompleteDelegate(const struct FScriptDelegate& ShareTitleFileCompleteDelegate);
	void AddShareTitleFileCompleteDelegate(const struct FScriptDelegate& ShareTitleFileCompleteDelegate);
	bool ShareTitleFile(const struct FString& FileToShare);
	bool ClearDownloadedFile(const struct FString& Filename);
	bool ClearDownloadedFiles();
	unsigned char GetTitleFileState(const struct FString& Filename);
	bool GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents);
	void ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(unsigned char LocalUserNum, const struct FString& FileToRead);
	void OnShareTitleFileComplete(bool bWasSuccessful, const struct FString& Filename, const struct FString& UGCHandle);
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
};


// Class IpDrv.MeshBeacon
// 0x003C (0x003C - 0x0078)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	int                                                MeshBeaconPort;                                           // 0x0040(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004) (Transient)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004) (Transient)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)
	int                                                SocketSendBufferSize;                                     // 0x005C(0x0004) (Config)
	int                                                SocketReceiveBufferSize;                                  // 0x0060(0x0004) (Config)
	int                                                MaxBandwidthTestBufferSize;                               // 0x0064(0x0004) (Config)
	int                                                MinBandwidthTestBufferSize;                               // 0x0068(0x0004) (Config)
	float                                              MaxBandwidthTestSendTime;                                 // 0x006C(0x0004) (Config)
	float                                              MaxBandwidthTestReceiveTime;                              // 0x0070(0x0004) (Config)
	int                                                MaxBandwidthHistoryEntries;                               // 0x0074(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("MeshBeacon");
		return ptr;
	}


	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconClient
// 0x00B0 (0x0078 - 0x0128)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x0078(0x0008) (Const)
	struct FClientConnectionRequest                    ClientPendingRequest;                                     // 0x0080(0x0034) (Const, NeedCtorLink)
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                                     // 0x00B4(0x0014)
	unsigned char                                      ClientBeaconState;                                        // 0x00C8(0x0001)
	unsigned char                                      ClientBeaconRequestType;                                  // 0x00C9(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00CA(0x0002) MISSED OFFSET
	float                                              ConnectionRequestTimeout;                                 // 0x00CC(0x0004) (Config)
	float                                              ConnectionRequestElapsedTime;                             // 0x00D0(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x00D4(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x00E0(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x00E4(0x0004)
	unsigned long                                      bUsingRegisteredAddr : 1;                                 // 0x00E8(0x0004) (Transient)
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;                    // 0x00EC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;               // 0x00F8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;               // 0x0104(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x0110(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;            // 0x011C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("MeshBeaconClient");
		return ptr;
	}


	bool SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnReceivedBandwidthTestResults(unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnReceivedBandwidthTestRequest(unsigned char TestType);
	void OnConnectionRequestResult(unsigned char ConnectionResult);
	bool BeginBandwidthTest(unsigned char TestType, int TestBufferSize);
	bool RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest);
	void DestroyBeacon();
};


// Class IpDrv.MeshBeaconHost
// 0x0074 (0x0078 - 0x00EC)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray<struct FClientMeshBeaconConnection>         ClientConnections;                                        // 0x0078(0x000C) (Const, NeedCtorLink)
	TArray<struct FUniqueNetId>                        PendingPlayerConnections;                                 // 0x0084(0x000C) (NeedCtorLink)
	struct FUniqueNetId                                OwningPlayerId;                                           // 0x0090(0x0018) (Const)
	unsigned long                                      bAllowBandwidthTesting : 1;                               // 0x00A8(0x0004)
	int                                                ConnectionBacklog;                                        // 0x00AC(0x0004) (Config)
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;            // 0x00B0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;                       // 0x00BC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;                      // 0x00C8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;                 // 0x00D4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;       // 0x00E0(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("MeshBeaconHost");
		return ptr;
	}


	void OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	bool RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players);
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo);
	void OnAllPendingPlayersConnected();
	bool AllPlayersConnected(TArray<struct FUniqueNetId>* Players);
	int GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId);
	void SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players);
	void OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats);
	void OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, unsigned char TestType);
	void OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection);
	void AllowBandwidthTesting(bool bEnabled);
	void CancelPendingBandwidthTests();
	bool HasPendingBandwidthTest();
	void CancelInProgressBandwidthTests();
	bool HasInProgressBandwidthTest();
	bool RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, unsigned char TestType, int TestBufferSize);
	void DestroyBeacon();
	bool InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId);
};


// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0018 (0x00E0 - 0x00F8)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                              // 0x00E0(0x0004) (Const, Native, Transient)
	int                                                MaxLocalTalkers;                                          // 0x00E4(0x0004) (Config)
	int                                                MaxRemoteTalkers;                                         // 0x00E8(0x0004) (Config)
	unsigned long                                      bIsUsingSpeechRecognition : 1;                            // 0x00EC(0x0004) (Config)
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                        // 0x00F0(0x0004)
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                                        // 0x00F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlineSubsystemCommonImpl");
		return ptr;
	}


	void GetRegisteredPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers);
	bool IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	struct FString GetPlayerNicknameFromIndex(int UserIndex);
};


// Class IpDrv.OnlineAuthInterfaceImpl
// 0x0088 (0x010C - 0x0194)
class UOnlineAuthInterfaceImpl : public UOnlineAuthInterfaceBaseImpl
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x010C(0x0004)
	TArray<struct FScriptDelegate>                     AuthReadyDelegates;                                       // 0x0110(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthRequestClientDelegates;                               // 0x011C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthRequestServerDelegates;                               // 0x0128(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthBlobReceivedClientDelegates;                          // 0x0134(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthBlobReceivedServerDelegates;                          // 0x0140(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthCompleteClientDelegates;                              // 0x014C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthCompleteServerDelegates;                              // 0x0158(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthKillClientDelegates;                                  // 0x0164(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     AuthRetryServerDelegates;                                 // 0x0170(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ClientConnectionCloseDelegates;                           // 0x017C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ServerConnectionCloseDelegates;                           // 0x0188(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlineAuthInterfaceImpl");
		return ptr;
	}


	int FindLocalServerAuthSession(class UPlayer* ClientConnection);
	int FindServerAuthSession(class UPlayer* ServerConnection);
	int FindLocalClientAuthSession(class UPlayer* ServerConnection);
	int FindClientAuthSession(class UPlayer* ClientConnection);
	bool SendAuthRetryServer();
	bool SendAuthKillClient(class UPlayer* ClientConnection);
	bool SendAuthBlobServer(class UPlayer* ClientConnection, int AuthBlobUID);
	bool SendAuthBlobClient(int AuthBlobUID);
	void ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate);
	void ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate);
	void ClearAuthRetryServerDelegate(const struct FScriptDelegate& AuthRetryServerDelegate);
	void AddAuthRetryServerDelegate(const struct FScriptDelegate& AuthRetryServerDelegate);
	void ClearAuthKillClientDelegate(const struct FScriptDelegate& AuthKillClientDelegate);
	void AddAuthKillClientDelegate(const struct FScriptDelegate& AuthKillClientDelegate);
	void ClearAuthCompleteServerDelegate(const struct FScriptDelegate& AuthCompleteServerDelegate);
	void AddAuthCompleteServerDelegate(const struct FScriptDelegate& AuthCompleteServerDelegate);
	void ClearAuthCompleteClientDelegate(const struct FScriptDelegate& AuthCompleteClientDelegate);
	void AddAuthCompleteClientDelegate(const struct FScriptDelegate& AuthCompleteClientDelegate);
	void ClearAuthBlobReceivedServerDelegate(const struct FScriptDelegate& AuthBlobReceivedServerDelegate);
	void AddAuthBlobReceivedServerDelegate(const struct FScriptDelegate& AuthBlobReceivedServerDelegate);
	void ClearAuthBlobReceivedClientDelegate(const struct FScriptDelegate& AuthBlobReceivedClientDelegate);
	void AddAuthBlobReceivedClientDelegate(const struct FScriptDelegate& AuthBlobReceivedClientDelegate);
	void ClearAuthRequestServerDelegate(const struct FScriptDelegate& AuthRequestServerDelegate);
	void AddAuthRequestServerDelegate(const struct FScriptDelegate& AuthRequestServerDelegate);
	void ClearAuthRequestClientDelegate(const struct FScriptDelegate& AuthRequestClientDelegate);
	void AddAuthRequestClientDelegate(const struct FScriptDelegate& AuthRequestClientDelegate);
	void ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
	void AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate);
};


// Class IpDrv.OnlineGameInterfaceImpl
// 0x0188 (0x003C - 0x01C4)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                          // 0x003C(0x0004)
	class UOnlineGameSettings*                         GameSettings;                                             // 0x0040(0x0004) (Const)
	class UOnlineGameSearch*                           GameSearch;                                               // 0x0044(0x0004) (Const)
	unsigned char                                      CurrentGameState;                                         // 0x0048(0x0001) (Const)
	unsigned char                                      LanBeaconState;                                           // 0x0049(0x0001) (Const)
	unsigned char                                      LanNonce[0x8];                                            // 0x004A(0x0001) (Const)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0052(0x0002) MISSED OFFSET
	TArray<struct FScriptDelegate>                     CreateOnlineGameCompleteDelegates;                        // 0x0054(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     UpdateOnlineGameCompleteDelegates;                        // 0x0060(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DestroyOnlineGameCompleteDelegates;                       // 0x006C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinOnlineGameCompleteDelegates;                          // 0x0078(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     MigrateOnlineGameCompleteDelegates;                       // 0x0084(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     JoinMigratedOnlineGameCompleteDelegates;                  // 0x0090(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     RecalculateSkillRatingCompleteDelegates;                  // 0x009C(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     StartOnlineGameCompleteDelegates;                         // 0x00A8(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     EndOnlineGameCompleteDelegates;                           // 0x00B4(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     FindOnlineGamesCompleteDelegates;                         // 0x00C0(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     CancelFindOnlineGamesCompleteDelegates;                   // 0x00CC(0x000C) (NeedCtorLink)
	int                                                LanAnnouncePort;                                          // 0x00D8(0x0004) (Const, Config)
	int                                                LanGameUniqueId;                                          // 0x00DC(0x0004) (Const, Config)
	int                                                LanPacketPlatformMask;                                    // 0x00E0(0x0004) (Const, Config)
	float                                              LanQueryTimeLeft;                                         // 0x00E4(0x0004)
	float                                              LanQueryTimeout;                                          // 0x00E8(0x0004) (Config)
	struct FPointer                                    LanBeacon;                                                // 0x00EC(0x0004) (Const, Native, Transient)
	struct FPointer                                    SessionInfo;                                              // 0x00F0(0x0004) (Const, Native, Transient)
	int                                                NATResolutionTimeout;                                     // 0x00F4(0x0004)
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;                    // 0x00F8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;                   // 0x0104(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;                   // 0x0110(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;                  // 0x011C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;              // 0x0128(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;                     // 0x0134(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;                     // 0x0140(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;                   // 0x014C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;                    // 0x0158(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;                      // 0x0164(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;            // 0x0170(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                         // 0x017C(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnGameInviteProcessingStarted__Delegate;                // 0x0188(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;             // 0x0194(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;                  // 0x01A0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;             // 0x01AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                           // 0x01B8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlineGameInterfaceImpl");
		return ptr;
	}


	bool HasPendingBootInvite();
	void CancelNATNegotiation();
	void ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate);
	void OnQosStatusChanged(int NumComplete, int NumTotal);
	bool BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate);
	void OnJoinMigratedOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	void ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate);
	void OnMigrateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName);
	void ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate);
	void AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate);
	void OnRecalculateSkillRatingComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	void ClearGameInviteProcessingStartedDelegate(const struct FScriptDelegate& GameInviteProcessingStartedDelegate);
	void AddGameInviteProcessingStartedDelegate(const struct FScriptDelegate& GameInviteProcessingStartedDelegate);
	void OnGameInviteProcessingStarted();
	bool AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	TArray<struct FOnlineArbitrationRegistrant> GetArbitratedPlayers(const struct FName& SessionName);
	void ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate);
	void OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool RegisterForArbitration(const struct FName& SessionName);
	void ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate);
	void OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool EndOnlineGame(const struct FName& SessionName);
	void ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate);
	void OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool StartOnlineGame(const struct FName& SessionName);
	void ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID);
	void ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful);
	bool RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players);
	bool RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited);
	bool GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo);
	void ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate);
	void OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame);
	bool FreeSearchResults(class UOnlineGameSearch* Search);
	void ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate);
	void OnCancelFindOnlineGamesComplete(bool bWasSuccessful);
	bool CancelFindOnlineGames();
	void ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	void AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate);
	bool FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings);
	void ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate);
	void OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool DestroyOnlineGame(const struct FName& SessionName);
	void ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate);
	void OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData);
	void ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate);
	void OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful);
	bool CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings);
	class UOnlineGameSearch* GetGameSearch();
	class UOnlineGameSettings* GetGameSettings(const struct FName& SessionName);
	void OnFindOnlineGamesComplete(bool bWasSuccessful);
};


// Class IpDrv.OnlinePlaylistManager
// 0x00A4 (0x003C - 0x00E0)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	TArray<struct FPlaylist>                           Playlists;                                                // 0x0040(0x000C) (Config, NeedCtorLink)
	TArray<struct FString>                             PlaylistFileNames;                                        // 0x004C(0x000C) (NeedCtorLink)
	TArray<struct FName>                               DatastoresToRefresh;                                      // 0x0058(0x000C) (Config, NeedCtorLink)
	int                                                DownloadCount;                                            // 0x0064(0x0004)
	int                                                SuccessfulCount;                                          // 0x0068(0x0004)
	int                                                VersionNumber;                                            // 0x006C(0x0004) (Config)
	TArray<struct FPlaylistPopulation>                 PopulationData;                                           // 0x0070(0x000C) (Config, NeedCtorLink)
	int                                                WorldwideTotalPlayers;                                    // 0x007C(0x0004)
	int                                                RegionTotalPlayers;                                       // 0x0080(0x0004)
	FScriptInterface                                   TitleFileInterface;                                       // 0x0084(0x0008) (Transient)
	struct FString                                     PopulationFileName;                                       // 0x008C(0x000C) (NeedCtorLink)
	float                                              NextPlaylistPopulationUpdateTime;                         // 0x0098(0x0004) (Transient)
	float                                              PlaylistPopulationUpdateInterval;                         // 0x009C(0x0004) (Config)
	int                                                MinPlaylistIdToReport;                                    // 0x00A0(0x0004) (Config)
	int                                                CurrentPlaylistId;                                        // 0x00A4(0x0004) (Transient)
	struct FName                                       EventsInterfaceName;                                      // 0x00A8(0x0008) (Config)
	int                                                DataCenterId;                                             // 0x00B0(0x0004) (Config)
	struct FString                                     DataCenterFileName;                                       // 0x00B4(0x000C) (NeedCtorLink)
	float                                              LastPlaylistDownloadTime;                                 // 0x00C0(0x0004) (Transient)
	float                                              PlaylistRefreshInterval;                                  // 0x00C4(0x0004) (Config)
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;                       // 0x00C8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;              // 0x00D4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlinePlaylistManager");
		return ptr;
	}


	void ParseDataCenterId(TArray<unsigned char>* Data);
	void OnReadDataCenterIdComplete(bool bWasSuccessful, const struct FString& Filename);
	void ReadDataCenterId(unsigned char LocalUserNum);
	void SendPlaylistPopulationUpdate(int NumPlayers);
	void GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal);
	void ParsePlaylistPopulationData(TArray<unsigned char>* Data);
	void OnPlaylistPopulationDataUpdated();
	void OnReadPlaylistPopulationComplete(bool bWasSuccessful, const struct FString& Filename);
	void ReadPlaylistPopulation(unsigned char LocalUserNum);
	void Reset();
	void GetContentIdsFromPlaylist(int PlaylistId, TArray<int>* ContentIds);
	class UClass* GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory);
	void GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>* MapCycle);
	struct FString GetUrlFromPlaylist(int PlaylistId);
	int GetMatchType(int PlaylistId);
	bool IsPlaylistArbitrated(int PlaylistId);
	void GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId);
	void GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize);
	bool PlaylistSupportsDedicatedServers(int PlaylistId);
	bool HasAnyGameSettings(int PlaylistId);
	class UOnlineGameSettings* GetGameSettings(int PlaylistId, int GameSettingsId);
	void FinalizePlaylistObjects();
	void OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename);
	bool ShouldRefreshPlaylists();
	void DetermineFilesToDownload();
	void DownloadPlaylist(unsigned char LocalUserNum);
	void OnReadPlaylistComplete(bool bWasSuccessful);
};


// Class IpDrv.PartyBeacon
// 0x002C (0x003C - 0x0068)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                                  // 0x003C(0x0004) (Const, Native, NoExport)
	int                                                PartyBeaconPort;                                          // 0x0040(0x0004) (Config)
	struct FPointer                                    Socket;                                                   // 0x0044(0x0004) (Native, Transient)
	unsigned long                                      bIsInTick : 1;                                            // 0x0048(0x0004)
	unsigned long                                      bWantsDeferredDestroy : 1;                                // 0x0048(0x0004)
	unsigned long                                      bShouldTick : 1;                                          // 0x0048(0x0004)
	float                                              HeartbeatTimeout;                                         // 0x004C(0x0004) (Config)
	float                                              ElapsedHeartbeatTime;                                     // 0x0050(0x0004)
	struct FName                                       BeaconName;                                               // 0x0054(0x0008)
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                            // 0x005C(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PartyBeacon");
		return ptr;
	}


	void OnDestroyComplete();
	void DestroyBeacon();
};


// Class IpDrv.PartyBeaconClient
// 0x008C (0x0068 - 0x00F4)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                                       // 0x0068(0x0008) (Const)
	struct FPartyReservation                           PendingRequest;                                           // 0x0070(0x0028) (NeedCtorLink)
	unsigned char                                      ClientBeaconState;                                        // 0x0098(0x0001)
	unsigned char                                      ClientBeaconRequestType;                                  // 0x0099(0x0001)
	unsigned char                                      UnknownData00[0x2];                                       // 0x009A(0x0002) MISSED OFFSET
	float                                              ReservationRequestTimeout;                                // 0x009C(0x0004) (Config)
	float                                              ReservationRequestElapsedTime;                            // 0x00A0(0x0004)
	struct FString                                     ResolverClassName;                                        // 0x00A4(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ResolverClass;                                            // 0x00B0(0x0004)
	class UClientBeaconAddressResolver*                Resolver;                                                 // 0x00B4(0x0004)
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;                 // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;                    // 0x00C4(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;                      // 0x00D0(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                                // 0x00DC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                           // 0x00E8(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PartyBeaconClient");
		return ptr;
	}


	void DestroyBeacon();
	bool CancelReservation(const struct FUniqueNetId& CancellingPartyLeader);
	bool RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd);
	bool RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players);
	void OnHostHasCancelled();
	void OnHostIsReady();
	void OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void OnReservationCountUpdated(int ReservationRemaining);
	void OnReservationRequestComplete(unsigned char ReservationResult);
};


// Class IpDrv.PartyBeaconHost
// 0x0068 (0x0068 - 0x00D0)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray<struct FClientBeaconConnection>             Clients;                                                  // 0x0068(0x000C) (Const, NeedCtorLink)
	int                                                NumTeams;                                                 // 0x0074(0x0004) (Const)
	int                                                NumPlayersPerTeam;                                        // 0x0078(0x0004) (Const)
	int                                                NumReservations;                                          // 0x007C(0x0004) (Const)
	int                                                NumConsumedReservations;                                  // 0x0080(0x0004) (Const)
	TArray<struct FPartyReservation>                   Reservations;                                             // 0x0084(0x000C) (Const, NeedCtorLink)
	struct FName                                       OnlineSessionName;                                        // 0x0090(0x0008)
	int                                                ConnectionBacklog;                                        // 0x0098(0x0004) (Config)
	int                                                ForceTeamNum;                                             // 0x009C(0x0004) (Const)
	int                                                ReservedHostTeamNum;                                      // 0x00A0(0x0004) (Const)
	unsigned long                                      bBestFitTeamAssignment : 1;                               // 0x00A4(0x0004)
	unsigned char                                      BeaconState;                                              // 0x00A8(0x0001) (Const)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00A9(0x0003) MISSED OFFSET
	struct FScriptDelegate                             __OnReservationChange__Delegate;                          // 0x00AC(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                           // 0x00B8(0x000C) (NeedCtorLink)
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;                 // 0x00C4(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("PartyBeaconHost");
		return ptr;
	}


	int GetMaxAvailableTeamSize();
	void GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders);
	void GetPlayers(TArray<struct FUniqueNetId>* Players);
	void AppendReservationSkillsToSearch(class UOnlineGameSearch* Search);
	void UnregisterParty(const struct FUniqueNetId& PartyLeader);
	void UnregisterPartyMembers();
	void RegisterPartyMembers();
	bool AreReservationsFull();
	void TellClientsHostHasCancelled();
	void TellClientsHostIsReady();
	void TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo);
	void DestroyBeacon();
	void OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader);
	void OnReservationsFull();
	void OnReservationChange();
	void HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty);
	int GetExistingReservation(struct FUniqueNetId* PartyLeader);
	unsigned char UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers);
	unsigned char AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int TeamNum, bool bIsHost, TArray<struct FPlayerReservation>* PlayerMembers);
	bool InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName, int InForceTeamNum);
	void PauseReservationRequests(bool bPause);
};


// Class IpDrv.TcpipConnection
// 0x0020 (0x5058 - 0x5078)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x5058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TcpipConnection");
		return ptr;
	}

};


// Class IpDrv.TcpNetDriver
// 0x0020 (0x01CC - 0x01EC)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                               // 0x01CC(0x0004) (Config)
	unsigned long                                      UnknownData00 : 31;                                       // 0x01CC(0x0001)
	unsigned long                                      LogPortUnreach : 1;                                       // 0x01D0(0x0004) (Config)
	unsigned char                                      UnknownData01[0x18];                                      // 0x01D4(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("TcpNetDriver");
		return ptr;
	}

};


// Class IpDrv.WebRequest
// 0x00BC (0x003C - 0x00F8)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                               // 0x003C(0x000C) (NeedCtorLink)
	struct FString                                     URI;                                                      // 0x0048(0x000C) (NeedCtorLink)
	struct FString                                     UserName;                                                 // 0x0054(0x000C) (NeedCtorLink)
	struct FString                                     Password;                                                 // 0x0060(0x000C) (NeedCtorLink)
	int                                                ContentLength;                                            // 0x006C(0x0004)
	struct FString                                     ContentType;                                              // 0x0070(0x000C) (NeedCtorLink)
	unsigned char                                      RequestType;                                              // 0x007C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x007D(0x0003) MISSED OFFSET
	struct FMap_Mirror                                 HeaderMap;                                                // 0x0080(0x003C) (Const, Native)
	struct FMap_Mirror                                 VariableMap;                                              // 0x00BC(0x003C) (Const, Native)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WebRequest");
		return ptr;
	}


	int GetHexDigit(const struct FString& D);
	void DecodeFormData(const struct FString& Data);
	void ProcessHeaderString(const struct FString& S);
	void Dump();
	void GetVariables(TArray<struct FString>* varNames);
	struct FString GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue);
	int GetVariableCount(const struct FString& VariableName);
	struct FString GetVariable(const struct FString& VariableName, const struct FString& DefaultValue);
	void AddVariable(const struct FString& VariableName, const struct FString& Value);
	void GetHeaders(TArray<struct FString>* headers);
	struct FString GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue);
	void AddHeader(const struct FString& HeaderName, const struct FString& Value);
	struct FString EncodeBase64(const struct FString& Decoded);
	struct FString DecodeBase64(const struct FString& Encoded);
};


// Class IpDrv.WebResponse
// 0x0068 (0x003C - 0x00A4)
class UWebResponse : public UObject
{
public:
	TArray<struct FString>                             headers;                                                  // 0x003C(0x000C) (NeedCtorLink)
	struct FMap_Mirror                                 ReplacementMap;                                           // 0x0048(0x003C) (Const, Native)
	struct FString                                     IncludePath;                                              // 0x0084(0x000C) (Const, Config, NeedCtorLink)
	struct FString                                     CharSet;                                                  // 0x0090(0x000C) (Const, Localized, NeedCtorLink)
	class AWebConnection*                              Connection;                                               // 0x009C(0x0004)
	unsigned long                                      bSentText : 1;                                            // 0x00A0(0x0004)
	unsigned long                                      bSentResponse : 1;                                        // 0x00A0(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WebResponse");
		return ptr;
	}


	bool SentResponse();
	bool SentText();
	void Redirect(const struct FString& URL);
	void SendStandardHeaders(const struct FString& ContentType, bool bCache);
	void HTTPError(int ErrorNum, const struct FString& Data);
	void SendHeaders();
	void AddHeader(const struct FString& Header, bool bReplace);
	void HTTPHeader(const struct FString& Header);
	void HTTPResponse(const struct FString& Header);
	void FailAuthentication(const struct FString& Realm);
	bool SendCachedFile(const struct FString& Filename, const struct FString& ContentType);
	void SendBinary(int Count, unsigned char B);
	void SendText(const struct FString& Text, bool bNoCRLF);
	void Dump();
	struct FString GetHTTPExpiration(int OffsetSeconds);
	struct FString LoadParsedUHTM(const struct FString& Filename);
	bool IncludeBinaryFile(const struct FString& Filename);
	bool IncludeUHTM(const struct FString& Filename);
	void ClearSubst();
	void Subst(const struct FString& Variable, const struct FString& Value, bool bClear);
	bool FileExists(const struct FString& Filename);
};


// Class IpDrv.OnlinePlaylistProvider
// 0x0020 (0x0088 - 0x00A8)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int                                                PlaylistId;                                               // 0x0088(0x0004) (Config)
	TArray<struct FName>                               PlaylistGameTypeNames;                                    // 0x008C(0x000C) (Config, NeedCtorLink)
	struct FString                                     DisplayName;                                              // 0x0098(0x000C) (Const, Config, Localized, NeedCtorLink)
	int                                                Priority;                                                 // 0x00A4(0x0004) (Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("OnlinePlaylistProvider");
		return ptr;
	}

};


// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0048 (0x0084 - 0x00CC)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FPointer                                    VfTable_IUIListElementProvider;                           // 0x0084(0x0004) (Const, Native, NoExport)
	struct FString                                     ProviderClassName;                                        // 0x0088(0x000C) (Config, NeedCtorLink)
	class UClass*                                      ProviderClass;                                            // 0x0094(0x0004) (Transient)
	TArray<class UUIResourceDataProvider*>             RankedDataProviders;                                      // 0x0098(0x000C) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             UnrankedDataProviders;                                    // 0x00A4(0x000C) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             RecModeDataProviders;                                     // 0x00B0(0x000C) (Const, NeedCtorLink)
	TArray<class UUIResourceDataProvider*>             PrivateDataProviders;                                     // 0x00BC(0x000C) (Const, NeedCtorLink)
	class UOnlinePlaylistManager*                      PlaylistMan;                                              // 0x00C8(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("UIDataStore_OnlinePlaylists");
		return ptr;
	}


	int GetMatchTypeForPlaylistId(int PlaylistId);
	static class UOnlinePlaylistProvider* GetOnlinePlaylistProvider(const struct FName& ProviderTag, int PlaylistId, int* ProviderIndex);
	bool GetPlaylistProvider(const struct FName& ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider);
	int FindProviderIndexByFieldValue(const struct FName& ProviderTag, const struct FName& SearchField, struct FUIProviderScriptFieldValue* ValueToSearchFor);
	bool GetProviderFieldValue(const struct FName& ProviderTag, const struct FName& SearchField, int ProviderIndex, struct FUIProviderScriptFieldValue* out_FieldValue);
	bool GetResourceProviderFields(const struct FName& ProviderTag, TArray<struct FName>* ProviderFieldTags);
	bool GetResourceProviders(const struct FName& ProviderTag, TArray<class UUIResourceDataProvider*>* out_Providers);
	int GetProviderCount(const struct FName& ProviderTag);
	void Init();
};


// Class IpDrv.WebApplication
// 0x0014 (0x003C - 0x0050)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                                // 0x003C(0x0004)
	class AWebServer*                                  WebServer;                                                // 0x0040(0x0004)
	struct FString                                     Path;                                                     // 0x0044(0x000C) (NeedCtorLink)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WebApplication");
		return ptr;
	}


	void PostQuery(class UWebRequest* Request, class UWebResponse* Response);
	void Query(class UWebRequest* Request, class UWebResponse* Response);
	bool PreQuery(class UWebRequest* Request, class UWebResponse* Response);
	void CleanupApp();
	void Cleanup();
	void Init();
};


// Class IpDrv.WebServer
// 0x014C (0x01C8 - 0x0314)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                               // 0x01C8(0x000C) (Config, NeedCtorLink)
	struct FString                                     Applications[0xA];                                        // 0x01D4(0x000C) (Config, NeedCtorLink)
	struct FString                                     ApplicationPaths[0xA];                                    // 0x024C(0x000C) (Config, NeedCtorLink)
	unsigned long                                      bEnabled : 1;                                             // 0x02C4(0x0004) (Config)
	int                                                ListenPort;                                               // 0x02C8(0x0004) (Config)
	int                                                MaxConnections;                                           // 0x02CC(0x0004) (Config)
	int                                                DefaultApplication;                                       // 0x02D0(0x0004) (Config)
	int                                                ExpirationSeconds;                                        // 0x02D4(0x0004) (Config)
	struct FString                                     ServerURL;                                                // 0x02D8(0x000C) (NeedCtorLink)
	class UWebApplication*                             ApplicationObjects[0xA];                                  // 0x02E4(0x0004)
	int                                                ConnectionCount;                                          // 0x030C(0x0004)
	int                                                ConnID;                                                   // 0x0310(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WebServer");
		return ptr;
	}


	class UWebApplication* GetApplication(const struct FString& URI, struct FString* SubURI);
	void LostChild(class AActor* C);
	void GainedChild(class AActor* C);
	void Destroyed();
	void PostBeginPlay();
};


// Class IpDrv.HelloWeb
// 0x0000 (0x0050 - 0x0050)
class UHelloWeb : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("HelloWeb");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
	void Init();
};


// Class IpDrv.ImageServer
// 0x0000 (0x0050 - 0x0050)
class UImageServer : public UWebApplication
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("ImageServer");
		return ptr;
	}


	void Query(class UWebRequest* Request, class UWebResponse* Response);
};


// Class IpDrv.WebConnection
// 0x0030 (0x01C8 - 0x01F8)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                                // 0x01C8(0x0004)
	struct FString                                     ReceivedData;                                             // 0x01CC(0x000C) (NeedCtorLink)
	class UWebRequest*                                 Request;                                                  // 0x01D8(0x0004)
	class UWebResponse*                                Response;                                                 // 0x01DC(0x0004)
	class UWebApplication*                             Application;                                              // 0x01E0(0x0004)
	unsigned long                                      bDelayCleanup : 1;                                        // 0x01E4(0x0004)
	int                                                RawBytesExpecting;                                        // 0x01E8(0x0004)
	int                                                MaxValueLength;                                           // 0x01EC(0x0004) (Config)
	int                                                MaxLineLength;                                            // 0x01F0(0x0004) (Config)
	int                                                ConnID;                                                   // 0x01F4(0x0004)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WebConnection");
		return ptr;
	}


	bool IsHanging();
	void Cleanup();
	void CheckRawBytes();
	void EndOfHeaders();
	void CreateResponseObject();
	void ProcessPost(const struct FString& S);
	void ProcessGet(const struct FString& S);
	void ProcessHead(const struct FString& S);
	void ReceivedLine(const struct FString& S);
	void ReceivedText(const struct FString& Text);
	void Timer();
	void Closed();
	void Accepted();
};


#ifdef _MSC_VER
#pragma pack(pop)
#endif
