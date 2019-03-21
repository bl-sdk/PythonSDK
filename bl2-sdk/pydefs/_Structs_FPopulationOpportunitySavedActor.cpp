#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPopulationOpportunitySavedActor()
{
    class_< FPopulationOpportunitySavedActor >("FPopulationOpportunitySavedActor", no_init)
        .def_readwrite("FactoryPath", &FPopulationOpportunitySavedActor::FactoryPath)
        .def_readwrite("TimeActorSaved", &FPopulationOpportunitySavedActor::TimeActorSaved)
        .def_readwrite("SpawnActorLocation", &FPopulationOpportunitySavedActor::SpawnActorLocation)
        .def_readwrite("SpawnActorRotation", &FPopulationOpportunitySavedActor::SpawnActorRotation)
        .def_readwrite("CreationFlags", &FPopulationOpportunitySavedActor::CreationFlags)
        .def_readwrite("CustomActorData", &FPopulationOpportunitySavedActor::CustomActorData)
  ;
}