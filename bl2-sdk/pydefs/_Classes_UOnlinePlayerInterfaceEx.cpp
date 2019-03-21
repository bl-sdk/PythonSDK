#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOnlinePlayerInterfaceEx()
{
    class_< UOnlinePlayerInterfaceEx, bases< UInterface >  , boost::noncopyable>("UOnlinePlayerInterfaceEx", no_init)
        .def("StaticClass", &UOnlinePlayerInterfaceEx::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShowRedeemCodeUI", &UOnlinePlayerInterfaceEx::ShowRedeemCodeUI)
        .def("ClearUnlockAvatarAwardCompleteDelegate", &UOnlinePlayerInterfaceEx::ClearUnlockAvatarAwardCompleteDelegate)
        .def("AddUnlockAvatarAwardCompleteDelegate", &UOnlinePlayerInterfaceEx::AddUnlockAvatarAwardCompleteDelegate)
        .def("OnUnlockAvatarAwardComplete", &UOnlinePlayerInterfaceEx::OnUnlockAvatarAwardComplete)
        .def("ShowCustomMessageUI", &UOnlinePlayerInterfaceEx::ShowCustomMessageUI)
        .def("ClearCrossTitleProfileSettings", &UOnlinePlayerInterfaceEx::ClearCrossTitleProfileSettings)
        .def("GetCrossTitleProfileSettings", &UOnlinePlayerInterfaceEx::GetCrossTitleProfileSettings, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}