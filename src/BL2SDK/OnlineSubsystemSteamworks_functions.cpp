// Borderlands 2 (1.8.5) SDK

#ifdef _MSC_VER
#pragma pack(push, 0x4)
#endif

#include "stdafx.h"

//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr
// (Native, Public, HasOutparams)
// Parameters:
// int                            OutServerIP                    (Parm, OutParm)
// int                            OutServerPort                  (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::GetServerAddr(int* OutServerIP, int* OutServerPort)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerAddr");

	UOnlineAuthInterfaceSteamworks_GetServerAddr_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerIP != nullptr)
		*OutServerIP = params.OutServerIP;
	if (OutServerPort != nullptr)
		*OutServerPort = params.OutServerPort;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            OutServerUID                   (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::GetServerUniqueId(struct FUniqueNetId* OutServerUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.GetServerUniqueId");

	UOnlineAuthInterfaceSteamworks_GetServerUniqueId_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutServerUID != nullptr)
		*OutServerUID = params.OutServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteServerAuthSession
// (Native, Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// int                            ServerIP                       (Parm)

void UOnlineAuthInterfaceSteamworks::EndRemoteServerAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteServerAuthSession");

	UOnlineAuthInterfaceSteamworks_EndRemoteServerAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalServerAuthSession
// (Native, Public)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// int                            ClientIP                       (Parm)

void UOnlineAuthInterfaceSteamworks::EndLocalServerAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalServerAuthSession");

	UOnlineAuthInterfaceSteamworks_EndLocalServerAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession
// (Native, Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// int                            ServerIP                       (Parm)
// int                            AuthBlobUID                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::VerifyServerAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP, int AuthBlobUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyServerAuthSession");

	UOnlineAuthInterfaceSteamworks_VerifyServerAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.AuthBlobUID = AuthBlobUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// int                            ClientIP                       (Parm)
// int                            ClientPort                     (Parm)
// int                            OutAuthBlobUID                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::CreateServerAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP, int ClientPort, int* OutAuthBlobUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateServerAuthSession");

	UOnlineAuthInterfaceSteamworks_CreateServerAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthBlobUID != nullptr)
		*OutAuthBlobUID = params.OutAuthBlobUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteClientAuthSession
// (Native, Public)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// int                            ClientIP                       (Parm)

void UOnlineAuthInterfaceSteamworks::EndRemoteClientAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndRemoteClientAuthSession");

	UOnlineAuthInterfaceSteamworks_EndRemoteClientAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalClientAuthSession
// (Native, Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// int                            ServerIP                       (Parm)
// int                            ServerPort                     (Parm)

void UOnlineAuthInterfaceSteamworks::EndLocalClientAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP, int ServerPort)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.EndLocalClientAuthSession");

	UOnlineAuthInterfaceSteamworks_EndLocalClientAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession
// (Native, Public)
// Parameters:
// struct FUniqueNetId            ClientUID                      (Parm)
// int                            ClientIP                       (Parm)
// int                            ClientPort                     (Parm)
// int                            AuthBlobUID                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::VerifyClientAuthSession(const struct FUniqueNetId& ClientUID, int ClientIP, int ClientPort, int AuthBlobUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.VerifyClientAuthSession");

	UOnlineAuthInterfaceSteamworks_VerifyClientAuthSession_Params params;
	params.ClientUID = ClientUID;
	params.ClientIP = ClientIP;
	params.ClientPort = ClientPort;
	params.AuthBlobUID = AuthBlobUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// int                            ServerIP                       (Parm)
// int                            ServerPort                     (Parm)
// bool                           bSecure                        (Parm)
// int                            OutAuthBlobUID                 (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::CreateClientAuthSession(const struct FUniqueNetId& ServerUID, int ServerIP, int ServerPort, bool bSecure, int* OutAuthBlobUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.CreateClientAuthSession");

	UOnlineAuthInterfaceSteamworks_CreateClientAuthSession_Params params;
	params.ServerUID = ServerUID;
	params.ServerIP = ServerIP;
	params.ServerPort = ServerPort;
	params.bSecure = bSecure;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAuthBlobUID != nullptr)
		*OutAuthBlobUID = params.OutAuthBlobUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestServer
// (Native, Public)
// Parameters:
// struct FUniqueNetId            ServerUID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::SendAuthRequestServer(const struct FUniqueNetId& ServerUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestServer");

	UOnlineAuthInterfaceSteamworks_SendAuthRequestServer_Params params;
	params.ServerUID = ServerUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestClient
// (Native, Public)
// Parameters:
// class UPlayer*                 ClientConnection               (Parm)
// struct FUniqueNetId            ClientUID                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineAuthInterfaceSteamworks::SendAuthRequestClient(class UPlayer* ClientConnection, const struct FUniqueNetId& ClientUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineAuthInterfaceSteamworks.SendAuthRequestClient");

	UOnlineAuthInterfaceSteamworks_SendAuthRequestClient_Params params;
	params.ClientConnection = ClientConnection;
	params.ClientUID = ClientUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineGameSettings* UOnlineGameInterfaceSteamworks::GetGameSettings(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetGameSettings");

	UOnlineGameInterfaceSteamworks_GetGameSettings_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString
// (Native, Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FString                 ConnectInfo                    (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::GetResolvedConnectString(const struct FName& SessionName, struct FString* ConnectInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.GetResolvedConnectString");

	UOnlineGameInterfaceSteamworks_GetResolvedConnectString_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ConnectInfo != nullptr)
		*ConnectInfo = params.ConnectInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch
// (Native, Public)
// Parameters:
// unsigned char                  SearchingPlayerNum             (Parm)
// class UOnlineGameSearch*       SearchSettings                 (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.BindPlatformSpecificSessionToSearch");

	UOnlineGameInterfaceSteamworks_BindPlatformSpecificSessionToSearch_Params params;
	params.SearchingPlayerNum = SearchingPlayerNum;
	params.SearchSettings = SearchSettings;
	params.PlatformSpecificInfo = PlatformSpecificInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName
// (Native, Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfoBySessionName(const struct FName& SessionName, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfoBySessionName");

	UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfoBySessionName_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlatformSpecificInfo != nullptr)
		*PlatformSpecificInfo = params.PlatformSpecificInfo;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo
