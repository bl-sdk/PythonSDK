#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderBase(py::object m)
{
    py::class_< UWillowScrollingListDataProviderBase,  UObject   >(m, "UWillowScrollingListDataProviderBase")
        .def_readwrite("MenuDisplayName", &UWillowScrollingListDataProviderBase::MenuDisplayName)
        .def_readwrite("MenuTooltip", &UWillowScrollingListDataProviderBase::MenuTooltip)
        .def("StaticClass", &UWillowScrollingListDataProviderBase::StaticClass, py::return_value_policy::reference)
        .def("Cleanup", &UWillowScrollingListDataProviderBase::Cleanup)
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderBase::GetSubmenuForEvent, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderBase::Populate)
        .def("HandleSpinnerChange", &UWillowScrollingListDataProviderBase::HandleSpinnerChange)
        .def("HandleSliderChange", &UWillowScrollingListDataProviderBase::HandleSliderChange)
        .def("HandleSelectionRollover", &UWillowScrollingListDataProviderBase::HandleSelectionRollover)
        .def("HandleSelectionChange", &UWillowScrollingListDataProviderBase::HandleSelectionChange)
        .def("HandleInputKey", &UWillowScrollingListDataProviderBase::HandleInputKey)
        .def("HandleClick", &UWillowScrollingListDataProviderBase::HandleClick)
        .def("OnPop", &UWillowScrollingListDataProviderBase::OnPop)
        .def("OnPush", &UWillowScrollingListDataProviderBase::OnPush)
        .def("GetMenuTooltip", &UWillowScrollingListDataProviderBase::GetMenuTooltip)
        .def("GetMenuDisplayName", &UWillowScrollingListDataProviderBase::GetMenuDisplayName)
          ;
}