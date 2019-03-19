from ctypes import *
import BL2SDK


class FServerQueryToRulesResponseMapping(Structure):
    pass


class TArray_FServerQueryToRulesResponseMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FServerQueryToRulesResponseMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FServerQueryToPingResponseMapping(Structure):
    pass


class TArray_FServerQueryToPingResponseMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FServerQueryToPingResponseMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FClientFilterORClause(Structure):
    pass


class TArray_FClientFilterORClause(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FClientFilterORClause)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FFilterKeyToSteamKeyMapping(Structure):
    pass


class TArray_FFilterKeyToSteamKeyMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FFilterKeyToSteamKeyMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLeaderboardHandle(Structure):
    pass


class FLeaderboardTemplate(Structure):
    pass


class TArray_FLeaderboardTemplate(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FLeaderboardTemplate)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDeferredLeaderboardRead(Structure):
    pass


class TArray_FDeferredLeaderboardRead(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDeferredLeaderboardRead)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FDeferredLeaderboardWrite(Structure):
    pass


class TArray_FDeferredLeaderboardWrite(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FDeferredLeaderboardWrite)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FLeaderboardEntry(Structure):
    pass


class TArray_FLeaderboardEntry(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FLeaderboardEntry)), ("Count", c_int), ("Max", c_int)]


class FViewIdToLeaderboardName(Structure):
    pass


class TArray_FViewIdToLeaderboardName(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FViewIdToLeaderboardName)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FSteamPlayerClanData(Structure):
    pass


class TArray_FSteamPlayerClanData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FSteamPlayerClanData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FMarketplaceListCache(Structure):
    pass


class FMarketplaceOfferData(Structure):
    pass


class TArray_FMarketplaceOfferData(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FMarketplaceOfferData)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FProfileSettingsCache(Structure):
    pass


class FDeviceIdCache(Structure):
    pass


class FAchievementProgressStat(Structure):
    pass


class TArray_FAchievementProgressStat(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAchievementProgressStat)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FAchievementMappingInfo(Structure):
    pass


class TArray_FAchievementMappingInfo(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FAchievementMappingInfo)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FQueuedAvatarRequest(Structure):
    pass


class TArray_FQueuedAvatarRequest(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FQueuedAvatarRequest)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTitleFileMapping(Structure):
    pass


class TArray_FTitleFileMapping(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FTitleFileMapping)), ("Count", c_int), ("Max", c_int)]


class FControllerConnectionState(Structure):
    pass


class FOnlineStatusContextMapping(Structure):
    pass


class TArray_FOnlineStatusContextMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FOnlineStatusContextMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FOnlineStatusPropertyMapping(Structure):
    pass


class TArray_FOnlineStatusPropertyMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FOnlineStatusPropertyMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FOnlineStatusMapping(Structure):
    pass


class TArray_FOnlineStatusMapping(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FOnlineStatusMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPropertyToColumn(Structure):
    pass


class TArray_FPropertyToColumn(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPropertyToColumn)), ("Count", c_int), ("Max", c_int)]


class FPlayerStat(Structure):
    pass


class TArray_FPlayerStat(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPlayerStat)), ("Count", c_int), ("Max", c_int)]


class FPendingPlayerStats(Structure):
    pass


