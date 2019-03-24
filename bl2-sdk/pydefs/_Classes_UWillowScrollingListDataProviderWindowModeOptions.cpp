#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderWindowModeOptions(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderWindowModeOptions,  UWillowScrollingListDataProviderApplyRequiredOption   >(m, "UWillowScrollingListDataProviderWindowModeOptions")
		.def_static("StaticClass", &UWillowScrollingListDataProviderWindowModeOptions::StaticClass, py::return_value_policy::reference)
        .def("HandleClick", &UWillowScrollingListDataProviderWindowModeOptions::HandleClick)
          ;
}