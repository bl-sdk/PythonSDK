enum.MakeEnum("ELinkMode", {
	"MODE_Text",
	"MODE_Line",
	"MODE_Binary",
	"MODE_MAX"
})

enum.MakeEnum("EReceiveMode", {
	"RMODE_Manual",
	"RMODE_Event",
	"RMODE_MAX"
})

enum.MakeEnum("ELineMode", {
	"LMODE_auto",
	"LMODE_DOS",
	"LMODE_UNIX",
	"LMODE_MAC",
	"LMODE_MAX"
})

enum.MakeEnum("EMeshBeaconPacketType", {
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
	"MB_Packet_MAX"
})

enum.MakeEnum("EMeshBeaconConnectionResult", {
	"MB_ConnectionResult_Succeeded",
	"MB_ConnectionResult_Duplicate",
	"MB_ConnectionResult_Timeout",
	"MB_ConnectionResult_Error",
	"MB_ConnectionResult_MAX"
})

enum.MakeEnum("EMeshBeaconBandwidthTestState", {
	"MB_BandwidthTestState_NotStarted",
	"MB_BandwidthTestState_RequestPending",
	"MB_BandwidthTestState_StartPending",
	"MB_BandwidthTestState_InProgress",
	"MB_BandwidthTestState_Completed",
	"MB_BandwidthTestState_Incomplete",
	"MB_BandwidthTestState_Timeout",
	"MB_BandwidthTestState_Error",
	"MB_BandwidthTestState_MAX"
})

enum.MakeEnum("EMeshBeaconBandwidthTestResult", {
	"MB_BandwidthTestResult_Succeeded",
	"MB_BandwidthTestResult_Timeout",
	"MB_BandwidthTestResult_Error",
	"MB_BandwidthTestResult_MAX"
})

enum.MakeEnum("EMeshBeaconBandwidthTestType", {
	"MB_BandwidthTestType_Upstream",
	"MB_BandwidthTestType_Downstream",
	"MB_BandwidthTestType_RoundtripLatency",
	"MB_BandwidthTestType_MAX"
})

enum.MakeEnum("EMeshBeaconClientState", {
	"MBCS_None",
	"MBCS_Connecting",
	"MBCS_Connected",
	"MBCS_ConnectionFailed",
	"MBCS_AwaitingResponse",
	"MBCS_Closed",
	"MBCS_MAX"
})

enum.MakeEnum("EEventUploadType", {
	"EUT_GenericStats",
	"EUT_ProfileData",
	"EUT_MatchmakingData",
	"EUT_PlaylistPopulation",
	"EUT_MAX"
})

enum.MakeEnum("EReservationPacketType", {
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
	"RPT_MAX"
})

enum.MakeEnum("EPartyReservationResult", {
	"PRR_GeneralError",
	"PRR_PartyLimitReached",
	"PRR_IncorrectPlayerCount",
	"PRR_RequestTimedOut",
	"PRR_ReservationDuplicate",
	"PRR_ReservationNotFound",
	"PRR_ReservationAccepted",
	"PRR_ReservationDenied",
	"PRR_MAX"
})

enum.MakeEnum("EPartyBeaconClientRequest", {
	"PBClientRequest_NewReservation",
	"PBClientRequest_UpdateReservation",
	"PBClientRequest_MAX"
})

enum.MakeEnum("EPartyBeaconClientState", {
	"PBCS_None",
	"PBCS_Connecting",
	"PBCS_Connected",
	"PBCS_ConnectionFailed",
	"PBCS_AwaitingResponse",
	"PBCS_Closed",
	"PBCS_MAX"
})

enum.MakeEnum("EPartyBeaconHostState", {
	"PBHS_AllowReservations",
	"PBHS_DenyReservations",
	"PBHS_MAX"
})

enum.MakeEnum("ELinkState", {
	"STATE_Initialized",
	"STATE_Ready",
	"STATE_Listening",
	"STATE_Connecting",
	"STATE_Connected",
	"STATE_ListenClosePending",
	"STATE_ConnectClosePending",
	"STATE_ListenClosing",
	"STATE_ConnectClosing",
	"STATE_MAX"
})

enum.MakeEnum("ERequestType", {
	"Request_GET",
	"Request_POST",
	"Request_MAX"
})

