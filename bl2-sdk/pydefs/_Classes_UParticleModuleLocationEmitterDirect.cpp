#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationEmitterDirect()
{
    py::class_< UParticleModuleLocationEmitterDirect,  UParticleModuleLocationBase   >("UParticleModuleLocationEmitterDirect")
        .def_readwrite("EmitterName", &UParticleModuleLocationEmitterDirect::EmitterName)
        .def("StaticClass", &UParticleModuleLocationEmitterDirect::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}