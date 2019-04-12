#include "stdafx.h"
/*
#############################################################################################
# Borderlands 2 (1.7) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_functions.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Functions
# ========================================================================================= #
*/

// Function IpDrv.InternetLink.ResolveFailed
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void AInternetLink::eventResolveFailed()
{
	static UFunction* pFnResolveFailed = NULL;

	if (!pFnResolveFailed)
		pFnResolveFailed = (UFunction*)UObject::GObjObjects()->Data[45254];

	AInternetLink_eventResolveFailed_Parms ResolveFailed_Parms;

	this->ProcessEvent(pFnResolveFailed, &ResolveFailed_Parms, NULL);
};

// Function IpDrv.InternetLink.Resolved
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FIpAddr                 Addr                           ( CPF_Parm )

void AInternetLink::eventResolved(struct FIpAddr Addr)
{
	static UFunction* pFnResolved = NULL;

	if (!pFnResolved)
		pFnResolved = (UFunction*)UObject::GObjObjects()->Data[45252];

	AInternetLink_eventResolved_Parms Resolved_Parms;
	memcpy(&Resolved_Parms.Addr, &Addr, 0x8);

	this->ProcessEvent(pFnResolved, &Resolved_Parms, NULL);
};

// Function IpDrv.InternetLink.GetLocalIP
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FIpAddr                 Arg                            ( CPF_Parm | CPF_OutParm )

void AInternetLink::GetLocalIP(struct FIpAddr* Arg)
{
	static UFunction* pFnGetLocalIP = NULL;

	if (!pFnGetLocalIP)
		pFnGetLocalIP = (UFunction*)UObject::GObjObjects()->Data[45250];

	AInternetLink_execGetLocalIP_Parms GetLocalIP_Parms;

	pFnGetLocalIP->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLocalIP, &GetLocalIP_Parms, NULL);

	pFnGetLocalIP->FunctionFlags |= 0x400;

	if (Arg)
		memcpy(Arg, &GetLocalIP_Parms.Arg, 0x8);
};

// Function IpDrv.InternetLink.StringToIpAddr
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FIpAddr                 Addr                           ( CPF_Parm | CPF_OutParm )

bool AInternetLink::StringToIpAddr(struct FString Str, struct FIpAddr* Addr)
{
	static UFunction* pFnStringToIpAddr = NULL;

	if (!pFnStringToIpAddr)
		pFnStringToIpAddr = (UFunction*)UObject::GObjObjects()->Data[45246];

	AInternetLink_execStringToIpAddr_Parms StringToIpAddr_Parms;
	memcpy(&StringToIpAddr_Parms.Str, &Str, 0xC);

	pFnStringToIpAddr->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStringToIpAddr, &StringToIpAddr_Parms, NULL);

	pFnStringToIpAddr->FunctionFlags |= 0x400;

	if (Addr)
		memcpy(Addr, &StringToIpAddr_Parms.Addr, 0x8);

	return StringToIpAddr_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IpAddrToString
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FIpAddr                 Arg                            ( CPF_Parm )

struct FString AInternetLink::IpAddrToString(struct FIpAddr Arg)
{
	static UFunction* pFnIpAddrToString = NULL;

	if (!pFnIpAddrToString)
		pFnIpAddrToString = (UFunction*)UObject::GObjObjects()->Data[45243];

	AInternetLink_execIpAddrToString_Parms IpAddrToString_Parms;
	memcpy(&IpAddrToString_Parms.Arg, &Arg, 0x8);

	pFnIpAddrToString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIpAddrToString, &IpAddrToString_Parms, NULL);

	pFnIpAddrToString->FunctionFlags |= 0x400;

	return IpAddrToString_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.GetLastError
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int AInternetLink::GetLastError()
{
	static UFunction* pFnGetLastError = NULL;

	if (!pFnGetLastError)
		pFnGetLastError = (UFunction*)UObject::GObjObjects()->Data[45241];

	AInternetLink_execGetLastError_Parms GetLastError_Parms;

	pFnGetLastError->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetLastError, &GetLastError_Parms, NULL);

	pFnGetLastError->FunctionFlags |= 0x400;

	return GetLastError_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.Resolve
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FString                 Domain                         ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void AInternetLink::Resolve(struct FString Domain)
{
	static UFunction* pFnResolve = NULL;

	if (!pFnResolve)
		pFnResolve = (UFunction*)UObject::GObjObjects()->Data[45239];

	AInternetLink_execResolve_Parms Resolve_Parms;
	memcpy(&Resolve_Parms.Domain, &Domain, 0xC);

	pFnResolve->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnResolve, &Resolve_Parms, NULL);

	pFnResolve->FunctionFlags |= 0x400;
};

// Function IpDrv.InternetLink.ParseURL
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URL                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// struct FString                 Addr                           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// int                            PortNum                        ( CPF_Parm | CPF_OutParm )
// struct FString                 LevelName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )
// struct FString                 EntryName                      ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool AInternetLink::ParseURL(struct FString URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName)
{
	static UFunction* pFnParseURL = NULL;

	if (!pFnParseURL)
		pFnParseURL = (UFunction*)UObject::GObjObjects()->Data[45232];

	AInternetLink_execParseURL_Parms ParseURL_Parms;
	memcpy(&ParseURL_Parms.URL, &URL, 0xC);

	pFnParseURL->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParseURL, &ParseURL_Parms, NULL);

	pFnParseURL->FunctionFlags |= 0x400;

	if (Addr)
		memcpy(Addr, &ParseURL_Parms.Addr, 0xC);

	if (PortNum)
		*PortNum = ParseURL_Parms.PortNum;

	if (LevelName)
		memcpy(LevelName, &ParseURL_Parms.LevelName, 0xC);

	if (EntryName)
		memcpy(EntryName, &ParseURL_Parms.EntryName, 0xC);

	return ParseURL_Parms.ReturnValue;
};

// Function IpDrv.InternetLink.IsDataPending
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AInternetLink::IsDataPending()
{
	static UFunction* pFnIsDataPending = NULL;

	if (!pFnIsDataPending)
		pFnIsDataPending = (UFunction*)UObject::GObjObjects()->Data[45230];

	AInternetLink_execIsDataPending_Parms IsDataPending_Parms;

	pFnIsDataPending->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsDataPending, &IsDataPending_Parms, NULL);

	pFnIsDataPending->FunctionFlags |= 0x400;

	return IsDataPending_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReceivedBinary
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void ATcpLink::eventReceivedBinary(int Count, unsigned char* B)
{
	static UFunction* pFnReceivedBinary = NULL;

	if (!pFnReceivedBinary)
		pFnReceivedBinary = (UFunction*)UObject::GObjObjects()->Data[46271];

	ATcpLink_eventReceivedBinary_Parms ReceivedBinary_Parms;
	ReceivedBinary_Parms.Count = Count;
	memcpy(&ReceivedBinary_Parms.B, &B, 0xFF);

	this->ProcessEvent(pFnReceivedBinary, &ReceivedBinary_Parms, NULL);
};

// Function IpDrv.TcpLink.ReceivedLine
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 Line                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::eventReceivedLine(struct FString Line)
{
	static UFunction* pFnReceivedLine = NULL;

	if (!pFnReceivedLine)
		pFnReceivedLine = (UFunction*)UObject::GObjObjects()->Data[46269];

	ATcpLink_eventReceivedLine_Parms ReceivedLine_Parms;
	memcpy(&ReceivedLine_Parms.Line, &Line, 0xC);

	this->ProcessEvent(pFnReceivedLine, &ReceivedLine_Parms, NULL);
};

// Function IpDrv.TcpLink.ReceivedText
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void ATcpLink::eventReceivedText(struct FString Text)
{
	static UFunction* pFnReceivedText = NULL;

	if (!pFnReceivedText)
		pFnReceivedText = (UFunction*)UObject::GObjObjects()->Data[46267];

	ATcpLink_eventReceivedText_Parms ReceivedText_Parms;
	memcpy(&ReceivedText_Parms.Text, &Text, 0xC);

	this->ProcessEvent(pFnReceivedText, &ReceivedText_Parms, NULL);
};

// Function IpDrv.TcpLink.Closed
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventClosed()
{
	static UFunction* pFnClosed = NULL;

	if (!pFnClosed)
		pFnClosed = (UFunction*)UObject::GObjObjects()->Data[46266];

	ATcpLink_eventClosed_Parms Closed_Parms;

	this->ProcessEvent(pFnClosed, &Closed_Parms, NULL);
};

// Function IpDrv.TcpLink.Opened
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventOpened()
{
	static UFunction* pFnOpened = NULL;

	if (!pFnOpened)
		pFnOpened = (UFunction*)UObject::GObjObjects()->Data[46265];

	ATcpLink_eventOpened_Parms Opened_Parms;

	this->ProcessEvent(pFnOpened, &Opened_Parms, NULL);
};

// Function IpDrv.TcpLink.Accepted
// [0x00020800] ( FUNC_Event )
// Parameters infos:

void ATcpLink::eventAccepted()
{
	static UFunction* pFnAccepted = NULL;

	if (!pFnAccepted)
		pFnAccepted = (UFunction*)UObject::GObjObjects()->Data[46264];

	ATcpLink_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent(pFnAccepted, &Accepted_Parms, NULL);
};

// Function IpDrv.TcpLink.ReadBinary
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm | CPF_OutParm )

int ATcpLink::ReadBinary(int Count, unsigned char* B)
{
	static UFunction* pFnReadBinary = NULL;

	if (!pFnReadBinary)
		pFnReadBinary = (UFunction*)UObject::GObjObjects()->Data[46260];

	ATcpLink_execReadBinary_Parms ReadBinary_Parms;
	ReadBinary_Parms.Count = Count;

	pFnReadBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadBinary, &ReadBinary_Parms, NULL);

	pFnReadBinary->FunctionFlags |= 0x400;

	if (B)
		memcpy(B, &ReadBinary_Parms.B, 0xFF);

	return ReadBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.ReadText
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int ATcpLink::ReadText(struct FString* Str)
{
	static UFunction* pFnReadText = NULL;

	if (!pFnReadText)
		pFnReadText = (UFunction*)UObject::GObjObjects()->Data[46257];

	ATcpLink_execReadText_Parms ReadText_Parms;

	pFnReadText->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadText, &ReadText_Parms, NULL);

	pFnReadText->FunctionFlags |= 0x400;

	if (Str)
		memcpy(Str, &ReadText_Parms.Str, 0xC);

	return ReadText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendBinary
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

int ATcpLink::SendBinary(int Count, unsigned char* B)
{
	static UFunction* pFnSendBinary = NULL;

	if (!pFnSendBinary)
		pFnSendBinary = (UFunction*)UObject::GObjObjects()->Data[46253];

	ATcpLink_execSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy(&SendBinary_Parms.B, &B, 0xFF);

	pFnSendBinary->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendBinary, &SendBinary_Parms, NULL);

	pFnSendBinary->FunctionFlags |= 0x400;

	return SendBinary_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.SendText
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Str                            ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

int ATcpLink::SendText(struct FString Str)
{
	static UFunction* pFnSendText = NULL;

	if (!pFnSendText)
		pFnSendText = (UFunction*)UObject::GObjObjects()->Data[46250];

	ATcpLink_execSendText_Parms SendText_Parms;
	memcpy(&SendText_Parms.Str, &Str, 0xC);

	pFnSendText->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendText, &SendText_Parms, NULL);

	pFnSendText->FunctionFlags |= 0x400;

	return SendText_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.IsConnected
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::IsConnected()
{
	static UFunction* pFnIsConnected = NULL;

	if (!pFnIsConnected)
		pFnIsConnected = (UFunction*)UObject::GObjObjects()->Data[46248];

	ATcpLink_execIsConnected_Parms IsConnected_Parms;

	pFnIsConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsConnected, &IsConnected_Parms, NULL);

	pFnIsConnected->FunctionFlags |= 0x400;

	return IsConnected_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Close
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Close()
{
	static UFunction* pFnClose = NULL;

	if (!pFnClose)
		pFnClose = (UFunction*)UObject::GObjObjects()->Data[46246];

	ATcpLink_execClose_Parms Close_Parms;

	pFnClose->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClose, &Close_Parms, NULL);

	pFnClose->FunctionFlags |= 0x400;

	return Close_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Open
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FIpAddr                 Addr                           ( CPF_Parm )

bool ATcpLink::Open(struct FIpAddr Addr)
{
	static UFunction* pFnOpen = NULL;

	if (!pFnOpen)
		pFnOpen = (UFunction*)UObject::GObjObjects()->Data[46243];

	ATcpLink_execOpen_Parms Open_Parms;
	memcpy(&Open_Parms.Addr, &Addr, 0x8);

	pFnOpen->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnOpen, &Open_Parms, NULL);

	pFnOpen->FunctionFlags |= 0x400;

	return Open_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.Listen
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool ATcpLink::Listen()
{
	static UFunction* pFnListen = NULL;

	if (!pFnListen)
		pFnListen = (UFunction*)UObject::GObjObjects()->Data[46241];

	ATcpLink_execListen_Parms Listen_Parms;

	pFnListen->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnListen, &Listen_Parms, NULL);

	pFnListen->FunctionFlags |= 0x400;

	return Listen_Parms.ReturnValue;
};

// Function IpDrv.TcpLink.BindPort
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PortNum                        ( CPF_OptionalParm | CPF_Parm )
// unsigned long                  bUseNextAvailable              ( CPF_OptionalParm | CPF_Parm )

int ATcpLink::BindPort(int PortNum, unsigned long bUseNextAvailable)
{
	static UFunction* pFnBindPort = NULL;

	if (!pFnBindPort)
		pFnBindPort = (UFunction*)UObject::GObjObjects()->Data[46237];

	ATcpLink_execBindPort_Parms BindPort_Parms;
	BindPort_Parms.PortNum = PortNum;
	BindPort_Parms.bUseNextAvailable = bUseNextAvailable;

	pFnBindPort->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBindPort, &BindPort_Parms, NULL);

	pFnBindPort->FunctionFlags |= 0x400;

	return BindPort_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadMatchmakingStats
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// class UOnlineMatchmakingStats* MMStats                        ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadMatchmakingStats(struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats)
{
	static UFunction* pFnUploadMatchmakingStats = NULL;

	if (!pFnUploadMatchmakingStats)
		pFnUploadMatchmakingStats = (UFunction*)UObject::GObjObjects()->Data[45556];

	UOnlineEventsInterfaceMcp_execUploadMatchmakingStats_Parms UploadMatchmakingStats_Parms;
	memcpy(&UploadMatchmakingStats_Parms.UniqueId, &UniqueId, 0x18);
	UploadMatchmakingStats_Parms.MMStats = MMStats;

	pFnUploadMatchmakingStats->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUploadMatchmakingStats, &UploadMatchmakingStats_Parms, NULL);

	pFnUploadMatchmakingStats->FunctionFlags |= 0x400;

	return UploadMatchmakingStats_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UpdatePlaylistPopulation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )
// int                            NumPlayers                     ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UpdatePlaylistPopulation(int PlaylistId, int NumPlayers)
{
	static UFunction* pFnUpdatePlaylistPopulation = NULL;

	if (!pFnUpdatePlaylistPopulation)
		pFnUpdatePlaylistPopulation = (UFunction*)UObject::GObjObjects()->Data[45552];

	UOnlineEventsInterfaceMcp_execUpdatePlaylistPopulation_Parms UpdatePlaylistPopulation_Parms;
	UpdatePlaylistPopulation_Parms.PlaylistId = PlaylistId;
	UpdatePlaylistPopulation_Parms.NumPlayers = NumPlayers;

	pFnUpdatePlaylistPopulation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdatePlaylistPopulation, &UpdatePlaylistPopulation_Parms, NULL);

	pFnUpdatePlaylistPopulation->FunctionFlags |= 0x400;

	return UpdatePlaylistPopulation_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadGameplayEventsData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// TArray< unsigned char >        Payload                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineEventsInterfaceMcp::UploadGameplayEventsData(struct FUniqueNetId UniqueId, TArray< unsigned char >* Payload)
{
	static UFunction* pFnUploadGameplayEventsData = NULL;

	if (!pFnUploadGameplayEventsData)
		pFnUploadGameplayEventsData = (UFunction*)UObject::GObjObjects()->Data[45547];

	UOnlineEventsInterfaceMcp_execUploadGameplayEventsData_Parms UploadGameplayEventsData_Parms;
	memcpy(&UploadGameplayEventsData_Parms.UniqueId, &UniqueId, 0x18);

	pFnUploadGameplayEventsData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUploadGameplayEventsData, &UploadGameplayEventsData_Parms, NULL);

	pFnUploadGameplayEventsData->FunctionFlags |= 0x400;

	if (Payload)
		memcpy(Payload, &UploadGameplayEventsData_Parms.Payload, 0xC);

	return UploadGameplayEventsData_Parms.ReturnValue;
};

// Function IpDrv.OnlineEventsInterfaceMcp.UploadPlayerData
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            UniqueId                       ( CPF_Parm )
// struct FString                 PlayerNick                     ( CPF_Parm | CPF_NeedCtorLink )
// class UOnlineProfileSettings*  ProfileSettings                ( CPF_Parm )
// class UOnlinePlayerStorage*    PlayerStorage                  ( CPF_Parm )

bool UOnlineEventsInterfaceMcp::UploadPlayerData(struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage)
{
	static UFunction* pFnUploadPlayerData = NULL;

	if (!pFnUploadPlayerData)
		pFnUploadPlayerData = (UFunction*)UObject::GObjObjects()->Data[45541];

	UOnlineEventsInterfaceMcp_execUploadPlayerData_Parms UploadPlayerData_Parms;
	memcpy(&UploadPlayerData_Parms.UniqueId, &UniqueId, 0x18);
	memcpy(&UploadPlayerData_Parms.PlayerNick, &PlayerNick, 0xC);
	UploadPlayerData_Parms.ProfileSettings = ProfileSettings;
	UploadPlayerData_Parms.PlayerStorage = PlayerStorage;

	pFnUploadPlayerData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUploadPlayerData, &UploadPlayerData_Parms, NULL);

	pFnUploadPlayerData->FunctionFlags |= 0x400;

	return UploadPlayerData_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.GetNews
// [0x00020002]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

struct FString UOnlineNewsInterfaceMcp::GetNews(unsigned char LocalUserNum, unsigned char NewsType)
{
	static UFunction* pFnGetNews = NULL;

	if (!pFnGetNews)
		pFnGetNews = (UFunction*)UObject::GObjObjects()->Data[45862];

	UOnlineNewsInterfaceMcp_execGetNews_Parms GetNews_Parms;
	GetNews_Parms.LocalUserNum = LocalUserNum;
	GetNews_Parms.NewsType = NewsType;

	this->ProcessEvent(pFnGetNews, &GetNews_Parms, NULL);

