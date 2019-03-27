#pragma once
#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_classes.h
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

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
/*enum ESteamMatchmakingType
{
	SMT_Invalid                                        = 0,
	SMT_LAN                                            = 1,
	SMT_Internet                                       = 2,
	SMT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
/*enum ELeaderboardSortType
{
	LST_Ascending                                      = 0,
	LST_Descending                                     = 1,
	LST_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
/*enum ELeaderboardRequestType
{
	LRT_Global                                         = 0,
	LRT_Player                                         = 1,
	LRT_Friends                                        = 2,
	LRT_MAX                                            = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
/*enum ELeaderboardFormat
{
	LF_Number                                          = 0,
	LF_Seconds                                         = 1,
	LF_Milliseconds                                    = 2,
	LF_MAX                                             = 3
};*/

// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
/*enum ELeaderboardUpdateType
{
	LUT_KeepBest                                       = 0,
	LUT_Force                                          = 1,
	LUT_MAX                                            = 2
};*/

// Enum OnlineSubsystemSteamworks.QoSHandlerSteamworks.EQoSState
/*enum EQoSState
{
	EQS_Challenge                                      = 0,
	EQS_WaitChallenge                                  = 1,
	EQS_Ping                                           = 2,
	EQS_WaitPing                                       = 3,
	EQS_Complete                                       = 4,
	EQS_Error                                          = 5,
	EQS_MAX                                            = 6
};*/

// Enum OnlineSubsystemSteamworks.QoSHandlerSteamworks.EQoSMessage
/*enum EQoSMessage
{
	EQM_GoAway                                         = 0,
	EQM_Challenge                                      = 1,
	EQM_ChallengeResponse                              = 2,
	EQM_Ping                                           = 3,
	EQM_PingResponse                                   = 4,
	EQM_Finished                                       = 5,
	EQM_MAX                                            = 6
};*/

/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks
// 0x0004 (0x0198 - 0x0194)
class UOnlineAuthInterfaceSteamworks : public UOnlineAuthInterfaceImpl
{
public:
	struct FPointer                                    AuthCallbackBridge;                               		// 0x0194 (0x0004) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3573];

		return pClassPointer;
	};

	bool GetServerAddr(int* OutServerIP, int* OutServerPort);
	bool GetServerUniqueId(struct FUniqueNetId* OutServerUID);
	void EndRemoteServerAuthSession(struct FUniqueNetId ServerUID, int ServerIP);
	void EndLocalServerAuthSession(struct FUniqueNetId ClientUID, int ClientIP);
	bool VerifyServerAuthSession(struct FUniqueNetId ServerUID, int ServerIP, int AuthBlobUID);
	bool CreateServerAuthSession(struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int* OutAuthBlobUID);
	void EndRemoteClientAuthSession(struct FUniqueNetId ClientUID, int ClientIP);
	void EndLocalClientAuthSession(struct FUniqueNetId ServerUID, int ServerIP, int ServerPort);
	bool VerifyClientAuthSession(struct FUniqueNetId ClientUID, int ClientIP, int ClientPort, int AuthBlobUID);
	bool CreateClientAuthSession(struct FUniqueNetId ServerUID, int ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthBlobUID);
	bool SendAuthRequestServer(struct FUniqueNetId ServerUID);
	bool SendAuthRequestClient(class UPlayer* ClientConnection, struct FUniqueNetId ClientUID);
};

// UClass* UOnlineAuthInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks
// 0x0094 (0x0258 - 0x01C4)
class UOnlineGameInterfaceSteamworks : public UOnlineGameInterfaceImpl
{
public:
	TArray< struct FServerQueryToRulesResponseMapping > QueryToRulesResponseMap;                          		// 0x01C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FServerQueryToPingResponseMapping > QueryToPingResponseMap;                           		// 0x01D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    ServerListResponse;                               		// 0x01DC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned char                                      CurrentMatchmakingType;                           		// 0x01E0 (0x0001) [0x0000000000000000]
	struct FPointer                                    CurrentMatchmakingQuery;                          		// 0x01E4 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	TArray< struct FScriptDelegate >                   GameInviteAcceptedDelegates;                      		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineGameSearch*                           InviteGameSearch;                                 		// 0x01F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FScriptDelegate >                   RegisterPlayerCompleteDelegates;                  		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UnregisterPlayerCompleteDelegates;                		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FClientFilterORClause >             ActiveClientsideFilters;                          		// 0x0210 (0x000C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	unsigned long                                      bFilterEngineBuild : 1;                           		// 0x021C (0x0004) [0x0000000000000000] [0x00000001]
	TArray< struct FFilterKeyToSteamKeyMapping >       FilterKeyToSteamKeyMap;                           		// 0x0220 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FName                                       ServerSessionName;                                		// 0x022C (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3575];

		return pClassPointer;
	};

	class UOnlineGameSettings* GetGameSettings(struct FName SessionName);
	bool GetResolvedConnectString(struct FName SessionName, struct FString* ConnectInfo);
	bool BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, unsigned char* PlatformSpecificInfo);
	bool ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo);
	bool QueryNonAdvertisedData(int StartAt, int NumberToQuery);
	void ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate);
	void OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID);
	void ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate);
	void OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful);
	bool RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited);
	bool AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName);
	void OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult);
	void ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	void AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate);
	bool UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData);
};

