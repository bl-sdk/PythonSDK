#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderMatchmaking()
{
    py::class_< UWillowScrollingListDataProviderMatchmaking,  UWillowScrollingListDataProviderBase   >("UWillowScrollingListDataProviderMatchmaking")
        .def("StaticClass", &UWillowScrollingListDataProviderMatchmaking::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderMatchmaking::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderMatchmaking::HandleClick)
        .staticmethod("StaticClass")
  ;
}