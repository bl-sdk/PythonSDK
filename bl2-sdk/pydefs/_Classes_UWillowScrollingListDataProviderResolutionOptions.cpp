#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderResolutionOptions(py::module &m)
{
    py::class_< UWillowScrollingListDataProviderResolutionOptions,  UWillowScrollingListDataProviderApplyRequiredOption   >(m, "UWillowScrollingListDataProviderResolutionOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderResolutionOptions::StaticClass, py::return_value_policy::reference)
        .def("HandleClick", &UWillowScrollingListDataProviderResolutionOptions::HandleClick)
          ;
}