#pragma once
// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ESteamMatchmakingType
//enum class ESteamMatchmakingType : uint8_t
//{
//	SMT_Invalid                    = 0,
//	SMT_LAN                        = 1,
//	SMT_Internet                   = 2,
//	SMT_MAX                        = 3
//};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardSortType
//enum class ELeaderboardSortType : uint8_t
//{
//	LST_Ascending                  = 0,
//	LST_Descending                 = 1,
//	LST_MAX                        = 2
//};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardRequestType
//enum class ELeaderboardRequestType : uint8_t
//{
//	LRT_Global                     = 0,
//	LRT_Player                     = 1,
//	LRT_Friends                    = 2,
//	LRT_MAX                        = 3
//};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardFormat
//enum class ELeaderboardFormat : uint8_t
//{
//	LF_Number                      = 0,
//	LF_Seconds                     = 1,
//	LF_Milliseconds                = 2,
//	LF_MAX                         = 3
//};


// Enum OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ELeaderboardUpdateType
//enum class ELeaderboardUpdateType : uint8_t
//{
//	LUT_KeepBest                   = 0,
//	LUT_Force                      = 1,
//	LUT_MAX                        = 2
//};


// Enum OnlineSubsystemSteamworks.QoSHandlerSteamworks.EQoSState
//enum class EQoSState : uint8_t
//{
//	EQS_Challenge                  = 0,
//	EQS_WaitChallenge              = 1,
//	EQS_Ping                       = 2,
//	EQS_WaitPing                   = 3,
//	EQS_Complete                   = 4,
//	EQS_Error                      = 5,
//	EQS_MAX                        = 6
//};


