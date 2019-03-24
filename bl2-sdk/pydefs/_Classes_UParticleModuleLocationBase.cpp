#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleLocationBase(py::module &m)
{
    py::class_< UParticleModuleLocationBase,  UParticleModule   >(m, "UParticleModuleLocationBase")
		.def_static("StaticClass", &UParticleModuleLocationBase::StaticClass, py::return_value_policy::reference)
          ;
}