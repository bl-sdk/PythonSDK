#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlinePartyChatList()
{
    class_< UUIDataProvider_OnlinePartyChatList, bases< UUIDataProvider_OnlinePlayerDataBase >  , boost::noncopyable>("UUIDataProvider_OnlinePartyChatList", no_init)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_OnlinePartyChatList::VfTable_IUIListElementCellProvider)
        .def_readwrite("PartyMembersList", &UUIDataProvider_OnlinePartyChatList::PartyMembersList)
        .def_readwrite("NatTypes", &UUIDataProvider_OnlinePartyChatList::NatTypes)
        .def_readwrite("NickNameCol", &UUIDataProvider_OnlinePartyChatList::NickNameCol)
        .def_readwrite("NatTypeCol", &UUIDataProvider_OnlinePartyChatList::NatTypeCol)
        .def_readwrite("IsLocalCol", &UUIDataProvider_OnlinePartyChatList::IsLocalCol)
        .def_readwrite("IsInPartyVoiceCol", &UUIDataProvider_OnlinePartyChatList::IsInPartyVoiceCol)
        .def_readwrite("IsTalkingCol", &UUIDataProvider_OnlinePartyChatList::IsTalkingCol)
        .def_readwrite("IsInGameSessionCol", &UUIDataProvider_OnlinePartyChatList::IsInGameSessionCol)
        .def_readwrite("IsPlayingThisGameCol", &UUIDataProvider_OnlinePartyChatList::IsPlayingThisGameCol)
        .def("StaticClass", &UUIDataProvider_OnlinePartyChatList::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventRefreshMembersList", &UUIDataProvider_OnlinePartyChatList::eventRefreshMembersList)
        .def("OnLoginChange", &UUIDataProvider_OnlinePartyChatList::OnLoginChange)
        .def("eventOnUnregister", &UUIDataProvider_OnlinePartyChatList::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlinePartyChatList::eventOnRegister)
        .staticmethod("StaticClass")
  ;
}