#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailSpawn(py::module &m)
{
    py::class_< UParticleModuleTrailSpawn,  UParticleModuleTrailBase   >(m, "UParticleModuleTrailSpawn")
		.def_static("StaticClass", &UParticleModuleTrailSpawn::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SpawnDistanceMap", &UParticleModuleTrailSpawn::SpawnDistanceMap)
        .def_readwrite("MinSpawnVelocity", &UParticleModuleTrailSpawn::MinSpawnVelocity)
          ;
}