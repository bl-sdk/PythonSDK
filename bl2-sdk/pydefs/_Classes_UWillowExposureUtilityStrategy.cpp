#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowExposureUtilityStrategy(py::object m)
{
    py::class_< UWillowExposureUtilityStrategy,  UExposureUtilityStrategy   >(m, "UWillowExposureUtilityStrategy")
        .def("StaticClass", &UWillowExposureUtilityStrategy::StaticClass, py::return_value_policy::reference)
          ;
}