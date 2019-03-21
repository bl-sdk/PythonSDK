#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIWillowScrollingListDataProvider()
{
    class_< UIWillowScrollingListDataProvider, bases< UInterface >  , boost::noncopyable>("UIWillowScrollingListDataProvider", no_init)
        .def("StaticClass", &UIWillowScrollingListDataProvider::StaticClass, return_value_policy< reference_existing_object >())
        .def("Cleanup", &UIWillowScrollingListDataProvider::Cleanup)
        .def("GetSubmenuForEvent", &UIWillowScrollingListDataProvider::GetSubmenuForEvent, return_value_policy< reference_existing_object >())
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