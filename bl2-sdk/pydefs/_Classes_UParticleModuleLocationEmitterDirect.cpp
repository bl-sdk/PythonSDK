#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationEmitterDirect(py::module &m)
{
    py::class_< UParticleModuleLocationEmitterDirect,  UParticleModuleLocationBase   >(m, "UParticleModuleLocationEmitterDirect")
		.def_static("StaticClass", &UParticleModuleLocationEmitterDirect::StaticClass, py::return_value_policy::reference)
        .def_readwrite("EmitterName", &UParticleModuleLocationEmitterDirect::EmitterName)
          ;
}