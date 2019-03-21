#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSpawnedPopulationActor()
{
    class_< FSpawnedPopulationActor >("FSpawnedPopulationActor", no_init)
        .def_readwrite("SpawnedActor", &FSpawnedPopulationActor::SpawnedActor)
        .def_readwrite("SpawnFactory", &FSpawnedPopulationActor::SpawnFactory)
        .def_readwrite("FactoryDestructionParams", &FSpawnedPopulationActor::FactoryDestructionParams)
        .def_readwrite("flLastInRadiusOrVisible", &FSpawnedPopulationActor::flLastInRadiusOrVisible)
        .def_readwrite("SpawnCost", &FSpawnedPopulationActor::SpawnCost)
        .def_readwrite("CreationFlags", &FSpawnedPopulationActor::CreationFlags)
  ;
}