import BL2SDK

BL2SDK.g_enums["ESteamMatchmakingType"] = [
    "SMT_Invalid",
    "SMT_LAN",
    "SMT_Internet",
    "SMT_MAX",
]

BL2SDK.g_enums["ELeaderboardSortType"] = ["LST_Ascending", "LST_Descending", "LST_MAX"]

BL2SDK.g_enums["ELeaderboardRequestType"] = [
    "LRT_Global",
    "LRT_Player",
    "LRT_Friends",
    "LRT_MAX",
]

BL2SDK.g_enums["ELeaderboardFormat"] = [
    "LF_Number",
    "LF_Seconds",
    "LF_Milliseconds",
    "LF_MAX",
]

BL2SDK.g_enums["ELeaderboardUpdateType"] = ["LUT_KeepBest", "LUT_Force", "LUT_MAX"]

BL2SDK.g_enums["EQoSState"] = [
    "EQS_Challenge",
    "EQS_WaitChallenge",
    "EQS_Ping",
    "EQS_WaitPing",
    "EQS_Complete",
    "EQS_Error",
    "EQS_MAX",
]

BL2SDK.g_enums["EQoSMessage"] = [
    "EQM_GoAway",
    "EQM_Challenge",
    "EQM_ChallengeResponse",
    "EQM_Ping",
    "EQM_PingResponse",
    "EQM_Finished",
    "EQM_MAX",
]
