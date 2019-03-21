#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderGameOptions()
{
    py::class_< UWillowScrollingListDataProviderGameOptions,  UWillowScrollingListDataProviderOptionsBase   >("UWillowScrollingListDataProviderGameOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderGameOptions::StaticClass, py::return_value_policy::reference)
        .def("Populate", &UWillowScrollingListDataProviderGameOptions::Populate)
        .staticmethod("StaticClass")
  ;
}