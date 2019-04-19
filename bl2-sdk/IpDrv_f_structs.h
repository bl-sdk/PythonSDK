#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function IpDrv.InternetLink.ResolveFailed
struct AInternetLink_ResolveFailed_Params
{
};

// Function IpDrv.InternetLink.Resolved
struct AInternetLink_Resolved_Params
{
	struct FIpAddr                                     Addr;                                                     // (Parm)
};

// Function IpDrv.InternetLink.GetLocalIP
struct AInternetLink_GetLocalIP_Params
{
	struct FIpAddr                                     Arg;                                                      // (Parm, OutParm)
};

// Function IpDrv.InternetLink.StringToIpAddr
struct AInternetLink_StringToIpAddr_Params
{
	struct FString                                     Str;                                                      // (Parm, NeedCtorLink)
	struct FIpAddr                                     Addr;                                                     // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.InternetLink.IpAddrToString
struct AInternetLink_IpAddrToString_Params
{
	struct FIpAddr                                     Arg;                                                      // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.InternetLink.GetLastError
struct AInternetLink_GetLastError_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.InternetLink.Resolve
struct AInternetLink_Resolve_Params
{
	struct FString                                     Domain;                                                   // (Parm, CoerceParm, NeedCtorLink)
};

// Function IpDrv.InternetLink.ParseURL
struct AInternetLink_ParseURL_Params
{
	struct FString                                     URL;                                                      // (Parm, CoerceParm, NeedCtorLink)
	struct FString                                     Addr;                                                     // (Parm, OutParm, NeedCtorLink)
	int                                                PortNum;                                                  // (Parm, OutParm)
	struct FString                                     LevelName;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     EntryName;                                                // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.InternetLink.IsDataPending
struct AInternetLink_IsDataPending_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.ReceivedBinary
struct ATcpLink_ReceivedBinary_Params
{
	int                                                Count;                                                    // (Parm)
	unsigned char                                      B;                                                        // (Parm)
};

// Function IpDrv.TcpLink.ReceivedLine
struct ATcpLink_ReceivedLine_Params
{
	struct FString                                     Line;                                                     // (Parm, NeedCtorLink)
};

// Function IpDrv.TcpLink.ReceivedText
struct ATcpLink_ReceivedText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function IpDrv.TcpLink.Closed
struct ATcpLink_Closed_Params
{
};

// Function IpDrv.TcpLink.Opened
struct ATcpLink_Opened_Params
{
};

// Function IpDrv.TcpLink.Accepted
struct ATcpLink_Accepted_Params
{
};

// Function IpDrv.TcpLink.ReadBinary
struct ATcpLink_ReadBinary_Params
{
	int                                                Count;                                                    // (Parm)
	unsigned char                                      B;                                                        // (Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.ReadText
struct ATcpLink_ReadText_Params
{
	struct FString                                     Str;                                                      // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.SendBinary
struct ATcpLink_SendBinary_Params
{
	int                                                Count;                                                    // (Parm)
	unsigned char                                      B;                                                        // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.SendText
struct ATcpLink_SendText_Params
{
	struct FString                                     Str;                                                      // (Parm, CoerceParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.IsConnected
struct ATcpLink_IsConnected_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.Close
struct ATcpLink_Close_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.Open
struct ATcpLink_Open_Params
{
	struct FIpAddr                                     Addr;                                                     // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.Listen
struct ATcpLink_Listen_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.TcpLink.BindPort
struct ATcpLink_BindPort_Params
{
	int                                                PortNum;                                                  // (OptionalParm, Parm)
	unsigned long                                      bUseNextAvailable : 1;                                        // (OptionalParm, Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
struct UOnlineEventsInterfaceMcp_UploadMatchmakingStats_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (Parm)
	class UOnlineMatchmakingStats*                     MMStats;                                                  // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
struct UOnlineEventsInterfaceMcp_UpdatePlaylistPopulation_Params
{
	int                                                PlaylistId;                                               // (Parm)
	int                                                NumPlayers;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
struct UOnlineEventsInterfaceMcp_UploadGameplayEventsData_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (Parm)
	TArray<unsigned char>                              Payload;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
struct UOnlineEventsInterfaceMcp_UploadPlayerData_Params
{
	struct FUniqueNetId                                UniqueId;                                                 // (Parm)
	struct FString                                     PlayerNick;                                               // (Parm, NeedCtorLink)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
struct UOnlineNewsInterfaceMcp_GetNews_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      NewsType;                                                 // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
struct UOnlineNewsInterfaceMcp_ClearReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadGameNewsDelegate;                                     // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
struct UOnlineNewsInterfaceMcp_AddReadNewsCompletedDelegate_Params
{
	struct FScriptDelegate                             ReadNewsDelegate;                                         // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
struct UOnlineNewsInterfaceMcp_OnReadNewsCompleted_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
	unsigned char                                      NewsType;                                                 // (Parm)
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
struct UOnlineNewsInterfaceMcp_ReadNews_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      NewsType;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearShareTitleFileCompleteDelegate
struct UOnlineTitleFileDownloadMcp_ClearShareTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ShareTitleFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddShareTitleFileCompleteDelegate
struct UOnlineTitleFileDownloadMcp_AddShareTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ShareTitleFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ShareTitleFile
struct UOnlineTitleFileDownloadMcp_ShareTitleFile_Params
{
	struct FString                                     FileToShare;                                              // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
struct UOnlineTitleFileDownloadMcp_ClearDownloadedFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
struct UOnlineTitleFileDownloadMcp_ClearDownloadedFiles_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
struct UOnlineTitleFileDownloadMcp_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
struct UOnlineTitleFileDownloadMcp_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate
struct UOnlineTitleFileDownloadMcp_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate
struct UOnlineTitleFileDownloadMcp_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
struct UOnlineTitleFileDownloadMcp_ReadTitleFile_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FileToRead;                                               // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnShareTitleFileComplete
struct UOnlineTitleFileDownloadMcp_OnShareTitleFileComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     UGCHandle;                                                // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete
struct UOnlineTitleFileDownloadMcp_OnReadTitleFileComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function IpDrv.MeshBeacon.DestroyBeacon
struct UMeshBeacon_DestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
struct UMeshBeaconClient_SendHostNewGameSessionResponse_Params
{
	unsigned long                                      bSuccess : 1;                                                 // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
struct UMeshBeaconClient_OnCreateNewSessionRequestReceived_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	TArray<struct FPlayerMember>                       Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
struct UMeshBeaconClient_OnTravelRequestReceived_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Const, Parm, OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
struct UMeshBeaconClient_OnReceivedBandwidthTestResults_Params
{
	unsigned char                                      TestType;                                                 // (Parm)
	unsigned char                                      TestResult;                                               // (Parm)
	struct FConnectionBandwidthStats                   BandwidthStats;                                           // (Const, Parm, OutParm)
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
struct UMeshBeaconClient_OnReceivedBandwidthTestRequest_Params
{
	unsigned char                                      TestType;                                                 // (Parm)
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
struct UMeshBeaconClient_OnConnectionRequestResult_Params
{
	unsigned char                                      ConnectionResult;                                         // (Parm)
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
struct UMeshBeaconClient_BeginBandwidthTest_Params
{
	unsigned char                                      TestType;                                                 // (Parm)
	int                                                TestBufferSize;                                           // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconClient.RequestConnection
struct UMeshBeaconClient_RequestConnection_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                              // (Const, Parm, OutParm)
	struct FClientConnectionRequest                    ClientRequest;                                            // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      bRegisterSecureAddress : 1;                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
struct UMeshBeaconClient_DestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
struct UMeshBeaconHost_OnReceivedClientCreateNewSessionResult_Params
{
	unsigned long                                      bSucceeded : 1;                                               // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Const, Parm, OutParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
struct UMeshBeaconHost_RequestClientCreateNewSession_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	TArray<struct FPlayerMember>                       Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
struct UMeshBeaconHost_TellClientsToTravel_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Const, Parm, OutParm)
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
struct UMeshBeaconHost_OnAllPendingPlayersConnected_Params
{
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
struct UMeshBeaconHost_AllPlayersConnected_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
struct UMeshBeaconHost_GetConnectionIndexForPlayer_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
struct UMeshBeaconHost_SetPendingPlayerConnections_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
struct UMeshBeaconHost_OnFinishedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	unsigned char                                      TestType;                                                 // (Parm)
	unsigned char                                      TestResult;                                               // (Parm)
	struct FConnectionBandwidthStats                   BandwidthStats;                                           // (Const, Parm, OutParm)
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
struct UMeshBeaconHost_OnStartedBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	unsigned char                                      TestType;                                                 // (Parm)
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
struct UMeshBeaconHost_OnReceivedClientConnectionRequest_Params
{
	struct FClientMeshBeaconConnection                 NewClientConnection;                                      // (Const, Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
struct UMeshBeaconHost_AllowBandwidthTesting_Params
{
	unsigned long                                      bEnabled : 1;                                                 // (Parm)
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
struct UMeshBeaconHost_CancelPendingBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
struct UMeshBeaconHost_HasPendingBandwidthTest_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
struct UMeshBeaconHost_CancelInProgressBandwidthTests_Params
{
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
struct UMeshBeaconHost_HasInProgressBandwidthTest_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
struct UMeshBeaconHost_RequestClientBandwidthTest_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Parm)
	unsigned char                                      TestType;                                                 // (Parm)
	int                                                TestBufferSize;                                           // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
struct UMeshBeaconHost_DestroyBeacon_Params
{
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
struct UMeshBeaconHost_InitHostBeacon_Params
{
	struct FUniqueNetId                                InOwningPlayerId;                                         // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
struct UOnlineSubsystemCommonImpl_GetRegisteredPlayers_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        OutRegisteredPlayers;                                     // (Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
struct UOnlineSubsystemCommonImpl_IsPlayerInSession_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
struct UOnlineSubsystemCommonImpl_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
struct UOnlineAuthInterfaceImpl_FindLocalServerAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
struct UOnlineAuthInterfaceImpl_FindServerAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
struct UOnlineAuthInterfaceImpl_FindLocalClientAuthSession_Params
{
	class UPlayer*                                     ServerConnection;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
struct UOnlineAuthInterfaceImpl_FindClientAuthSession_Params
{
	class UPlayer*                                     ClientConnection;                                         // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthRetryServer
struct UOnlineAuthInterfaceImpl_SendAuthRetryServer_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthKillClient
struct UOnlineAuthInterfaceImpl_SendAuthKillClient_Params
{
	class UPlayer*                                     ClientConnection;                                         // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobServer
struct UOnlineAuthInterfaceImpl_SendAuthBlobServer_Params
{
	class UPlayer*                                     ClientConnection;                                         // (Parm)
	int                                                AuthBlobUID;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobClient
struct UOnlineAuthInterfaceImpl_SendAuthBlobClient_Params
{
	int                                                AuthBlobUID;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_ClearServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_AddServerConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_ClearClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
struct UOnlineAuthInterfaceImpl_AddClientConnectionCloseDelegate_Params
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRetryServerDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthRetryServerDelegate_Params
{
	struct FScriptDelegate                             AuthRetryServerDelegate;                                  // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRetryServerDelegate
struct UOnlineAuthInterfaceImpl_AddAuthRetryServerDelegate_Params
{
	struct FScriptDelegate                             AuthRetryServerDelegate;                                  // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthKillClientDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthKillClientDelegate_Params
{
	struct FScriptDelegate                             AuthKillClientDelegate;                                   // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthKillClientDelegate
struct UOnlineAuthInterfaceImpl_AddAuthKillClientDelegate_Params
{
	struct FScriptDelegate                             AuthKillClientDelegate;                                   // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteServerDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthCompleteServerDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteServerDelegate;                               // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteServerDelegate
struct UOnlineAuthInterfaceImpl_AddAuthCompleteServerDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteServerDelegate;                               // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteClientDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthCompleteClientDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteClientDelegate;                               // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteClientDelegate
struct UOnlineAuthInterfaceImpl_AddAuthCompleteClientDelegate_Params
{
	struct FScriptDelegate                             AuthCompleteClientDelegate;                               // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedServerDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthBlobReceivedServerDelegate_Params
{
	struct FScriptDelegate                             AuthBlobReceivedServerDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedServerDelegate
struct UOnlineAuthInterfaceImpl_AddAuthBlobReceivedServerDelegate_Params
{
	struct FScriptDelegate                             AuthBlobReceivedServerDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedClientDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthBlobReceivedClientDelegate_Params
{
	struct FScriptDelegate                             AuthBlobReceivedClientDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedClientDelegate
struct UOnlineAuthInterfaceImpl_AddAuthBlobReceivedClientDelegate_Params
{
	struct FScriptDelegate                             AuthBlobReceivedClientDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestServerDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthRequestServerDelegate_Params
{
	struct FScriptDelegate                             AuthRequestServerDelegate;                                // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestServerDelegate
struct UOnlineAuthInterfaceImpl_AddAuthRequestServerDelegate_Params
{
	struct FScriptDelegate                             AuthRequestServerDelegate;                                // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestClientDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthRequestClientDelegate_Params
{
	struct FScriptDelegate                             AuthRequestClientDelegate;                                // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestClientDelegate
struct UOnlineAuthInterfaceImpl_AddAuthRequestClientDelegate_Params
{
	struct FScriptDelegate                             AuthRequestClientDelegate;                                // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
struct UOnlineAuthInterfaceImpl_ClearAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                        // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
struct UOnlineAuthInterfaceImpl_AddAuthReadyDelegate_Params
{
	struct FScriptDelegate                             AuthReadyDelegate;                                        // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.HasPendingBootInvite
struct UOnlineGameInterfaceImpl_HasPendingBootInvite_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelNATNegotiation
struct UOnlineGameInterfaceImpl_CancelNATNegotiation_Params
{
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
struct UOnlineGameInterfaceImpl_ClearQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                                 // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
struct UOnlineGameInterfaceImpl_AddQosStatusChangedDelegate_Params
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                                 // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
struct UOnlineGameInterfaceImpl_OnQosStatusChanged_Params
{
	int                                                NumComplete;                                              // (Parm)
	int                                                NumTotal;                                                 // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
struct UOnlineGameInterfaceImpl_BindPlatformSpecificSessionToSearch_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
struct UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfoBySessionName_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
struct UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfo_Params
{
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
struct UOnlineGameInterfaceImpl_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                  // (Parm)
	int                                                NumberToQuery;                                            // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;                   // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddJoinMigratedOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;                   // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnJoinMigratedOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
struct UOnlineGameInterfaceImpl_JoinMigratedOnlineGame_Params
{
	unsigned char                                      PlayerNum;                                                // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddMigrateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnMigrateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
struct UOnlineGameInterfaceImpl_MigrateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingGameCompleteDelegate;               // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
struct UOnlineGameInterfaceImpl_AddRecalculateSkillRatingCompleteDelegate_Params
{
	struct FScriptDelegate                             RecalculateSkillRatingCompleteDelegate;                   // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
struct UOnlineGameInterfaceImpl_OnRecalculateSkillRatingComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
struct UOnlineGameInterfaceImpl_RecalculateSkillRating_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteProcessingStartedDelegate
struct UOnlineGameInterfaceImpl_ClearGameInviteProcessingStartedDelegate_Params
{
	struct FScriptDelegate                             GameInviteProcessingStartedDelegate;                      // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteProcessingStartedDelegate
struct UOnlineGameInterfaceImpl_AddGameInviteProcessingStartedDelegate_Params
{
	struct FScriptDelegate                             GameInviteProcessingStartedDelegate;                      // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted
struct UOnlineGameInterfaceImpl_OnGameInviteProcessingStarted_Params
{
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
struct UOnlineGameInterfaceImpl_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
struct UOnlineGameInterfaceImpl_ClearGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
struct UOnlineGameInterfaceImpl_AddGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
struct UOnlineGameInterfaceImpl_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (Const, Parm, OutParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
struct UOnlineGameInterfaceImpl_GetArbitratedPlayers_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FOnlineArbitrationRegistrant>        ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;                  // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
struct UOnlineGameInterfaceImpl_AddArbitrationRegistrationCompleteDelegate_Params
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;                  // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
struct UOnlineGameInterfaceImpl_OnArbitrationRegistrationComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
struct UOnlineGameInterfaceImpl_RegisterForArbitration_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddEndOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnEndOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
struct UOnlineGameInterfaceImpl_EndOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddStartOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnStartOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
struct UOnlineGameInterfaceImpl_StartOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceImpl_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
struct UOnlineGameInterfaceImpl_UnregisterPlayers_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
struct UOnlineGameInterfaceImpl_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceImpl_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
struct UOnlineGameInterfaceImpl_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
struct UOnlineGameInterfaceImpl_RegisterPlayers_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
struct UOnlineGameInterfaceImpl_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      bWasInvited : 1;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
struct UOnlineGameInterfaceImpl_GetResolvedConnectString_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     ConnectInfo;                                              // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddJoinOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnJoinOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
struct UOnlineGameInterfaceImpl_JoinOnlineGame_Params
{
	unsigned char                                      PlayerNum;                                                // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
struct UOnlineGameInterfaceImpl_FreeSearchResults_Params
{
	class UOnlineGameSearch*                           Search;                                                   // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_AddCancelFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;                    // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
struct UOnlineGameInterfaceImpl_OnCancelFindOnlineGamesComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
struct UOnlineGameInterfaceImpl_CancelFindOnlineGames_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
struct UOnlineGameInterfaceImpl_AddFindOnlineGamesCompleteDelegate_Params
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
struct UOnlineGameInterfaceImpl_FindOnlineGames_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddDestroyOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnDestroyOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
struct UOnlineGameInterfaceImpl_DestroyOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddUpdateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnUpdateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
struct UOnlineGameInterfaceImpl_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (Parm)
	unsigned long                                      bShouldRefreshOnlineData : 1;                                 // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_ClearCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
struct UOnlineGameInterfaceImpl_AddCreateOnlineGameCompleteDelegate_Params
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
struct UOnlineGameInterfaceImpl_OnCreateOnlineGameComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
struct UOnlineGameInterfaceImpl_CreateOnlineGame_Params
{
	unsigned char                                      HostingPlayerNum;                                         // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         NewGameSettings;                                          // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
struct UOnlineGameInterfaceImpl_GetGameSearch_Params
{
	class UOnlineGameSearch*                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
struct UOnlineGameInterfaceImpl_GetGameSettings_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
struct UOnlineGameInterfaceImpl_OnFindOnlineGamesComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
struct UOnlinePlaylistManager_ParseDataCenterId_Params
{
	TArray<unsigned char>                              Data;                                                     // (Const, Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
struct UOnlinePlaylistManager_OnReadDataCenterIdComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
struct UOnlinePlaylistManager_ReadDataCenterId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
struct UOnlinePlaylistManager_SendPlaylistPopulationUpdate_Params
{
	int                                                NumPlayers;                                               // (Parm)
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
struct UOnlinePlaylistManager_GetPopulationInfoFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (Parm)
	int                                                WorldwideTotal;                                           // (Parm, OutParm)
	int                                                RegionTotal;                                              // (Parm, OutParm)
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
struct UOnlinePlaylistManager_ParsePlaylistPopulationData_Params
{
	TArray<unsigned char>                              Data;                                                     // (Const, Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
struct UOnlinePlaylistManager_OnPlaylistPopulationDataUpdated_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
struct UOnlinePlaylistManager_OnReadPlaylistPopulationComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
struct UOnlinePlaylistManager_ReadPlaylistPopulation_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function IpDrv.OnlinePlaylistManager.Reset
struct UOnlinePlaylistManager_Reset_Params
{
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
struct UOnlinePlaylistManager_GetContentIdsFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (Parm)
	TArray<int>                                        ContentIds;                                               // (Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
struct UOnlinePlaylistManager_GetInventorySwapFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (Parm)
	class UClass*                                      SourceInventory;                                          // (Parm)
	class UClass*                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
struct UOnlinePlaylistManager_GetMapCycleFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (Parm)
	TArray<struct FName>                               MapCycle;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
struct UOnlinePlaylistManager_GetUrlFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
struct UOnlinePlaylistManager_GetMatchType_Params
{
	int                                                PlaylistId;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
struct UOnlinePlaylistManager_IsPlaylistArbitrated_Params
{
	int                                                PlaylistId;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
struct UOnlinePlaylistManager_GetLoadBalanceIdFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (Parm)
	int                                                LoadBalanceId;                                            // (Parm, OutParm)
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
struct UOnlinePlaylistManager_GetTeamInfoFromPlaylist_Params
{
	int                                                PlaylistId;                                               // (Parm)
	int                                                TeamSize;                                                 // (Parm, OutParm)
	int                                                TeamCount;                                                // (Parm, OutParm)
	int                                                MaxPartySize;                                             // (Parm, OutParm)
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
struct UOnlinePlaylistManager_PlaylistSupportsDedicatedServers_Params
{
	int                                                PlaylistId;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
struct UOnlinePlaylistManager_HasAnyGameSettings_Params
{
	int                                                PlaylistId;                                               // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
struct UOnlinePlaylistManager_GetGameSettings_Params
{
	int                                                PlaylistId;                                               // (Parm)
	int                                                GameSettingsId;                                           // (Parm)
	class UOnlineGameSettings*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
struct UOnlinePlaylistManager_FinalizePlaylistObjects_Params
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
struct UOnlinePlaylistManager_OnReadTitleFileComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
struct UOnlinePlaylistManager_ShouldRefreshPlaylists_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
struct UOnlinePlaylistManager_DetermineFilesToDownload_Params
{
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
struct UOnlinePlaylistManager_DownloadPlaylist_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
struct UOnlinePlaylistManager_OnReadPlaylistComplete_Params
{
	unsigned long                                      bWasSuccessful : 1;                                           // (Parm)
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
struct UPartyBeacon_OnDestroyComplete_Params
{
};

// Function IpDrv.PartyBeacon.DestroyBeacon
struct UPartyBeacon_DestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
struct UPartyBeaconClient_DestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconClient.CancelReservation
struct UPartyBeaconClient_CancelReservation_Params
{
	struct FUniqueNetId                                CancellingPartyLeader;                                    // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
struct UPartyBeaconClient_RequestReservationUpdate_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                              // (Const, Parm, OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                                    // (Parm)
	TArray<struct FPlayerReservation>                  PlayersToAdd;                                             // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconClient.RequestReservation
struct UPartyBeaconClient_RequestReservation_Params
{
	struct FOnlineGameSearchResult                     DesiredHost;                                              // (Const, Parm, OutParm)
	struct FUniqueNetId                                RequestingPartyLeader;                                    // (Parm)
	TArray<struct FPlayerReservation>                  Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
struct UPartyBeaconClient_OnHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
struct UPartyBeaconClient_OnHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
struct UPartyBeaconClient_OnTravelRequestReceived_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm)
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
struct UPartyBeaconClient_OnReservationCountUpdated_Params
{
	int                                                ReservationRemaining;                                     // (Parm)
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
struct UPartyBeaconClient_OnReservationRequestComplete_Params
{
	unsigned char                                      ReservationResult;                                        // (Parm)
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
struct UPartyBeaconHost_GetMaxAvailableTeamSize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
struct UPartyBeaconHost_GetPartyLeaders_Params
{
	TArray<struct FUniqueNetId>                        PartyLeaders;                                             // (Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.GetPlayers
struct UPartyBeaconHost_GetPlayers_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
struct UPartyBeaconHost_AppendReservationSkillsToSearch_Params
{
	class UOnlineGameSearch*                           Search;                                                   // (Parm)
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
struct UPartyBeaconHost_UnregisterParty_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (Parm)
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
struct UPartyBeaconHost_UnregisterPartyMembers_Params
{
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
struct UPartyBeaconHost_RegisterPartyMembers_Params
{
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
struct UPartyBeaconHost_AreReservationsFull_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
struct UPartyBeaconHost_TellClientsHostHasCancelled_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
struct UPartyBeaconHost_TellClientsHostIsReady_Params
{
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
struct UPartyBeaconHost_TellClientsToTravel_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UClass*                                      SearchClass;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm)
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
struct UPartyBeaconHost_DestroyBeacon_Params
{
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
struct UPartyBeaconHost_OnClientCancellationReceived_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (Parm)
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
struct UPartyBeaconHost_OnReservationsFull_Params
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
struct UPartyBeaconHost_OnReservationChange_Params
{
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
struct UPartyBeaconHost_HandlePlayerLogout_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	unsigned long                                      bMaintainParty : 1;                                           // (Parm)
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
struct UPartyBeaconHost_GetExistingReservation_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (Const, Parm, OutParm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
struct UPartyBeaconHost_UpdatePartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (Parm)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                            // (Const, Parm, OutParm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
struct UPartyBeaconHost_AddPartyReservationEntry_Params
{
	struct FUniqueNetId                                PartyLeader;                                              // (Parm)
	TArray<struct FPlayerReservation>                  PlayerMembers;                                            // (Const, Parm, OutParm, NeedCtorLink)
	int                                                TeamNum;                                                  // (Parm)
	unsigned long                                      bIsHost : 1;                                                  // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
struct UPartyBeaconHost_InitHostBeacon_Params
{
	int                                                InNumTeams;                                               // (Parm)
	int                                                InNumPlayersPerTeam;                                      // (Parm)
	int                                                InNumReservations;                                        // (Parm)
	struct FName                                       InSessionName;                                            // (Parm)
	int                                                InForceTeamNum;                                           // (OptionalParm, Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
struct UPartyBeaconHost_PauseReservationRequests_Params
{
	unsigned long                                      bPause : 1;                                                   // (Parm)
};

// Function IpDrv.WebRequest.GetHexDigit
struct UWebRequest_GetHexDigit_Params
{
	struct FString                                     D;                                                        // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebRequest.DecodeFormData
struct UWebRequest_DecodeFormData_Params
{
	struct FString                                     Data;                                                     // (Parm, NeedCtorLink)
};

// Function IpDrv.WebRequest.ProcessHeaderString
struct UWebRequest_ProcessHeaderString_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function IpDrv.WebRequest.Dump
struct UWebRequest_Dump_Params
{
};

// Function IpDrv.WebRequest.GetVariables
struct UWebRequest_GetVariables_Params
{
	TArray<struct FString>                             varNames;                                                 // (Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableNumber
struct UWebRequest_GetVariableNumber_Params
{
	struct FString                                     VariableName;                                             // (Parm, NeedCtorLink)
	int                                                Number;                                                   // (Parm)
	struct FString                                     DefaultValue;                                             // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.GetVariableCount
struct UWebRequest_GetVariableCount_Params
{
	struct FString                                     VariableName;                                             // (Parm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebRequest.GetVariable
struct UWebRequest_GetVariable_Params
{
	struct FString                                     VariableName;                                             // (Parm, NeedCtorLink)
	struct FString                                     DefaultValue;                                             // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.AddVariable
struct UWebRequest_AddVariable_Params
{
	struct FString                                     VariableName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, CoerceParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeaders
struct UWebRequest_GetHeaders_Params
{
	TArray<struct FString>                             headers;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.GetHeader
struct UWebRequest_GetHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, NeedCtorLink)
	struct FString                                     DefaultValue;                                             // (OptionalParm, Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.AddHeader
struct UWebRequest_AddHeader_Params
{
	struct FString                                     HeaderName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, CoerceParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.EncodeBase64
struct UWebRequest_EncodeBase64_Params
{
	struct FString                                     Decoded;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.WebRequest.DecodeBase64
struct UWebRequest_DecodeBase64_Params
{
	struct FString                                     Encoded;                                                  // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.WebResponse.SentResponse
struct UWebResponse_SentResponse_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebResponse.SentText
struct UWebResponse_SentText_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebResponse.Redirect
struct UWebResponse_Redirect_Params
{
	struct FString                                     URL;                                                      // (Parm, NeedCtorLink)
};

// Function IpDrv.WebResponse.SendStandardHeaders
struct UWebResponse_SendStandardHeaders_Params
{
	struct FString                                     ContentType;                                              // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      bCache : 1;                                                   // (OptionalParm, Parm)
};

// Function IpDrv.WebResponse.HTTPError
struct UWebResponse_HTTPError_Params
{
	int                                                ErrorNum;                                                 // (Parm)
	struct FString                                     Data;                                                     // (OptionalParm, Parm, NeedCtorLink)
};

// Function IpDrv.WebResponse.SendHeaders
struct UWebResponse_SendHeaders_Params
{
};

// Function IpDrv.WebResponse.AddHeader
struct UWebResponse_AddHeader_Params
{
	struct FString                                     Header;                                                   // (Parm, NeedCtorLink)
	unsigned long                                      bReplace : 1;                                                 // (OptionalParm, Parm)
};

// Function IpDrv.WebResponse.HTTPHeader
struct UWebResponse_HTTPHeader_Params
{
	struct FString                                     Header;                                                   // (Parm, NeedCtorLink)
};

// Function IpDrv.WebResponse.HTTPResponse
struct UWebResponse_HTTPResponse_Params
{
	struct FString                                     Header;                                                   // (Parm, NeedCtorLink)
};

// Function IpDrv.WebResponse.FailAuthentication
struct UWebResponse_FailAuthentication_Params
{
	struct FString                                     Realm;                                                    // (Parm, NeedCtorLink)
};

// Function IpDrv.WebResponse.SendCachedFile
struct UWebResponse_SendCachedFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ContentType;                                              // (OptionalParm, Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebResponse.SendBinary
struct UWebResponse_SendBinary_Params
{
	int                                                Count;                                                    // (Parm)
	unsigned char                                      B;                                                        // (Parm)
};

// Function IpDrv.WebResponse.SendText
struct UWebResponse_SendText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
	unsigned long                                      bNoCRLF : 1;                                                  // (OptionalParm, Parm)
};

// Function IpDrv.WebResponse.Dump
struct UWebResponse_Dump_Params
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
struct UWebResponse_GetHTTPExpiration_Params
{
	int                                                OffsetSeconds;                                            // (OptionalParm, Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.WebResponse.LoadParsedUHTM
struct UWebResponse_LoadParsedUHTM_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function IpDrv.WebResponse.IncludeBinaryFile
struct UWebResponse_IncludeBinaryFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebResponse.IncludeUHTM
struct UWebResponse_IncludeUHTM_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebResponse.ClearSubst
struct UWebResponse_ClearSubst_Params
{
};

// Function IpDrv.WebResponse.Subst
struct UWebResponse_Subst_Params
{
	struct FString                                     Variable;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Value;                                                    // (Parm, CoerceParm, NeedCtorLink)
	unsigned long                                      bClear : 1;                                                   // (OptionalParm, Parm)
};

// Function IpDrv.WebResponse.FileExists
struct UWebResponse_FileExists_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
struct UUIDataStore_OnlinePlaylists_GetMatchTypeForPlaylistId_Params
{
	int                                                PlaylistId;                                               // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
struct UUIDataStore_OnlinePlaylists_GetOnlinePlaylistProvider_Params
{
	struct FName                                       ProviderTag;                                              // (Parm)
	int                                                PlaylistId;                                               // (Parm)
	int                                                ProviderIndex;                                            // (OptionalParm, Parm, OutParm)
	class UOnlinePlaylistProvider*                     ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
struct UUIDataStore_OnlinePlaylists_GetPlaylistProvider_Params
{
	struct FName                                       ProviderTag;                                              // (Parm)
	int                                                ProviderIndex;                                            // (Parm)
	class UUIResourceDataProvider*                     out_Provider;                                             // (Parm, OutParm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.FindProviderIndexByFieldValue
struct UUIDataStore_OnlinePlaylists_FindProviderIndexByFieldValue_Params
{
	struct FName                                       ProviderTag;                                              // (Parm)
	struct FName                                       SearchField;                                              // (Parm)
	struct FUIProviderScriptFieldValue                 ValueToSearchFor;                                         // (Const, Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderFieldValue
struct UUIDataStore_OnlinePlaylists_GetProviderFieldValue_Params
{
	struct FName                                       ProviderTag;                                              // (Parm)
	struct FName                                       SearchField;                                              // (Parm)
	int                                                ProviderIndex;                                            // (Parm)
	struct FUIProviderScriptFieldValue                 out_FieldValue;                                           // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviderFields
struct UUIDataStore_OnlinePlaylists_GetResourceProviderFields_Params
{
	struct FName                                       ProviderTag;                                              // (Parm)
	TArray<struct FName>                               ProviderFieldTags;                                        // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
struct UUIDataStore_OnlinePlaylists_GetResourceProviders_Params
{
	struct FName                                       ProviderTag;                                              // (Parm)
	TArray<class UUIResourceDataProvider*>             out_Providers;                                            // (Parm, OutParm, NeedCtorLink)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderCount
struct UUIDataStore_OnlinePlaylists_GetProviderCount_Params
{
	struct FName                                       ProviderTag;                                              // (Parm)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
struct UUIDataStore_OnlinePlaylists_Init_Params
{
};

// Function IpDrv.WebApplication.PostQuery
struct UWebApplication_PostQuery_Params
{
	class UWebRequest*                                 Request;                                                  // (Parm)
	class UWebResponse*                                Response;                                                 // (Parm)
};

// Function IpDrv.WebApplication.Query
struct UWebApplication_Query_Params
{
	class UWebRequest*                                 Request;                                                  // (Parm)
	class UWebResponse*                                Response;                                                 // (Parm)
};

// Function IpDrv.WebApplication.PreQuery
struct UWebApplication_PreQuery_Params
{
	class UWebRequest*                                 Request;                                                  // (Parm)
	class UWebResponse*                                Response;                                                 // (Parm)
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebApplication.CleanupApp
struct UWebApplication_CleanupApp_Params
{
};

// Function IpDrv.WebApplication.Cleanup
struct UWebApplication_Cleanup_Params
{
};

// Function IpDrv.WebApplication.Init
struct UWebApplication_Init_Params
{
};

// Function IpDrv.WebServer.GetApplication
struct AWebServer_GetApplication_Params
{
	struct FString                                     URI;                                                      // (Parm, NeedCtorLink)
	struct FString                                     SubURI;                                                   // (Parm, OutParm, NeedCtorLink)
	class UWebApplication*                             ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebServer.LostChild
struct AWebServer_LostChild_Params
{
	class AActor*                                      C;                                                        // (Parm)
};

// Function IpDrv.WebServer.GainedChild
struct AWebServer_GainedChild_Params
{
	class AActor*                                      C;                                                        // (Parm)
};

// Function IpDrv.WebServer.Destroyed
struct AWebServer_Destroyed_Params
{
};

// Function IpDrv.WebServer.PostBeginPlay
struct AWebServer_PostBeginPlay_Params
{
};

// Function IpDrv.HelloWeb.Query
struct UHelloWeb_Query_Params
{
	class UWebRequest*                                 Request;                                                  // (Parm)
	class UWebResponse*                                Response;                                                 // (Parm)
};

// Function IpDrv.HelloWeb.Init
struct UHelloWeb_Init_Params
{
};

// Function IpDrv.ImageServer.Query
struct UImageServer_Query_Params
{
	class UWebRequest*                                 Request;                                                  // (Parm)
	class UWebResponse*                                Response;                                                 // (Parm)
};

// Function IpDrv.WebConnection.IsHanging
struct AWebConnection_IsHanging_Params
{
	unsigned long                                      ReturnValue : 1;                                              // (Parm, OutParm, ReturnParm)
};

// Function IpDrv.WebConnection.Cleanup
struct AWebConnection_Cleanup_Params
{
};

// Function IpDrv.WebConnection.CheckRawBytes
struct AWebConnection_CheckRawBytes_Params
{
};

// Function IpDrv.WebConnection.EndOfHeaders
struct AWebConnection_EndOfHeaders_Params
{
};

// Function IpDrv.WebConnection.CreateResponseObject
struct AWebConnection_CreateResponseObject_Params
{
};

// Function IpDrv.WebConnection.ProcessPost
struct AWebConnection_ProcessPost_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function IpDrv.WebConnection.ProcessGet
struct AWebConnection_ProcessGet_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function IpDrv.WebConnection.ProcessHead
struct AWebConnection_ProcessHead_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedLine
struct AWebConnection_ReceivedLine_Params
{
	struct FString                                     S;                                                        // (Parm, NeedCtorLink)
};

// Function IpDrv.WebConnection.ReceivedText
struct AWebConnection_ReceivedText_Params
{
	struct FString                                     Text;                                                     // (Parm, NeedCtorLink)
};

// Function IpDrv.WebConnection.Timer
struct AWebConnection_Timer_Params
{
};

// Function IpDrv.WebConnection.Closed
struct AWebConnection_Closed_Params
{
};

// Function IpDrv.WebConnection.Accepted
struct AWebConnection_Accepted_Params
{
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
