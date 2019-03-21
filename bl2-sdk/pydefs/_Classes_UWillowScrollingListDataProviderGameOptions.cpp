#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderGameOptions(py::object m)
{
    py::class_< UWillowScrollingListDataProviderGameOptions,  UWillowScrollingListDataProviderOptionsBase   >(m, "UWillowScrollingListDataProviderGameOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderGameOptions::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderGameOptions::Populate)
          ;
}