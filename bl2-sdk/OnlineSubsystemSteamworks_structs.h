#pragma once
#include "BL2-SDK.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemSteamworks_structs.h
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
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                            		// 0x0000 (0x0004) [0x0000000000000000]
	struct FPointer                                    Response;                                         		// 0x0004 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x003C
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                         		// 0x0000 (0x003C) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0030
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                            		// 0x0000 (0x0004) [0x0000000000000000]
	unsigned char                                      KeyType;                                          		// 0x0004 (0x0001) [0x0000000000000000]
	struct FString                                     RawKey;                                           		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SteamKey;                                         		// 0x0014 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bReverseFilter : 1;                               		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001]
	struct FString                                     IgnoreValue;                                      		// 0x0024 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                              		// 0x0000 (0x0008) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0024
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UpdateType;                                       		// 0x000C (0x0001) [0x0000000000000000]
	int                                                LeaderboardSize;                                  		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      SortType;                                         		// 0x0014 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      DisplayFormat;                                    		// 0x0015 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FLeaderboardHandle                          LeaderboardRef;                                   		// 0x0018 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bLeaderboardInitializing : 1;                     		// 0x0020 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bLeaderboardInitiated : 1;                        		// 0x0020 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0018
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      RequestType;                                      		// 0x000C (0x0001) [0x0000000000000000]
	int                                                Start;                                            		// 0x0010 (0x0004) [0x0000000000000000]
	int                                                End;                                              		// 0x0014 (0x0004) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x0010
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                  		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x0020
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                        		// 0x0000 (0x0018) [0x0000000000000000]
	int                                                Rank;                                             		// 0x0018 (0x0004) [0x0000000000000000]
	int                                                Score;                                            		// 0x001C (0x0004) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0010
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]
	struct FString                                     LeaderboardName;                                  		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0018
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ClanTag;                                          		// 0x000C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MarketplaceListCache
// 0x001C
struct FMarketplaceListCache
{
	TArray< struct FMarketplaceContent >               Content;                                          		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ReadState;                                        		// 0x000C (0x0001) [0x0000000000000000]
	TArray< struct FScriptDelegate >                   ReadCompleteDelegates;                            		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MarketplaceOfferData
// 0x0014
struct FMarketplaceOfferData
{
	int                                                OfferId;                                          		// 0x0000 (0x0004) [0x0000000000000000]
	int                                                Category;                                         		// 0x0004 (0x0004) [0x0000000000000000]
	struct FString                                     SellTextLocKey;                                   		// 0x0008 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                          		// 0x0000 (0x0004) [0x0000000000000000]
	TArray< struct FScriptDelegate >                   ReadDelegates;                                    		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteDelegates;                                   		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ProfileDataChangedDelegates;                      		// 0x001C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int                                                DeviceID;                                         		// 0x0000 (0x0004) [0x0000000000000000]
	struct FScriptDelegate                             DeviceSelectionMulticast;                         		// 0x0004 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeviceSelectionDelegates;                         		// 0x0010 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]
	int                                                Progress;                                         		// 0x0004 (0x0004) [0x0000000000000000]
	int                                                MaxProgress;                                      		// 0x0008 (0x0004) [0x0000000000000000]
	unsigned long                                      bUnlock : 1;                                      		// 0x000C (0x0004) [0x0000000000000000] [0x00000001]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                    		// 0x0000 (0x0004) [0x0000000000000000]
	struct FName                                       AchievementName;                                  		// 0x0004 (0x0008) [0x0000000000000000]
	int                                                ViewId;                                           		// 0x000C (0x0004) [0x0000000000000000]
	int                                                ProgressCount;                                    		// 0x0010 (0x0004) [0x0000000000000000]
	int                                                MaxProgress;                                      		// 0x0014 (0x0004) [0x0000000000000000]
	unsigned long                                      bAutoUnlock : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0030
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumberOfAttempts;                                 		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FUniqueNetId                                PlayerNetId;                                      		// 0x0008 (0x0018) [0x0000000000000002]              ( CPF_Const )
	int                                                Size;                                             		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                 		// 0x0024 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TitleFileMapping
// 0x0018
struct FTitleFileMapping
{
	struct FString                                     Filename;                                         		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UGCHandle;                                        		// 0x000C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                           		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                bLastIsControllerConnected;                       		// 0x0004 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusContextMapping
// 0x0010
struct FOnlineStatusContextMapping
{
	struct FString                                     KeyString;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ContextId;                                        		// 0x000C (0x0004) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusPropertyMapping
// 0x0014
struct FOnlineStatusPropertyMapping
{
	struct FString                                     KeyString;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PropertyId;                                       		// 0x000C (0x0004) [0x0000000000000000]
	int                                                EncodeId;                                         		// 0x0010 (0x0004) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int                                                StatusId;                                         		// 0x0000 (0x0004) [0x0000000000000000]
	struct FString                                     StatusString;                                     		// 0x0004 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PropertyToColumn
// 0x0008
struct FPropertyToColumn
{
	int                                                PropertyId;                                       		// 0x0000 (0x0004) [0x0000000000000000]
	int                                                ColumnId;                                         		// 0x0004 (0x0004) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0014
struct FPlayerStat
{
	int                                                ViewId;                                           		// 0x0000 (0x0004) [0x0000000000000000]
	int                                                PropertyId;                                       		// 0x0004 (0x0004) [0x0000000000000000]
	struct FSettingsData                               Data;                                             		// 0x0008 (0x000C) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0068
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                           		// 0x0000 (0x0018) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     PlayerName;                                       		// 0x0018 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     StatGuid;                                         		// 0x0024 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FPlayerStat >                       Stats;                                            		// 0x0030 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FOnlinePlayerScore                          Score;                                            		// 0x003C (0x0020) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     Place;                                            		// 0x005C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.ListenEntry
// 0x0014
struct FListenEntry
{
	struct FQWord                                      RemoteId;                                         		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	unsigned char                                      Status;                                           		// 0x0008 (0x0001) [0x0000000000000000]
	struct FDouble                                     ActiveTimestamp;                                  		// 0x000C (0x0008) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.QoSResults
// 0x0010
struct FQoSResults
{
	TArray< struct FDouble >                           PingTimes;                                        		// 0x0000 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                PingInMs;                                         		// 0x000C (0x0004) [0x0000000000000000]
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.RequestEntry
// 0x0038
struct FRequestEntry
{
	struct FQWord                                      RemoteId;                                         		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	int                                                NumProbesSent;                                    		// 0x0008 (0x0004) [0x0000000000000000]
	struct FDouble                                     ChallengeTimestamp;                               		// 0x000C (0x0008) [0x0000000000000000]
	struct FDouble                                     PingTimestamp;                                    		// 0x0014 (0x0008) [0x0000000000000000]
	unsigned char                                      Status;                                           		// 0x001C (0x0001) [0x0000000000000000]
	struct FQoSResults                                 Results;                                          		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    CallbackFunc;                                     		// 0x0030 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    UserData;                                         		// 0x0034 (0x0004) [0x0000000000001000]              ( CPF_Native )
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.PendingEntry
// 0x0010
struct FPendingEntry
{
	struct FQWord                                      RemoteId;                                         		// 0x0000 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    CallbackFunc;                                     		// 0x0008 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    UserData;                                         		// 0x000C (0x0004) [0x0000000000001000]              ( CPF_Native )
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif