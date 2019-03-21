#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderWindowModeOptions(py::object m)
{
    py::class_< UWillowScrollingListDataProviderWindowModeOptions,  UWillowScrollingListDataProviderApplyRequiredOption   >(m, "UWillowScrollingListDataProviderWindowModeOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderWindowModeOptions::StaticClass, py::return_value_policy::reference)
        .def("HandleClick", &UWillowScrollingListDataProviderWindowModeOptions::HandleClick)
          ;
}