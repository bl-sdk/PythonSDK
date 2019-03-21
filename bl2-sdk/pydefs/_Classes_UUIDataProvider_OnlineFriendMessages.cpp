#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlineFriendMessages()
{
    class_< UUIDataProvider_OnlineFriendMessages, bases< UUIDataProvider_OnlinePlayerDataBase >  , boost::noncopyable>("UUIDataProvider_OnlineFriendMessages", no_init)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_OnlineFriendMessages::VfTable_IUIListElementCellProvider)
        .def_readwrite("Messages", &UUIDataProvider_OnlineFriendMessages::Messages)
        .def_readwrite("SendingPlayerNameCol", &UUIDataProvider_OnlineFriendMessages::SendingPlayerNameCol)
        .def_readwrite("bIsFriendInviteCol", &UUIDataProvider_OnlineFriendMessages::bIsFriendInviteCol)
        .def_readwrite("bWasAcceptedCol", &UUIDataProvider_OnlineFriendMessages::bWasAcceptedCol)
        .def_readwrite("bWasDeniedCol", &UUIDataProvider_OnlineFriendMessages::bWasDeniedCol)
        .def_readwrite("MessageCol", &UUIDataProvider_OnlineFriendMessages::MessageCol)
        .def_readwrite("LastInviteFrom", &UUIDataProvider_OnlineFriendMessages::LastInviteFrom)
        .def("StaticClass", &UUIDataProvider_OnlineFriendMessages::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnGameInviteReceived", &UUIDataProvider_OnlineFriendMessages::OnGameInviteReceived)
        .def("OnLoginChange", &UUIDataProvider_OnlineFriendMessages::OnLoginChange)
        .def("OnFriendMessageReceived", &UUIDataProvider_OnlineFriendMessages::OnFriendMessageReceived)
        .def("OnFriendInviteReceived", &UUIDataProvider_OnlineFriendMessages::OnFriendInviteReceived)
        .def("ReadMessages", &UUIDataProvider_OnlineFriendMessages::ReadMessages)
        .def("eventOnUnregister", &UUIDataProvider_OnlineFriendMessages::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlineFriendMessages::eventOnRegister)
        .staticmethod("StaticClass")
  ;
}