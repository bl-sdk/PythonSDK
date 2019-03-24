#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderExtras(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderExtras,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderExtras")
		.def_static("StaticClass", &UWillowScrollingListDataProviderExtras::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderExtras::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderExtras::HandleClick)
          ;
}