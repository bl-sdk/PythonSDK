#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLockOnProfile(py::object m)
{
    py::class_< FLockOnProfile >(m, "FLockOnProfile")
        .def_readwrite("Target", &FLockOnProfile::Target)
        .def_readwrite("Intersection", &FLockOnProfile::Intersection)
        .def_readwrite("MagneticCenterToIntersect", &FLockOnProfile::MagneticCenterToIntersect)
  ;
}