#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLockOnProfile()
{
    class_< FLockOnProfile >("FLockOnProfile", no_init)
        .def_readwrite("Target", &FLockOnProfile::Target)
        .def_readonly("UnknownData00", &FLockOnProfile::UnknownData00)
        .def_readwrite("Intersection", &FLockOnProfile::Intersection)
        .def_readwrite("MagneticCenterToIntersect", &FLockOnProfile::MagneticCenterToIntersect)
  ;
}