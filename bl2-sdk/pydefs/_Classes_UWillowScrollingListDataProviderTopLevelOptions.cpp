#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderTopLevelOptions()
{
    py::class_< UWillowScrollingListDataProviderTopLevelOptions,  UWillowScrollingListDataProviderBase   >("UWillowScrollingListDataProviderTopLevelOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderTopLevelOptions::StaticClass, py::return_value_policy::reference)
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderTopLevelOptions::GetSubmenuForEvent, py::return_value_policy::reference)
        .def("HandleClick", &UWillowScrollingListDataProviderTopLevelOptions::HandleClick)
        .def("IsPCGamepadConnected", &UWillowScrollingListDataProviderTopLevelOptions::IsPCGamepadConnected)
        .def("CanShowStorageSelector", &UWillowScrollingListDataProviderTopLevelOptions::CanShowStorageSelector)
        .def("Populate", &UWillowScrollingListDataProviderTopLevelOptions::Populate)
        .staticmethod("StaticClass")
  ;
}