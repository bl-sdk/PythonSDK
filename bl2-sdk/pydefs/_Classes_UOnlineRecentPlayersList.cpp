#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlineRecentPlayersList(py::module &m)
{
    py::class_< UOnlineRecentPlayersList,  UObject   >(m, "UOnlineRecentPlayersList")
		.def_static("StaticClass", &UOnlineRecentPlayersList::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RecentPlayers", &UOnlineRecentPlayersList::RecentPlayers)
        .def_readwrite("RecentParties", &UOnlineRecentPlayersList::RecentParties)
        .def_readwrite("LastParty", &UOnlineRecentPlayersList::LastParty)
        .def_readwrite("MaxRecentPlayers", &UOnlineRecentPlayersList::MaxRecentPlayers)
        .def_readwrite("MaxRecentParties", &UOnlineRecentPlayersList::MaxRecentParties)
        .def_readwrite("RecentPlayersAddIndex", &UOnlineRecentPlayersList::RecentPlayersAddIndex)
        .def_readwrite("RecentPartiesAddIndex", &UOnlineRecentPlayersList::RecentPartiesAddIndex)
        .def_readwrite("CurrentPlayers", &UOnlineRecentPlayersList::CurrentPlayers)
        .def("GetCurrentPlayersListCount", &UOnlineRecentPlayersList::GetCurrentPlayersListCount)
        .def("SetCurrentPlayersList", &UOnlineRecentPlayersList::SetCurrentPlayersList)
        .def("ShowCurrentPlayersList", &UOnlineRecentPlayersList::ShowCurrentPlayersList)
        .def("ShowLastPartyPlayerList", &UOnlineRecentPlayersList::ShowLastPartyPlayerList)
        .def("ShowRecentPartiesPlayerList", &UOnlineRecentPlayersList::ShowRecentPartiesPlayerList)
        .def("ShowRecentPlayerList", &UOnlineRecentPlayersList::ShowRecentPlayerList)
        .def("SetLastParty", &UOnlineRecentPlayersList::SetLastParty)
        .def("GetTeamForCurrentPlayer", &UOnlineRecentPlayersList::GetTeamForCurrentPlayer)
        .def("GetSkillForCurrentPlayer", &UOnlineRecentPlayersList::GetSkillForCurrentPlayer)
        .def("GetPlayersFromCurrentPlayers", &UOnlineRecentPlayersList::GetPlayersFromCurrentPlayers)
        .def("GetPlayersFromRecentParties", &UOnlineRecentPlayersList::GetPlayersFromRecentParties)
        .def("ClearRecentParties", &UOnlineRecentPlayersList::ClearRecentParties)
        .def("AddPartyToRecentParties", &UOnlineRecentPlayersList::AddPartyToRecentParties)
        .def("ClearRecentPlayers", &UOnlineRecentPlayersList::ClearRecentPlayers)
        .def("AddPlayerToRecentPlayers", &UOnlineRecentPlayersList::AddPlayerToRecentPlayers)
          ;
}