// UClass* UOnlineGameInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineLobbyInterfaceSteamworks
// 0x0000 (0x003C - 0x003C)
class UOnlineLobbyInterfaceSteamworks : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3577];

		return pClassPointer;
	};
};

// UClass* UOnlineLobbyInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.OnlineSubsystemSteamworks
// 0x0668 (0x0760 - 0x00F8)
class UOnlineSubsystemSteamworks : public UOnlineSubsystemCommonImpl
{
public:
	struct FPointer                                    CallbackBridge;                                   		// 0x00F8 (0x0004) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FPointer >                          AsyncTasks;                                       		// 0x00FC (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	unsigned long                                      bStoringAchievement : 1;                          		// 0x0108 (0x0004) [0x0000000000000000] [0x00000001]
	unsigned long                                      bGSStatsStoresSuccess : 1;                        		// 0x0108 (0x0004) [0x0000000000000000] [0x00000002]
	unsigned long                                      bNeedsKeyboardTicking : 1;                        		// 0x0108 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	unsigned long                                      bLastHasConnection : 1;                           		// 0x0108 (0x0004) [0x0000000000000000] [0x00000008]
	unsigned long                                      bHasSteamworksAccount : 1;                        		// 0x0108 (0x0004) [0x0000000000004002] [0x00000010] ( CPF_Const | CPF_Config )
	unsigned long                                      bShouldUseMcp : 1;                                		// 0x0108 (0x0004) [0x0000000000004002] [0x00000020] ( CPF_Const | CPF_Config )
	unsigned long                                      bIncrementStatValues : 1;                         		// 0x0108 (0x0004) [0x0000000000000000] [0x00000040]
	unsigned long                                      bEnableSteamQoS : 1;                              		// 0x0108 (0x0004) [0x0000000000002000] [0x00000080] ( CPF_Transient )
	int                                                TotalGSStatsStoresPending;                        		// 0x010C (0x0004) [0x0000000000000000]
	unsigned char                                      UserStatsReceivedState;                           		// 0x0110 (0x0001) [0x0000000000000000]
	unsigned char                                      LoggedInStatus;                                   		// 0x0111 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      bWasKeyboardInputCanceled;                        		// 0x0112 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      CurrentNotificationPosition;                      		// 0x0113 (0x0001) [0x0000000000004000]              ( CPF_Config )
	class UOnlineGameInterfaceSteamworks*              CachedGameInt;                                    		// 0x0114 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     LocalProfileName;                                 		// 0x0118 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     LoggedInPlayerName;                               		// 0x0124 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x0130 (0x0018) [0x0000000000000002]              ( CPF_Const )
	int                                                LoggedInPlayerNum;                                		// 0x0148 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ProfileDataDirectory;                             		// 0x014C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ProfileDataExtension;                             		// 0x0158 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x0164 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x0170 (0x0004) [0x0000000000000000]
	TArray< struct FScriptDelegate >                   LocalPlayerStorageReadDelegates;                  		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LocalPlayerStorageWriteDelegates;                 		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RemotePlayerStorageReadDelegates;                 		// 0x018C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x01B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginChangeDelegates;                             		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginFailedDelegates;                             		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LogoutCompletedDelegates;                         		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetUserAgeGroupCompletedDelegates;                		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoginStatusChangeDelegates;                       		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AccountCreateDelegates;                           		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   TalkingDelegates;                                 		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadOnlineStatsCompleteDelegates;                 		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FlushOnlineStatsDelegates;                        		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ConnectionStatusChangeDelegates;                  		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ControllerChangeDelegates;                        		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LinkStatusDelegates;                              		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ShareTitleFileCompleteDelegates;                  		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementDelegates;                             		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AchievementReadDelegates;                         		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AnyContentChangeDelegates;                        		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FLocalTalker                                CurrentLocalTalker;                               		// 0x0294 (0x0004) [0x0000000000000000]
	TArray< struct FRemoteTalker >                     RemoteTalkers;                                    		// 0x0298 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                GameID;                                           		// 0x02A4 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	class UOnlineStatsRead*                            CurrentStatsRead;                                 		// 0x02A8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPropertyToColumn >                 StatWriteKeyMapping;                              		// 0x02AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPendingPlayerStats >               PendingStats;                                     		// 0x02B8 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     KeyboardResultsString;                            		// 0x02C4 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   KeyboardInputDelegates;                           		// 0x02D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FriendInviteReceivedDelegates;                    		// 0x02DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   AddFriendByNameCompleteDelegates;                 		// 0x02E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FProfileSettingsCache                       ProfileCache;                                     		// 0x02F4 (0x0028) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlinePlayerStorage*                        PlayerStorageCache;                               		// 0x031C (0x0004) [0x0000000000000000]
	struct FDeviceIdCache                              DeviceCache;                                      		// 0x0320 (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LocationUrl;                                      		// 0x033C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SentGameInviteDelegates;                          		// 0x0348 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReceivedGameInviteDelegates;                      		// 0x0354 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinFriendGameCompleteDelegates;                  		// 0x0360 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   GetNumberOfCurrentPlayersCompleteDelegates;       		// 0x036C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RegisterHostStatGuidCompleteDelegates;            		// 0x0378 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CheckDownloadableContentListDelegates;            		// 0x0384 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FOnlineStatusMapping >              StatusMappings;                                   		// 0x0390 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FOnlineStatusPropertyMapping >      StatusPropertyMappings;                           		// 0x039C (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FOnlineStatusContextMapping >       StatusContextMappings;                            		// 0x03A8 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DefaultStatus;                                    		// 0x03B4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     GameInviteMessage;                                		// 0x03C0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FControllerConnectionState                  ControllerStates[0x4];                          		// 0x03CC (0x0020) [0x0000000000000000]
	float                                              ConnectionPresenceTimeInterval;                   		// 0x03EC (0x0004) [0x0000000000000000]
	float                                              ConnectionPresenceElapsedTime;                    		// 0x03F0 (0x0004) [0x0000000000000000]
	struct FString                                     EncryptedProductKey;                              		// 0x03F4 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      MuteList;                                         		// 0x0400 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FTitleFile >                        TitleManagedFiles;                                		// 0x040C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FTitleFileMapping >                 TitleFileMappings;                                		// 0x0418 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FQueuedAvatarRequest >              QueuedAvatarRequests;                             		// 0x0424 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FAchievementMappingInfo >           AchievementMappings;                              		// 0x0430 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchievementProgressStat >          PendingAchievementProgress;                       		// 0x043C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderboardTemplate >              LeaderboardList;                                  		// 0x0448 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardRead >          DeferredLeaderboardReads;                         		// 0x0454 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         DeferredLeaderboardWrites;                        		// 0x0460 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FDeferredLeaderboardWrite >         PendingLeaderboardStats;                          		// 0x046C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FLeaderboardEntry >                 ProcessedLeaderboardReads;                        		// 0x0478 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FViewIdToLeaderboardName >          LeaderboardNameMappings;                          		// 0x0484 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UOnlineAuthInterfaceSteamworks*              CachedAuthInt;                                    		// 0x0490 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FIpAddr >                           PendingRedirects;                                 		// 0x0494 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ExternalUIChangeDelegates;                        		// 0x04A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMarketplaceListCache                       DLCListCache;                                     		// 0x04AC (0x001C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMarketplaceOfferData >             MarketplaceOffers;                                		// 0x04C8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UQoSHandlerSteamworks*                       QoSHandler;                                       		// 0x04D4 (0x0004) [0x0000000000000000]
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x04D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x04E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x04F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x04FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x0508 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x0514 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUserAgeGroup__Delegate;                    		// 0x0520 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x052C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0538 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0544 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0550 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x055C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x0568 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0574 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x0580 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x058C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0598 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x05A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x05B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x05BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x05C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x05D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x05E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnShareTitleFileComplete__Delegate;             		// 0x05EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x05F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineAccountCompleted__Delegate;       		// 0x0604 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x0610 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x061C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0628 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSentGameInvite__Delegate;                     		// 0x0634 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0640 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x064C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0658 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0664 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeviceSelectionComplete__Delegate;            		// 0x0670 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x067C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnProfileDataChanged__Delegate;                 		// 0x0688 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0694 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadOnlineAvatarComplete__Delegate;           		// 0x06A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x06AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadCrossTitleProfileSettingsComplete__Delegate;		// 0x06B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnlockAvatarAwardComplete__Delegate;          		// 0x06C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnContentChange__Delegate;                      		// 0x06D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadContentComplete__Delegate;                		// 0x06DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadCrossTitleContentComplete__Delegate;      		// 0x06E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadCrossTitleSaveGameDataComplete__Delegate; 		// 0x06F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryAvailableDownloadsComplete__Delegate;    		// 0x0700 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadSaveGameDataComplete__Delegate;           		// 0x070C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteSaveGameDataComplete__Delegate;          		// 0x0718 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadSaveGamesComplete__Delegate;              		// 0x0724 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadDownloadableContentListComplete__Delegate;		// 0x0730 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadHiddenDownloadableContentListComplete__Delegate;		// 0x073C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadCriticalDownloadableContentListComplete__Delegate;		// 0x0748 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCheckDownloadableContentList__Delegate;       		// 0x0754 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3579];