	return GetNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineNewsInterfaceMcp.ClearReadNewsCompletedDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadGameNewsDelegate           ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::ClearReadNewsCompletedDelegate(struct FScriptDelegate ReadGameNewsDelegate)
{
	static UFunction* pFnClearReadNewsCompletedDelegate = NULL;

	if (!pFnClearReadNewsCompletedDelegate)
		pFnClearReadNewsCompletedDelegate = (UFunction*)UObject::GObjObjects()->Data[45860];

	UOnlineNewsInterfaceMcp_execClearReadNewsCompletedDelegate_Parms ClearReadNewsCompletedDelegate_Parms;
	memcpy(&ClearReadNewsCompletedDelegate_Parms.ReadGameNewsDelegate, &ReadGameNewsDelegate, 0xC);

	this->ProcessEvent(pFnClearReadNewsCompletedDelegate, &ClearReadNewsCompletedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineNewsInterfaceMcp.AddReadNewsCompletedDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadNewsDelegate               ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineNewsInterfaceMcp::AddReadNewsCompletedDelegate(struct FScriptDelegate ReadNewsDelegate)
{
	static UFunction* pFnAddReadNewsCompletedDelegate = NULL;

	if (!pFnAddReadNewsCompletedDelegate)
		pFnAddReadNewsCompletedDelegate = (UFunction*)UObject::GObjObjects()->Data[45858];

	UOnlineNewsInterfaceMcp_execAddReadNewsCompletedDelegate_Parms AddReadNewsCompletedDelegate_Parms;
	memcpy(&AddReadNewsCompletedDelegate_Parms.ReadNewsDelegate, &ReadNewsDelegate, 0xC);

	this->ProcessEvent(pFnAddReadNewsCompletedDelegate, &AddReadNewsCompletedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineNewsInterfaceMcp.OnReadNewsCompleted
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

void UOnlineNewsInterfaceMcp::OnReadNewsCompleted(unsigned long bWasSuccessful, unsigned char NewsType)
{
	static UFunction* pFnOnReadNewsCompleted = NULL;

	if (!pFnOnReadNewsCompleted)
		pFnOnReadNewsCompleted = (UFunction*)UObject::GObjObjects()->Data[45842];

	UOnlineNewsInterfaceMcp_execOnReadNewsCompleted_Parms OnReadNewsCompleted_Parms;
	OnReadNewsCompleted_Parms.bWasSuccessful = bWasSuccessful;
	OnReadNewsCompleted_Parms.NewsType = NewsType;

	this->ProcessEvent(pFnOnReadNewsCompleted, &OnReadNewsCompleted_Parms, NULL);
};

// Function IpDrv.OnlineNewsInterfaceMcp.ReadNews
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// unsigned char                  NewsType                       ( CPF_Parm )

bool UOnlineNewsInterfaceMcp::ReadNews(unsigned char LocalUserNum, unsigned char NewsType)
{
	static UFunction* pFnReadNews = NULL;

	if (!pFnReadNews)
		pFnReadNews = (UFunction*)UObject::GObjObjects()->Data[45852];

	UOnlineNewsInterfaceMcp_execReadNews_Parms ReadNews_Parms;
	ReadNews_Parms.LocalUserNum = LocalUserNum;
	ReadNews_Parms.NewsType = NewsType;

	pFnReadNews->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadNews, &ReadNews_Parms, NULL);

	pFnReadNews->FunctionFlags |= 0x400;

	return ReadNews_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearShareTitleFileCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::ClearShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate)
{
	static UFunction* pFnClearShareTitleFileCompleteDelegate = NULL;

	if (!pFnClearShareTitleFileCompleteDelegate)
		pFnClearShareTitleFileCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[46078];

	UOnlineTitleFileDownloadMcp_execClearShareTitleFileCompleteDelegate_Parms ClearShareTitleFileCompleteDelegate_Parms;
	memcpy(&ClearShareTitleFileCompleteDelegate_Parms.ShareTitleFileCompleteDelegate, &ShareTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearShareTitleFileCompleteDelegate, &ClearShareTitleFileCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddShareTitleFileCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         ShareTitleFileCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::AddShareTitleFileCompleteDelegate(struct FScriptDelegate ShareTitleFileCompleteDelegate)
{
	static UFunction* pFnAddShareTitleFileCompleteDelegate = NULL;

	if (!pFnAddShareTitleFileCompleteDelegate)
		pFnAddShareTitleFileCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[46076];

	UOnlineTitleFileDownloadMcp_execAddShareTitleFileCompleteDelegate_Parms AddShareTitleFileCompleteDelegate_Parms;
	memcpy(&AddShareTitleFileCompleteDelegate_Parms.ShareTitleFileCompleteDelegate, &ShareTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddShareTitleFileCompleteDelegate, &AddShareTitleFileCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ShareTitleFile
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 FileToShare                    ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::ShareTitleFile(struct FString FileToShare)
{
	static UFunction* pFnShareTitleFile = NULL;

	if (!pFnShareTitleFile)
		pFnShareTitleFile = (UFunction*)UObject::GObjObjects()->Data[46073];

	UOnlineTitleFileDownloadMcp_execShareTitleFile_Parms ShareTitleFile_Parms;
	memcpy(&ShareTitleFile_Parms.FileToShare, &FileToShare, 0xC);

	this->ProcessEvent(pFnShareTitleFile, &ShareTitleFile_Parms, NULL);

	return ShareTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFile(struct FString Filename)
{
	static UFunction* pFnClearDownloadedFile = NULL;

	if (!pFnClearDownloadedFile)
		pFnClearDownloadedFile = (UFunction*)UObject::GObjObjects()->Data[46070];

	UOnlineTitleFileDownloadMcp_execClearDownloadedFile_Parms ClearDownloadedFile_Parms;
	memcpy(&ClearDownloadedFile_Parms.Filename, &Filename, 0xC);

	pFnClearDownloadedFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFile, &ClearDownloadedFile_Parms, NULL);

	pFnClearDownloadedFile->FunctionFlags |= 0x400;

	return ClearDownloadedFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearDownloadedFiles
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineTitleFileDownloadMcp::ClearDownloadedFiles()
{
	static UFunction* pFnClearDownloadedFiles = NULL;

	if (!pFnClearDownloadedFiles)
		pFnClearDownloadedFiles = (UFunction*)UObject::GObjObjects()->Data[46068];

	UOnlineTitleFileDownloadMcp_execClearDownloadedFiles_Parms ClearDownloadedFiles_Parms;

	pFnClearDownloadedFiles->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearDownloadedFiles, &ClearDownloadedFiles_Parms, NULL);

	pFnClearDownloadedFiles->FunctionFlags |= 0x400;

	return ClearDownloadedFiles_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileState
// [0x00020002]
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

unsigned char UOnlineTitleFileDownloadMcp::GetTitleFileState(struct FString Filename)
{
	static UFunction* pFnGetTitleFileState = NULL;

	if (!pFnGetTitleFileState)
		pFnGetTitleFileState = (UFunction*)UObject::GObjObjects()->Data[46065];

	UOnlineTitleFileDownloadMcp_execGetTitleFileState_Parms GetTitleFileState_Parms;
	memcpy(&GetTitleFileState_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnGetTitleFileState, &GetTitleFileState_Parms, NULL);

	return GetTitleFileState_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.GetTitleFileContents
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// TArray< unsigned char >        FileContents                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::GetTitleFileContents(struct FString Filename, TArray< unsigned char >* FileContents)
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if (!pFnGetTitleFileContents)
		pFnGetTitleFileContents = (UFunction*)UObject::GObjObjects()->Data[46060];

	UOnlineTitleFileDownloadMcp_execGetTitleFileContents_Parms GetTitleFileContents_Parms;
	memcpy(&GetTitleFileContents_Parms.Filename, &Filename, 0xC);

	pFnGetTitleFileContents->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL);

	pFnGetTitleFileContents->FunctionFlags |= 0x400;

	if (FileContents)
		memcpy(FileContents, &GetTitleFileContents_Parms.FileContents, 0xC);

	return GetTitleFileContents_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ClearReadTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::ClearReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if (!pFnClearReadTitleFileCompleteDelegate)
		pFnClearReadTitleFileCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[46058];

	UOnlineTitleFileDownloadMcp_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;
	memcpy(&ClearReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.AddReadTitleFileCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ReadTitleFileCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::AddReadTitleFileCompleteDelegate(struct FScriptDelegate ReadTitleFileCompleteDelegate)
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if (!pFnAddReadTitleFileCompleteDelegate)
		pFnAddReadTitleFileCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[46056];

	UOnlineTitleFileDownloadMcp_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;
	memcpy(&AddReadTitleFileCompleteDelegate_Parms.ReadTitleFileCompleteDelegate, &ReadTitleFileCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.ReadTitleFile
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FString                 FileToRead                     ( CPF_Parm | CPF_NeedCtorLink )

bool UOnlineTitleFileDownloadMcp::ReadTitleFile(unsigned char LocalUserNum, struct FString FileToRead)
{
	static UFunction* pFnReadTitleFile = NULL;

	if (!pFnReadTitleFile)
		pFnReadTitleFile = (UFunction*)UObject::GObjObjects()->Data[46052];

	UOnlineTitleFileDownloadMcp_execReadTitleFile_Parms ReadTitleFile_Parms;
	ReadTitleFile_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ReadTitleFile_Parms.FileToRead, &FileToRead, 0xC);

	pFnReadTitleFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadTitleFile, &ReadTitleFile_Parms, NULL);

	pFnReadTitleFile->FunctionFlags |= 0x400;

	return ReadTitleFile_Parms.ReturnValue;
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnShareTitleFileComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 UGCHandle                      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::OnShareTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename, struct FString UGCHandle)
{
	static UFunction* pFnOnShareTitleFileComplete = NULL;

	if (!pFnOnShareTitleFileComplete)
		pFnOnShareTitleFileComplete = (UFunction*)UObject::GObjObjects()->Data[46039];

	UOnlineTitleFileDownloadMcp_execOnShareTitleFileComplete_Parms OnShareTitleFileComplete_Parms;
	OnShareTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy(&OnShareTitleFileComplete_Parms.Filename, &Filename, 0xC);
	memcpy(&OnShareTitleFileComplete_Parms.UGCHandle, &UGCHandle, 0xC);

	this->ProcessEvent(pFnOnShareTitleFileComplete, &OnShareTitleFileComplete_Parms, NULL);
};

// Function IpDrv.OnlineTitleFileDownloadMcp.OnReadTitleFileComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineTitleFileDownloadMcp::OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if (!pFnOnReadTitleFileComplete)
		pFnOnReadTitleFileComplete = (UFunction*)UObject::GObjObjects()->Data[46031];

	UOnlineTitleFileDownloadMcp_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy(&OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL);
};

// Function IpDrv.MeshBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeacon::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = NULL;

	if (!pFnDestroyBeacon)
		pFnDestroyBeacon = (UFunction*)UObject::GObjObjects()->Data[45285];

	UMeshBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, NULL);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconClient.SendHostNewGameSessionResponse
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bSuccess                       ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UMeshBeaconClient::SendHostNewGameSessionResponse(unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnSendHostNewGameSessionResponse = NULL;

	if (!pFnSendHostNewGameSessionResponse)
		pFnSendHostNewGameSessionResponse = (UFunction*)UObject::GObjObjects()->Data[45345];

	UMeshBeaconClient_execSendHostNewGameSessionResponse_Parms SendHostNewGameSessionResponse_Parms;
	SendHostNewGameSessionResponse_Parms.bSuccess = bSuccess;
	memcpy(&SendHostNewGameSessionResponse_Parms.SessionName, &SessionName, 0x8);
	SendHostNewGameSessionResponse_Parms.SearchClass = SearchClass;

	pFnSendHostNewGameSessionResponse->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendHostNewGameSessionResponse, &SendHostNewGameSessionResponse_Parms, NULL);

	pFnSendHostNewGameSessionResponse->FunctionFlags |= 0x400;

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &SendHostNewGameSessionResponse_Parms.PlatformSpecificInfo, 0x50);

	return SendHostNewGameSessionResponse_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.OnCreateNewSessionRequestReceived
// [0x00520000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray< struct FPlayerMember > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconClient::OnCreateNewSessionRequestReceived(struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players)
{
	static UFunction* pFnOnCreateNewSessionRequestReceived = NULL;

	if (!pFnOnCreateNewSessionRequestReceived)
		pFnOnCreateNewSessionRequestReceived = (UFunction*)UObject::GObjObjects()->Data[45287];

	UMeshBeaconClient_execOnCreateNewSessionRequestReceived_Parms OnCreateNewSessionRequestReceived_Parms;
	memcpy(&OnCreateNewSessionRequestReceived_Parms.SessionName, &SessionName, 0x8);
	OnCreateNewSessionRequestReceived_Parms.SearchClass = SearchClass;

	this->ProcessEvent(pFnOnCreateNewSessionRequestReceived, &OnCreateNewSessionRequestReceived_Parms, NULL);

	if (Players)
		memcpy(Players, &OnCreateNewSessionRequestReceived_Parms.Players, 0xC);
};

// Function IpDrv.MeshBeaconClient.OnTravelRequestReceived
// [0x00520000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if (!pFnOnTravelRequestReceived)
		pFnOnTravelRequestReceived = (UFunction*)UObject::GObjObjects()->Data[45289];

	UMeshBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy(&OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8);
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;

	this->ProcessEvent(pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL);

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &OnTravelRequestReceived_Parms.PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestResults
// [0x00520000]
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconClient::OnReceivedBandwidthTestResults(unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static UFunction* pFnOnReceivedBandwidthTestResults = NULL;

	if (!pFnOnReceivedBandwidthTestResults)
		pFnOnReceivedBandwidthTestResults = (UFunction*)UObject::GObjObjects()->Data[45291];

	UMeshBeaconClient_execOnReceivedBandwidthTestResults_Parms OnReceivedBandwidthTestResults_Parms;
	OnReceivedBandwidthTestResults_Parms.TestType = TestType;
	OnReceivedBandwidthTestResults_Parms.TestResult = TestResult;

	this->ProcessEvent(pFnOnReceivedBandwidthTestResults, &OnReceivedBandwidthTestResults_Parms, NULL);

	if (BandwidthStats)
		memcpy(BandwidthStats, &OnReceivedBandwidthTestResults_Parms.BandwidthStats, 0xC);
};

// Function IpDrv.MeshBeaconClient.OnReceivedBandwidthTestRequest
// [0x00120000]
// Parameters infos:
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconClient::OnReceivedBandwidthTestRequest(unsigned char TestType)
{
	static UFunction* pFnOnReceivedBandwidthTestRequest = NULL;

	if (!pFnOnReceivedBandwidthTestRequest)
		pFnOnReceivedBandwidthTestRequest = (UFunction*)UObject::GObjObjects()->Data[45293];

	UMeshBeaconClient_execOnReceivedBandwidthTestRequest_Parms OnReceivedBandwidthTestRequest_Parms;
	OnReceivedBandwidthTestRequest_Parms.TestType = TestType;

	this->ProcessEvent(pFnOnReceivedBandwidthTestRequest, &OnReceivedBandwidthTestRequest_Parms, NULL);
};

// Function IpDrv.MeshBeaconClient.OnConnectionRequestResult
// [0x00120000]
// Parameters infos:
// unsigned char                  ConnectionResult               ( CPF_Parm )

void UMeshBeaconClient::OnConnectionRequestResult(unsigned char ConnectionResult)
{
	static UFunction* pFnOnConnectionRequestResult = NULL;

	if (!pFnOnConnectionRequestResult)
		pFnOnConnectionRequestResult = (UFunction*)UObject::GObjObjects()->Data[45295];

	UMeshBeaconClient_execOnConnectionRequestResult_Parms OnConnectionRequestResult_Parms;
	OnConnectionRequestResult_Parms.ConnectionResult = ConnectionResult;

	this->ProcessEvent(pFnOnConnectionRequestResult, &OnConnectionRequestResult_Parms, NULL);
};

// Function IpDrv.MeshBeaconClient.BeginBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconClient::BeginBandwidthTest(unsigned char TestType, int TestBufferSize)
{
	static UFunction* pFnBeginBandwidthTest = NULL;

	if (!pFnBeginBandwidthTest)
		pFnBeginBandwidthTest = (UFunction*)UObject::GObjObjects()->Data[45329];

	UMeshBeaconClient_execBeginBandwidthTest_Parms BeginBandwidthTest_Parms;
	BeginBandwidthTest_Parms.TestType = TestType;
	BeginBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	pFnBeginBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBeginBandwidthTest, &BeginBandwidthTest_Parms, NULL);

	pFnBeginBandwidthTest->FunctionFlags |= 0x400;

	return BeginBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.RequestConnection
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned long                  bRegisterSecureAddress         ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// struct FClientConnectionRequest ClientRequest                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconClient::RequestConnection(unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest)
{
	static UFunction* pFnRequestConnection = NULL;

	if (!pFnRequestConnection)
		pFnRequestConnection = (UFunction*)UObject::GObjObjects()->Data[45324];

	UMeshBeaconClient_execRequestConnection_Parms RequestConnection_Parms;
	RequestConnection_Parms.bRegisterSecureAddress = bRegisterSecureAddress;

	pFnRequestConnection->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestConnection, &RequestConnection_Parms, NULL);

	pFnRequestConnection->FunctionFlags |= 0x400;

	if (DesiredHost)
		memcpy(DesiredHost, &RequestConnection_Parms.DesiredHost, 0x8);

	if (ClientRequest)
		memcpy(ClientRequest, &RequestConnection_Parms.ClientRequest, 0x34);

	return RequestConnection_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeaconClient::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = NULL;

	if (!pFnDestroyBeacon)
		pFnDestroyBeacon = (UFunction*)UObject::GObjObjects()->Data[45323];

	UMeshBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, NULL);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientCreateNewSessionResult
// [0x00520000]
// Parameters infos:
// unsigned long                  bSucceeded                     ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnReceivedClientCreateNewSessionResult(unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnOnReceivedClientCreateNewSessionResult = NULL;

	if (!pFnOnReceivedClientCreateNewSessionResult)
		pFnOnReceivedClientCreateNewSessionResult = (UFunction*)UObject::GObjObjects()->Data[45376];

	UMeshBeaconHost_execOnReceivedClientCreateNewSessionResult_Parms OnReceivedClientCreateNewSessionResult_Parms;
	OnReceivedClientCreateNewSessionResult_Parms.bSucceeded = bSucceeded;
	memcpy(&OnReceivedClientCreateNewSessionResult_Parms.SessionName, &SessionName, 0x8);
	OnReceivedClientCreateNewSessionResult_Parms.SearchClass = SearchClass;

	this->ProcessEvent(pFnOnReceivedClientCreateNewSessionResult, &OnReceivedClientCreateNewSessionResult_Parms, NULL);

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &OnReceivedClientCreateNewSessionResult_Parms.PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconHost.RequestClientCreateNewSession
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// TArray< struct FPlayerMember > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::RequestClientCreateNewSession(struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players)
{
	static UFunction* pFnRequestClientCreateNewSession = NULL;

	if (!pFnRequestClientCreateNewSession)
		pFnRequestClientCreateNewSession = (UFunction*)UObject::GObjObjects()->Data[45426];

	UMeshBeaconHost_execRequestClientCreateNewSession_Parms RequestClientCreateNewSession_Parms;
	memcpy(&RequestClientCreateNewSession_Parms.PlayerNetId, &PlayerNetId, 0x18);
	memcpy(&RequestClientCreateNewSession_Parms.SessionName, &SessionName, 0x8);
	RequestClientCreateNewSession_Parms.SearchClass = SearchClass;

	pFnRequestClientCreateNewSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestClientCreateNewSession, &RequestClientCreateNewSession_Parms, NULL);

	pFnRequestClientCreateNewSession->FunctionFlags |= 0x400;

	if (Players)
		memcpy(Players, &RequestClientCreateNewSession_Parms.Players, 0xC);

	return RequestClientCreateNewSession_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.TellClientsToTravel
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if (!pFnTellClientsToTravel)
		pFnTellClientsToTravel = (UFunction*)UObject::GObjObjects()->Data[45422];

	UMeshBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy(&TellClientsToTravel_Parms.SessionName, &SessionName, 0x8);
	TellClientsToTravel_Parms.SearchClass = SearchClass;

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL);

	pFnTellClientsToTravel->FunctionFlags |= 0x400;

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &TellClientsToTravel_Parms.PlatformSpecificInfo, 0x50);
};

// Function IpDrv.MeshBeaconHost.OnAllPendingPlayersConnected
// [0x00120000]
// Parameters infos:

void UMeshBeaconHost::OnAllPendingPlayersConnected()
{
	static UFunction* pFnOnAllPendingPlayersConnected = NULL;

	if (!pFnOnAllPendingPlayersConnected)
		pFnOnAllPendingPlayersConnected = (UFunction*)UObject::GObjObjects()->Data[45378];

	UMeshBeaconHost_execOnAllPendingPlayersConnected_Parms OnAllPendingPlayersConnected_Parms;

	this->ProcessEvent(pFnOnAllPendingPlayersConnected, &OnAllPendingPlayersConnected_Parms, NULL);
};

// Function IpDrv.MeshBeaconHost.AllPlayersConnected
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UMeshBeaconHost::AllPlayersConnected(TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnAllPlayersConnected = NULL;

	if (!pFnAllPlayersConnected)
		pFnAllPlayersConnected = (UFunction*)UObject::GObjObjects()->Data[45418];

	UMeshBeaconHost_execAllPlayersConnected_Parms AllPlayersConnected_Parms;

	pFnAllPlayersConnected->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAllPlayersConnected, &AllPlayersConnected_Parms, NULL);

	pFnAllPlayersConnected->FunctionFlags |= 0x400;

	if (Players)
		memcpy(Players, &AllPlayersConnected_Parms.Players, 0xC);

	return AllPlayersConnected_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.GetConnectionIndexForPlayer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )

int UMeshBeaconHost::GetConnectionIndexForPlayer(struct FUniqueNetId PlayerNetId)
{
	static UFunction* pFnGetConnectionIndexForPlayer = NULL;

	if (!pFnGetConnectionIndexForPlayer)
		pFnGetConnectionIndexForPlayer = (UFunction*)UObject::GObjObjects()->Data[45415];

	UMeshBeaconHost_execGetConnectionIndexForPlayer_Parms GetConnectionIndexForPlayer_Parms;
	memcpy(&GetConnectionIndexForPlayer_Parms.PlayerNetId, &PlayerNetId, 0x18);

	pFnGetConnectionIndexForPlayer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetConnectionIndexForPlayer, &GetConnectionIndexForPlayer_Parms, NULL);

	pFnGetConnectionIndexForPlayer->FunctionFlags |= 0x400;

	return GetConnectionIndexForPlayer_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.SetPendingPlayerConnections
// [0x00420002]
// Parameters infos:
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::SetPendingPlayerConnections(TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnSetPendingPlayerConnections = NULL;

	if (!pFnSetPendingPlayerConnections)
		pFnSetPendingPlayerConnections = (UFunction*)UObject::GObjObjects()->Data[45412];

	UMeshBeaconHost_execSetPendingPlayerConnections_Parms SetPendingPlayerConnections_Parms;

	this->ProcessEvent(pFnSetPendingPlayerConnections, &SetPendingPlayerConnections_Parms, NULL);

	if (Players)
		memcpy(Players, &SetPendingPlayerConnections_Parms.Players, 0xC);
};

// Function IpDrv.MeshBeaconHost.OnFinishedBandwidthTest
// [0x00520000]
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// unsigned char                  TestResult                     ( CPF_Parm )
// struct FConnectionBandwidthStats BandwidthStats                 ( CPF_Const | CPF_Parm | CPF_OutParm )

void UMeshBeaconHost::OnFinishedBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats)
{
	static UFunction* pFnOnFinishedBandwidthTest = NULL;

	if (!pFnOnFinishedBandwidthTest)
		pFnOnFinishedBandwidthTest = (UFunction*)UObject::GObjObjects()->Data[45380];

	UMeshBeaconHost_execOnFinishedBandwidthTest_Parms OnFinishedBandwidthTest_Parms;
	memcpy(&OnFinishedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x18);
	OnFinishedBandwidthTest_Parms.TestType = TestType;
	OnFinishedBandwidthTest_Parms.TestResult = TestResult;

	this->ProcessEvent(pFnOnFinishedBandwidthTest, &OnFinishedBandwidthTest_Parms, NULL);

	if (BandwidthStats)
		memcpy(BandwidthStats, &OnFinishedBandwidthTest_Parms.BandwidthStats, 0xC);
};

// Function IpDrv.MeshBeaconHost.OnStartedBandwidthTest
// [0x00120000]
// Parameters infos:
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )

void UMeshBeaconHost::OnStartedBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType)
{
	static UFunction* pFnOnStartedBandwidthTest = NULL;

	if (!pFnOnStartedBandwidthTest)
		pFnOnStartedBandwidthTest = (UFunction*)UObject::GObjObjects()->Data[45382];

	UMeshBeaconHost_execOnStartedBandwidthTest_Parms OnStartedBandwidthTest_Parms;
	memcpy(&OnStartedBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x18);
	OnStartedBandwidthTest_Parms.TestType = TestType;

	this->ProcessEvent(pFnOnStartedBandwidthTest, &OnStartedBandwidthTest_Parms, NULL);
};

// Function IpDrv.MeshBeaconHost.OnReceivedClientConnectionRequest
// [0x00520000]
// Parameters infos:
// struct FClientMeshBeaconConnection NewClientConnection            ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UMeshBeaconHost::OnReceivedClientConnectionRequest(struct FClientMeshBeaconConnection* NewClientConnection)
{
	static UFunction* pFnOnReceivedClientConnectionRequest = NULL;

	if (!pFnOnReceivedClientConnectionRequest)
		pFnOnReceivedClientConnectionRequest = (UFunction*)UObject::GObjObjects()->Data[45384];

	UMeshBeaconHost_execOnReceivedClientConnectionRequest_Parms OnReceivedClientConnectionRequest_Parms;

	this->ProcessEvent(pFnOnReceivedClientConnectionRequest, &OnReceivedClientConnectionRequest_Parms, NULL);

	if (NewClientConnection)
		memcpy(NewClientConnection, &OnReceivedClientConnectionRequest_Parms.NewClientConnection, 0x68);
};

// Function IpDrv.MeshBeaconHost.AllowBandwidthTesting
// [0x00020002]
// Parameters infos:
// unsigned long                  bEnabled                       ( CPF_Parm )

void UMeshBeaconHost::AllowBandwidthTesting(unsigned long bEnabled)
{
	static UFunction* pFnAllowBandwidthTesting = NULL;

	if (!pFnAllowBandwidthTesting)
		pFnAllowBandwidthTesting = (UFunction*)UObject::GObjObjects()->Data[45403];

	UMeshBeaconHost_execAllowBandwidthTesting_Parms AllowBandwidthTesting_Parms;
	AllowBandwidthTesting_Parms.bEnabled = bEnabled;

	this->ProcessEvent(pFnAllowBandwidthTesting, &AllowBandwidthTesting_Parms, NULL);
};

// Function IpDrv.MeshBeaconHost.CancelPendingBandwidthTests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::CancelPendingBandwidthTests()
{
	static UFunction* pFnCancelPendingBandwidthTests = NULL;

	if (!pFnCancelPendingBandwidthTests)
		pFnCancelPendingBandwidthTests = (UFunction*)UObject::GObjObjects()->Data[45402];

	UMeshBeaconHost_execCancelPendingBandwidthTests_Parms CancelPendingBandwidthTests_Parms;

	pFnCancelPendingBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelPendingBandwidthTests, &CancelPendingBandwidthTests_Parms, NULL);

	pFnCancelPendingBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasPendingBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasPendingBandwidthTest()
{
	static UFunction* pFnHasPendingBandwidthTest = NULL;

	if (!pFnHasPendingBandwidthTest)
		pFnHasPendingBandwidthTest = (UFunction*)UObject::GObjObjects()->Data[45400];

	UMeshBeaconHost_execHasPendingBandwidthTest_Parms HasPendingBandwidthTest_Parms;

	pFnHasPendingBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHasPendingBandwidthTest, &HasPendingBandwidthTest_Parms, NULL);

	pFnHasPendingBandwidthTest->FunctionFlags |= 0x400;

	return HasPendingBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.CancelInProgressBandwidthTests
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::CancelInProgressBandwidthTests()
{
	static UFunction* pFnCancelInProgressBandwidthTests = NULL;

	if (!pFnCancelInProgressBandwidthTests)
		pFnCancelInProgressBandwidthTests = (UFunction*)UObject::GObjObjects()->Data[45399];

	UMeshBeaconHost_execCancelInProgressBandwidthTests_Parms CancelInProgressBandwidthTests_Parms;

	pFnCancelInProgressBandwidthTests->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelInProgressBandwidthTests, &CancelInProgressBandwidthTests_Parms, NULL);

	pFnCancelInProgressBandwidthTests->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.HasInProgressBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UMeshBeaconHost::HasInProgressBandwidthTest()
{
	static UFunction* pFnHasInProgressBandwidthTest = NULL;

	if (!pFnHasInProgressBandwidthTest)
		pFnHasInProgressBandwidthTest = (UFunction*)UObject::GObjObjects()->Data[45397];

	UMeshBeaconHost_execHasInProgressBandwidthTest_Parms HasInProgressBandwidthTest_Parms;

	pFnHasInProgressBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHasInProgressBandwidthTest, &HasInProgressBandwidthTest_Parms, NULL);

	pFnHasInProgressBandwidthTest->FunctionFlags |= 0x400;

	return HasInProgressBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.RequestClientBandwidthTest
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PlayerNetId                    ( CPF_Parm )
// unsigned char                  TestType                       ( CPF_Parm )
// int                            TestBufferSize                 ( CPF_Parm )

bool UMeshBeaconHost::RequestClientBandwidthTest(struct FUniqueNetId PlayerNetId, unsigned char TestType, int TestBufferSize)
{
	static UFunction* pFnRequestClientBandwidthTest = NULL;

	if (!pFnRequestClientBandwidthTest)
		pFnRequestClientBandwidthTest = (UFunction*)UObject::GObjObjects()->Data[45392];

	UMeshBeaconHost_execRequestClientBandwidthTest_Parms RequestClientBandwidthTest_Parms;
	memcpy(&RequestClientBandwidthTest_Parms.PlayerNetId, &PlayerNetId, 0x18);
	RequestClientBandwidthTest_Parms.TestType = TestType;
	RequestClientBandwidthTest_Parms.TestBufferSize = TestBufferSize;

	pFnRequestClientBandwidthTest->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestClientBandwidthTest, &RequestClientBandwidthTest_Parms, NULL);

	pFnRequestClientBandwidthTest->FunctionFlags |= 0x400;

	return RequestClientBandwidthTest_Parms.ReturnValue;
};

// Function IpDrv.MeshBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UMeshBeaconHost::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = NULL;

	if (!pFnDestroyBeacon)
		pFnDestroyBeacon = (UFunction*)UObject::GObjObjects()->Data[45391];

	UMeshBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, NULL);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.MeshBeaconHost.InitHostBeacon
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            InOwningPlayerId               ( CPF_Parm )

bool UMeshBeaconHost::InitHostBeacon(struct FUniqueNetId InOwningPlayerId)
{
	static UFunction* pFnInitHostBeacon = NULL;

	if (!pFnInitHostBeacon)
		pFnInitHostBeacon = (UFunction*)UObject::GObjObjects()->Data[45388];

	UMeshBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	memcpy(&InitHostBeacon_Parms.InOwningPlayerId, &InOwningPlayerId, 0x18);

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInitHostBeacon, &InitHostBeacon_Parms, NULL);

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetRegisteredPlayers
// [0x00420002]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  OutRegisteredPlayers           ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlineSubsystemCommonImpl::GetRegisteredPlayers(struct FName SessionName, TArray< struct FUniqueNetId >* OutRegisteredPlayers)
{
	static UFunction* pFnGetRegisteredPlayers = NULL;

	if (!pFnGetRegisteredPlayers)
		pFnGetRegisteredPlayers = (UFunction*)UObject::GObjObjects()->Data[46025];

	UOnlineSubsystemCommonImpl_execGetRegisteredPlayers_Parms GetRegisteredPlayers_Parms;
	memcpy(&GetRegisteredPlayers_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnGetRegisteredPlayers, &GetRegisteredPlayers_Parms, NULL);

	if (OutRegisteredPlayers)
		memcpy(OutRegisteredPlayers, &GetRegisteredPlayers_Parms.OutRegisteredPlayers, 0xC);
};

// Function IpDrv.OnlineSubsystemCommonImpl.IsPlayerInSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineSubsystemCommonImpl::IsPlayerInSession(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnIsPlayerInSession = NULL;

	if (!pFnIsPlayerInSession)
		pFnIsPlayerInSession = (UFunction*)UObject::GObjObjects()->Data[46021];

	UOnlineSubsystemCommonImpl_execIsPlayerInSession_Parms IsPlayerInSession_Parms;
	memcpy(&IsPlayerInSession_Parms.SessionName, &SessionName, 0x8);
	memcpy(&IsPlayerInSession_Parms.PlayerID, &PlayerID, 0x18);

	pFnIsPlayerInSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIsPlayerInSession, &IsPlayerInSession_Parms, NULL);

	pFnIsPlayerInSession->FunctionFlags |= 0x400;

	return IsPlayerInSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineSubsystemCommonImpl.GetPlayerNicknameFromIndex
// [0x00020800] ( FUNC_Event )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            UserIndex                      ( CPF_Parm )

struct FString UOnlineSubsystemCommonImpl::eventGetPlayerNicknameFromIndex(int UserIndex)
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if (!pFnGetPlayerNicknameFromIndex)
		pFnGetPlayerNicknameFromIndex = (UFunction*)UObject::GObjObjects()->Data[46018];

	UOnlineSubsystemCommonImpl_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;
	GetPlayerNicknameFromIndex_Parms.UserIndex = UserIndex;

	this->ProcessEvent(pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL);

	return GetPlayerNicknameFromIndex_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )

int UOnlineAuthInterfaceImpl::FindLocalServerAuthSession(class UPlayer* ClientConnection)
{
	static UFunction* pFnFindLocalServerAuthSession = NULL;

	if (!pFnFindLocalServerAuthSession)
		pFnFindLocalServerAuthSession = (UFunction*)UObject::GObjObjects()->Data[45525];

	UOnlineAuthInterfaceImpl_execFindLocalServerAuthSession_Parms FindLocalServerAuthSession_Parms;
	FindLocalServerAuthSession_Parms.ClientConnection = ClientConnection;

	pFnFindLocalServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindLocalServerAuthSession, &FindLocalServerAuthSession_Parms, NULL);

	pFnFindLocalServerAuthSession->FunctionFlags |= 0x400;

	return FindLocalServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindServerAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ServerConnection               ( CPF_Parm )

