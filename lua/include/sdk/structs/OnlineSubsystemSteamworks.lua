
local ffi = require("ffi")

ffi.cdef[[

// 0x8 
struct FServerQueryToRulesResponseMapping {
	int Query; // 0x0 (0x4)
	struct FPointer Response; // 0x4 (0x4)
};

// 0x8 
struct FServerQueryToPingResponseMapping {
	int Query; // 0x0 (0x4)
	struct FPointer Response; // 0x4 (0x4)
};

// 0x3C 
struct FClientFilterORClause {
	const struct FMultiMap_Mirror OrParams; // 0x0 (0x3C)
};

// 0x30 
struct FFilterKeyToSteamKeyMapping {
	int KeyId; // 0x0 (0x4)
	unsigned char KeyType; // 0x4 (0x1) (Enum = EOnlineGameSearchEntryType)
	const unsigned char Unknown1[0x3]; // 0x5 (0x3) > LAST OFFSET
	struct FString RawKey; // 0x8 (0xC)
	struct FString SteamKey; // 0x14 (0xC)
	BOOL bReverseFilter : 1; // 0x20 (0x4)
	const unsigned long: 0;
	struct FString IgnoreValue; // 0x24 (0xC)
};

// 0x8 
struct FLeaderboardHandle {
	const struct FQWord Dud; // 0x0 (0x8)
};

// 0x24 
struct FLeaderboardTemplate {
	struct FString LeaderboardName; // 0x0 (0xC)
	unsigned char UpdateType; // 0xC (0x1) (Enum = ELeaderboardUpdateType)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	const int LeaderboardSize; // 0x10 (0x4)
	const unsigned char SortType; // 0x14 (0x1) (Enum = ELeaderboardSortType)
	const unsigned char DisplayFormat; // 0x15 (0x1) (Enum = ELeaderboardFormat)
	const unsigned char Unknown2[0x2]; // 0x16 (0x2) > LAST OFFSET
	const struct FLeaderboardHandle LeaderboardRef; // 0x18 (0x8)
	const BOOL bLeaderboardInitializing : 1; // 0x20 (0x4)
	const BOOL bLeaderboardInitiated : 1; // 0x20 (0x4)
	const unsigned long: 0;
};

// 0x18 
struct FDeferredLeaderboardRead {
	struct FString LeaderboardName; // 0x0 (0xC)
	unsigned char RequestType; // 0xC (0x1)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	int Start; // 0x10 (0x4)
	int End; // 0x14 (0x4)
};

// 0x10 
struct FDeferredLeaderboardWrite {
	struct FString LeaderboardName; // 0x0 (0xC)
	int Score; // 0xC (0x4)
};

// 0x20 
struct FLeaderboardEntry {
	struct FUniqueNetId PlayerUID; // 0x0 (0x18)
	int Rank; // 0x18 (0x4)
	int Score; // 0x1C (0x4)
};

// 0x10 
struct FViewIdToLeaderboardName {
	int ViewId; // 0x0 (0x4)
	struct FString LeaderboardName; // 0x4 (0xC)
};

// 0x18 
struct FSteamPlayerClanData {
	const struct FString ClanName; // 0x0 (0xC)
	const struct FString ClanTag; // 0xC (0xC)
};

// 0x1C 
struct FMarketplaceListCache {
	struct TArray_FMarketplaceContent Content; // 0x0 (0xC)
	unsigned char ReadState; // 0xC (0x1) (Enum = EOnlineEnumerationReadState)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	struct TArray_FScriptDelegate ReadCompleteDelegates; // 0x10 (0xC)
};

// 0x14 
struct FMarketplaceOfferData {
	int OfferId; // 0x0 (0x4)
	int Category; // 0x4 (0x4)
	struct FString SellTextLocKey; // 0x8 (0xC)
};

// 0x28 
struct FProfileSettingsCache {
	struct UOnlineProfileSettings* Profile; // 0x0 (0x4)
	struct TArray_FScriptDelegate ReadDelegates; // 0x4 (0xC)
	struct TArray_FScriptDelegate WriteDelegates; // 0x10 (0xC)
	struct TArray_FScriptDelegate ProfileDataChangedDelegates; // 0x1C (0xC)
};

// 0x1C 
struct FDeviceIdCache {
	int DeviceID; // 0x0 (0x4)
	struct FScriptDelegate DeviceSelectionMulticast; // 0x4 (0xC)
	struct TArray_FScriptDelegate DeviceSelectionDelegates; // 0x10 (0xC)
};

// 0x10 
struct FAchievementProgressStat {
	int AchievementId; // 0x0 (0x4)
	int Progress; // 0x4 (0x4)
	int MaxProgress; // 0x8 (0x4)
	BOOL bUnlock : 1; // 0xC (0x4)
	const unsigned long: 0;
};

// 0x1C 
struct FAchievementMappingInfo {
	int AchievementId; // 0x0 (0x4)
	struct FName AchievementName; // 0x4 (0x8)
	int ViewId; // 0xC (0x4)
	int ProgressCount; // 0x10 (0x4)
	int MaxProgress; // 0x14 (0x4)
	BOOL bAutoUnlock : 1; // 0x18 (0x4)
	const unsigned long: 0;
};

// 0x30 
struct FQueuedAvatarRequest {
	const float CheckTime; // 0x0 (0x4)
	const int NumberOfAttempts; // 0x4 (0x4)
	const struct FUniqueNetId PlayerNetId; // 0x8 (0x18)
	const int Size; // 0x20 (0x4)
	const struct FScriptDelegate ReadOnlineAvatarCompleteDelegate; // 0x24 (0xC)
};

// 0x18 
struct FTitleFileMapping {
	struct FString Filename; // 0x0 (0xC)
	struct FString UGCHandle; // 0xC (0xC)
};

// 0x8 
struct FControllerConnectionState {
	const int bIsControllerConnected; // 0x0 (0x4)
	const int bLastIsControllerConnected; // 0x4 (0x4)
};

// 0x10 
struct FOnlineStatusContextMapping {
	struct FString KeyString; // 0x0 (0xC)
	int ContextId; // 0xC (0x4)
};

// 0x14 
struct FOnlineStatusPropertyMapping {
	struct FString KeyString; // 0x0 (0xC)
	int PropertyId; // 0xC (0x4)
	int EncodeId; // 0x10 (0x4)
};

// 0x10 
struct FOnlineStatusMapping {
	int StatusId; // 0x0 (0x4)
	const struct FString StatusString; // 0x4 (0xC)
};

// 0x8 
struct FPropertyToColumn {
	int PropertyId; // 0x0 (0x4)
	int ColumnId; // 0x4 (0x4)
};

// 0x14 
struct FPlayerStat {
	int ViewId; // 0x0 (0x4)
	int PropertyId; // 0x4 (0x4)
	const struct FSettingsData Data; // 0x8 (0xC)
};

// 0x68 
struct FPendingPlayerStats {
	const struct FUniqueNetId Player; // 0x0 (0x18)
	const struct FString PlayerName; // 0x18 (0xC)
	const struct FString StatGuid; // 0x24 (0xC)
	const struct TArray_FPlayerStat Stats; // 0x30 (0xC)
	const struct FOnlinePlayerScore Score; // 0x3C (0x20)
	const struct FString Place; // 0x5C (0xC)
};

// 0x14 
struct FListenEntry {
	struct FQWord RemoteId; // 0x0 (0x8)
	unsigned char Status; // 0x8 (0x1) (Enum = EQoSState)
	const unsigned char Unknown1[0x3]; // 0x9 (0x3) > LAST OFFSET
	struct FDouble ActiveTimestamp; // 0xC (0x8)
};

// 0x10 
struct FQoSResults {
	struct TArray_FDouble PingTimes; // 0x0 (0xC)
	int PingInMs; // 0xC (0x4)
};

// 0x38 
struct FRequestEntry {
	struct FQWord RemoteId; // 0x0 (0x8)
	int NumProbesSent; // 0x8 (0x4)
	struct FDouble ChallengeTimestamp; // 0xC (0x8)
	struct FDouble PingTimestamp; // 0x14 (0x8)
	unsigned char Status; // 0x1C (0x1) (Enum = EQoSState)
	const unsigned char Unknown1[0x3]; // 0x1D (0x3) > LAST OFFSET
	struct FQoSResults Results; // 0x20 (0x10)
	struct FPointer CallbackFunc; // 0x30 (0x4)
	struct FPointer UserData; // 0x34 (0x4)
};

// 0x10 
struct FPendingEntry {
	struct FQWord RemoteId; // 0x0 (0x8)
	struct FPointer CallbackFunc; // 0x8 (0x4)
	struct FPointer UserData; // 0xC (0x4)
};

]]