#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityOverLifetime()
{
    py::class_< UParticleModuleVelocityOverLifetime,  UParticleModule   >("UParticleModuleVelocityOverLifetime")
        .def_readwrite("VelOverLife", &UParticleModuleVelocityOverLifetime::VelOverLife)
        .def("StaticClass", &UParticleModuleVelocityOverLifetime::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}