// (Native, Public, HasOutparams)
// Parameters:
// struct FOnlineGameSearchResult DesiredGame                    (Const, Parm, OutParm)
// unsigned char                  PlatformSpecificInfo           (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ReadPlatformSpecificSessionInfo");

	UOnlineGameInterfaceSteamworks_ReadPlatformSpecificSessionInfo_Params params;

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


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData
// (Defined, Public)
// Parameters:
// int                            StartAt                        (Parm)
// int                            NumberToQuery                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.QueryNonAdvertisedData");

	UOnlineGameInterfaceSteamworks_QueryNonAdvertisedData_Params params;
	params.StartAt = StartAt;
	params.NumberToQuery = NumberToQuery;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_ClearUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate(const struct FScriptDelegate& UnregisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddUnregisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_AddUnregisterPlayerCompleteDelegate_Params params;
	params.UnregisterPlayerCompleteDelegate = UnregisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnUnregisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_OnUnregisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UnregisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UnregisterPlayer");

	UOnlineGameInterfaceSteamworks_UnregisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_ClearRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate(const struct FScriptDelegate& RegisterPlayerCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddRegisterPlayerCompleteDelegate");

	UOnlineGameInterfaceSteamworks_AddRegisterPlayerCompleteDelegate_Params params;
	params.RegisterPlayerCompleteDelegate = RegisterPlayerCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnRegisterPlayerComplete");

	UOnlineGameInterfaceSteamworks_OnRegisterPlayerComplete_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bWasInvited                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::RegisterPlayer(const struct FName& SessionName, const struct FUniqueNetId& PlayerID, bool bWasInvited)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.RegisterPlayer");

	UOnlineGameInterfaceSteamworks_RegisterPlayer_Params params;
	params.SessionName = SessionName;
	params.PlayerID = PlayerID;
	params.bWasInvited = bWasInvited;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::AcceptGameInvite(unsigned char LocalUserNum, const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AcceptGameInvite");

	UOnlineGameInterfaceSteamworks_AcceptGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted
// (Public, Delegate, HasOutparams)
// Parameters:
// struct FOnlineGameSearchResult InviteResult                   (Const, Parm, OutParm)

void UOnlineGameInterfaceSteamworks::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.OnGameInviteAccepted");

	UOnlineGameInterfaceSteamworks_OnGameInviteAccepted_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InviteResult != nullptr)
		*InviteResult = params.InviteResult;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.ClearGameInviteAcceptedDelegate");

	UOnlineGameInterfaceSteamworks_ClearGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GameInviteAcceptedDelegate     (Parm, NeedCtorLink)

void UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GameInviteAcceptedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.AddGameInviteAcceptedDelegate");

	UOnlineGameInterfaceSteamworks_AddGameInviteAcceptedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GameInviteAcceptedDelegate = GameInviteAcceptedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame
// (Native, HasOptionalparams, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// class UOnlineGameSettings*     UpdatedGameSettings            (Parm)
// bool                           bShouldRefreshOnlineData       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineGameInterfaceSteamworks::UpdateOnlineGame(const struct FName& SessionName, class UOnlineGameSettings* UpdatedGameSettings, bool bShouldRefreshOnlineData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineGameInterfaceSteamworks.UpdateOnlineGame");

	UOnlineGameInterfaceSteamworks_UpdateOnlineGame_Params params;
	params.SessionName = SessionName;
	params.UpdatedGameSettings = UpdatedGameSettings;
	params.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCountryString
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetCountryString()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCountryString");

	UOnlineSubsystemSteamworks_GetCountryString_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCheckDownloadableContentListDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         CheckDownloadableContentListDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCheckDownloadableContentListDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& CheckDownloadableContentListDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCheckDownloadableContentListDelegate");

	UOnlineSubsystemSteamworks_ClearCheckDownloadableContentListDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CheckDownloadableContentListDelegate = CheckDownloadableContentListDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCheckDownloadableContentListDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         CheckDownloadableContentListDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCheckDownloadableContentListDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& CheckDownloadableContentListDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCheckDownloadableContentListDelegate");

	UOnlineSubsystemSteamworks_AddCheckDownloadableContentListDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CheckDownloadableContentListDelegate = CheckDownloadableContentListDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckDownloadableContentList
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CheckDownloadableContentList(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CheckDownloadableContentList");

	UOnlineSubsystemSteamworks_CheckDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCheckDownloadableContentList
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bDownloadableContentListAvailable (Parm)

void UOnlineSubsystemSteamworks::OnCheckDownloadableContentList(unsigned char LocalUserNum, bool bDownloadableContentListAvailable)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCheckDownloadableContentList");

	UOnlineSubsystemSteamworks_OnCheckDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bDownloadableContentListAvailable = bDownloadableContentListAvailable;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCriticalDownloadableContentList
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FMarketplaceContent> DLCList                        (Parm, OutParm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetCriticalDownloadableContentList(unsigned char LocalUserNum, TArray<struct FMarketplaceContent>* DLCList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCriticalDownloadableContentList");

	UOnlineSubsystemSteamworks_GetCriticalDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DLCList != nullptr)
		*DLCList = params.DLCList;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCriticalDownloadableContentList
// (HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            CategoryMask                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadCriticalDownloadableContentList(unsigned char LocalUserNum, int CategoryMask)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCriticalDownloadableContentList");

	UOnlineSubsystemSteamworks_ReadCriticalDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CategoryMask = CategoryMask;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCriticalDownloadableContentListComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadCriticalDownloadableContentListCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCriticalDownloadableContentListComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadCriticalDownloadableContentListCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCriticalDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_ClearReadCriticalDownloadableContentListComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadCriticalDownloadableContentListCompleteDelegate = ReadCriticalDownloadableContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCriticalDownloadableContentListComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadCriticalDownloadableContentListCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCriticalDownloadableContentListComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadCriticalDownloadableContentListCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCriticalDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_AddReadCriticalDownloadableContentListComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadCriticalDownloadableContentListCompleteDelegate = ReadCriticalDownloadableContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCriticalDownloadableContentListComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadCriticalDownloadableContentListComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCriticalDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_OnReadCriticalDownloadableContentListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHiddenDownloadableContentList
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FMarketplaceContent> DLCList                        (Parm, OutParm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetHiddenDownloadableContentList(unsigned char LocalUserNum, TArray<struct FMarketplaceContent>* DLCList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHiddenDownloadableContentList");

	UOnlineSubsystemSteamworks_GetHiddenDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DLCList != nullptr)
		*DLCList = params.DLCList;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadHiddenDownloadableContentList
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<int>                    OfferIds                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadHiddenDownloadableContentList(unsigned char LocalUserNum, TArray<int> OfferIds)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadHiddenDownloadableContentList");

	UOnlineSubsystemSteamworks_ReadHiddenDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.OfferIds = OfferIds;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadHiddenDownloadableContentListComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadHiddenDownloadableContentListCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadHiddenDownloadableContentListComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadHiddenDownloadableContentListCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadHiddenDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_ClearReadHiddenDownloadableContentListComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadHiddenDownloadableContentListCompleteDelegate = ReadHiddenDownloadableContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadHiddenDownloadableContentListComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadHiddenDownloadableContentListCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadHiddenDownloadableContentListComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadHiddenDownloadableContentListCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadHiddenDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_AddReadHiddenDownloadableContentListComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadHiddenDownloadableContentListCompleteDelegate = ReadHiddenDownloadableContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadHiddenDownloadableContentListComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadHiddenDownloadableContentListComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadHiddenDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_OnReadHiddenDownloadableContentListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDownloadableContentList
// (Native, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FMarketplaceContent> DLCList                        (Parm, OutParm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetDownloadableContentList(unsigned char LocalUserNum, TArray<struct FMarketplaceContent>* DLCList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDownloadableContentList");

	UOnlineSubsystemSteamworks_GetDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DLCList != nullptr)
		*DLCList = params.DLCList;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadDownloadableContentList
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            CategoryMask                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadDownloadableContentList(unsigned char LocalUserNum, int CategoryMask)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadDownloadableContentList");

	UOnlineSubsystemSteamworks_ReadDownloadableContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CategoryMask = CategoryMask;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadDownloadableContentListComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadDownloadableContentListCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadDownloadableContentListComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadDownloadableContentListCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_ClearReadDownloadableContentListComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadDownloadableContentListCompleteDelegate = ReadDownloadableContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadDownloadableContentListComplete
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadDownloadableContentListCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadDownloadableContentListComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadDownloadableContentListCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_AddReadDownloadableContentListComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadDownloadableContentListCompleteDelegate = ReadDownloadableContentListCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadDownloadableContentListComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadDownloadableContentListComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadDownloadableContentListComplete");

	UOnlineSubsystemSteamworks_OnReadDownloadableContentListComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGamesList
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineContent>  SaveGamesList                  (Parm, OutParm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetSaveGamesList(unsigned char LocalUserNum, TArray<struct FOnlineContent>* SaveGamesList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGamesList");

	UOnlineSubsystemSteamworks_GetSaveGamesList_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGamesList != nullptr)
		*SaveGamesList = params.SaveGamesList;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGamesList
// (HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// struct FString                 SaveFilePrefix                 (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadSaveGamesList(unsigned char LocalUserNum, int DeviceID, const struct FString& SaveFilePrefix)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGamesList");

	UOnlineSubsystemSteamworks_ReadSaveGamesList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.SaveFilePrefix = SaveFilePrefix;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGamesComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadSaveGamesCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSaveGamesComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadSaveGamesCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGamesComplete");

	UOnlineSubsystemSteamworks_ClearReadSaveGamesComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadSaveGamesCompleteDelegate = ReadSaveGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGamesComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadSaveGamesCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSaveGamesComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadSaveGamesCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGamesComplete");

	UOnlineSubsystemSteamworks_AddReadSaveGamesComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadSaveGamesCompleteDelegate = ReadSaveGamesCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGamesComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadSaveGamesComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGamesComplete");

	UOnlineSubsystemSteamworks_OnReadSaveGamesComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveGames
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearSaveGames(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSaveGames");

	UOnlineSubsystemSteamworks_ClearSaveGames_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteSaveGame
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteSaveGame(unsigned char LocalUserNum, int DeviceID, const struct FString& FriendlyName, const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteSaveGame");

	UOnlineSubsystemSteamworks_DeleteSaveGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSaveGameDataComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteSaveGameDataCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteSaveGameDataComplete(unsigned char LocalUserNum, const struct FScriptDelegate& WriteSaveGameDataCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteSaveGameDataComplete");

	UOnlineSubsystemSteamworks_ClearWriteSaveGameDataComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteSaveGameDataCompleteDelegate = WriteSaveGameDataCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSaveGameDataComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteSaveGameDataCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteSaveGameDataComplete(unsigned char LocalUserNum, const struct FScriptDelegate& WriteSaveGameDataCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteSaveGameDataComplete");

	UOnlineSubsystemSteamworks_AddWriteSaveGameDataComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteSaveGameDataCompleteDelegate = WriteSaveGameDataCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSaveGameDataComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnWriteSaveGameDataComplete(bool bWasSuccessful, unsigned char LocalUserNum, int DeviceID, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteSaveGameDataComplete");

	UOnlineSubsystemSteamworks_OnWriteSaveGameDataComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSaveGameData
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// TArray<unsigned char>          SaveGameData                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteSaveGameData(unsigned char LocalUserNum, int DeviceID, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName, TArray<unsigned char>* SaveGameData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteSaveGameData");

	UOnlineSubsystemSteamworks_WriteSaveGameData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (SaveGameData != nullptr)
		*SaveGameData = params.SaveGameData;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGameDataComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadSaveGameDataComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadSaveGameDataComplete");

	UOnlineSubsystemSteamworks_ClearReadSaveGameDataComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadSaveGameDataCompleteDelegate = ReadSaveGameDataCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGameDataComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadSaveGameDataComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadSaveGameDataComplete");

	UOnlineSubsystemSteamworks_AddReadSaveGameDataComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadSaveGameDataCompleteDelegate = ReadSaveGameDataCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGameDataComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadSaveGameDataComplete(bool bWasSuccessful, unsigned char LocalUserNum, int DeviceID, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadSaveGameDataComplete");

	UOnlineSubsystemSteamworks_OnReadSaveGameDataComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGameData
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// unsigned char                  bIsValid                       (Parm, OutParm)
// TArray<unsigned char>          SaveGameData                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetSaveGameData(unsigned char LocalUserNum, int DeviceID, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName, unsigned char* bIsValid, TArray<unsigned char>* SaveGameData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSaveGameData");

	UOnlineSubsystemSteamworks_GetSaveGameData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
	if (SaveGameData != nullptr)
		*SaveGameData = params.SaveGameData;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGameData
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadSaveGameData(unsigned char LocalUserNum, int DeviceID, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadSaveGameData");

	UOnlineSubsystemSteamworks_ReadSaveGameData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            NewDownloads                   (Parm, OutParm)
// int                            TotalDownloads                 (Parm, OutParm)

void UOnlineSubsystemSteamworks::GetAvailableDownloadCounts(unsigned char LocalUserNum, int* NewDownloads, int* TotalDownloads)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAvailableDownloadCounts");

	UOnlineSubsystemSteamworks_GetAvailableDownloadCounts_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (NewDownloads != nullptr)
		*NewDownloads = params.NewDownloads;
	if (TotalDownloads != nullptr)
		*TotalDownloads = params.TotalDownloads;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         QueryDownloadsDelegate         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearQueryAvailableDownloadsComplete(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearQueryAvailableDownloadsComplete");

	UOnlineSubsystemSteamworks_ClearQueryAvailableDownloadsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.QueryDownloadsDelegate = QueryDownloadsDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         QueryDownloadsDelegate         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddQueryAvailableDownloadsComplete(unsigned char LocalUserNum, const struct FScriptDelegate& QueryDownloadsDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddQueryAvailableDownloadsComplete");

	UOnlineSubsystemSteamworks_AddQueryAvailableDownloadsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.QueryDownloadsDelegate = QueryDownloadsDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnQueryAvailableDownloadsComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnQueryAvailableDownloadsComplete");

	UOnlineSubsystemSteamworks_OnQueryAvailableDownloadsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads
// (HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            CategoryMask                   (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::QueryAvailableDownloads(unsigned char LocalUserNum, int CategoryMask)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.QueryAvailableDownloads");

	UOnlineSubsystemSteamworks_QueryAvailableDownloads_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CategoryMask = CategoryMask;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleSaveGames
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearCrossTitleSaveGames(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleSaveGames");

	UOnlineSubsystemSteamworks_ClearCrossTitleSaveGames_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleSaveGameDataComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleSaveGameDataComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleSaveGameDataComplete");

	UOnlineSubsystemSteamworks_ClearReadCrossTitleSaveGameDataComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadSaveGameDataCompleteDelegate = ReadSaveGameDataCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleSaveGameDataComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadSaveGameDataCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleSaveGameDataComplete(unsigned char LocalUserNum, const struct FScriptDelegate& ReadSaveGameDataCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleSaveGameDataComplete");

	UOnlineSubsystemSteamworks_AddReadCrossTitleSaveGameDataComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadSaveGameDataCompleteDelegate = ReadSaveGameDataCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleSaveGameDataComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// int                            TitleId                        (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadCrossTitleSaveGameDataComplete(bool bWasSuccessful, unsigned char LocalUserNum, int DeviceID, int TitleId, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleSaveGameDataComplete");

	UOnlineSubsystemSteamworks_OnReadCrossTitleSaveGameDataComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.TitleId = TitleId;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleSaveGameData
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// int                            TitleId                        (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// unsigned char                  bIsValid                       (Parm, OutParm)
// TArray<unsigned char>          SaveGameData                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetCrossTitleSaveGameData(unsigned char LocalUserNum, int DeviceID, int TitleId, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName, unsigned char* bIsValid, TArray<unsigned char>* SaveGameData)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleSaveGameData");

	UOnlineSubsystemSteamworks_GetCrossTitleSaveGameData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.TitleId = TitleId;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bIsValid != nullptr)
		*bIsValid = params.bIsValid;
	if (SaveGameData != nullptr)
		*SaveGameData = params.SaveGameData;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleSaveGameData
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            DeviceID                       (Parm)
// int                            TitleId                        (Parm)
// struct FString                 FriendlyName                   (Parm, NeedCtorLink)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 SaveFileName                   (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleSaveGameData(unsigned char LocalUserNum, int DeviceID, int TitleId, const struct FString& FriendlyName, const struct FString& Filename, const struct FString& SaveFileName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleSaveGameData");

	UOnlineSubsystemSteamworks_ReadCrossTitleSaveGameData_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceID = DeviceID;
	params.TitleId = TitleId;
	params.FriendlyName = FriendlyName;
	params.Filename = Filename;
	params.SaveFileName = SaveFileName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleContentCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleContentCompleteDelegate(unsigned char LocalUserNum, unsigned char ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleContentCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadCrossTitleContentCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;
	params.ReadContentCompleteDelegate = ReadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleContentCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleContentCompleteDelegate(unsigned char LocalUserNum, unsigned char ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleContentCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadCrossTitleContentCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;
	params.ReadContentCompleteDelegate = ReadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleContentComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleContentComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleContentComplete");

	UOnlineSubsystemSteamworks_OnReadCrossTitleContentComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleContentList
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// TArray<struct FOnlineCrossTitleContent> ContentList                    (Parm, OutParm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType, TArray<struct FOnlineCrossTitleContent>* ContentList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleContentList");

	UOnlineSubsystemSteamworks_GetCrossTitleContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentList != nullptr)
		*ContentList = params.ContentList;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleContentList
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleContentList");

	UOnlineSubsystemSteamworks_ClearCrossTitleContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleContentList
// (HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleContentList(unsigned char LocalUserNum, unsigned char ContentType, int TitleId, int DeviceID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleContentList");

	UOnlineSubsystemSteamworks_ReadCrossTitleContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;
	params.TitleId = TitleId;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// TArray<struct FOnlineContent>  ContentList                    (Parm, OutParm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetContentList(unsigned char LocalUserNum, unsigned char ContentType, TArray<struct FOnlineContent>* ContentList)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetContentList");

	UOnlineSubsystemSteamworks_GetContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ContentList != nullptr)
		*ContentList = params.ContentList;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentList
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)

void UOnlineSubsystemSteamworks::ClearContentList(unsigned char LocalUserNum, unsigned char ContentType)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentList");

	UOnlineSubsystemSteamworks_ClearContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList
// (HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadContentList(unsigned char LocalUserNum, unsigned char ContentType, int DeviceID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadContentList");

	UOnlineSubsystemSteamworks_ReadContentList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadContentComplete(unsigned char LocalUserNum, unsigned char ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadContentComplete");

	UOnlineSubsystemSteamworks_ClearReadContentComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;
	params.ReadContentCompleteDelegate = ReadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ContentType                    (Parm)
// struct FScriptDelegate         ReadContentCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadContentComplete(unsigned char LocalUserNum, unsigned char ContentType, const struct FScriptDelegate& ReadContentCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadContentComplete");

	UOnlineSubsystemSteamworks_AddReadContentComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ContentType = ContentType;
	params.ReadContentCompleteDelegate = ReadContentCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadContentComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadContentComplete");

	UOnlineSubsystemSteamworks_OnReadContentComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate
// (HasOptionalparams, Public)
// Parameters:
// struct FScriptDelegate         ContentDelegate                (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (OptionalParm, Parm)

void UOnlineSubsystemSteamworks::ClearContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegate");

	UOnlineSubsystemSteamworks_ClearContentChangeDelegate_Params params;
	params.ContentDelegate = ContentDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate
// (HasOptionalparams, Public)
// Parameters:
// struct FScriptDelegate         ContentDelegate                (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (OptionalParm, Parm)

void UOnlineSubsystemSteamworks::AddContentChangeDelegate(const struct FScriptDelegate& ContentDelegate, unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegate");

	UOnlineSubsystemSteamworks_AddContentChangeDelegate_Params params;
	params.ContentDelegate = ContentDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegateEx
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ContentDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearContentChangeDelegateEx(const struct FScriptDelegate& ContentDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearContentChangeDelegateEx");

	UOnlineSubsystemSteamworks_ClearContentChangeDelegateEx_Params params;
	params.ContentDelegate = ContentDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegateEx
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ContentDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddContentChangeDelegateEx(const struct FScriptDelegate& ContentDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddContentChangeDelegateEx");

	UOnlineSubsystemSteamworks_AddContentChangeDelegateEx_Params params;
	params.ContentDelegate = ContentDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnContentChange()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnContentChange");

	UOnlineSubsystemSteamworks_OnContentChange_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowRedeemCodeUI
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowRedeemCodeUI(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowRedeemCodeUI");

	UOnlineSubsystemSteamworks_ShowRedeemCodeUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSteamworksSessionState
// (Native, Public)

void UOnlineSubsystemSteamworks::DumpSteamworksSessionState()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSteamworksSessionState");

	UOnlineSubsystemSteamworks_DumpSteamworksSessionState_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSessionState
// (Defined, Public)

void UOnlineSubsystemSteamworks::DumpSessionState()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DumpSessionState");

	UOnlineSubsystemSteamworks_DumpSessionState_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceVolume
// (Native, Public)
// Parameters:
// unsigned char                  VolType                        (Parm)
// float                          VolumeParam                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetVoiceVolume(unsigned char VolType, float VolumeParam)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetVoiceVolume");

	UOnlineSubsystemSteamworks_SetVoiceVolume_Params params;
	params.VolType = VolType;
	params.VolumeParam = VolumeParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAvatarAwardCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAvatarAwardCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAvatarAwardCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAvatarAwardCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAvatarAwardCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearUnlockAvatarAwardCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAvatarAwardCompleteDelegate = UnlockAvatarAwardCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAvatarAwardCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAvatarAwardCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAvatarAwardCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAvatarAwardCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAvatarAwardCompleteDelegate");

	UOnlineSubsystemSteamworks_AddUnlockAvatarAwardCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAvatarAwardCompleteDelegate = UnlockAvatarAwardCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAvatarAwardComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnUnlockAvatarAwardComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAvatarAwardComplete");

	UOnlineSubsystemSteamworks_OnUnlockAvatarAwardComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            FriendUID                      (Parm)
// struct FString                 ServerURL                      (Parm, OutParm, NeedCtorLink)
// struct FString                 ServerUID                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetFriendJoinURL(const struct FUniqueNetId& FriendUID, struct FString* ServerURL, struct FString* ServerUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendJoinURL");

	UOnlineSubsystemSteamworks_GetFriendJoinURL_Params params;
	params.FriendUID = FriendUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerURL != nullptr)
		*ServerURL = params.ServerURL;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL
// (Native, Public, HasOutparams)
// Parameters:
// bool                           bMarkAsJoined                  (Parm)
// struct FString                 ServerURL                      (Parm, OutParm, NeedCtorLink)
// struct FString                 ServerUID                      (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetCommandlineJoinURL(bool bMarkAsJoined, struct FString* ServerURL, struct FString* ServerUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCommandlineJoinURL");

	UOnlineSubsystemSteamworks_GetCommandlineJoinURL_Params params;
	params.bMarkAsJoined = bMarkAsJoined;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ServerURL != nullptr)
		*ServerURL = params.ServerURL;
	if (ServerUID != nullptr)
		*ServerUID = params.ServerUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 UIDString                      (Parm, NeedCtorLink)
// struct FUniqueNetId            OutUID                         (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Int64ToUniqueNetId(const struct FString& UIDString, struct FUniqueNetId* OutUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Int64ToUniqueNetId");

	UOnlineSubsystemSteamworks_Int64ToUniqueNetId_Params params;
	params.UIDString = UIDString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutUID != nullptr)
		*OutUID = params.OutUID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            Uid                            (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToInt64(struct FUniqueNetId* Uid)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToInt64");

	UOnlineSubsystemSteamworks_UniqueNetIdToInt64_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Uid != nullptr)
		*Uid = params.Uid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished
// (Native, Public)
// Parameters:
// class UAudioComponent*         VOIPAudioComponent             (Parm, EditInline)

void UOnlineSubsystemSteamworks::NotifyVOIPPlaybackFinished(class UAudioComponent* VOIPAudioComponent)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.NotifyVOIPPlaybackFinished");

	UOnlineSubsystemSteamworks_NotifyVOIPPlaybackFinished_Params params;
	params.VOIPAudioComponent = VOIPAudioComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished
// (Defined, Public)
// Parameters:
// class UAudioComponent*         AC                             (Parm, EditInline)

void UOnlineSubsystemSteamworks::OnVOIPPlaybackFinished(class UAudioComponent* AC)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnVOIPPlaybackFinished");

	UOnlineSubsystemSteamworks_OnVOIPPlaybackFinished_Params params;
	params.AC = AC;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 SubURL                         (OptionalParm, Parm, NeedCtorLink)
// struct FUniqueNetId            PlayerUID                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowProfileUI(unsigned char LocalUserNum, const struct FString& SubURL, const struct FUniqueNetId& PlayerUID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowProfileUI");

	UOnlineSubsystemSteamworks_ShowProfileUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SubURL = SubURL;
	params.PlayerUID = PlayerUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            Uid                            (Const, Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::UniqueNetIdToPlayerName(struct FUniqueNetId* Uid)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UniqueNetIdToPlayerName");

	UOnlineSubsystemSteamworks_UniqueNetIdToPlayerName_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Uid != nullptr)
		*Uid = params.Uid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress
// (Native, Public)
// Parameters:
// int                            AchievementId                  (Parm)
// int                            ProgressCount                  (Parm)
// int                            MaxProgress                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DisplayAchievementProgress(int AchievementId, int ProgressCount, int MaxProgress)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DisplayAchievementProgress");

	UOnlineSubsystemSteamworks_DisplayAchievementProgress_Params params;
	params.AchievementId = AchievementId;
	params.ProgressCount = ProgressCount;
	params.MaxProgress = MaxProgress;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard
// (Native, Public)
// Parameters:
// struct FString                 LeaderboardName                (Parm, NeedCtorLink)
// unsigned char                  SortType                       (Parm)
// unsigned char                  DisplayFormat                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CreateLeaderboard(const struct FString& LeaderboardName, unsigned char SortType, unsigned char DisplayFormat)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLeaderboard");

	UOnlineSubsystemSteamworks_CreateLeaderboard_Params params;
	params.LeaderboardName = LeaderboardName;
	params.SortType = SortType;
	params.DisplayFormat = DisplayFormat;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats
// (Native, Public)
// Parameters:
// bool                           bResetAchievements             (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ResetStats(bool bResetAchievements)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ResetStats");

	UOnlineSubsystemSteamworks_ResetStats_Params params;
	params.bResetAchievements = bResetAchievements;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI
// (HasOptionalparams, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Recipients                     (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 MessageTitle                   (Parm, NeedCtorLink)
// struct FString                 NonEditableMessage             (Parm, NeedCtorLink)
// struct FString                 EditableMessage                (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomMessageUI(unsigned char LocalUserNum, const struct FString& MessageTitle, const struct FString& NonEditableMessage, const struct FString& EditableMessage, TArray<struct FUniqueNetId>* Recipients)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomMessageUI");

	UOnlineSubsystemSteamworks_ShowCustomMessageUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageTitle = MessageTitle;
	params.NonEditableMessage = NonEditableMessage;
	params.EditableMessage = EditableMessage;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Recipients != nullptr)
		*Recipients = params.Recipients;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)

void UOnlineSubsystemSteamworks::ClearCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCrossTitleProfileSettings");

	UOnlineSubsystemSteamworks_ClearCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetCrossTitleProfileSettings");

	UOnlineSubsystemSteamworks_GetCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadCrossTitleProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadCrossTitleProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadCrossTitleProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadCrossTitleProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadCrossTitleProfileSettingsComplete(unsigned char LocalUserNum, int TitleId, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadCrossTitleProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnReadCrossTitleProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadCrossTitleProfileSettings(unsigned char LocalUserNum, int TitleId, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadCrossTitleProfileSettings");

	UOnlineSubsystemSteamworks_ReadCrossTitleProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AvatarItemId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockAvatarAward(unsigned char LocalUserNum, int AvatarItemId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAvatarAward");

	UOnlineSubsystemSteamworks_UnlockAvatarAward_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AvatarItemId = AvatarItemId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage
// (Native, Public)
// Parameters:
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

TArray<struct FString> UOnlineSubsystemSteamworks::EnumerateFilesOnRemoteStorage()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.EnumerateFilesOnRemoteStorage");

	UOnlineSubsystemSteamworks_EnumerateFilesOnRemoteStorage_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteFileFromRemoteStorage(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteFileFromRemoteStorage");

	UOnlineSubsystemSteamworks_DeleteFileFromRemoteStorage_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          Data                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadBytesFromRemoteStorage(const struct FString& Filename, TArray<unsigned char>* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadBytesFromRemoteStorage");

	UOnlineSubsystemSteamworks_ReadBytesFromRemoteStorage_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 Data                           (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadStringFromRemoteStorage(const struct FString& Filename, struct FString* Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadStringFromRemoteStorage");

	UOnlineSubsystemSteamworks_ReadStringFromRemoteStorage_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Data != nullptr)
		*Data = params.Data;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          Data                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteBytesToRemoteStorage(const struct FString& Filename, TArray<unsigned char> Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteBytesToRemoteStorage");

	UOnlineSubsystemSteamworks_WriteBytesToRemoteStorage_Params params;
	params.Filename = Filename;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 Data                           (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteStringToRemoteStorage(const struct FString& Filename, const struct FString& Data)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteStringToRemoteStorage");

	UOnlineSubsystemSteamworks_WriteStringToRemoteStorage_Params params;
	params.Filename = Filename;
	params.Data = Data;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData
// (Native, Public, HasOutparams)
// Parameters:
// TArray<struct FSteamPlayerClanData> Results                        (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::GetSteamClanData(TArray<struct FSteamPlayerClanData>* Results)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetSteamClanData");

	UOnlineSubsystemSteamworks_GetSteamClanData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Results != nullptr)
		*Results = params.Results;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         GetNumberOfCurrentPlayersCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetNumberOfCurrentPlayersCompleteDelegate(const struct FScriptDelegate& GetNumberOfCurrentPlayersCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetNumberOfCurrentPlayersCompleteDelegate");

	UOnlineSubsystemSteamworks_AddGetNumberOfCurrentPlayersCompleteDelegate_Params params;
	params.GetNumberOfCurrentPlayersCompleteDelegate = GetNumberOfCurrentPlayersCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete
// (Public, Delegate)
// Parameters:
// int                            TotalPlayers                   (Parm)

void UOnlineSubsystemSteamworks::OnGetNumberOfCurrentPlayersComplete(int TotalPlayers)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetNumberOfCurrentPlayersComplete");

	UOnlineSubsystemSteamworks_OnGetNumberOfCurrentPlayersComplete_Params params;
	params.TotalPlayers = TotalPlayers;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetNumberOfCurrentPlayers()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNumberOfCurrentPlayers");

	UOnlineSubsystemSteamworks_GetNumberOfCurrentPlayers_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Const, Parm)
// int                            Size                           (Parm)
// struct FScriptDelegate         ReadOnlineAvatarCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ReadOnlineAvatar(const struct FUniqueNetId& PlayerNetId, int Size, const struct FScriptDelegate& ReadOnlineAvatarCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineAvatar");

	UOnlineSubsystemSteamworks_ReadOnlineAvatar_Params params;
	params.PlayerNetId = PlayerNetId;
	params.Size = Size;
	params.ReadOnlineAvatarCompleteDelegate = ReadOnlineAvatarCompleteDelegate;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            PlayerNetId                    (Const, Parm)
// class UTexture2D*              Avatar                         (Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineAvatarComplete(const struct FUniqueNetId& PlayerNetId, class UTexture2D* Avatar)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineAvatarComplete");

	UOnlineSubsystemSteamworks_OnReadOnlineAvatarComplete_Params params;
	params.PlayerNetId = PlayerNetId;
	params.Avatar = Avatar;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI
// (Native, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// struct FString                 Title                          (Parm, NeedCtorLink)
// struct FString                 Description                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowCustomPlayersUI(unsigned char LocalUserNum, const struct FString& Title, const struct FString& Description, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowCustomPlayersUI");

	UOnlineSubsystemSteamworks_ShowCustomPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Title = Title;
	params.Description = Description;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements
// (Native, HasOptionalparams, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FAchievementDetails> Achievements                   (Parm, OutParm, NeedCtorLink)
// int                            TitleId                        (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetAchievements(unsigned char LocalUserNum, int TitleId, TArray<struct FAchievementDetails>* Achievements)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetAchievements");

	UOnlineSubsystemSteamworks_GetAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Achievements != nullptr)
		*Achievements = params.Achievements;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadAchievementsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadAchievementsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadAchievementsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadAchievementsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadAchievementsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadAchievementsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadAchievementsCompleteDelegate = ReadAchievementsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete
// (Public, Delegate)
// Parameters:
// int                            TitleId                        (Parm)

void UOnlineSubsystemSteamworks::OnReadAchievementsComplete(int TitleId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadAchievementsComplete");

	UOnlineSubsystemSteamworks_OnReadAchievementsComplete_Params params;
	params.TitleId = TitleId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            TitleId                        (OptionalParm, Parm)
// bool                           bShouldReadText                (OptionalParm, Parm)
// bool                           bShouldReadImages              (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadAchievements(unsigned char LocalUserNum, int TitleId, bool bShouldReadText, bool bShouldReadImages)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadAchievements");

	UOnlineSubsystemSteamworks_ReadAchievements_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleId = TitleId;
	params.bShouldReadText = bShouldReadText;
	params.bShouldReadImages = bShouldReadImages;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowPlayersUI(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowPlayersUI");

	UOnlineSubsystemSteamworks_ShowPlayersUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsInviteUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsInviteUI");

	UOnlineSubsystemSteamworks_ShowFriendsInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFriendsUI(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFriendsUI");

	UOnlineSubsystemSteamworks_ShowFriendsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearProfileDataChangedDelegate");

	UOnlineSubsystemSteamworks_ClearProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ProfileDataChangedDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddProfileDataChangedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ProfileDataChangedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddProfileDataChangedDelegate");

	UOnlineSubsystemSteamworks_AddProfileDataChangedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileDataChangedDelegate = ProfileDataChangedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnProfileDataChanged()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnProfileDataChanged");

	UOnlineSubsystemSteamworks_OnProfileDataChanged_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            PictureId                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockGamerPicture(unsigned char LocalUserNum, int PictureId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockGamerPicture");

	UOnlineSubsystemSteamworks_UnlockGamerPicture_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PictureId = PictureId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearUnlockAchievementCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         UnlockAchievementCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddUnlockAchievementCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& UnlockAchievementCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddUnlockAchievementCompleteDelegate");

	UOnlineSubsystemSteamworks_AddUnlockAchievementCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UnlockAchievementCompleteDelegate = UnlockAchievementCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnUnlockAchievementComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnUnlockAchievementComplete");

	UOnlineSubsystemSteamworks_OnUnlockAchievementComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            AchievementId                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnlockAchievement(unsigned char LocalUserNum, int AchievementId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnlockAchievement");

	UOnlineSubsystemSteamworks_UnlockAchievement_Params params;
	params.LocalUserNum = LocalUserNum;
	params.AchievementId = AchievementId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid
// (Native, HasOptionalparams, Public)
// Parameters:
// int                            DeviceID                       (Parm)
// int                            SizeNeeded                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsDeviceValid(int DeviceID, int SizeNeeded)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsDeviceValid");

	UOnlineSubsystemSteamworks_IsDeviceValid_Params params;
	params.DeviceID = DeviceID;
	params.SizeNeeded = SizeNeeded;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults
// (Native, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 DeviceName                     (Parm, OutParm, NeedCtorLink)
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemSteamworks::GetDeviceSelectionResults(unsigned char LocalUserNum, struct FString* DeviceName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetDeviceSelectionResults");

	UOnlineSubsystemSteamworks_GetDeviceSelectionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DeviceName != nullptr)
		*DeviceName = params.DeviceName;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDeviceSelectionDoneDelegate");

	UOnlineSubsystemSteamworks_ClearDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         DeviceDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddDeviceSelectionDoneDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& DeviceDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddDeviceSelectionDoneDelegate");

	UOnlineSubsystemSteamworks_AddDeviceSelectionDoneDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.DeviceDelegate = DeviceDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnDeviceSelectionComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnDeviceSelectionComplete");

	UOnlineSubsystemSteamworks_OnDeviceSelectionComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            SizeNeeded                     (Parm)
// bool                           bForceShow                     (OptionalParm, Parm)
// bool                           bManageStorage                 (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowDeviceSelectionUI(unsigned char LocalUserNum, int SizeNeeded, bool bForceShow, bool bManageStorage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowDeviceSelectionUI");

	UOnlineSubsystemSteamworks_ShowDeviceSelectionUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SizeNeeded = SizeNeeded;
	params.bForceShow = bForceShow;
	params.bManageStorage = bManageStorage;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMembershipMarketplaceUI(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMembershipMarketplaceUI");

	UOnlineSubsystemSteamworks_ShowMembershipMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseWebPage
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 OfferURL                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentPurchaseWebPage(unsigned char LocalUserNum, const struct FString& OfferURL)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseWebPage");

	UOnlineSubsystemSteamworks_ShowContentPurchaseWebPage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.OfferURL = OfferURL;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 Offer                          (Parm, NeedCtorLink)
// bool                           bCheckOut                      (OptionalParm, Parm)
// bool                           bPreOrder                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentPurchaseUI(unsigned char LocalUserNum, const struct FString& Offer, bool bCheckOut, bool bPreOrder)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentPurchaseUI");

	UOnlineSubsystemSteamworks_ShowContentPurchaseUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Offer = Offer;
	params.bCheckOut = bCheckOut;
	params.bPreOrder = bPreOrder;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            CategoryMask                   (OptionalParm, Parm)
// int                            OfferId                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowContentMarketplaceUI(unsigned char LocalUserNum, int CategoryMask, int OfferId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowContentMarketplaceUI");

	UOnlineSubsystemSteamworks_ShowContentMarketplaceUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.CategoryMask = CategoryMask;
	params.OfferId = OfferId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviteText                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowInviteUI(unsigned char LocalUserNum, const struct FString& InviteText)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowInviteUI");

	UOnlineSubsystemSteamworks_ShowInviteUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteText = InviteText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowAchievementsUI(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowAchievementsUI");

	UOnlineSubsystemSteamworks_ShowAchievementsUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowMessagesUI(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowMessagesUI");

	UOnlineSubsystemSteamworks_ShowMessagesUI_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowGamerCardUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowGamerCardUI");

	UOnlineSubsystemSteamworks_ShowGamerCardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowFeedbackUI(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowFeedbackUI");

	UOnlineSubsystemSteamworks_ShowFeedbackUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            MessageIndex                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteMessage(unsigned char LocalUserNum, int MessageIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteMessage");

	UOnlineSubsystemSteamworks_DeleteMessage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageIndex = MessageIndex;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteAll(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteAll");

	UOnlineSubsystemSteamworks_UnmuteAll_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bAllowFriends                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::MuteAll(unsigned char LocalUserNum, bool bAllowFriends)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteAll");

	UOnlineSubsystemSteamworks_MuteAll_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bAllowFriends = bAllowFriends;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill
// (Public, HasOutparams)
// Parameters:
// TArray<struct FDouble>         Mus                            (Parm, NeedCtorLink)
// TArray<struct FDouble>         Sigmas                         (Parm, NeedCtorLink)
// struct FDouble                 OutAggregateMu                 (Parm, OutParm)
// struct FDouble                 OutAggregateSigma              (Parm, OutParm)

void UOnlineSubsystemSteamworks::CalcAggregateSkill(TArray<struct FDouble> Mus, TArray<struct FDouble> Sigmas, struct FDouble* OutAggregateMu, struct FDouble* OutAggregateSigma)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CalcAggregateSkill");

	UOnlineSubsystemSteamworks_CalcAggregateSkill_Params params;
	params.Mus = Mus;
	params.Sigmas = Sigmas;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (OutAggregateMu != nullptr)
		*OutAggregateMu = params.OutAggregateMu;
	if (OutAggregateSigma != nullptr)
		*OutAggregateSigma = params.OutAggregateSigma;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid
// (Native, Public, HasOutparams)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// struct FString                 ClientStatGuid                 (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterStatGuid(const struct FUniqueNetId& PlayerID, struct FString* ClientStatGuid)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterStatGuid");

	UOnlineSubsystemSteamworks_RegisterStatGuid_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ClientStatGuid != nullptr)
		*ClientStatGuid = params.ClientStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetClientStatGuid()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetClientStatGuid");

	UOnlineSubsystemSteamworks_GetClientStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRegisterHostStatGuidCompleteDelegateDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRegisterHostStatGuidCompleteDelegateDelegate");

	UOnlineSubsystemSteamworks_ClearRegisterHostStatGuidCompleteDelegateDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         RegisterHostStatGuidCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRegisterHostStatGuidCompleteDelegate(const struct FScriptDelegate& RegisterHostStatGuidCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRegisterHostStatGuidCompleteDelegate");

	UOnlineSubsystemSteamworks_AddRegisterHostStatGuidCompleteDelegate_Params params;
	params.RegisterHostStatGuidCompleteDelegate = RegisterHostStatGuidCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnRegisterHostStatGuidComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRegisterHostStatGuidComplete");

	UOnlineSubsystemSteamworks_OnRegisterHostStatGuidComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 HostStatGuid                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterHostStatGuid(struct FString* HostStatGuid)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterHostStatGuid");

	UOnlineSubsystemSteamworks_RegisterHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (HostStatGuid != nullptr)
		*HostStatGuid = params.HostStatGuid;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid
// (Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetHostStatGuid()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetHostStatGuid");

	UOnlineSubsystemSteamworks_GetHostStatGuid_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendMessageReceivedDelegate");

	UOnlineSubsystemSteamworks_ClearFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         MessageDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendMessageReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& MessageDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendMessageReceivedDelegate");

	UOnlineSubsystemSteamworks_AddFriendMessageReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.MessageDelegate = MessageDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            SendingPlayer                  (Parm)
// struct FString                 SendingNick                    (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendMessageReceived(unsigned char LocalUserNum, const struct FUniqueNetId& SendingPlayer, const struct FString& SendingNick, const struct FString& Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendMessageReceived");

	UOnlineSubsystemSteamworks_OnFriendMessageReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SendingPlayer = SendingPlayer;
	params.SendingNick = SendingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages
// (Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriendMessage> FriendMessages                 (Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::GetFriendMessages(unsigned char LocalUserNum, TArray<struct FOnlineFriendMessage>* FriendMessages)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendMessages");

	UOnlineSubsystemSteamworks_GetFriendMessages_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FriendMessages != nullptr)
		*FriendMessages = params.FriendMessages;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearJoinFriendGameCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         JoinFriendGameCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddJoinFriendGameCompleteDelegate(const struct FScriptDelegate& JoinFriendGameCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddJoinFriendGameCompleteDelegate");

	UOnlineSubsystemSteamworks_AddJoinFriendGameCompleteDelegate_Params params;
	params.JoinFriendGameCompleteDelegate = JoinFriendGameCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnJoinFriendGameComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnJoinFriendGameComplete");

	UOnlineSubsystemSteamworks_OnJoinFriendGameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::JoinFriendGame(unsigned char LocalUserNum, const struct FUniqueNetId& Friend)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.JoinFriendGame");

	UOnlineSubsystemSteamworks_JoinFriendGame_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReceivedGameInviteDelegate");

	UOnlineSubsystemSteamworks_ClearReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReceivedGameInviteDelegate     (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReceivedGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReceivedGameInviteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReceivedGameInviteDelegate");

	UOnlineSubsystemSteamworks_AddReceivedGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReceivedGameInviteDelegate = ReceivedGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 InviterName                    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReceivedGameInvite(unsigned char LocalUserNum, const struct FString& InviterName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReceivedGameInvite");

	UOnlineSubsystemSteamworks_OnReceivedGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviterName = InviterName;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSentGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         SentGameInviteDelegate         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearSentGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& SentGameInviteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearSentGameInviteDelegate");

	UOnlineSubsystemSteamworks_ClearSentGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SentGameInviteDelegate = SentGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSentGameInviteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         SentGameInviteDelegate         (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddSentGameInviteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& SentGameInviteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddSentGameInviteDelegate");

	UOnlineSubsystemSteamworks_AddSentGameInviteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SentGameInviteDelegate = SentGameInviteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSentGameInvite
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnSentGameInvite(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnSentGameInvite");

	UOnlineSubsystemSteamworks_OnSentGameInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FUniqueNetId>    Friends                        (Parm, NeedCtorLink)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriends(unsigned char LocalUserNum, TArray<struct FUniqueNetId> Friends, const struct FString& Text)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriends");

	UOnlineSubsystemSteamworks_SendGameInviteToFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friends = Friends;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Text                           (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendGameInviteToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Text)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendGameInviteToFriend");

	UOnlineSubsystemSteamworks_SendGameInviteToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            Friend                         (Parm)
// struct FString                 Message                        (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SendMessageToFriend(unsigned char LocalUserNum, const struct FUniqueNetId& Friend, const struct FString& Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SendMessageToFriend");

	UOnlineSubsystemSteamworks_SendMessageToFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Friend = Friend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendInviteReceivedDelegate");

	UOnlineSubsystemSteamworks_ClearFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         InviteDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendInviteReceivedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& InviteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendInviteReceivedDelegate");

	UOnlineSubsystemSteamworks_AddFriendInviteReceivedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.InviteDelegate = InviteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// struct FString                 RequestingNick                 (Parm, NeedCtorLink)
// struct FString                 Message                        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnFriendInviteReceived(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer, const struct FString& RequestingNick, const struct FString& Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendInviteReceived");

	UOnlineSubsystemSteamworks_OnFriendInviteReceived_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;
	params.RequestingNick = RequestingNick;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DenyFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DenyFriendInvite");

	UOnlineSubsystemSteamworks_DenyFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            RequestingPlayer               (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AcceptFriendInvite(unsigned char LocalUserNum, const struct FUniqueNetId& RequestingPlayer)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AcceptFriendInvite");

	UOnlineSubsystemSteamworks_AcceptFriendInvite_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RequestingPlayer = RequestingPlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            FormerFriend                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RemoveFriend(unsigned char LocalUserNum, const struct FUniqueNetId& FormerFriend)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RemoveFriend");

	UOnlineSubsystemSteamworks_RemoveFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FormerFriend = FormerFriend;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearAddFriendByNameCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddAddFriendByNameCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddAddFriendByNameCompleteDelegate");

	UOnlineSubsystemSteamworks_AddAddFriendByNameCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendDelegate = FriendDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnAddFriendByNameComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnAddFriendByNameComplete");

	UOnlineSubsystemSteamworks_OnAddFriendByNameComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FriendName                     (Parm, NeedCtorLink)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriendByName(unsigned char LocalUserNum, const struct FString& FriendName, const struct FString& Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendByName");

	UOnlineSubsystemSteamworks_AddFriendByName_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendName = FriendName;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NewFriend                      (Parm)
// struct FString                 Message                        (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AddFriend(unsigned char LocalUserNum, const struct FUniqueNetId& NewFriend, const struct FString& Message)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriend");

	UOnlineSubsystemSteamworks_AddFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NewFriend = NewFriend;
	params.Message = Message;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults
// (Defined, Public, HasOutparams)
// Parameters:
// unsigned char                  bWasCanceled                   (Parm, OutParm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetKeyboardInputResults(unsigned char* bWasCanceled)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetKeyboardInputResults");

	UOnlineSubsystemSteamworks_GetKeyboardInputResults_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (bWasCanceled != nullptr)
		*bWasCanceled = params.bWasCanceled;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearKeyboardInputDoneDelegate");

	UOnlineSubsystemSteamworks_ClearKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         InputDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddKeyboardInputDoneDelegate(const struct FScriptDelegate& InputDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddKeyboardInputDoneDelegate");

	UOnlineSubsystemSteamworks_AddKeyboardInputDoneDelegate_Params params;
	params.InputDelegate = InputDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnKeyboardInputComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnKeyboardInputComplete");

	UOnlineSubsystemSteamworks_OnKeyboardInputComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 TitleText                      (Parm, NeedCtorLink)
// struct FString                 DescriptionText                (Parm, NeedCtorLink)
// unsigned char                  KeyboardType                   (OptionalParm, Parm)
// bool                           bShouldValidate                (OptionalParm, Parm)
// struct FString                 DefaultText                    (OptionalParm, Parm, NeedCtorLink)
// int                            MaxResultLength                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowKeyboardUI(unsigned char LocalUserNum, const struct FString& TitleText, const struct FString& DescriptionText, unsigned char KeyboardType, bool bShouldValidate, const struct FString& DefaultText, int MaxResultLength)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowKeyboardUI");

	UOnlineSubsystemSteamworks_ShowKeyboardUI_Params params;
	params.LocalUserNum = LocalUserNum;
	params.TitleText = TitleText;
	params.DescriptionText = DescriptionText;
	params.KeyboardType = KeyboardType;
	params.bShouldValidate = bShouldValidate;
	params.DefaultText = DefaultText;
	params.MaxResultLength = MaxResultLength;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus
// (Native, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            StatusId                       (Parm)
// TArray<struct FLocalizedStringSetting> LocalizedStringSettings        (Const, Parm, OutParm, NeedCtorLink)
// TArray<struct FSettingsProperty> Properties                     (Const, Parm, OutParm, NeedCtorLink)

void UOnlineSubsystemSteamworks::SetOnlineStatus(unsigned char LocalUserNum, int StatusId, TArray<struct FLocalizedStringSetting>* LocalizedStringSettings, TArray<struct FSettingsProperty>* Properties)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetOnlineStatus");

	UOnlineSubsystemSteamworks_SetOnlineStatus_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatusId = StatusId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (LocalizedStringSettings != nullptr)
		*LocalizedStringSettings = params.LocalizedStringSettings;
	if (Properties != nullptr)
		*Properties = params.Properties;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames
// (Public, HasOutparams)
// Parameters:
// TArray<struct FString>         Accounts                       (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetLocalAccountNames(TArray<struct FString>* Accounts)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocalAccountNames");

	UOnlineSubsystemSteamworks_GetLocalAccountNames_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Accounts != nullptr)
		*Accounts = params.Accounts;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount
// (HasOptionalparams, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::DeleteLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.DeleteLocalAccount");

	UOnlineSubsystemSteamworks_DeleteLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount
// (HasOptionalparams, Public)
// Parameters:
// struct FString                 NewUserName                    (Parm, NeedCtorLink)
// struct FString                 OldUserName                    (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RenameLocalAccount(const struct FString& NewUserName, const struct FString& OldUserName, const struct FString& Password)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RenameLocalAccount");

	UOnlineSubsystemSteamworks_RenameLocalAccount_Params params;
	params.NewUserName = NewUserName;
	params.OldUserName = OldUserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount
// (HasOptionalparams, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CreateLocalAccount(const struct FString& UserName, const struct FString& Password)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateLocalAccount");

	UOnlineSubsystemSteamworks_CreateLocalAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemSteamworks_ClearCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         AccountCreateDelegate          (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddCreateOnlineAccountCompletedDelegate(const struct FScriptDelegate& AccountCreateDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddCreateOnlineAccountCompletedDelegate");

	UOnlineSubsystemSteamworks_AddCreateOnlineAccountCompletedDelegate_Params params;
	params.AccountCreateDelegate = AccountCreateDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted
// (Public, Delegate)
// Parameters:
// unsigned char                  ErrorStatus                    (Parm)

void UOnlineSubsystemSteamworks::OnCreateOnlineAccountCompleted(unsigned char ErrorStatus)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnCreateOnlineAccountCompleted");

	UOnlineSubsystemSteamworks_OnCreateOnlineAccountCompleted_Params params;
	params.ErrorStatus = ErrorStatus;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount
// (Native, HasOptionalparams, Public)
// Parameters:
// struct FString                 UserName                       (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// struct FString                 EmailAddress                   (Parm, NeedCtorLink)
// struct FString                 ProductKey                     (OptionalParm, Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::CreateOnlineAccount(const struct FString& UserName, const struct FString& Password, const struct FString& EmailAddress, const struct FString& ProductKey)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CreateOnlineAccount");

	UOnlineSubsystemSteamworks_CreateOnlineAccount_Params params;
	params.UserName = UserName;
	params.Password = Password;
	params.EmailAddress = EmailAddress;
	params.ProductKey = ProductKey;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFile
// (Native, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearDownloadedFile(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFile");

	UOnlineSubsystemSteamworks_ClearDownloadedFile_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFiles
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ClearDownloadedFiles()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearDownloadedFiles");

	UOnlineSubsystemSteamworks_ClearDownloadedFiles_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState
// (Defined, Public)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetTitleFileState(const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileState");

	UOnlineSubsystemSteamworks_GetTitleFileState_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents
// (Native, Public, HasOutparams)
// Parameters:
// struct FString                 Filename                       (Parm, NeedCtorLink)
// TArray<unsigned char>          FileContents                   (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetTitleFileContents(const struct FString& Filename, TArray<unsigned char>* FileContents)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetTitleFileContents");

	UOnlineSubsystemSteamworks_GetTitleFileContents_Params params;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (FileContents != nullptr)
		*FileContents = params.FileContents;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadTitleFileCompleteDelegate(const struct FScriptDelegate& ReadTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadTitleFileCompleteDelegate_Params params;
	params.ReadTitleFileCompleteDelegate = ReadTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 FileToRead                     (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadTitleFile(unsigned char LocalUserNum, const struct FString& FileToRead)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadTitleFile");

	UOnlineSubsystemSteamworks_ReadTitleFile_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FileToRead = FileToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnReadTitleFileComplete(bool bWasSuccessful, const struct FString& Filename)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadTitleFileComplete");

	UOnlineSubsystemSteamworks_OnReadTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShareTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearShareTitleFileCompleteDelegate(const struct FScriptDelegate& ShareTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearShareTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearShareTitleFileCompleteDelegate_Params params;
	params.ShareTitleFileCompleteDelegate = ShareTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShareTitleFileCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddShareTitleFileCompleteDelegate(const struct FScriptDelegate& ShareTitleFileCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddShareTitleFileCompleteDelegate");

	UOnlineSubsystemSteamworks_AddShareTitleFileCompleteDelegate_Params params;
	params.ShareTitleFileCompleteDelegate = ShareTitleFileCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShareTitleFile
// (Native, Public)
// Parameters:
// struct FString                 FileToShare                    (Parm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShareTitleFile(const struct FString& FileToShare)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShareTitleFile");

	UOnlineSubsystemSteamworks_ShareTitleFile_Params params;
	params.FileToShare = FileToShare;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShareTitleFileComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)
// struct FString                 Filename                       (Parm, NeedCtorLink)
// struct FString                 UGCHandle                      (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::OnShareTitleFileComplete(bool bWasSuccessful, const struct FString& Filename, const struct FString& UGCHandle)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnShareTitleFileComplete");

	UOnlineSubsystemSteamworks_OnShareTitleFileComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;
	params.Filename = Filename;
	params.UGCHandle = UGCHandle;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearStorageDeviceChangeDelegate");

	UOnlineSubsystemSteamworks_ClearStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         StorageDeviceChangeDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddStorageDeviceChangeDelegate(const struct FScriptDelegate& StorageDeviceChangeDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddStorageDeviceChangeDelegate");

	UOnlineSubsystemSteamworks_AddStorageDeviceChangeDelegate_Params params;
	params.StorageDeviceChangeDelegate = StorageDeviceChangeDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnStorageDeviceChange()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnStorageDeviceChange");

	UOnlineSubsystemSteamworks_OnStorageDeviceChange_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale
// (Defined, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ReturnParm)

int UOnlineSubsystemSteamworks::GetLocale()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLocale");

	UOnlineSubsystemSteamworks_GetLocale_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType
// (Native, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetNATType()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNATType");

	UOnlineSubsystemSteamworks_GetNATType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearConnectionStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ConnectionStatusDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddConnectionStatusChangeDelegate(const struct FScriptDelegate& ConnectionStatusDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddConnectionStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddConnectionStatusChangeDelegate_Params params;
	params.ConnectionStatusDelegate = ConnectionStatusDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange
// (Public, Delegate)
// Parameters:
// unsigned char                  ConnectionStatus               (Parm)

void UOnlineSubsystemSteamworks::OnConnectionStatusChange(unsigned char ConnectionStatus)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnConnectionStatusChange");

	UOnlineSubsystemSteamworks_OnConnectionStatusChange_Params params;
	params.ConnectionStatus = ConnectionStatus;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected
// (Native, Public)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsControllerConnected(int ControllerId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsControllerConnected");

	UOnlineSubsystemSteamworks_IsControllerConnected_Params params;
	params.ControllerId = ControllerId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearControllerChangeDelegate");

	UOnlineSubsystemSteamworks_ClearControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ControllerChangeDelegate       (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddControllerChangeDelegate(const struct FScriptDelegate& ControllerChangeDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddControllerChangeDelegate");

	UOnlineSubsystemSteamworks_AddControllerChangeDelegate_Params params;
	params.ControllerChangeDelegate = ControllerChangeDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange
// (Public, Delegate)
// Parameters:
// int                            ControllerId                   (Parm)
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemSteamworks::OnControllerChange(int ControllerId, bool bIsConnected)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnControllerChange");

	UOnlineSubsystemSteamworks_OnControllerChange_Params params;
	params.ControllerId = ControllerId;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition
// (Native, Public)
// Parameters:
// unsigned char                  NewPos                         (Parm)

void UOnlineSubsystemSteamworks::SetNetworkNotificationPosition(unsigned char NewPos)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetNetworkNotificationPosition");

	UOnlineSubsystemSteamworks_SetNetworkNotificationPosition_Params params;
	params.NewPos = NewPos;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition
// (Defined, Public)
// Parameters:
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetNetworkNotificationPosition()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetNetworkNotificationPosition");

	UOnlineSubsystemSteamworks_GetNetworkNotificationPosition_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearExternalUIChangeDelegate");

	UOnlineSubsystemSteamworks_ClearExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ExternalUIDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddExternalUIChangeDelegate(const struct FScriptDelegate& ExternalUIDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddExternalUIChangeDelegate");

	UOnlineSubsystemSteamworks_AddExternalUIChangeDelegate_Params params;
	params.ExternalUIDelegate = ExternalUIDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange
// (Public, Delegate)
// Parameters:
// bool                           bIsOpening                     (Parm)

void UOnlineSubsystemSteamworks::OnExternalUIChange(bool bIsOpening)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnExternalUIChange");

	UOnlineSubsystemSteamworks_OnExternalUIChange_Params params;
	params.bIsOpening = bIsOpening;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLinkStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LinkStatusDelegate             (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLinkStatusChangeDelegate(const struct FScriptDelegate& LinkStatusDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLinkStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddLinkStatusChangeDelegate_Params params;
	params.LinkStatusDelegate = LinkStatusDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange
// (Public, Delegate)
// Parameters:
// bool                           bIsConnected                   (Parm)

void UOnlineSubsystemSteamworks::OnLinkStatusChange(bool bIsConnected)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLinkStatusChange");

	UOnlineSubsystemSteamworks_OnLinkStatusChange_Params params;
	params.bIsConnected = bIsConnected;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::HasLinkConnection()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.HasLinkConnection");

	UOnlineSubsystemSteamworks_HasLinkConnection_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex
// (Defined, Event, Public, HasDefaults)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FUniqueNetId            ReturnValue                    (Parm, OutParm, ReturnParm)

struct FUniqueNetId UOnlineSubsystemSteamworks::GetPlayerUniqueNetIdFromIndex(int UserIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerUniqueNetIdFromIndex");

	UOnlineSubsystemSteamworks_GetPlayerUniqueNetIdFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex
// (Defined, Event, Public)
// Parameters:
// int                            UserIndex                      (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerNicknameFromIndex(int UserIndex)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNicknameFromIndex");

	UOnlineSubsystemSteamworks_GetPlayerNicknameFromIndex_Params params;
	params.UserIndex = UserIndex;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores
// (Native, Public, HasOutparams)
// Parameters:
// struct FName                   SessionName                    (Parm)
// int                            LeaderboardId                  (Parm)
// TArray<struct FOnlinePlayerScore> PlayerScores                   (Const, Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlinePlayerScores(const struct FName& SessionName, int LeaderboardId, TArray<struct FOnlinePlayerScore>* PlayerScores)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlinePlayerScores");

	UOnlineSubsystemSteamworks_WriteOnlinePlayerScores_Params params;
	params.SessionName = SessionName;
	params.LeaderboardId = LeaderboardId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerScores != nullptr)
		*PlayerScores = params.PlayerScores;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         FlushOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFlushOnlineStatsCompleteDelegate(const struct FScriptDelegate& FlushOnlineStatsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFlushOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddFlushOnlineStatsCompleteDelegate_Params params;
	params.FlushOnlineStatsCompleteDelegate = FlushOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnFlushOnlineStatsComplete(const struct FName& SessionName, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFlushOnlineStatsComplete");

	UOnlineSubsystemSteamworks_OnFlushOnlineStatsComplete_Params params;
	params.SessionName = SessionName;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::FlushOnlineStats(const struct FName& SessionName)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FlushOnlineStats");

	UOnlineSubsystemSteamworks_FlushOnlineStats_Params params;
	params.SessionName = SessionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats
// (Native, Public)
// Parameters:
// struct FName                   SessionName                    (Parm)
// struct FUniqueNetId            Player                         (Parm)
// class UOnlineStatsWrite*       StatsWrite                     (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteOnlineStats(const struct FName& SessionName, const struct FUniqueNetId& Player, class UOnlineStatsWrite* StatsWrite)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteOnlineStats");

	UOnlineSubsystemSteamworks_WriteOnlineStats_Params params;
	params.SessionName = SessionName;
	params.Player = Player;
	params.StatsWrite = StatsWrite;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats
// (Native, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)

void UOnlineSubsystemSteamworks::FreeStats(class UOnlineStatsRead* StatsRead)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.FreeStats");

	UOnlineSubsystemSteamworks_FreeStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         ReadOnlineStatsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadOnlineStatsCompleteDelegate(const struct FScriptDelegate& ReadOnlineStatsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadOnlineStatsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadOnlineStatsCompleteDelegate_Params params;
	params.ReadOnlineStatsCompleteDelegate = ReadOnlineStatsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadOnlineStatsComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadOnlineStatsComplete");

	UOnlineSubsystemSteamworks_OnReadOnlineStatsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            NumRows                        (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRankAroundPlayer(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead, int NumRows)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRankAroundPlayer");

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRankAroundPlayer_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;
	params.NumRows = NumRows;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank
// (Native, HasOptionalparams, Public)
// Parameters:
// class UOnlineStatsRead*        StatsRead                      (Parm)
// int                            StartIndex                     (OptionalParm, Parm)
// int                            NumToRead                      (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsByRank(class UOnlineStatsRead* StatsRead, int StartIndex, int NumToRead)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsByRank");

	UOnlineSubsystemSteamworks_ReadOnlineStatsByRank_Params params;
	params.StatsRead = StatsRead;
	params.StartIndex = StartIndex;
	params.NumToRead = NumToRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStatsForFriends(unsigned char LocalUserNum, class UOnlineStatsRead* StatsRead)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStatsForFriends");

	UOnlineSubsystemSteamworks_ReadOnlineStatsForFriends_Params params;
	params.LocalUserNum = LocalUserNum;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats
// (Native, Public, HasOutparams)
// Parameters:
// TArray<struct FUniqueNetId>    Players                        (Const, Parm, OutParm, NeedCtorLink)
// class UOnlineStatsRead*        StatsRead                      (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadOnlineStats(class UOnlineStatsRead* StatsRead, TArray<struct FUniqueNetId>* Players)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadOnlineStats");

	UOnlineSubsystemSteamworks_ReadOnlineStats_Params params;
	params.StatsRead = StatsRead;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Players != nullptr)
		*Players = params.Players;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class USpeechRecognition*      SpeechRecogObj                 (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetSpeechRecognitionObject(unsigned char LocalUserNum, class USpeechRecognition* SpeechRecogObj)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetSpeechRecognitionObject");

	UOnlineSubsystemSteamworks_SetSpeechRecognitionObject_Params params;
	params.LocalUserNum = LocalUserNum;
	params.SpeechRecogObj = SpeechRecogObj;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            VocabularyId                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SelectVocabulary(unsigned char LocalUserNum, int VocabularyId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SelectVocabulary");

	UOnlineSubsystemSteamworks_SelectVocabulary_Params params;
	params.LocalUserNum = LocalUserNum;
	params.VocabularyId = VocabularyId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearRecognitionCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         RecognitionDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddRecognitionCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& RecognitionDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddRecognitionCompleteDelegate");

	UOnlineSubsystemSteamworks_AddRecognitionCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.RecognitionDelegate = RecognitionDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnRecognitionComplete()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnRecognitionComplete");

	UOnlineSubsystemSteamworks_OnRecognitionComplete_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults
// (Native, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FSpeechRecognizedWord> Words                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetRecognitionResults(unsigned char LocalUserNum, TArray<struct FSpeechRecognizedWord>* Words)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetRecognitionResults");

	UOnlineSubsystemSteamworks_GetRecognitionResults_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Words != nullptr)
		*Words = params.Words;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::StopSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopSpeechRecognition");

	UOnlineSubsystemSteamworks_StopSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::StartSpeechRecognition(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartSpeechRecognition");

	UOnlineSubsystemSteamworks_StartSpeechRecognition_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::StopNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StopNetworkedVoice");

	UOnlineSubsystemSteamworks_StopNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::StartNetworkedVoice(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.StartNetworkedVoice");

	UOnlineSubsystemSteamworks_StartNetworkedVoice_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearPlayerTalkingDelegate");

	UOnlineSubsystemSteamworks_ClearPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         TalkerDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddPlayerTalkingDelegate(const struct FScriptDelegate& TalkerDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddPlayerTalkingDelegate");

	UOnlineSubsystemSteamworks_AddPlayerTalkingDelegate_Params params;
	params.TalkerDelegate = TalkerDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            Player                         (Parm)
// bool                           bIsTalking                     (Parm)

void UOnlineSubsystemSteamworks::OnPlayerTalkingStateChange(const struct FUniqueNetId& Player, bool bIsTalking)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnPlayerTalkingStateChange");

	UOnlineSubsystemSteamworks_OnPlayerTalkingStateChange_Params params;
	params.Player = Player;
	params.bIsTalking = bIsTalking;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnmuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnmuteRemoteTalker");

	UOnlineSubsystemSteamworks_UnmuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           bIsSystemWide                  (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::MuteRemoteTalker(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, bool bIsSystemWide)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.MuteRemoteTalker");

	UOnlineSubsystemSteamworks_MuteRemoteTalker_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.bIsSystemWide = bIsSystemWide;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// int                            Priority                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::SetRemoteTalkerPriority(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID, int Priority)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.SetRemoteTalkerPriority");

	UOnlineSubsystemSteamworks_SetRemoteTalkerPriority_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;
	params.Priority = Priority;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsHeadsetPresent(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsHeadsetPresent");

	UOnlineSubsystemSteamworks_IsHeadsetPresent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsRemotePlayerTalking(const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsRemotePlayerTalking");

	UOnlineSubsystemSteamworks_IsRemotePlayerTalking_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsLocalPlayerTalking(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalPlayerTalking");

	UOnlineSubsystemSteamworks_IsLocalPlayerTalking_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterRemoteTalker");

	UOnlineSubsystemSteamworks_UnregisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker
// (Native, Public)
// Parameters:
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterRemoteTalker(const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterRemoteTalker");

	UOnlineSubsystemSteamworks_RegisterRemoteTalker_Params params;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::UnregisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.UnregisterLocalTalker");

	UOnlineSubsystemSteamworks_UnregisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::RegisterLocalTalker(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.RegisterLocalTalker");

	UOnlineSubsystemSteamworks_RegisterLocalTalker_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList
// (Native, HasOptionalparams, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FOnlineFriend>   Friends                        (Parm, OutParm, NeedCtorLink)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetFriendsList(unsigned char LocalUserNum, int Count, int StartingAt, TArray<struct FOnlineFriend>* Friends)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetFriendsList");

	UOnlineSubsystemSteamworks_GetFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Friends != nullptr)
		*Friends = params.Friends;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadFriendsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadFriendsCompleteDelegate    (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadFriendsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadFriendsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadFriendsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadFriendsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadFriendsCompleteDelegate = ReadFriendsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadFriendsComplete(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadFriendsComplete");

	UOnlineSubsystemSteamworks_OnReadFriendsComplete_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// int                            Count                          (OptionalParm, Parm)
// int                            StartingAt                     (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadFriendsList(unsigned char LocalUserNum, int Count, int StartingAt)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadFriendsList");

	UOnlineSubsystemSteamworks_ReadFriendsList_Params params;
	params.LocalUserNum = LocalUserNum;
	params.Count = Count;
	params.StartingAt = StartingAt;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WritePlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWritePlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WritePlayerStorageCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWritePlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWritePlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WritePlayerStorageCompleteDelegate = WritePlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnWritePlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWritePlayerStorageComplete");

	UOnlineSubsystemSteamworks_OnWritePlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage
// (HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WritePlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WritePlayerStorage");

	UOnlineSubsystemSteamworks_WritePlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlinePlayerStorage* UOnlineSubsystemSteamworks::GetPlayerStorage(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerStorage");

	UOnlineSubsystemSteamworks_GetPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate
// (Defined, Public)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// struct FScriptDelegate         ReadPlayerStorageForNetIdCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageForNetIdCompleteDelegate(const struct FUniqueNetId& NetId, const struct FScriptDelegate& ReadPlayerStorageForNetIdCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageForNetIdCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadPlayerStorageForNetIdCompleteDelegate_Params params;
	params.NetId = NetId;
	params.ReadPlayerStorageForNetIdCompleteDelegate = ReadPlayerStorageForNetIdCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete
// (Public, Delegate)
// Parameters:
// struct FUniqueNetId            NetId                          (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageForNetIdComplete(const struct FUniqueNetId& NetId, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageForNetIdComplete");

	UOnlineSubsystemSteamworks_OnReadPlayerStorageForNetIdComplete_Params params;
	params.NetId = NetId;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            NetId                          (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorageForNetId(unsigned char LocalUserNum, const struct FUniqueNetId& NetId, class UOnlinePlayerStorage* PlayerStorage)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorageForNetId");

	UOnlineSubsystemSteamworks_ReadPlayerStorageForNetId_Params params;
	params.LocalUserNum = LocalUserNum;
	params.NetId = NetId;
	params.PlayerStorage = PlayerStorage;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadPlayerStorageCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadPlayerStorageCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadPlayerStorageCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadPlayerStorageCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadPlayerStorageCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadPlayerStorageCompleteDelegate = ReadPlayerStorageCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadPlayerStorageComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadPlayerStorageComplete");

	UOnlineSubsystemSteamworks_OnReadPlayerStorageComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage
// (HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlinePlayerStorage*    PlayerStorage                  (Parm)
// int                            DeviceID                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadPlayerStorage(unsigned char LocalUserNum, class UOnlinePlayerStorage* PlayerStorage, int DeviceID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadPlayerStorage");

	UOnlineSubsystemSteamworks_ReadPlayerStorage_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerStorage = PlayerStorage;
	params.DeviceID = DeviceID;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         WriteProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddWriteProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& WriteProfileSettingsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddWriteProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddWriteProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.WriteProfileSettingsCompleteDelegate = WriteProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnWriteProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnWriteProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnWriteProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::WriteProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.WriteProfileSettings");

	UOnlineSubsystemSteamworks_WriteProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ReturnValue                    (Parm, OutParm, ReturnParm)

class UOnlineProfileSettings* UOnlineSubsystemSteamworks::GetProfileSettings(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetProfileSettings");

	UOnlineSubsystemSteamworks_GetProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_ClearReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         ReadProfileSettingsCompleteDelegate (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddReadProfileSettingsCompleteDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& ReadProfileSettingsCompleteDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddReadProfileSettingsCompleteDelegate");

	UOnlineSubsystemSteamworks_AddReadProfileSettingsCompleteDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ReadProfileSettingsCompleteDelegate = ReadProfileSettingsCompleteDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnReadProfileSettingsComplete(unsigned char LocalUserNum, bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnReadProfileSettingsComplete");

	UOnlineSubsystemSteamworks_OnReadProfileSettingsComplete_Params params;
	params.LocalUserNum = LocalUserNum;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// class UOnlineProfileSettings*  ProfileSettings                (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ReadProfileSettings(unsigned char LocalUserNum, class UOnlineProfileSettings* ProfileSettings)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ReadProfileSettings");

	UOnlineSubsystemSteamworks_ReadProfileSettings_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ProfileSettings = ProfileSettings;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearFriendsChangeDelegate");

	UOnlineSubsystemSteamworks_ClearFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         FriendsDelegate                (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddFriendsChangeDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& FriendsDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddFriendsChangeDelegate");

	UOnlineSubsystemSteamworks_AddFriendsChangeDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.FriendsDelegate = FriendsDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearMutingChangeDelegate");

	UOnlineSubsystemSteamworks_ClearMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         MutingDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddMutingChangeDelegate(const struct FScriptDelegate& MutingDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddMutingChangeDelegate");

	UOnlineSubsystemSteamworks_AddMutingChangeDelegate_Params params;
	params.MutingDelegate = MutingDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginCancelledDelegate");

	UOnlineSubsystemSteamworks_ClearLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate
// (Public)
// Parameters:
// struct FScriptDelegate         CancelledDelegate              (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginCancelledDelegate(const struct FScriptDelegate& CancelledDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginCancelledDelegate");

	UOnlineSubsystemSteamworks_AddLoginCancelledDelegate_Params params;
	params.CancelledDelegate = CancelledDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::ClearLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginStatusChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginStatusDelegate            (Parm, NeedCtorLink)
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::AddLoginStatusChangeDelegate(const struct FScriptDelegate& LoginStatusDelegate, unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginStatusChangeDelegate");

	UOnlineSubsystemSteamworks_AddLoginStatusChangeDelegate_Params params;
	params.LoginStatusDelegate = LoginStatusDelegate;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange
// (Public, Delegate)
// Parameters:
// unsigned char                  NewStatus                      (Parm)
// struct FUniqueNetId            NewId                          (Parm)

void UOnlineSubsystemSteamworks::OnLoginStatusChange(unsigned char NewStatus, const struct FUniqueNetId& NewId)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginStatusChange");

	UOnlineSubsystemSteamworks_OnLoginStatusChange_Params params;
	params.NewStatus = NewStatus;
	params.NewId = NewId;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginChangeDelegate");

	UOnlineSubsystemSteamworks_ClearLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate
// (Defined, Public)
// Parameters:
// struct FScriptDelegate         LoginDelegate                  (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginChangeDelegate(const struct FScriptDelegate& LoginDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginChangeDelegate");

	UOnlineSubsystemSteamworks_AddLoginChangeDelegate_Params params;
	params.LoginDelegate = LoginDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsMuted(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsMuted");

	UOnlineSubsystemSteamworks_IsMuted_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends
// (Native, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// TArray<struct FFriendsQuery>   Query                          (Parm, OutParm, NeedCtorLink)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AreAnyFriends(unsigned char LocalUserNum, TArray<struct FFriendsQuery>* Query)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AreAnyFriends");

	UOnlineSubsystemSteamworks_AreAnyFriends_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Query != nullptr)
		*Query = params.Query;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsFriend(unsigned char LocalUserNum, const struct FUniqueNetId& PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsFriend");

	UOnlineSubsystemSteamworks_IsFriend_Params params;
	params.LocalUserNum = LocalUserNum;
	params.PlayerID = PlayerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::CanShowPresenceInformation(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanShowPresenceInformation");

	UOnlineSubsystemSteamworks_CanShowPresenceInformation_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::CanViewPlayerProfiles(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanViewPlayerProfiles");

	UOnlineSubsystemSteamworks_CanViewPlayerProfiles_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::CanPurchaseContent(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPurchaseContent");

	UOnlineSubsystemSteamworks_CanPurchaseContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::CanDownloadUserContent(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanDownloadUserContent");

	UOnlineSubsystemSteamworks_CanDownloadUserContent_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::CanCommunicate(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanCommunicate");

	UOnlineSubsystemSteamworks_CanCommunicate_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::CanPlayOnline(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.CanPlayOnline");

	UOnlineSubsystemSteamworks_CanPlayOnline_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAgeGroupDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GetUserAgeGroupDelegate        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearGetUserAgeGroupDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GetUserAgeGroupDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearGetUserAgeGroupDelegate");

	UOnlineSubsystemSteamworks_ClearGetUserAgeGroupDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GetUserAgeGroupDelegate = GetUserAgeGroupDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAgeGroupDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         GetUserAgeGroupDelegate        (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddGetUserAgeGroupDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& GetUserAgeGroupDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddGetUserAgeGroupDelegate");

	UOnlineSubsystemSteamworks_AddGetUserAgeGroupDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.GetUserAgeGroupDelegate = GetUserAgeGroupDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAgeGroup
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetUserAgeGroup(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUserAgeGroup");

	UOnlineSubsystemSteamworks_GetUserAgeGroup_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetUserAgeGroup
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  UserAgeGroup                   (Parm)

void UOnlineSubsystemSteamworks::OnGetUserAgeGroup(unsigned char LocalUserNum, unsigned char UserAgeGroup)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnGetUserAgeGroup");

	UOnlineSubsystemSteamworks_OnGetUserAgeGroup_Params params;
	params.LocalUserNum = LocalUserNum;
	params.UserAgeGroup = UserAgeGroup;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 ReturnValue                    (Parm, OutParm, ReturnParm, NeedCtorLink)

struct FString UOnlineSubsystemSteamworks::GetPlayerNickname(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetPlayerNickname");

	UOnlineSubsystemSteamworks_GetPlayerNickname_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId
// (Defined, Public, HasOutparams)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FUniqueNetId            PlayerID                       (Parm, OutParm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::GetUniquePlayerId(unsigned char LocalUserNum, struct FUniqueNetId* PlayerID)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetUniquePlayerId");

	UOnlineSubsystemSteamworks_GetUniquePlayerId_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (PlayerID != nullptr)
		*PlayerID = params.PlayerID;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsLocalLogin(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsLocalLogin");

	UOnlineSubsystemSteamworks_IsLocalLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin
// (Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::IsGuestLogin(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.IsGuestLogin");

	UOnlineSubsystemSteamworks_IsGuestLogin_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ReturnValue                    (Parm, OutParm, ReturnParm)

unsigned char UOnlineSubsystemSteamworks::GetLoginStatus(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.GetLoginStatus");

	UOnlineSubsystemSteamworks_GetLoginStatus_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLogoutCompletedDelegate");

	UOnlineSubsystemSteamworks_ClearLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LogoutDelegate                 (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLogoutCompletedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LogoutDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLogoutCompletedDelegate");

	UOnlineSubsystemSteamworks_AddLogoutCompletedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LogoutDelegate = LogoutDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted
// (Public, Delegate)
// Parameters:
// bool                           bWasSuccessful                 (Parm)

void UOnlineSubsystemSteamworks::OnLogoutCompleted(bool bWasSuccessful)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLogoutCompleted");

	UOnlineSubsystemSteamworks_OnLogoutCompleted_Params params;
	params.bWasSuccessful = bWasSuccessful;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout
// (Native, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Logout(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Logout");

	UOnlineSubsystemSteamworks_Logout_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::ClearLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ClearLoginFailedDelegate");

	UOnlineSubsystemSteamworks_ClearLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate
// (Defined, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FScriptDelegate         LoginFailedDelegate            (Parm, NeedCtorLink)

void UOnlineSubsystemSteamworks::AddLoginFailedDelegate(unsigned char LocalUserNum, const struct FScriptDelegate& LoginFailedDelegate)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AddLoginFailedDelegate");

	UOnlineSubsystemSteamworks_AddLoginFailedDelegate_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginFailedDelegate = LoginFailedDelegate;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// unsigned char                  ErrorCode                      (Parm)

void UOnlineSubsystemSteamworks::OnLoginFailed(unsigned char LocalUserNum, unsigned char ErrorCode)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginFailed");

	UOnlineSubsystemSteamworks_OnLoginFailed_Params params;
	params.LocalUserNum = LocalUserNum;
	params.ErrorCode = ErrorCode;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::AutoLogin()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.AutoLogin");

	UOnlineSubsystemSteamworks_AutoLogin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login
// (Native, HasOptionalparams, Public)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)
// struct FString                 LoginName                      (Parm, NeedCtorLink)
// struct FString                 Password                       (Parm, NeedCtorLink)
// bool                           bWantsLocalOnly                (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Login(unsigned char LocalUserNum, const struct FString& LoginName, const struct FString& Password, bool bWantsLocalOnly)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Login");

	UOnlineSubsystemSteamworks_Login_Params params;
	params.LocalUserNum = LocalUserNum;
	params.LoginName = LoginName;
	params.Password = Password;
	params.bWantsLocalOnly = bWantsLocalOnly;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI
// (Native, HasOptionalparams, Public)
// Parameters:
// bool                           bShowOnlineOnly                (OptionalParm, Parm)
// int                            NumLoginOverride               (OptionalParm, Parm)
// bool                           bAddUser                       (OptionalParm, Parm)
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::ShowLoginUI(bool bShowOnlineOnly, int NumLoginOverride, bool bAddUser)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.ShowLoginUI");

	UOnlineSubsystemSteamworks_ShowLoginUI_Params params;
	params.bShowOnlineOnly = bShowOnlineOnly;
	params.NumLoginOverride = NumLoginOverride;
	params.bAddUser = bAddUser;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnFriendsChange()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnFriendsChange");

	UOnlineSubsystemSteamworks_OnFriendsChange_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnMutingChange()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnMutingChange");

	UOnlineSubsystemSteamworks_OnMutingChange_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled
// (Public, Delegate)

void UOnlineSubsystemSteamworks::OnLoginCancelled()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginCancelled");

	UOnlineSubsystemSteamworks_OnLoginCancelled_Params params;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange
// (Public, Delegate)
// Parameters:
// unsigned char                  LocalUserNum                   (Parm)

void UOnlineSubsystemSteamworks::OnLoginChange(unsigned char LocalUserNum)
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.OnLoginChange");

	UOnlineSubsystemSteamworks_OnLoginChange_Params params;
	params.LocalUserNum = LocalUserNum;

	auto flags = fn->FunctionFlags;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit
// (Native, Event, Public)

void UOnlineSubsystemSteamworks::Exit()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Exit");

	UOnlineSubsystemSteamworks_Exit_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init
// (Native, Event, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ReturnParm)

bool UOnlineSubsystemSteamworks::Init()
{
	static auto fn = (UFunction *)UObject::Find("Function", "OnlineSubsystemSteamworks.OnlineSubsystemSteamworks.Init");

	UOnlineSubsystemSteamworks_Init_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	this->ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


#ifdef _MSC_VER
#pragma pack(pop)
#endif
