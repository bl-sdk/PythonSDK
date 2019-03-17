
local ffi = require("ffi")

ffi.cdef[[

// 0x8 
struct FIpAddr {
	int Addr; // 0x0 (0x4)
	int Port; // 0x4 (0x4)
};

// 0xC 
struct FConnectionBandwidthStats {
	int UpstreamRate; // 0x0 (0x4)
	int DownstreamRate; // 0x4 (0x4)
	int RoundtripLatency; // 0x8 (0x4)
};

// 0x20 
struct FPlayerMember {
	int TeamNum; // 0x0 (0x4)
	int Skill; // 0x4 (0x4)
	struct FUniqueNetId NetId; // 0x8 (0x18)
};

// 0x14 
struct FClientBandwidthTestData {
	unsigned char TestType; // 0x0 (0x1) (Enum = EMeshBeaconBandwidthTestType)
	unsigned char CurrentState; // 0x1 (0x1) (Enum = EMeshBeaconBandwidthTestState)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	int NumBytesToSendTotal; // 0x4 (0x4)
	int NumBytesSentTotal; // 0x8 (0x4)
	int NumBytesSentLast; // 0xC (0x4)
	float ElapsedTestTime; // 0x10 (0x4)
};

// 0x34 
struct FClientConnectionRequest {
	struct FUniqueNetId PlayerNetId; // 0x0 (0x18)
	unsigned char NatType; // 0x18 (0x1) (Enum = ENATType)
	const unsigned char Unknown1[0x3]; // 0x19 (0x3) > LAST OFFSET
	BOOL bCanHostVs : 1; // 0x1C (0x4)
	const unsigned long: 0;
	float GoodHostRatio; // 0x20 (0x4)
	struct TArray_FConnectionBandwidthStats BandwidthHistory; // 0x24 (0xC)
	int MinutesSinceLastTest; // 0x30 (0x4)
};

// 0x28 
struct FClientConnectionBandwidthTestData {
	unsigned char CurrentState; // 0x0 (0x1) (Enum = EMeshBeaconBandwidthTestState)
	unsigned char TestType; // 0x1 (0x1) (Enum = EMeshBeaconBandwidthTestType)
	const unsigned char Unknown1[0x2]; // 0x2 (0x2) > LAST OFFSET
	int BytesTotalNeeded; // 0x4 (0x4)
	int BytesReceived; // 0x8 (0x4)
	struct FDouble RequestTestStartTime; // 0xC (0x8)
	struct FDouble TestStartTime; // 0x14 (0x8)
	struct FConnectionBandwidthStats BandwidthStats; // 0x1C (0xC)
};

// 0x68 
struct FClientMeshBeaconConnection {
	struct FUniqueNetId PlayerNetId; // 0x0 (0x18)
	float ElapsedHeartbeatTime; // 0x18 (0x4)
	struct FPointer Socket; // 0x1C (0x4)
	BOOL bConnectionAccepted : 1; // 0x20 (0x4)
	const unsigned long: 0;
	struct FClientConnectionBandwidthTestData BandwidthTest; // 0x24 (0x28)
	unsigned char NatType; // 0x4C (0x1) (Enum = ENATType)
	const unsigned char Unknown1[0x3]; // 0x4D (0x3) > LAST OFFSET
	BOOL bCanHostVs : 1; // 0x50 (0x4)
	const unsigned long: 0;
	float GoodHostRatio; // 0x54 (0x4)
	struct TArray_FConnectionBandwidthStats BandwidthHistory; // 0x58 (0xC)
	int MinutesSinceLastTest; // 0x64 (0x4)
};

// 0x18 
struct FEventUploadConfig {
	const unsigned char UploadType; // 0x0 (0x1) (Enum = EEventUploadType)
	const unsigned char Unknown1[0x3]; // 0x1 (0x3) > LAST OFFSET
	const struct FString UploadUrl; // 0x4 (0xC)
	const float TimeOut; // 0x10 (0x4)
	const BOOL bUseCompression : 1; // 0x14 (0x4)
	const unsigned long: 0;
};

// 0x28 
struct FNewsCacheEntry {
	const struct FString NewsUrl; // 0x0 (0xC)
	unsigned char ReadState; // 0xC (0x1) (Enum = EOnlineEnumerationReadState)
	const unsigned char NewsType; // 0xD (0x1) (Enum = EOnlineNewsType)
	const unsigned char Unknown1[0x2]; // 0xE (0x2) > LAST OFFSET
	struct FString NewsItem; // 0x10 (0xC)
	const float TimeOut; // 0x1C (0x4)
	const BOOL bIsUnicode : 1; // 0x20 (0x4)
	const unsigned long: 0;
	const struct FPointer HttpDownloader; // 0x24 (0x4)
};

// 0x20 
struct FConfiguredGameSetting {
	int GameSettingId; // 0x0 (0x4)
	struct FString GameSettingsClassName; // 0x4 (0xC)
	struct FString URL; // 0x10 (0xC)
	struct UOnlineGameSettings* GameSettings; // 0x1C (0x4)
};

// 0x14 
struct FInventorySwap {
	struct FName Original; // 0x0 (0x8)
	struct FString SwapTo; // 0x8 (0xC)
};

// 0x70 
struct FPlaylist {
	struct TArray_FConfiguredGameSetting ConfiguredGames; // 0x0 (0xC)
	int PlaylistId; // 0xC (0x4)
	int LoadBalanceId; // 0x10 (0x4)
	struct FString LocalizationString; // 0x14 (0xC)
	struct TArray_int ContentIds; // 0x20 (0xC)
	int TeamSize; // 0x2C (0x4)
	int TeamCount; // 0x30 (0x4)
	int MaxPartySize; // 0x34 (0x4)
	struct FString Name; // 0x38 (0xC)
	struct FString URL; // 0x44 (0xC)
	int MatchType; // 0x50 (0x4)
	BOOL bDisableDedicatedServerSearches : 1; // 0x54 (0x4)
	const unsigned long: 0;
	struct TArray_FName MapCycle; // 0x58 (0xC)
	struct TArray_FInventorySwap InventorySwaps; // 0x64 (0xC)
};

// 0xC 
struct FPlaylistPopulation {
	int PlaylistId; // 0x0 (0x4)
	int WorldwideTotal; // 0x4 (0x4)
	int RegionTotal; // 0x8 (0x4)
};

// 0x20 
struct FTitleFileMcp {
	struct FString Filename; // 0x0 (0xC)
	unsigned char AsyncState; // 0xC (0x1) (Enum = EOnlineEnumerationReadState)
	const unsigned char Unknown1[0x3]; // 0xD (0x3) > LAST OFFSET
	struct TArray_unsigned_char Data; // 0x10 (0xC)
	const struct FPointer HttpDownloader; // 0x1C (0x4)
};

// 0x10 
struct FFileNameToURLMapping {
	struct FName Filename; // 0x0 (0x8)
	struct FName UrlMapping; // 0x8 (0x8)
};

// 0x34 
struct FPlayerReservation {
	struct FUniqueNetId NetId; // 0x0 (0x18)
	int Skill; // 0x18 (0x4)
	int XpLevel; // 0x1C (0x4)
	struct FDouble Mu; // 0x20 (0x8)
	struct FDouble Sigma; // 0x28 (0x8)
	float ElapsedSessionTime; // 0x30 (0x4)
};

// 0x28 
struct FPartyReservation {
	int TeamNum; // 0x0 (0x4)
	struct FUniqueNetId PartyLeader; // 0x4 (0x18)
	struct TArray_FPlayerReservation PartyMembers; // 0x1C (0xC)
};

// 0x20 
struct FClientBeaconConnection {
	struct FUniqueNetId PartyLeader; // 0x0 (0x18)
	float ElapsedHeartbeatTime; // 0x18 (0x4)
	struct FPointer Socket; // 0x1C (0x4)
};

]]