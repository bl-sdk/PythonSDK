#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocityBase()
{
    py::class_< UParticleModuleVelocityBase,  UParticleModule   >("UParticleModuleVelocityBase")
        .def("StaticClass", &UParticleModuleVelocityBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}