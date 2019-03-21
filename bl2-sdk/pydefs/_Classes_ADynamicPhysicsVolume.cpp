#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ADynamicPhysicsVolume()
{
    py::class_< ADynamicPhysicsVolume,  APhysicsVolume   >("ADynamicPhysicsVolume")
        .def("StaticClass", &ADynamicPhysicsVolume::StaticClass, py::return_value_policy::reference)
        .def("eventPostBeginPlay", &ADynamicPhysicsVolume::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}