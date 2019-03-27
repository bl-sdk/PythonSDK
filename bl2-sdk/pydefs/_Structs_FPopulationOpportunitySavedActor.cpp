#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPopulationOpportunitySavedActor(py::module &m)
{
    py::class_< FPopulationOpportunitySavedActor >(m, "FPopulationOpportunitySavedActor")
        .def_readwrite("FactoryPath", &FPopulationOpportunitySavedActor::FactoryPath)
        .def_readwrite("TimeActorSaved", &FPopulationOpportunitySavedActor::TimeActorSaved)
        .def_readwrite("SpawnActorLocation", &FPopulationOpportunitySavedActor::SpawnActorLocation)
        .def_readwrite("SpawnActorRotation", &FPopulationOpportunitySavedActor::SpawnActorRotation)
        .def_readwrite("CreationFlags", &FPopulationOpportunitySavedActor::CreationFlags)
        .def_readwrite("CustomActorData", &FPopulationOpportunitySavedActor::CustomActorData)
  ;
}