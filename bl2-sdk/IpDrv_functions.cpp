// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function IpDrv.InternetLink.ResolveFailed
// (Event, Public)

void AInternetLink::ResolveFailed()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.ResolveFailed");

	AInternetLink_ResolveFailed_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.Resolved
// (Event, Public)
// Parameters:
// struct FIpAddr                 Addr                           (Parm)

void AInternetLink::Resolved(const struct FIpAddr& Addr)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.Resolved");

	AInternetLink_Resolved_Params params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.GetLocalIP
// (Native, Public, HasOutparams)
// Parameters:
// struct FIpAddr                 Arg                            (Parm, OutParm)

void AInternetLink::GetLocalIP(struct FIpAddr* Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.GetLocalIP");

	AInternetLink_GetLocalIP_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Arg != nullptr)
		*Arg = params.Arg;
}


// Function IpDrv.InternetLink.StringToIpAddr
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 Str                            (Parm, NeedCtorLink)
// struct FIpAddr                 Addr                           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AInternetLink::StringToIpAddr(const struct FString& Str, struct FIpAddr* Addr)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.StringToIpAddr");

	AInternetLink_StringToIpAddr_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Addr != nullptr)
		*Addr = params.Addr;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.IpAddrToString
// (Native, Public)
// Parameters:
// struct FIpAddr                 Arg                            (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString AInternetLink::IpAddrToString(const struct FIpAddr& Arg)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.IpAddrToString");

	AInternetLink_IpAddrToString_Params params;
	params.Arg = Arg;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.GetLastError
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int AInternetLink::GetLastError()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.GetLastError");

	AInternetLink_GetLastError_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.Resolve
// (Native, Public)
// Parameters:
// struct FString                 Domain                         (Parm, CoerceParm, NeedCtorLink)

void AInternetLink::Resolve(const struct FString& Domain)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.Resolve");

	AInternetLink_Resolve_Params params;
	params.Domain = Domain;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.InternetLink.ParseURL
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 URL                            (Parm, CoerceParm, NeedCtorLink)
// struct FString                 Addr                           (Parm, OutParm, NeedCtorLink)
// int                            PortNum                        (Parm, OutParm)
// struct FString                 LevelName                      (Parm, OutParm, NeedCtorLink)
// struct FString                 EntryName                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AInternetLink::ParseURL(const struct FString& URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.ParseURL");

	AInternetLink_ParseURL_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Addr != nullptr)
		*Addr = params.Addr;
	if (PortNum != nullptr)
		*PortNum = params.PortNum;
	if (LevelName != nullptr)
		*LevelName = params.LevelName;
	if (EntryName != nullptr)
		*EntryName = params.EntryName;

	return params.ReturnValue;
}


// Function IpDrv.InternetLink.IsDataPending
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AInternetLink::IsDataPending()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.InternetLink.IsDataPending");

	AInternetLink_IsDataPending_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.ReceivedBinary
// (Event, Public)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm)

void ATcpLink::ReceivedBinary(int Count, unsigned char B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.ReceivedBinary");

	ATcpLink_ReceivedBinary_Params params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReceivedLine
// (Event, Public)
// Parameters:
// struct FString                 Line                           (Parm, NeedCtorLink)

void ATcpLink::ReceivedLine(const struct FString& Line)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.ReceivedLine");

	ATcpLink_ReceivedLine_Params params;
	params.Line = Line;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReceivedText
// (Event, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void ATcpLink::ReceivedText(const struct FString& Text)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.ReceivedText");

	ATcpLink_ReceivedText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Closed
// (Event, Public)

void ATcpLink::Closed()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.Closed");

	ATcpLink_Closed_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Opened
// (Event, Public)

void ATcpLink::Opened()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.Opened");

	ATcpLink_Opened_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.Accepted
// (Event, Public)

void ATcpLink::Accepted()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.Accepted");

	ATcpLink_Accepted_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.TcpLink.ReadBinary
// (Native, Public, HasOutparams)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::ReadBinary(int Count, unsigned char* B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.ReadBinary");

	ATcpLink_ReadBinary_Params params;
	params.Count = Count;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (B != nullptr)
		*B = params.B;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.ReadText
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 Str                            (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::ReadText(struct FString* Str)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.ReadText");

	ATcpLink_ReadText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Str != nullptr)
		*Str = params.Str;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.SendBinary
// (Native, Public)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::SendBinary(int Count, unsigned char B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.SendBinary");

	ATcpLink_SendBinary_Params params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.SendText
// (Native, Public)
// Parameters:
// struct FString                 Str                            (Parm, CoerceParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::SendText(const struct FString& Str)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.SendText");

	ATcpLink_SendText_Params params;
	params.Str = Str;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.IsConnected
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::IsConnected()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.IsConnected");

	ATcpLink_IsConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Close
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::Close()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.Close");

	ATcpLink_Close_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Open
// (Native, Public)
// Parameters:
// struct FIpAddr                 Addr                           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::Open(const struct FIpAddr& Addr)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.Open");

	ATcpLink_Open_Params params;
	params.Addr = Addr;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.Listen
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool ATcpLink::Listen()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.Listen");

	ATcpLink_Listen_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.TcpLink.BindPort
// (Native, HasOptionalparams, Public)
// Parameters:
// int                            PortNum                        (OptionalParm, Parm)
// bool                           bUseNextAvailable              (OptionalParm, Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int ATcpLink::BindPort(int PortNum, bool bUseNextAvailable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.TcpLink.BindPort");

	ATcpLink_BindPort_Params params;
	params.PortNum = PortNum;
	params.bUseNextAvailable = bUseNextAvailable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// (Native, Public)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// class UOnlineMatchmakingStats* MMStats                        (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(const struct FUniqueNetId& UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats");

	UOnlineEventsInterfaceMcp_UploadMatchmakingStats_Params params;
	params.UniqueId = UniqueId;
	params.MMStats = MMStats;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// (Native, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            NumPlayers                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int PlaylistId, int NumPlayers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation");

	UOnlineEventsInterfaceMcp_UpdatePlaylistPopulation_Params params;
	params.PlaylistId = PlaylistId;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// TArray<unsigned char>          Payload                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(const struct FUniqueNetId& UniqueId, TArray<unsigned char>* Payload)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData");

	UOnlineEventsInterfaceMcp_UploadGameplayEventsData_Params params;
	params.UniqueId = UniqueId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Payload != nullptr)
		*Payload = params.Payload;

	return params.ReturnValue;
}


// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// (Native, Public)
// Parameters:
// struct FUniqueNetId            UniqueId                       (Parm)
// struct FString                 PlayerNick                     (Parm, NeedCtorLink)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineEventsInterfaceMcp::UploadPlayerData(const struct FUniqueNetId& UniqueId, const struct FString& PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData");

	UOnlineEventsInterfaceMcp_UploadPlayerData_Params params;
	params.UniqueId = UniqueId;
	params.PlayerNick = PlayerNick;
	params.ProfileSettings = ProfileSettings;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  NewsType                       (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineNewsInterfaceMcp::GetNews(unsigned char LocalUserNum, unsigned char NewsType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineNewsInterfaceMcp.GetNews");

	UOnlineNewsInterfaceMcp_GetNews_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadGameNewsDelegate           (Parm, NeedCtorLink)

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate(const struct FScriptDelegate& ReadGameNewsDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate");

	UOnlineNewsInterfaceMcp_ClearReadNewsCompletedDelegate_Params params;
	params.ReadGameNewsDelegate = ReadGameNewsDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadNewsDelegate               (Parm, NeedCtorLink)

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate(const struct FScriptDelegate& ReadNewsDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate");

	UOnlineNewsInterfaceMcp_AddReadNewsCompletedDelegate_Params params;
	params.ReadNewsDelegate = ReadNewsDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// unsigned char                  NewsType                       (Parm)

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted(bool bWasSuccessful, unsigned char NewsType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted");

	UOnlineNewsInterfaceMcp_OnReadNewsCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  NewsType                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineNewsInterfaceMcp::ReadNews(unsigned char LocalUserNum, unsigned char NewsType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineNewsInterfaceMcp.ReadNews");

	UOnlineNewsInterfaceMcp_ReadNews_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewsType = NewsType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearShareTitleFileCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadMcp::ClearShareTitleFileCompleteDelegate(const struct FScriptDelegate& ShareTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.ClearShareTitleFileCompleteDelegate");

	UOnlineTitleFileDownloadMcp_ClearShareTitleFileCompleteDelegate_Params params;
	params.ShareTitleFileCompleteDelegate = ShareTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.AddShareTitleFileCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadMcp::AddShareTitleFileCompleteDelegate(const struct FScriptDelegate& ShareTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.AddShareTitleFileCompleteDelegate");

	UOnlineTitleFileDownloadMcp_AddShareTitleFileCompleteDelegate_Params params;
	params.ShareTitleFileCompleteDelegate = ShareTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ShareTitleFile
// (Public)
// Parameters:
// struct FString                 FileToShare                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::ShareTitleFile(const struct FString& FileToShare)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.ShareTitleFile");

	UOnlineTitleFileDownloadMcp_ShareTitleFile_Params params;
	params.FileToShare = FileToShare;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile");

	UOnlineTitleFileDownloadMcp_ClearDownloadedFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles");

	UOnlineTitleFileDownloadMcp_ClearDownloadedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// (Defined, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineTitleFileDownloadMcp::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState");

	UOnlineTitleFileDownloadMcp_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents");

	UOnlineTitleFileDownloadMcp_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadMcp::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate");

	UOnlineTitleFileDownloadMcp_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadMcp::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate");

	UOnlineTitleFileDownloadMcp_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineTitleFileDownloadMcp::ReadTitleFile(unsigned char LocalUserNum, const struct FString& FileToRead)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile");

	UOnlineTitleFileDownloadMcp_ReadTitleFile_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.OnShareTitleFileComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 UGCHandle                      (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadMcp::OnShareTitleFileComplete(bool bWasSuccessful, const struct FString& Filename, const struct FString& UGCHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.OnShareTitleFileComplete");

	UOnlineTitleFileDownloadMcp_OnShareTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineTitleFileDownloadMcp::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete");

	UOnlineTitleFileDownloadMcp_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeacon.DestroyBeacon
// (Native, Event, Public)

void UMeshBeacon::DestroyBeacon()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeacon.DestroyBeacon");

	UMeshBeacon_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// (Native, Public, HasOutparams)
// Parameters:
// bool                           bSuccess                       (Parm)
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconClient::SendHostNewGameSessionResponse(bool bSuccess, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse");

	UMeshBeaconClient_SendHostNewGameSessionResponse_Params params;
	params.bSuccess = bSuccess;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// (Public, Delegate, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// TArray<struct FPlayerMember>   Players                        (Const, Parm, OutParm, NeedCtorLink)

void UMeshBeaconClient::OnCreateNewSessionRequestReceived(const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived");

	UMeshBeaconClient_OnCreateNewSessionRequestReceived_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// (Public, Delegate, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)

void UMeshBeaconClient::OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.OnTravelRequestReceived");

	UMeshBeaconClient_OnTravelRequestReceived_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// (Public, Delegate, HasOutparams)
// Parameters:
// unsigned char                  TestType                       (Parm)
// unsigned char                  TestResult                     (Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (Const, Parm, OutParm)

void UMeshBeaconClient::OnReceivedBandwidthTestResults(unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults");

	UMeshBeaconClient_OnReceivedBandwidthTestResults_Params params;
	params.TestType = TestType;
	params.TestResult = TestResult;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BandwidthStats != nullptr)
		*BandwidthStats = params.BandwidthStats;
}


// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// (Public, Delegate)
// Parameters:
// unsigned char                  TestType                       (Parm)

void UMeshBeaconClient::OnReceivedBandwidthTestRequest(unsigned char TestType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest");

	UMeshBeaconClient_OnReceivedBandwidthTestRequest_Params params;
	params.TestType = TestType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// (Public, Delegate)
// Parameters:
// unsigned char                  ConnectionResult               (Parm)

void UMeshBeaconClient::OnConnectionRequestResult(unsigned char ConnectionResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.OnConnectionRequestResult");

	UMeshBeaconClient_OnConnectionRequestResult_Params params;
	params.ConnectionResult = ConnectionResult;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// (Native, Public)
// Parameters:
// unsigned char                  TestType                       (Parm)
// int                            TestBufferSize                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconClient::BeginBandwidthTest(unsigned char TestType, int TestBufferSize)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.BeginBandwidthTest");

	UMeshBeaconClient_BeginBandwidthTest_Params params;
	params.TestType = TestType;
	params.TestBufferSize = TestBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.RequestConnection
// (Native, Public, HasOutparams)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (Const, Parm, OutParm)
// struct FClientConnectionRequest ClientRequest                  (Const, Parm, OutParm, NeedCtorLink)
// bool                           bRegisterSecureAddress         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconClient::RequestConnection(bool bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.RequestConnection");

	UMeshBeaconClient_RequestConnection_Params params;
	params.bRegisterSecureAddress = bRegisterSecureAddress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (ClientRequest != nullptr)
		*ClientRequest = params.ClientRequest;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconClient.DestroyBeacon
// (Native, Event, Public)

void UMeshBeaconClient::DestroyBeacon()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconClient.DestroyBeacon");

	UMeshBeaconClient_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// (Public, Delegate, HasOutparams)
// Parameters:
// bool                           bSucceeded                     (Parm)
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult(bool bSucceeded, const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult");

	UMeshBeaconHost_OnReceivedClientCreateNewSessionResult_Params params;
	params.bSucceeded = bSucceeded;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// TArray<struct FPlayerMember>   Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::RequestClientCreateNewSession(const struct FUniqueNetId& PlayerNetId, const struct FName& SessionName, class UClass* SearchClass, TArray<struct FPlayerMember>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.RequestClientCreateNewSession");

	UMeshBeaconHost_RequestClientCreateNewSession_Params params;
	params.PlayerNetId = PlayerNetId;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// (Native, Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Const, Parm, OutParm)

void UMeshBeaconHost::TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.TellClientsToTravel");

	UMeshBeaconHost_TellClientsToTravel_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;
}


// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// (Public, Delegate)

void UMeshBeaconHost::OnAllPendingPlayersConnected()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected");

	UMeshBeaconHost_OnAllPendingPlayersConnected_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// (Native, Public, HasOutparams)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::AllPlayersConnected(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.AllPlayersConnected");

	UMeshBeaconHost_AllPlayersConnected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UMeshBeaconHost::GetConnectionIndexForPlayer(const struct FUniqueNetId& PlayerNetId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer");

	UMeshBeaconHost_GetConnectionIndexForPlayer_Params params;
	params.PlayerNetId = PlayerNetId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// (Defined, Public, HasOutparams)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)

void UMeshBeaconHost::SetPendingPlayerConnections(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.SetPendingPlayerConnections");

	UMeshBeaconHost_SetPendingPlayerConnections_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// (Public, Delegate, HasOutparams)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// unsigned char                  TestType                       (Parm)
// unsigned char                  TestResult                     (Parm)
// struct FConnectionBandwidthStats BandwidthStats                 (Const, Parm, OutParm)

void UMeshBeaconHost::OnFinishedBandwidthTest(const struct FUniqueNetId& PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.OnFinishedBandwidthTest");

	UMeshBeaconHost_OnFinishedBandwidthTest_Params params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;
	params.TestResult = TestResult;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (BandwidthStats != nullptr)
		*BandwidthStats = params.BandwidthStats;
}


// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// unsigned char                  TestType                       (Parm)

void UMeshBeaconHost::OnStartedBandwidthTest(const struct FUniqueNetId& PlayerNetId, unsigned char TestType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.OnStartedBandwidthTest");

	UMeshBeaconHost_OnStartedBandwidthTest_Params params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// (Public, Delegate, HasOutparams)
// Parameters:
// struct FClientMeshBeaconConnection NewClientConnection            (Const, Parm, OutParm, NeedCtorLink)

void UMeshBeaconHost::OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest");

	UMeshBeaconHost_OnReceivedClientConnectionRequest_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewClientConnection != nullptr)
		*NewClientConnection = params.NewClientConnection;
}


// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// (Defined, Public)
// Parameters:
// bool                           bEnabled                       (Parm)

void UMeshBeaconHost::AllowBandwidthTesting(bool bEnabled)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.AllowBandwidthTesting");

	UMeshBeaconHost_AllowBandwidthTesting_Params params;
	params.bEnabled = bEnabled;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// (Native, Public)

void UMeshBeaconHost::CancelPendingBandwidthTests()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.CancelPendingBandwidthTests");

	UMeshBeaconHost_CancelPendingBandwidthTests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::HasPendingBandwidthTest()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.HasPendingBandwidthTest");

	UMeshBeaconHost_HasPendingBandwidthTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// (Native, Public)

void UMeshBeaconHost::CancelInProgressBandwidthTests()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests");

	UMeshBeaconHost_CancelInProgressBandwidthTests_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::HasInProgressBandwidthTest()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.HasInProgressBandwidthTest");

	UMeshBeaconHost_HasInProgressBandwidthTest_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Parm)
// unsigned char                  TestType                       (Parm)
// int                            TestBufferSize                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::RequestClientBandwidthTest(const struct FUniqueNetId& PlayerNetId, unsigned char TestType, int TestBufferSize)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.RequestClientBandwidthTest");

	UMeshBeaconHost_RequestClientBandwidthTest_Params params;
	params.PlayerNetId = PlayerNetId;
	params.TestType = TestType;
	params.TestBufferSize = TestBufferSize;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.MeshBeaconHost.DestroyBeacon
// (Native, Event, Public)

void UMeshBeaconHost::DestroyBeacon()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.DestroyBeacon");

	UMeshBeaconHost_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.MeshBeaconHost.InitHostBeacon
// (Native, Public)
// Parameters:
// struct FUniqueNetId            InOwningPlayerId               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UMeshBeaconHost::InitHostBeacon(const struct FUniqueNetId& InOwningPlayerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.MeshBeaconHost.InitHostBeacon");

	UMeshBeaconHost_InitHostBeacon_Params params;
	params.InOwningPlayerId = InOwningPlayerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// (Defined, Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    OutRegisteredPlayers           (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* OutRegisteredPlayers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers");

	UOnlineSubsystemCommonImpl_GetRegisteredPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutRegisteredPlayers != nullptr)
		*OutRegisteredPlayers = params.OutRegisteredPlayers;
}


// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession");

	UOnlineSubsystemCommonImpl_IsPlayerInSession_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// (Event, Public)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemCommonImpl::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex");

	UOnlineSubsystemCommonImpl_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// (Native, Public)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineAuthInterfaceImpl::FindLocalServerAuthSession(class UPlayer* ClientConnection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession");

	UOnlineAuthInterfaceImpl_FindLocalServerAuthSession_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// (Native, Public)
// Parameters:
// class UPlayer*                 ServerConnection               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineAuthInterfaceImpl::FindServerAuthSession(class UPlayer* ServerConnection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession");

	UOnlineAuthInterfaceImpl_FindServerAuthSession_Params params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// (Native, Public)
// Parameters:
// class UPlayer*                 ServerConnection               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineAuthInterfaceImpl::FindLocalClientAuthSession(class UPlayer* ServerConnection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession");

	UOnlineAuthInterfaceImpl_FindLocalClientAuthSession_Params params;
	params.ServerConnection = ServerConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// (Native, Public)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineAuthInterfaceImpl::FindClientAuthSession(class UPlayer* ClientConnection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession");

	UOnlineAuthInterfaceImpl_FindClientAuthSession_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthRetryServer
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendAuthRetryServer()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.SendAuthRetryServer");

	UOnlineAuthInterfaceImpl_SendAuthRetryServer_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthKillClient
// (Native, Public)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendAuthKillClient(class UPlayer* ClientConnection)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.SendAuthKillClient");

	UOnlineAuthInterfaceImpl_SendAuthKillClient_Params params;
	params.ClientConnection = ClientConnection;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobServer
// (Native, Public)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// int                            AuthBlobUID                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendAuthBlobServer(class UPlayer* ClientConnection, int AuthBlobUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobServer");

	UOnlineAuthInterfaceImpl_SendAuthBlobServer_Params params;
	params.ClientConnection = ClientConnection;
	params.AuthBlobUID = AuthBlobUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobClient
// (Native, Public)
// Parameters:
// int                            AuthBlobUID                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceImpl::SendAuthBlobClient(int AuthBlobUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobClient");

	UOnlineAuthInterfaceImpl_SendAuthBlobClient_Params params;
	params.AuthBlobUID = AuthBlobUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_ClearServerConnectionCloseDelegate_Params params;
	params.ServerConnectionCloseDelegate = ServerConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ServerConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(const struct FScriptDelegate& ServerConnectionCloseDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_AddServerConnectionCloseDelegate_Params params;
	params.ServerConnectionCloseDelegate = ServerConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_ClearClientConnectionCloseDelegate_Params params;
	params.ClientConnectionCloseDelegate = ClientConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ClientConnectionCloseDelegate  (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(const struct FScriptDelegate& ClientConnectionCloseDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate");

	UOnlineAuthInterfaceImpl_AddClientConnectionCloseDelegate_Params params;
	params.ClientConnectionCloseDelegate = ClientConnectionCloseDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRetryServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthRetryServerDelegate        (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthRetryServerDelegate(const struct FScriptDelegate& AuthRetryServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthRetryServerDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthRetryServerDelegate_Params params;
	params.AuthRetryServerDelegate = AuthRetryServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRetryServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthRetryServerDelegate        (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthRetryServerDelegate(const struct FScriptDelegate& AuthRetryServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthRetryServerDelegate");

	UOnlineAuthInterfaceImpl_AddAuthRetryServerDelegate_Params params;
	params.AuthRetryServerDelegate = AuthRetryServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthKillClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthKillClientDelegate         (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthKillClientDelegate(const struct FScriptDelegate& AuthKillClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthKillClientDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthKillClientDelegate_Params params;
	params.AuthKillClientDelegate = AuthKillClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthKillClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthKillClientDelegate         (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthKillClientDelegate(const struct FScriptDelegate& AuthKillClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthKillClientDelegate");

	UOnlineAuthInterfaceImpl_AddAuthKillClientDelegate_Params params;
	params.AuthKillClientDelegate = AuthKillClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthCompleteServerDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthCompleteServerDelegate(const struct FScriptDelegate& AuthCompleteServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteServerDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthCompleteServerDelegate_Params params;
	params.AuthCompleteServerDelegate = AuthCompleteServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthCompleteServerDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthCompleteServerDelegate(const struct FScriptDelegate& AuthCompleteServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteServerDelegate");

	UOnlineAuthInterfaceImpl_AddAuthCompleteServerDelegate_Params params;
	params.AuthCompleteServerDelegate = AuthCompleteServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthCompleteClientDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthCompleteClientDelegate(const struct FScriptDelegate& AuthCompleteClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteClientDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthCompleteClientDelegate_Params params;
	params.AuthCompleteClientDelegate = AuthCompleteClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthCompleteClientDelegate     (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthCompleteClientDelegate(const struct FScriptDelegate& AuthCompleteClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteClientDelegate");

	UOnlineAuthInterfaceImpl_AddAuthCompleteClientDelegate_Params params;
	params.AuthCompleteClientDelegate = AuthCompleteClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthBlobReceivedServerDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthBlobReceivedServerDelegate(const struct FScriptDelegate& AuthBlobReceivedServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedServerDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthBlobReceivedServerDelegate_Params params;
	params.AuthBlobReceivedServerDelegate = AuthBlobReceivedServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthBlobReceivedServerDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthBlobReceivedServerDelegate(const struct FScriptDelegate& AuthBlobReceivedServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedServerDelegate");

	UOnlineAuthInterfaceImpl_AddAuthBlobReceivedServerDelegate_Params params;
	params.AuthBlobReceivedServerDelegate = AuthBlobReceivedServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthBlobReceivedClientDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthBlobReceivedClientDelegate(const struct FScriptDelegate& AuthBlobReceivedClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedClientDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthBlobReceivedClientDelegate_Params params;
	params.AuthBlobReceivedClientDelegate = AuthBlobReceivedClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthBlobReceivedClientDelegate (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthBlobReceivedClientDelegate(const struct FScriptDelegate& AuthBlobReceivedClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedClientDelegate");

	UOnlineAuthInterfaceImpl_AddAuthBlobReceivedClientDelegate_Params params;
	params.AuthBlobReceivedClientDelegate = AuthBlobReceivedClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthRequestServerDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthRequestServerDelegate(const struct FScriptDelegate& AuthRequestServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestServerDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthRequestServerDelegate_Params params;
	params.AuthRequestServerDelegate = AuthRequestServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestServerDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthRequestServerDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthRequestServerDelegate(const struct FScriptDelegate& AuthRequestServerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestServerDelegate");

	UOnlineAuthInterfaceImpl_AddAuthRequestServerDelegate_Params params;
	params.AuthRequestServerDelegate = AuthRequestServerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthRequestClientDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthRequestClientDelegate(const struct FScriptDelegate& AuthRequestClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestClientDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthRequestClientDelegate_Params params;
	params.AuthRequestClientDelegate = AuthRequestClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestClientDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthRequestClientDelegate      (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthRequestClientDelegate(const struct FScriptDelegate& AuthRequestClientDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestClientDelegate");

	UOnlineAuthInterfaceImpl_AddAuthRequestClientDelegate_Params params;
	params.AuthRequestClientDelegate = AuthRequestClientDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthReadyDelegate              (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate");

	UOnlineAuthInterfaceImpl_ClearAuthReadyDelegate_Params params;
	params.AuthReadyDelegate = AuthReadyDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AuthReadyDelegate              (Parm, NeedCtorLink)

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(const struct FScriptDelegate& AuthReadyDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate");

	UOnlineAuthInterfaceImpl_AddAuthReadyDelegate_Params params;
	params.AuthReadyDelegate = AuthReadyDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.HasPendingBootInvite
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::HasPendingBootInvite()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.HasPendingBootInvite");

	UOnlineGameInterfaceImpl_HasPendingBootInvite_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.CancelNATNegotiation
// (Native, Public)

void UOnlineGameInterfaceImpl::CancelNATNegotiation()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.CancelNATNegotiation");

	UOnlineGameInterfaceImpl_CancelNATNegotiation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         QosStatusChangedDelegate       (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate");

	UOnlineGameInterfaceImpl_ClearQosStatusChangedDelegate_Params params;
	params.QosStatusChangedDelegate = QosStatusChangedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         QosStatusChangedDelegate       (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(const struct FScriptDelegate& QosStatusChangedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate");

	UOnlineGameInterfaceImpl_AddQosStatusChangedDelegate_Params params;
	params.QosStatusChangedDelegate = QosStatusChangedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// (Public, Delegate)
// Parameters:
// int                            NumComplete                    (Parm)
// int                            NumTotal                       (Parm)

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int NumComplete, int NumTotal)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged");

	UOnlineGameInterfaceImpl_OnQosStatusChanged_Params params;
	params.NumComplete = NumComplete;
	params.NumTotal = NumTotal;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// (Native, Public)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch");

	UOnlineGameInterfaceImpl_BindPlatformSpecificSessionToSearch_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// (Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName");

	UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfoBySessionName_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// (Native, Public, HasOutparams)
// Parameters:
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo");

	UOnlineGameInterfaceImpl_ReadPlatformSpecificSessionInfo_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;
	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// (Public)
// Parameters:
// int                            StartAt                        (Parm)
// int                            NumberToQuery                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData");

	UOnlineGameInterfaceImpl_QueryNonAdvertisedData_Params params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearJoinMigratedOnlineGameCompleteDelegate_Params params;
	params.JoinMigratedOnlineGameCompleteDelegate = JoinMigratedOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinMigratedOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddJoinMigratedOnlineGameCompleteDelegate_Params params;
	params.JoinMigratedOnlineGameCompleteDelegate = JoinMigratedOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnJoinMigratedOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// (Public, HasOutparams)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame");

	UOnlineGameInterfaceImpl_JoinMigratedOnlineGame_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearMigrateOnlineGameCompleteDelegate_Params params;
	params.MigrateOnlineGameCompleteDelegate = MigrateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(const struct FScriptDelegate& MigrateOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddMigrateOnlineGameCompleteDelegate_Params params;
	params.MigrateOnlineGameCompleteDelegate = MigrateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnMigrateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// (Public)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::MigrateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame");

	UOnlineGameInterfaceImpl_MigrateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearRecalculateSkillRatingCompleteDelegate_Params params;
	params.RecalculateSkillRatingGameCompleteDelegate = RecalculateSkillRatingGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(const struct FScriptDelegate& RecalculateSkillRatingCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate");

	UOnlineGameInterfaceImpl_AddRecalculateSkillRatingCompleteDelegate_Params params;
	params.RecalculateSkillRatingCompleteDelegate = RecalculateSkillRatingCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete");

	UOnlineGameInterfaceImpl_OnRecalculateSkillRatingComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// (Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating");

	UOnlineGameInterfaceImpl_RecalculateSkillRating_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteProcessingStartedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         GameInviteProcessingStartedDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteProcessingStartedDelegate(const struct FScriptDelegate& GameInviteProcessingStartedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearGameInviteProcessingStartedDelegate");

	UOnlineGameInterfaceImpl_ClearGameInviteProcessingStartedDelegate_Params params;
	params.GameInviteProcessingStartedDelegate = GameInviteProcessingStartedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteProcessingStartedDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         GameInviteProcessingStartedDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteProcessingStartedDelegate(const struct FScriptDelegate& GameInviteProcessingStartedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddGameInviteProcessingStartedDelegate");

	UOnlineGameInterfaceImpl_AddGameInviteProcessingStartedDelegate_Params params;
	params.GameInviteProcessingStartedDelegate = GameInviteProcessingStartedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted
// (Public, Delegate)

void UOnlineGameInterfaceImpl::OnGameInviteProcessingStarted()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted");

	UOnlineGameInterfaceImpl_OnGameInviteProcessingStarted_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite");

	UOnlineGameInterfaceImpl_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate");

	UOnlineGameInterfaceImpl_ClearGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate");

	UOnlineGameInterfaceImpl_AddGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// (Public, Delegate, HasOutparams)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted");

	UOnlineGameInterfaceImpl_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// (Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FOnlineArbitrationRegistrant> ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FOnlineArbitrationRegistrant> UOnlineGameInterfaceImpl::GetArbitratedPlayers(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers");

	UOnlineGameInterfaceImpl_GetArbitratedPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearArbitrationRegistrationCompleteDelegate_Params params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(const struct FScriptDelegate& ArbitrationRegistrationCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate");

	UOnlineGameInterfaceImpl_AddArbitrationRegistrationCompleteDelegate_Params params;
	params.ArbitrationRegistrationCompleteDelegate = ArbitrationRegistrationCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete");

	UOnlineGameInterfaceImpl_OnArbitrationRegistrationComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// (Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterForArbitration(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration");

	UOnlineGameInterfaceImpl_RegisterForArbitration_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearEndOnlineGameCompleteDelegate_Params params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(const struct FScriptDelegate& EndOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddEndOnlineGameCompleteDelegate_Params params;
	params.EndOnlineGameCompleteDelegate = EndOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnEndOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::EndOnlineGame(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.EndOnlineGame");

	UOnlineGameInterfaceImpl_EndOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearStartOnlineGameCompleteDelegate_Params params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(const struct FScriptDelegate& StartOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddStartOnlineGameCompleteDelegate_Params params;
	params.StartOnlineGameCompleteDelegate = StartOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnStartOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::StartOnlineGame(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.StartOnlineGame");

	UOnlineGameInterfaceImpl_StartOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete");

	UOnlineGameInterfaceImpl_OnUnregisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// (Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::UnregisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers");

	UOnlineGameInterfaceImpl_UnregisterPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// (Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer");

	UOnlineGameInterfaceImpl_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceImpl_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete");

	UOnlineGameInterfaceImpl_OnRegisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// (Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterPlayers(const struct FName& SessionName, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.RegisterPlayers");

	UOnlineGameInterfaceImpl_RegisterPlayers_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// (Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasInvited                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.RegisterPlayer");

	UOnlineGameInterfaceImpl_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// (Native, Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 ConnectInfo                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString");

	UOnlineGameInterfaceImpl_GetResolvedConnectString_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectInfo != nullptr)
		*ConnectInfo = params.ConnectInfo;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearJoinOnlineGameCompleteDelegate_Params params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(const struct FScriptDelegate& JoinOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddJoinOnlineGameCompleteDelegate_Params params;
	params.JoinOnlineGameCompleteDelegate = JoinOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnJoinOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// (Native, Public, HasOutparams)
// Parameters:
// unsigned char                  PlayerNum                      (Parm)
// struct FName                   SessionName                    (Parm)
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::JoinOnlineGame(unsigned char PlayerNum, const struct FName& SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame");

	UOnlineGameInterfaceImpl_JoinOnlineGame_Params params;
	params.PlayerNum = PlayerNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredGame != nullptr)
		*DesiredGame = params.DesiredGame;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// (Native, Public)
// Parameters:
// class UOnlineGameSearch*       Search                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.FreeSearchResults");

	UOnlineGameInterfaceImpl_FreeSearchResults_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearCancelFindOnlineGamesCompleteDelegate_Params params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& CancelFindOnlineGamesCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_AddCancelFindOnlineGamesCompleteDelegate_Params params;
	params.CancelFindOnlineGamesCompleteDelegate = CancelFindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete");

	UOnlineGameInterfaceImpl_OnCancelFindOnlineGamesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames");

	UOnlineGameInterfaceImpl_CancelFindOnlineGames_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearFindOnlineGamesCompleteDelegate_Params params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(const struct FScriptDelegate& FindOnlineGamesCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate");

	UOnlineGameInterfaceImpl_AddFindOnlineGamesCompleteDelegate_Params params;
	params.FindOnlineGamesCompleteDelegate = FindOnlineGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// (Native, Public)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.FindOnlineGames");

	UOnlineGameInterfaceImpl_FindOnlineGames_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearDestroyOnlineGameCompleteDelegate_Params params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(const struct FScriptDelegate& DestroyOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddDestroyOnlineGameCompleteDelegate_Params params;
	params.DestroyOnlineGameCompleteDelegate = DestroyOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnDestroyOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::DestroyOnlineGame(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame");

	UOnlineGameInterfaceImpl_DestroyOnlineGame_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearUpdateOnlineGameCompleteDelegate_Params params;
	params.UpdateOnlineGameCompleteDelegate = UpdateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(const struct FScriptDelegate& UpdateOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddUpdateOnlineGameCompleteDelegate_Params params;
	params.UpdateOnlineGameCompleteDelegate = UpdateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnUpdateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// (HasOptionalparams, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           bShouldRefreshOnlineData       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame");

	UOnlineGameInterfaceImpl_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_ClearCreateOnlineGameCompleteDelegate_Params params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(const struct FScriptDelegate& CreateOnlineGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate");

	UOnlineGameInterfaceImpl_AddCreateOnlineGameCompleteDelegate_Params params;
	params.CreateOnlineGameCompleteDelegate = CreateOnlineGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete");

	UOnlineGameInterfaceImpl_OnCreateOnlineGameComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// (Native, Public)
// Parameters:
// unsigned char                  HostingPlayerNum               (Parm)
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     NewGameSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceImpl::CreateOnlineGame(unsigned char HostingPlayerNum, const struct FName& SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame");

	UOnlineGameInterfaceImpl_CreateOnlineGame_Params params;
	params.HostingPlayerNum = HostingPlayerNum;
	params.SessionName = SessionName;
	params.NewGameSettings = NewGameSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// (Defined, Public)
// Parameters:
// class UOnlineGameSearch*       ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.GetGameSearch");

	UOnlineGameInterfaceImpl_GetGameSearch_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// (Defined, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.GetGameSettings");

	UOnlineGameInterfaceImpl_GetGameSettings_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete");

	UOnlineGameInterfaceImpl_OnFindOnlineGamesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// (Native, Public, HasOutparams)
// Parameters:
// TArray<unsigned char>          Data                           (Const, Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::ParseDataCenterId(TArray<unsigned char>* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.ParseDataCenterId");

	UOnlinePlaylistManager_ParseDataCenterId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlinePlaylistManager::OnReadDataCenterIdComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete");

	UOnlinePlaylistManager_OnReadDataCenterIdComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlinePlaylistManager::ReadDataCenterId(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.ReadDataCenterId");

	UOnlinePlaylistManager_ReadDataCenterId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// (Defined, Event, Public)
// Parameters:
// int                            NumPlayers                     (Parm)

void UOnlinePlaylistManager::SendPlaylistPopulationUpdate(int NumPlayers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate");

	UOnlinePlaylistManager_SendPlaylistPopulationUpdate_Params params;
	params.NumPlayers = NumPlayers;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// (Defined, Public, HasOutparams)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            WorldwideTotal                 (Parm, OutParm)
// int                            RegionTotal                    (Parm, OutParm)

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist");

	UOnlinePlaylistManager_GetPopulationInfoFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (WorldwideTotal != nullptr)
		*WorldwideTotal = params.WorldwideTotal;
	if (RegionTotal != nullptr)
		*RegionTotal = params.RegionTotal;
}


// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// (Native, Public, HasOutparams)
// Parameters:
// TArray<unsigned char>          Data                           (Const, Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::ParsePlaylistPopulationData(TArray<unsigned char>* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData");

	UOnlinePlaylistManager_ParsePlaylistPopulationData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;
}


// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// (Public, Delegate)

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated");

	UOnlinePlaylistManager_OnPlaylistPopulationDataUpdated_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete");

	UOnlinePlaylistManager_OnReadPlaylistPopulationComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlinePlaylistManager::ReadPlaylistPopulation(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation");

	UOnlinePlaylistManager_ReadPlaylistPopulation_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.Reset
// (Defined, Public)

void UOnlinePlaylistManager::Reset()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.Reset");

	UOnlinePlaylistManager_Reset_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// (Defined, Public, HasOutparams)
// Parameters:
// int                            PlaylistId                     (Parm)
// TArray<int>                    ContentIds                     (Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::GetContentIdsFromPlaylist(int PlaylistId, TArray<int>* ContentIds)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist");

	UOnlinePlaylistManager_GetContentIdsFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentIds != nullptr)
		*ContentIds = params.ContentIds;
}


// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// (Defined, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// class UClass*                  SourceInventory                (Parm)
// class UClass*                  ReturnValue                    (Parm, OutParm, ReturnParm)

class UClass* UOnlinePlaylistManager::GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist");

	UOnlinePlaylistManager_GetInventorySwapFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;
	params.SourceInventory = SourceInventory;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// (Defined, Public, HasOutparams)
// Parameters:
// int                            PlaylistId                     (Parm)
// TArray<struct FName>           MapCycle                       (Parm, OutParm, NeedCtorLink)

void UOnlinePlaylistManager::GetMapCycleFromPlaylist(int PlaylistId, TArray<struct FName>* MapCycle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist");

	UOnlinePlaylistManager_GetMapCycleFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (MapCycle != nullptr)
		*MapCycle = params.MapCycle;
}


// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// (Defined, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlinePlaylistManager::GetUrlFromPlaylist(int PlaylistId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist");

	UOnlinePlaylistManager_GetUrlFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetMatchType
// (Defined, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlinePlaylistManager::GetMatchType(int PlaylistId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetMatchType");

	UOnlinePlaylistManager_GetMatchType_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// (Defined, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::IsPlaylistArbitrated(int PlaylistId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated");

	UOnlinePlaylistManager_IsPlaylistArbitrated_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// (Defined, Public, HasOutparams)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            LoadBalanceId                  (Parm, OutParm)

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist");

	UOnlinePlaylistManager_GetLoadBalanceIdFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LoadBalanceId != nullptr)
		*LoadBalanceId = params.LoadBalanceId;
}


// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// (Defined, Public, HasOutparams)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            TeamSize                       (Parm, OutParm)
// int                            TeamCount                      (Parm, OutParm)
// int                            MaxPartySize                   (Parm, OutParm)

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist");

	UOnlinePlaylistManager_GetTeamInfoFromPlaylist_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (TeamSize != nullptr)
		*TeamSize = params.TeamSize;
	if (TeamCount != nullptr)
		*TeamCount = params.TeamCount;
	if (MaxPartySize != nullptr)
		*MaxPartySize = params.MaxPartySize;
}


// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// (Defined, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers(int PlaylistId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers");

	UOnlinePlaylistManager_PlaylistSupportsDedicatedServers_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// (Defined, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::HasAnyGameSettings(int PlaylistId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.HasAnyGameSettings");

	UOnlinePlaylistManager_HasAnyGameSettings_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// (Defined, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            GameSettingsId                 (Parm)
// class UOnlineGameSettings*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSettings* UOnlinePlaylistManager::GetGameSettings(int PlaylistId, int GameSettingsId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.GetGameSettings");

	UOnlinePlaylistManager_GetGameSettings_Params params;
	params.PlaylistId = PlaylistId;
	params.GameSettingsId = GameSettingsId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// (Native, Public)

void UOnlinePlaylistManager::FinalizePlaylistObjects()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects");

	UOnlinePlaylistManager_FinalizePlaylistObjects_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// (Defined, Public)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlinePlaylistManager::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete");

	UOnlinePlaylistManager_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlinePlaylistManager::ShouldRefreshPlaylists()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists");

	UOnlinePlaylistManager_ShouldRefreshPlaylists_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// (Native, Public)

void UOnlinePlaylistManager::DetermineFilesToDownload()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.DetermineFilesToDownload");

	UOnlinePlaylistManager_DetermineFilesToDownload_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlinePlaylistManager::DownloadPlaylist(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.DownloadPlaylist");

	UOnlinePlaylistManager_DownloadPlaylist_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlinePlaylistManager::OnReadPlaylistComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete");

	UOnlinePlaylistManager_OnReadPlaylistComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeacon.OnDestroyComplete
// (Public, Delegate)

void UPartyBeacon::OnDestroyComplete()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeacon.OnDestroyComplete");

	UPartyBeacon_OnDestroyComplete_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeacon.DestroyBeacon
// (Native, Event, Public)

void UPartyBeacon::DestroyBeacon()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeacon.DestroyBeacon");

	UPartyBeacon_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.DestroyBeacon
// (Native, Event, Public)

void UPartyBeaconClient::DestroyBeacon()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.DestroyBeacon");

	UPartyBeaconClient_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.CancelReservation
// (Native, Public)
// Parameters:
// struct FUniqueNetId            CancellingPartyLeader          (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconClient::CancelReservation(const struct FUniqueNetId& CancellingPartyLeader)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.CancelReservation");

	UPartyBeaconClient_CancelReservation_Params params;
	params.CancellingPartyLeader = CancellingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// (Native, Public, HasOutparams)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (Const, Parm, OutParm)
// struct FUniqueNetId            RequestingPartyLeader          (Parm)
// TArray<struct FPlayerReservation> PlayersToAdd                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconClient::RequestReservationUpdate(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* PlayersToAdd)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.RequestReservationUpdate");

	UPartyBeaconClient_RequestReservationUpdate_Params params;
	params.RequestingPartyLeader = RequestingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (PlayersToAdd != nullptr)
		*PlayersToAdd = params.PlayersToAdd;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.RequestReservation
// (Native, Public, HasOutparams)
// Parameters:
// struct FOnlineGameSearchResult DesiredHost                    (Const, Parm, OutParm)
// struct FUniqueNetId            RequestingPartyLeader          (Parm)
// TArray<struct FPlayerReservation> Players                        (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconClient::RequestReservation(const struct FUniqueNetId& RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray<struct FPlayerReservation>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.RequestReservation");

	UPartyBeaconClient_RequestReservation_Params params;
	params.RequestingPartyLeader = RequestingPartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DesiredHost != nullptr)
		*DesiredHost = params.DesiredHost;
	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// (Public, Delegate)

void UPartyBeaconClient::OnHostHasCancelled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.OnHostHasCancelled");

	UPartyBeaconClient_OnHostHasCancelled_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnHostIsReady
// (Public, Delegate)

void UPartyBeaconClient::OnHostIsReady()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.OnHostIsReady");

	UPartyBeaconClient_OnHostIsReady_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)

void UPartyBeaconClient::OnTravelRequestReceived(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.OnTravelRequestReceived");

	UPartyBeaconClient_OnTravelRequestReceived_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// (Public, Delegate)
// Parameters:
// int                            ReservationRemaining           (Parm)

void UPartyBeaconClient::OnReservationCountUpdated(int ReservationRemaining)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.OnReservationCountUpdated");

	UPartyBeaconClient_OnReservationCountUpdated_Params params;
	params.ReservationRemaining = ReservationRemaining;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  ReservationResult              (Parm)

void UPartyBeaconClient::OnReservationRequestComplete(unsigned char ReservationResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconClient.OnReservationRequestComplete");

	UPartyBeaconClient_OnReservationRequestComplete_Params params;
	params.ReservationResult = ReservationResult;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// (Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHost::GetMaxAvailableTeamSize()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize");

	UPartyBeaconHost_GetMaxAvailableTeamSize_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// (Defined, Public, HasOutparams)
// Parameters:
// TArray<struct FUniqueNetId>    PartyLeaders                   (Parm, OutParm, NeedCtorLink)

void UPartyBeaconHost::GetPartyLeaders(TArray<struct FUniqueNetId>* PartyLeaders)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.GetPartyLeaders");

	UPartyBeaconHost_GetPartyLeaders_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyLeaders != nullptr)
		*PartyLeaders = params.PartyLeaders;
}


// Function IpDrv.PartyBeaconHost.GetPlayers
// (Defined, Public, HasOutparams, HasDefaults)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Parm, OutParm, NeedCtorLink)

void UPartyBeaconHost::GetPlayers(TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.GetPlayers");

	UPartyBeaconHost_GetPlayers_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;
}


// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// (Native, Public)
// Parameters:
// class UOnlineGameSearch*       Search                         (Parm)

void UPartyBeaconHost::AppendReservationSkillsToSearch(class UOnlineGameSearch* Search)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch");

	UPartyBeaconHost_AppendReservationSkillsToSearch_Params params;
	params.Search = Search;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.UnregisterParty
// (Defined, Event, Public, HasDefaults)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)

void UPartyBeaconHost::UnregisterParty(const struct FUniqueNetId& PartyLeader)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.UnregisterParty");

	UPartyBeaconHost_UnregisterParty_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// (Defined, Event, Public, HasDefaults)

void UPartyBeaconHost::UnregisterPartyMembers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.UnregisterPartyMembers");

	UPartyBeaconHost_UnregisterPartyMembers_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// (Defined, Event, Public, HasDefaults)

void UPartyBeaconHost::RegisterPartyMembers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.RegisterPartyMembers");

	UPartyBeaconHost_RegisterPartyMembers_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.AreReservationsFull
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHost::AreReservationsFull()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.AreReservationsFull");

	UPartyBeaconHost_AreReservationsFull_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// (Native, Public)

void UPartyBeaconHost::TellClientsHostHasCancelled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.TellClientsHostHasCancelled");

	UPartyBeaconHost_TellClientsHostHasCancelled_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// (Native, Public)

void UPartyBeaconHost::TellClientsHostIsReady()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.TellClientsHostIsReady");

	UPartyBeaconHost_TellClientsHostIsReady_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UClass*                  SearchClass                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)

void UPartyBeaconHost::TellClientsToTravel(const struct FName& SessionName, class UClass* SearchClass, unsigned char PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.TellClientsToTravel");

	UPartyBeaconHost_TellClientsToTravel_Params params;
	params.SessionName = SessionName;
	params.SearchClass = SearchClass;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.DestroyBeacon
// (Native, Event, Public)

void UPartyBeaconHost::DestroyBeacon()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.DestroyBeacon");

	UPartyBeaconHost_DestroyBeacon_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)

void UPartyBeaconHost::OnClientCancellationReceived(const struct FUniqueNetId& PartyLeader)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.OnClientCancellationReceived");

	UPartyBeaconHost_OnClientCancellationReceived_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnReservationsFull
// (Public, Delegate)

void UPartyBeaconHost::OnReservationsFull()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.OnReservationsFull");

	UPartyBeaconHost_OnReservationsFull_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.OnReservationChange
// (Public, Delegate)

void UPartyBeaconHost::OnReservationChange()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.OnReservationChange");

	UPartyBeaconHost_OnReservationChange_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bMaintainParty                 (Parm)

void UPartyBeaconHost::HandlePlayerLogout(const struct FUniqueNetId& PlayerID, bool bMaintainParty)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.HandlePlayerLogout");

	UPartyBeaconHost_HandlePlayerLogout_Params params;
	params.PlayerID = PlayerID;
	params.bMaintainParty = bMaintainParty;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.PartyBeaconHost.GetExistingReservation
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Const, Parm, OutParm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UPartyBeaconHost::GetExistingReservation(struct FUniqueNetId* PartyLeader)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.GetExistingReservation");

	UPartyBeaconHost_GetExistingReservation_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PartyLeader != nullptr)
		*PartyLeader = params.PartyLeader;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (Const, Parm, OutParm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UPartyBeaconHost::UpdatePartyReservationEntry(const struct FUniqueNetId& PartyLeader, TArray<struct FPlayerReservation>* PlayerMembers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.UpdatePartyReservationEntry");

	UPartyBeaconHost_UpdatePartyReservationEntry_Params params;
	params.PartyLeader = PartyLeader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMembers != nullptr)
		*PlayerMembers = params.PlayerMembers;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            PartyLeader                    (Parm)
// TArray<struct FPlayerReservation> PlayerMembers                  (Const, Parm, OutParm, NeedCtorLink)
// int                            TeamNum                        (Parm)
// bool                           bIsHost                        (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UPartyBeaconHost::AddPartyReservationEntry(const struct FUniqueNetId& PartyLeader, int TeamNum, bool bIsHost, TArray<struct FPlayerReservation>* PlayerMembers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.AddPartyReservationEntry");

	UPartyBeaconHost_AddPartyReservationEntry_Params params;
	params.PartyLeader = PartyLeader;
	params.TeamNum = TeamNum;
	params.bIsHost = bIsHost;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerMembers != nullptr)
		*PlayerMembers = params.PlayerMembers;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.InitHostBeacon
// (Native, HasOptionalparams, Public)
// Parameters:
// int                            InNumTeams                     (Parm)
// int                            InNumPlayersPerTeam            (Parm)
// int                            InNumReservations              (Parm)
// struct FName                   InSessionName                  (Parm)
// int                            InForceTeamNum                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UPartyBeaconHost::InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, const struct FName& InSessionName, int InForceTeamNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.InitHostBeacon");

	UPartyBeaconHost_InitHostBeacon_Params params;
	params.InNumTeams = InNumTeams;
	params.InNumPlayersPerTeam = InNumPlayersPerTeam;
	params.InNumReservations = InNumReservations;
	params.InSessionName = InSessionName;
	params.InForceTeamNum = InForceTeamNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// (Native, Public)
// Parameters:
// bool                           bPause                         (Parm)

void UPartyBeaconHost::PauseReservationRequests(bool bPause)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.PartyBeaconHost.PauseReservationRequests");

	UPartyBeaconHost_PauseReservationRequests_Params params;
	params.bPause = bPause;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetHexDigit
// (Defined, Public)
// Parameters:
// struct FString                 D                              (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UWebRequest::GetHexDigit(const struct FString& D)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.GetHexDigit");

	UWebRequest_GetHexDigit_Params params;
	params.D = D;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.DecodeFormData
// (Defined, Public)
// Parameters:
// struct FString                 Data                           (Parm, NeedCtorLink)

void UWebRequest::DecodeFormData(const struct FString& Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.DecodeFormData");

	UWebRequest_DecodeFormData_Params params;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.ProcessHeaderString
// (Defined, Public)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void UWebRequest::ProcessHeaderString(const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.ProcessHeaderString");

	UWebRequest_ProcessHeaderString_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.Dump
// (Final, Native, Public)

void UWebRequest::Dump()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.Dump");

	UWebRequest_Dump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetVariables
// (Final, Native, Public, HasOutparams)
// Parameters:
// TArray<struct FString>         varNames                       (Parm, OutParm, NeedCtorLink)

void UWebRequest::GetVariables(TArray<struct FString>* varNames)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.GetVariables");

	UWebRequest_GetVariables_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (varNames != nullptr)
		*varNames = params.varNames;
}


// Function IpDrv.WebRequest.GetVariableNumber
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// int                            Number                         (Parm)
// struct FString                 DefaultValue                   (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::GetVariableNumber(const struct FString& VariableName, int Number, const struct FString& DefaultValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.GetVariableNumber");

	UWebRequest_GetVariableNumber_Params params;
	params.VariableName = VariableName;
	params.Number = Number;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.GetVariableCount
// (Final, Native, Public)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UWebRequest::GetVariableCount(const struct FString& VariableName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.GetVariableCount");

	UWebRequest_GetVariableCount_Params params;
	params.VariableName = VariableName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.GetVariable
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// struct FString                 DefaultValue                   (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::GetVariable(const struct FString& VariableName, const struct FString& DefaultValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.GetVariable");

	UWebRequest_GetVariable_Params params;
	params.VariableName = VariableName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.AddVariable
// (Final, Native, Public)
// Parameters:
// struct FString                 VariableName                   (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)

void UWebRequest::AddVariable(const struct FString& VariableName, const struct FString& Value)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.AddVariable");

	UWebRequest_AddVariable_Params params;
	params.VariableName = VariableName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.GetHeaders
// (Final, Native, Public, HasOutparams)
// Parameters:
// TArray<struct FString>         headers                        (Parm, OutParm, NeedCtorLink)

void UWebRequest::GetHeaders(TArray<struct FString>* headers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.GetHeaders");

	UWebRequest_GetHeaders_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (headers != nullptr)
		*headers = params.headers;
}


// Function IpDrv.WebRequest.GetHeader
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 HeaderName                     (Parm, NeedCtorLink)
// struct FString                 DefaultValue                   (OptionalParm, Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::GetHeader(const struct FString& HeaderName, const struct FString& DefaultValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.GetHeader");

	UWebRequest_GetHeader_Params params;
	params.HeaderName = HeaderName;
	params.DefaultValue = DefaultValue;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.AddHeader
// (Final, Native, Public)
// Parameters:
// struct FString                 HeaderName                     (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)

void UWebRequest::AddHeader(const struct FString& HeaderName, const struct FString& Value)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.AddHeader");

	UWebRequest_AddHeader_Params params;
	params.HeaderName = HeaderName;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebRequest.EncodeBase64
// (Final, Native, Public)
// Parameters:
// struct FString                 Decoded                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::EncodeBase64(const struct FString& Decoded)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.EncodeBase64");

	UWebRequest_EncodeBase64_Params params;
	params.Decoded = Decoded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebRequest.DecodeBase64
// (Final, Native, Public)
// Parameters:
// struct FString                 Encoded                        (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebRequest::DecodeBase64(const struct FString& Encoded)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebRequest.DecodeBase64");

	UWebRequest_DecodeBase64_Params params;
	params.Encoded = Encoded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SentResponse
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::SentResponse()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.SentResponse");

	UWebResponse_SentResponse_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SentText
// (Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::SentText()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.SentText");

	UWebResponse_SentText_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.Redirect
// (Defined, Public)
// Parameters:
// struct FString                 URL                            (Parm, NeedCtorLink)

void UWebResponse::Redirect(const struct FString& URL)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.Redirect");

	UWebResponse_Redirect_Params params;
	params.URL = URL;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendStandardHeaders
// (Defined, HasOptionalparams, Public)
// Parameters:
// struct FString                 ContentType                    (OptionalParm, Parm, NeedCtorLink)
// bool                           bCache                         (OptionalParm, Parm)

void UWebResponse::SendStandardHeaders(const struct FString& ContentType, bool bCache)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.SendStandardHeaders");

	UWebResponse_SendStandardHeaders_Params params;
	params.ContentType = ContentType;
	params.bCache = bCache;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HTTPError
// (Defined, HasOptionalparams, Public)
// Parameters:
// int                            ErrorNum                       (Parm)
// struct FString                 Data                           (OptionalParm, Parm, NeedCtorLink)

void UWebResponse::HTTPError(int ErrorNum, const struct FString& Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.HTTPError");

	UWebResponse_HTTPError_Params params;
	params.ErrorNum = ErrorNum;
	params.Data = Data;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendHeaders
// (Defined, Public)

void UWebResponse::SendHeaders()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.SendHeaders");

	UWebResponse_SendHeaders_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.AddHeader
// (Defined, HasOptionalparams, Public)
// Parameters:
// struct FString                 Header                         (Parm, NeedCtorLink)
// bool                           bReplace                       (OptionalParm, Parm)

void UWebResponse::AddHeader(const struct FString& Header, bool bReplace)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.AddHeader");

	UWebResponse_AddHeader_Params params;
	params.Header = Header;
	params.bReplace = bReplace;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HTTPHeader
// (Defined, Public)
// Parameters:
// struct FString                 Header                         (Parm, NeedCtorLink)

void UWebResponse::HTTPHeader(const struct FString& Header)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.HTTPHeader");

	UWebResponse_HTTPHeader_Params params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.HTTPResponse
// (Defined, Public)
// Parameters:
// struct FString                 Header                         (Parm, NeedCtorLink)

void UWebResponse::HTTPResponse(const struct FString& Header)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.HTTPResponse");

	UWebResponse_HTTPResponse_Params params;
	params.Header = Header;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.FailAuthentication
// (Defined, Public)
// Parameters:
// struct FString                 Realm                          (Parm, NeedCtorLink)

void UWebResponse::FailAuthentication(const struct FString& Realm)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.FailAuthentication");

	UWebResponse_FailAuthentication_Params params;
	params.Realm = Realm;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendCachedFile
// (Defined, HasOptionalparams, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ContentType                    (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::SendCachedFile(const struct FString& Filename, const struct FString& ContentType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.SendCachedFile");

	UWebResponse_SendCachedFile_Params params;
	params.Filename = Filename;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.SendBinary
// (Defined, Event, Public)
// Parameters:
// int                            Count                          (Parm)
// unsigned char                  B                              (Parm)

void UWebResponse::SendBinary(int Count, unsigned char B)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.SendBinary");

	UWebResponse_SendBinary_Params params;
	params.Count = Count;
	params.B = B;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.SendText
// (Defined, Event, HasOptionalparams, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)
// bool                           bNoCRLF                        (OptionalParm, Parm)

void UWebResponse::SendText(const struct FString& Text, bool bNoCRLF)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.SendText");

	UWebResponse_SendText_Params params;
	params.Text = Text;
	params.bNoCRLF = bNoCRLF;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.Dump
// (Final, Native, Public)

void UWebResponse::Dump()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.Dump");

	UWebResponse_Dump_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.GetHTTPExpiration
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// int                            OffsetSeconds                  (OptionalParm, Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebResponse::GetHTTPExpiration(int OffsetSeconds)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.GetHTTPExpiration");

	UWebResponse_GetHTTPExpiration_Params params;
	params.OffsetSeconds = OffsetSeconds;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.LoadParsedUHTM
// (Final, Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UWebResponse::LoadParsedUHTM(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.LoadParsedUHTM");

	UWebResponse_LoadParsedUHTM_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.IncludeBinaryFile
// (Final, Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::IncludeBinaryFile(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.IncludeBinaryFile");

	UWebResponse_IncludeBinaryFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.IncludeUHTM
// (Final, Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::IncludeUHTM(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.IncludeUHTM");

	UWebResponse_IncludeUHTM_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebResponse.ClearSubst
// (Final, Native, Public)

void UWebResponse::ClearSubst()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.ClearSubst");

	UWebResponse_ClearSubst_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.Subst
// (Final, Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 Variable                       (Parm, NeedCtorLink)
// struct FString                 Value                          (Parm, CoerceParm, NeedCtorLink)
// bool                           bClear                         (OptionalParm, Parm)

void UWebResponse::Subst(const struct FString& Variable, const struct FString& Value, bool bClear)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.Subst");

	UWebResponse_Subst_Params params;
	params.Variable = Variable;
	params.Value = Value;
	params.bClear = bClear;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebResponse.FileExists
// (Final, Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebResponse::FileExists(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebResponse.FileExists");

	UWebResponse_FileExists_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// (Defined, Event, Public)
// Parameters:
// int                            PlaylistId                     (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataStore_OnlinePlaylists::GetMatchTypeForPlaylistId(int PlaylistId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId");

	UUIDataStore_OnlinePlaylists_GetMatchTypeForPlaylistId_Params params;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// (Defined, Static, HasOptionalparams, Public, HasOutparams, HasDefaults)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// int                            PlaylistId                     (Parm)
// int                            ProviderIndex                  (OptionalParm, Parm, OutParm)
// class UOnlinePlaylistProvider* ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider(const struct FName& ProviderTag, int PlaylistId, int* ProviderIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider");

	UUIDataStore_OnlinePlaylists_GetOnlinePlaylistProvider_Params params;
	params.ProviderTag = ProviderTag;
	params.PlaylistId = PlaylistId;

	auto flags = fn->FunctionFlags;

	static auto defaultObj = StaticClass()->CreateDefaultObject();
	defaultObj->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProviderIndex != nullptr)
		*ProviderIndex = params.ProviderIndex;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// int                            ProviderIndex                  (Parm)
// class UUIResourceDataProvider* out_Provider                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider(const struct FName& ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider");

	UUIDataStore_OnlinePlaylists_GetPlaylistProvider_Params params;
	params.ProviderTag = ProviderTag;
	params.ProviderIndex = ProviderIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Provider != nullptr)
		*out_Provider = params.out_Provider;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.FindProviderIndexByFieldValue
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// struct FName                   SearchField                    (Parm)
// struct FUIProviderScriptFieldValue ValueToSearchFor               (Const, Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataStore_OnlinePlaylists::FindProviderIndexByFieldValue(const struct FName& ProviderTag, const struct FName& SearchField, struct FUIProviderScriptFieldValue* ValueToSearchFor)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.FindProviderIndexByFieldValue");

	UUIDataStore_OnlinePlaylists_FindProviderIndexByFieldValue_Params params;
	params.ProviderTag = ProviderTag;
	params.SearchField = SearchField;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ValueToSearchFor != nullptr)
		*ValueToSearchFor = params.ValueToSearchFor;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderFieldValue
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// struct FName                   SearchField                    (Parm)
// int                            ProviderIndex                  (Parm)
// struct FUIProviderScriptFieldValue out_FieldValue                 (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDataStore_OnlinePlaylists::GetProviderFieldValue(const struct FName& ProviderTag, const struct FName& SearchField, int ProviderIndex, struct FUIProviderScriptFieldValue* out_FieldValue)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.GetProviderFieldValue");

	UUIDataStore_OnlinePlaylists_GetProviderFieldValue_Params params;
	params.ProviderTag = ProviderTag;
	params.SearchField = SearchField;
	params.ProviderIndex = ProviderIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_FieldValue != nullptr)
		*out_FieldValue = params.out_FieldValue;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviderFields
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// TArray<struct FName>           ProviderFieldTags              (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDataStore_OnlinePlaylists::GetResourceProviderFields(const struct FName& ProviderTag, TArray<struct FName>* ProviderFieldTags)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviderFields");

	UUIDataStore_OnlinePlaylists_GetResourceProviderFields_Params params;
	params.ProviderTag = ProviderTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ProviderFieldTags != nullptr)
		*ProviderFieldTags = params.ProviderFieldTags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// (Final, Native, Public, HasOutparams)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// TArray<class UUIResourceDataProvider*> out_Providers                  (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UUIDataStore_OnlinePlaylists::GetResourceProviders(const struct FName& ProviderTag, TArray<class UUIResourceDataProvider*>* out_Providers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders");

	UUIDataStore_OnlinePlaylists_GetResourceProviders_Params params;
	params.ProviderTag = ProviderTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_Providers != nullptr)
		*out_Providers = params.out_Providers;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderCount
// (Native, Public)
// Parameters:
// struct FName                   ProviderTag                    (Parm)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UUIDataStore_OnlinePlaylists::GetProviderCount(const struct FName& ProviderTag)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.GetProviderCount");

	UUIDataStore_OnlinePlaylists_GetProviderCount_Params params;
	params.ProviderTag = ProviderTag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// (Defined, Event, Public)

void UUIDataStore_OnlinePlaylists::Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.UIDataStore_OnlinePlaylists.Init");

	UUIDataStore_OnlinePlaylists_Init_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.PostQuery
// (Public)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebApplication.PostQuery");

	UWebApplication_PostQuery_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Query
// (Public)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UWebApplication::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebApplication.Query");

	UWebApplication_Query_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.PreQuery
// (Defined, Public)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebApplication.PreQuery");

	UWebApplication_PreQuery_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebApplication.CleanupApp
// (Defined, Public)

void UWebApplication::CleanupApp()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebApplication.CleanupApp");

	UWebApplication_CleanupApp_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Cleanup
// (Final, Public)

void UWebApplication::Cleanup()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebApplication.Cleanup");

	UWebApplication_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebApplication.Init
// (Public)

void UWebApplication::Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebApplication.Init");

	UWebApplication_Init_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.GetApplication
// (Defined, Public, HasOutparams)
// Parameters:
// struct FString                 URI                            (Parm, NeedCtorLink)
// struct FString                 SubURI                         (Parm, OutParm, NeedCtorLink)
// class UWebApplication*         ReturnValue                    (Parm, OutParm, ReturnParm)

class UWebApplication* AWebServer::GetApplication(const struct FString& URI, struct FString* SubURI)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebServer.GetApplication");

	AWebServer_GetApplication_Params params;
	params.URI = URI;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SubURI != nullptr)
		*SubURI = params.SubURI;

	return params.ReturnValue;
}


// Function IpDrv.WebServer.LostChild
// (Defined, Event, Public)
// Parameters:
// class AActor*                  C                              (Parm)

void AWebServer::LostChild(class AActor* C)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebServer.LostChild");

	AWebServer_LostChild_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.GainedChild
// (Defined, Event, Public)
// Parameters:
// class AActor*                  C                              (Parm)

void AWebServer::GainedChild(class AActor* C)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebServer.GainedChild");

	AWebServer_GainedChild_Params params;
	params.C = C;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.Destroyed
// (Defined, Event, Public)

void AWebServer::Destroyed()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebServer.Destroyed");

	AWebServer_Destroyed_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebServer.PostBeginPlay
// (Defined, Public, HasDefaults)

void AWebServer::PostBeginPlay()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebServer.PostBeginPlay");

	AWebServer_PostBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.HelloWeb.Query
// (Defined, Event, Public)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UHelloWeb::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.HelloWeb.Query");

	UHelloWeb_Query_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.HelloWeb.Init
// (Defined, Public)

void UHelloWeb::Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.HelloWeb.Init");

	UHelloWeb_Init_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.ImageServer.Query
// (Defined, Event, Public)
// Parameters:
// class UWebRequest*             Request                        (Parm)
// class UWebResponse*            Response                       (Parm)

void UImageServer::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.ImageServer.Query");

	UImageServer_Query_Params params;
	params.Request = Request;
	params.Response = Response;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.IsHanging
// (Final, Defined, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool AWebConnection::IsHanging()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.IsHanging");

	AWebConnection_IsHanging_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function IpDrv.WebConnection.Cleanup
// (Defined, Public)

void AWebConnection::Cleanup()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.Cleanup");

	AWebConnection_Cleanup_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.CheckRawBytes
// (Defined, Public)

void AWebConnection::CheckRawBytes()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.CheckRawBytes");

	AWebConnection_CheckRawBytes_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.EndOfHeaders
// (Defined, Public)

void AWebConnection::EndOfHeaders()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.EndOfHeaders");

	AWebConnection_EndOfHeaders_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.CreateResponseObject
// (Defined, Public)

void AWebConnection::CreateResponseObject()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.CreateResponseObject");

	AWebConnection_CreateResponseObject_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessPost
// (Defined, Public)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ProcessPost(const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.ProcessPost");

	AWebConnection_ProcessPost_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessGet
// (Defined, Public)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ProcessGet(const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.ProcessGet");

	AWebConnection_ProcessGet_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ProcessHead
// (Defined, Public)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ProcessHead(const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.ProcessHead");

	AWebConnection_ProcessHead_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ReceivedLine
// (Defined, Public)
// Parameters:
// struct FString                 S                              (Parm, NeedCtorLink)

void AWebConnection::ReceivedLine(const struct FString& S)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.ReceivedLine");

	AWebConnection_ReceivedLine_Params params;
	params.S = S;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.ReceivedText
// (Defined, Event, Public)
// Parameters:
// struct FString                 Text                           (Parm, NeedCtorLink)

void AWebConnection::ReceivedText(const struct FString& Text)
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.ReceivedText");

	AWebConnection_ReceivedText_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Timer
// (Defined, Event, Public)

void AWebConnection::Timer()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.Timer");

	AWebConnection_Timer_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Closed
// (Defined, Event, Public)

void AWebConnection::Closed()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.Closed");

	AWebConnection_Closed_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function IpDrv.WebConnection.Accepted
// (Defined, Event, Public)

void AWebConnection::Accepted()
{
	static auto fn = (UFunction *)UObject::Find("Function", "IpDrv.WebConnection.Accepted");

	AWebConnection_Accepted_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


#ifdef _MSC_VER
	#pragma pack(pop)
#endif
