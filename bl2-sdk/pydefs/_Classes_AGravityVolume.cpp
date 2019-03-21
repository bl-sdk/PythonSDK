#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGravityVolume()
{
    py::class_< AGravityVolume,  APhysicsVolume   >("AGravityVolume")
        .def_readwrite("GravityZ", &AGravityVolume::GravityZ)
        .def("StaticClass", &AGravityVolume::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}