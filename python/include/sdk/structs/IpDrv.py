from ctypes import *
import BL2SDK


class FIpAddr(Structure):
    pass


class FConnectionBandwidthStats(Structure):
    pass


class FPlayerMember(Structure):
    pass


class FClientBandwidthTestData(Structure):
    pass


class FClientConnectionRequest(Structure):
    pass


class FClientConnectionBandwidthTestData(Structure):
    pass


class FClientMeshBeaconConnection(Structure):
    pass


class FEventUploadConfig(Structure):
    pass


class FNewsCacheEntry(Structure):
    pass


class FConfiguredGameSetting(Structure):
    pass


class FInventorySwap(Structure):
    pass


class FPlaylist(Structure):
    pass


class FPlaylistPopulation(Structure):
    pass


class FTitleFileMcp(Structure):
    pass


class FFileNameToURLMapping(Structure):
    pass


class FPlayerReservation(Structure):
    pass


class FPartyReservation(Structure):
    pass


class FClientBeaconConnection(Structure):
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
