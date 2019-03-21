#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderVideoOptions()
{
    class_< UWillowScrollingListDataProviderVideoOptions, bases< UWillowScrollingListDataProviderOptionsBase >  , boost::noncopyable>("UWillowScrollingListDataProviderVideoOptions", no_init)
        .def_readwrite("ScaleGuide", &UWillowScrollingListDataProviderVideoOptions::ScaleGuide)
        .def("StaticClass", &UWillowScrollingListDataProviderVideoOptions::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderVideoOptions::GetSubmenuForEvent, return_value_policy< reference_existing_object >())
        .def("HideGuide", &UWillowScrollingListDataProviderVideoOptions::HideGuide)
        .def("ShowGuide", &UWillowScrollingListDataProviderVideoOptions::ShowGuide)
        .def("UpdateRealtimeSetting", &UWillowScrollingListDataProviderVideoOptions::UpdateRealtimeSetting)
        .def("Cleanup", &UWillowScrollingListDataProviderVideoOptions::Cleanup)
        .def("OnPop", &UWillowScrollingListDataProviderVideoOptions::OnPop)
        .def("HandleSelectionRollover", &UWillowScrollingListDataProviderVideoOptions::HandleSelectionRollover)
        .def("HandleSelectionChange", &UWillowScrollingListDataProviderVideoOptions::HandleSelectionChange)
        .def("Populate", &UWillowScrollingListDataProviderVideoOptions::Populate)
        .staticmethod("StaticClass")
  ;
}