#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSpawnedPopulationActor()
{
    py::class_< FSpawnedPopulationActor >("FSpawnedPopulationActor")
        .def_readwrite("SpawnedActor", &FSpawnedPopulationActor::SpawnedActor)
        .def_readwrite("SpawnFactory", &FSpawnedPopulationActor::SpawnFactory)
        .def_readwrite("FactoryDestructionParams", &FSpawnedPopulationActor::FactoryDestructionParams)
        .def_readwrite("flLastInRadiusOrVisible", &FSpawnedPopulationActor::flLastInRadiusOrVisible)
        .def_readwrite("SpawnCost", &FSpawnedPopulationActor::SpawnCost)
        .def_readwrite("CreationFlags", &FSpawnedPopulationActor::CreationFlags)
  ;
}