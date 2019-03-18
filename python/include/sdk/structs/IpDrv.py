from ctypes import *
import BL2SDK


class FIpAddr(Structure):
    _fields_ = [("Addr", c_int), ("Port", c_int)]


class FConnectionBandwidthStats(Structure):
    _fields_ = [
        ("UpstreamRate", c_int),
        ("DownstreamRate", c_int),
        ("RoundtripLatency", c_int),
    ]


class FPlayerMember(Structure):
    _fields_ = [("TeamNum", c_int), ("Skill", c_int), ("NetId", FUniqueNetId)]


class FClientBandwidthTestData(Structure):
    _fields_ = [
        ("TestType", c_ubyte),
        ("CurrentState", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("NumBytesToSendTotal", c_int),
        ("NumBytesSentTotal", c_int),
        ("NumBytesSentLast", c_int),
        ("ElapsedTestTime", c_float),
    ]


class FClientConnectionRequest(Structure):
    _fields_ = [
        ("PlayerNetId", FUniqueNetId),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bCanHostVs", c_bool, 1),
        ("", c_ulong, 0),
        ("GoodHostRatio", c_float),
        ("BandwidthHistory", TArray_FConnectionBandwidthStats),
        ("MinutesSinceLastTest", c_int),
    ]


class FClientConnectionBandwidthTestData(Structure):
    _fields_ = [
        ("CurrentState", c_ubyte),
        ("TestType", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("BytesTotalNeeded", c_int),
        ("BytesReceived", c_int),
        ("RequestTestStartTime", FDouble),
        ("TestStartTime", FDouble),
        ("BandwidthStats", FConnectionBandwidthStats),
    ]


class FClientMeshBeaconConnection(Structure):
    _fields_ = [
        ("PlayerNetId", FUniqueNetId),
        ("ElapsedHeartbeatTime", c_float),
        ("Socket", FPointer),
        ("bConnectionAccepted", c_bool, 1),
        ("", c_ulong, 0),
        ("BandwidthTest", FClientConnectionBandwidthTestData),
        ("NatType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("bCanHostVs", c_bool, 1),
        ("", c_ulong, 0),
        ("GoodHostRatio", c_float),
        ("BandwidthHistory", TArray_FConnectionBandwidthStats),
        ("MinutesSinceLastTest", c_int),
    ]


class FEventUploadConfig(Structure):
    _fields_ = [
        ("UploadType", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("UploadUrl", FString),
        ("TimeOut", c_float),
        ("bUseCompression", c_bool, 1),
        ("", c_ulong, 0),
    ]


class FNewsCacheEntry(Structure):
    _fields_ = [
        ("NewsUrl", FString),
        ("ReadState", c_ubyte),
        ("NewsType", c_ubyte),
        ("Unknown1", c_ubyte, 0x2),
        ("NewsItem", FString),
        ("TimeOut", c_float),
        ("bIsUnicode", c_bool, 1),
        ("", c_ulong, 0),
        ("HttpDownloader", FPointer),
    ]


class FConfiguredGameSetting(Structure):
    _fields_ = [
        ("GameSettingId", c_int),
        ("GameSettingsClassName", FString),
        ("URL", FString),
        ("GameSettings", POINTER(UOnlineGameSettings)),
    ]


class FInventorySwap(Structure):
    _fields_ = [("Original", FName), ("SwapTo", FString)]


class FPlaylist(Structure):
    _fields_ = [
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
        ("", c_ulong, 0),
        ("MapCycle", TArray_FName),
        ("InventorySwaps", TArray_FInventorySwap),
    ]


class FPlaylistPopulation(Structure):
    _fields_ = [
        ("PlaylistId", c_int),
        ("WorldwideTotal", c_int),
        ("RegionTotal", c_int),
    ]


class FTitleFileMcp(Structure):
    _fields_ = [
        ("Filename", FString),
        ("AsyncState", c_ubyte),
        ("Unknown1", c_ubyte, 0x3),
        ("Data", TArray_unsigned_char),
        ("HttpDownloader", FPointer),
    ]


class FFileNameToURLMapping(Structure):
    _fields_ = [("Filename", FName), ("UrlMapping", FName)]


class FPlayerReservation(Structure):
    _fields_ = [
        ("NetId", FUniqueNetId),
        ("Skill", c_int),
        ("XpLevel", c_int),
        ("Mu", FDouble),
        ("Sigma", FDouble),
        ("ElapsedSessionTime", c_float),
    ]


class FPartyReservation(Structure):
    _fields_ = [
        ("TeamNum", c_int),
        ("PartyLeader", FUniqueNetId),
        ("PartyMembers", TArray_FPlayerReservation),
    ]


class FClientBeaconConnection(Structure):
    _fields_ = [
        ("PartyLeader", FUniqueNetId),
        ("ElapsedHeartbeatTime", c_float),
        ("Socket", FPointer),
    ]
