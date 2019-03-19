from ctypes import *
import BL2SDK


class FIpAddr(Structure):
    pass


class TArray_FIpAddr(Structure):
    _fields_ = [("Data", POINTER(FIpAddr)), ("Count", c_int), ("Max", c_int)]


class FConnectionBandwidthStats(Structure):
    pass


class TArray_FConnectionBandwidthStats(Structure):
    _fields_ = [
        ("Data", POINTER(FConnectionBandwidthStats)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerMember(Structure):
    pass


class TArray_FPlayerMember(Structure):
    _fields_ = [("Data", POINTER(FPlayerMember)), ("Count", c_int), ("Max", c_int)]


class FClientBandwidthTestData(Structure):
    pass


class FClientConnectionRequest(Structure):
    pass


class FClientConnectionBandwidthTestData(Structure):
    pass


class FClientMeshBeaconConnection(Structure):
    pass


class TArray_FClientMeshBeaconConnection(Structure):
    _fields_ = [
        ("Data", POINTER(FClientMeshBeaconConnection)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FEventUploadConfig(Structure):
    pass


class TArray_FEventUploadConfig(Structure):
    _fields_ = [("Data", POINTER(FEventUploadConfig)), ("Count", c_int), ("Max", c_int)]


class FNewsCacheEntry(Structure):
    pass


class TArray_FNewsCacheEntry(Structure):
    _fields_ = [("Data", POINTER(FNewsCacheEntry)), ("Count", c_int), ("Max", c_int)]


class FConfiguredGameSetting(Structure):
    pass


class TArray_FConfiguredGameSetting(Structure):
    _fields_ = [
        ("Data", POINTER(FConfiguredGameSetting)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FInventorySwap(Structure):
    pass


class TArray_FInventorySwap(Structure):
    _fields_ = [("Data", POINTER(FInventorySwap)), ("Count", c_int), ("Max", c_int)]


class FPlaylist(Structure):
    pass


class TArray_FPlaylist(Structure):
    _fields_ = [("Data", POINTER(FPlaylist)), ("Count", c_int), ("Max", c_int)]


class FPlaylistPopulation(Structure):
    pass


class TArray_FPlaylistPopulation(Structure):
    _fields_ = [
        ("Data", POINTER(FPlaylistPopulation)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FTitleFileMcp(Structure):
    pass


class TArray_FTitleFileMcp(Structure):
    _fields_ = [("Data", POINTER(FTitleFileMcp)), ("Count", c_int), ("Max", c_int)]


class FFileNameToURLMapping(Structure):
    pass


class TArray_FFileNameToURLMapping(Structure):
    _fields_ = [
        ("Data", POINTER(FFileNameToURLMapping)),
        ("Count", c_int),
        ("Max", c_int),
    ]


class FPlayerReservation(Structure):
    pass


class TArray_FPlayerReservation(Structure):
    _fields_ = [("Data", POINTER(FPlayerReservation)), ("Count", c_int), ("Max", c_int)]


class FPartyReservation(Structure):
    pass


class TArray_FPartyReservation(Structure):
    _fields_ = [("Data", POINTER(FPartyReservation)), ("Count", c_int), ("Max", c_int)]


class FClientBeaconConnection(Structure):
    pass


class TArray_FClientBeaconConnection(Structure):
    _fields_ = [
        ("Data", POINTER(FClientBeaconConnection)),
        ("Count", c_int),
        ("Max", c_int),
    ]


from ..TArrayTypes import *
from ..structs.Base import *
from ..structs.Core import *
from ..structs.Engine import *
from ..structs.GameFramework import *
from ..structs.GFxUI import *
from ..structs.GearboxFramework import *
from ..structs.WillowGame import *
from ..structs.AkAudio import *

from ..classes.Base import *
from ..classes.Core import *
from ..classes.Engine import *
from ..classes.GameFramework import *
from ..classes.GFxUI import *
from ..classes.GearboxFramework import *
from ..classes.WillowGame import *
from ..classes.AkAudio import *
from ..classes.IpDrv import *


def init():

    FIpAddr._fields_ = [("Addr", c_int), ("Port", c_int)]

    FConnectionBandwidthStats._fields_ = [
        ("UpstreamRate", c_int),
        ("DownstreamRate", c_int),
        ("RoundtripLatency", c_int),
    ]

    FPlayerMember._fields_ = [
        ("TeamNum", c_int),
        ("Skill", c_int),
        ("NetId", FUniqueNetId),
    ]

    FClientBandwidthTestData._fields_ = [
        ("TestType", c_ubyte),
        ("CurrentState", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("NumBytesToSendTotal", c_int),
        ("NumBytesSentTotal", c_int),
        ("NumBytesSentLast", c_int),
        ("ElapsedTestTime", c_float),
    ]

    FClientConnectionRequest._fields_ = [
        ("PlayerNetId", FUniqueNetId),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bCanHostVs", c_bool, 1),
        ("GoodHostRatio", c_float),
        ("BandwidthHistory", TArray_FConnectionBandwidthStats),
        ("MinutesSinceLastTest", c_int),
    ]

    FClientConnectionBandwidthTestData._fields_ = [
        ("CurrentState", c_ubyte),
        ("TestType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("BytesTotalNeeded", c_int),
        ("BytesReceived", c_int),
        ("RequestTestStartTime", FDouble),
        ("TestStartTime", FDouble),
        ("BandwidthStats", FConnectionBandwidthStats),
    ]

    FClientMeshBeaconConnection._fields_ = [
        ("PlayerNetId", FUniqueNetId),
        ("ElapsedHeartbeatTime", c_float),
        ("Socket", FPointer),
        ("bConnectionAccepted", c_bool, 1),
        ("BandwidthTest", FClientConnectionBandwidthTestData),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("bCanHostVs", c_bool, 1),
        ("GoodHostRatio", c_float),
        ("BandwidthHistory", TArray_FConnectionBandwidthStats),
        ("MinutesSinceLastTest", c_int),
    ]

    FEventUploadConfig._fields_ = [
        ("UploadType", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("UploadUrl", FString),
        ("TimeOut", c_float),
        ("bUseCompression", c_bool, 1),
    ]

    FNewsCacheEntry._fields_ = [
        ("NewsUrl", FString),
        ("ReadState", c_ubyte),
        ("NewsType", c_ubyte),
        ("Unknown1", c_ubyte * 0x2),
        ("NewsItem", FString),
        ("TimeOut", c_float),
        ("bIsUnicode", c_bool, 1),
        ("HttpDownloader", FPointer),
    ]

    FConfiguredGameSetting._fields_ = [
        ("GameSettingId", c_int),
        ("GameSettingsClassName", FString),
        ("URL", FString),
        ("GameSettings", POINTER(UOnlineGameSettings)),
    ]

    FInventorySwap._fields_ = [("Original", FName), ("SwapTo", FString)]

    FPlaylist._fields_ = [
        ("ConfiguredGames", TArray_FConfiguredGameSetting),
        ("PlaylistId", c_int),
        ("LoadBalanceId", c_int),
        ("LocalizationString", FString),
        ("ContentIds", TArray_int),
        ("TeamSize", c_int),
        ("TeamCount", c_int),
        ("MaxPartySize", c_int),
        ("Name", FString),
        ("URL", FString),
        ("MatchType", c_int),
        ("bDisableDedicatedServerSearches", c_bool, 1),
        ("MapCycle", TArray_FName),
        ("InventorySwaps", TArray_FInventorySwap),
    ]

    FPlaylistPopulation._fields_ = [
        ("PlaylistId", c_int),
        ("WorldwideTotal", c_int),
        ("RegionTotal", c_int),
    ]

    FTitleFileMcp._fields_ = [
        ("Filename", FString),
        ("AsyncState", c_ubyte),
        ("Unknown1", c_ubyte * 0x3),
        ("Data", TArray_unsigned_char),
        ("HttpDownloader", FPointer),
    ]

    FFileNameToURLMapping._fields_ = [("Filename", FName), ("UrlMapping", FName)]

    FPlayerReservation._fields_ = [
        ("NetId", FUniqueNetId),
        ("Skill", c_int),
        ("XpLevel", c_int),
        ("Mu", FDouble),
        ("Sigma", FDouble),
        ("ElapsedSessionTime", c_float),
    ]

    FPartyReservation._fields_ = [
        ("TeamNum", c_int),
        ("PartyLeader", FUniqueNetId),
        ("PartyMembers", TArray_FPlayerReservation),
    ]

    FClientBeaconConnection._fields_ = [
        ("PartyLeader", FUniqueNetId),
        ("ElapsedHeartbeatTime", c_float),
        ("Socket", FPointer),
    ]
