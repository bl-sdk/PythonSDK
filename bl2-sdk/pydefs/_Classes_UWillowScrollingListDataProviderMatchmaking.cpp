#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderMatchmaking(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderMatchmaking,  UWillowScrollingListDataProviderBase   >(m, "UWillowScrollingListDataProviderMatchmaking")
		.def_static("StaticClass", &UWillowScrollingListDataProviderMatchmaking::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderMatchmaking::Populate)
        .def("HandleClick", &UWillowScrollingListDataProviderMatchmaking::HandleClick)
          ;
}