#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlineFriendMessages(py::module &m)
{
    py::class_< UUIDataProvider_OnlineFriendMessages,  UUIDataProvider_OnlinePlayerDataBase   >(m, "UUIDataProvider_OnlineFriendMessages")
		.def_static("StaticClass", &UUIDataProvider_OnlineFriendMessages::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_OnlineFriendMessages::VfTable_IUIListElementCellProvider)
        .def_readwrite("Messages", &UUIDataProvider_OnlineFriendMessages::Messages)
        .def_readwrite("SendingPlayerNameCol", &UUIDataProvider_OnlineFriendMessages::SendingPlayerNameCol)
        .def_readwrite("bIsFriendInviteCol", &UUIDataProvider_OnlineFriendMessages::bIsFriendInviteCol)
        .def_readwrite("bWasAcceptedCol", &UUIDataProvider_OnlineFriendMessages::bWasAcceptedCol)
        .def_readwrite("bWasDeniedCol", &UUIDataProvider_OnlineFriendMessages::bWasDeniedCol)
        .def_readwrite("MessageCol", &UUIDataProvider_OnlineFriendMessages::MessageCol)
        .def_readwrite("LastInviteFrom", &UUIDataProvider_OnlineFriendMessages::LastInviteFrom)
        .def("OnGameInviteReceived", &UUIDataProvider_OnlineFriendMessages::OnGameInviteReceived)
        .def("OnLoginChange", &UUIDataProvider_OnlineFriendMessages::OnLoginChange)
        .def("OnFriendMessageReceived", &UUIDataProvider_OnlineFriendMessages::OnFriendMessageReceived)
        .def("OnFriendInviteReceived", &UUIDataProvider_OnlineFriendMessages::OnFriendInviteReceived)
        .def("ReadMessages", &UUIDataProvider_OnlineFriendMessages::ReadMessages)
        .def("eventOnUnregister", &UUIDataProvider_OnlineFriendMessages::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlineFriendMessages::eventOnRegister)
          ;
}