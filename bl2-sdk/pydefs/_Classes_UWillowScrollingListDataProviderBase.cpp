#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderBase()
{
    class_< UWillowScrollingListDataProviderBase, bases< UObject >  , boost::noncopyable>("UWillowScrollingListDataProviderBase", no_init)
        .def_readwrite("MenuDisplayName", &UWillowScrollingListDataProviderBase::MenuDisplayName)
        .def_readwrite("MenuTooltip", &UWillowScrollingListDataProviderBase::MenuTooltip)
        .def("StaticClass", &UWillowScrollingListDataProviderBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("Cleanup", &UWillowScrollingListDataProviderBase::Cleanup)
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderBase::GetSubmenuForEvent, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}