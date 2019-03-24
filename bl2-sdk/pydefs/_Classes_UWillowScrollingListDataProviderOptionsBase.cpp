#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderOptionsBase(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderOptionsBase,  UObject   >(m, "UWillowScrollingListDataProviderOptionsBase")
		.def_static("StaticClass", &UWillowScrollingListDataProviderOptionsBase::StaticClass, py::return_value_policy::reference)
        .def_readwrite("MyOptionsMovie", &UWillowScrollingListDataProviderOptionsBase::MyOptionsMovie)
        .def_readwrite("RestartSettingInitialValues", &UWillowScrollingListDataProviderOptionsBase::RestartSettingInitialValues)
        .def_readwrite("Descriptions", &UWillowScrollingListDataProviderOptionsBase::Descriptions)
        .def_readwrite("MenuDisplayName", &UWillowScrollingListDataProviderBase::MenuDisplayName)
        .def_readwrite("MenuTooltip", &UWillowScrollingListDataProviderBase::MenuTooltip)
        .def("Cleanup", &UWillowScrollingListDataProviderOptionsBase::Cleanup)
        .def("OnPop", &UWillowScrollingListDataProviderOptionsBase::OnPop)
        .def("UpdateRealtimeSetting", &UWillowScrollingListDataProviderOptionsBase::UpdateRealtimeSetting)
        .def("HandleSpinnerChange", &UWillowScrollingListDataProviderOptionsBase::HandleSpinnerChange)
        .def("HandleSliderChange", &UWillowScrollingListDataProviderOptionsBase::HandleSliderChange)
        .def("HandleSelectionRollover", &UWillowScrollingListDataProviderOptionsBase::HandleSelectionRollover)
        .def("HandleSelectionChange", &UWillowScrollingListDataProviderOptionsBase::HandleSelectionChange)
        .def("UpdateDescriptionText", &UWillowScrollingListDataProviderOptionsBase::UpdateDescriptionText)
        .def("Populate", &UWillowScrollingListDataProviderOptionsBase::Populate)
        .def("GetDescription", &UWillowScrollingListDataProviderOptionsBase::GetDescription)
        .def("ClearDescriptions", &UWillowScrollingListDataProviderOptionsBase::ClearDescriptions)
        .def("AddDescription", &UWillowScrollingListDataProviderOptionsBase::AddDescription)
        .def("AddSystemSettingListItem", &UWillowScrollingListDataProviderOptionsBase::AddSystemSettingListItem)
        .def("AddProfileSettingListItem", &UWillowScrollingListDataProviderOptionsBase::AddProfileSettingListItem)
        .def("FindProfileData", &UWillowScrollingListDataProviderOptionsBase::FindProfileData)
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderBase::GetSubmenuForEvent, py::return_value_policy::reference)
        .def("HandleInputKey", &UWillowScrollingListDataProviderBase::HandleInputKey)
        .def("HandleClick", &UWillowScrollingListDataProviderBase::HandleClick)
        .def("OnPush", &UWillowScrollingListDataProviderBase::OnPush)
        .def("GetMenuTooltip", &UWillowScrollingListDataProviderBase::GetMenuTooltip)
        .def("GetMenuDisplayName", &UWillowScrollingListDataProviderBase::GetMenuDisplayName)
          ;
}