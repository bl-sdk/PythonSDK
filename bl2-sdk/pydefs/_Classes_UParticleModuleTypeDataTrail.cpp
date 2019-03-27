#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTypeDataTrail(py::module &m)
{
    py::class_< UParticleModuleTypeDataTrail,  UParticleModuleTypeDataBase   >(m, "UParticleModuleTypeDataTrail")
		.def_static("StaticClass", &UParticleModuleTypeDataTrail::StaticClass, py::return_value_policy::reference)
        .def_readwrite("TessellationFactor", &UParticleModuleTypeDataTrail::TessellationFactor)
        .def_readwrite("Tension", &UParticleModuleTypeDataTrail::Tension)
        .def_readwrite("SpawnDistance", &UParticleModuleTypeDataTrail::SpawnDistance)
          ;
}