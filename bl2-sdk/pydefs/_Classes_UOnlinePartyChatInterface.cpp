#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlinePartyChatInterface()
{
    class_< UOnlinePartyChatInterface, bases< UInterface >  , boost::noncopyable>("UOnlinePartyChatInterface", no_init)
        .def("StaticClass", &UOnlinePartyChatInterface::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}