		return pClassPointer;
	};

	void ClearCheckDownloadableContentListDelegate(unsigned char LocalUserNum, struct FScriptDelegate CheckDownloadableContentListDelegate);
	void AddCheckDownloadableContentListDelegate(unsigned char LocalUserNum, struct FScriptDelegate CheckDownloadableContentListDelegate);
	bool CheckDownloadableContentList(unsigned char LocalUserNum);
	void OnCheckDownloadableContentList(unsigned char LocalUserNum, unsigned long bDownloadableContentListAvailable);
	unsigned char GetCriticalDownloadableContentList(unsigned char LocalUserNum, TArray< struct FMarketplaceContent >* DLCList);
	bool ReadCriticalDownloadableContentList(unsigned char LocalUserNum, int CategoryMask);
	void ClearReadCriticalDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadCriticalDownloadableContentListCompleteDelegate);
	void AddReadCriticalDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadCriticalDownloadableContentListCompleteDelegate);
	void OnReadCriticalDownloadableContentListComplete(unsigned long bWasSuccessful);
	unsigned char GetHiddenDownloadableContentList(unsigned char LocalUserNum, TArray< struct FMarketplaceContent >* DLCList);
	bool ReadHiddenDownloadableContentList(unsigned char LocalUserNum, TArray< int > OfferIds);
	void ClearReadHiddenDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadHiddenDownloadableContentListCompleteDelegate);
	void AddReadHiddenDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadHiddenDownloadableContentListCompleteDelegate);
	void OnReadHiddenDownloadableContentListComplete(unsigned long bWasSuccessful);
	unsigned char GetDownloadableContentList(unsigned char LocalUserNum, TArray< struct FMarketplaceContent >* DLCList);
	bool ReadDownloadableContentList(unsigned char LocalUserNum, int CategoryMask);
	void ClearReadDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadDownloadableContentListCompleteDelegate);
	void AddReadDownloadableContentListComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadDownloadableContentListCompleteDelegate);
	void OnReadDownloadableContentListComplete(unsigned long bWasSuccessful);
	unsigned char GetSaveGamesList(unsigned char LocalUserNum, TArray< struct FOnlineContent >* SaveGamesList);
	bool ReadSaveGamesList(unsigned char LocalUserNum, int DeviceID, struct FString SaveFilePrefix);
	void ClearReadSaveGamesComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGamesCompleteDelegate);
	void AddReadSaveGamesComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGamesCompleteDelegate);
	void OnReadSaveGamesComplete(unsigned long bWasSuccessful);
	bool ClearSaveGames(unsigned char LocalUserNum);
	bool DeleteSaveGame(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename);
	void ClearWriteSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate WriteSaveGameDataCompleteDelegate);
	void AddWriteSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate WriteSaveGameDataCompleteDelegate);
	void OnWriteSaveGameDataComplete(unsigned long bWasSuccessful, unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName);
	bool WriteSaveGameData(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName, TArray< unsigned char >* SaveGameData);
	void ClearReadSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate);
	void AddReadSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate);
	void OnReadSaveGameDataComplete(unsigned long bWasSuccessful, unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName);
	bool GetSaveGameData(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName, unsigned char* bIsValid, TArray< unsigned char >* SaveGameData);
	bool ReadSaveGameData(unsigned char LocalUserNum, int DeviceID, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName);
	void GetAvailableDownloadCounts(unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads);
	void ClearQueryAvailableDownloadsComplete(unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate);
	void AddQueryAvailableDownloadsComplete(unsigned char LocalUserNum, struct FScriptDelegate QueryDownloadsDelegate);
	void OnQueryAvailableDownloadsComplete(unsigned long bWasSuccessful);
	bool QueryAvailableDownloads(unsigned char LocalUserNum, int CategoryMask);
	bool ClearCrossTitleSaveGames(unsigned char LocalUserNum);
	void ClearReadCrossTitleSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate);
	void AddReadCrossTitleSaveGameDataComplete(unsigned char LocalUserNum, struct FScriptDelegate ReadSaveGameDataCompleteDelegate);
	void OnReadCrossTitleSaveGameDataComplete(unsigned long bWasSuccessful, unsigned char LocalUserNum, int DeviceID, int TitleId, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName);
	bool GetCrossTitleSaveGameData(unsigned char LocalUserNum, int DeviceID, int TitleId, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName, unsigned char* bIsValid, TArray< unsigned char >* SaveGameData);
	bool ReadCrossTitleSaveGameData(unsigned char LocalUserNum, int DeviceID, int TitleId, struct FString FriendlyName, struct FString Filename, struct FString SaveFileName);
	void ClearReadCrossTitleContentCompleteDelegate(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate);
	void AddReadCrossTitleContentCompleteDelegate(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate);
	void OnReadCrossTitleContentComplete(unsigned long bWasSuccessful);
	unsigned char GetCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType, TArray< struct FOnlineCrossTitleContent >* ContentList);
	void ClearCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType);
	bool ReadCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType, int TitleId, int DeviceID);
	unsigned char GetContentList(unsigned char LocalUserNum, unsigned char ContentType, TArray< struct FOnlineContent >* ContentList);
	void ClearContentList(unsigned char LocalUserNum, unsigned char ContentType);
	bool ReadContentList(unsigned char LocalUserNum, unsigned char ContentType, int DeviceID);
	void ClearReadContentComplete(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate);
	void AddReadContentComplete(unsigned char LocalUserNum, unsigned char ContentType, struct FScriptDelegate ReadContentCompleteDelegate);
	void OnReadContentComplete(unsigned long bWasSuccessful);
	void ClearContentChangeDelegate(struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum);
	void AddContentChangeDelegate(struct FScriptDelegate ContentDelegate, unsigned char LocalUserNum);
	void ClearContentChangeDelegateEx(struct FScriptDelegate ContentDelegate);
	void AddContentChangeDelegateEx(struct FScriptDelegate ContentDelegate);
	void OnContentChange();
	bool ShowRedeemCodeUI(unsigned char LocalUserNum);
	void DumpSteamworksSessionState();
	void DumpSessionState();
	bool SetVoiceVolume(unsigned char VolType, float VolumeParam);
	void ClearUnlockAvatarAwardCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAvatarAwardCompleteDelegate);
	void AddUnlockAvatarAwardCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAvatarAwardCompleteDelegate);
	void OnUnlockAvatarAwardComplete(unsigned long bWasSuccessful);
	bool GetFriendJoinURL(struct FUniqueNetId FriendUID, struct FString* ServerURL, struct FString* ServerUID);
	bool GetCommandlineJoinURL(unsigned long bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID);
	bool Int64ToUniqueNetId(struct FString UIDString, struct FUniqueNetId* OutUID);
	struct FString UniqueNetIdToInt64(struct FUniqueNetId* Uid);
	void NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent);
	void OnVOIPPlaybackFinished(class UAudioComponent* AC);
	bool ShowProfileUI(unsigned char LocalUserNum, struct FString SubURL, struct FUniqueNetId PlayerUID);
	struct FString UniqueNetIdToPlayerName(struct FUniqueNetId* Uid);
	bool DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress);
	bool CreateLeaderboard(struct FString LeaderboardName, unsigned char SortType, unsigned char DisplayFormat);
	bool ResetStats(unsigned long bResetAchievements);
	bool ShowCustomMessageUI(unsigned char LocalUserNum, struct FString MessageTitle, struct FString NonEditableMessage, struct FString EditableMessage, TArray< struct FUniqueNetId >* Recipients);
	void ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	class UOnlineProfileSettings* GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId);
	void ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, unsigned long bWasSuccessful);
	bool ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings);
	bool UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId);
	TArray< struct FString > EnumerateFilesOnRemoteStorage();
	bool DeleteFileFromRemoteStorage(struct FString Filename);
	bool ReadBytesFromRemoteStorage(struct FString Filename, TArray< unsigned char >* Data);
	bool ReadStringFromRemoteStorage(struct FString Filename, struct FString* Data);
	bool WriteBytesToRemoteStorage(struct FString Filename, TArray< unsigned char > Data);
	bool WriteStringToRemoteStorage(struct FString Filename, struct FString Data);
	void GetSteamClanData(TArray< struct FSteamPlayerClanData >* Results);
	void ClearGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void AddGetNumberOfCurrentPlayersCompleteDelegate(struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate);
	void OnGetNumberOfCurrentPlayersComplete(int TotalPlayers);
	bool GetNumberOfCurrentPlayers();
	void ReadOnlineAvatar(struct FUniqueNetId PlayerNetId, int Size, struct FScriptDelegate ReadOnlineAvatarCompleteDelegate);
	void OnReadOnlineAvatarComplete(struct FUniqueNetId PlayerNetId, class UTexture2D* Avatar);
	bool ShowCustomPlayersUI(unsigned char LocalUserNum, struct FString Title, struct FString Description, TArray< struct FUniqueNetId >* Players);
	unsigned char GetAchievements(unsigned char LocalUserNum, int TitleId, TArray< struct FAchievementDetails >* Achievements);
	void ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadAchievementsCompleteDelegate);
	void OnReadAchievementsComplete(int TitleId);
	bool ReadAchievements(unsigned char LocalUserNum, int TitleId, unsigned long bShouldReadText, unsigned long bShouldReadImages);
	bool ShowPlayersUI(unsigned char LocalUserNum);
	bool ShowFriendsInviteUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowFriendsUI(unsigned char LocalUserNum);
	void ClearProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void AddProfileDataChangedDelegate(unsigned char LocalUserNum, struct FScriptDelegate ProfileDataChangedDelegate);
	void OnProfileDataChanged();
	bool UnlockGamerPicture(unsigned char LocalUserNum, int PictureId);
	void ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate UnlockAchievementCompleteDelegate);
	void OnUnlockAchievementComplete(unsigned long bWasSuccessful);
	bool UnlockAchievement(unsigned char LocalUserNum, int AchievementId);
	bool IsDeviceValid(int DeviceID, int SizeNeeded);
	int GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName);
	void ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, struct FScriptDelegate DeviceDelegate);
	void OnDeviceSelectionComplete(unsigned long bWasSuccessful);
	bool ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, unsigned long bForceShow, unsigned long bManageStorage);
	bool ShowMembershipMarketplaceUI(unsigned char LocalUserNum);
	bool ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId);
	bool ShowInviteUI(unsigned char LocalUserNum, struct FString InviteText);
	bool ShowAchievementsUI(unsigned char LocalUserNum);
	bool ShowMessagesUI(unsigned char LocalUserNum);
	bool ShowGamerCardUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool ShowFeedbackUI(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool DeleteMessage(unsigned char LocalUserNum, int MessageIndex);
	bool UnmuteAll(unsigned char LocalUserNum);
	bool MuteAll(unsigned char LocalUserNum, unsigned long bAllowFriends);
	void CalcAggregateSkill(TArray< struct FDouble > Mus, TArray< struct FDouble > Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma);
	bool RegisterStatGuid(struct FUniqueNetId PlayerID, struct FString* ClientStatGuid);
	struct FString GetClientStatGuid();
	void ClearRegisterHostStatGuidCompleteDelegateDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void AddRegisterHostStatGuidCompleteDelegate(struct FScriptDelegate RegisterHostStatGuidCompleteDelegate);
	void OnRegisterHostStatGuidComplete(unsigned long bWasSuccessful);
	bool RegisterHostStatGuid(struct FString* HostStatGuid);
	struct FString GetHostStatGuid();
	void ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate);
	void AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate MessageDelegate);
	void OnFriendMessageReceived(unsigned char LocalUserNum, struct FUniqueNetId SendingPlayer, struct FString SendingNick, struct FString Message);
	void GetFriendMessages(unsigned char LocalUserNum, TArray< struct FOnlineFriendMessage >* FriendMessages);
	void ClearJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void AddJoinFriendGameCompleteDelegate(struct FScriptDelegate JoinFriendGameCompleteDelegate);
	void OnJoinFriendGameComplete(unsigned long bWasSuccessful);
	bool JoinFriendGame(unsigned char LocalUserNum, struct FUniqueNetId Friend);
	void ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void AddReceivedGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReceivedGameInviteDelegate);
	void OnReceivedGameInvite(unsigned char LocalUserNum, struct FString InviterName);
	void ClearSentGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate SentGameInviteDelegate);
	void AddSentGameInviteDelegate(unsigned char LocalUserNum, struct FScriptDelegate SentGameInviteDelegate);
	void OnSentGameInvite(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool SendGameInviteToFriends(unsigned char LocalUserNum, TArray< struct FUniqueNetId > Friends, struct FString Text);
	bool SendGameInviteToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Text);
	bool SendMessageToFriend(unsigned char LocalUserNum, struct FUniqueNetId Friend, struct FString Message);
	void ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate);
	void AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, struct FScriptDelegate InviteDelegate);
	void OnFriendInviteReceived(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer, struct FString RequestingNick, struct FString Message);
	bool DenyFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer);
	bool AcceptFriendInvite(unsigned char LocalUserNum, struct FUniqueNetId RequestingPlayer);
	bool RemoveFriend(unsigned char LocalUserNum, struct FUniqueNetId FormerFriend);
	void ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendDelegate);
	void OnAddFriendByNameComplete(unsigned long bWasSuccessful);
	bool AddFriendByName(unsigned char LocalUserNum, struct FString FriendName, struct FString Message);
	bool AddFriend(unsigned char LocalUserNum, struct FUniqueNetId NewFriend, struct FString Message);
	struct FString GetKeyboardInputResults(unsigned char* bWasCanceled);
	void ClearKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void AddKeyboardInputDoneDelegate(struct FScriptDelegate InputDelegate);
	void OnKeyboardInputComplete(unsigned long bWasSuccessful);
	bool ShowKeyboardUI(unsigned char LocalUserNum, struct FString TitleText, struct FString DescriptionText, unsigned char KeyboardType, unsigned long bShouldValidate, struct FString DefaultText, int MaxResultLength);
	void SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray< struct FLocalizedStringSetting >* LocalizedStringSettings, TArray< struct FSettingsProperty >* Properties);
	bool GetLocalAccountNames(TArray< struct FString >* Accounts);
	bool DeleteLocalAccount(struct FString UserName, struct FString Password);
	bool RenameLocalAccount(struct FString NewUserName, struct FString OldUserName, struct FString Password);
	bool CreateLocalAccount(struct FString UserName, struct FString Password);
	void ClearCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void AddCreateOnlineAccountCompletedDelegate(struct FScriptDelegate AccountCreateDelegate);
	void OnCreateOnlineAccountCompleted(unsigned char ErrorStatus);
	bool CreateOnlineAccount(struct FString UserName, struct FString Password, struct FString EmailAddress, struct FString ProductKey);
	bool ClearDownloadedFile(struct FString Filename);
	bool ClearDownloadedFiles();
	unsigned char GetTitleFileState(struct FString Filename);
	bool GetTitleFileContents(struct FString Filename, TArray< unsigned char >* FileContents);
	void ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	void AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate);
	bool ReadTitleFile(unsigned char LocalUserNum, struct FString FileToRead);
	void OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename);
	void ClearShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate);
	void AddShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate);
	bool ShareTitleFile(struct FString FileToShare);
	void OnShareTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename, struct FString UGCHandle);
	void ClearStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void AddStorageDeviceChangeDelegate(struct FScriptDelegate StorageDeviceChangeDelegate);
	void OnStorageDeviceChange();
	int GetLocale();
	unsigned char GetNATType();
	void ClearConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void AddConnectionStatusChangeDelegate(struct FScriptDelegate ConnectionStatusDelegate);
	void OnConnectionStatusChange(unsigned char ConnectionStatus);
	bool IsControllerConnected(int ControllerId);
	void ClearControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void AddControllerChangeDelegate(struct FScriptDelegate ControllerChangeDelegate);
	void OnControllerChange(int ControllerId, unsigned long bIsConnected);
	void SetNetworkNotificationPosition(unsigned char NewPos);
	unsigned char GetNetworkNotificationPosition();
	void ClearExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void AddExternalUIChangeDelegate(struct FScriptDelegate ExternalUIDelegate);
	void OnExternalUIChange(unsigned long bIsOpening);
	void ClearLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void AddLinkStatusChangeDelegate(struct FScriptDelegate LinkStatusDelegate);
	void OnLinkStatusChange(unsigned long bIsConnected);
	bool HasLinkConnection();
	struct FUniqueNetId eventGetPlayerUniqueNetIdFromIndex(int UserIndex);
	struct FString eventGetPlayerNicknameFromIndex(int UserIndex);
	bool WriteOnlinePlayerScores(struct FName SessionName, int LeaderboardId, TArray< struct FOnlinePlayerScore >* PlayerScores);
	void ClearFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void AddFlushOnlineStatsCompleteDelegate(struct FScriptDelegate FlushOnlineStatsCompleteDelegate);
	void OnFlushOnlineStatsComplete(struct FName SessionName, unsigned long bWasSuccessful);
	bool FlushOnlineStats(struct FName SessionName);
	bool WriteOnlineStats(struct FName SessionName, struct FUniqueNetId Player, class UOnlineStatsWrite* StatsWrite);
	void FreeStats(class UOnlineStatsRead* StatsRead);
	void ClearReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void AddReadOnlineStatsCompleteDelegate(struct FScriptDelegate ReadOnlineStatsCompleteDelegate);
	void OnReadOnlineStatsComplete(unsigned long bWasSuccessful);
	bool ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows);
	bool ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead);
	bool ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead);
	bool ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray< struct FUniqueNetId >* Players);
	bool SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj);
	bool SelectVocabulary(unsigned char LocalUserNum, int VocabularyId);
	void ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void AddRecognitionCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate RecognitionDelegate);
	void OnRecognitionComplete();
	bool GetRecognitionResults(unsigned char LocalUserNum, TArray< struct FSpeechRecognizedWord >* Words);
	bool StopSpeechRecognition(unsigned char LocalUserNum);
	bool StartSpeechRecognition(unsigned char LocalUserNum);
	void StopNetworkedVoice(unsigned char LocalUserNum);
	void StartNetworkedVoice(unsigned char LocalUserNum);
	void ClearPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void AddPlayerTalkingDelegate(struct FScriptDelegate TalkerDelegate);
	void OnPlayerTalkingStateChange(struct FUniqueNetId Player, unsigned long bIsTalking);
	bool UnmuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide);
	bool MuteRemoteTalker(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, unsigned long bIsSystemWide);
	bool SetRemoteTalkerPriority(unsigned char LocalUserNum, struct FUniqueNetId PlayerID, int Priority);
	bool IsHeadsetPresent(unsigned char LocalUserNum);
	bool IsRemotePlayerTalking(struct FUniqueNetId PlayerID);
	bool IsLocalPlayerTalking(unsigned char LocalUserNum);
	bool UnregisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool RegisterRemoteTalker(struct FUniqueNetId PlayerID);
	bool UnregisterLocalTalker(unsigned char LocalUserNum);
	bool RegisterLocalTalker(unsigned char LocalUserNum);
	unsigned char GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray< struct FOnlineFriend >* Friends);
	void ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadFriendsCompleteDelegate);
	void OnReadFriendsComplete(unsigned long bWasSuccessful);
	bool ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt);
	void ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WritePlayerStorageCompleteDelegate);
	void OnWritePlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	class UOnlinePlayerStorage* GetPlayerStorage(unsigned char LocalUserNum);
	void ClearReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void AddReadPlayerStorageForNetIdCompleteDelegate(struct FUniqueNetId NetId, struct FScriptDelegate ReadPlayerStorageForNetIdCompleteDelegate);
	void OnReadPlayerStorageForNetIdComplete(struct FUniqueNetId NetId, unsigned long bWasSuccessful);
	bool ReadPlayerStorageForNetId(unsigned char LocalUserNum, struct FUniqueNetId NetId, class UOnlinePlayerStorage* PlayerStorage);
	void ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadPlayerStorageCompleteDelegate);
	void OnReadPlayerStorageComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID);
	void ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate WriteProfileSettingsCompleteDelegate);
	void OnWriteProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	class UOnlineProfileSettings* GetProfileSettings(unsigned char LocalUserNum);
	void ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, struct FScriptDelegate ReadProfileSettingsCompleteDelegate);
	void OnReadProfileSettingsComplete(unsigned char LocalUserNum, unsigned long bWasSuccessful);
	bool ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings);
	void ClearFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void AddFriendsChangeDelegate(unsigned char LocalUserNum, struct FScriptDelegate FriendsDelegate);
	void ClearMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void AddMutingChangeDelegate(struct FScriptDelegate MutingDelegate);
	void ClearLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void AddLoginCancelledDelegate(struct FScriptDelegate CancelledDelegate);
	void ClearLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum);
	void AddLoginStatusChangeDelegate(struct FScriptDelegate LoginStatusDelegate, unsigned char LocalUserNum);
	void OnLoginStatusChange(unsigned char NewStatus, struct FUniqueNetId NewId);
	void ClearLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	void AddLoginChangeDelegate(struct FScriptDelegate LoginDelegate);
	bool IsMuted(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	bool AreAnyFriends(unsigned char LocalUserNum, TArray< struct FFriendsQuery >* Query);
	bool IsFriend(unsigned char LocalUserNum, struct FUniqueNetId PlayerID);
	unsigned char CanShowPresenceInformation(unsigned char LocalUserNum);
	unsigned char CanViewPlayerProfiles(unsigned char LocalUserNum);
	unsigned char CanPurchaseContent(unsigned char LocalUserNum);
	unsigned char CanDownloadUserContent(unsigned char LocalUserNum);
	unsigned char CanCommunicate(unsigned char LocalUserNum);
	unsigned char CanPlayOnline(unsigned char LocalUserNum);
	void ClearGetUserAgeGroupDelegate(unsigned char LocalUserNum, struct FScriptDelegate GetUserAgeGroupDelegate);
	void AddGetUserAgeGroupDelegate(unsigned char LocalUserNum, struct FScriptDelegate GetUserAgeGroupDelegate);
	bool GetUserAgeGroup(unsigned char LocalUserNum);
	void OnGetUserAgeGroup(unsigned char LocalUserNum, unsigned char UserAgeGroup);
	struct FString GetPlayerNickname(unsigned char LocalUserNum);
	bool GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID);
	bool IsLocalLogin(unsigned char LocalUserNum);
	bool IsGuestLogin(unsigned char LocalUserNum);
	unsigned char GetLoginStatus(unsigned char LocalUserNum);
	void ClearLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void AddLogoutCompletedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LogoutDelegate);
	void OnLogoutCompleted(unsigned long bWasSuccessful);
	bool Logout(unsigned char LocalUserNum);
	void ClearLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void AddLoginFailedDelegate(unsigned char LocalUserNum, struct FScriptDelegate LoginFailedDelegate);
	void OnLoginFailed(unsigned char LocalUserNum, unsigned char ErrorCode);
	bool AutoLogin();
	bool Login(unsigned char LocalUserNum, struct FString LoginName, struct FString Password, unsigned long bWantsLocalOnly);
	bool ShowLoginUI(unsigned long bShowOnlineOnly, int NumLoginOverride, unsigned long bAddUser);
	void OnFriendsChange();
	void OnMutingChange();
	void OnLoginCancelled();
	void OnLoginChange(unsigned char LocalUserNum);
	void eventExit();
	bool eventInit();
};

