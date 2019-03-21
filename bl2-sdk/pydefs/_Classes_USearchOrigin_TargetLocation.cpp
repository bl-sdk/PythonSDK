#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin_TargetLocation()
{
    py::class_< USearchOrigin_TargetLocation,  USearchOrigin   >("USearchOrigin_TargetLocation")
        .def("StaticClass", &USearchOrigin_TargetLocation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}