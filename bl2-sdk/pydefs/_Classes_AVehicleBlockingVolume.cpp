#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicleBlockingVolume()
{
    py::class_< AVehicleBlockingVolume,  ABlockingVolume   >("AVehicleBlockingVolume")
        .def("StaticClass", &AVehicleBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &AVehicleBlockingVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}