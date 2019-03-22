#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AGravityVolume(py::module &m)
{
    py::class_< AGravityVolume,  APhysicsVolume   >(m, "AGravityVolume")
        .def_readwrite("GravityZ", &AGravityVolume::GravityZ)
          ;
}