#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocity()
{
    py::class_< UParticleModuleVelocity,  UParticleModuleVelocityBase   >("UParticleModuleVelocity")
        .def_readwrite("StartVelocity", &UParticleModuleVelocity::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleVelocity::StartVelocityRadial)
        .def("StaticClass", &UParticleModuleVelocity::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}