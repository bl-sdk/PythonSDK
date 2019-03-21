#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderPause(py::object m)
{
    py::class_< UWillowScrollingListDataProviderPause,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderPause")
        .def("StaticClass", &UWillowScrollingListDataProviderPause::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderPause::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderPause::HandleClick)
          ;
}