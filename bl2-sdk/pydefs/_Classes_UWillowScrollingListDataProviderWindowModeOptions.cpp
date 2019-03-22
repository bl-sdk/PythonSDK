#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderWindowModeOptions(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderWindowModeOptions,  UWillowScrollingListDataProviderApplyRequiredOption   >(m, "UWillowScrollingListDataProviderWindowModeOptions")
        .def("HandleClick", &UWillowScrollingListDataProviderWindowModeOptions::HandleClick)
          ;
}