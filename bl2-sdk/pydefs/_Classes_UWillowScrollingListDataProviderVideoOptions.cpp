#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderVideoOptions(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderVideoOptions,  UWillowScrollingListDataProviderOptionsBase   >(m, "UWillowScrollingListDataProviderVideoOptions")
		.def_static("StaticClass", &UWillowScrollingListDataProviderVideoOptions::StaticClass, py::return_value_policy::reference)
        .def_readwrite("ScaleGuide", &UWillowScrollingListDataProviderVideoOptions::ScaleGuide)
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderVideoOptions::GetSubmenuForEvent, py::return_value_policy::reference)
        .def("HideGuide", &UWillowScrollingListDataProviderVideoOptions::HideGuide)
        .def("ShowGuide", &UWillowScrollingListDataProviderVideoOptions::ShowGuide)
        .def("UpdateRealtimeSetting", &UWillowScrollingListDataProviderVideoOptions::UpdateRealtimeSetting)
        .def("Cleanup", &UWillowScrollingListDataProviderVideoOptions::Cleanup)
        .def("OnPop", &UWillowScrollingListDataProviderVideoOptions::OnPop)
        .def("HandleSelectionRollover", &UWillowScrollingListDataProviderVideoOptions::HandleSelectionRollover)
        .def("HandleSelectionChange", &UWillowScrollingListDataProviderVideoOptions::HandleSelectionChange)
        .def("Populate", &UWillowScrollingListDataProviderVideoOptions::Populate)
          ;
}