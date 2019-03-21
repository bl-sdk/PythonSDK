#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleOrbitBase()
{
    py::class_< UParticleModuleOrbitBase,  UParticleModule   >("UParticleModuleOrbitBase")
        .def("StaticClass", &UParticleModuleOrbitBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}