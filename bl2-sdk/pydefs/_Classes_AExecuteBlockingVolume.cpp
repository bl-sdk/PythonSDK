#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AExecuteBlockingVolume()
{
    py::class_< AExecuteBlockingVolume,  ABlockingVolume   >("AExecuteBlockingVolume")
        .def("StaticClass", &AExecuteBlockingVolume::StaticClass, py::return_value_policy::reference)
        .def("StopsProjectile", &AExecuteBlockingVolume::StopsProjectile)
        .staticmethod("StaticClass")
  ;
}