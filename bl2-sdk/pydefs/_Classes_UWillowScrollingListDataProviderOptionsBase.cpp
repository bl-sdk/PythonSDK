#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderOptionsBase()
{
    class_< UWillowScrollingListDataProviderOptionsBase, bases< UObject >  , boost::noncopyable>("UWillowScrollingListDataProviderOptionsBase", no_init)
        .def_readwrite("MyOptionsMovie", &UWillowScrollingListDataProviderOptionsBase::MyOptionsMovie)
        .def_readwrite("RestartSettingInitialValues", &UWillowScrollingListDataProviderOptionsBase::RestartSettingInitialValues)
        .def_readwrite("Descriptions", &UWillowScrollingListDataProviderOptionsBase::Descriptions)
        .def_readwrite("MenuDisplayName", &UWillowScrollingListDataProviderBase::MenuDisplayName)
        .def_readwrite("MenuTooltip", &UWillowScrollingListDataProviderBase::MenuTooltip)
        .def("StaticClass", &UWillowScrollingListDataProviderOptionsBase::StaticClass, return_value_policy< reference_existing_object >())
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
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderBase::GetSubmenuForEvent, return_value_policy< reference_existing_object >())
        .def("HandleInputKey", &UWillowScrollingListDataProviderBase::HandleInputKey)
        .def("HandleClick", &UWillowScrollingListDataProviderBase::HandleClick)
        .def("OnPush", &UWillowScrollingListDataProviderBase::OnPush)
        .def("GetMenuTooltip", &UWillowScrollingListDataProviderBase::GetMenuTooltip)
        .def("GetMenuDisplayName", &UWillowScrollingListDataProviderBase::GetMenuDisplayName)
        .staticmethod("StaticClass")
  ;
}