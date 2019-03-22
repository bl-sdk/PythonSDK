#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlinePartyChatInterface(py::module &m)
{
    py::class_< UOnlinePartyChatInterface,  UInterface   >(m, "UOnlinePartyChatInterface")
        .def("StaticClass", &UOnlinePartyChatInterface::StaticClass, py::return_value_policy::reference)
        .def("IsInPartyChat", &UOnlinePartyChatInterface::IsInPartyChat)
        .def("ShowCommunitySessionsUI", &UOnlinePartyChatInterface::ShowCommunitySessionsUI)
        .def("ShowVoiceChannelUI", &UOnlinePartyChatInterface::ShowVoiceChannelUI)
        .def("ShowPartyUI", &UOnlinePartyChatInterface::ShowPartyUI)
        .def("GetPartyBandwidth", &UOnlinePartyChatInterface::GetPartyBandwidth)
        .def("SetPartyMemberCustomData", &UOnlinePartyChatInterface::SetPartyMemberCustomData)
        .def("ClearPartyMembersInfoChangedDelegate", &UOnlinePartyChatInterface::ClearPartyMembersInfoChangedDelegate)
        .def("AddPartyMembersInfoChangedDelegate", &UOnlinePartyChatInterface::AddPartyMembersInfoChangedDelegate)
        .def("OnPartyMembersInfoChanged", &UOnlinePartyChatInterface::OnPartyMembersInfoChanged)
        .def("ClearPartyMemberListChangedDelegate", &UOnlinePartyChatInterface::ClearPartyMemberListChangedDelegate)
        .def("AddPartyMemberListChangedDelegate", &UOnlinePartyChatInterface::AddPartyMemberListChangedDelegate)
        .def("OnPartyMemberListChanged", &UOnlinePartyChatInterface::OnPartyMemberListChanged)
        .def("GetPartyMemberInformation", &UOnlinePartyChatInterface::GetPartyMemberInformation)
        .def("GetPartyMembersInformation", &UOnlinePartyChatInterface::GetPartyMembersInformation)
        .def("ClearSendPartyGameInvitesCompleteDelegate", &UOnlinePartyChatInterface::ClearSendPartyGameInvitesCompleteDelegate)
        .def("AddSendPartyGameInvitesCompleteDelegate", &UOnlinePartyChatInterface::AddSendPartyGameInvitesCompleteDelegate)
        .def("OnSendPartyGameInvitesComplete", &UOnlinePartyChatInterface::OnSendPartyGameInvitesComplete)
        .def("SendPartyGameInvites", &UOnlinePartyChatInterface::SendPartyGameInvites)
          ;
}