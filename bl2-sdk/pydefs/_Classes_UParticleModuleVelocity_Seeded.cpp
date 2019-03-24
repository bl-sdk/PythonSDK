#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleVelocity_Seeded(py::module &m)
{
    py::class_< UParticleModuleVelocity_Seeded,  UParticleModuleVelocityBase   >(m, "UParticleModuleVelocity_Seeded")
		.def_static("StaticClass", &UParticleModuleVelocity_Seeded::StaticClass, py::return_value_policy::reference)
        .def_readwrite("RandomSeedInfo", &UParticleModuleVelocity_Seeded::RandomSeedInfo)
        .def_readwrite("StartVelocity", &UParticleModuleVelocity::StartVelocity)
        .def_readwrite("StartVelocityRadial", &UParticleModuleVelocity::StartVelocityRadial)
          ;
}