#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailSpawn()
{
    class_< UParticleModuleTrailSpawn, bases< UParticleModuleTrailBase >  , boost::noncopyable>("UParticleModuleTrailSpawn", no_init)
        .def_readwrite("SpawnDistanceMap", &UParticleModuleTrailSpawn::SpawnDistanceMap)
        .def_readwrite("MinSpawnVelocity", &UParticleModuleTrailSpawn::MinSpawnVelocity)
        .def("StaticClass", &UParticleModuleTrailSpawn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}