// Enum OnlineSubsystemSteamworks.QoSHandlerSteamworks.EQoSMessage
//enum class EQoSMessage : uint8_t
//{
//	EQM_GoAway                     = 0,
//	EQM_Challenge                  = 1,
//	EQM_ChallengeResponse          = 2,
//	EQM_Ping                       = 3,
//	EQM_PingResponse               = 4,
//	EQM_Finished                   = 5,
//	EQM_MAX                        = 6
//};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToRulesResponseMapping
// 0x0008
struct FServerQueryToRulesResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0004) (Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ServerQueryToPingResponseMapping
// 0x0008
struct FServerQueryToPingResponseMapping
{
	int                                                Query;                                                    // 0x0000(0x0004)
	struct FPointer                                    Response;                                                 // 0x0004(0x0004) (Native)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClientFilterORClause
// 0x003C
struct FClientFilterORClause
{
	struct FMultiMap_Mirror                            OrParams;                                                 // 0x0000(0x003C) (Const, Native, Transient)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.FilterKeyToSteamKeyMapping
// 0x0030
struct FFilterKeyToSteamKeyMapping
{
	int                                                KeyId;                                                    // 0x0000(0x0004)
	unsigned char                                      KeyType;                                                  // 0x0004(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     RawKey;                                                   // 0x0008(0x000C) (NeedCtorLink)
	struct FString                                     SteamKey;                                                 // 0x0014(0x000C) (NeedCtorLink)
	unsigned long                                      bReverseFilter : 1;                                       // 0x0020(0x0004)
	struct FString                                     IgnoreValue;                                              // 0x0024(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SteamPlayerClanData
// 0x0018
struct FSteamPlayerClanData
{
	struct FString                                     ClanName;                                                 // 0x0000(0x000C) (Const, NeedCtorLink)
	struct FString                                     ClanTag;                                                  // 0x000C(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PropertyToColumn
// 0x0008
struct FPropertyToColumn
{
	int                                                PropertyId;                                               // 0x0000(0x0004)
	int                                                ColumnId;                                                 // 0x0004(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PlayerStat
// 0x0014
struct FPlayerStat
{
	int                                                ViewId;                                                   // 0x0000(0x0004)
	int                                                PropertyId;                                               // 0x0004(0x0004)
	struct FSettingsData                               Data;                                                     // 0x0008(0x000C) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.PendingPlayerStats
// 0x0068
struct FPendingPlayerStats
{
	struct FUniqueNetId                                Player;                                                   // 0x0000(0x0018) (Const)
	struct FString                                     PlayerName;                                               // 0x0018(0x000C) (Const, NeedCtorLink)
	struct FString                                     StatGuid;                                                 // 0x0024(0x000C) (Const, NeedCtorLink)
	TArray<struct FPlayerStat>                         Stats;                                                    // 0x0030(0x000C) (Const, NeedCtorLink)
	struct FOnlinePlayerScore                          Score;                                                    // 0x003C(0x0020) (Const)
	struct FString                                     Place;                                                    // 0x005C(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ProfileSettingsCache
// 0x0028
struct FProfileSettingsCache
{
	class UOnlineProfileSettings*                      Profile;                                                  // 0x0000(0x0004)
	TArray<struct FScriptDelegate>                     ReadDelegates;                                            // 0x0004(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     WriteDelegates;                                           // 0x0010(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     ProfileDataChangedDelegates;                              // 0x001C(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeviceIdCache
// 0x001C
struct FDeviceIdCache
{
	int                                                DeviceID;                                                 // 0x0000(0x0004)
	struct FScriptDelegate                             DeviceSelectionMulticast;                                 // 0x0004(0x000C) (NeedCtorLink)
	TArray<struct FScriptDelegate>                     DeviceSelectionDelegates;                                 // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusMapping
// 0x0010
struct FOnlineStatusMapping
{
	int                                                StatusId;                                                 // 0x0000(0x0004)
	struct FString                                     StatusString;                                             // 0x0004(0x000C) (Const, Localized, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusPropertyMapping
// 0x0014
struct FOnlineStatusPropertyMapping
{
	struct FString                                     KeyString;                                                // 0x0000(0x000C) (NeedCtorLink)
	int                                                PropertyId;                                               // 0x000C(0x0004)
	int                                                EncodeId;                                                 // 0x0010(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnlineStatusContextMapping
// 0x0010
struct FOnlineStatusContextMapping
{
	struct FString                                     KeyString;                                                // 0x0000(0x000C) (NeedCtorLink)
	int                                                ContextId;                                                // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ControllerConnectionState
// 0x0008
struct FControllerConnectionState
{
	int                                                bIsControllerConnected;                                   // 0x0000(0x0004) (Const)
	int                                                bLastIsControllerConnected;                               // 0x0004(0x0004) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.TitleFileMapping
// 0x0018
struct FTitleFileMapping
{
	struct FString                                     Filename;                                                 // 0x0000(0x000C) (NeedCtorLink)
	struct FString                                     UGCHandle;                                                // 0x000C(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueuedAvatarRequest
// 0x0030
struct FQueuedAvatarRequest
{
	float                                              CheckTime;                                                // 0x0000(0x0004) (Const)
	int                                                NumberOfAttempts;                                         // 0x0004(0x0004) (Const)
	struct FUniqueNetId                                PlayerNetId;                                              // 0x0008(0x0018) (Const)
	int                                                Size;                                                     // 0x0020(0x0004) (Const)
	struct FScriptDelegate                             ReadOnlineAvatarCompleteDelegate;                         // 0x0024(0x000C) (Const, NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementMappingInfo
// 0x001C
struct FAchievementMappingInfo
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	struct FName                                       AchievementName;                                          // 0x0004(0x0008)
	int                                                ViewId;                                                   // 0x000C(0x0004)
	int                                                ProgressCount;                                            // 0x0010(0x0004)
	int                                                MaxProgress;                                              // 0x0014(0x0004)
	unsigned long                                      bAutoUnlock : 1;                                          // 0x0018(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AchievementProgressStat
// 0x0010
struct FAchievementProgressStat
{
	int                                                AchievementId;                                            // 0x0000(0x0004)
	int                                                Progress;                                                 // 0x0004(0x0004)
	int                                                MaxProgress;                                              // 0x0008(0x0004)
	unsigned long                                      bUnlock : 1;                                              // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardHandle
// 0x0008
struct FLeaderboardHandle
{
	struct FQWord                                      Dud;                                                      // 0x0000(0x0008) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardTemplate
// 0x0024
struct FLeaderboardTemplate
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      UpdateType;                                               // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                LeaderboardSize;                                          // 0x0010(0x0004) (Const)
	unsigned char                                      SortType;                                                 // 0x0014(0x0001) (Const)
	unsigned char                                      DisplayFormat;                                            // 0x0015(0x0001) (Const)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
	struct FLeaderboardHandle                          LeaderboardRef;                                           // 0x0018(0x0008) (Const)
	unsigned long                                      bLeaderboardInitializing : 1;                             // 0x0020(0x0004) (Const)
	unsigned long                                      bLeaderboardInitiated : 1;                                // 0x0020(0x0004) (Const)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardRead
// 0x0018
struct FDeferredLeaderboardRead
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      RequestType;                                              // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                Start;                                                    // 0x0010(0x0004)
	int                                                End;                                                      // 0x0014(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeferredLeaderboardWrite
// 0x0010
struct FDeferredLeaderboardWrite
{
	struct FString                                     LeaderboardName;                                          // 0x0000(0x000C) (NeedCtorLink)
	int                                                Score;                                                    // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.LeaderboardEntry
// 0x0020
struct FLeaderboardEntry
{
	struct FUniqueNetId                                PlayerUID;                                                // 0x0000(0x0018)
	int                                                Rank;                                                     // 0x0018(0x0004)
	int                                                Score;                                                    // 0x001C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ViewIdToLeaderboardName
// 0x0010
struct FViewIdToLeaderboardName
{
	int                                                ViewId;                                                   // 0x0000(0x0004)
	struct FString                                     LeaderboardName;                                          // 0x0004(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MarketplaceListCache
// 0x001C
struct FMarketplaceListCache
{
	TArray<struct FMarketplaceContent>                 Content;                                                  // 0x0000(0x000C) (NeedCtorLink)
	unsigned char                                      ReadState;                                                // 0x000C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	TArray<struct FScriptDelegate>                     ReadCompleteDelegates;                                    // 0x0010(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MarketplaceOfferData
// 0x0014
struct FMarketplaceOfferData
{
	int                                                OfferId;                                                  // 0x0000(0x0004)
	int                                                Category;                                                 // 0x0004(0x0004)
	struct FString                                     SellTextLocKey;                                           // 0x0008(0x000C) (NeedCtorLink)
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.PendingEntry
// 0x0010
struct FPendingEntry
{
	struct FQWord                                      RemoteId;                                                 // 0x0000(0x0008) (Native)
	struct FPointer                                    CallbackFunc;                                             // 0x0008(0x0004) (Native)
	struct FPointer                                    UserData;                                                 // 0x000C(0x0004) (Native)
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.ListenEntry
// 0x0014
struct FListenEntry
{
	struct FQWord                                      RemoteId;                                                 // 0x0000(0x0008) (Native)
	unsigned char                                      Status;                                                   // 0x0008(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FDouble                                     ActiveTimestamp;                                          // 0x000C(0x0008)
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.QoSResults
// 0x0010
struct FQoSResults
{
	TArray<struct FDouble>                             PingTimes;                                                // 0x0000(0x000C) (NeedCtorLink)
	int                                                PingInMs;                                                 // 0x000C(0x0004)
};

// ScriptStruct OnlineSubsystemSteamworks.QoSHandlerSteamworks.RequestEntry
// 0x0038
struct FRequestEntry
{
	struct FQWord                                      RemoteId;                                                 // 0x0000(0x0008) (Native)
	int                                                NumProbesSent;                                            // 0x0008(0x0004)
	struct FDouble                                     ChallengeTimestamp;                                       // 0x000C(0x0008)
	struct FDouble                                     PingTimestamp;                                            // 0x0014(0x0008)
	unsigned char                                      Status;                                                   // 0x001C(0x0001)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FQoSResults                                 Results;                                                  // 0x0020(0x0010) (NeedCtorLink)
	struct FPointer                                    CallbackFunc;                                             // 0x0030(0x0004) (Native)
	struct FPointer                                    UserData;                                                 // 0x0034(0x0004) (Native)
};

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
