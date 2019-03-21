#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInGameAdManager()
{
    class_< UInGameAdManager, bases< UObject >  , boost::noncopyable>("UInGameAdManager", no_init)
        .def_readwrite("ClickedBannerDelegates", &UInGameAdManager::ClickedBannerDelegates)
        .def_readwrite("ClosedAdDelegates", &UInGameAdManager::ClosedAdDelegates)
        .def("StaticClass", &UInGameAdManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("ClearClosedAdDelegate", &UInGameAdManager::ClearClosedAdDelegate)
        .def("AddClosedAdDelegate", &UInGameAdManager::AddClosedAdDelegate)
        .def("OnUserClosedAdvertisement", &UInGameAdManager::OnUserClosedAdvertisement)
        .def("ClearClickedBannerDelegate", &UInGameAdManager::ClearClickedBannerDelegate)
        .def("AddClickedBannerDelegate", &UInGameAdManager::AddClickedBannerDelegate)
        .def("OnUserClickedBanner", &UInGameAdManager::OnUserClickedBanner)
        .def("SetPauseWhileAdOpen", &UInGameAdManager::SetPauseWhileAdOpen)
        .def("ForceCloseAd", &UInGameAdManager::ForceCloseAd)
        .def("HideBanner", &UInGameAdManager::HideBanner)
        .def("ShowBanner", &UInGameAdManager::ShowBanner)
        .def("eventInit", &UInGameAdManager::eventInit)
        .staticmethod("StaticClass")
  ;
}