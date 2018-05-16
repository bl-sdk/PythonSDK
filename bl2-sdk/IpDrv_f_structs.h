#include "BL2-SDK.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] ( FUNC_Event )
struct AInternetLink_eventResolveFailed_Parms
{
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] ( FUNC_Event )
struct AInternetLink_eventResolved_Parms
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execGetLocalIP_Parms
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execStringToIpAddr_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FIpAddr                                     Addr;                                             		// 0x000C (0x0008) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execIpAddrToString_Parms
{
	struct FIpAddr                                     Arg;                                              		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execGetLastError_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execResolve_Parms
{
	struct FString                                     Domain;                                           		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] ( FUNC_Native )
struct AInternetLink_execParseURL_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	struct FString                                     Addr;                                             		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                PortNum;                                          		// 0x0018 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FString                                     LevelName;                                        		// 0x001C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	struct FString                                     EntryName;                                        		// 0x0028 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0034 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] ( FUNC_Native )
struct AInternetLink_execIsDataPending_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedLine_Parms
{
	struct FString                                     Line;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventReceivedText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventClosed_Parms
{
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventOpened_Parms
{
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] ( FUNC_Event )
struct ATcpLink_eventAccepted_Parms
{
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] ( FUNC_Native )
struct ATcpLink_execReadBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] ( FUNC_Native )
struct ATcpLink_execReadText_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execSendBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0104 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execSendText_Parms
{
	struct FString                                     Str;                                              		// 0x0000 (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execIsConnected_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.Close
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execClose_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.Open
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execOpen_Parms
{
	struct FIpAddr                                     Addr;                                             		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] ( FUNC_Native )
struct ATcpLink_execListen_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] ( FUNC_Native )
struct ATcpLink_execBindPort_Parms
{
	int                                                PortNum;                                          		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bUseNextAvailable : 1;                            		// 0x0004 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineMatchmakingStats*                     MMStats;                                          		// 0x0018 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumPlayers;                                       		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	TArray< unsigned char >                            Payload;                                          		// 0x0018 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020400] ( FUNC_Native )
struct UOnlineEventsInterfaceMcp_execUploadPlayerData_Parms
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     PlayerNick;                                       		// 0x0018 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      ProfileSettings;                                  		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UOnlinePlayerStorage*                        PlayerStorage;                                    		// 0x0028 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execGetNews_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms
{
	struct FScriptDelegate                             ReadGameNewsDelegate;                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002] 
struct UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms
{
	struct FScriptDelegate                             ReadNewsDelegate;                                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000] 
struct UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      NewsType;                                         		// 0x0004 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400] ( FUNC_Native )
struct UOnlineNewsInterfaceMcp_execReadNews_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      NewsType;                                         		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearShareTitleFileCompleteDelegate
// [0x00020000] 
struct UOnlineTitleFileDownloadMcp_execClearShareTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ShareTitleFileCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddShareTitleFileCompleteDelegate
// [0x00020000] 
struct UOnlineTitleFileDownloadMcp_execAddShareTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ShareTitleFileCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ShareTitleFile
// [0x00020000] 
struct UOnlineTitleFileDownloadMcp_execShareTitleFile_Parms
{
	struct FString                                     FileToShare;                                      		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	TArray< unsigned char >                            FileContents;                                     		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execClearReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate
// [0x00020002] 
struct UOnlineTitleFileDownloadMcp_execAddReadTitleFileCompleteDelegate_Parms
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00020400] ( FUNC_Native )
struct UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     FileToRead;                                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnShareTitleFileComplete
// [0x00120000] 
struct UOnlineTitleFileDownloadMcp_execOnShareTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     UGCHandle;                                        		// 0x0010 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete
// [0x00120000] 
struct UOnlineTitleFileDownloadMcp_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeacon_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms
{
	unsigned long                                      bSuccess : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0060 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerMember >                     Players;                                          		// 0x000C (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000] 
struct UMeshBeaconClient_execOnTravelRequestReceived_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TestResult;                                       		// 0x0001 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x0004 (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000] 
struct UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000] 
struct UMeshBeaconClient_execOnConnectionRequestResult_Parms
{
	unsigned char                                      ConnectionResult;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconClient_execBeginBandwidthTest_Parms
{
	unsigned char                                      TestType;                                         		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TestBufferSize;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconClient_execRequestConnection_Parms
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FClientConnectionRequest                    ClientRequest;                                    		// 0x0008 (0x0034) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      bRegisterSecureAddress : 1;                       		// 0x003C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0040 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeaconClient_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms
{
	unsigned long                                      bSucceeded : 1;                                   		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0010 (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execRequestClientCreateNewSession_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0018 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0020 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerMember >                     Players;                                          		// 0x0024 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0030 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execTellClientsToTravel_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000] 
struct UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms
{
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400] ( FUNC_Native )
struct UMeshBeaconHost_execAllPlayersConnected_Parms
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002] 
struct UMeshBeaconHost_execSetPendingPlayerConnections_Parms
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000] 
struct UMeshBeaconHost_execOnFinishedBandwidthTest_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TestType;                                         		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TestResult;                                       		// 0x0019 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FConnectionBandwidthStats                   BandwidthStats;                                   		// 0x001C (0x000C) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000] 
struct UMeshBeaconHost_execOnStartedBandwidthTest_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TestType;                                         		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000] 
struct UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms
{
	struct FClientMeshBeaconConnection                 NewClientConnection;                              		// 0x0000 (0x0068) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002] 
struct UMeshBeaconHost_execAllowBandwidthTesting_Parms
{
	unsigned long                                      bEnabled : 1;                                     		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execCancelPendingBandwidthTests_Parms
{
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execHasPendingBandwidthTest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms
{
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execHasInProgressBandwidthTest_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execRequestClientBandwidthTest_Parms
{
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      TestType;                                         		// 0x0018 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	int                                                TestBufferSize;                                   		// 0x001C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UMeshBeaconHost_eventDestroyBeacon_Parms
{
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
struct UMeshBeaconHost_execInitHostBeacon_Parms
{
	struct FUniqueNetId                                InOwningPlayerId;                                 		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002] 
struct UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      OutRegisteredPlayers;                             		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] ( FUNC_Native )
struct UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] ( FUNC_Event )
struct UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms
{
	int                                                UserIndex;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindServerAuthSession_Parms
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Parms
{
	class UPlayer*                                     ServerConnection;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execFindClientAuthSession_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthRetryServer
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendAuthRetryServer_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthKillClient
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendAuthKillClient_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobServer
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendAuthBlobServer_Parms
{
	class UPlayer*                                     ClientConnection;                                 		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                AuthBlobUID;                                      		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobClient
// [0x00020400] ( FUNC_Native )
struct UOnlineAuthInterfaceImpl_execSendAuthBlobClient_Parms
{
	int                                                AuthBlobUID;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ServerConnectionCloseDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Parms
{
	struct FScriptDelegate                             ClientConnectionCloseDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRetryServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthRetryServerDelegate_Parms
{
	struct FScriptDelegate                             AuthRetryServerDelegate;                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRetryServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthRetryServerDelegate_Parms
{
	struct FScriptDelegate                             AuthRetryServerDelegate;                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthKillClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthKillClientDelegate_Parms
{
	struct FScriptDelegate                             AuthKillClientDelegate;                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthKillClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthKillClientDelegate_Parms
{
	struct FScriptDelegate                             AuthKillClientDelegate;                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthCompleteServerDelegate_Parms
{
	struct FScriptDelegate                             AuthCompleteServerDelegate;                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthCompleteServerDelegate_Parms
{
	struct FScriptDelegate                             AuthCompleteServerDelegate;                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthCompleteClientDelegate_Parms
{
	struct FScriptDelegate                             AuthCompleteClientDelegate;                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthCompleteClientDelegate_Parms
{
	struct FScriptDelegate                             AuthCompleteClientDelegate;                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthBlobReceivedServerDelegate_Parms
{
	struct FScriptDelegate                             AuthBlobReceivedServerDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthBlobReceivedServerDelegate_Parms
{
	struct FScriptDelegate                             AuthBlobReceivedServerDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthBlobReceivedClientDelegate_Parms
{
	struct FScriptDelegate                             AuthBlobReceivedClientDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthBlobReceivedClientDelegate_Parms
{
	struct FScriptDelegate                             AuthBlobReceivedClientDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthRequestServerDelegate_Parms
{
	struct FScriptDelegate                             AuthRequestServerDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestServerDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthRequestServerDelegate_Parms
{
	struct FScriptDelegate                             AuthRequestServerDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthRequestClientDelegate_Parms
{
	struct FScriptDelegate                             AuthRequestClientDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestClientDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthRequestClientDelegate_Parms
{
	struct FScriptDelegate                             AuthRequestClientDelegate;                        		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Parms
{
	struct FScriptDelegate                             AuthReadyDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020002] 
struct UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Parms
{
	struct FScriptDelegate                             AuthReadyDelegate;                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.HasPendingBootInvite
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execHasPendingBootInvite_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelNATNegotiation
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execCancelNATNegotiation_Parms
{
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Parms
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Parms
{
	struct FScriptDelegate                             QosStatusChangedDelegate;                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnQosStatusChanged_Parms
{
	int                                                NumComplete;                                      		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumTotal;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms
{
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x0008 (0x0050) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0058 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms
{
	int                                                StartAt;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                NumberToQuery;                                    		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinMigratedOnlineGameCompleteDelegate;           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x000C (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             MigrateOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execMigrateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Parms
{
	struct FScriptDelegate                             RecalculateSkillRatingGameCompleteDelegate;       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Parms
{
	struct FScriptDelegate                             RecalculateSkillRatingCompleteDelegate;           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteProcessingStartedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGameInviteProcessingStartedDelegate_Parms
{
	struct FScriptDelegate                             GameInviteProcessingStartedDelegate;              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteProcessingStartedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGameInviteProcessingStartedDelegate_Parms
{
	struct FScriptDelegate                             GameInviteProcessingStartedDelegate;              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteProcessingStarted_Parms
{
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                       		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000] 
struct UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms
{
	struct FOnlineGameSearchResult                     InviteResult;                                     		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FOnlineArbitrationRegistrant >      ReturnValue;                                      		// 0x0008 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms
{
	struct FScriptDelegate                             ArbitrationRegistrationCompleteDelegate;          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             EndOnlineGameCompleteDelegate;                    		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execEndOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             StartOnlineGameCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execStartOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0020 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayers_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0008 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000] 
struct UOnlineGameInterfaceImpl_execRegisterPlayer_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUniqueNetId                                PlayerID;                                         		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasInvited : 1;                                  		// 0x0020 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0024 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ConnectInfo;                                      		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             JoinOnlineGameCompleteDelegate;                   		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms
{
	unsigned char                                      PlayerNum;                                        		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FOnlineGameSearchResult                     DesiredGame;                                      		// 0x000C (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execFreeSearchResults_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             CancelFindOnlineGamesCompleteDelegate;            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms
{
	struct FScriptDelegate                             FindOnlineGamesCompleteDelegate;                  		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execFindOnlineGames_Parms
{
	unsigned char                                      SearchingPlayerNum;                               		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSearch*                           SearchSettings;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             DestroyOnlineGameCompleteDelegate;                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             UpdateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000] 
struct UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         UpdatedGameSettings;                              		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bShouldRefreshOnlineData : 1;                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms
{
	struct FScriptDelegate                             CreateOnlineGameCompleteDelegate;                 		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
struct UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms
{
	unsigned char                                      HostingPlayerNum;                                 		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SessionName;                                      		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         NewGameSettings;                                  		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSearch_Parms
{
	class UOnlineGameSearch*                           ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002] 
struct UOnlineGameInterfaceImpl_execGetGameSettings_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000] 
struct UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420400] ( FUNC_Native )
struct UOnlinePlaylistManager_execParseDataCenterId_Parms
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< unsigned char >                         FileData;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020002] 
struct UOnlinePlaylistManager_execReadDataCenterId_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020802] ( FUNC_Event )
struct UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Parms
{
	int                                                NumPlayers;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class UOnlineEventsInterface*                   EventsInterface;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                WorldwideTotal;                                   		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                RegionTotal;                                      		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420400] ( FUNC_Native )
struct UOnlinePlaylistManager_execParsePlaylistPopulationData_Parms
{
	TArray< unsigned char >                            Data;                                             		// 0x0000 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120000] 
struct UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// TArray< unsigned char >                         FileData;                                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020002] 
struct UOnlinePlaylistManager_execReadPlaylistPopulation_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020002] 
struct UOnlinePlaylistManager_execReset_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< int >                                      ContentIds;                                       		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execGetInventorySwapFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SourceInventory;                                  		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FName >                             MapCycle;                                         		// 0x0004 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execGetUrlFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020002] 
struct UOnlinePlaylistManager_execGetMatchType_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020002] 
struct UOnlinePlaylistManager_execIsPlaylistArbitrated_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                LoadBalanceId;                                    		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420002] 
struct UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                TeamSize;                                         		// 0x0004 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                TeamCount;                                        		// 0x0008 (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	int                                                MaxPartySize;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020002] 
struct UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020002] 
struct UOnlinePlaylistManager_execHasAnyGameSettings_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0004 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020002] 
struct UOnlinePlaylistManager_execGetGameSettings_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                GameSettingsId;                                   		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UOnlineGameSettings*                         ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020400] ( FUNC_Native )
struct UOnlinePlaylistManager_execFinalizePlaylistObjects_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020002] 
struct UOnlinePlaylistManager_execOnReadTitleFileComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	struct FString                                     Filename;                                         		// 0x0004 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020400] ( FUNC_Native )
struct UOnlinePlaylistManager_execShouldRefreshPlaylists_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020400] ( FUNC_Native )
struct UOnlinePlaylistManager_execDetermineFilesToDownload_Parms
{
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020002] 
struct UOnlinePlaylistManager_execDownloadPlaylist_Parms
{
	unsigned char                                      LocalUserNum;                                     		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120000] 
struct UOnlinePlaylistManager_execOnReadPlaylistComplete_Parms
{
	unsigned long                                      bWasSuccessful : 1;                               		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000] 
struct UPartyBeacon_execOnDestroyComplete_Parms
{
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeacon_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeaconClient_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconClient_execCancelReservation_Parms
{
	struct FUniqueNetId                                CancellingPartyLeader;                            		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconClient_execRequestReservationUpdate_Parms
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FUniqueNetId                                RequestingPartyLeader;                            		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerReservation >                PlayersToAdd;                                     		// 0x0020 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconClient_execRequestReservation_Parms
{
	struct FOnlineGameSearchResult                     DesiredHost;                                      		// 0x0000 (0x0008) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	struct FUniqueNetId                                RequestingPartyLeader;                            		// 0x0008 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerReservation >                Players;                                          		// 0x0020 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x002C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000] 
struct UPartyBeaconClient_execOnHostHasCancelled_Parms
{
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000] 
struct UPartyBeaconClient_execOnHostIsReady_Parms
{
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000] 
struct UPartyBeaconClient_execOnTravelRequestReceived_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationCountUpdated_Parms
{
	int                                                ReservationRemaining;                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000] 
struct UPartyBeaconClient_execOnReservationRequestComplete_Parms
{
	unsigned char                                      ReservationResult;                                		// 0x0000 (0x0001) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms
{
	int                                                ReturnValue;                                      		// 0x0000 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002] 
struct UPartyBeaconHost_execGetPartyLeaders_Parms
{
	TArray< struct FUniqueNetId >                      PartyLeaders;                                     		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20002] 
struct UPartyBeaconHost_execGetPlayers_Parms
{
	TArray< struct FUniqueNetId >                      Players;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0014 (0x0034) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms
{
	class UOnlineGameSearch*                           Search;                                           		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820802] ( FUNC_Event )
struct UPartyBeaconHost_eventUnregisterParty_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x0024 (0x0034) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820802] ( FUNC_Event )
struct UPartyBeaconHost_eventUnregisterPartyMembers_Parms
{
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x000C (0x0034) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820802] ( FUNC_Event )
struct UPartyBeaconHost_eventRegisterPartyMembers_Parms
{
	// TArray< struct FUniqueNetId >                   Members;                                          		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FPlayerReservation                       PlayerRes;                                        		// 0x001C (0x0034) [0x0000000000000000]              
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002] 
struct UPartyBeaconHost_execAreReservationsFull_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsHostHasCancelled_Parms
{
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsHostIsReady_Parms
{
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execTellClientsToTravel_Parms
{
	struct FName                                       SessionName;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	class UClass*                                      SearchClass;                                      		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      PlatformSpecificInfo[ 0x50 ];                     		// 0x000C (0x0050) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
struct UPartyBeaconHost_eventDestroyBeacon_Parms
{
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000] 
struct UPartyBeaconHost_execOnClientCancellationReceived_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationsFull_Parms
{
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000] 
struct UPartyBeaconHost_execOnReservationChange_Parms
{
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execHandlePlayerLogout_Parms
{
	struct FUniqueNetId                                PlayerID;                                         		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bMaintainParty : 1;                               		// 0x0018 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execGetExistingReservation_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0018) [0x0000000000000182]              ( CPF_Const | CPF_Parm | CPF_OutParm )
	int                                                ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execUpdatePartyReservationEntry_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerReservation >                PlayerMembers;                                    		// 0x0018 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned char                                      ReturnValue;                                      		// 0x0024 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400] ( FUNC_Native )
struct UPartyBeaconHost_execAddPartyReservationEntry_Parms
{
	struct FUniqueNetId                                PartyLeader;                                      		// 0x0000 (0x0018) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FPlayerReservation >                PlayerMembers;                                    		// 0x0018 (0x000C) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                TeamNum;                                          		// 0x0024 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      bIsHost : 1;                                      		// 0x0028 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x002C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024400] ( FUNC_Native )
struct UPartyBeaconHost_execInitHostBeacon_Parms
{
	int                                                InNumTeams;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InNumPlayersPerTeam;                              		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                InNumReservations;                                		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       InSessionName;                                    		// 0x000C (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                InForceTeamNum;                                   		// 0x0014 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020400] ( FUNC_Native )
struct UPartyBeaconHost_execPauseReservationRequests_Parms
{
	unsigned long                                      bPause : 1;                                       		// 0x0000 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002] 
struct UWebRequest_execGetHexDigit_Parms
{
	struct FString                                     D;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002] 
struct UWebRequest_execDecodeFormData_Parms
{
	struct FString                                     Data;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  Token[ 0x2 ];                                     		// 0x000C (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  ch;                                               		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002] 
struct UWebRequest_execProcessHeaderString_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execDump_Parms
{
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariables_Parms
{
	TArray< struct FString >                           varNames;                                         		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariableNumber_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                Number;                                           		// 0x000C (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     DefaultValue;                                     		// 0x0010 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x001C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariableCount_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x000C (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetVariable_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DefaultValue;                                     		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execAddVariable_Parms
{
	struct FString                                     VariableName;                                     		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetHeaders_Parms
{
	TArray< struct FString >                           headers;                                          		// 0x0000 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execGetHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     DefaultValue;                                     		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x0018 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execAddHeader_Parms
{
	struct FString                                     HeaderName;                                       		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execEncodeBase64_Parms
{
	struct FString                                     Decoded;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebRequest_execDecodeBase64_Parms
{
	struct FString                                     Encoded;                                          		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002] 
struct UWebResponse_execSentResponse_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebResponse.SentText
// [0x00020002] 
struct UWebResponse_execSentText_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002] 
struct UWebResponse_execRedirect_Parms
{
	struct FString                                     URL;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002] 
struct UWebResponse_execSendStandardHeaders_Parms
{
	struct FString                                     ContentType;                                      		// 0x0000 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bCache : 1;                                       		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002] 
struct UWebResponse_execHTTPError_Parms
{
	int                                                ErrorNum;                                         		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FString                                     Data;                                             		// 0x0004 (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002] 
struct UWebResponse_execSendHeaders_Parms
{
	// struct FString                                  hdr;                                              		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002] 
struct UWebResponse_execAddHeader_Parms
{
	struct FString                                     Header;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bReplace : 1;                                     		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	// struct FString                                  Part;                                             		// 0x0018 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	// struct FString                                  Entry;                                            		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002] 
struct UWebResponse_execHTTPHeader_Parms
{
	struct FString                                     Header;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.HTTPResponse
// [0x00020002] 
struct UWebResponse_execHTTPResponse_Parms
{
	struct FString                                     Header;                                           		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002] 
struct UWebResponse_execFailAuthentication_Parms
{
	struct FString                                     Realm;                                            		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002] 
struct UWebResponse_execSendCachedFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ContentType;                                      		// 0x000C (0x000C) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] ( FUNC_Event )
struct UWebResponse_eventSendBinary_Parms
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      B[ 0xFF ];                                        		// 0x0004 (0x00FF) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] ( FUNC_Event )
struct UWebResponse_eventSendText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      bNoCRLF : 1;                                      		// 0x000C (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execDump_Parms
{
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execGetHTTPExpiration_Parms
{
	int                                                OffsetSeconds;                                    		// 0x0000 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	struct FString                                     ReturnValue;                                      		// 0x0004 (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execLoadParsedUHTM_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     ReturnValue;                                      		// 0x000C (0x000C) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execIncludeBinaryFile_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execIncludeUHTM_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execClearSubst_Parms
{
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execSubst_Parms
{
	struct FString                                     Variable;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x000C (0x000C) [0x0000000000400880]              ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
	unsigned long                                      bClear : 1;                                       		// 0x0018 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] ( FUNC_Final | FUNC_Native )
struct UWebResponse_execFileExists_Parms
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x000C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020802] ( FUNC_Event )
struct UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Parms
{
	int                                                PlaylistId;                                       		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0004 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00C26002] 
struct UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                PlaylistId;                                       		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	int                                                ProviderIndex;                                    		// 0x000C (0x0004) [0x0000000000000190]              ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )
	class UOnlinePlaylistProvider*                     ReturnValue;                                      		// 0x0010 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// struct FUIProviderScriptFieldValue              Value;                                            		// 0x0018 (0x0064) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ProviderIndex;                                    		// 0x0008 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UUIResourceDataProvider*                     out_Provider;                                     		// 0x000C (0x0004) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.FindProviderIndexByFieldValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execFindProviderIndexByFieldValue_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SearchField;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FUIProviderScriptFieldValue                 ValueToSearchFor;                                 		// 0x0010 (0x0064) [0x0000000000400182]              ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	int                                                ReturnValue;                                      		// 0x0074 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderFieldValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execGetProviderFieldValue_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       SearchField;                                      		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ProviderIndex;                                    		// 0x0010 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FUIProviderScriptFieldValue                 out_FieldValue;                                   		// 0x0014 (0x0064) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0078 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviderFields
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execGetResourceProviderFields_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< struct FName >                             ProviderFieldTags;                                		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] ( FUNC_Final | FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execGetResourceProviders_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	TArray< class UUIResourceDataProvider* >           out_Providers;                                    		// 0x0008 (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderCount
// [0x00020400] ( FUNC_Native )
struct UUIDataStore_OnlinePlaylists_execGetProviderCount_Parms
{
	struct FName                                       ProviderTag;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	int                                                ReturnValue;                                      		// 0x0008 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020802] ( FUNC_Event )
struct UUIDataStore_OnlinePlaylists_eventInit_Parms
{
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000] 
struct UWebApplication_execPostQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.WebApplication.Query
// [0x00020000] 
struct UWebApplication_execQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002] 
struct UWebApplication_execPreQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002] 
struct UWebApplication_execCleanupApp_Parms
{
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] ( FUNC_Final )
struct UWebApplication_execCleanup_Parms
{
};

// Function IpDrv.WebApplication.Init
// [0x00020000] 
struct UWebApplication_execInit_Parms
{
};

// Function IpDrv.WebServer.GetApplication
// [0x00420002] 
struct AWebServer_execGetApplication_Parms
{
	struct FString                                     URI;                                              		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	struct FString                                     SubURI;                                           		// 0x000C (0x000C) [0x0000000000400180]              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
	class UWebApplication*                             ReturnValue;                                      		// 0x0018 (0x0004) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventLostChild_Parms
{
	class AActor*                                      C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventGainedChild_Parms
{
	class AActor*                                      C;                                                		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] ( FUNC_Event )
struct AWebServer_eventDestroyed_Parms
{
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002] 
struct AWebServer_execPostBeginPlay_Parms
{
	// struct FIpAddr                                  L;                                                		// 0x0008 (0x0008) [0x0000000000000000]              
	// struct FString                                  S;                                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] ( FUNC_Event )
struct UHelloWeb_eventQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function IpDrv.HelloWeb.Init
// [0x00020002] 
struct UHelloWeb_execInit_Parms
{
};

// Function IpDrv.ImageServer.Query
// [0x00020802] ( FUNC_Event )
struct UImageServer_eventQuery_Parms
{
	class UWebRequest*                                 Request;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	class UWebResponse*                                Response;                                         		// 0x0004 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// struct FString                                  Image;                                            		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] ( FUNC_Final )
struct AWebConnection_execIsHanging_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002] 
struct AWebConnection_execCleanup_Parms
{
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002] 
struct AWebConnection_execCheckRawBytes_Parms
{
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002] 
struct AWebConnection_execEndOfHeaders_Parms
{
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002] 
struct AWebConnection_execCreateResponseObject_Parms
{
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002] 
struct AWebConnection_execProcessPost_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002] 
struct AWebConnection_execProcessGet_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002] 
struct AWebConnection_execProcessHead_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002] 
struct AWebConnection_execReceivedLine_Parms
{
	struct FString                                     S;                                                		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventReceivedText_Parms
{
	struct FString                                     Text;                                             		// 0x0000 (0x000C) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	// struct FString                                  S;                                                		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventTimer_Parms
{
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventClosed_Parms
{
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] ( FUNC_Event )
struct AWebConnection_eventAccepted_Parms
{
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif