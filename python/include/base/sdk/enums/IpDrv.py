import BL2SDK

BL2SDK.g_enums["ELinkMode"] = ["MODE_Text", "MODE_Line", "MODE_Binary", "MODE_MAX"]

BL2SDK.g_enums["EReceiveMode"] = ["RMODE_Manual", "RMODE_Event", "RMODE_MAX"]

BL2SDK.g_enums["ELineMode"] = [
    "LMODE_auto",
    "LMODE_DOS",
    "LMODE_UNIX",
    "LMODE_MAC",
    "LMODE_MAX",
]

BL2SDK.g_enums["EMeshBeaconPacketType"] = [
    "MB_Packet_UnknownType",
    "MB_Packet_ClientNewConnectionRequest",
    "MB_Packet_ClientBeginBandwidthTest",
    "MB_Packet_ClientCreateNewSessionResponse",
    "MB_Packet_HostNewConnectionResponse",
    "MB_Packet_HostBandwidthTestRequest",
    "MB_Packet_HostCompletedBandwidthTest",
    "MB_Packet_HostTravelRequest",
    "MB_Packet_HostCreateNewSessionRequest",
    "MB_Packet_DummyData",
    "MB_Packet_Heartbeat",
    "MB_Packet_MAX",
]

BL2SDK.g_enums["EMeshBeaconConnectionResult"] = [
    "MB_ConnectionResult_Succeeded",
    "MB_ConnectionResult_Duplicate",
    "MB_ConnectionResult_Timeout",
    "MB_ConnectionResult_Error",
    "MB_ConnectionResult_MAX",
]

BL2SDK.g_enums["EMeshBeaconBandwidthTestState"] = [
    "MB_BandwidthTestState_NotStarted",
    "MB_BandwidthTestState_RequestPending",
    "MB_BandwidthTestState_StartPending",
    "MB_BandwidthTestState_InProgress",
    "MB_BandwidthTestState_Completed",
    "MB_BandwidthTestState_Incomplete",
    "MB_BandwidthTestState_Timeout",
    "MB_BandwidthTestState_Error",
    "MB_BandwidthTestState_MAX",
]

BL2SDK.g_enums["EMeshBeaconBandwidthTestResult"] = [
    "MB_BandwidthTestResult_Succeeded",
    "MB_BandwidthTestResult_Timeout",
    "MB_BandwidthTestResult_Error",
    "MB_BandwidthTestResult_MAX",
]

BL2SDK.g_enums["EMeshBeaconBandwidthTestType"] = [
    "MB_BandwidthTestType_Upstream",
    "MB_BandwidthTestType_Downstream",
    "MB_BandwidthTestType_RoundtripLatency",
    "MB_BandwidthTestType_MAX",
]

BL2SDK.g_enums["EMeshBeaconClientState"] = [
    "MBCS_None",
    "MBCS_Connecting",
    "MBCS_Connected",
    "MBCS_ConnectionFailed",
    "MBCS_AwaitingResponse",
    "MBCS_Closed",
    "MBCS_MAX",
]

BL2SDK.g_enums["EEventUploadType"] = [
    "EUT_GenericStats",
    "EUT_ProfileData",
    "EUT_MatchmakingData",
    "EUT_PlaylistPopulation",
    "EUT_MAX",
]

BL2SDK.g_enums["EReservationPacketType"] = [
    "RPT_UnknownPacketType",
    "RPT_ClientReservationRequest",
    "RPT_ClientReservationUpdateRequest",
    "RPT_ClientCancellationRequest",
    "RPT_HostReservationResponse",
    "RPT_HostReservationCountUpdate",
    "RPT_HostTravelRequest",
    "RPT_HostIsReady",
    "RPT_HostHasCancelled",
    "RPT_Heartbeat",
    "RPT_MAX",
]

BL2SDK.g_enums["EPartyReservationResult"] = [
    "PRR_GeneralError",
    "PRR_PartyLimitReached",
    "PRR_IncorrectPlayerCount",
    "PRR_RequestTimedOut",
    "PRR_ReservationDuplicate",
    "PRR_ReservationNotFound",
    "PRR_ReservationAccepted",
    "PRR_ReservationDenied",
    "PRR_MAX",
]

BL2SDK.g_enums["EPartyBeaconClientRequest"] = [
    "PBClientRequest_NewReservation",
    "PBClientRequest_UpdateReservation",
    "PBClientRequest_MAX",
]

BL2SDK.g_enums["EPartyBeaconClientState"] = [
    "PBCS_None",
    "PBCS_Connecting",
    "PBCS_Connected",
    "PBCS_ConnectionFailed",
    "PBCS_AwaitingResponse",
    "PBCS_Closed",
    "PBCS_MAX",
]

BL2SDK.g_enums["EPartyBeaconHostState"] = [
    "PBHS_AllowReservations",
    "PBHS_DenyReservations",
    "PBHS_MAX",
]

BL2SDK.g_enums["ELinkState"] = [
    "STATE_Initialized",
    "STATE_Ready",
    "STATE_Listening",
    "STATE_Connecting",
    "STATE_Connected",
    "STATE_ListenClosePending",
    "STATE_ConnectClosePending",
    "STATE_ListenClosing",
    "STATE_ConnectClosing",
    "STATE_MAX",
]

BL2SDK.g_enums["ERequestType"] = ["Request_GET", "Request_POST", "Request_MAX"]
