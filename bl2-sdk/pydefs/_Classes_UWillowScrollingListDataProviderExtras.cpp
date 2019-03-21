#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderExtras()
{
    py::class_< UWillowScrollingListDataProviderExtras,  UWillowScrollingListDataProviderBase   >("UWillowScrollingListDataProviderExtras")
        .def("StaticClass", &UWillowScrollingListDataProviderExtras::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderExtras::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderExtras::HandleClick)
        .staticmethod("StaticClass")
  ;
}