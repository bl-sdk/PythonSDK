#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineGameInterfaceSteamworks(py::object m)
{
    py::class_< UOnlineGameInterfaceSteamworks,  UOnlineGameInterfaceImpl   >(m, "UOnlineGameInterfaceSteamworks")
        .def_readwrite("QueryToRulesResponseMap", &UOnlineGameInterfaceSteamworks::QueryToRulesResponseMap)
        .def_readwrite("QueryToPingResponseMap", &UOnlineGameInterfaceSteamworks::QueryToPingResponseMap)
        .def_readwrite("ServerListResponse", &UOnlineGameInterfaceSteamworks::ServerListResponse)
        .def_readwrite("CurrentMatchmakingType", &UOnlineGameInterfaceSteamworks::CurrentMatchmakingType)
        .def_readwrite("CurrentMatchmakingQuery", &UOnlineGameInterfaceSteamworks::CurrentMatchmakingQuery)
        .def_readwrite("GameInviteAcceptedDelegates", &UOnlineGameInterfaceSteamworks::GameInviteAcceptedDelegates)
        .def_readwrite("InviteGameSearch", &UOnlineGameInterfaceSteamworks::InviteGameSearch)
        .def_readwrite("RegisterPlayerCompleteDelegates", &UOnlineGameInterfaceSteamworks::RegisterPlayerCompleteDelegates)
        .def_readwrite("UnregisterPlayerCompleteDelegates", &UOnlineGameInterfaceSteamworks::UnregisterPlayerCompleteDelegates)
        .def_readwrite("ActiveClientsideFilters", &UOnlineGameInterfaceSteamworks::ActiveClientsideFilters)
        .def_readwrite("FilterKeyToSteamKeyMap", &UOnlineGameInterfaceSteamworks::FilterKeyToSteamKeyMap)
        .def_readwrite("ServerSessionName", &UOnlineGameInterfaceSteamworks::ServerSessionName)
        .def("StaticClass", &UOnlineGameInterfaceSteamworks::StaticClass, py::return_value_policy::reference)
        .def("GetGameSettings", &UOnlineGameInterfaceSteamworks::GetGameSettings, py::return_value_policy::reference)
        .def("GetResolvedConnectString", &UOnlineGameInterfaceSteamworks::GetResolvedConnectString)
        .def("BindPlatformSpecificSessionToSearch", &UOnlineGameInterfaceSteamworks::BindPlatformSpecificSessionToSearch)
        .def("ReadPlatformSpecificSessionInfoBySessionName", &UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfoBySessionName)
        .def("ReadPlatformSpecificSessionInfo", &UOnlineGameInterfaceSteamworks::ReadPlatformSpecificSessionInfo)
        .def("QueryNonAdvertisedData", &UOnlineGameInterfaceSteamworks::QueryNonAdvertisedData)
        .def("ClearUnregisterPlayerCompleteDelegate", &UOnlineGameInterfaceSteamworks::ClearUnregisterPlayerCompleteDelegate)
        .def("AddUnregisterPlayerCompleteDelegate", &UOnlineGameInterfaceSteamworks::AddUnregisterPlayerCompleteDelegate)
        .def("OnUnregisterPlayerComplete", &UOnlineGameInterfaceSteamworks::OnUnregisterPlayerComplete)
        .def("UnregisterPlayer", &UOnlineGameInterfaceSteamworks::UnregisterPlayer)
        .def("ClearRegisterPlayerCompleteDelegate", &UOnlineGameInterfaceSteamworks::ClearRegisterPlayerCompleteDelegate)
        .def("AddRegisterPlayerCompleteDelegate", &UOnlineGameInterfaceSteamworks::AddRegisterPlayerCompleteDelegate)
        .def("OnRegisterPlayerComplete", &UOnlineGameInterfaceSteamworks::OnRegisterPlayerComplete)
        .def("RegisterPlayer", &UOnlineGameInterfaceSteamworks::RegisterPlayer)
        .def("AcceptGameInvite", &UOnlineGameInterfaceSteamworks::AcceptGameInvite)
        .def("OnGameInviteAccepted", &UOnlineGameInterfaceSteamworks::OnGameInviteAccepted)
        .def("ClearGameInviteAcceptedDelegate", &UOnlineGameInterfaceSteamworks::ClearGameInviteAcceptedDelegate)
        .def("AddGameInviteAcceptedDelegate", &UOnlineGameInterfaceSteamworks::AddGameInviteAcceptedDelegate)
        .def("UpdateOnlineGame", &UOnlineGameInterfaceSteamworks::UpdateOnlineGame)
          ;
}