// UClass* UOnlineSubsystemSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.QoSHandlerSteamworks
// 0x00A4 (0x00E0 - 0x003C)
class UQoSHandlerSteamworks : public UObject
{
public:
	int                                                MaxQoSRequest;                                    		// 0x003C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxQoSListen;                                     		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                NumPingProbes;                                    		// 0x0044 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PingProbeSize;                                    		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              PingTimeout;                                      		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ChallengeTimeout;                                 		// 0x0050 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ListenTimeout;                                    		// 0x0054 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bEnabled : 1;                                     		// 0x0058 (0x0004) [0x0000000000000000] [0x00000001]
	struct FMap_Mirror                                 ListenEntries;                                    		// 0x005C (0x003C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	struct FMap_Mirror                                 RequestEntries;                                   		// 0x0098 (0x003C) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	TArray< struct FPendingEntry >                     PendingRequests;                                  		// 0x00D4 (0x000C) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3581];

		return pClassPointer;
	};
};

// UClass* UQoSHandlerSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.SparkInterfaceSteamworks
// 0x0000 (0x00DC - 0x00DC)
class USparkInterfaceSteamworks : public USparkInterfaceImpl
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3583];

		return pClassPointer;
	};
};

// UClass* USparkInterfaceSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetDriverSteamworks
// 0x0000 (0x01EC - 0x01EC)
class UIpNetDriverSteamworks : public UTcpNetDriver
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3585];

		return pClassPointer;
	};
};

// UClass* UIpNetDriverSteamworks::pClassPointer = NULL;

// Class OnlineSubsystemSteamworks.IpNetConnectionSteamworks
// 0x0000 (0x5078 - 0x5078)
class UIpNetConnectionSteamworks : public UTcpipConnection
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if (!pClassPointer)
			pClassPointer = (UClass*)UObject::GObjObjects()->Data[3587];

		return pClassPointer;
	};
};

// UClass* UIpNetConnectionSteamworks::pClassPointer = NULL;

#ifdef _MSC_VER
#pragma pack ( pop )
#endif