#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USearchOrigin_CurrentLocation()
{
    py::class_< USearchOrigin_CurrentLocation,  USearchOrigin   >("USearchOrigin_CurrentLocation")
        .def("StaticClass", &USearchOrigin_CurrentLocation::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}