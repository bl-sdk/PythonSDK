#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ASimpleVolume()
{
    py::class_< ASimpleVolume,  AVolume   >("ASimpleVolume")
        .def("StaticClass", &ASimpleVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &ASimpleVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}