class TArray_FPendingPlayerStats(BL2SDK.TArray_Base):
    _fields_ = [
        ("Data", POINTER(FPendingPlayerStats)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FListenEntry(Structure):
    pass


class FQoSResults(Structure):
    pass


class FRequestEntry(Structure):
    pass


class FPendingEntry(Structure):
    pass


class TArray_FPendingEntry(BL2SDK.TArray_Base):
    _fields_ = [("Data", POINTER(FPendingEntry)), ("Count", c_int), ("Max", c_int)]


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *
from ..structs.GearboxFramework import *
from ..structs.WillowGame import *
from ..structs.AkAudio import *
from ..structs.IpDrv import *
from ..structs.WinDrv import *
from ..structs.XAudio2 import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *
from ..classes.AkAudio import *
from ..classes.IpDrv import *
from ..classes.WinDrv import *
from ..classes.XAudio2 import *
from ..classes.OnlineSubsystemSteamworks import *


def init():

    FServerQueryToRulesResponseMapping._fields_ = [
        ("Query", c_int),
        ("Response", FPointer),
    ]

    FServerQueryToPingResponseMapping._fields_ = [
        ("Query", c_int),
        ("Response", FPointer),
    ]

    FClientFilterORClause._fields_ = [("OrParams", FMultiMap_Mirror)]

    FFilterKeyToSteamKeyMapping._fields_ = [
        ("KeyId", c_int),
        ("KeyType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("RawKey", FString),
        ("SteamKey", FString),
        ("bReverseFilter", c_bool, 1),
        ("IgnoreValue", FString),
    ]

    FLeaderboardHandle._fields_ = [("Dud", FQWord)]

    FLeaderboardTemplate._fields_ = [
        ("LeaderboardName", FString),
        ("UpdateType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("LeaderboardSize", c_int),
        ("SortType", c_ubyte),
        ("DisplayFormat", c_ubyte),
        ("Unknown2", c_ubyte * 0x2),
        ("LeaderboardRef", FLeaderboardHandle),
        ("bLeaderboardInitializing", c_bool, 1),
        ("bLeaderboardInitiated", c_bool, 1),
    ]

    FDeferredLeaderboardRead._fields_ = [
        ("LeaderboardName", FString),
        ("RequestType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Start", c_int),
        ("End", c_int),
    ]

    FDeferredLeaderboardWrite._fields_ = [
        ("LeaderboardName", FString),
        ("Score", c_int),
    ]

    FLeaderboardEntry._fields_ = [
        ("PlayerUID", FUniqueNetId),
        ("Rank", c_int),
        ("Score", c_int),
    ]

    FViewIdToLeaderboardName._fields_ = [
        ("ViewId", c_int),
        ("LeaderboardName", FString),
    ]

    FSteamPlayerClanData._fields_ = [("ClanName", FString), ("ClanTag", FString)]

    FMarketplaceListCache._fields_ = [
        ("Content", TArray_FMarketplaceContent),
        ("ReadState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ReadCompleteDelegates", TArray_FScriptDelegate),
    ]

    FMarketplaceOfferData._fields_ = [
        ("OfferId", c_int),
        ("Category", c_int),
        ("SellTextLocKey", FString),
    ]

    FProfileSettingsCache._fields_ = [
        ("Profile", POINTER(UOnlineProfileSettings)),
        ("ReadDelegates", TArray_FScriptDelegate),
        ("WriteDelegates", TArray_FScriptDelegate),
        ("ProfileDataChangedDelegates", TArray_FScriptDelegate),
    ]

    FDeviceIdCache._fields_ = [
        ("DeviceID", c_int),
        ("DeviceSelectionMulticast", FScriptDelegate),
        ("DeviceSelectionDelegates", TArray_FScriptDelegate),
    ]

    FAchievementProgressStat._fields_ = [
        ("AchievementId", c_int),
        ("Progress", c_int),
        ("MaxProgress", c_int),
        ("bUnlock", c_bool, 1),
    ]

    FAchievementMappingInfo._fields_ = [
        ("AchievementId", c_int),
        ("AchievementName", FName),
        ("ViewId", c_int),
        ("ProgressCount", c_int),
        ("MaxProgress", c_int),
        ("bAutoUnlock", c_bool, 1),
    ]

    FQueuedAvatarRequest._fields_ = [
        ("CheckTime", c_float),
        ("NumberOfAttempts", c_int),
        ("PlayerNetId", FUniqueNetId),
        ("Size", c_int),
        ("ReadOnlineAvatarCompleteDelegate", FScriptDelegate),
    ]

    FTitleFileMapping._fields_ = [("Filename", FString), ("UGCHandle", FString)]

    FControllerConnectionState._fields_ = [
        ("bIsControllerConnected", c_int),
        ("bLastIsControllerConnected", c_int),
    ]

    FOnlineStatusContextMapping._fields_ = [
        ("KeyString", FString),
        ("ContextId", c_int),
    ]

    FOnlineStatusPropertyMapping._fields_ = [
        ("KeyString", FString),
        ("PropertyId", c_int),
        ("EncodeId", c_int),
    ]

    FOnlineStatusMapping._fields_ = [("StatusId", c_int), ("StatusString", FString)]

    FPropertyToColumn._fields_ = [("PropertyId", c_int), ("ColumnId", c_int)]

    FPlayerStat._fields_ = [
        ("ViewId", c_int),
        ("PropertyId", c_int),
        ("Data", FSettingsData),
    ]

    FPendingPlayerStats._fields_ = [
        ("Player", FUniqueNetId),
        ("PlayerName", FString),
        ("StatGuid", FString),
        ("Stats", TArray_FPlayerStat),
        ("Score", FOnlinePlayerScore),
        ("Place", FString),
    ]

    FListenEntry._fields_ = [
        ("RemoteId", FQWord),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("ActiveTimestamp", FDouble),
    ]

    FQoSResults._fields_ = [("PingTimes", TArray_FDouble), ("PingInMs", c_int)]

    FRequestEntry._fields_ = [
        ("RemoteId", FQWord),
        ("NumProbesSent", c_int),
        ("ChallengeTimestamp", FDouble),
        ("PingTimestamp", FDouble),
        ("Status", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Results", FQoSResults),
        ("CallbackFunc", FPointer),
        ("UserData", FPointer),
    ]

    FPendingEntry._fields_ = [
        ("RemoteId", FQWord),
        ("CallbackFunc", FPointer),
        ("UserData", FPointer),
    ]
