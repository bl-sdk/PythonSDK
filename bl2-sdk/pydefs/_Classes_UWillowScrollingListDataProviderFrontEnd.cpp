#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderFrontEnd()
{
    py::class_< UWillowScrollingListDataProviderFrontEnd,  UWillowScrollingListDataProviderBase   >("UWillowScrollingListDataProviderFrontEnd")
        .def("StaticClass", &UWillowScrollingListDataProviderFrontEnd::StaticClass, py::return_value_policy::reference)
        .def("GetSubmenuForEvent", &UWillowScrollingListDataProviderFrontEnd::GetSubmenuForEvent, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderFrontEnd::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderFrontEnd::HandleClick)
        .staticmethod("StaticClass")
  ;
}