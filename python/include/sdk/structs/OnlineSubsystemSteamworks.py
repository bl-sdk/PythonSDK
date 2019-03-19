from ctypes import *
import BL2SDK


class FServerQueryToRulesResponseMapping(Structure):
    pass


class FServerQueryToPingResponseMapping(Structure):
    pass


class FClientFilterORClause(Structure):
    pass


class FFilterKeyToSteamKeyMapping(Structure):
    pass


class FLeaderboardHandle(Structure):
    pass


class FLeaderboardTemplate(Structure):
    pass


class FDeferredLeaderboardRead(Structure):
    pass


class FDeferredLeaderboardWrite(Structure):
    pass


class FLeaderboardEntry(Structure):
    pass


class FViewIdToLeaderboardName(Structure):
    pass


class FSteamPlayerClanData(Structure):
    pass


class FMarketplaceListCache(Structure):
    pass


class FMarketplaceOfferData(Structure):
    pass


class FProfileSettingsCache(Structure):
    pass


class FDeviceIdCache(Structure):
    pass


class FAchievementProgressStat(Structure):
    pass


class FAchievementMappingInfo(Structure):
    pass


class FQueuedAvatarRequest(Structure):
    pass


class FTitleFileMapping(Structure):
    pass


class FControllerConnectionState(Structure):
    pass


class FOnlineStatusContextMapping(Structure):
    pass


class FOnlineStatusPropertyMapping(Structure):
    pass


class FOnlineStatusMapping(Structure):
    pass


class FPropertyToColumn(Structure):
    pass


class FPlayerStat(Structure):
    pass


class FPendingPlayerStats(Structure):
    pass


class FListenEntry(Structure):
    pass


class FQoSResults(Structure):
    pass


class FRequestEntry(Structure):
    pass


class FPendingEntry(Structure):
    pass


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
