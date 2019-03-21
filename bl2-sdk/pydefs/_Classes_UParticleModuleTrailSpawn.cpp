#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailSpawn()
{
    py::class_< UParticleModuleTrailSpawn,  UParticleModuleTrailBase   >("UParticleModuleTrailSpawn")
        .def_readwrite("SpawnDistanceMap", &UParticleModuleTrailSpawn::SpawnDistanceMap)
        .def_readwrite("MinSpawnVelocity", &UParticleModuleTrailSpawn::MinSpawnVelocity)
        .def("StaticClass", &UParticleModuleTrailSpawn::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}