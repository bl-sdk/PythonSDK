#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowScrollingListDataProviderResolutionOptions()
{
    py::class_< UWillowScrollingListDataProviderResolutionOptions,  UWillowScrollingListDataProviderApplyRequiredOption   >("UWillowScrollingListDataProviderResolutionOptions")
        .def("StaticClass", &UWillowScrollingListDataProviderResolutionOptions::StaticClass, py::return_value_policy::reference)
        .def("HandleClick", &UWillowScrollingListDataProviderResolutionOptions::HandleClick)
        .staticmethod("StaticClass")
  ;
}