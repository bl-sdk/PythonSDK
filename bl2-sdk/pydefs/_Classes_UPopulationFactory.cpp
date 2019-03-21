#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactory()
{
    py::class_< UPopulationFactory,  UObject   >("UPopulationFactory")
        .def_readwrite("VfTable_IIConstructObject", &UPopulationFactory::VfTable_IIConstructObject)
        .def_readwrite("OnActorSpawn", &UPopulationFactory::OnActorSpawn)
        .def_readwrite("DestructionParams", &UPopulationFactory::DestructionParams)
        .def_readwrite("SpawnCostOverride", &UPopulationFactory::SpawnCostOverride)
        .def("StaticClass", &UPopulationFactory::StaticClass, py::return_value_policy::reference)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactory::eventGetDescriptionOfFactoryOutput)
        .def("eventShouldSavePopulationActor", &UPopulationFactory::eventShouldSavePopulationActor)
        .def("eventDestroyPopulationActor", &UPopulationFactory::eventDestroyPopulationActor)
        .def("eventCreatePopulationActor", &UPopulationFactory::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactory::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactory::GetActorAllegiance, py::return_value_policy::reference)
        .def("eventGetActorSpawnCost", &UPopulationFactory::eventGetActorSpawnCost)
        .def("eventOnSpawnActor", &UPopulationFactory::eventOnSpawnActor)
        .def("eventSetupMatineeForActor", &UPopulationFactory::eventSetupMatineeForActor)
        .def("GetSpawnFactory", &UPopulationFactory::GetSpawnFactory, py::return_value_policy::reference)
        .def("GetSpawnProbabilityAtThisGameStage", &UPopulationFactory::GetSpawnProbabilityAtThisGameStage)
        .def("IsFactoryWithin", &UPopulationFactory::IsFactoryWithin)
        .def("CanSpawn", &UPopulationFactory::CanSpawn)
        .staticmethod("StaticClass")
  ;
}