int UOnlineAuthInterfaceImpl::FindServerAuthSession(class UPlayer* ServerConnection)
{
	static UFunction* pFnFindServerAuthSession = NULL;

	if (!pFnFindServerAuthSession)
		pFnFindServerAuthSession = (UFunction*)UObject::GObjObjects()->Data[45522];

	UOnlineAuthInterfaceImpl_execFindServerAuthSession_Parms FindServerAuthSession_Parms;
	FindServerAuthSession_Parms.ServerConnection = ServerConnection;

	pFnFindServerAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindServerAuthSession, &FindServerAuthSession_Parms, NULL);

	pFnFindServerAuthSession->FunctionFlags |= 0x400;

	return FindServerAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindLocalClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ServerConnection               ( CPF_Parm )

int UOnlineAuthInterfaceImpl::FindLocalClientAuthSession(class UPlayer* ServerConnection)
{
	static UFunction* pFnFindLocalClientAuthSession = NULL;

	if (!pFnFindLocalClientAuthSession)
		pFnFindLocalClientAuthSession = (UFunction*)UObject::GObjObjects()->Data[45519];

	UOnlineAuthInterfaceImpl_execFindLocalClientAuthSession_Parms FindLocalClientAuthSession_Parms;
	FindLocalClientAuthSession_Parms.ServerConnection = ServerConnection;

	pFnFindLocalClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindLocalClientAuthSession, &FindLocalClientAuthSession_Parms, NULL);

	pFnFindLocalClientAuthSession->FunctionFlags |= 0x400;

	return FindLocalClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.FindClientAuthSession
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )

int UOnlineAuthInterfaceImpl::FindClientAuthSession(class UPlayer* ClientConnection)
{
	static UFunction* pFnFindClientAuthSession = NULL;

	if (!pFnFindClientAuthSession)
		pFnFindClientAuthSession = (UFunction*)UObject::GObjObjects()->Data[45516];

	UOnlineAuthInterfaceImpl_execFindClientAuthSession_Parms FindClientAuthSession_Parms;
	FindClientAuthSession_Parms.ClientConnection = ClientConnection;

	pFnFindClientAuthSession->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindClientAuthSession, &FindClientAuthSession_Parms, NULL);

	pFnFindClientAuthSession->FunctionFlags |= 0x400;

	return FindClientAuthSession_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthRetryServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineAuthInterfaceImpl::SendAuthRetryServer()
{
	static UFunction* pFnSendAuthRetryServer = NULL;

	if (!pFnSendAuthRetryServer)
		pFnSendAuthRetryServer = (UFunction*)UObject::GObjObjects()->Data[45514];

	UOnlineAuthInterfaceImpl_execSendAuthRetryServer_Parms SendAuthRetryServer_Parms;

	pFnSendAuthRetryServer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendAuthRetryServer, &SendAuthRetryServer_Parms, NULL);

	pFnSendAuthRetryServer->FunctionFlags |= 0x400;

	return SendAuthRetryServer_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthKillClient
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendAuthKillClient(class UPlayer* ClientConnection)
{
	static UFunction* pFnSendAuthKillClient = NULL;

	if (!pFnSendAuthKillClient)
		pFnSendAuthKillClient = (UFunction*)UObject::GObjObjects()->Data[45511];

	UOnlineAuthInterfaceImpl_execSendAuthKillClient_Parms SendAuthKillClient_Parms;
	SendAuthKillClient_Parms.ClientConnection = ClientConnection;

	pFnSendAuthKillClient->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendAuthKillClient, &SendAuthKillClient_Parms, NULL);

	pFnSendAuthKillClient->FunctionFlags |= 0x400;

	return SendAuthKillClient_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobServer
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UPlayer*                 ClientConnection               ( CPF_Parm )
// int                            AuthBlobUID                    ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendAuthBlobServer(class UPlayer* ClientConnection, int AuthBlobUID)
{
	static UFunction* pFnSendAuthBlobServer = NULL;

	if (!pFnSendAuthBlobServer)
		pFnSendAuthBlobServer = (UFunction*)UObject::GObjObjects()->Data[45507];

	UOnlineAuthInterfaceImpl_execSendAuthBlobServer_Parms SendAuthBlobServer_Parms;
	SendAuthBlobServer_Parms.ClientConnection = ClientConnection;
	SendAuthBlobServer_Parms.AuthBlobUID = AuthBlobUID;

	pFnSendAuthBlobServer->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendAuthBlobServer, &SendAuthBlobServer_Parms, NULL);

	pFnSendAuthBlobServer->FunctionFlags |= 0x400;

	return SendAuthBlobServer_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.SendAuthBlobClient
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            AuthBlobUID                    ( CPF_Parm )

