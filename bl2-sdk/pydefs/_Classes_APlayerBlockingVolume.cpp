#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_APlayerBlockingVolume()
{
    py::class_< APlayerBlockingVolume,  ABlockingVolume   >("APlayerBlockingVolume")
        .def("StaticClass", &APlayerBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &APlayerBlockingVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}