#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLockOnProfile()
{
    py::class_< FLockOnProfile >("FLockOnProfile")
        .def_readwrite("Target", &FLockOnProfile::Target)
        .def_readonly("UnknownData00", &FLockOnProfile::UnknownData00)
        .def_readwrite("Intersection", &FLockOnProfile::Intersection)
        .def_readwrite("MagneticCenterToIntersect", &FLockOnProfile::MagneticCenterToIntersect)
  ;
}