bool UOnlineAuthInterfaceImpl::SendAuthBlobClient(int AuthBlobUID)
{
	static UFunction* pFnSendAuthBlobClient = NULL;

	if (!pFnSendAuthBlobClient)
		pFnSendAuthBlobClient = (UFunction*)UObject::GObjObjects()->Data[45504];

	UOnlineAuthInterfaceImpl_execSendAuthBlobClient_Parms SendAuthBlobClient_Parms;
	SendAuthBlobClient_Parms.AuthBlobUID = AuthBlobUID;

	pFnSendAuthBlobClient->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSendAuthBlobClient, &SendAuthBlobClient_Parms, NULL);

	pFnSendAuthBlobClient->FunctionFlags |= 0x400;

	return SendAuthBlobClient_Parms.ReturnValue;
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearServerConnectionCloseDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ServerConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate)
{
	static UFunction* pFnClearServerConnectionCloseDelegate = NULL;

	if (!pFnClearServerConnectionCloseDelegate)
		pFnClearServerConnectionCloseDelegate = (UFunction*)UObject::GObjObjects()->Data[45502];

	UOnlineAuthInterfaceImpl_execClearServerConnectionCloseDelegate_Parms ClearServerConnectionCloseDelegate_Parms;
	memcpy(&ClearServerConnectionCloseDelegate_Parms.ServerConnectionCloseDelegate, &ServerConnectionCloseDelegate, 0xC);

	this->ProcessEvent(pFnClearServerConnectionCloseDelegate, &ClearServerConnectionCloseDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddServerConnectionCloseDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ServerConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddServerConnectionCloseDelegate(struct FScriptDelegate ServerConnectionCloseDelegate)
{
	static UFunction* pFnAddServerConnectionCloseDelegate = NULL;

	if (!pFnAddServerConnectionCloseDelegate)
		pFnAddServerConnectionCloseDelegate = (UFunction*)UObject::GObjObjects()->Data[45500];

	UOnlineAuthInterfaceImpl_execAddServerConnectionCloseDelegate_Parms AddServerConnectionCloseDelegate_Parms;
	memcpy(&AddServerConnectionCloseDelegate_Parms.ServerConnectionCloseDelegate, &ServerConnectionCloseDelegate, 0xC);

	this->ProcessEvent(pFnAddServerConnectionCloseDelegate, &AddServerConnectionCloseDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearClientConnectionCloseDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ClientConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate)
{
	static UFunction* pFnClearClientConnectionCloseDelegate = NULL;

	if (!pFnClearClientConnectionCloseDelegate)
		pFnClearClientConnectionCloseDelegate = (UFunction*)UObject::GObjObjects()->Data[45498];

	UOnlineAuthInterfaceImpl_execClearClientConnectionCloseDelegate_Parms ClearClientConnectionCloseDelegate_Parms;
	memcpy(&ClearClientConnectionCloseDelegate_Parms.ClientConnectionCloseDelegate, &ClientConnectionCloseDelegate, 0xC);

	this->ProcessEvent(pFnClearClientConnectionCloseDelegate, &ClearClientConnectionCloseDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddClientConnectionCloseDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         ClientConnectionCloseDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddClientConnectionCloseDelegate(struct FScriptDelegate ClientConnectionCloseDelegate)
{
	static UFunction* pFnAddClientConnectionCloseDelegate = NULL;

	if (!pFnAddClientConnectionCloseDelegate)
		pFnAddClientConnectionCloseDelegate = (UFunction*)UObject::GObjObjects()->Data[45496];

	UOnlineAuthInterfaceImpl_execAddClientConnectionCloseDelegate_Parms AddClientConnectionCloseDelegate_Parms;
	memcpy(&AddClientConnectionCloseDelegate_Parms.ClientConnectionCloseDelegate, &ClientConnectionCloseDelegate, 0xC);

	this->ProcessEvent(pFnAddClientConnectionCloseDelegate, &AddClientConnectionCloseDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRetryServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthRetryServerDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthRetryServerDelegate(struct FScriptDelegate AuthRetryServerDelegate)
{
	static UFunction* pFnClearAuthRetryServerDelegate = NULL;

	if (!pFnClearAuthRetryServerDelegate)
		pFnClearAuthRetryServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45494];

	UOnlineAuthInterfaceImpl_execClearAuthRetryServerDelegate_Parms ClearAuthRetryServerDelegate_Parms;
	memcpy(&ClearAuthRetryServerDelegate_Parms.AuthRetryServerDelegate, &AuthRetryServerDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthRetryServerDelegate, &ClearAuthRetryServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRetryServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthRetryServerDelegate        ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthRetryServerDelegate(struct FScriptDelegate AuthRetryServerDelegate)
{
	static UFunction* pFnAddAuthRetryServerDelegate = NULL;

	if (!pFnAddAuthRetryServerDelegate)
		pFnAddAuthRetryServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45492];

	UOnlineAuthInterfaceImpl_execAddAuthRetryServerDelegate_Parms AddAuthRetryServerDelegate_Parms;
	memcpy(&AddAuthRetryServerDelegate_Parms.AuthRetryServerDelegate, &AuthRetryServerDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthRetryServerDelegate, &AddAuthRetryServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthKillClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthKillClientDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthKillClientDelegate(struct FScriptDelegate AuthKillClientDelegate)
{
	static UFunction* pFnClearAuthKillClientDelegate = NULL;

	if (!pFnClearAuthKillClientDelegate)
		pFnClearAuthKillClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45490];

	UOnlineAuthInterfaceImpl_execClearAuthKillClientDelegate_Parms ClearAuthKillClientDelegate_Parms;
	memcpy(&ClearAuthKillClientDelegate_Parms.AuthKillClientDelegate, &AuthKillClientDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthKillClientDelegate, &ClearAuthKillClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthKillClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthKillClientDelegate         ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthKillClientDelegate(struct FScriptDelegate AuthKillClientDelegate)
{
	static UFunction* pFnAddAuthKillClientDelegate = NULL;

	if (!pFnAddAuthKillClientDelegate)
		pFnAddAuthKillClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45488];

	UOnlineAuthInterfaceImpl_execAddAuthKillClientDelegate_Parms AddAuthKillClientDelegate_Parms;
	memcpy(&AddAuthKillClientDelegate_Parms.AuthKillClientDelegate, &AuthKillClientDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthKillClientDelegate, &AddAuthKillClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthCompleteServerDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthCompleteServerDelegate(struct FScriptDelegate AuthCompleteServerDelegate)
{
	static UFunction* pFnClearAuthCompleteServerDelegate = NULL;

	if (!pFnClearAuthCompleteServerDelegate)
		pFnClearAuthCompleteServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45486];

	UOnlineAuthInterfaceImpl_execClearAuthCompleteServerDelegate_Parms ClearAuthCompleteServerDelegate_Parms;
	memcpy(&ClearAuthCompleteServerDelegate_Parms.AuthCompleteServerDelegate, &AuthCompleteServerDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthCompleteServerDelegate, &ClearAuthCompleteServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthCompleteServerDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthCompleteServerDelegate(struct FScriptDelegate AuthCompleteServerDelegate)
{
	static UFunction* pFnAddAuthCompleteServerDelegate = NULL;

	if (!pFnAddAuthCompleteServerDelegate)
		pFnAddAuthCompleteServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45484];

	UOnlineAuthInterfaceImpl_execAddAuthCompleteServerDelegate_Parms AddAuthCompleteServerDelegate_Parms;
	memcpy(&AddAuthCompleteServerDelegate_Parms.AuthCompleteServerDelegate, &AuthCompleteServerDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthCompleteServerDelegate, &AddAuthCompleteServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthCompleteClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthCompleteClientDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthCompleteClientDelegate(struct FScriptDelegate AuthCompleteClientDelegate)
{
	static UFunction* pFnClearAuthCompleteClientDelegate = NULL;

	if (!pFnClearAuthCompleteClientDelegate)
		pFnClearAuthCompleteClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45482];

	UOnlineAuthInterfaceImpl_execClearAuthCompleteClientDelegate_Parms ClearAuthCompleteClientDelegate_Parms;
	memcpy(&ClearAuthCompleteClientDelegate_Parms.AuthCompleteClientDelegate, &AuthCompleteClientDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthCompleteClientDelegate, &ClearAuthCompleteClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthCompleteClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthCompleteClientDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthCompleteClientDelegate(struct FScriptDelegate AuthCompleteClientDelegate)
{
	static UFunction* pFnAddAuthCompleteClientDelegate = NULL;

	if (!pFnAddAuthCompleteClientDelegate)
		pFnAddAuthCompleteClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45480];

	UOnlineAuthInterfaceImpl_execAddAuthCompleteClientDelegate_Parms AddAuthCompleteClientDelegate_Parms;
	memcpy(&AddAuthCompleteClientDelegate_Parms.AuthCompleteClientDelegate, &AuthCompleteClientDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthCompleteClientDelegate, &AddAuthCompleteClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthBlobReceivedServerDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthBlobReceivedServerDelegate(struct FScriptDelegate AuthBlobReceivedServerDelegate)
{
	static UFunction* pFnClearAuthBlobReceivedServerDelegate = NULL;

	if (!pFnClearAuthBlobReceivedServerDelegate)
		pFnClearAuthBlobReceivedServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45478];

	UOnlineAuthInterfaceImpl_execClearAuthBlobReceivedServerDelegate_Parms ClearAuthBlobReceivedServerDelegate_Parms;
	memcpy(&ClearAuthBlobReceivedServerDelegate_Parms.AuthBlobReceivedServerDelegate, &AuthBlobReceivedServerDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthBlobReceivedServerDelegate, &ClearAuthBlobReceivedServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthBlobReceivedServerDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthBlobReceivedServerDelegate(struct FScriptDelegate AuthBlobReceivedServerDelegate)
{
	static UFunction* pFnAddAuthBlobReceivedServerDelegate = NULL;

	if (!pFnAddAuthBlobReceivedServerDelegate)
		pFnAddAuthBlobReceivedServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45476];

	UOnlineAuthInterfaceImpl_execAddAuthBlobReceivedServerDelegate_Parms AddAuthBlobReceivedServerDelegate_Parms;
	memcpy(&AddAuthBlobReceivedServerDelegate_Parms.AuthBlobReceivedServerDelegate, &AuthBlobReceivedServerDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthBlobReceivedServerDelegate, &AddAuthBlobReceivedServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthBlobReceivedClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthBlobReceivedClientDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthBlobReceivedClientDelegate(struct FScriptDelegate AuthBlobReceivedClientDelegate)
{
	static UFunction* pFnClearAuthBlobReceivedClientDelegate = NULL;

	if (!pFnClearAuthBlobReceivedClientDelegate)
		pFnClearAuthBlobReceivedClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45474];

	UOnlineAuthInterfaceImpl_execClearAuthBlobReceivedClientDelegate_Parms ClearAuthBlobReceivedClientDelegate_Parms;
	memcpy(&ClearAuthBlobReceivedClientDelegate_Parms.AuthBlobReceivedClientDelegate, &AuthBlobReceivedClientDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthBlobReceivedClientDelegate, &ClearAuthBlobReceivedClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthBlobReceivedClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthBlobReceivedClientDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthBlobReceivedClientDelegate(struct FScriptDelegate AuthBlobReceivedClientDelegate)
{
	static UFunction* pFnAddAuthBlobReceivedClientDelegate = NULL;

	if (!pFnAddAuthBlobReceivedClientDelegate)
		pFnAddAuthBlobReceivedClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45472];

	UOnlineAuthInterfaceImpl_execAddAuthBlobReceivedClientDelegate_Parms AddAuthBlobReceivedClientDelegate_Parms;
	memcpy(&AddAuthBlobReceivedClientDelegate_Parms.AuthBlobReceivedClientDelegate, &AuthBlobReceivedClientDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthBlobReceivedClientDelegate, &AddAuthBlobReceivedClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthRequestServerDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthRequestServerDelegate(struct FScriptDelegate AuthRequestServerDelegate)
{
	static UFunction* pFnClearAuthRequestServerDelegate = NULL;

	if (!pFnClearAuthRequestServerDelegate)
		pFnClearAuthRequestServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45470];

	UOnlineAuthInterfaceImpl_execClearAuthRequestServerDelegate_Parms ClearAuthRequestServerDelegate_Parms;
	memcpy(&ClearAuthRequestServerDelegate_Parms.AuthRequestServerDelegate, &AuthRequestServerDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthRequestServerDelegate, &ClearAuthRequestServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestServerDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthRequestServerDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthRequestServerDelegate(struct FScriptDelegate AuthRequestServerDelegate)
{
	static UFunction* pFnAddAuthRequestServerDelegate = NULL;

	if (!pFnAddAuthRequestServerDelegate)
		pFnAddAuthRequestServerDelegate = (UFunction*)UObject::GObjObjects()->Data[45468];

	UOnlineAuthInterfaceImpl_execAddAuthRequestServerDelegate_Parms AddAuthRequestServerDelegate_Parms;
	memcpy(&AddAuthRequestServerDelegate_Parms.AuthRequestServerDelegate, &AuthRequestServerDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthRequestServerDelegate, &AddAuthRequestServerDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthRequestClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthRequestClientDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthRequestClientDelegate(struct FScriptDelegate AuthRequestClientDelegate)
{
	static UFunction* pFnClearAuthRequestClientDelegate = NULL;

	if (!pFnClearAuthRequestClientDelegate)
		pFnClearAuthRequestClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45466];

	UOnlineAuthInterfaceImpl_execClearAuthRequestClientDelegate_Parms ClearAuthRequestClientDelegate_Parms;
	memcpy(&ClearAuthRequestClientDelegate_Parms.AuthRequestClientDelegate, &AuthRequestClientDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthRequestClientDelegate, &ClearAuthRequestClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthRequestClientDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthRequestClientDelegate      ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthRequestClientDelegate(struct FScriptDelegate AuthRequestClientDelegate)
{
	static UFunction* pFnAddAuthRequestClientDelegate = NULL;

	if (!pFnAddAuthRequestClientDelegate)
		pFnAddAuthRequestClientDelegate = (UFunction*)UObject::GObjObjects()->Data[45464];

	UOnlineAuthInterfaceImpl_execAddAuthRequestClientDelegate_Parms AddAuthRequestClientDelegate_Parms;
	memcpy(&AddAuthRequestClientDelegate_Parms.AuthRequestClientDelegate, &AuthRequestClientDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthRequestClientDelegate, &AddAuthRequestClientDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.ClearAuthReadyDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthReadyDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::ClearAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate)
{
	static UFunction* pFnClearAuthReadyDelegate = NULL;

	if (!pFnClearAuthReadyDelegate)
		pFnClearAuthReadyDelegate = (UFunction*)UObject::GObjObjects()->Data[45462];

	UOnlineAuthInterfaceImpl_execClearAuthReadyDelegate_Parms ClearAuthReadyDelegate_Parms;
	memcpy(&ClearAuthReadyDelegate_Parms.AuthReadyDelegate, &AuthReadyDelegate, 0xC);

	this->ProcessEvent(pFnClearAuthReadyDelegate, &ClearAuthReadyDelegate_Parms, NULL);
};

// Function IpDrv.OnlineAuthInterfaceImpl.AddAuthReadyDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         AuthReadyDelegate              ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineAuthInterfaceImpl::AddAuthReadyDelegate(struct FScriptDelegate AuthReadyDelegate)
{
	static UFunction* pFnAddAuthReadyDelegate = NULL;

	if (!pFnAddAuthReadyDelegate)
		pFnAddAuthReadyDelegate = (UFunction*)UObject::GObjObjects()->Data[45460];

	UOnlineAuthInterfaceImpl_execAddAuthReadyDelegate_Parms AddAuthReadyDelegate_Parms;
	memcpy(&AddAuthReadyDelegate_Parms.AuthReadyDelegate, &AuthReadyDelegate, 0xC);

	this->ProcessEvent(pFnAddAuthReadyDelegate, &AddAuthReadyDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.HasPendingBootInvite
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::HasPendingBootInvite()
{
	static UFunction* pFnHasPendingBootInvite = NULL;

	if (!pFnHasPendingBootInvite)
		pFnHasPendingBootInvite = (UFunction*)UObject::GObjObjects()->Data[45835];

	UOnlineGameInterfaceImpl_execHasPendingBootInvite_Parms HasPendingBootInvite_Parms;

	this->ProcessEvent(pFnHasPendingBootInvite, &HasPendingBootInvite_Parms, NULL);

	return HasPendingBootInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelNATNegotiation
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineGameInterfaceImpl::CancelNATNegotiation()
{
	static UFunction* pFnCancelNATNegotiation = NULL;

	if (!pFnCancelNATNegotiation)
		pFnCancelNATNegotiation = (UFunction*)UObject::GObjObjects()->Data[45834];

	UOnlineGameInterfaceImpl_execCancelNATNegotiation_Parms CancelNATNegotiation_Parms;

	pFnCancelNATNegotiation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelNATNegotiation, &CancelNATNegotiation_Parms, NULL);

	pFnCancelNATNegotiation->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearQosStatusChangedDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         QosStatusChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate)
{
	static UFunction* pFnClearQosStatusChangedDelegate = NULL;

	if (!pFnClearQosStatusChangedDelegate)
		pFnClearQosStatusChangedDelegate = (UFunction*)UObject::GObjObjects()->Data[45832];

	UOnlineGameInterfaceImpl_execClearQosStatusChangedDelegate_Parms ClearQosStatusChangedDelegate_Parms;
	memcpy(&ClearQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, &QosStatusChangedDelegate, 0xC);

	this->ProcessEvent(pFnClearQosStatusChangedDelegate, &ClearQosStatusChangedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddQosStatusChangedDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         QosStatusChangedDelegate       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddQosStatusChangedDelegate(struct FScriptDelegate QosStatusChangedDelegate)
{
	static UFunction* pFnAddQosStatusChangedDelegate = NULL;

	if (!pFnAddQosStatusChangedDelegate)
		pFnAddQosStatusChangedDelegate = (UFunction*)UObject::GObjObjects()->Data[45830];

	UOnlineGameInterfaceImpl_execAddQosStatusChangedDelegate_Parms AddQosStatusChangedDelegate_Parms;
	memcpy(&AddQosStatusChangedDelegate_Parms.QosStatusChangedDelegate, &QosStatusChangedDelegate, 0xC);

	this->ProcessEvent(pFnAddQosStatusChangedDelegate, &AddQosStatusChangedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnQosStatusChanged
// [0x00120000]
// Parameters infos:
// int                            NumComplete                    ( CPF_Parm )
// int                            NumTotal                       ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnQosStatusChanged(int NumComplete, int NumTotal)
{
	static UFunction* pFnOnQosStatusChanged = NULL;

	if (!pFnOnQosStatusChanged)
		pFnOnQosStatusChanged = (UFunction*)UObject::GObjObjects()->Data[45594];

	UOnlineGameInterfaceImpl_execOnQosStatusChanged_Parms OnQosStatusChanged_Parms;
	OnQosStatusChanged_Parms.NumComplete = NumComplete;
	OnQosStatusChanged_Parms.NumTotal = NumTotal;

	this->ProcessEvent(pFnOnQosStatusChanged, &OnQosStatusChanged_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.BindPlatformSpecificSessionToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

bool UOnlineGameInterfaceImpl::BindPlatformSpecificSessionToSearch(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnBindPlatformSpecificSessionToSearch = NULL;

	if (!pFnBindPlatformSpecificSessionToSearch)
		pFnBindPlatformSpecificSessionToSearch = (UFunction*)UObject::GObjObjects()->Data[45823];

	UOnlineGameInterfaceImpl_execBindPlatformSpecificSessionToSearch_Parms BindPlatformSpecificSessionToSearch_Parms;
	BindPlatformSpecificSessionToSearch_Parms.SearchingPlayerNum = SearchingPlayerNum;
	BindPlatformSpecificSessionToSearch_Parms.SearchSettings = SearchSettings;
	memcpy(&BindPlatformSpecificSessionToSearch_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50);

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnBindPlatformSpecificSessionToSearch, &BindPlatformSpecificSessionToSearch_Parms, NULL);

	pFnBindPlatformSpecificSessionToSearch->FunctionFlags |= 0x400;

	return BindPlatformSpecificSessionToSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfoBySessionName
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfoBySessionName(struct FName SessionName, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnReadPlatformSpecificSessionInfoBySessionName = NULL;

	if (!pFnReadPlatformSpecificSessionInfoBySessionName)
		pFnReadPlatformSpecificSessionInfoBySessionName = (UFunction*)UObject::GObjObjects()->Data[45819];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfoBySessionName_Parms ReadPlatformSpecificSessionInfoBySessionName_Parms;
	memcpy(&ReadPlatformSpecificSessionInfoBySessionName_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnReadPlatformSpecificSessionInfoBySessionName, &ReadPlatformSpecificSessionInfoBySessionName_Parms, NULL);

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &ReadPlatformSpecificSessionInfoBySessionName_Parms.PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfoBySessionName_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ReadPlatformSpecificSessionInfo
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::ReadPlatformSpecificSessionInfo(struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnReadPlatformSpecificSessionInfo = NULL;

	if (!pFnReadPlatformSpecificSessionInfo)
		pFnReadPlatformSpecificSessionInfo = (UFunction*)UObject::GObjObjects()->Data[45815];

	UOnlineGameInterfaceImpl_execReadPlatformSpecificSessionInfo_Parms ReadPlatformSpecificSessionInfo_Parms;

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnReadPlatformSpecificSessionInfo, &ReadPlatformSpecificSessionInfo_Parms, NULL);

	pFnReadPlatformSpecificSessionInfo->FunctionFlags |= 0x400;

	if (DesiredGame)
		memcpy(DesiredGame, &ReadPlatformSpecificSessionInfo_Parms.DesiredGame, 0x8);

	if (PlatformSpecificInfo)
		memcpy(PlatformSpecificInfo, &ReadPlatformSpecificSessionInfo_Parms.PlatformSpecificInfo, 0x50);

	return ReadPlatformSpecificSessionInfo_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.QueryNonAdvertisedData
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            StartAt                        ( CPF_Parm )
// int                            NumberToQuery                  ( CPF_Parm )

bool UOnlineGameInterfaceImpl::QueryNonAdvertisedData(int StartAt, int NumberToQuery)
{
	static UFunction* pFnQueryNonAdvertisedData = NULL;

	if (!pFnQueryNonAdvertisedData)
		pFnQueryNonAdvertisedData = (UFunction*)UObject::GObjObjects()->Data[45811];

	UOnlineGameInterfaceImpl_execQueryNonAdvertisedData_Parms QueryNonAdvertisedData_Parms;
	QueryNonAdvertisedData_Parms.StartAt = StartAt;
	QueryNonAdvertisedData_Parms.NumberToQuery = NumberToQuery;

	this->ProcessEvent(pFnQueryNonAdvertisedData, &QueryNonAdvertisedData_Parms, NULL);

	return QueryNonAdvertisedData_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinMigratedOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearJoinMigratedOnlineGameCompleteDelegate = NULL;

	if (!pFnClearJoinMigratedOnlineGameCompleteDelegate)
		pFnClearJoinMigratedOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45809];

	UOnlineGameInterfaceImpl_execClearJoinMigratedOnlineGameCompleteDelegate_Parms ClearJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, &JoinMigratedOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearJoinMigratedOnlineGameCompleteDelegate, &ClearJoinMigratedOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinMigratedOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinMigratedOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddJoinMigratedOnlineGameCompleteDelegate(struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddJoinMigratedOnlineGameCompleteDelegate = NULL;

	if (!pFnAddJoinMigratedOnlineGameCompleteDelegate)
		pFnAddJoinMigratedOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45807];

	UOnlineGameInterfaceImpl_execAddJoinMigratedOnlineGameCompleteDelegate_Parms AddJoinMigratedOnlineGameCompleteDelegate_Parms;
	memcpy(&AddJoinMigratedOnlineGameCompleteDelegate_Parms.JoinMigratedOnlineGameCompleteDelegate, &JoinMigratedOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddJoinMigratedOnlineGameCompleteDelegate, &AddJoinMigratedOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinMigratedOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnJoinMigratedOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnJoinMigratedOnlineGameComplete = NULL;

	if (!pFnOnJoinMigratedOnlineGameComplete)
		pFnOnJoinMigratedOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45577];

	UOnlineGameInterfaceImpl_execOnJoinMigratedOnlineGameComplete_Parms OnJoinMigratedOnlineGameComplete_Parms;
	memcpy(&OnJoinMigratedOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnJoinMigratedOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnJoinMigratedOnlineGameComplete, &OnJoinMigratedOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinMigratedOnlineGame
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::JoinMigratedOnlineGame(unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static UFunction* pFnJoinMigratedOnlineGame = NULL;

	if (!pFnJoinMigratedOnlineGame)
		pFnJoinMigratedOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45800];

	UOnlineGameInterfaceImpl_execJoinMigratedOnlineGame_Parms JoinMigratedOnlineGame_Parms;
	JoinMigratedOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy(&JoinMigratedOnlineGame_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnJoinMigratedOnlineGame, &JoinMigratedOnlineGame_Parms, NULL);

	if (DesiredGame)
		memcpy(DesiredGame, &JoinMigratedOnlineGame_Parms.DesiredGame, 0x8);

	return JoinMigratedOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearMigrateOnlineGameCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearMigrateOnlineGameCompleteDelegate = NULL;

	if (!pFnClearMigrateOnlineGameCompleteDelegate)
		pFnClearMigrateOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45798];

	UOnlineGameInterfaceImpl_execClearMigrateOnlineGameCompleteDelegate_Parms ClearMigrateOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, &MigrateOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearMigrateOnlineGameCompleteDelegate, &ClearMigrateOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddMigrateOnlineGameCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         MigrateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddMigrateOnlineGameCompleteDelegate(struct FScriptDelegate MigrateOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddMigrateOnlineGameCompleteDelegate = NULL;

	if (!pFnAddMigrateOnlineGameCompleteDelegate)
		pFnAddMigrateOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45796];

	UOnlineGameInterfaceImpl_execAddMigrateOnlineGameCompleteDelegate_Parms AddMigrateOnlineGameCompleteDelegate_Parms;
	memcpy(&AddMigrateOnlineGameCompleteDelegate_Parms.MigrateOnlineGameCompleteDelegate, &MigrateOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddMigrateOnlineGameCompleteDelegate, &AddMigrateOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnMigrateOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnMigrateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnMigrateOnlineGameComplete = NULL;

	if (!pFnOnMigrateOnlineGameComplete)
		pFnOnMigrateOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45574];

	UOnlineGameInterfaceImpl_execOnMigrateOnlineGameComplete_Parms OnMigrateOnlineGameComplete_Parms;
	memcpy(&OnMigrateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnMigrateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnMigrateOnlineGameComplete, &OnMigrateOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.MigrateOnlineGame
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::MigrateOnlineGame(unsigned char HostingPlayerNum, struct FName SessionName)
{
	static UFunction* pFnMigrateOnlineGame = NULL;

	if (!pFnMigrateOnlineGame)
		pFnMigrateOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45790];

	UOnlineGameInterfaceImpl_execMigrateOnlineGame_Parms MigrateOnlineGame_Parms;
	MigrateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy(&MigrateOnlineGame_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnMigrateOnlineGame, &MigrateOnlineGame_Parms, NULL);

	return MigrateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRecalculateSkillRatingCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         RecalculateSkillRatingGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate)
{
	static UFunction* pFnClearRecalculateSkillRatingCompleteDelegate = NULL;

	if (!pFnClearRecalculateSkillRatingCompleteDelegate)
		pFnClearRecalculateSkillRatingCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45788];

	UOnlineGameInterfaceImpl_execClearRecalculateSkillRatingCompleteDelegate_Parms ClearRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy(&ClearRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingGameCompleteDelegate, &RecalculateSkillRatingGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearRecalculateSkillRatingCompleteDelegate, &ClearRecalculateSkillRatingCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRecalculateSkillRatingCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         RecalculateSkillRatingCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddRecalculateSkillRatingCompleteDelegate(struct FScriptDelegate RecalculateSkillRatingCompleteDelegate)
{
	static UFunction* pFnAddRecalculateSkillRatingCompleteDelegate = NULL;

	if (!pFnAddRecalculateSkillRatingCompleteDelegate)
		pFnAddRecalculateSkillRatingCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45786];

	UOnlineGameInterfaceImpl_execAddRecalculateSkillRatingCompleteDelegate_Parms AddRecalculateSkillRatingCompleteDelegate_Parms;
	memcpy(&AddRecalculateSkillRatingCompleteDelegate_Parms.RecalculateSkillRatingCompleteDelegate, &RecalculateSkillRatingCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddRecalculateSkillRatingCompleteDelegate, &AddRecalculateSkillRatingCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRecalculateSkillRatingComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnRecalculateSkillRatingComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRecalculateSkillRatingComplete = NULL;

	if (!pFnOnRecalculateSkillRatingComplete)
		pFnOnRecalculateSkillRatingComplete = (UFunction*)UObject::GObjObjects()->Data[45580];

	UOnlineGameInterfaceImpl_execOnRecalculateSkillRatingComplete_Parms OnRecalculateSkillRatingComplete_Parms;
	memcpy(&OnRecalculateSkillRatingComplete_Parms.SessionName, &SessionName, 0x8);
	OnRecalculateSkillRatingComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRecalculateSkillRatingComplete, &OnRecalculateSkillRatingComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.RecalculateSkillRating
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::RecalculateSkillRating(struct FName SessionName, TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnRecalculateSkillRating = NULL;

	if (!pFnRecalculateSkillRating)
		pFnRecalculateSkillRating = (UFunction*)UObject::GObjObjects()->Data[45779];

	UOnlineGameInterfaceImpl_execRecalculateSkillRating_Parms RecalculateSkillRating_Parms;
	memcpy(&RecalculateSkillRating_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnRecalculateSkillRating, &RecalculateSkillRating_Parms, NULL);

	if (Players)
		memcpy(Players, &RecalculateSkillRating_Parms.Players, 0xC);

	return RecalculateSkillRating_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteProcessingStartedDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         GameInviteProcessingStartedDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearGameInviteProcessingStartedDelegate(struct FScriptDelegate GameInviteProcessingStartedDelegate)
{
	static UFunction* pFnClearGameInviteProcessingStartedDelegate = NULL;

	if (!pFnClearGameInviteProcessingStartedDelegate)
		pFnClearGameInviteProcessingStartedDelegate = (UFunction*)UObject::GObjObjects()->Data[45777];

	UOnlineGameInterfaceImpl_execClearGameInviteProcessingStartedDelegate_Parms ClearGameInviteProcessingStartedDelegate_Parms;
	memcpy(&ClearGameInviteProcessingStartedDelegate_Parms.GameInviteProcessingStartedDelegate, &GameInviteProcessingStartedDelegate, 0xC);

	this->ProcessEvent(pFnClearGameInviteProcessingStartedDelegate, &ClearGameInviteProcessingStartedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteProcessingStartedDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         GameInviteProcessingStartedDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddGameInviteProcessingStartedDelegate(struct FScriptDelegate GameInviteProcessingStartedDelegate)
{
	static UFunction* pFnAddGameInviteProcessingStartedDelegate = NULL;

	if (!pFnAddGameInviteProcessingStartedDelegate)
		pFnAddGameInviteProcessingStartedDelegate = (UFunction*)UObject::GObjObjects()->Data[45775];

	UOnlineGameInterfaceImpl_execAddGameInviteProcessingStartedDelegate_Parms AddGameInviteProcessingStartedDelegate_Parms;
	memcpy(&AddGameInviteProcessingStartedDelegate_Parms.GameInviteProcessingStartedDelegate, &GameInviteProcessingStartedDelegate, 0xC);

	this->ProcessEvent(pFnAddGameInviteProcessingStartedDelegate, &AddGameInviteProcessingStartedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteProcessingStarted
// [0x00120000]
// Parameters infos:

void UOnlineGameInterfaceImpl::OnGameInviteProcessingStarted()
{
	static UFunction* pFnOnGameInviteProcessingStarted = NULL;

	if (!pFnOnGameInviteProcessingStarted)
		pFnOnGameInviteProcessingStarted = (UFunction*)UObject::GObjObjects()->Data[45599];

	UOnlineGameInterfaceImpl_execOnGameInviteProcessingStarted_Parms OnGameInviteProcessingStarted_Parms;

	this->ProcessEvent(pFnOnGameInviteProcessingStarted, &OnGameInviteProcessingStarted_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AcceptGameInvite
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::AcceptGameInvite(unsigned char LocalUserNum, struct FName SessionName)
{
	static UFunction* pFnAcceptGameInvite = NULL;

	if (!pFnAcceptGameInvite)
		pFnAcceptGameInvite = (UFunction*)UObject::GObjObjects()->Data[45771];

	UOnlineGameInterfaceImpl_execAcceptGameInvite_Parms AcceptGameInvite_Parms;
	AcceptGameInvite_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AcceptGameInvite_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnAcceptGameInvite, &AcceptGameInvite_Parms, NULL);

	return AcceptGameInvite_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearGameInviteAcceptedDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* pFnClearGameInviteAcceptedDelegate = NULL;

	if (!pFnClearGameInviteAcceptedDelegate)
		pFnClearGameInviteAcceptedDelegate = (UFunction*)UObject::GObjObjects()->Data[45768];

	UOnlineGameInterfaceImpl_execClearGameInviteAcceptedDelegate_Parms ClearGameInviteAcceptedDelegate_Parms;
	ClearGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&ClearGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC);

	this->ProcessEvent(pFnClearGameInviteAcceptedDelegate, &ClearGameInviteAcceptedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddGameInviteAcceptedDelegate
// [0x00020000]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )
// struct FScriptDelegate         GameInviteAcceptedDelegate     ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddGameInviteAcceptedDelegate(unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate)
{
	static UFunction* pFnAddGameInviteAcceptedDelegate = NULL;

	if (!pFnAddGameInviteAcceptedDelegate)
		pFnAddGameInviteAcceptedDelegate = (UFunction*)UObject::GObjObjects()->Data[45765];

	UOnlineGameInterfaceImpl_execAddGameInviteAcceptedDelegate_Parms AddGameInviteAcceptedDelegate_Parms;
	AddGameInviteAcceptedDelegate_Parms.LocalUserNum = LocalUserNum;
	memcpy(&AddGameInviteAcceptedDelegate_Parms.GameInviteAcceptedDelegate, &GameInviteAcceptedDelegate, 0xC);

	this->ProcessEvent(pFnAddGameInviteAcceptedDelegate, &AddGameInviteAcceptedDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnGameInviteAccepted
// [0x00520000]
// Parameters infos:
// struct FOnlineGameSearchResult InviteResult                   ( CPF_Const | CPF_Parm | CPF_OutParm )

void UOnlineGameInterfaceImpl::OnGameInviteAccepted(struct FOnlineGameSearchResult* InviteResult)
{
	static UFunction* pFnOnGameInviteAccepted = NULL;

	if (!pFnOnGameInviteAccepted)
		pFnOnGameInviteAccepted = (UFunction*)UObject::GObjObjects()->Data[45601];

	UOnlineGameInterfaceImpl_execOnGameInviteAccepted_Parms OnGameInviteAccepted_Parms;

	this->ProcessEvent(pFnOnGameInviteAccepted, &OnGameInviteAccepted_Parms, NULL);

	if (InviteResult)
		memcpy(InviteResult, &OnGameInviteAccepted_Parms.InviteResult, 0x8);
};

// Function IpDrv.OnlineGameInterfaceImpl.GetArbitratedPlayers
// [0x00020000]
// Parameters infos:
// TArray< struct FOnlineArbitrationRegistrant > ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FName                   SessionName                    ( CPF_Parm )

TArray< struct FOnlineArbitrationRegistrant > UOnlineGameInterfaceImpl::GetArbitratedPlayers(struct FName SessionName)
{
	static UFunction* pFnGetArbitratedPlayers = NULL;

	if (!pFnGetArbitratedPlayers)
		pFnGetArbitratedPlayers = (UFunction*)UObject::GObjObjects()->Data[45760];

	UOnlineGameInterfaceImpl_execGetArbitratedPlayers_Parms GetArbitratedPlayers_Parms;
	memcpy(&GetArbitratedPlayers_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnGetArbitratedPlayers, &GetArbitratedPlayers_Parms, NULL);

	return GetArbitratedPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearArbitrationRegistrationCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* pFnClearArbitrationRegistrationCompleteDelegate = NULL;

	if (!pFnClearArbitrationRegistrationCompleteDelegate)
		pFnClearArbitrationRegistrationCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45758];

	UOnlineGameInterfaceImpl_execClearArbitrationRegistrationCompleteDelegate_Parms ClearArbitrationRegistrationCompleteDelegate_Parms;
	memcpy(&ClearArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearArbitrationRegistrationCompleteDelegate, &ClearArbitrationRegistrationCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddArbitrationRegistrationCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         ArbitrationRegistrationCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddArbitrationRegistrationCompleteDelegate(struct FScriptDelegate ArbitrationRegistrationCompleteDelegate)
{
	static UFunction* pFnAddArbitrationRegistrationCompleteDelegate = NULL;

	if (!pFnAddArbitrationRegistrationCompleteDelegate)
		pFnAddArbitrationRegistrationCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45756];

	UOnlineGameInterfaceImpl_execAddArbitrationRegistrationCompleteDelegate_Parms AddArbitrationRegistrationCompleteDelegate_Parms;
	memcpy(&AddArbitrationRegistrationCompleteDelegate_Parms.ArbitrationRegistrationCompleteDelegate, &ArbitrationRegistrationCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddArbitrationRegistrationCompleteDelegate, &AddArbitrationRegistrationCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnArbitrationRegistrationComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnArbitrationRegistrationComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnArbitrationRegistrationComplete = NULL;

	if (!pFnOnArbitrationRegistrationComplete)
		pFnOnArbitrationRegistrationComplete = (UFunction*)UObject::GObjObjects()->Data[45603];

	UOnlineGameInterfaceImpl_execOnArbitrationRegistrationComplete_Parms OnArbitrationRegistrationComplete_Parms;
	memcpy(&OnArbitrationRegistrationComplete_Parms.SessionName, &SessionName, 0x8);
	OnArbitrationRegistrationComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnArbitrationRegistrationComplete, &OnArbitrationRegistrationComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterForArbitration
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterForArbitration(struct FName SessionName)
{
	static UFunction* pFnRegisterForArbitration = NULL;

	if (!pFnRegisterForArbitration)
		pFnRegisterForArbitration = (UFunction*)UObject::GObjObjects()->Data[45751];

	UOnlineGameInterfaceImpl_execRegisterForArbitration_Parms RegisterForArbitration_Parms;
	memcpy(&RegisterForArbitration_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnRegisterForArbitration, &RegisterForArbitration_Parms, NULL);

	return RegisterForArbitration_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearEndOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearEndOnlineGameCompleteDelegate = NULL;

	if (!pFnClearEndOnlineGameCompleteDelegate)
		pFnClearEndOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45749];

	UOnlineGameInterfaceImpl_execClearEndOnlineGameCompleteDelegate_Parms ClearEndOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearEndOnlineGameCompleteDelegate, &ClearEndOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddEndOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         EndOnlineGameCompleteDelegate  ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddEndOnlineGameCompleteDelegate(struct FScriptDelegate EndOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddEndOnlineGameCompleteDelegate = NULL;

	if (!pFnAddEndOnlineGameCompleteDelegate)
		pFnAddEndOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45747];

	UOnlineGameInterfaceImpl_execAddEndOnlineGameCompleteDelegate_Parms AddEndOnlineGameCompleteDelegate_Parms;
	memcpy(&AddEndOnlineGameCompleteDelegate_Parms.EndOnlineGameCompleteDelegate, &EndOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddEndOnlineGameCompleteDelegate, &AddEndOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnEndOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnEndOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnEndOnlineGameComplete = NULL;

	if (!pFnOnEndOnlineGameComplete)
		pFnOnEndOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45586];

	UOnlineGameInterfaceImpl_execOnEndOnlineGameComplete_Parms OnEndOnlineGameComplete_Parms;
	memcpy(&OnEndOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnEndOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnEndOnlineGameComplete, &OnEndOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.EndOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::EndOnlineGame(struct FName SessionName)
{
	static UFunction* pFnEndOnlineGame = NULL;

	if (!pFnEndOnlineGame)
		pFnEndOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45742];

	UOnlineGameInterfaceImpl_execEndOnlineGame_Parms EndOnlineGame_Parms;
	memcpy(&EndOnlineGame_Parms.SessionName, &SessionName, 0x8);

	pFnEndOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEndOnlineGame, &EndOnlineGame_Parms, NULL);

	pFnEndOnlineGame->FunctionFlags |= 0x400;

	return EndOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearStartOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearStartOnlineGameCompleteDelegate = NULL;

	if (!pFnClearStartOnlineGameCompleteDelegate)
		pFnClearStartOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45740];

	UOnlineGameInterfaceImpl_execClearStartOnlineGameCompleteDelegate_Parms ClearStartOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearStartOnlineGameCompleteDelegate, &ClearStartOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddStartOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         StartOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddStartOnlineGameCompleteDelegate(struct FScriptDelegate StartOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddStartOnlineGameCompleteDelegate = NULL;

	if (!pFnAddStartOnlineGameCompleteDelegate)
		pFnAddStartOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45738];

	UOnlineGameInterfaceImpl_execAddStartOnlineGameCompleteDelegate_Parms AddStartOnlineGameCompleteDelegate_Parms;
	memcpy(&AddStartOnlineGameCompleteDelegate_Parms.StartOnlineGameCompleteDelegate, &StartOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddStartOnlineGameCompleteDelegate, &AddStartOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnStartOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnStartOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnStartOnlineGameComplete = NULL;

	if (!pFnOnStartOnlineGameComplete)
		pFnOnStartOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45583];

	UOnlineGameInterfaceImpl_execOnStartOnlineGameComplete_Parms OnStartOnlineGameComplete_Parms;
	memcpy(&OnStartOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnStartOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnStartOnlineGameComplete, &OnStartOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.StartOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::StartOnlineGame(struct FName SessionName)
{
	static UFunction* pFnStartOnlineGame = NULL;

	if (!pFnStartOnlineGame)
		pFnStartOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45733];

	UOnlineGameInterfaceImpl_execStartOnlineGame_Parms StartOnlineGame_Parms;
	memcpy(&StartOnlineGame_Parms.SessionName, &SessionName, 0x8);

	pFnStartOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnStartOnlineGame, &StartOnlineGame_Parms, NULL);

	pFnStartOnlineGame->FunctionFlags |= 0x400;

	return StartOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUnregisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearUnregisterPlayerCompleteDelegate = NULL;

	if (!pFnClearUnregisterPlayerCompleteDelegate)
		pFnClearUnregisterPlayerCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45731];

	UOnlineGameInterfaceImpl_execClearUnregisterPlayerCompleteDelegate_Parms ClearUnregisterPlayerCompleteDelegate_Parms;
	memcpy(&ClearUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearUnregisterPlayerCompleteDelegate, &ClearUnregisterPlayerCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUnregisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         UnregisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUnregisterPlayerCompleteDelegate(struct FScriptDelegate UnregisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddUnregisterPlayerCompleteDelegate = NULL;

	if (!pFnAddUnregisterPlayerCompleteDelegate)
		pFnAddUnregisterPlayerCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45729];

	UOnlineGameInterfaceImpl_execAddUnregisterPlayerCompleteDelegate_Parms AddUnregisterPlayerCompleteDelegate_Parms;
	memcpy(&AddUnregisterPlayerCompleteDelegate_Parms.UnregisterPlayerCompleteDelegate, &UnregisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddUnregisterPlayerCompleteDelegate, &AddUnregisterPlayerCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUnregisterPlayerComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUnregisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUnregisterPlayerComplete = NULL;

	if (!pFnOnUnregisterPlayerComplete)
		pFnOnUnregisterPlayerComplete = (UFunction*)UObject::GObjObjects()->Data[45607];

	UOnlineGameInterfaceImpl_execOnUnregisterPlayerComplete_Parms OnUnregisterPlayerComplete_Parms;
	memcpy(&OnUnregisterPlayerComplete_Parms.SessionName, &SessionName, 0x8);
	memcpy(&OnUnregisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x18);
	OnUnregisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUnregisterPlayerComplete, &OnUnregisterPlayerComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayers
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::UnregisterPlayers(struct FName SessionName, TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnUnregisterPlayers = NULL;

	if (!pFnUnregisterPlayers)
		pFnUnregisterPlayers = (UFunction*)UObject::GObjObjects()->Data[45721];

	UOnlineGameInterfaceImpl_execUnregisterPlayers_Parms UnregisterPlayers_Parms;
	memcpy(&UnregisterPlayers_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnUnregisterPlayers, &UnregisterPlayers_Parms, NULL);

	if (Players)
		memcpy(Players, &UnregisterPlayers_Parms.Players, 0xC);

	return UnregisterPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.UnregisterPlayer
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )

bool UOnlineGameInterfaceImpl::UnregisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID)
{
	static UFunction* pFnUnregisterPlayer = NULL;

	if (!pFnUnregisterPlayer)
		pFnUnregisterPlayer = (UFunction*)UObject::GObjObjects()->Data[45717];

	UOnlineGameInterfaceImpl_execUnregisterPlayer_Parms UnregisterPlayer_Parms;
	memcpy(&UnregisterPlayer_Parms.SessionName, &SessionName, 0x8);
	memcpy(&UnregisterPlayer_Parms.PlayerID, &PlayerID, 0x18);

	this->ProcessEvent(pFnUnregisterPlayer, &UnregisterPlayer_Parms, NULL);

	return UnregisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearRegisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnClearRegisterPlayerCompleteDelegate = NULL;

	if (!pFnClearRegisterPlayerCompleteDelegate)
		pFnClearRegisterPlayerCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45715];

	UOnlineGameInterfaceImpl_execClearRegisterPlayerCompleteDelegate_Parms ClearRegisterPlayerCompleteDelegate_Parms;
	memcpy(&ClearRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearRegisterPlayerCompleteDelegate, &ClearRegisterPlayerCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddRegisterPlayerCompleteDelegate
// [0x00020000]
// Parameters infos:
// struct FScriptDelegate         RegisterPlayerCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddRegisterPlayerCompleteDelegate(struct FScriptDelegate RegisterPlayerCompleteDelegate)
{
	static UFunction* pFnAddRegisterPlayerCompleteDelegate = NULL;

	if (!pFnAddRegisterPlayerCompleteDelegate)
		pFnAddRegisterPlayerCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45713];

	UOnlineGameInterfaceImpl_execAddRegisterPlayerCompleteDelegate_Parms AddRegisterPlayerCompleteDelegate_Parms;
	memcpy(&AddRegisterPlayerCompleteDelegate_Parms.RegisterPlayerCompleteDelegate, &RegisterPlayerCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddRegisterPlayerCompleteDelegate, &AddRegisterPlayerCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnRegisterPlayerComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnRegisterPlayerComplete(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnRegisterPlayerComplete = NULL;

	if (!pFnOnRegisterPlayerComplete)
		pFnOnRegisterPlayerComplete = (UFunction*)UObject::GObjObjects()->Data[45609];

	UOnlineGameInterfaceImpl_execOnRegisterPlayerComplete_Parms OnRegisterPlayerComplete_Parms;
	memcpy(&OnRegisterPlayerComplete_Parms.SessionName, &SessionName, 0x8);
	memcpy(&OnRegisterPlayerComplete_Parms.PlayerID, &PlayerID, 0x18);
	OnRegisterPlayerComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnRegisterPlayerComplete, &OnRegisterPlayerComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayers
// [0x00420000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// TArray< struct FUniqueNetId >  Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::RegisterPlayers(struct FName SessionName, TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnRegisterPlayers = NULL;

	if (!pFnRegisterPlayers)
		pFnRegisterPlayers = (UFunction*)UObject::GObjObjects()->Data[45705];

	UOnlineGameInterfaceImpl_execRegisterPlayers_Parms RegisterPlayers_Parms;
	memcpy(&RegisterPlayers_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnRegisterPlayers, &RegisterPlayers_Parms, NULL);

	if (Players)
		memcpy(Players, &RegisterPlayers_Parms.Players, 0xC);

	return RegisterPlayers_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.RegisterPlayer
// [0x00020000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bWasInvited                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::RegisterPlayer(struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited)
{
	static UFunction* pFnRegisterPlayer = NULL;

	if (!pFnRegisterPlayer)
		pFnRegisterPlayer = (UFunction*)UObject::GObjObjects()->Data[45700];

	UOnlineGameInterfaceImpl_execRegisterPlayer_Parms RegisterPlayer_Parms;
	memcpy(&RegisterPlayer_Parms.SessionName, &SessionName, 0x8);
	memcpy(&RegisterPlayer_Parms.PlayerID, &PlayerID, 0x18);
	RegisterPlayer_Parms.bWasInvited = bWasInvited;

	this->ProcessEvent(pFnRegisterPlayer, &RegisterPlayer_Parms, NULL);

	return RegisterPlayer_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetResolvedConnectString
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FString                 ConnectInfo                    ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UOnlineGameInterfaceImpl::GetResolvedConnectString(struct FName SessionName, struct FString* ConnectInfo)
{
	static UFunction* pFnGetResolvedConnectString = NULL;

	if (!pFnGetResolvedConnectString)
		pFnGetResolvedConnectString = (UFunction*)UObject::GObjObjects()->Data[45696];

	UOnlineGameInterfaceImpl_execGetResolvedConnectString_Parms GetResolvedConnectString_Parms;
	memcpy(&GetResolvedConnectString_Parms.SessionName, &SessionName, 0x8);

	pFnGetResolvedConnectString->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResolvedConnectString, &GetResolvedConnectString_Parms, NULL);

	pFnGetResolvedConnectString->FunctionFlags |= 0x400;

	if (ConnectInfo)
		memcpy(ConnectInfo, &GetResolvedConnectString_Parms.ConnectInfo, 0xC);

	return GetResolvedConnectString_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearJoinOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearJoinOnlineGameCompleteDelegate = NULL;

	if (!pFnClearJoinOnlineGameCompleteDelegate)
		pFnClearJoinOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45694];

	UOnlineGameInterfaceImpl_execClearJoinOnlineGameCompleteDelegate_Parms ClearJoinOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearJoinOnlineGameCompleteDelegate, &ClearJoinOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddJoinOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         JoinOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddJoinOnlineGameCompleteDelegate(struct FScriptDelegate JoinOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddJoinOnlineGameCompleteDelegate = NULL;

	if (!pFnAddJoinOnlineGameCompleteDelegate)
		pFnAddJoinOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45692];

	UOnlineGameInterfaceImpl_execAddJoinOnlineGameCompleteDelegate_Parms AddJoinOnlineGameCompleteDelegate_Parms;
	memcpy(&AddJoinOnlineGameCompleteDelegate_Parms.JoinOnlineGameCompleteDelegate, &JoinOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddJoinOnlineGameCompleteDelegate, &AddJoinOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnJoinOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnJoinOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnJoinOnlineGameComplete = NULL;

	if (!pFnOnJoinOnlineGameComplete)
		pFnOnJoinOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45571];

	UOnlineGameInterfaceImpl_execOnJoinOnlineGameComplete_Parms OnJoinOnlineGameComplete_Parms;
	memcpy(&OnJoinOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnJoinOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnJoinOnlineGameComplete, &OnJoinOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.JoinOnlineGame
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  PlayerNum                      ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredGame                    ( CPF_Const | CPF_Parm | CPF_OutParm )

bool UOnlineGameInterfaceImpl::JoinOnlineGame(unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame)
{
	static UFunction* pFnJoinOnlineGame = NULL;

	if (!pFnJoinOnlineGame)
		pFnJoinOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45685];

	UOnlineGameInterfaceImpl_execJoinOnlineGame_Parms JoinOnlineGame_Parms;
	JoinOnlineGame_Parms.PlayerNum = PlayerNum;
	memcpy(&JoinOnlineGame_Parms.SessionName, &SessionName, 0x8);

	pFnJoinOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnJoinOnlineGame, &JoinOnlineGame_Parms, NULL);

	pFnJoinOnlineGame->FunctionFlags |= 0x400;

	if (DesiredGame)
		memcpy(DesiredGame, &JoinOnlineGame_Parms.DesiredGame, 0x8);

	return JoinOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.FreeSearchResults
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FreeSearchResults(class UOnlineGameSearch* Search)
{
	static UFunction* pFnFreeSearchResults = NULL;

	if (!pFnFreeSearchResults)
		pFnFreeSearchResults = (UFunction*)UObject::GObjObjects()->Data[45682];

	UOnlineGameInterfaceImpl_execFreeSearchResults_Parms FreeSearchResults_Parms;
	FreeSearchResults_Parms.Search = Search;

	pFnFreeSearchResults->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFreeSearchResults, &FreeSearchResults_Parms, NULL);

	pFnFreeSearchResults->FunctionFlags |= 0x400;

	return FreeSearchResults_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCancelFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnClearCancelFindOnlineGamesCompleteDelegate = NULL;

	if (!pFnClearCancelFindOnlineGamesCompleteDelegate)
		pFnClearCancelFindOnlineGamesCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45680];

	UOnlineGameInterfaceImpl_execClearCancelFindOnlineGamesCompleteDelegate_Parms ClearCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy(&ClearCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearCancelFindOnlineGamesCompleteDelegate, &ClearCancelFindOnlineGamesCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCancelFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CancelFindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCancelFindOnlineGamesCompleteDelegate(struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnAddCancelFindOnlineGamesCompleteDelegate = NULL;

	if (!pFnAddCancelFindOnlineGamesCompleteDelegate)
		pFnAddCancelFindOnlineGamesCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45678];

	UOnlineGameInterfaceImpl_execAddCancelFindOnlineGamesCompleteDelegate_Parms AddCancelFindOnlineGamesCompleteDelegate_Parms;
	memcpy(&AddCancelFindOnlineGamesCompleteDelegate_Parms.CancelFindOnlineGamesCompleteDelegate, &CancelFindOnlineGamesCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddCancelFindOnlineGamesCompleteDelegate, &AddCancelFindOnlineGamesCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCancelFindOnlineGamesComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCancelFindOnlineGamesComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCancelFindOnlineGamesComplete = NULL;

	if (!pFnOnCancelFindOnlineGamesComplete)
		pFnOnCancelFindOnlineGamesComplete = (UFunction*)UObject::GObjObjects()->Data[45592];

	UOnlineGameInterfaceImpl_execOnCancelFindOnlineGamesComplete_Parms OnCancelFindOnlineGamesComplete_Parms;
	OnCancelFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCancelFindOnlineGamesComplete, &OnCancelFindOnlineGamesComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.CancelFindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlineGameInterfaceImpl::CancelFindOnlineGames()
{
	static UFunction* pFnCancelFindOnlineGames = NULL;

	if (!pFnCancelFindOnlineGames)
		pFnCancelFindOnlineGames = (UFunction*)UObject::GObjObjects()->Data[45675];

	UOnlineGameInterfaceImpl_execCancelFindOnlineGames_Parms CancelFindOnlineGames_Parms;

	pFnCancelFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelFindOnlineGames, &CancelFindOnlineGames_Parms, NULL);

	pFnCancelFindOnlineGames->FunctionFlags |= 0x400;

	return CancelFindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnClearFindOnlineGamesCompleteDelegate = NULL;

	if (!pFnClearFindOnlineGamesCompleteDelegate)
		pFnClearFindOnlineGamesCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45673];

	UOnlineGameInterfaceImpl_execClearFindOnlineGamesCompleteDelegate_Parms ClearFindOnlineGamesCompleteDelegate_Parms;
	memcpy(&ClearFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearFindOnlineGamesCompleteDelegate, &ClearFindOnlineGamesCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddFindOnlineGamesCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         FindOnlineGamesCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddFindOnlineGamesCompleteDelegate(struct FScriptDelegate FindOnlineGamesCompleteDelegate)
{
	static UFunction* pFnAddFindOnlineGamesCompleteDelegate = NULL;

	if (!pFnAddFindOnlineGamesCompleteDelegate)
		pFnAddFindOnlineGamesCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45671];

	UOnlineGameInterfaceImpl_execAddFindOnlineGamesCompleteDelegate_Parms AddFindOnlineGamesCompleteDelegate_Parms;
	memcpy(&AddFindOnlineGamesCompleteDelegate_Parms.FindOnlineGamesCompleteDelegate, &FindOnlineGamesCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddFindOnlineGamesCompleteDelegate, &AddFindOnlineGamesCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.FindOnlineGames
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  SearchingPlayerNum             ( CPF_Parm )
// class UOnlineGameSearch*       SearchSettings                 ( CPF_Parm )

bool UOnlineGameInterfaceImpl::FindOnlineGames(unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings)
{
	static UFunction* pFnFindOnlineGames = NULL;

	if (!pFnFindOnlineGames)
		pFnFindOnlineGames = (UFunction*)UObject::GObjObjects()->Data[45667];

	UOnlineGameInterfaceImpl_execFindOnlineGames_Parms FindOnlineGames_Parms;
	FindOnlineGames_Parms.SearchingPlayerNum = SearchingPlayerNum;
	FindOnlineGames_Parms.SearchSettings = SearchSettings;

	pFnFindOnlineGames->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindOnlineGames, &FindOnlineGames_Parms, NULL);

	pFnFindOnlineGames->FunctionFlags |= 0x400;

	return FindOnlineGames_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearDestroyOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearDestroyOnlineGameCompleteDelegate = NULL;

	if (!pFnClearDestroyOnlineGameCompleteDelegate)
		pFnClearDestroyOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45665];

	UOnlineGameInterfaceImpl_execClearDestroyOnlineGameCompleteDelegate_Parms ClearDestroyOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearDestroyOnlineGameCompleteDelegate, &ClearDestroyOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddDestroyOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         DestroyOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddDestroyOnlineGameCompleteDelegate(struct FScriptDelegate DestroyOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddDestroyOnlineGameCompleteDelegate = NULL;

	if (!pFnAddDestroyOnlineGameCompleteDelegate)
		pFnAddDestroyOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45663];

	UOnlineGameInterfaceImpl_execAddDestroyOnlineGameCompleteDelegate_Parms AddDestroyOnlineGameCompleteDelegate_Parms;
	memcpy(&AddDestroyOnlineGameCompleteDelegate_Parms.DestroyOnlineGameCompleteDelegate, &DestroyOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddDestroyOnlineGameCompleteDelegate, &AddDestroyOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnDestroyOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnDestroyOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnDestroyOnlineGameComplete = NULL;

	if (!pFnOnDestroyOnlineGameComplete)
		pFnOnDestroyOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45568];

	UOnlineGameInterfaceImpl_execOnDestroyOnlineGameComplete_Parms OnDestroyOnlineGameComplete_Parms;
	memcpy(&OnDestroyOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnDestroyOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnDestroyOnlineGameComplete, &OnDestroyOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.DestroyOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

bool UOnlineGameInterfaceImpl::DestroyOnlineGame(struct FName SessionName)
{
	static UFunction* pFnDestroyOnlineGame = NULL;

	if (!pFnDestroyOnlineGame)
		pFnDestroyOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45658];

	UOnlineGameInterfaceImpl_execDestroyOnlineGame_Parms DestroyOnlineGame_Parms;
	memcpy(&DestroyOnlineGame_Parms.SessionName, &SessionName, 0x8);

	pFnDestroyOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyOnlineGame, &DestroyOnlineGame_Parms, NULL);

	pFnDestroyOnlineGame->FunctionFlags |= 0x400;

	return DestroyOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearUpdateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearUpdateOnlineGameCompleteDelegate = NULL;

	if (!pFnClearUpdateOnlineGameCompleteDelegate)
		pFnClearUpdateOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45656];

	UOnlineGameInterfaceImpl_execClearUpdateOnlineGameCompleteDelegate_Parms ClearUpdateOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearUpdateOnlineGameCompleteDelegate, &ClearUpdateOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddUpdateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         UpdateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddUpdateOnlineGameCompleteDelegate(struct FScriptDelegate UpdateOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddUpdateOnlineGameCompleteDelegate = NULL;

	if (!pFnAddUpdateOnlineGameCompleteDelegate)
		pFnAddUpdateOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45654];

	UOnlineGameInterfaceImpl_execAddUpdateOnlineGameCompleteDelegate_Parms AddUpdateOnlineGameCompleteDelegate_Parms;
	memcpy(&AddUpdateOnlineGameCompleteDelegate_Parms.UpdateOnlineGameCompleteDelegate, &UpdateOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddUpdateOnlineGameCompleteDelegate, &AddUpdateOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnUpdateOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnUpdateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnUpdateOnlineGameComplete = NULL;

	if (!pFnOnUpdateOnlineGameComplete)
		pFnOnUpdateOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45565];

	UOnlineGameInterfaceImpl_execOnUpdateOnlineGameComplete_Parms OnUpdateOnlineGameComplete_Parms;
	memcpy(&OnUpdateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnUpdateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnUpdateOnlineGameComplete, &OnUpdateOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.UpdateOnlineGame
// [0x00024000]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     UpdatedGameSettings            ( CPF_Parm )
// unsigned long                  bShouldRefreshOnlineData       ( CPF_OptionalParm | CPF_Parm )

bool UOnlineGameInterfaceImpl::UpdateOnlineGame(struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData)
{
	static UFunction* pFnUpdateOnlineGame = NULL;

	if (!pFnUpdateOnlineGame)
		pFnUpdateOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45647];

	UOnlineGameInterfaceImpl_execUpdateOnlineGame_Parms UpdateOnlineGame_Parms;
	memcpy(&UpdateOnlineGame_Parms.SessionName, &SessionName, 0x8);
	UpdateOnlineGame_Parms.UpdatedGameSettings = UpdatedGameSettings;
	UpdateOnlineGame_Parms.bShouldRefreshOnlineData = bShouldRefreshOnlineData;

	this->ProcessEvent(pFnUpdateOnlineGame, &UpdateOnlineGame_Parms, NULL);

	return UpdateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.ClearCreateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::ClearCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate)
{
	static UFunction* pFnClearCreateOnlineGameCompleteDelegate = NULL;

	if (!pFnClearCreateOnlineGameCompleteDelegate)
		pFnClearCreateOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45645];

	UOnlineGameInterfaceImpl_execClearCreateOnlineGameCompleteDelegate_Parms ClearCreateOnlineGameCompleteDelegate_Parms;
	memcpy(&ClearCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnClearCreateOnlineGameCompleteDelegate, &ClearCreateOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.AddCreateOnlineGameCompleteDelegate
// [0x00020002]
// Parameters infos:
// struct FScriptDelegate         CreateOnlineGameCompleteDelegate ( CPF_Parm | CPF_NeedCtorLink )

void UOnlineGameInterfaceImpl::AddCreateOnlineGameCompleteDelegate(struct FScriptDelegate CreateOnlineGameCompleteDelegate)
{
	static UFunction* pFnAddCreateOnlineGameCompleteDelegate = NULL;

	if (!pFnAddCreateOnlineGameCompleteDelegate)
		pFnAddCreateOnlineGameCompleteDelegate = (UFunction*)UObject::GObjObjects()->Data[45643];

	UOnlineGameInterfaceImpl_execAddCreateOnlineGameCompleteDelegate_Parms AddCreateOnlineGameCompleteDelegate_Parms;
	memcpy(&AddCreateOnlineGameCompleteDelegate_Parms.CreateOnlineGameCompleteDelegate, &CreateOnlineGameCompleteDelegate, 0xC);

	this->ProcessEvent(pFnAddCreateOnlineGameCompleteDelegate, &AddCreateOnlineGameCompleteDelegate_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.OnCreateOnlineGameComplete
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnCreateOnlineGameComplete(struct FName SessionName, unsigned long bWasSuccessful)
{
	static UFunction* pFnOnCreateOnlineGameComplete = NULL;

	if (!pFnOnCreateOnlineGameComplete)
		pFnOnCreateOnlineGameComplete = (UFunction*)UObject::GObjObjects()->Data[45562];

	UOnlineGameInterfaceImpl_execOnCreateOnlineGameComplete_Parms OnCreateOnlineGameComplete_Parms;
	memcpy(&OnCreateOnlineGameComplete_Parms.SessionName, &SessionName, 0x8);
	OnCreateOnlineGameComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnCreateOnlineGameComplete, &OnCreateOnlineGameComplete_Parms, NULL);
};

// Function IpDrv.OnlineGameInterfaceImpl.CreateOnlineGame
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// unsigned char                  HostingPlayerNum               ( CPF_Parm )
// struct FName                   SessionName                    ( CPF_Parm )
// class UOnlineGameSettings*     NewGameSettings                ( CPF_Parm )

bool UOnlineGameInterfaceImpl::CreateOnlineGame(unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings)
{
	static UFunction* pFnCreateOnlineGame = NULL;

	if (!pFnCreateOnlineGame)
		pFnCreateOnlineGame = (UFunction*)UObject::GObjObjects()->Data[45636];

	UOnlineGameInterfaceImpl_execCreateOnlineGame_Parms CreateOnlineGame_Parms;
	CreateOnlineGame_Parms.HostingPlayerNum = HostingPlayerNum;
	memcpy(&CreateOnlineGame_Parms.SessionName, &SessionName, 0x8);
	CreateOnlineGame_Parms.NewGameSettings = NewGameSettings;

	pFnCreateOnlineGame->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCreateOnlineGame, &CreateOnlineGame_Parms, NULL);

	pFnCreateOnlineGame->FunctionFlags |= 0x400;

	return CreateOnlineGame_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSearch
// [0x00020002]
// Parameters infos:
// class UOnlineGameSearch*       ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

class UOnlineGameSearch* UOnlineGameInterfaceImpl::GetGameSearch()
{
	static UFunction* pFnGetGameSearch = NULL;

	if (!pFnGetGameSearch)
		pFnGetGameSearch = (UFunction*)UObject::GObjObjects()->Data[45634];

	UOnlineGameInterfaceImpl_execGetGameSearch_Parms GetGameSearch_Parms;

	this->ProcessEvent(pFnGetGameSearch, &GetGameSearch_Parms, NULL);

	return GetGameSearch_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.GetGameSettings
// [0x00020002]
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   SessionName                    ( CPF_Parm )

class UOnlineGameSettings* UOnlineGameInterfaceImpl::GetGameSettings(struct FName SessionName)
{
	static UFunction* pFnGetGameSettings = NULL;

	if (!pFnGetGameSettings)
		pFnGetGameSettings = (UFunction*)UObject::GObjObjects()->Data[45631];

	UOnlineGameInterfaceImpl_execGetGameSettings_Parms GetGameSettings_Parms;
	memcpy(&GetGameSettings_Parms.SessionName, &SessionName, 0x8);

	this->ProcessEvent(pFnGetGameSettings, &GetGameSettings_Parms, NULL);

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlineGameInterfaceImpl.OnFindOnlineGamesComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlineGameInterfaceImpl::OnFindOnlineGamesComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnFindOnlineGamesComplete = NULL;

	if (!pFnOnFindOnlineGamesComplete)
		pFnOnFindOnlineGamesComplete = (UFunction*)UObject::GObjObjects()->Data[45589];

	UOnlineGameInterfaceImpl_execOnFindOnlineGamesComplete_Parms OnFindOnlineGamesComplete_Parms;
	OnFindOnlineGamesComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnFindOnlineGamesComplete, &OnFindOnlineGamesComplete_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.ParseDataCenterId
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::ParseDataCenterId(TArray< unsigned char >* Data)
{
	static UFunction* pFnParseDataCenterId = NULL;

	if (!pFnParseDataCenterId)
		pFnParseDataCenterId = (UFunction*)UObject::GObjObjects()->Data[46004];

	UOnlinePlaylistManager_execParseDataCenterId_Parms ParseDataCenterId_Parms;

	pFnParseDataCenterId->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParseDataCenterId, &ParseDataCenterId_Parms, NULL);

	pFnParseDataCenterId->FunctionFlags |= 0x400;

	if (Data)
		memcpy(Data, &ParseDataCenterId_Parms.Data, 0xC);
};

// Function IpDrv.OnlinePlaylistManager.OnReadDataCenterIdComplete
// [0x00020002]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::OnReadDataCenterIdComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadDataCenterIdComplete = NULL;

	if (!pFnOnReadDataCenterIdComplete)
		pFnOnReadDataCenterIdComplete = (UFunction*)UObject::GObjObjects()->Data[45999];

	UOnlinePlaylistManager_execOnReadDataCenterIdComplete_Parms OnReadDataCenterIdComplete_Parms;
	OnReadDataCenterIdComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy(&OnReadDataCenterIdComplete_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnOnReadDataCenterIdComplete, &OnReadDataCenterIdComplete_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.ReadDataCenterId
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlinePlaylistManager::ReadDataCenterId(unsigned char LocalUserNum)
{
	static UFunction* pFnReadDataCenterId = NULL;

	if (!pFnReadDataCenterId)
		pFnReadDataCenterId = (UFunction*)UObject::GObjObjects()->Data[45997];

	UOnlinePlaylistManager_execReadDataCenterId_Parms ReadDataCenterId_Parms;
	ReadDataCenterId_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnReadDataCenterId, &ReadDataCenterId_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.SendPlaylistPopulationUpdate
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            NumPlayers                     ( CPF_Parm )

void UOnlinePlaylistManager::eventSendPlaylistPopulationUpdate(int NumPlayers)
{
	static UFunction* pFnSendPlaylistPopulationUpdate = NULL;

	if (!pFnSendPlaylistPopulationUpdate)
		pFnSendPlaylistPopulationUpdate = (UFunction*)UObject::GObjObjects()->Data[45994];

	UOnlinePlaylistManager_eventSendPlaylistPopulationUpdate_Parms SendPlaylistPopulationUpdate_Parms;
	SendPlaylistPopulationUpdate_Parms.NumPlayers = NumPlayers;

	this->ProcessEvent(pFnSendPlaylistPopulationUpdate, &SendPlaylistPopulationUpdate_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.GetPopulationInfoFromPlaylist
// [0x00420002]
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// int                            WorldwideTotal                 ( CPF_Parm | CPF_OutParm )
// int                            RegionTotal                    ( CPF_Parm | CPF_OutParm )

void UOnlinePlaylistManager::GetPopulationInfoFromPlaylist(int PlaylistId, int* WorldwideTotal, int* RegionTotal)
{
	static UFunction* pFnGetPopulationInfoFromPlaylist = NULL;

	if (!pFnGetPopulationInfoFromPlaylist)
		pFnGetPopulationInfoFromPlaylist = (UFunction*)UObject::GObjObjects()->Data[45990];

	UOnlinePlaylistManager_execGetPopulationInfoFromPlaylist_Parms GetPopulationInfoFromPlaylist_Parms;
	GetPopulationInfoFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetPopulationInfoFromPlaylist, &GetPopulationInfoFromPlaylist_Parms, NULL);

	if (WorldwideTotal)
		*WorldwideTotal = GetPopulationInfoFromPlaylist_Parms.WorldwideTotal;

	if (RegionTotal)
		*RegionTotal = GetPopulationInfoFromPlaylist_Parms.RegionTotal;
};

// Function IpDrv.OnlinePlaylistManager.ParsePlaylistPopulationData
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// TArray< unsigned char >        Data                           ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::ParsePlaylistPopulationData(TArray< unsigned char >* Data)
{
	static UFunction* pFnParsePlaylistPopulationData = NULL;

	if (!pFnParsePlaylistPopulationData)
		pFnParsePlaylistPopulationData = (UFunction*)UObject::GObjObjects()->Data[45987];

	UOnlinePlaylistManager_execParsePlaylistPopulationData_Parms ParsePlaylistPopulationData_Parms;

	pFnParsePlaylistPopulationData->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnParsePlaylistPopulationData, &ParsePlaylistPopulationData_Parms, NULL);

	pFnParsePlaylistPopulationData->FunctionFlags |= 0x400;

	if (Data)
		memcpy(Data, &ParsePlaylistPopulationData_Parms.Data, 0xC);
};

// Function IpDrv.OnlinePlaylistManager.OnPlaylistPopulationDataUpdated
// [0x00120000]
// Parameters infos:

void UOnlinePlaylistManager::OnPlaylistPopulationDataUpdated()
{
	static UFunction* pFnOnPlaylistPopulationDataUpdated = NULL;

	if (!pFnOnPlaylistPopulationDataUpdated)
		pFnOnPlaylistPopulationDataUpdated = (UFunction*)UObject::GObjObjects()->Data[45877];

	UOnlinePlaylistManager_execOnPlaylistPopulationDataUpdated_Parms OnPlaylistPopulationDataUpdated_Parms;

	this->ProcessEvent(pFnOnPlaylistPopulationDataUpdated, &OnPlaylistPopulationDataUpdated_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistPopulationComplete
// [0x00020002]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::OnReadPlaylistPopulationComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadPlaylistPopulationComplete = NULL;

	if (!pFnOnReadPlaylistPopulationComplete)
		pFnOnReadPlaylistPopulationComplete = (UFunction*)UObject::GObjObjects()->Data[45982];

	UOnlinePlaylistManager_execOnReadPlaylistPopulationComplete_Parms OnReadPlaylistPopulationComplete_Parms;
	OnReadPlaylistPopulationComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy(&OnReadPlaylistPopulationComplete_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnOnReadPlaylistPopulationComplete, &OnReadPlaylistPopulationComplete_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.ReadPlaylistPopulation
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlinePlaylistManager::ReadPlaylistPopulation(unsigned char LocalUserNum)
{
	static UFunction* pFnReadPlaylistPopulation = NULL;

	if (!pFnReadPlaylistPopulation)
		pFnReadPlaylistPopulation = (UFunction*)UObject::GObjObjects()->Data[45980];

	UOnlinePlaylistManager_execReadPlaylistPopulation_Parms ReadPlaylistPopulation_Parms;
	ReadPlaylistPopulation_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnReadPlaylistPopulation, &ReadPlaylistPopulation_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.Reset
// [0x00020002]
// Parameters infos:

void UOnlinePlaylistManager::Reset()
{
	static UFunction* pFnReset = NULL;

	if (!pFnReset)
		pFnReset = (UFunction*)UObject::GObjObjects()->Data[45979];

	UOnlinePlaylistManager_execReset_Parms Reset_Parms;

	this->ProcessEvent(pFnReset, &Reset_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.GetContentIdsFromPlaylist
// [0x00420002]
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// TArray< int >                  ContentIds                     ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::GetContentIdsFromPlaylist(int PlaylistId, TArray< int >* ContentIds)
{
	static UFunction* pFnGetContentIdsFromPlaylist = NULL;

	if (!pFnGetContentIdsFromPlaylist)
		pFnGetContentIdsFromPlaylist = (UFunction*)UObject::GObjObjects()->Data[45975];

	UOnlinePlaylistManager_execGetContentIdsFromPlaylist_Parms GetContentIdsFromPlaylist_Parms;
	GetContentIdsFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetContentIdsFromPlaylist, &GetContentIdsFromPlaylist_Parms, NULL);

	if (ContentIds)
		memcpy(ContentIds, &GetContentIdsFromPlaylist_Parms.ContentIds, 0xC);
};

// Function IpDrv.OnlinePlaylistManager.GetInventorySwapFromPlaylist
// [0x00020002]
// Parameters infos:
// class UClass*                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )
// class UClass*                  SourceInventory                ( CPF_Parm )

class UClass* UOnlinePlaylistManager::GetInventorySwapFromPlaylist(int PlaylistId, class UClass* SourceInventory)
{
	static UFunction* pFnGetInventorySwapFromPlaylist = NULL;

	if (!pFnGetInventorySwapFromPlaylist)
		pFnGetInventorySwapFromPlaylist = (UFunction*)UObject::GObjObjects()->Data[45971];

	UOnlinePlaylistManager_execGetInventorySwapFromPlaylist_Parms GetInventorySwapFromPlaylist_Parms;
	GetInventorySwapFromPlaylist_Parms.PlaylistId = PlaylistId;
	GetInventorySwapFromPlaylist_Parms.SourceInventory = SourceInventory;

	this->ProcessEvent(pFnGetInventorySwapFromPlaylist, &GetInventorySwapFromPlaylist_Parms, NULL);

	return GetInventorySwapFromPlaylist_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMapCycleFromPlaylist
// [0x00420002]
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// TArray< struct FName >         MapCycle                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::GetMapCycleFromPlaylist(int PlaylistId, TArray< struct FName >* MapCycle)
{
	static UFunction* pFnGetMapCycleFromPlaylist = NULL;

	if (!pFnGetMapCycleFromPlaylist)
		pFnGetMapCycleFromPlaylist = (UFunction*)UObject::GObjObjects()->Data[45967];

	UOnlinePlaylistManager_execGetMapCycleFromPlaylist_Parms GetMapCycleFromPlaylist_Parms;
	GetMapCycleFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetMapCycleFromPlaylist, &GetMapCycleFromPlaylist_Parms, NULL);

	if (MapCycle)
		memcpy(MapCycle, &GetMapCycleFromPlaylist_Parms.MapCycle, 0xC);
};

// Function IpDrv.OnlinePlaylistManager.GetUrlFromPlaylist
// [0x00020002]
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            PlaylistId                     ( CPF_Parm )

struct FString UOnlinePlaylistManager::GetUrlFromPlaylist(int PlaylistId)
{
	static UFunction* pFnGetUrlFromPlaylist = NULL;

	if (!pFnGetUrlFromPlaylist)
		pFnGetUrlFromPlaylist = (UFunction*)UObject::GObjObjects()->Data[45964];

	UOnlinePlaylistManager_execGetUrlFromPlaylist_Parms GetUrlFromPlaylist_Parms;
	GetUrlFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetUrlFromPlaylist, &GetUrlFromPlaylist_Parms, NULL);

	return GetUrlFromPlaylist_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetMatchType
// [0x00020002]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

int UOnlinePlaylistManager::GetMatchType(int PlaylistId)
{
	static UFunction* pFnGetMatchType = NULL;

	if (!pFnGetMatchType)
		pFnGetMatchType = (UFunction*)UObject::GObjObjects()->Data[45961];

	UOnlinePlaylistManager_execGetMatchType_Parms GetMatchType_Parms;
	GetMatchType_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetMatchType, &GetMatchType_Parms, NULL);

	return GetMatchType_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.IsPlaylistArbitrated
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

bool UOnlinePlaylistManager::IsPlaylistArbitrated(int PlaylistId)
{
	static UFunction* pFnIsPlaylistArbitrated = NULL;

	if (!pFnIsPlaylistArbitrated)
		pFnIsPlaylistArbitrated = (UFunction*)UObject::GObjObjects()->Data[45958];

	UOnlinePlaylistManager_execIsPlaylistArbitrated_Parms IsPlaylistArbitrated_Parms;
	IsPlaylistArbitrated_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnIsPlaylistArbitrated, &IsPlaylistArbitrated_Parms, NULL);

	return IsPlaylistArbitrated_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetLoadBalanceIdFromPlaylist
// [0x00420002]
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// int                            LoadBalanceId                  ( CPF_Parm | CPF_OutParm )

void UOnlinePlaylistManager::GetLoadBalanceIdFromPlaylist(int PlaylistId, int* LoadBalanceId)
{
	static UFunction* pFnGetLoadBalanceIdFromPlaylist = NULL;

	if (!pFnGetLoadBalanceIdFromPlaylist)
		pFnGetLoadBalanceIdFromPlaylist = (UFunction*)UObject::GObjObjects()->Data[45955];

	UOnlinePlaylistManager_execGetLoadBalanceIdFromPlaylist_Parms GetLoadBalanceIdFromPlaylist_Parms;
	GetLoadBalanceIdFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetLoadBalanceIdFromPlaylist, &GetLoadBalanceIdFromPlaylist_Parms, NULL);

	if (LoadBalanceId)
		*LoadBalanceId = GetLoadBalanceIdFromPlaylist_Parms.LoadBalanceId;
};

// Function IpDrv.OnlinePlaylistManager.GetTeamInfoFromPlaylist
// [0x00420002]
// Parameters infos:
// int                            PlaylistId                     ( CPF_Parm )
// int                            TeamSize                       ( CPF_Parm | CPF_OutParm )
// int                            TeamCount                      ( CPF_Parm | CPF_OutParm )
// int                            MaxPartySize                   ( CPF_Parm | CPF_OutParm )

void UOnlinePlaylistManager::GetTeamInfoFromPlaylist(int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize)
{
	static UFunction* pFnGetTeamInfoFromPlaylist = NULL;

	if (!pFnGetTeamInfoFromPlaylist)
		pFnGetTeamInfoFromPlaylist = (UFunction*)UObject::GObjObjects()->Data[45950];

	UOnlinePlaylistManager_execGetTeamInfoFromPlaylist_Parms GetTeamInfoFromPlaylist_Parms;
	GetTeamInfoFromPlaylist_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetTeamInfoFromPlaylist, &GetTeamInfoFromPlaylist_Parms, NULL);

	if (TeamSize)
		*TeamSize = GetTeamInfoFromPlaylist_Parms.TeamSize;

	if (TeamCount)
		*TeamCount = GetTeamInfoFromPlaylist_Parms.TeamCount;

	if (MaxPartySize)
		*MaxPartySize = GetTeamInfoFromPlaylist_Parms.MaxPartySize;
};

// Function IpDrv.OnlinePlaylistManager.PlaylistSupportsDedicatedServers
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

bool UOnlinePlaylistManager::PlaylistSupportsDedicatedServers(int PlaylistId)
{
	static UFunction* pFnPlaylistSupportsDedicatedServers = NULL;

	if (!pFnPlaylistSupportsDedicatedServers)
		pFnPlaylistSupportsDedicatedServers = (UFunction*)UObject::GObjObjects()->Data[45947];

	UOnlinePlaylistManager_execPlaylistSupportsDedicatedServers_Parms PlaylistSupportsDedicatedServers_Parms;
	PlaylistSupportsDedicatedServers_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnPlaylistSupportsDedicatedServers, &PlaylistSupportsDedicatedServers_Parms, NULL);

	return PlaylistSupportsDedicatedServers_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.HasAnyGameSettings
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

bool UOnlinePlaylistManager::HasAnyGameSettings(int PlaylistId)
{
	static UFunction* pFnHasAnyGameSettings = NULL;

	if (!pFnHasAnyGameSettings)
		pFnHasAnyGameSettings = (UFunction*)UObject::GObjObjects()->Data[45944];

	UOnlinePlaylistManager_execHasAnyGameSettings_Parms HasAnyGameSettings_Parms;
	HasAnyGameSettings_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnHasAnyGameSettings, &HasAnyGameSettings_Parms, NULL);

	return HasAnyGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.GetGameSettings
// [0x00020002]
// Parameters infos:
// class UOnlineGameSettings*     ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )
// int                            GameSettingsId                 ( CPF_Parm )

class UOnlineGameSettings* UOnlinePlaylistManager::GetGameSettings(int PlaylistId, int GameSettingsId)
{
	static UFunction* pFnGetGameSettings = NULL;

	if (!pFnGetGameSettings)
		pFnGetGameSettings = (UFunction*)UObject::GObjObjects()->Data[45940];

	UOnlinePlaylistManager_execGetGameSettings_Parms GetGameSettings_Parms;
	GetGameSettings_Parms.PlaylistId = PlaylistId;
	GetGameSettings_Parms.GameSettingsId = GameSettingsId;

	this->ProcessEvent(pFnGetGameSettings, &GetGameSettings_Parms, NULL);

	return GetGameSettings_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.FinalizePlaylistObjects
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlinePlaylistManager::FinalizePlaylistObjects()
{
	static UFunction* pFnFinalizePlaylistObjects = NULL;

	if (!pFnFinalizePlaylistObjects)
		pFnFinalizePlaylistObjects = (UFunction*)UObject::GObjObjects()->Data[45939];

	UOnlinePlaylistManager_execFinalizePlaylistObjects_Parms FinalizePlaylistObjects_Parms;

	pFnFinalizePlaylistObjects->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFinalizePlaylistObjects, &FinalizePlaylistObjects_Parms, NULL);

	pFnFinalizePlaylistObjects->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.OnReadTitleFileComplete
// [0x00020002]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

void UOnlinePlaylistManager::OnReadTitleFileComplete(unsigned long bWasSuccessful, struct FString Filename)
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if (!pFnOnReadTitleFileComplete)
		pFnOnReadTitleFileComplete = (UFunction*)UObject::GObjObjects()->Data[45936];

	UOnlinePlaylistManager_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;
	OnReadTitleFileComplete_Parms.bWasSuccessful = bWasSuccessful;
	memcpy(&OnReadTitleFileComplete_Parms.Filename, &Filename, 0xC);

	this->ProcessEvent(pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.ShouldRefreshPlaylists
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UOnlinePlaylistManager::ShouldRefreshPlaylists()
{
	static UFunction* pFnShouldRefreshPlaylists = NULL;

	if (!pFnShouldRefreshPlaylists)
		pFnShouldRefreshPlaylists = (UFunction*)UObject::GObjObjects()->Data[45934];

	UOnlinePlaylistManager_execShouldRefreshPlaylists_Parms ShouldRefreshPlaylists_Parms;

	pFnShouldRefreshPlaylists->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnShouldRefreshPlaylists, &ShouldRefreshPlaylists_Parms, NULL);

	pFnShouldRefreshPlaylists->FunctionFlags |= 0x400;

	return ShouldRefreshPlaylists_Parms.ReturnValue;
};

// Function IpDrv.OnlinePlaylistManager.DetermineFilesToDownload
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlinePlaylistManager::DetermineFilesToDownload()
{
	static UFunction* pFnDetermineFilesToDownload = NULL;

	if (!pFnDetermineFilesToDownload)
		pFnDetermineFilesToDownload = (UFunction*)UObject::GObjObjects()->Data[45933];

	UOnlinePlaylistManager_execDetermineFilesToDownload_Parms DetermineFilesToDownload_Parms;

	pFnDetermineFilesToDownload->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDetermineFilesToDownload, &DetermineFilesToDownload_Parms, NULL);

	pFnDetermineFilesToDownload->FunctionFlags |= 0x400;
};

// Function IpDrv.OnlinePlaylistManager.DownloadPlaylist
// [0x00020002]
// Parameters infos:
// unsigned char                  LocalUserNum                   ( CPF_Parm )

void UOnlinePlaylistManager::DownloadPlaylist(unsigned char LocalUserNum)
{
	static UFunction* pFnDownloadPlaylist = NULL;

	if (!pFnDownloadPlaylist)
		pFnDownloadPlaylist = (UFunction*)UObject::GObjObjects()->Data[45931];

	UOnlinePlaylistManager_execDownloadPlaylist_Parms DownloadPlaylist_Parms;
	DownloadPlaylist_Parms.LocalUserNum = LocalUserNum;

	this->ProcessEvent(pFnDownloadPlaylist, &DownloadPlaylist_Parms, NULL);
};

// Function IpDrv.OnlinePlaylistManager.OnReadPlaylistComplete
// [0x00120000]
// Parameters infos:
// unsigned long                  bWasSuccessful                 ( CPF_Parm )

void UOnlinePlaylistManager::OnReadPlaylistComplete(unsigned long bWasSuccessful)
{
	static UFunction* pFnOnReadPlaylistComplete = NULL;

	if (!pFnOnReadPlaylistComplete)
		pFnOnReadPlaylistComplete = (UFunction*)UObject::GObjObjects()->Data[45879];

	UOnlinePlaylistManager_execOnReadPlaylistComplete_Parms OnReadPlaylistComplete_Parms;
	OnReadPlaylistComplete_Parms.bWasSuccessful = bWasSuccessful;

	this->ProcessEvent(pFnOnReadPlaylistComplete, &OnReadPlaylistComplete_Parms, NULL);
};

// Function IpDrv.PartyBeacon.OnDestroyComplete
// [0x00120000]
// Parameters infos:

void UPartyBeacon::OnDestroyComplete()
{
	static UFunction* pFnOnDestroyComplete = NULL;

	if (!pFnOnDestroyComplete)
		pFnOnDestroyComplete = (UFunction*)UObject::GObjObjects()->Data[46081];

	UPartyBeacon_execOnDestroyComplete_Parms OnDestroyComplete_Parms;

	this->ProcessEvent(pFnOnDestroyComplete, &OnDestroyComplete_Parms, NULL);
};

// Function IpDrv.PartyBeacon.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeacon::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = NULL;

	if (!pFnDestroyBeacon)
		pFnDestroyBeacon = (UFunction*)UObject::GObjObjects()->Data[46105];

	UPartyBeacon_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, NULL);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeaconClient::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = NULL;

	if (!pFnDestroyBeacon)
		pFnDestroyBeacon = (UFunction*)UObject::GObjObjects()->Data[46147];

	UPartyBeaconClient_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, NULL);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconClient.CancelReservation
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            CancellingPartyLeader          ( CPF_Parm )

bool UPartyBeaconClient::CancelReservation(struct FUniqueNetId CancellingPartyLeader)
{
	static UFunction* pFnCancelReservation = NULL;

	if (!pFnCancelReservation)
		pFnCancelReservation = (UFunction*)UObject::GObjObjects()->Data[46144];

	UPartyBeaconClient_execCancelReservation_Parms CancelReservation_Parms;
	memcpy(&CancelReservation_Parms.CancellingPartyLeader, &CancellingPartyLeader, 0x18);

	pFnCancelReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnCancelReservation, &CancelReservation_Parms, NULL);

	pFnCancelReservation->FunctionFlags |= 0x400;

	return CancelReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservationUpdate
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FPlayerReservation > PlayersToAdd                   ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservationUpdate(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* PlayersToAdd)
{
	static UFunction* pFnRequestReservationUpdate = NULL;

	if (!pFnRequestReservationUpdate)
		pFnRequestReservationUpdate = (UFunction*)UObject::GObjObjects()->Data[46138];

	UPartyBeaconClient_execRequestReservationUpdate_Parms RequestReservationUpdate_Parms;
	memcpy(&RequestReservationUpdate_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x18);

	pFnRequestReservationUpdate->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestReservationUpdate, &RequestReservationUpdate_Parms, NULL);

	pFnRequestReservationUpdate->FunctionFlags |= 0x400;

	if (DesiredHost)
		memcpy(DesiredHost, &RequestReservationUpdate_Parms.DesiredHost, 0x8);

	if (PlayersToAdd)
		memcpy(PlayersToAdd, &RequestReservationUpdate_Parms.PlayersToAdd, 0xC);

	return RequestReservationUpdate_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.RequestReservation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            RequestingPartyLeader          ( CPF_Parm )
// struct FOnlineGameSearchResult DesiredHost                    ( CPF_Const | CPF_Parm | CPF_OutParm )
// TArray< struct FPlayerReservation > Players                        ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UPartyBeaconClient::RequestReservation(struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* Players)
{
	static UFunction* pFnRequestReservation = NULL;

	if (!pFnRequestReservation)
		pFnRequestReservation = (UFunction*)UObject::GObjObjects()->Data[46132];

	UPartyBeaconClient_execRequestReservation_Parms RequestReservation_Parms;
	memcpy(&RequestReservation_Parms.RequestingPartyLeader, &RequestingPartyLeader, 0x18);

	pFnRequestReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnRequestReservation, &RequestReservation_Parms, NULL);

	pFnRequestReservation->FunctionFlags |= 0x400;

	if (DesiredHost)
		memcpy(DesiredHost, &RequestReservation_Parms.DesiredHost, 0x8);

	if (Players)
		memcpy(Players, &RequestReservation_Parms.Players, 0xC);

	return RequestReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconClient.OnHostHasCancelled
// [0x00120000]
// Parameters infos:

void UPartyBeaconClient::OnHostHasCancelled()
{
	static UFunction* pFnOnHostHasCancelled = NULL;

	if (!pFnOnHostHasCancelled)
		pFnOnHostHasCancelled = (UFunction*)UObject::GObjObjects()->Data[46107];

	UPartyBeaconClient_execOnHostHasCancelled_Parms OnHostHasCancelled_Parms;

	this->ProcessEvent(pFnOnHostHasCancelled, &OnHostHasCancelled_Parms, NULL);
};

// Function IpDrv.PartyBeaconClient.OnHostIsReady
// [0x00120000]
// Parameters infos:

void UPartyBeaconClient::OnHostIsReady()
{
	static UFunction* pFnOnHostIsReady = NULL;

	if (!pFnOnHostIsReady)
		pFnOnHostIsReady = (UFunction*)UObject::GObjObjects()->Data[46109];

	UPartyBeaconClient_execOnHostIsReady_Parms OnHostIsReady_Parms;

	this->ProcessEvent(pFnOnHostIsReady, &OnHostIsReady_Parms, NULL);
};

// Function IpDrv.PartyBeaconClient.OnTravelRequestReceived
// [0x00120000]
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void UPartyBeaconClient::OnTravelRequestReceived(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnOnTravelRequestReceived = NULL;

	if (!pFnOnTravelRequestReceived)
		pFnOnTravelRequestReceived = (UFunction*)UObject::GObjObjects()->Data[46111];

	UPartyBeaconClient_execOnTravelRequestReceived_Parms OnTravelRequestReceived_Parms;
	memcpy(&OnTravelRequestReceived_Parms.SessionName, &SessionName, 0x8);
	OnTravelRequestReceived_Parms.SearchClass = SearchClass;
	memcpy(&OnTravelRequestReceived_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50);

	this->ProcessEvent(pFnOnTravelRequestReceived, &OnTravelRequestReceived_Parms, NULL);
};

// Function IpDrv.PartyBeaconClient.OnReservationCountUpdated
// [0x00120000]
// Parameters infos:
// int                            ReservationRemaining           ( CPF_Parm )

void UPartyBeaconClient::OnReservationCountUpdated(int ReservationRemaining)
{
	static UFunction* pFnOnReservationCountUpdated = NULL;

	if (!pFnOnReservationCountUpdated)
		pFnOnReservationCountUpdated = (UFunction*)UObject::GObjObjects()->Data[46113];

	UPartyBeaconClient_execOnReservationCountUpdated_Parms OnReservationCountUpdated_Parms;
	OnReservationCountUpdated_Parms.ReservationRemaining = ReservationRemaining;

	this->ProcessEvent(pFnOnReservationCountUpdated, &OnReservationCountUpdated_Parms, NULL);
};

// Function IpDrv.PartyBeaconClient.OnReservationRequestComplete
// [0x00120000]
// Parameters infos:
// unsigned char                  ReservationResult              ( CPF_Parm )

void UPartyBeaconClient::OnReservationRequestComplete(unsigned char ReservationResult)
{
	static UFunction* pFnOnReservationRequestComplete = NULL;

	if (!pFnOnReservationRequestComplete)
		pFnOnReservationRequestComplete = (UFunction*)UObject::GObjObjects()->Data[46115];

	UPartyBeaconClient_execOnReservationRequestComplete_Parms OnReservationRequestComplete_Parms;
	OnReservationRequestComplete_Parms.ReservationResult = ReservationResult;

	this->ProcessEvent(pFnOnReservationRequestComplete, &OnReservationRequestComplete_Parms, NULL);
};

// Function IpDrv.PartyBeaconHost.GetMaxAvailableTeamSize
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

int UPartyBeaconHost::GetMaxAvailableTeamSize()
{
	static UFunction* pFnGetMaxAvailableTeamSize = NULL;

	if (!pFnGetMaxAvailableTeamSize)
		pFnGetMaxAvailableTeamSize = (UFunction*)UObject::GObjObjects()->Data[46228];

	UPartyBeaconHost_execGetMaxAvailableTeamSize_Parms GetMaxAvailableTeamSize_Parms;

	pFnGetMaxAvailableTeamSize->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetMaxAvailableTeamSize, &GetMaxAvailableTeamSize_Parms, NULL);

	pFnGetMaxAvailableTeamSize->FunctionFlags |= 0x400;

	return GetMaxAvailableTeamSize_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.GetPartyLeaders
// [0x00420002]
// Parameters infos:
// TArray< struct FUniqueNetId >  PartyLeaders                   ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPartyLeaders(TArray< struct FUniqueNetId >* PartyLeaders)
{
	static UFunction* pFnGetPartyLeaders = NULL;

	if (!pFnGetPartyLeaders)
		pFnGetPartyLeaders = (UFunction*)UObject::GObjObjects()->Data[46225];

	UPartyBeaconHost_execGetPartyLeaders_Parms GetPartyLeaders_Parms;

	this->ProcessEvent(pFnGetPartyLeaders, &GetPartyLeaders_Parms, NULL);

	if (PartyLeaders)
		memcpy(PartyLeaders, &GetPartyLeaders_Parms.PartyLeaders, 0xC);
};

// Function IpDrv.PartyBeaconHost.GetPlayers
// [0x00C20002]
// Parameters infos:
// TArray< struct FUniqueNetId >  Players                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UPartyBeaconHost::GetPlayers(TArray< struct FUniqueNetId >* Players)
{
	static UFunction* pFnGetPlayers = NULL;

	if (!pFnGetPlayers)
		pFnGetPlayers = (UFunction*)UObject::GObjObjects()->Data[46221];

	UPartyBeaconHost_execGetPlayers_Parms GetPlayers_Parms;

	this->ProcessEvent(pFnGetPlayers, &GetPlayers_Parms, NULL);

	if (Players)
		memcpy(Players, &GetPlayers_Parms.Players, 0xC);
};

// Function IpDrv.PartyBeaconHost.AppendReservationSkillsToSearch
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// class UOnlineGameSearch*       Search                         ( CPF_Parm )

void UPartyBeaconHost::AppendReservationSkillsToSearch(class UOnlineGameSearch* Search)
{
	static UFunction* pFnAppendReservationSkillsToSearch = NULL;

	if (!pFnAppendReservationSkillsToSearch)
		pFnAppendReservationSkillsToSearch = (UFunction*)UObject::GObjObjects()->Data[46219];

	UPartyBeaconHost_execAppendReservationSkillsToSearch_Parms AppendReservationSkillsToSearch_Parms;
	AppendReservationSkillsToSearch_Parms.Search = Search;

	pFnAppendReservationSkillsToSearch->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAppendReservationSkillsToSearch, &AppendReservationSkillsToSearch_Parms, NULL);

	pFnAppendReservationSkillsToSearch->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.UnregisterParty
// [0x00820802] ( FUNC_Event )
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::eventUnregisterParty(struct FUniqueNetId PartyLeader)
{
	static UFunction* pFnUnregisterParty = NULL;

	if (!pFnUnregisterParty)
		pFnUnregisterParty = (UFunction*)UObject::GObjObjects()->Data[46216];

	UPartyBeaconHost_eventUnregisterParty_Parms UnregisterParty_Parms;
	memcpy(&UnregisterParty_Parms.PartyLeader, &PartyLeader, 0x18);

	this->ProcessEvent(pFnUnregisterParty, &UnregisterParty_Parms, NULL);
};

// Function IpDrv.PartyBeaconHost.UnregisterPartyMembers
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UPartyBeaconHost::eventUnregisterPartyMembers()
{
	static UFunction* pFnUnregisterPartyMembers = NULL;

	if (!pFnUnregisterPartyMembers)
		pFnUnregisterPartyMembers = (UFunction*)UObject::GObjObjects()->Data[46214];

	UPartyBeaconHost_eventUnregisterPartyMembers_Parms UnregisterPartyMembers_Parms;

	this->ProcessEvent(pFnUnregisterPartyMembers, &UnregisterPartyMembers_Parms, NULL);
};

// Function IpDrv.PartyBeaconHost.RegisterPartyMembers
// [0x00820802] ( FUNC_Event )
// Parameters infos:

void UPartyBeaconHost::eventRegisterPartyMembers()
{
	static UFunction* pFnRegisterPartyMembers = NULL;

	if (!pFnRegisterPartyMembers)
		pFnRegisterPartyMembers = (UFunction*)UObject::GObjObjects()->Data[46210];

	UPartyBeaconHost_eventRegisterPartyMembers_Parms RegisterPartyMembers_Parms;

	this->ProcessEvent(pFnRegisterPartyMembers, &RegisterPartyMembers_Parms, NULL);
};

// Function IpDrv.PartyBeaconHost.AreReservationsFull
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UPartyBeaconHost::AreReservationsFull()
{
	static UFunction* pFnAreReservationsFull = NULL;

	if (!pFnAreReservationsFull)
		pFnAreReservationsFull = (UFunction*)UObject::GObjObjects()->Data[46208];

	UPartyBeaconHost_execAreReservationsFull_Parms AreReservationsFull_Parms;

	this->ProcessEvent(pFnAreReservationsFull, &AreReservationsFull_Parms, NULL);

	return AreReservationsFull_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostHasCancelled
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::TellClientsHostHasCancelled()
{
	static UFunction* pFnTellClientsHostHasCancelled = NULL;

	if (!pFnTellClientsHostHasCancelled)
		pFnTellClientsHostHasCancelled = (UFunction*)UObject::GObjObjects()->Data[46207];

	UPartyBeaconHost_execTellClientsHostHasCancelled_Parms TellClientsHostHasCancelled_Parms;

	pFnTellClientsHostHasCancelled->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsHostHasCancelled, &TellClientsHostHasCancelled_Parms, NULL);

	pFnTellClientsHostHasCancelled->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsHostIsReady
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::TellClientsHostIsReady()
{
	static UFunction* pFnTellClientsHostIsReady = NULL;

	if (!pFnTellClientsHostIsReady)
		pFnTellClientsHostIsReady = (UFunction*)UObject::GObjObjects()->Data[46206];

	UPartyBeaconHost_execTellClientsHostIsReady_Parms TellClientsHostIsReady_Parms;

	pFnTellClientsHostIsReady->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsHostIsReady, &TellClientsHostIsReady_Parms, NULL);

	pFnTellClientsHostIsReady->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.TellClientsToTravel
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FName                   SessionName                    ( CPF_Parm )
// class UClass*                  SearchClass                    ( CPF_Parm )
// unsigned char                  PlatformSpecificInfo           ( CPF_Parm )

void UPartyBeaconHost::TellClientsToTravel(struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo)
{
	static UFunction* pFnTellClientsToTravel = NULL;

	if (!pFnTellClientsToTravel)
		pFnTellClientsToTravel = (UFunction*)UObject::GObjObjects()->Data[46202];

	UPartyBeaconHost_execTellClientsToTravel_Parms TellClientsToTravel_Parms;
	memcpy(&TellClientsToTravel_Parms.SessionName, &SessionName, 0x8);
	TellClientsToTravel_Parms.SearchClass = SearchClass;
	memcpy(&TellClientsToTravel_Parms.PlatformSpecificInfo, &PlatformSpecificInfo, 0x50);

	pFnTellClientsToTravel->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnTellClientsToTravel, &TellClientsToTravel_Parms, NULL);

	pFnTellClientsToTravel->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.DestroyBeacon
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UPartyBeaconHost::eventDestroyBeacon()
{
	static UFunction* pFnDestroyBeacon = NULL;

	if (!pFnDestroyBeacon)
		pFnDestroyBeacon = (UFunction*)UObject::GObjObjects()->Data[46201];

	UPartyBeaconHost_eventDestroyBeacon_Parms DestroyBeacon_Parms;

	pFnDestroyBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDestroyBeacon, &DestroyBeacon_Parms, NULL);

	pFnDestroyBeacon->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.OnClientCancellationReceived
// [0x00120000]
// Parameters infos:
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )

void UPartyBeaconHost::OnClientCancellationReceived(struct FUniqueNetId PartyLeader)
{
	static UFunction* pFnOnClientCancellationReceived = NULL;

	if (!pFnOnClientCancellationReceived)
		pFnOnClientCancellationReceived = (UFunction*)UObject::GObjObjects()->Data[46157];

	UPartyBeaconHost_execOnClientCancellationReceived_Parms OnClientCancellationReceived_Parms;
	memcpy(&OnClientCancellationReceived_Parms.PartyLeader, &PartyLeader, 0x18);

	this->ProcessEvent(pFnOnClientCancellationReceived, &OnClientCancellationReceived_Parms, NULL);
};

// Function IpDrv.PartyBeaconHost.OnReservationsFull
// [0x00120000]
// Parameters infos:

void UPartyBeaconHost::OnReservationsFull()
{
	static UFunction* pFnOnReservationsFull = NULL;

	if (!pFnOnReservationsFull)
		pFnOnReservationsFull = (UFunction*)UObject::GObjObjects()->Data[46159];

	UPartyBeaconHost_execOnReservationsFull_Parms OnReservationsFull_Parms;

	this->ProcessEvent(pFnOnReservationsFull, &OnReservationsFull_Parms, NULL);
};

// Function IpDrv.PartyBeaconHost.OnReservationChange
// [0x00120000]
// Parameters infos:

void UPartyBeaconHost::OnReservationChange()
{
	static UFunction* pFnOnReservationChange = NULL;

	if (!pFnOnReservationChange)
		pFnOnReservationChange = (UFunction*)UObject::GObjObjects()->Data[46161];

	UPartyBeaconHost_execOnReservationChange_Parms OnReservationChange_Parms;

	this->ProcessEvent(pFnOnReservationChange, &OnReservationChange_Parms, NULL);
};

// Function IpDrv.PartyBeaconHost.HandlePlayerLogout
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// struct FUniqueNetId            PlayerID                       ( CPF_Parm )
// unsigned long                  bMaintainParty                 ( CPF_Parm )

void UPartyBeaconHost::HandlePlayerLogout(struct FUniqueNetId PlayerID, unsigned long bMaintainParty)
{
	static UFunction* pFnHandlePlayerLogout = NULL;

	if (!pFnHandlePlayerLogout)
		pFnHandlePlayerLogout = (UFunction*)UObject::GObjObjects()->Data[46197];

	UPartyBeaconHost_execHandlePlayerLogout_Parms HandlePlayerLogout_Parms;
	memcpy(&HandlePlayerLogout_Parms.PlayerID, &PlayerID, 0x18);
	HandlePlayerLogout_Parms.bMaintainParty = bMaintainParty;

	pFnHandlePlayerLogout->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnHandlePlayerLogout, &HandlePlayerLogout_Parms, NULL);

	pFnHandlePlayerLogout->FunctionFlags |= 0x400;
};

// Function IpDrv.PartyBeaconHost.GetExistingReservation
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Const | CPF_Parm | CPF_OutParm )

int UPartyBeaconHost::GetExistingReservation(struct FUniqueNetId* PartyLeader)
{
	static UFunction* pFnGetExistingReservation = NULL;

	if (!pFnGetExistingReservation)
		pFnGetExistingReservation = (UFunction*)UObject::GObjObjects()->Data[46194];

	UPartyBeaconHost_execGetExistingReservation_Parms GetExistingReservation_Parms;

	pFnGetExistingReservation->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetExistingReservation, &GetExistingReservation_Parms, NULL);

	pFnGetExistingReservation->FunctionFlags |= 0x400;

	if (PartyLeader)
		memcpy(PartyLeader, &GetExistingReservation_Parms.PartyLeader, 0x18);

	return GetExistingReservation_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.UpdatePartyReservationEntry
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// TArray< struct FPlayerReservation > PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::UpdatePartyReservationEntry(struct FUniqueNetId PartyLeader, TArray< struct FPlayerReservation >* PlayerMembers)
{
	static UFunction* pFnUpdatePartyReservationEntry = NULL;

	if (!pFnUpdatePartyReservationEntry)
		pFnUpdatePartyReservationEntry = (UFunction*)UObject::GObjObjects()->Data[46189];

	UPartyBeaconHost_execUpdatePartyReservationEntry_Parms UpdatePartyReservationEntry_Parms;
	memcpy(&UpdatePartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x18);

	pFnUpdatePartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnUpdatePartyReservationEntry, &UpdatePartyReservationEntry_Parms, NULL);

	pFnUpdatePartyReservationEntry->FunctionFlags |= 0x400;

	if (PlayerMembers)
		memcpy(PlayerMembers, &UpdatePartyReservationEntry_Parms.PlayerMembers, 0xC);

	return UpdatePartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.AddPartyReservationEntry
// [0x00420400] ( FUNC_Native )
// Parameters infos:
// unsigned char                  ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FUniqueNetId            PartyLeader                    ( CPF_Parm )
// int                            TeamNum                        ( CPF_Parm )
// unsigned long                  bIsHost                        ( CPF_Parm )
// TArray< struct FPlayerReservation > PlayerMembers                  ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

unsigned char UPartyBeaconHost::AddPartyReservationEntry(struct FUniqueNetId PartyLeader, int TeamNum, unsigned long bIsHost, TArray< struct FPlayerReservation >* PlayerMembers)
{
	static UFunction* pFnAddPartyReservationEntry = NULL;

	if (!pFnAddPartyReservationEntry)
		pFnAddPartyReservationEntry = (UFunction*)UObject::GObjObjects()->Data[46182];

	UPartyBeaconHost_execAddPartyReservationEntry_Parms AddPartyReservationEntry_Parms;
	memcpy(&AddPartyReservationEntry_Parms.PartyLeader, &PartyLeader, 0x18);
	AddPartyReservationEntry_Parms.TeamNum = TeamNum;
	AddPartyReservationEntry_Parms.bIsHost = bIsHost;

	pFnAddPartyReservationEntry->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddPartyReservationEntry, &AddPartyReservationEntry_Parms, NULL);

	pFnAddPartyReservationEntry->FunctionFlags |= 0x400;

	if (PlayerMembers)
		memcpy(PlayerMembers, &AddPartyReservationEntry_Parms.PlayerMembers, 0xC);

	return AddPartyReservationEntry_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.InitHostBeacon
// [0x00024400] ( FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            InNumTeams                     ( CPF_Parm )
// int                            InNumPlayersPerTeam            ( CPF_Parm )
// int                            InNumReservations              ( CPF_Parm )
// struct FName                   InSessionName                  ( CPF_Parm )
// int                            InForceTeamNum                 ( CPF_OptionalParm | CPF_Parm )

bool UPartyBeaconHost::InitHostBeacon(int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct FName InSessionName, int InForceTeamNum)
{
	static UFunction* pFnInitHostBeacon = NULL;

	if (!pFnInitHostBeacon)
		pFnInitHostBeacon = (UFunction*)UObject::GObjObjects()->Data[46175];

	UPartyBeaconHost_execInitHostBeacon_Parms InitHostBeacon_Parms;
	InitHostBeacon_Parms.InNumTeams = InNumTeams;
	InitHostBeacon_Parms.InNumPlayersPerTeam = InNumPlayersPerTeam;
	InitHostBeacon_Parms.InNumReservations = InNumReservations;
	memcpy(&InitHostBeacon_Parms.InSessionName, &InSessionName, 0x8);
	InitHostBeacon_Parms.InForceTeamNum = InForceTeamNum;

	pFnInitHostBeacon->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnInitHostBeacon, &InitHostBeacon_Parms, NULL);

	pFnInitHostBeacon->FunctionFlags |= 0x400;

	return InitHostBeacon_Parms.ReturnValue;
};

// Function IpDrv.PartyBeaconHost.PauseReservationRequests
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// unsigned long                  bPause                         ( CPF_Parm )

void UPartyBeaconHost::PauseReservationRequests(unsigned long bPause)
{
	static UFunction* pFnPauseReservationRequests = NULL;

	if (!pFnPauseReservationRequests)
		pFnPauseReservationRequests = (UFunction*)UObject::GObjObjects()->Data[46173];

	UPartyBeaconHost_execPauseReservationRequests_Parms PauseReservationRequests_Parms;
	PauseReservationRequests_Parms.bPause = bPause;

	pFnPauseReservationRequests->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnPauseReservationRequests, &PauseReservationRequests_Parms, NULL);

	pFnPauseReservationRequests->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHexDigit
// [0x00020002]
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 D                              ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetHexDigit(struct FString D)
{
	static UFunction* pFnGetHexDigit = NULL;

	if (!pFnGetHexDigit)
		pFnGetHexDigit = (UFunction*)UObject::GObjObjects()->Data[46409];

	UWebRequest_execGetHexDigit_Parms GetHexDigit_Parms;
	memcpy(&GetHexDigit_Parms.D, &D, 0xC);

	this->ProcessEvent(pFnGetHexDigit, &GetHexDigit_Parms, NULL);

	return GetHexDigit_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeFormData
// [0x00020002]
// Parameters infos:
// struct FString                 Data                           ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::DecodeFormData(struct FString Data)
{
	static UFunction* pFnDecodeFormData = NULL;

	if (!pFnDecodeFormData)
		pFnDecodeFormData = (UFunction*)UObject::GObjObjects()->Data[46405];

	UWebRequest_execDecodeFormData_Parms DecodeFormData_Parms;
	memcpy(&DecodeFormData_Parms.Data, &Data, 0xC);

	this->ProcessEvent(pFnDecodeFormData, &DecodeFormData_Parms, NULL);
};

// Function IpDrv.WebRequest.ProcessHeaderString
// [0x00020002]
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void UWebRequest::ProcessHeaderString(struct FString S)
{
	static UFunction* pFnProcessHeaderString = NULL;

	if (!pFnProcessHeaderString)
		pFnProcessHeaderString = (UFunction*)UObject::GObjObjects()->Data[46403];

	UWebRequest_execProcessHeaderString_Parms ProcessHeaderString_Parms;
	memcpy(&ProcessHeaderString_Parms.S, &S, 0xC);

	this->ProcessEvent(pFnProcessHeaderString, &ProcessHeaderString_Parms, NULL);
};

// Function IpDrv.WebRequest.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebRequest::Dump()
{
	static UFunction* pFnDump = NULL;

	if (!pFnDump)
		pFnDump = (UFunction*)UObject::GObjObjects()->Data[46402];

	UWebRequest_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDump, &Dump_Parms, NULL);

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetVariables
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FString >       varNames                       ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetVariables(TArray< struct FString >* varNames)
{
	static UFunction* pFnGetVariables = NULL;

	if (!pFnGetVariables)
		pFnGetVariables = (UFunction*)UObject::GObjObjects()->Data[46399];

	UWebRequest_execGetVariables_Parms GetVariables_Parms;

	pFnGetVariables->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariables, &GetVariables_Parms, NULL);

	pFnGetVariables->FunctionFlags |= 0x400;

	if (varNames)
		memcpy(varNames, &GetVariables_Parms.varNames, 0xC);
};

// Function IpDrv.WebRequest.GetVariableNumber
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// int                            Number                         ( CPF_Parm )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetVariableNumber(struct FString VariableName, int Number, struct FString DefaultValue)
{
	static UFunction* pFnGetVariableNumber = NULL;

	if (!pFnGetVariableNumber)
		pFnGetVariableNumber = (UFunction*)UObject::GObjObjects()->Data[45199];

	UWebRequest_execGetVariableNumber_Parms GetVariableNumber_Parms;
	memcpy(&GetVariableNumber_Parms.VariableName, &VariableName, 0xC);
	GetVariableNumber_Parms.Number = Number;
	memcpy(&GetVariableNumber_Parms.DefaultValue, &DefaultValue, 0xC);

	pFnGetVariableNumber->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableNumber, &GetVariableNumber_Parms, NULL);

	pFnGetVariableNumber->FunctionFlags |= 0x400;

	return GetVariableNumber_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariableCount
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )

int UWebRequest::GetVariableCount(struct FString VariableName)
{
	static UFunction* pFnGetVariableCount = NULL;

	if (!pFnGetVariableCount)
		pFnGetVariableCount = (UFunction*)UObject::GObjObjects()->Data[45197];

	UWebRequest_execGetVariableCount_Parms GetVariableCount_Parms;
	memcpy(&GetVariableCount_Parms.VariableName, &VariableName, 0xC);

	pFnGetVariableCount->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariableCount, &GetVariableCount_Parms, NULL);

	pFnGetVariableCount->FunctionFlags |= 0x400;

	return GetVariableCount_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.GetVariable
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetVariable(struct FString VariableName, struct FString DefaultValue)
{
	static UFunction* pFnGetVariable = NULL;

	if (!pFnGetVariable)
		pFnGetVariable = (UFunction*)UObject::GObjObjects()->Data[45195];

	UWebRequest_execGetVariable_Parms GetVariable_Parms;
	memcpy(&GetVariable_Parms.VariableName, &VariableName, 0xC);
	memcpy(&GetVariable_Parms.DefaultValue, &DefaultValue, 0xC);

	pFnGetVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetVariable, &GetVariable_Parms, NULL);

	pFnGetVariable->FunctionFlags |= 0x400;

	return GetVariable_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddVariable
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 VariableName                   ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddVariable(struct FString VariableName, struct FString Value)
{
	static UFunction* pFnAddVariable = NULL;

	if (!pFnAddVariable)
		pFnAddVariable = (UFunction*)UObject::GObjObjects()->Data[46390];

	UWebRequest_execAddVariable_Parms AddVariable_Parms;
	memcpy(&AddVariable_Parms.VariableName, &VariableName, 0xC);
	memcpy(&AddVariable_Parms.Value, &Value, 0xC);

	pFnAddVariable->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddVariable, &AddVariable_Parms, NULL);

	pFnAddVariable->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.GetHeaders
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// TArray< struct FString >       headers                        ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

void UWebRequest::GetHeaders(TArray< struct FString >* headers)
{
	static UFunction* pFnGetHeaders = NULL;

	if (!pFnGetHeaders)
		pFnGetHeaders = (UFunction*)UObject::GObjObjects()->Data[46387];

	UWebRequest_execGetHeaders_Parms GetHeaders_Parms;

	pFnGetHeaders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeaders, &GetHeaders_Parms, NULL);

	pFnGetHeaders->FunctionFlags |= 0x400;

	if (headers)
		memcpy(headers, &GetHeaders_Parms.headers, 0xC);
};

// Function IpDrv.WebRequest.GetHeader
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 DefaultValue                   ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::GetHeader(struct FString HeaderName, struct FString DefaultValue)
{
	static UFunction* pFnGetHeader = NULL;

	if (!pFnGetHeader)
		pFnGetHeader = (UFunction*)UObject::GObjObjects()->Data[46383];

	UWebRequest_execGetHeader_Parms GetHeader_Parms;
	memcpy(&GetHeader_Parms.HeaderName, &HeaderName, 0xC);
	memcpy(&GetHeader_Parms.DefaultValue, &DefaultValue, 0xC);

	pFnGetHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHeader, &GetHeader_Parms, NULL);

	pFnGetHeader->FunctionFlags |= 0x400;

	return GetHeader_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.AddHeader
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 HeaderName                     ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )

void UWebRequest::AddHeader(struct FString HeaderName, struct FString Value)
{
	static UFunction* pFnAddHeader = NULL;

	if (!pFnAddHeader)
		pFnAddHeader = (UFunction*)UObject::GObjObjects()->Data[46380];

	UWebRequest_execAddHeader_Parms AddHeader_Parms;
	memcpy(&AddHeader_Parms.HeaderName, &HeaderName, 0xC);
	memcpy(&AddHeader_Parms.Value, &Value, 0xC);

	pFnAddHeader->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnAddHeader, &AddHeader_Parms, NULL);

	pFnAddHeader->FunctionFlags |= 0x400;
};

// Function IpDrv.WebRequest.EncodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Decoded                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::EncodeBase64(struct FString Decoded)
{
	static UFunction* pFnEncodeBase64 = NULL;

	if (!pFnEncodeBase64)
		pFnEncodeBase64 = (UFunction*)UObject::GObjObjects()->Data[46377];

	UWebRequest_execEncodeBase64_Parms EncodeBase64_Parms;
	memcpy(&EncodeBase64_Parms.Decoded, &Decoded, 0xC);

	pFnEncodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnEncodeBase64, &EncodeBase64_Parms, NULL);

	pFnEncodeBase64->FunctionFlags |= 0x400;

	return EncodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebRequest.DecodeBase64
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Encoded                        ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebRequest::DecodeBase64(struct FString Encoded)
{
	static UFunction* pFnDecodeBase64 = NULL;

	if (!pFnDecodeBase64)
		pFnDecodeBase64 = (UFunction*)UObject::GObjObjects()->Data[46374];

	UWebRequest_execDecodeBase64_Parms DecodeBase64_Parms;
	memcpy(&DecodeBase64_Parms.Encoded, &Encoded, 0xC);

	pFnDecodeBase64->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDecodeBase64, &DecodeBase64_Parms, NULL);

	pFnDecodeBase64->FunctionFlags |= 0x400;

	return DecodeBase64_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentResponse
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentResponse()
{
	static UFunction* pFnSentResponse = NULL;

	if (!pFnSentResponse)
		pFnSentResponse = (UFunction*)UObject::GObjObjects()->Data[46467];

	UWebResponse_execSentResponse_Parms SentResponse_Parms;

	this->ProcessEvent(pFnSentResponse, &SentResponse_Parms, NULL);

	return SentResponse_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SentText
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool UWebResponse::SentText()
{
	static UFunction* pFnSentText = NULL;

	if (!pFnSentText)
		pFnSentText = (UFunction*)UObject::GObjObjects()->Data[46465];

	UWebResponse_execSentText_Parms SentText_Parms;

	this->ProcessEvent(pFnSentText, &SentText_Parms, NULL);

	return SentText_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.Redirect
// [0x00020002]
// Parameters infos:
// struct FString                 URL                            ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::Redirect(struct FString URL)
{
	static UFunction* pFnRedirect = NULL;

	if (!pFnRedirect)
		pFnRedirect = (UFunction*)UObject::GObjObjects()->Data[46463];

	UWebResponse_execRedirect_Parms Redirect_Parms;
	memcpy(&Redirect_Parms.URL, &URL, 0xC);

	this->ProcessEvent(pFnRedirect, &Redirect_Parms, NULL);
};

// Function IpDrv.WebResponse.SendStandardHeaders
// [0x00024002]
// Parameters infos:
// struct FString                 ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bCache                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::SendStandardHeaders(struct FString ContentType, unsigned long bCache)
{
	static UFunction* pFnSendStandardHeaders = NULL;

	if (!pFnSendStandardHeaders)
		pFnSendStandardHeaders = (UFunction*)UObject::GObjObjects()->Data[46459];

	UWebResponse_execSendStandardHeaders_Parms SendStandardHeaders_Parms;
	memcpy(&SendStandardHeaders_Parms.ContentType, &ContentType, 0xC);
	SendStandardHeaders_Parms.bCache = bCache;

	this->ProcessEvent(pFnSendStandardHeaders, &SendStandardHeaders_Parms, NULL);
};

// Function IpDrv.WebResponse.HTTPError
// [0x00024002]
// Parameters infos:
// int                            ErrorNum                       ( CPF_Parm )
// struct FString                 Data                           ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPError(int ErrorNum, struct FString Data)
{
	static UFunction* pFnHTTPError = NULL;

	if (!pFnHTTPError)
		pFnHTTPError = (UFunction*)UObject::GObjObjects()->Data[46456];

	UWebResponse_execHTTPError_Parms HTTPError_Parms;
	HTTPError_Parms.ErrorNum = ErrorNum;
	memcpy(&HTTPError_Parms.Data, &Data, 0xC);

	this->ProcessEvent(pFnHTTPError, &HTTPError_Parms, NULL);
};

// Function IpDrv.WebResponse.SendHeaders
// [0x00020002]
// Parameters infos:

void UWebResponse::SendHeaders()
{
	static UFunction* pFnSendHeaders = NULL;

	if (!pFnSendHeaders)
		pFnSendHeaders = (UFunction*)UObject::GObjObjects()->Data[46454];

	UWebResponse_execSendHeaders_Parms SendHeaders_Parms;

	this->ProcessEvent(pFnSendHeaders, &SendHeaders_Parms, NULL);
};

// Function IpDrv.WebResponse.AddHeader
// [0x00024002]
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bReplace                       ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::AddHeader(struct FString Header, unsigned long bReplace)
{
	static UFunction* pFnAddHeader = NULL;

	if (!pFnAddHeader)
		pFnAddHeader = (UFunction*)UObject::GObjObjects()->Data[46449];

	UWebResponse_execAddHeader_Parms AddHeader_Parms;
	memcpy(&AddHeader_Parms.Header, &Header, 0xC);
	AddHeader_Parms.bReplace = bReplace;

	this->ProcessEvent(pFnAddHeader, &AddHeader_Parms, NULL);
};

// Function IpDrv.WebResponse.HTTPHeader
// [0x00020002]
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPHeader(struct FString Header)
{
	static UFunction* pFnHTTPHeader = NULL;

	if (!pFnHTTPHeader)
		pFnHTTPHeader = (UFunction*)UObject::GObjObjects()->Data[46447];

	UWebResponse_execHTTPHeader_Parms HTTPHeader_Parms;
	memcpy(&HTTPHeader_Parms.Header, &Header, 0xC);

	this->ProcessEvent(pFnHTTPHeader, &HTTPHeader_Parms, NULL);
};

// Function IpDrv.WebResponse.HTTPResponse
// [0x00020002]
// Parameters infos:
// struct FString                 Header                         ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::HTTPResponse(struct FString Header)
{
	static UFunction* pFnHTTPResponse = NULL;

	if (!pFnHTTPResponse)
		pFnHTTPResponse = (UFunction*)UObject::GObjObjects()->Data[46445];

	UWebResponse_execHTTPResponse_Parms HTTPResponse_Parms;
	memcpy(&HTTPResponse_Parms.Header, &Header, 0xC);

	this->ProcessEvent(pFnHTTPResponse, &HTTPResponse_Parms, NULL);
};

// Function IpDrv.WebResponse.FailAuthentication
// [0x00020002]
// Parameters infos:
// struct FString                 Realm                          ( CPF_Parm | CPF_NeedCtorLink )

void UWebResponse::FailAuthentication(struct FString Realm)
{
	static UFunction* pFnFailAuthentication = NULL;

	if (!pFnFailAuthentication)
		pFnFailAuthentication = (UFunction*)UObject::GObjObjects()->Data[46443];

	UWebResponse_execFailAuthentication_Parms FailAuthentication_Parms;
	memcpy(&FailAuthentication_Parms.Realm, &Realm, 0xC);

	this->ProcessEvent(pFnFailAuthentication, &FailAuthentication_Parms, NULL);
};

// Function IpDrv.WebResponse.SendCachedFile
// [0x00024002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 ContentType                    ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::SendCachedFile(struct FString Filename, struct FString ContentType)
{
	static UFunction* pFnSendCachedFile = NULL;

	if (!pFnSendCachedFile)
		pFnSendCachedFile = (UFunction*)UObject::GObjObjects()->Data[46439];

	UWebResponse_execSendCachedFile_Parms SendCachedFile_Parms;
	memcpy(&SendCachedFile_Parms.Filename, &Filename, 0xC);
	memcpy(&SendCachedFile_Parms.ContentType, &ContentType, 0xC);

	this->ProcessEvent(pFnSendCachedFile, &SendCachedFile_Parms, NULL);

	return SendCachedFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.SendBinary
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            Count                          ( CPF_Parm )
// unsigned char                  B                              ( CPF_Parm )

void UWebResponse::eventSendBinary(int Count, unsigned char* B)
{
	static UFunction* pFnSendBinary = NULL;

	if (!pFnSendBinary)
		pFnSendBinary = (UFunction*)UObject::GObjObjects()->Data[46436];

	UWebResponse_eventSendBinary_Parms SendBinary_Parms;
	SendBinary_Parms.Count = Count;
	memcpy(&SendBinary_Parms.B, &B, 0xFF);

	this->ProcessEvent(pFnSendBinary, &SendBinary_Parms, NULL);
};

// Function IpDrv.WebResponse.SendText
// [0x00024802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )
// unsigned long                  bNoCRLF                        ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::eventSendText(struct FString Text, unsigned long bNoCRLF)
{
	static UFunction* pFnSendText = NULL;

	if (!pFnSendText)
		pFnSendText = (UFunction*)UObject::GObjObjects()->Data[46433];

	UWebResponse_eventSendText_Parms SendText_Parms;
	memcpy(&SendText_Parms.Text, &Text, 0xC);
	SendText_Parms.bNoCRLF = bNoCRLF;

	this->ProcessEvent(pFnSendText, &SendText_Parms, NULL);
};

// Function IpDrv.WebResponse.Dump
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebResponse::Dump()
{
	static UFunction* pFnDump = NULL;

	if (!pFnDump)
		pFnDump = (UFunction*)UObject::GObjObjects()->Data[46432];

	UWebResponse_execDump_Parms Dump_Parms;

	pFnDump->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnDump, &Dump_Parms, NULL);

	pFnDump->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.GetHTTPExpiration
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// int                            OffsetSeconds                  ( CPF_OptionalParm | CPF_Parm )

struct FString UWebResponse::GetHTTPExpiration(int OffsetSeconds)
{
	static UFunction* pFnGetHTTPExpiration = NULL;

	if (!pFnGetHTTPExpiration)
		pFnGetHTTPExpiration = (UFunction*)UObject::GObjObjects()->Data[46429];

	UWebResponse_execGetHTTPExpiration_Parms GetHTTPExpiration_Parms;
	GetHTTPExpiration_Parms.OffsetSeconds = OffsetSeconds;

	pFnGetHTTPExpiration->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetHTTPExpiration, &GetHTTPExpiration_Parms, NULL);

	pFnGetHTTPExpiration->FunctionFlags |= 0x400;

	return GetHTTPExpiration_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.LoadParsedUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

struct FString UWebResponse::LoadParsedUHTM(struct FString Filename)
{
	static UFunction* pFnLoadParsedUHTM = NULL;

	if (!pFnLoadParsedUHTM)
		pFnLoadParsedUHTM = (UFunction*)UObject::GObjObjects()->Data[46426];

	UWebResponse_execLoadParsedUHTM_Parms LoadParsedUHTM_Parms;
	memcpy(&LoadParsedUHTM_Parms.Filename, &Filename, 0xC);

	pFnLoadParsedUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnLoadParsedUHTM, &LoadParsedUHTM_Parms, NULL);

	pFnLoadParsedUHTM->FunctionFlags |= 0x400;

	return LoadParsedUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeBinaryFile
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeBinaryFile(struct FString Filename)
{
	static UFunction* pFnIncludeBinaryFile = NULL;

	if (!pFnIncludeBinaryFile)
		pFnIncludeBinaryFile = (UFunction*)UObject::GObjObjects()->Data[45212];

	UWebResponse_execIncludeBinaryFile_Parms IncludeBinaryFile_Parms;
	memcpy(&IncludeBinaryFile_Parms.Filename, &Filename, 0xC);

	pFnIncludeBinaryFile->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIncludeBinaryFile, &IncludeBinaryFile_Parms, NULL);

	pFnIncludeBinaryFile->FunctionFlags |= 0x400;

	return IncludeBinaryFile_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.IncludeUHTM
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::IncludeUHTM(struct FString Filename)
{
	static UFunction* pFnIncludeUHTM = NULL;

	if (!pFnIncludeUHTM)
		pFnIncludeUHTM = (UFunction*)UObject::GObjObjects()->Data[45202];

	UWebResponse_execIncludeUHTM_Parms IncludeUHTM_Parms;
	memcpy(&IncludeUHTM_Parms.Filename, &Filename, 0xC);

	pFnIncludeUHTM->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnIncludeUHTM, &IncludeUHTM_Parms, NULL);

	pFnIncludeUHTM->FunctionFlags |= 0x400;

	return IncludeUHTM_Parms.ReturnValue;
};

// Function IpDrv.WebResponse.ClearSubst
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:

void UWebResponse::ClearSubst()
{
	static UFunction* pFnClearSubst = NULL;

	if (!pFnClearSubst)
		pFnClearSubst = (UFunction*)UObject::GObjObjects()->Data[46423];

	UWebResponse_execClearSubst_Parms ClearSubst_Parms;

	pFnClearSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnClearSubst, &ClearSubst_Parms, NULL);

	pFnClearSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.Subst
// [0x00024401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// struct FString                 Variable                       ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 Value                          ( CPF_Parm | CPF_CoerceParm | CPF_NeedCtorLink )
// unsigned long                  bClear                         ( CPF_OptionalParm | CPF_Parm )

void UWebResponse::Subst(struct FString Variable, struct FString Value, unsigned long bClear)
{
	static UFunction* pFnSubst = NULL;

	if (!pFnSubst)
		pFnSubst = (UFunction*)UObject::GObjObjects()->Data[45201];

	UWebResponse_execSubst_Parms Subst_Parms;
	memcpy(&Subst_Parms.Variable, &Variable, 0xC);
	memcpy(&Subst_Parms.Value, &Value, 0xC);
	Subst_Parms.bClear = bClear;

	pFnSubst->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnSubst, &Subst_Parms, NULL);

	pFnSubst->FunctionFlags |= 0x400;
};

// Function IpDrv.WebResponse.FileExists
// [0x00020401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 Filename                       ( CPF_Parm | CPF_NeedCtorLink )

bool UWebResponse::FileExists(struct FString Filename)
{
	static UFunction* pFnFileExists = NULL;

	if (!pFnFileExists)
		pFnFileExists = (UFunction*)UObject::GObjObjects()->Data[45210];

	UWebResponse_execFileExists_Parms FileExists_Parms;
	memcpy(&FileExists_Parms.Filename, &Filename, 0xC);

	pFnFileExists->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFileExists, &FileExists_Parms, NULL);

	pFnFileExists->FunctionFlags |= 0x400;

	return FileExists_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetMatchTypeForPlaylistId
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// int                            PlaylistId                     ( CPF_Parm )

int UUIDataStore_OnlinePlaylists::eventGetMatchTypeForPlaylistId(int PlaylistId)
{
	static UFunction* pFnGetMatchTypeForPlaylistId = NULL;

	if (!pFnGetMatchTypeForPlaylistId)
		pFnGetMatchTypeForPlaylistId = (UFunction*)UObject::GObjObjects()->Data[46326];

	UUIDataStore_OnlinePlaylists_eventGetMatchTypeForPlaylistId_Parms GetMatchTypeForPlaylistId_Parms;
	GetMatchTypeForPlaylistId_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetMatchTypeForPlaylistId, &GetMatchTypeForPlaylistId_Parms, NULL);

	return GetMatchTypeForPlaylistId_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetOnlinePlaylistProvider
// [0x00C26002]
// Parameters infos:
// class UOnlinePlaylistProvider* ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// int                            PlaylistId                     ( CPF_Parm )
// int                            ProviderIndex                  ( CPF_OptionalParm | CPF_Parm | CPF_OutParm )

class UOnlinePlaylistProvider* UUIDataStore_OnlinePlaylists::GetOnlinePlaylistProvider(struct FName ProviderTag, int PlaylistId, int* ProviderIndex)
{
	static UFunction* pFnGetOnlinePlaylistProvider = NULL;

	if (!pFnGetOnlinePlaylistProvider)
		pFnGetOnlinePlaylistProvider = (UFunction*)UObject::GObjObjects()->Data[46320];

	UUIDataStore_OnlinePlaylists_execGetOnlinePlaylistProvider_Parms GetOnlinePlaylistProvider_Parms;
	memcpy(&GetOnlinePlaylistProvider_Parms.ProviderTag, &ProviderTag, 0x8);
	GetOnlinePlaylistProvider_Parms.PlaylistId = PlaylistId;

	this->ProcessEvent(pFnGetOnlinePlaylistProvider, &GetOnlinePlaylistProvider_Parms, NULL);

	if (ProviderIndex)
		*ProviderIndex = GetOnlinePlaylistProvider_Parms.ProviderIndex;

	return GetOnlinePlaylistProvider_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetPlaylistProvider
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// int                            ProviderIndex                  ( CPF_Parm )
// class UUIResourceDataProvider* out_Provider                   ( CPF_Parm | CPF_OutParm )

bool UUIDataStore_OnlinePlaylists::GetPlaylistProvider(struct FName ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider)
{
	static UFunction* pFnGetPlaylistProvider = NULL;

	if (!pFnGetPlaylistProvider)
		pFnGetPlaylistProvider = (UFunction*)UObject::GObjObjects()->Data[46315];

	UUIDataStore_OnlinePlaylists_execGetPlaylistProvider_Parms GetPlaylistProvider_Parms;
	memcpy(&GetPlaylistProvider_Parms.ProviderTag, &ProviderTag, 0x8);
	GetPlaylistProvider_Parms.ProviderIndex = ProviderIndex;

	pFnGetPlaylistProvider->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetPlaylistProvider, &GetPlaylistProvider_Parms, NULL);

	pFnGetPlaylistProvider->FunctionFlags |= 0x400;

	if (out_Provider)
		*out_Provider = GetPlaylistProvider_Parms.out_Provider;

	return GetPlaylistProvider_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.FindProviderIndexByFieldValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// struct FName                   SearchField                    ( CPF_Parm )
// struct FUIProviderScriptFieldValue ValueToSearchFor               ( CPF_Const | CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

int UUIDataStore_OnlinePlaylists::FindProviderIndexByFieldValue(struct FName ProviderTag, struct FName SearchField, struct FUIProviderScriptFieldValue* ValueToSearchFor)
{
	static UFunction* pFnFindProviderIndexByFieldValue = NULL;

	if (!pFnFindProviderIndexByFieldValue)
		pFnFindProviderIndexByFieldValue = (UFunction*)UObject::GObjObjects()->Data[46310];

	UUIDataStore_OnlinePlaylists_execFindProviderIndexByFieldValue_Parms FindProviderIndexByFieldValue_Parms;
	memcpy(&FindProviderIndexByFieldValue_Parms.ProviderTag, &ProviderTag, 0x8);
	memcpy(&FindProviderIndexByFieldValue_Parms.SearchField, &SearchField, 0x8);

	pFnFindProviderIndexByFieldValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnFindProviderIndexByFieldValue, &FindProviderIndexByFieldValue_Parms, NULL);

	pFnFindProviderIndexByFieldValue->FunctionFlags |= 0x400;

	if (ValueToSearchFor)
		memcpy(ValueToSearchFor, &FindProviderIndexByFieldValue_Parms.ValueToSearchFor, 0x64);

	return FindProviderIndexByFieldValue_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderFieldValue
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// struct FName                   SearchField                    ( CPF_Parm )
// int                            ProviderIndex                  ( CPF_Parm )
// struct FUIProviderScriptFieldValue out_FieldValue                 ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UUIDataStore_OnlinePlaylists::GetProviderFieldValue(struct FName ProviderTag, struct FName SearchField, int ProviderIndex, struct FUIProviderScriptFieldValue* out_FieldValue)
{
	static UFunction* pFnGetProviderFieldValue = NULL;

	if (!pFnGetProviderFieldValue)
		pFnGetProviderFieldValue = (UFunction*)UObject::GObjObjects()->Data[46304];

	UUIDataStore_OnlinePlaylists_execGetProviderFieldValue_Parms GetProviderFieldValue_Parms;
	memcpy(&GetProviderFieldValue_Parms.ProviderTag, &ProviderTag, 0x8);
	memcpy(&GetProviderFieldValue_Parms.SearchField, &SearchField, 0x8);
	GetProviderFieldValue_Parms.ProviderIndex = ProviderIndex;

	pFnGetProviderFieldValue->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetProviderFieldValue, &GetProviderFieldValue_Parms, NULL);

	pFnGetProviderFieldValue->FunctionFlags |= 0x400;

	if (out_FieldValue)
		memcpy(out_FieldValue, &GetProviderFieldValue_Parms.out_FieldValue, 0x64);

	return GetProviderFieldValue_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviderFields
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// TArray< struct FName >         ProviderFieldTags              ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UUIDataStore_OnlinePlaylists::GetResourceProviderFields(struct FName ProviderTag, TArray< struct FName >* ProviderFieldTags)
{
	static UFunction* pFnGetResourceProviderFields = NULL;

	if (!pFnGetResourceProviderFields)
		pFnGetResourceProviderFields = (UFunction*)UObject::GObjObjects()->Data[46299];

	UUIDataStore_OnlinePlaylists_execGetResourceProviderFields_Parms GetResourceProviderFields_Parms;
	memcpy(&GetResourceProviderFields_Parms.ProviderTag, &ProviderTag, 0x8);

	pFnGetResourceProviderFields->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResourceProviderFields, &GetResourceProviderFields_Parms, NULL);

	pFnGetResourceProviderFields->FunctionFlags |= 0x400;

	if (ProviderFieldTags)
		memcpy(ProviderFieldTags, &GetResourceProviderFields_Parms.ProviderFieldTags, 0xC);

	return GetResourceProviderFields_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetResourceProviders
// [0x00420401] ( FUNC_Final | FUNC_Native )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )
// TArray< class UUIResourceDataProvider* > out_Providers                  ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

bool UUIDataStore_OnlinePlaylists::GetResourceProviders(struct FName ProviderTag, TArray< class UUIResourceDataProvider* >* out_Providers)
{
	static UFunction* pFnGetResourceProviders = NULL;

	if (!pFnGetResourceProviders)
		pFnGetResourceProviders = (UFunction*)UObject::GObjObjects()->Data[46294];

	UUIDataStore_OnlinePlaylists_execGetResourceProviders_Parms GetResourceProviders_Parms;
	memcpy(&GetResourceProviders_Parms.ProviderTag, &ProviderTag, 0x8);

	pFnGetResourceProviders->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetResourceProviders, &GetResourceProviders_Parms, NULL);

	pFnGetResourceProviders->FunctionFlags |= 0x400;

	if (out_Providers)
		memcpy(out_Providers, &GetResourceProviders_Parms.out_Providers, 0xC);

	return GetResourceProviders_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.GetProviderCount
// [0x00020400] ( FUNC_Native )
// Parameters infos:
// int                            ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FName                   ProviderTag                    ( CPF_Parm )

int UUIDataStore_OnlinePlaylists::GetProviderCount(struct FName ProviderTag)
{
	static UFunction* pFnGetProviderCount = NULL;

	if (!pFnGetProviderCount)
		pFnGetProviderCount = (UFunction*)UObject::GObjObjects()->Data[46291];

	UUIDataStore_OnlinePlaylists_execGetProviderCount_Parms GetProviderCount_Parms;
	memcpy(&GetProviderCount_Parms.ProviderTag, &ProviderTag, 0x8);

	pFnGetProviderCount->FunctionFlags |= ~0x400;

	this->ProcessEvent(pFnGetProviderCount, &GetProviderCount_Parms, NULL);

	pFnGetProviderCount->FunctionFlags |= 0x400;

	return GetProviderCount_Parms.ReturnValue;
};

// Function IpDrv.UIDataStore_OnlinePlaylists.Init
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UUIDataStore_OnlinePlaylists::eventInit()
{
	static UFunction* pFnInit = NULL;

	if (!pFnInit)
		pFnInit = (UFunction*)UObject::GObjObjects()->Data[46290];

	UUIDataStore_OnlinePlaylists_eventInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, NULL);
};

// Function IpDrv.WebApplication.PostQuery
// [0x00020000]
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::PostQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnPostQuery = NULL;

	if (!pFnPostQuery)
		pFnPostQuery = (UFunction*)UObject::GObjObjects()->Data[45183];

	UWebApplication_execPostQuery_Parms PostQuery_Parms;
	PostQuery_Parms.Request = Request;
	PostQuery_Parms.Response = Response;

	this->ProcessEvent(pFnPostQuery, &PostQuery_Parms, NULL);
};

// Function IpDrv.WebApplication.Query
// [0x00020000]
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UWebApplication::Query(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnQuery = NULL;

	if (!pFnQuery)
		pFnQuery = (UFunction*)UObject::GObjObjects()->Data[45180];

	UWebApplication_execQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent(pFnQuery, &Query_Parms, NULL);
};

// Function IpDrv.WebApplication.PreQuery
// [0x00020002]
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

bool UWebApplication::PreQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnPreQuery = NULL;

	if (!pFnPreQuery)
		pFnPreQuery = (UFunction*)UObject::GObjObjects()->Data[45176];

	UWebApplication_execPreQuery_Parms PreQuery_Parms;
	PreQuery_Parms.Request = Request;
	PreQuery_Parms.Response = Response;

	this->ProcessEvent(pFnPreQuery, &PreQuery_Parms, NULL);

	return PreQuery_Parms.ReturnValue;
};

// Function IpDrv.WebApplication.CleanupApp
// [0x00020002]
// Parameters infos:

void UWebApplication::CleanupApp()
{
	static UFunction* pFnCleanupApp = NULL;

	if (!pFnCleanupApp)
		pFnCleanupApp = (UFunction*)UObject::GObjObjects()->Data[45175];

	UWebApplication_execCleanupApp_Parms CleanupApp_Parms;

	this->ProcessEvent(pFnCleanupApp, &CleanupApp_Parms, NULL);
};

// Function IpDrv.WebApplication.Cleanup
// [0x00020001] ( FUNC_Final )
// Parameters infos:

void UWebApplication::Cleanup()
{
	static UFunction* pFnCleanup = NULL;

	if (!pFnCleanup)
		pFnCleanup = (UFunction*)UObject::GObjObjects()->Data[45174];

	UWebApplication_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent(pFnCleanup, &Cleanup_Parms, NULL);
};

// Function IpDrv.WebApplication.Init
// [0x00020000]
// Parameters infos:

void UWebApplication::Init()
{
	static UFunction* pFnInit = NULL;

	if (!pFnInit)
		pFnInit = (UFunction*)UObject::GObjObjects()->Data[45173];

	UWebApplication_execInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, NULL);
};

// Function IpDrv.WebServer.GetApplication
// [0x00420002]
// Parameters infos:
// class UWebApplication*         ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
// struct FString                 URI                            ( CPF_Parm | CPF_NeedCtorLink )
// struct FString                 SubURI                         ( CPF_Parm | CPF_OutParm | CPF_NeedCtorLink )

class UWebApplication* AWebServer::GetApplication(struct FString URI, struct FString* SubURI)
{
	static UFunction* pFnGetApplication = NULL;

	if (!pFnGetApplication)
		pFnGetApplication = (UFunction*)UObject::GObjObjects()->Data[46354];

	AWebServer_execGetApplication_Parms GetApplication_Parms;
	memcpy(&GetApplication_Parms.URI, &URI, 0xC);

	this->ProcessEvent(pFnGetApplication, &GetApplication_Parms, NULL);

	if (SubURI)
		memcpy(SubURI, &GetApplication_Parms.SubURI, 0xC);

	return GetApplication_Parms.ReturnValue;
};

// Function IpDrv.WebServer.LostChild
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::eventLostChild(class AActor* C)
{
	static UFunction* pFnLostChild = NULL;

	if (!pFnLostChild)
		pFnLostChild = (UFunction*)UObject::GObjObjects()->Data[46483];

	AWebServer_eventLostChild_Parms LostChild_Parms;
	LostChild_Parms.C = C;

	this->ProcessEvent(pFnLostChild, &LostChild_Parms, NULL);
};

// Function IpDrv.WebServer.GainedChild
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class AActor*                  C                              ( CPF_Parm )

void AWebServer::eventGainedChild(class AActor* C)
{
	static UFunction* pFnGainedChild = NULL;

	if (!pFnGainedChild)
		pFnGainedChild = (UFunction*)UObject::GObjObjects()->Data[46481];

	AWebServer_eventGainedChild_Parms GainedChild_Parms;
	GainedChild_Parms.C = C;

	this->ProcessEvent(pFnGainedChild, &GainedChild_Parms, NULL);
};

// Function IpDrv.WebServer.Destroyed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebServer::eventDestroyed()
{
	static UFunction* pFnDestroyed = NULL;

	if (!pFnDestroyed)
		pFnDestroyed = (UFunction*)UObject::GObjObjects()->Data[46480];

	AWebServer_eventDestroyed_Parms Destroyed_Parms;

	this->ProcessEvent(pFnDestroyed, &Destroyed_Parms, NULL);
};

// Function IpDrv.WebServer.PostBeginPlay
// [0x00820002]
// Parameters infos:

void AWebServer::PostBeginPlay()
{
	static UFunction* pFnPostBeginPlay = NULL;

	if (!pFnPostBeginPlay)
		pFnPostBeginPlay = (UFunction*)UObject::GObjObjects()->Data[46477];

	AWebServer_execPostBeginPlay_Parms PostBeginPlay_Parms;

	this->ProcessEvent(pFnPostBeginPlay, &PostBeginPlay_Parms, NULL);
};

// Function IpDrv.HelloWeb.Query
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UHelloWeb::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnQuery = NULL;

	if (!pFnQuery)
		pFnQuery = (UFunction*)UObject::GObjObjects()->Data[45189];

	UHelloWeb_eventQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent(pFnQuery, &Query_Parms, NULL);
};

// Function IpDrv.HelloWeb.Init
// [0x00020002]
// Parameters infos:

void UHelloWeb::Init()
{
	static UFunction* pFnInit = NULL;

	if (!pFnInit)
		pFnInit = (UFunction*)UObject::GObjObjects()->Data[45188];

	UHelloWeb_execInit_Parms Init_Parms;

	this->ProcessEvent(pFnInit, &Init_Parms, NULL);
};

// Function IpDrv.ImageServer.Query
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// class UWebRequest*             Request                        ( CPF_Parm )
// class UWebResponse*            Response                       ( CPF_Parm )

void UImageServer::eventQuery(class UWebRequest* Request, class UWebResponse* Response)
{
	static UFunction* pFnQuery = NULL;

	if (!pFnQuery)
		pFnQuery = (UFunction*)UObject::GObjObjects()->Data[45206];

	UImageServer_eventQuery_Parms Query_Parms;
	Query_Parms.Request = Request;
	Query_Parms.Response = Response;

	this->ProcessEvent(pFnQuery, &Query_Parms, NULL);
};

// Function IpDrv.WebConnection.IsHanging
// [0x00020003] ( FUNC_Final )
// Parameters infos:
// bool                           ReturnValue                    ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )

bool AWebConnection::IsHanging()
{
	static UFunction* pFnIsHanging = NULL;

	if (!pFnIsHanging)
		pFnIsHanging = (UFunction*)UObject::GObjObjects()->Data[46368];

	AWebConnection_execIsHanging_Parms IsHanging_Parms;

	this->ProcessEvent(pFnIsHanging, &IsHanging_Parms, NULL);

	return IsHanging_Parms.ReturnValue;
};

// Function IpDrv.WebConnection.Cleanup
// [0x00020002]
// Parameters infos:

void AWebConnection::Cleanup()
{
	static UFunction* pFnCleanup = NULL;

	if (!pFnCleanup)
		pFnCleanup = (UFunction*)UObject::GObjObjects()->Data[46367];

	AWebConnection_execCleanup_Parms Cleanup_Parms;

	this->ProcessEvent(pFnCleanup, &Cleanup_Parms, NULL);
};

// Function IpDrv.WebConnection.CheckRawBytes
// [0x00020002]
// Parameters infos:

void AWebConnection::CheckRawBytes()
{
	static UFunction* pFnCheckRawBytes = NULL;

	if (!pFnCheckRawBytes)
		pFnCheckRawBytes = (UFunction*)UObject::GObjObjects()->Data[46365];

	AWebConnection_execCheckRawBytes_Parms CheckRawBytes_Parms;

	this->ProcessEvent(pFnCheckRawBytes, &CheckRawBytes_Parms, NULL);
};

// Function IpDrv.WebConnection.EndOfHeaders
// [0x00020002]
// Parameters infos:

void AWebConnection::EndOfHeaders()
{
	static UFunction* pFnEndOfHeaders = NULL;

	if (!pFnEndOfHeaders)
		pFnEndOfHeaders = (UFunction*)UObject::GObjObjects()->Data[46363];

	AWebConnection_execEndOfHeaders_Parms EndOfHeaders_Parms;

	this->ProcessEvent(pFnEndOfHeaders, &EndOfHeaders_Parms, NULL);
};

// Function IpDrv.WebConnection.CreateResponseObject
// [0x00020002]
// Parameters infos:

void AWebConnection::CreateResponseObject()
{
	static UFunction* pFnCreateResponseObject = NULL;

	if (!pFnCreateResponseObject)
		pFnCreateResponseObject = (UFunction*)UObject::GObjObjects()->Data[46360];

	AWebConnection_execCreateResponseObject_Parms CreateResponseObject_Parms;

	this->ProcessEvent(pFnCreateResponseObject, &CreateResponseObject_Parms, NULL);
};

// Function IpDrv.WebConnection.ProcessPost
// [0x00020002]
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessPost(struct FString S)
{
	static UFunction* pFnProcessPost = NULL;

	if (!pFnProcessPost)
		pFnProcessPost = (UFunction*)UObject::GObjObjects()->Data[46358];

	AWebConnection_execProcessPost_Parms ProcessPost_Parms;
	memcpy(&ProcessPost_Parms.S, &S, 0xC);

	this->ProcessEvent(pFnProcessPost, &ProcessPost_Parms, NULL);
};

// Function IpDrv.WebConnection.ProcessGet
// [0x00020002]
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessGet(struct FString S)
{
	static UFunction* pFnProcessGet = NULL;

	if (!pFnProcessGet)
		pFnProcessGet = (UFunction*)UObject::GObjObjects()->Data[46351];

	AWebConnection_execProcessGet_Parms ProcessGet_Parms;
	memcpy(&ProcessGet_Parms.S, &S, 0xC);

	this->ProcessEvent(pFnProcessGet, &ProcessGet_Parms, NULL);
};

// Function IpDrv.WebConnection.ProcessHead
// [0x00020002]
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ProcessHead(struct FString S)
{
	static UFunction* pFnProcessHead = NULL;

	if (!pFnProcessHead)
		pFnProcessHead = (UFunction*)UObject::GObjObjects()->Data[46349];

	AWebConnection_execProcessHead_Parms ProcessHead_Parms;
	memcpy(&ProcessHead_Parms.S, &S, 0xC);

	this->ProcessEvent(pFnProcessHead, &ProcessHead_Parms, NULL);
};

// Function IpDrv.WebConnection.ReceivedLine
// [0x00020002]
// Parameters infos:
// struct FString                 S                              ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::ReceivedLine(struct FString S)
{
	static UFunction* pFnReceivedLine = NULL;

	if (!pFnReceivedLine)
		pFnReceivedLine = (UFunction*)UObject::GObjObjects()->Data[46347];

	AWebConnection_execReceivedLine_Parms ReceivedLine_Parms;
	memcpy(&ReceivedLine_Parms.S, &S, 0xC);

	this->ProcessEvent(pFnReceivedLine, &ReceivedLine_Parms, NULL);
};

// Function IpDrv.WebConnection.ReceivedText
// [0x00020802] ( FUNC_Event )
// Parameters infos:
// struct FString                 Text                           ( CPF_Parm | CPF_NeedCtorLink )

void AWebConnection::eventReceivedText(struct FString Text)
{
	static UFunction* pFnReceivedText = NULL;

	if (!pFnReceivedText)
		pFnReceivedText = (UFunction*)UObject::GObjObjects()->Data[46344];

	AWebConnection_eventReceivedText_Parms ReceivedText_Parms;
	memcpy(&ReceivedText_Parms.Text, &Text, 0xC);

	this->ProcessEvent(pFnReceivedText, &ReceivedText_Parms, NULL);
};

// Function IpDrv.WebConnection.Timer
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventTimer()
{
	static UFunction* pFnTimer = NULL;

	if (!pFnTimer)
		pFnTimer = (UFunction*)UObject::GObjObjects()->Data[46343];

	AWebConnection_eventTimer_Parms Timer_Parms;

	this->ProcessEvent(pFnTimer, &Timer_Parms, NULL);
};

// Function IpDrv.WebConnection.Closed
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventClosed()
{
	static UFunction* pFnClosed = NULL;

	if (!pFnClosed)
		pFnClosed = (UFunction*)UObject::GObjObjects()->Data[46342];

	AWebConnection_eventClosed_Parms Closed_Parms;

	this->ProcessEvent(pFnClosed, &Closed_Parms, NULL);
};

// Function IpDrv.WebConnection.Accepted
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void AWebConnection::eventAccepted()
{
	static UFunction* pFnAccepted = NULL;

	if (!pFnAccepted)
		pFnAccepted = (UFunction*)UObject::GObjObjects()->Data[46340];

	AWebConnection_eventAccepted_Parms Accepted_Parms;

	this->ProcessEvent(pFnAccepted, &Accepted_Parms, NULL);
};

#ifdef _MSC_VER
#pragma pack ( pop )
#endif