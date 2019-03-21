#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleRotationOverLifetime()
{
    py::class_< UParticleModuleRotationOverLifetime,  UParticleModuleRotationBase   >("UParticleModuleRotationOverLifetime")
        .def_readwrite("RotationOverLife", &UParticleModuleRotationOverLifetime::RotationOverLife)
        .def("StaticClass", &UParticleModuleRotationOverLifetime::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}