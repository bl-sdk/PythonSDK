#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIDataProvider_OnlineFriends(py::module &m)
{
    py::class_< UUIDataProvider_OnlineFriends,  UUIDataProvider   >(m, "UUIDataProvider_OnlineFriends")
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIDataProvider_OnlineFriends::VfTable_IUIListElementCellProvider)
        .def_readwrite("FriendsList", &UUIDataProvider_OnlineFriends::FriendsList)
        .def_readwrite("NickNameCol", &UUIDataProvider_OnlineFriends::NickNameCol)
        .def_readwrite("PresenceInfoCol", &UUIDataProvider_OnlineFriends::PresenceInfoCol)
        .def_readwrite("FriendStateCol", &UUIDataProvider_OnlineFriends::FriendStateCol)
        .def_readwrite("bIsOnlineCol", &UUIDataProvider_OnlineFriends::bIsOnlineCol)
        .def_readwrite("bIsPlayingCol", &UUIDataProvider_OnlineFriends::bIsPlayingCol)
        .def_readwrite("bIsPlayingThisGameCol", &UUIDataProvider_OnlineFriends::bIsPlayingThisGameCol)
        .def_readwrite("bIsJoinableCol", &UUIDataProvider_OnlineFriends::bIsJoinableCol)
        .def_readwrite("bHasVoiceSupportCol", &UUIDataProvider_OnlineFriends::bHasVoiceSupportCol)
        .def_readwrite("bHaveInvitedCol", &UUIDataProvider_OnlineFriends::bHaveInvitedCol)
        .def_readwrite("bHasInvitedYouCol", &UUIDataProvider_OnlineFriends::bHasInvitedYouCol)
        .def_readwrite("bHaveRequestedCol", &UUIDataProvider_OnlineFriends::bHaveRequestedCol)
        .def_readwrite("bHasRequestedYouCol", &UUIDataProvider_OnlineFriends::bHasRequestedYouCol)
        .def_readwrite("OfflineText", &UUIDataProvider_OnlineFriends::OfflineText)
        .def_readwrite("OnlineText", &UUIDataProvider_OnlineFriends::OnlineText)
        .def_readwrite("AwayText", &UUIDataProvider_OnlineFriends::AwayText)
        .def_readwrite("BusyText", &UUIDataProvider_OnlineFriends::BusyText)
        .def_readwrite("PlayerControllerId", &UUIDataProvider_OnlinePlayerDataBase::PlayerControllerId)
        .def("StaticClass", &UUIDataProvider_OnlineFriends::StaticClass, py::return_value_policy::reference)
        .def("eventRefreshFriendsList", &UUIDataProvider_OnlineFriends::eventRefreshFriendsList)
        .def("OnLoginChange", &UUIDataProvider_OnlineFriends::OnLoginChange)
        .def("OnFriendsReadComplete", &UUIDataProvider_OnlineFriends::OnFriendsReadComplete)
        .def("eventOnUnregister", &UUIDataProvider_OnlineFriends::eventOnUnregister)
        .def("eventOnRegister", &UUIDataProvider_OnlineFriends::eventOnRegister)
          ;
}