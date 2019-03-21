#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationBase()
{
    py::class_< UParticleModuleLocationBase,  UParticleModule   >("UParticleModuleLocationBase")
        .def("StaticClass", &UParticleModuleLocationBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}