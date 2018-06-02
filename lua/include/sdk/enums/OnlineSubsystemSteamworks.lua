enum.MakeEnum("ESteamMatchmakingType", {
	"SMT_Invalid",
	"SMT_LAN",
	"SMT_Internet",
	"SMT_MAX"
})

enum.MakeEnum("ELeaderboardSortType", {
	"LST_Ascending",
	"LST_Descending",
	"LST_MAX"
})

enum.MakeEnum("ELeaderboardRequestType", {
	"LRT_Global",
	"LRT_Player",
	"LRT_Friends",
	"LRT_MAX"
})

enum.MakeEnum("ELeaderboardFormat", {
	"LF_Number",
	"LF_Seconds",
	"LF_Milliseconds",
	"LF_MAX"
})

enum.MakeEnum("ELeaderboardUpdateType", {
	"LUT_KeepBest",
	"LUT_Force",
	"LUT_MAX"
})

enum.MakeEnum("EQoSState", {
	"EQS_Challenge",
	"EQS_WaitChallenge",
	"EQS_Ping",
	"EQS_WaitPing",
	"EQS_Complete",
	"EQS_Error",
	"EQS_MAX"
})

enum.MakeEnum("EQoSMessage", {
	"EQM_GoAway",
	"EQM_Challenge",
	"EQM_ChallengeResponse",
	"EQM_Ping",
	"EQM_PingResponse",
	"EQM_Finished",
	"EQM_MAX"
})

