#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
struct UOnlineAuthInterfaceSteamworks_GetServerAddr_Params
{
	int                                                OutServerIP;                                              // (Parm, OutParm)
	int                                                OutServerPort;                                            // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
struct UOnlineAuthInterfaceSteamworks_GetServerUniqueId_Params
{
	struct FUniqueNetId                                OutServerUID;                                             // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteServerAuthSession
struct UOnlineAuthInterfaceSteamworks_EndRemoteServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	int                                                ServerIP;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalServerAuthSession
struct UOnlineAuthInterfaceSteamworks_EndLocalServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	int                                                ClientIP;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyServerAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	int                                                ServerIP;                                                 // (Parm)
	int                                                AuthBlobUID;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateServerAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	int                                                ClientIP;                                                 // (Parm)
	int                                                ClientPort;                                               // (Parm)
	int                                                OutAuthBlobUID;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteClientAuthSession
struct UOnlineAuthInterfaceSteamworks_EndRemoteClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	int                                                ClientIP;                                                 // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalClientAuthSession
struct UOnlineAuthInterfaceSteamworks_EndLocalClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	int                                                ServerIP;                                                 // (Parm)
	int                                                ServerPort;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
struct UOnlineAuthInterfaceSteamworks_VerifyClientAuthSession_Params
{
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	int                                                ClientIP;                                                 // (Parm)
	int                                                ClientPort;                                               // (Parm)
	int                                                AuthBlobUID;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
struct UOnlineAuthInterfaceSteamworks_CreateClientAuthSession_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	int                                                ServerIP;                                                 // (Parm)
	int                                                ServerPort;                                               // (Parm)
	bool                                               bSecure;                                                  // (Parm)
	int                                                OutAuthBlobUID;                                           // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestServer
struct UOnlineAuthInterfaceSteamworks_SendAuthRequestServer_Params
{
	struct FUniqueNetId                                ServerUID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestClient
struct UOnlineAuthInterfaceSteamworks_SendAuthRequestClient_Params
{
	class UPlayer*                                     ClientConnection;                                         // (Parm)
	struct FUniqueNetId                                ClientUID;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings
struct UOnlineGameInterfaceSteamworks_GetGameSettings_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
struct UOnlineGameInterfaceSteamworks_GetResolvedConnectString_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FString                                     ConnectInfo;                                              // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch
struct UOnlineGameInterfaceSteamworks_BindPlatformSpecificSessionToSearch_Params
{
	unsigned char                                      SearchingPlayerNum;                                       // (Parm)
	class UOnlineGameSearch*                           SearchSettings;                                           // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName
struct UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfoBySessionName_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo
struct UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfo_Params
{
	struct FOnlineGameSearchResult                     DesiredGame;                                              // (Const, Parm, OutParm)
	unsigned char                                      PlatformSpecificInfo;                                     // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
struct UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params
{
	int                                                StartAt;                                                  // (Parm)
	int                                                NumberToQuery;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             UnregisterPlayerCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
struct UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
struct UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterPlayerCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
struct UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
struct UOnlineGameInterfaceSteamworks_RegisterPlayer_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bWasInvited;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
struct UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
struct UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params
{
	struct FOnlineGameSearchResult                     InviteResult;                                             // (Const, Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
struct UOnlineGameInterfaceSteamworks_ClearGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
struct UOnlineGameInterfaceSteamworks_AddGameInviteAcceptedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GameInviteAcceptedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
struct UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	class UOnlineGameSettings*                         UpdatedGameSettings;                                      // (Parm)
	bool                                               bShouldRefreshOnlineData;                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCountryString
struct UOnlineSubsystemSteamworks_GetCountryString_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCheckDownloadableContentListDelegate
struct UOnlineSubsystemSteamworks_ClearCheckDownloadableContentListDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             CheckDownloadableContentListDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCheckDownloadableContentListDelegate
struct UOnlineSubsystemSteamworks_AddCheckDownloadableContentListDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             CheckDownloadableContentListDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckDownloadableContentList
struct UOnlineSubsystemSteamworks_CheckDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCheckDownloadableContentList
struct UOnlineSubsystemSteamworks_OnCheckDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bDownloadableContentListAvailable;                        // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCriticalDownloadableContentList
struct UOnlineSubsystemSteamworks_GetCriticalDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FMarketplaceContent>                 DLCList;                                                  // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCriticalDownloadableContentList
struct UOnlineSubsystemSteamworks_ReadCriticalDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                CategoryMask;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCriticalDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_ClearReadCriticalDownloadableContentListComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadCriticalDownloadableContentListCompleteDelegate;      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCriticalDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_AddReadCriticalDownloadableContentListComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadCriticalDownloadableContentListCompleteDelegate;      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCriticalDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_OnReadCriticalDownloadableContentListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHiddenDownloadableContentList
struct UOnlineSubsystemSteamworks_GetHiddenDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FMarketplaceContent>                 DLCList;                                                  // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadHiddenDownloadableContentList
struct UOnlineSubsystemSteamworks_ReadHiddenDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<int>                                        OfferIds;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadHiddenDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_ClearReadHiddenDownloadableContentListComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadHiddenDownloadableContentListCompleteDelegate;        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadHiddenDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_AddReadHiddenDownloadableContentListComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadHiddenDownloadableContentListCompleteDelegate;        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadHiddenDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_OnReadHiddenDownloadableContentListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDownloadableContentList
struct UOnlineSubsystemSteamworks_GetDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FMarketplaceContent>                 DLCList;                                                  // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadDownloadableContentList
struct UOnlineSubsystemSteamworks_ReadDownloadableContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                CategoryMask;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_ClearReadDownloadableContentListComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadDownloadableContentListCompleteDelegate;              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_AddReadDownloadableContentListComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadDownloadableContentListCompleteDelegate;              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadDownloadableContentListComplete
struct UOnlineSubsystemSteamworks_OnReadDownloadableContentListComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGamesList
struct UOnlineSubsystemSteamworks_GetSaveGamesList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineContent>                      SaveGamesList;                                            // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGamesList
struct UOnlineSubsystemSteamworks_ReadSaveGamesList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	struct FString                                     SaveFilePrefix;                                           // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGamesComplete
struct UOnlineSubsystemSteamworks_ClearReadSaveGamesComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadSaveGamesCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGamesComplete
struct UOnlineSubsystemSteamworks_AddReadSaveGamesComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadSaveGamesCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGamesComplete
struct UOnlineSubsystemSteamworks_OnReadSaveGamesComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveGames
struct UOnlineSubsystemSteamworks_ClearSaveGames_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteSaveGame
struct UOnlineSubsystemSteamworks_DeleteSaveGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSaveGameDataComplete
struct UOnlineSubsystemSteamworks_ClearWriteSaveGameDataComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteSaveGameDataCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSaveGameDataComplete
struct UOnlineSubsystemSteamworks_AddWriteSaveGameDataComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteSaveGameDataCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSaveGameDataComplete
struct UOnlineSubsystemSteamworks_OnWriteSaveGameDataComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSaveGameData
struct UOnlineSubsystemSteamworks_WriteSaveGameData_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	TArray<unsigned char>                              SaveGameData;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGameDataComplete
struct UOnlineSubsystemSteamworks_ClearReadSaveGameDataComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGameDataComplete
struct UOnlineSubsystemSteamworks_AddReadSaveGameDataComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGameDataComplete
struct UOnlineSubsystemSteamworks_OnReadSaveGameDataComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGameData
struct UOnlineSubsystemSteamworks_GetSaveGameData_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	unsigned char                                      bIsValid;                                                 // (Parm, OutParm)
	TArray<unsigned char>                              SaveGameData;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGameData
struct UOnlineSubsystemSteamworks_ReadSaveGameData_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
struct UOnlineSubsystemSteamworks_GetAvailableDownloadCounts_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                NewDownloads;                                             // (Parm, OutParm)
	int                                                TotalDownloads;                                           // (Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
struct UOnlineSubsystemSteamworks_ClearQueryAvailableDownloadsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             QueryDownloadsDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
struct UOnlineSubsystemSteamworks_AddQueryAvailableDownloadsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             QueryDownloadsDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
struct UOnlineSubsystemSteamworks_OnQueryAvailableDownloadsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
struct UOnlineSubsystemSteamworks_QueryAvailableDownloads_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                CategoryMask;                                             // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleSaveGames
struct UOnlineSubsystemSteamworks_ClearCrossTitleSaveGames_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleSaveGameDataComplete
struct UOnlineSubsystemSteamworks_ClearReadCrossTitleSaveGameDataComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleSaveGameDataComplete
struct UOnlineSubsystemSteamworks_AddReadCrossTitleSaveGameDataComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadSaveGameDataCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleSaveGameDataComplete
struct UOnlineSubsystemSteamworks_OnReadCrossTitleSaveGameDataComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	int                                                TitleId;                                                  // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleSaveGameData
struct UOnlineSubsystemSteamworks_GetCrossTitleSaveGameData_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	int                                                TitleId;                                                  // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	unsigned char                                      bIsValid;                                                 // (Parm, OutParm)
	TArray<unsigned char>                              SaveGameData;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleSaveGameData
struct UOnlineSubsystemSteamworks_ReadCrossTitleSaveGameData_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                DeviceID;                                                 // (Parm)
	int                                                TitleId;                                                  // (Parm)
	struct FString                                     FriendlyName;                                             // (Parm, NeedCtorLink)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     SaveFileName;                                             // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleContentCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadCrossTitleContentCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	struct FScriptDelegate                             ReadContentCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleContentCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadCrossTitleContentCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	struct FScriptDelegate                             ReadContentCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleContentComplete
struct UOnlineSubsystemSteamworks_OnReadCrossTitleContentComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleContentList
struct UOnlineSubsystemSteamworks_GetCrossTitleContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	TArray<struct FOnlineCrossTitleContent>            ContentList;                                              // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleContentList
struct UOnlineSubsystemSteamworks_ClearCrossTitleContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleContentList
struct UOnlineSubsystemSteamworks_ReadCrossTitleContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
struct UOnlineSubsystemSteamworks_GetContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	TArray<struct FOnlineContent>                      ContentList;                                              // (Parm, OutParm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentList
struct UOnlineSubsystemSteamworks_ClearContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
struct UOnlineSubsystemSteamworks_ReadContentList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
struct UOnlineSubsystemSteamworks_ClearReadContentComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	struct FScriptDelegate                             ReadContentCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
struct UOnlineSubsystemSteamworks_AddReadContentComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ContentType;                                              // (Parm)
	struct FScriptDelegate                             ReadContentCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
struct UOnlineSubsystemSteamworks_OnReadContentComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
struct UOnlineSubsystemSteamworks_ClearContentChangeDelegate_Params
{
	struct FScriptDelegate                             ContentDelegate;                                          // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
struct UOnlineSubsystemSteamworks_AddContentChangeDelegate_Params
{
	struct FScriptDelegate                             ContentDelegate;                                          // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (OptionalParm, Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegateEx
struct UOnlineSubsystemSteamworks_ClearContentChangeDelegateEx_Params
{
	struct FScriptDelegate                             ContentDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegateEx
struct UOnlineSubsystemSteamworks_AddContentChangeDelegateEx_Params
{
	struct FScriptDelegate                             ContentDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
struct UOnlineSubsystemSteamworks_OnContentChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowRedeemCodeUI
struct UOnlineSubsystemSteamworks_ShowRedeemCodeUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSteamworksSessionState
struct UOnlineSubsystemSteamworks_DumpSteamworksSessionState_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSessionState
struct UOnlineSubsystemSteamworks_DumpSessionState_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceVolume
struct UOnlineSubsystemSteamworks_SetVoiceVolume_Params
{
	unsigned char                                      VolType;                                                  // (Parm)
	float                                              VolumeParam;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAvatarAwardCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockAvatarAwardCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAvatarAwardCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAvatarAwardCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnlockAvatarAwardCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAvatarAwardCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAvatarAwardComplete
struct UOnlineSubsystemSteamworks_OnUnlockAvatarAwardComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
struct UOnlineSubsystemSteamworks_GetFriendJoinURL_Params
{
	struct FUniqueNetId                                FriendUID;                                                // (Parm)
	struct FString                                     ServerURL;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     ServerUID;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
struct UOnlineSubsystemSteamworks_GetCommandlineJoinURL_Params
{
	bool                                               bMarkAsJoined;                                            // (Parm)
	struct FString                                     ServerURL;                                                // (Parm, OutParm, NeedCtorLink)
	struct FString                                     ServerUID;                                                // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
struct UOnlineSubsystemSteamworks_Int64ToUniqueNetId_Params
{
	struct FString                                     UIDString;                                                // (Parm, NeedCtorLink)
	struct FUniqueNetId                                OutUID;                                                   // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
struct UOnlineSubsystemSteamworks_UniqueNetIdToInt64_Params
{
	struct FUniqueNetId                                Uid;                                                      // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_NotifyVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             VOIPAudioComponent;                                       // (Parm, EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
struct UOnlineSubsystemSteamworks_OnVOIPPlaybackFinished_Params
{
	class UAudioComponent*                             AC;                                                       // (Parm, EditInline)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
struct UOnlineSubsystemSteamworks_ShowProfileUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     SubURL;                                                   // (OptionalParm, Parm, NeedCtorLink)
	struct FUniqueNetId                                PlayerUID;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
struct UOnlineSubsystemSteamworks_UniqueNetIdToPlayerName_Params
{
	struct FUniqueNetId                                Uid;                                                      // (Const, Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
struct UOnlineSubsystemSteamworks_DisplayAchievementProgress_Params
{
	int                                                AchievementId;                                            // (Parm)
	int                                                ProgressCount;                                            // (Parm)
	int                                                MaxProgress;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
struct UOnlineSubsystemSteamworks_CreateLeaderboard_Params
{
	struct FString                                     LeaderboardName;                                          // (Parm, NeedCtorLink)
	unsigned char                                      SortType;                                                 // (Parm)
	unsigned char                                      DisplayFormat;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
struct UOnlineSubsystemSteamworks_ResetStats_Params
{
	bool                                               bResetAchievements;                                       // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
struct UOnlineSubsystemSteamworks_ShowCustomMessageUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Recipients;                                               // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     MessageTitle;                                             // (Parm, NeedCtorLink)
	struct FString                                     NonEditableMessage;                                       // (Parm, NeedCtorLink)
	struct FString                                     EditableMessage;                                          // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ClearCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_GetCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadCrossTitleProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadCrossTitleProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
struct UOnlineSubsystemSteamworks_ReadCrossTitleProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
struct UOnlineSubsystemSteamworks_UnlockAvatarAward_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AvatarItemId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage
struct UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_Params
{
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage
struct UOnlineSubsystemSteamworks_DeleteFileFromRemoteStorage_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage
struct UOnlineSubsystemSteamworks_ReadBytesFromRemoteStorage_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Data;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage
struct UOnlineSubsystemSteamworks_ReadStringFromRemoteStorage_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Data;                                                     // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage
struct UOnlineSubsystemSteamworks_WriteBytesToRemoteStorage_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              Data;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage
struct UOnlineSubsystemSteamworks_WriteStringToRemoteStorage_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Data;                                                     // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
struct UOnlineSubsystemSteamworks_GetSteamClanData_Params
{
	TArray<struct FSteamPlayerClanData>                Results;                                                  // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
struct UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params
{
	struct FScriptDelegate                             GetNumberOfCurrentPlayersCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
struct UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params
{
	int                                                TotalPlayers;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
struct UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
struct UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Const, Parm)
	int                                                Size;                                                     // (Parm)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineAvatarComplete_Params
{
	struct FUniqueNetId                                PlayerNetId;                                              // (Const, Parm)
	class UTexture2D*                                  Avatar;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
struct UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	struct FString                                     Title;                                                    // (Parm, NeedCtorLink)
	struct FString                                     Description;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
struct UOnlineSubsystemSteamworks_GetAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FAchievementDetails>                 Achievements;                                             // (Parm, OutParm, NeedCtorLink)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadAchievementsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
struct UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params
{
	int                                                TitleId;                                                  // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
struct UOnlineSubsystemSteamworks_ReadAchievements_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                TitleId;                                                  // (OptionalParm, Parm)
	bool                                               bShouldReadText;                                          // (OptionalParm, Parm)
	bool                                               bShouldReadImages;                                        // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
struct UOnlineSubsystemSteamworks_ShowPlayersUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
struct UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
struct UOnlineSubsystemSteamworks_ShowFriendsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
struct UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ProfileDataChangedDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
struct UOnlineSubsystemSteamworks_OnProfileDataChanged_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
struct UOnlineSubsystemSteamworks_UnlockGamerPicture_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                PictureId;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
struct UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             UnlockAchievementCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
struct UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
struct UOnlineSubsystemSteamworks_UnlockAchievement_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                AchievementId;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
struct UOnlineSubsystemSteamworks_IsDeviceValid_Params
{
	int                                                DeviceID;                                                 // (Parm)
	int                                                SizeNeeded;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
struct UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     DeviceName;                                               // (Parm, OutParm, NeedCtorLink)
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
struct UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             DeviceDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
struct UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
struct UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                SizeNeeded;                                               // (Parm)
	bool                                               bForceShow;                                               // (OptionalParm, Parm)
	bool                                               bManageStorage;                                           // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseWebPage
struct UOnlineSubsystemSteamworks_ShowContentPurchaseWebPage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     OfferURL;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI
struct UOnlineSubsystemSteamworks_ShowContentPurchaseUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     Offer;                                                    // (Parm, NeedCtorLink)
	bool                                               bCheckOut;                                                // (OptionalParm, Parm)
	bool                                               bPreOrder;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
struct UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                CategoryMask;                                             // (OptionalParm, Parm)
	int                                                OfferId;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
struct UOnlineSubsystemSteamworks_ShowInviteUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviteText;                                               // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
struct UOnlineSubsystemSteamworks_ShowAchievementsUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
struct UOnlineSubsystemSteamworks_ShowMessagesUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
struct UOnlineSubsystemSteamworks_ShowGamerCardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
struct UOnlineSubsystemSteamworks_ShowFeedbackUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
struct UOnlineSubsystemSteamworks_DeleteMessage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                MessageIndex;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
struct UOnlineSubsystemSteamworks_UnmuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
struct UOnlineSubsystemSteamworks_MuteAll_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bAllowFriends;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
struct UOnlineSubsystemSteamworks_CalcAggregateSkill_Params
{
	TArray<struct FDouble>                             Mus;                                                      // (Parm, NeedCtorLink)
	TArray<struct FDouble>                             Sigmas;                                                   // (Parm, NeedCtorLink)
	struct FDouble                                     OutAggregateMu;                                           // (Parm, OutParm)
	struct FDouble                                     OutAggregateSigma;                                        // (Parm, OutParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
struct UOnlineSubsystemSteamworks_RegisterStatGuid_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	struct FString                                     ClientStatGuid;                                           // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
struct UOnlineSubsystemSteamworks_GetClientStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
struct UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params
{
	struct FScriptDelegate                             RegisterHostStatGuidCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
struct UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
struct UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params
{
	struct FString                                     HostStatGuid;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
struct UOnlineSubsystemSteamworks_GetHostStatGuid_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             MessageDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
struct UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                SendingPlayer;                                            // (Parm)
	struct FString                                     SendingNick;                                              // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
struct UOnlineSubsystemSteamworks_GetFriendMessages_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriendMessage>                FriendMessages;                                           // (Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params
{
	struct FScriptDelegate                             JoinFriendGameCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
struct UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
struct UOnlineSubsystemSteamworks_JoinFriendGame_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
struct UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReceivedGameInviteDelegate;                               // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
struct UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     InviterName;                                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSentGameInviteDelegate
struct UOnlineSubsystemSteamworks_ClearSentGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             SentGameInviteDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSentGameInviteDelegate
struct UOnlineSubsystemSteamworks_AddSentGameInviteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             SentGameInviteDelegate;                                   // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSentGameInvite
struct UOnlineSubsystemSteamworks_OnSentGameInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
struct UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FUniqueNetId>                        Friends;                                                  // (Parm, NeedCtorLink)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
struct UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Text;                                                     // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
struct UOnlineSubsystemSteamworks_SendMessageToFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                Friend;                                                   // (Parm)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
struct UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             InviteDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
struct UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	struct FString                                     RequestingNick;                                           // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
struct UOnlineSubsystemSteamworks_DenyFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
struct UOnlineSubsystemSteamworks_AcceptFriendInvite_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                RequestingPlayer;                                         // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
struct UOnlineSubsystemSteamworks_RemoveFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                FormerFriend;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
struct UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
struct UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
struct UOnlineSubsystemSteamworks_AddFriendByName_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FriendName;                                               // (Parm, NeedCtorLink)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
struct UOnlineSubsystemSteamworks_AddFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NewFriend;                                                // (Parm)
	struct FString                                     Message;                                                  // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
struct UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params
{
	unsigned char                                      bWasCanceled;                                             // (Parm, OutParm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
struct UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params
{
	struct FScriptDelegate                             InputDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
struct UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
struct UOnlineSubsystemSteamworks_ShowKeyboardUI_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     TitleText;                                                // (Parm, NeedCtorLink)
	struct FString                                     DescriptionText;                                          // (Parm, NeedCtorLink)
	unsigned char                                      KeyboardType;                                             // (OptionalParm, Parm)
	bool                                               bShouldValidate;                                          // (OptionalParm, Parm)
	struct FString                                     DefaultText;                                              // (OptionalParm, Parm, NeedCtorLink)
	int                                                MaxResultLength;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
struct UOnlineSubsystemSteamworks_SetOnlineStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                StatusId;                                                 // (Parm)
	TArray<struct FLocalizedStringSetting>             LocalizedStringSettings;                                  // (Const, Parm, OutParm, NeedCtorLink)
	TArray<struct FSettingsProperty>                   Properties;                                               // (Const, Parm, OutParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
struct UOnlineSubsystemSteamworks_GetLocalAccountNames_Params
{
	TArray<struct FString>                             Accounts;                                                 // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
struct UOnlineSubsystemSteamworks_DeleteLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
struct UOnlineSubsystemSteamworks_RenameLocalAccount_Params
{
	struct FString                                     NewUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     OldUserName;                                              // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
struct UOnlineSubsystemSteamworks_CreateLocalAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
struct UOnlineSubsystemSteamworks_AddCreateOnlineAccountCompletedDelegate_Params
{
	struct FScriptDelegate                             AccountCreateDelegate;                                    // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
struct UOnlineSubsystemSteamworks_OnCreateOnlineAccountCompleted_Params
{
	unsigned char                                      ErrorStatus;                                              // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
struct UOnlineSubsystemSteamworks_CreateOnlineAccount_Params
{
	struct FString                                     UserName;                                                 // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	struct FString                                     EmailAddress;                                             // (Parm, NeedCtorLink)
	struct FString                                     ProductKey;                                               // (OptionalParm, Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFile
struct UOnlineSubsystemSteamworks_ClearDownloadedFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFiles
struct UOnlineSubsystemSteamworks_ClearDownloadedFiles_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
struct UOnlineSubsystemSteamworks_GetTitleFileState_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
struct UOnlineSubsystemSteamworks_GetTitleFileContents_Params
{
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	TArray<unsigned char>                              FileContents;                                             // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadTitleFileCompleteDelegate;                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
struct UOnlineSubsystemSteamworks_ReadTitleFile_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     FileToRead;                                               // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
struct UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShareTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearShareTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ShareTitleFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShareTitleFileCompleteDelegate
struct UOnlineSubsystemSteamworks_AddShareTitleFileCompleteDelegate_Params
{
	struct FScriptDelegate                             ShareTitleFileCompleteDelegate;                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShareTitleFile
struct UOnlineSubsystemSteamworks_ShareTitleFile_Params
{
	struct FString                                     FileToShare;                                              // (Parm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShareTitleFileComplete
struct UOnlineSubsystemSteamworks_OnShareTitleFileComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
	struct FString                                     Filename;                                                 // (Parm, NeedCtorLink)
	struct FString                                     UGCHandle;                                                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
struct UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params
{
	struct FScriptDelegate                             StorageDeviceChangeDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
struct UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
struct UOnlineSubsystemSteamworks_GetLocale_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
struct UOnlineSubsystemSteamworks_GetNATType_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params
{
	struct FScriptDelegate                             ConnectionStatusDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
struct UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params
{
	unsigned char                                      ConnectionStatus;                                         // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
struct UOnlineSubsystemSteamworks_IsControllerConnected_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
struct UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
struct UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params
{
	struct FScriptDelegate                             ControllerChangeDelegate;                                 // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
struct UOnlineSubsystemSteamworks_OnControllerChange_Params
{
	int                                                ControllerId;                                             // (Parm)
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params
{
	unsigned char                                      NewPos;                                                   // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
struct UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params
{
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
struct UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params
{
	struct FScriptDelegate                             ExternalUIDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
struct UOnlineSubsystemSteamworks_OnExternalUIChange_Params
{
	bool                                               bIsOpening;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LinkStatusDelegate;                                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
struct UOnlineSubsystemSteamworks_OnLinkStatusChange_Params
{
	bool                                               bIsConnected;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
struct UOnlineSubsystemSteamworks_HasLinkConnection_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex
struct UOnlineSubsystemSteamworks_GetPlayerUniqueNetIdFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FUniqueNetId                                ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
struct UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params
{
	int                                                UserIndex;                                                // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
struct UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	int                                                LeaderboardId;                                            // (Parm)
	TArray<struct FOnlinePlayerScore>                  PlayerScores;                                             // (Const, Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             FlushOnlineStatsCompleteDelegate;                         // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
struct UOnlineSubsystemSteamworks_FlushOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
struct UOnlineSubsystemSteamworks_WriteOnlineStats_Params
{
	struct FName                                       SessionName;                                              // (Parm)
	struct FUniqueNetId                                Player;                                                   // (Parm)
	class UOnlineStatsWrite*                           StatsWrite;                                               // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
struct UOnlineSubsystemSteamworks_FreeStats_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params
{
	struct FScriptDelegate                             ReadOnlineStatsCompleteDelegate;                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
struct UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                NumRows;                                                  // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
struct UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params
{
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	int                                                StartIndex;                                               // (OptionalParm, Parm)
	int                                                NumToRead;                                                // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
struct UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
struct UOnlineSubsystemSteamworks_ReadOnlineStats_Params
{
	TArray<struct FUniqueNetId>                        Players;                                                  // (Const, Parm, OutParm, NeedCtorLink)
	class UOnlineStatsRead*                            StatsRead;                                                // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
struct UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class USpeechRecognition*                          SpeechRecogObj;                                           // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
struct UOnlineSubsystemSteamworks_SelectVocabulary_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                VocabularyId;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
struct UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             RecognitionDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
struct UOnlineSubsystemSteamworks_OnRecognitionComplete_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
struct UOnlineSubsystemSteamworks_GetRecognitionResults_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FSpeechRecognizedWord>               Words;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
struct UOnlineSubsystemSteamworks_StopSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
struct UOnlineSubsystemSteamworks_StartSpeechRecognition_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
struct UOnlineSubsystemSteamworks_StopNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
struct UOnlineSubsystemSteamworks_StartNetworkedVoice_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
struct UOnlineSubsystemSteamworks_AddPlayerTalkingDelegate_Params
{
	struct FScriptDelegate                             TalkerDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
struct UOnlineSubsystemSteamworks_OnPlayerTalkingStateChange_Params
{
	struct FUniqueNetId                                Player;                                                   // (Parm)
	bool                                               bIsTalking;                                               // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
struct UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
struct UOnlineSubsystemSteamworks_MuteRemoteTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               bIsSystemWide;                                            // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
struct UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	int                                                Priority;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
struct UOnlineSubsystemSteamworks_IsHeadsetPresent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
struct UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
struct UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
struct UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
struct UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params
{
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
struct UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
struct UOnlineSubsystemSteamworks_RegisterLocalTalker_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
struct UOnlineSubsystemSteamworks_GetFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FOnlineFriend>                       Friends;                                                  // (Parm, OutParm, NeedCtorLink)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadFriendsCompleteDelegate;                              // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
struct UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
struct UOnlineSubsystemSteamworks_ReadFriendsList_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	int                                                Count;                                                    // (OptionalParm, Parm)
	int                                                StartingAt;                                               // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WritePlayerStorageCompleteDelegate;                       // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
struct UOnlineSubsystemSteamworks_WritePlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
struct UOnlineSubsystemSteamworks_GetPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageForNetIdCompleteDelegate;                // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params
{
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
struct UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                NetId;                                                    // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadPlayerStorageCompleteDelegate;                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
struct UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
struct UOnlineSubsystemSteamworks_ReadPlayerStorage_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlinePlayerStorage*                        PlayerStorage;                                            // (Parm)
	int                                                DeviceID;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             WriteProfileSettingsCompleteDelegate;                     // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
struct UOnlineSubsystemSteamworks_WriteProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
struct UOnlineSubsystemSteamworks_GetProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
struct UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             ReadProfileSettingsCompleteDelegate;                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
struct UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
struct UOnlineSubsystemSteamworks_ReadProfileSettings_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	class UOnlineProfileSettings*                      ProfileSettings;                                          // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
struct UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             FriendsDelegate;                                          // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
struct UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
struct UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params
{
	struct FScriptDelegate                             MutingDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
struct UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params
{
	struct FScriptDelegate                             CancelledDelegate;                                        // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params
{
	struct FScriptDelegate                             LoginStatusDelegate;                                      // (Parm, NeedCtorLink)
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
struct UOnlineSubsystemSteamworks_OnLoginStatusChange_Params
{
	unsigned char                                      NewStatus;                                                // (Parm)
	struct FUniqueNetId                                NewId;                                                    // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
struct UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
struct UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params
{
	struct FScriptDelegate                             LoginDelegate;                                            // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
struct UOnlineSubsystemSteamworks_IsMuted_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
struct UOnlineSubsystemSteamworks_AreAnyFriends_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	TArray<struct FFriendsQuery>                       Query;                                                    // (Parm, OutParm, NeedCtorLink)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
struct UOnlineSubsystemSteamworks_IsFriend_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
struct UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
struct UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
struct UOnlineSubsystemSteamworks_CanPurchaseContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
struct UOnlineSubsystemSteamworks_CanDownloadUserContent_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
struct UOnlineSubsystemSteamworks_CanCommunicate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
struct UOnlineSubsystemSteamworks_CanPlayOnline_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAgeGroupDelegate
struct UOnlineSubsystemSteamworks_ClearGetUserAgeGroupDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GetUserAgeGroupDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAgeGroupDelegate
struct UOnlineSubsystemSteamworks_AddGetUserAgeGroupDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             GetUserAgeGroupDelegate;                                  // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAgeGroup
struct UOnlineSubsystemSteamworks_GetUserAgeGroup_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetUserAgeGroup
struct UOnlineSubsystemSteamworks_OnGetUserAgeGroup_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      UserAgeGroup;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
struct UOnlineSubsystemSteamworks_GetPlayerNickname_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
struct UOnlineSubsystemSteamworks_GetUniquePlayerId_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FUniqueNetId                                PlayerID;                                                 // (Parm, OutParm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
struct UOnlineSubsystemSteamworks_IsLocalLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
struct UOnlineSubsystemSteamworks_IsGuestLogin_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
struct UOnlineSubsystemSteamworks_GetLoginStatus_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
struct UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LogoutDelegate;                                           // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
struct UOnlineSubsystemSteamworks_OnLogoutCompleted_Params
{
	bool                                               bWasSuccessful;                                           // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
struct UOnlineSubsystemSteamworks_Logout_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
struct UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
struct UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FScriptDelegate                             LoginFailedDelegate;                                      // (Parm, NeedCtorLink)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
struct UOnlineSubsystemSteamworks_OnLoginFailed_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	unsigned char                                      ErrorCode;                                                // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
struct UOnlineSubsystemSteamworks_AutoLogin_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
struct UOnlineSubsystemSteamworks_Login_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
	struct FString                                     LoginName;                                                // (Parm, NeedCtorLink)
	struct FString                                     Password;                                                 // (Parm, NeedCtorLink)
	bool                                               bWantsLocalOnly;                                          // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
struct UOnlineSubsystemSteamworks_ShowLoginUI_Params
{
	bool                                               bShowOnlineOnly;                                          // (OptionalParm, Parm)
	int                                                NumLoginOverride;                                         // (OptionalParm, Parm)
	bool                                               bAddUser;                                                 // (OptionalParm, Parm)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
struct UOnlineSubsystemSteamworks_OnFriendsChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
struct UOnlineSubsystemSteamworks_OnMutingChange_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
struct UOnlineSubsystemSteamworks_OnLoginCancelled_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
struct UOnlineSubsystemSteamworks_OnLoginChange_Params
{
	unsigned char                                      LocalUserNum;                                             // (Parm)
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
struct UOnlineSubsystemSteamworks_Exit_Params
{
};

// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
struct UOnlineSubsystemSteamworks_Init_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
