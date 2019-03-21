#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIWillowScrollingListDataProvider()
{
    py::class_< UIWillowScrollingListDataProvider,  UInterface   >("UIWillowScrollingListDataProvider")
        .def("StaticClass", &UIWillowScrollingListDataProvider::StaticClass, py::return_value_policy::reference)
        .def("Cleanup", &UIWillowScrollingListDataProvider::Cleanup)
        .def("GetSubmenuForEvent", &UIWillowScrollingListDataProvider::GetSubmenuForEvent, py::return_value_policy::reference)
        .def("Populate", &UIWillowScrollingListDataProvider::Populate)
        .def("HandleSpinnerChange", &UIWillowScrollingListDataProvider::HandleSpinnerChange)
        .def("HandleSliderChange", &UIWillowScrollingListDataProvider::HandleSliderChange)
        .def("HandleSelectionRollover", &UIWillowScrollingListDataProvider::HandleSelectionRollover)
        .def("HandleSelectionChange", &UIWillowScrollingListDataProvider::HandleSelectionChange)
        .def("HandleClick", &UIWillowScrollingListDataProvider::HandleClick)
        .def("OnPop", &UIWillowScrollingListDataProvider::OnPop)
        .def("OnPush", &UIWillowScrollingListDataProvider::OnPush)
        .def("GetMenuTooltip", &UIWillowScrollingListDataProvider::GetMenuTooltip)
        .def("GetMenuDisplayName", &UIWillowScrollingListDataProvider::GetMenuDisplayName)
        .staticmethod("StaticClass")
  ;
}