from ctypes import *
import BL2SDK


class FServerQueryToRulesResponseMapping(Structure):
    _fields_ = [("Query", c_int), ("Response", FPointer)]


class FServerQueryToPingResponseMapping(Structure):
    _fields_ = [("Query", c_int), ("Response", FPointer)]


class FClientFilterORClause(Structure):
    _fields_ = [("OrParams", FMultiMap_Mirror)]


class FFilterKeyToSteamKeyMapping(Structure):
    _fields_ = [
        ("KeyId", c_int),
        ("KeyType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("RawKey", FString),
        ("SteamKey", FString),
        ("bReverseFilter", c_bool, 1),
        ("", c_ulong, 0),
        ("IgnoreValue", FString),
    ]


class FLeaderboardHandle(Structure):
    _fields_ = [("Dud", FQWord)]


class FLeaderboardTemplate(Structure):
    _fields_ = [
        ("LeaderboardName", FString),
        ("UpdateType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("LeaderboardSize", int),
        ("SortType", c_ubyte),
        ("DisplayFormat", c_ubyte),
        ("Unknown2", c_ubyte, 0x2),
        ("LeaderboardRef", FLeaderboardHandle),
        ("bLeaderboardInitializing", c_bool, 1),
        ("bLeaderboardInitiated", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FDeferredLeaderboardRead(Structure):
    _fields_ = [
        ("LeaderboardName", FString),
        ("RequestType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Start", c_int),
        ("End", c_int),
    ]


class FDeferredLeaderboardWrite(Structure):
    _fields_ = [("LeaderboardName", FString), ("Score", c_int)]


class FLeaderboardEntry(Structure):
    _fields_ = [("PlayerUID", FUniqueNetId), ("Rank", c_int), ("Score", c_int)]


class FViewIdToLeaderboardName(Structure):
    _fields_ = [("ViewId", c_int), ("LeaderboardName", FString)]


class FSteamPlayerClanData(Structure):
    _fields_ = [("ClanName", FString), ("ClanTag", FString)]


class FMarketplaceListCache(Structure):
    _fields_ = [
        ("Content", TArray_FMarketplaceContent),
        ("ReadState", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ReadCompleteDelegates", TArray_FScriptDelegate),
    ]


class FMarketplaceOfferData(Structure):
    _fields_ = [("OfferId", c_int), ("Category", c_int), ("SellTextLocKey", FString)]


class FProfileSettingsCache(Structure):
    _fields_ = [
        ("Profile", POINTER(UOnlineProfileSettings)),
        ("ReadDelegates", TArray_FScriptDelegate),
        ("WriteDelegates", TArray_FScriptDelegate),
        ("ProfileDataChangedDelegates", TArray_FScriptDelegate),
    ]


class FDeviceIdCache(Structure):
    _fields_ = [
        ("DeviceID", c_int),
        ("DeviceSelectionMulticast", FScriptDelegate),
        ("DeviceSelectionDelegates", TArray_FScriptDelegate),
    ]


class FAchievementProgressStat(Structure):
    _fields_ = [
        ("AchievementId", c_int),
        ("Progress", c_int),
        ("MaxProgress", c_int),
        ("bUnlock", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FAchievementMappingInfo(Structure):
    _fields_ = [
        ("AchievementId", c_int),
        ("AchievementName", FName),
        ("ViewId", c_int),
        ("ProgressCount", c_int),
        ("MaxProgress", c_int),
        ("bAutoUnlock", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FQueuedAvatarRequest(Structure):
    _fields_ = [
        ("CheckTime", c_float),
        ("NumberOfAttempts", int),
        ("PlayerNetId", FUniqueNetId),
        ("Size", int),
        ("ReadOnlineAvatarCompleteDelegate", FScriptDelegate),
    ]


class FTitleFileMapping(Structure):
    _fields_ = [("Filename", FString), ("UGCHandle", FString)]


class FControllerConnectionState(Structure):
    _fields_ = [("bIsControllerConnected", int), ("bLastIsControllerConnected", int)]


class FOnlineStatusContextMapping(Structure):
    _fields_ = [("KeyString", FString), ("ContextId", c_int)]


class FOnlineStatusPropertyMapping(Structure):
    _fields_ = [("KeyString", FString), ("PropertyId", c_int), ("EncodeId", c_int)]


class FOnlineStatusMapping(Structure):
    _fields_ = [("StatusId", c_int), ("StatusString", FString)]


class FPropertyToColumn(Structure):
    _fields_ = [("PropertyId", c_int), ("ColumnId", c_int)]


class FPlayerStat(Structure):
    _fields_ = [("ViewId", c_int), ("PropertyId", c_int), ("Data", FSettingsData)]


class FPendingPlayerStats(Structure):
    _fields_ = [
        ("Player", FUniqueNetId),
        ("PlayerName", FString),
        ("StatGuid", FString),
        ("Stats", TArray_FPlayerStat),
        ("Score", FOnlinePlayerScore),
        ("Place", FString),
    ]


class FListenEntry(Structure):
    _fields_ = [
        ("RemoteId", FQWord),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("ActiveTimestamp", FDouble),
    ]


class FQoSResults(Structure):
    _fields_ = [("PingTimes", TArray_FDouble), ("PingInMs", c_int)]


class FRequestEntry(Structure):
    _fields_ = [
        ("RemoteId", FQWord),
        ("NumProbesSent", c_int),
        ("ChallengeTimestamp", FDouble),
        ("PingTimestamp", FDouble),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Results", FQoSResults),
        ("CallbackFunc", FPointer),
        ("UserData", FPointer),
    ]


class FPendingEntry(Structure):
    _fields_ = [
        ("RemoteId", FQWord),
        ("CallbackFunc", FPointer),
        ("UserData", FPointer),
    ]
