#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderTopLevelOptions()
{
    class_< UWillowScrollingListDataProviderTopLevelOptions, bases< UWillowScrollingListDataProviderBase >  , boost::noncopyable>("UWillowScrollingListDataProviderTopLevelOptions", no_init)
        .def("StaticClass", &UWillowScrollingListDataProviderTopLevelOptions::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderTopLevelOptions::GetSubmenuForEvent, return_value_policy< reference_existing_object >())
        .def("HandleClick", &UWillowScrollingListDataProviderTopLevelOptions::HandleClick)
        .def("IsPCGamepadConnected", &UWillowScrollingListDataProviderTopLevelOptions::IsPCGamepadConnected)
        .def("CanShowStorageSelector", &UWillowScrollingListDataProviderTopLevelOptions::CanShowStorageSelector)
        .def("Populate", &UWillowScrollingListDataProviderTopLevelOptions::Populate)
        .staticmethod("StaticClass")
  ;
}