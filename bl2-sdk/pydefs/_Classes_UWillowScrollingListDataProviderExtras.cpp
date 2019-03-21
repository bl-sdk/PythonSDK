#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderExtras(py::object m)
{
    py::class_< UWillowScrollingListDataProviderExtras,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderExtras")
        .def("StaticClass", &UWillowScrollingListDataProviderExtras::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderExtras::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderExtras::HandleClick)
          ;
}