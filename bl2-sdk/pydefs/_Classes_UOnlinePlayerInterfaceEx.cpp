#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UOnlinePlayerInterfaceEx(py::module &m)
{
    py::class_< UOnlinePlayerInterfaceEx,  UInterface   >(m, "UOnlinePlayerInterfaceEx")
		.def_static("StaticClass", &UOnlinePlayerInterfaceEx::StaticClass, py::return_value_policy::reference)
        .def("ShowRedeemCodeUI", &UOnlinePlayerInterfaceEx::ShowRedeemCodeUI)
        .def("ClearUnlockAvatarAwardCompleteDelegate", &UOnlinePlayerInterfaceEx::ClearUnlockAvatarAwardCompleteDelegate)
        .def("AddUnlockAvatarAwardCompleteDelegate", &UOnlinePlayerInterfaceEx::AddUnlockAvatarAwardCompleteDelegate)
        .def("OnUnlockAvatarAwardComplete", &UOnlinePlayerInterfaceEx::OnUnlockAvatarAwardComplete)
        .def("ShowCustomMessageUI", &UOnlinePlayerInterfaceEx::ShowCustomMessageUI)
        .def("ClearCrossTitleProfileSettings", &UOnlinePlayerInterfaceEx::ClearCrossTitleProfileSettings)
        .def("GetCrossTitleProfileSettings", &UOnlinePlayerInterfaceEx::GetCrossTitleProfileSettings, py::return_value_policy::reference)
        .def("ClearReadCrossTitleProfileSettingsCompleteDelegate", &UOnlinePlayerInterfaceEx::ClearReadCrossTitleProfileSettingsCompleteDelegate)
        .def("AddReadCrossTitleProfileSettingsCompleteDelegate", &UOnlinePlayerInterfaceEx::AddReadCrossTitleProfileSettingsCompleteDelegate)
        .def("OnReadCrossTitleProfileSettingsComplete", &UOnlinePlayerInterfaceEx::OnReadCrossTitleProfileSettingsComplete)
        .def("ReadCrossTitleProfileSettings", &UOnlinePlayerInterfaceEx::ReadCrossTitleProfileSettings)
        .def("UnlockAvatarAward", &UOnlinePlayerInterfaceEx::UnlockAvatarAward)
        .def("ShowCustomPlayersUI", &UOnlinePlayerInterfaceEx::ShowCustomPlayersUI)
        .def("ShowPlayersUI", &UOnlinePlayerInterfaceEx::ShowPlayersUI)
        .def("ShowFriendsInviteUI", &UOnlinePlayerInterfaceEx::ShowFriendsInviteUI)
        .def("ClearProfileDataChangedDelegate", &UOnlinePlayerInterfaceEx::ClearProfileDataChangedDelegate)
        .def("AddProfileDataChangedDelegate", &UOnlinePlayerInterfaceEx::AddProfileDataChangedDelegate)
        .def("OnProfileDataChanged", &UOnlinePlayerInterfaceEx::OnProfileDataChanged)
        .def("UnlockGamerPicture", &UOnlinePlayerInterfaceEx::UnlockGamerPicture)
        .def("IsDeviceValid", &UOnlinePlayerInterfaceEx::IsDeviceValid)
        .def("GetDeviceSelectionResults", &UOnlinePlayerInterfaceEx::GetDeviceSelectionResults)
        .def("ClearDeviceSelectionDoneDelegate", &UOnlinePlayerInterfaceEx::ClearDeviceSelectionDoneDelegate)
        .def("AddDeviceSelectionDoneDelegate", &UOnlinePlayerInterfaceEx::AddDeviceSelectionDoneDelegate)
        .def("OnDeviceSelectionComplete", &UOnlinePlayerInterfaceEx::OnDeviceSelectionComplete)
        .def("ShowDeviceSelectionUI", &UOnlinePlayerInterfaceEx::ShowDeviceSelectionUI)
        .def("ShowMembershipMarketplaceUI", &UOnlinePlayerInterfaceEx::ShowMembershipMarketplaceUI)
        .def("ShowContentMarketplaceUI", &UOnlinePlayerInterfaceEx::ShowContentMarketplaceUI)
        .def("ShowInviteUI", &UOnlinePlayerInterfaceEx::ShowInviteUI)
        .def("ShowAchievementsUI", &UOnlinePlayerInterfaceEx::ShowAchievementsUI)
        .def("ShowMessagesUI", &UOnlinePlayerInterfaceEx::ShowMessagesUI)
        .def("ShowGamerCardUI", &UOnlinePlayerInterfaceEx::ShowGamerCardUI)
        .def("ShowFeedbackUI", &UOnlinePlayerInterfaceEx::ShowFeedbackUI)
          ;
}