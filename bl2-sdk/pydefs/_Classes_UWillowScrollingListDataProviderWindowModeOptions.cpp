#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderWindowModeOptions()
{
    py::class_< UWillowScrollingListDataProviderWindowModeOptions,  UWillowScrollingListDataProviderApplyRequiredOption   >("UWillowScrollingListDataProviderWindowModeOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderWindowModeOptions::StaticClass, py::return_value_policy::reference)
        .def("HandleClick", &UWillowScrollingListDataProviderWindowModeOptions::HandleClick)
        .staticmethod("StaticClass")
  ;
}