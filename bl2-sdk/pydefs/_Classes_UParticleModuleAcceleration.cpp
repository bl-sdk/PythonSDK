#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleAcceleration()
{
    py::class_< UParticleModuleAcceleration,  UParticleModule   >("UParticleModuleAcceleration")
        .def_readwrite("Acceleration", &UParticleModuleAcceleration::Acceleration)
        .def("StaticClass", &UParticleModuleAcceleration::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}