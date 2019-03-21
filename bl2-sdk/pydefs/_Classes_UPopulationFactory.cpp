#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactory()
{
    class_< UPopulationFactory, bases< UObject >  , boost::noncopyable>("UPopulationFactory", no_init)
        .def_readwrite("VfTable_IIConstructObject", &UPopulationFactory::VfTable_IIConstructObject)
        .def_readwrite("OnActorSpawn", &UPopulationFactory::OnActorSpawn)
        .def_readwrite("DestructionParams", &UPopulationFactory::DestructionParams)
        .def_readwrite("SpawnCostOverride", &UPopulationFactory::SpawnCostOverride)
        .def("StaticClass", &UPopulationFactory::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactory::eventGetDescriptionOfFactoryOutput)
        .def("eventShouldSavePopulationActor", &UPopulationFactory::eventShouldSavePopulationActor)
        .def("eventDestroyPopulationActor", &UPopulationFactory::eventDestroyPopulationActor)
        .def("eventCreatePopulationActor", &UPopulationFactory::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactory::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactory::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .def("eventGetActorSpawnCost", &UPopulationFactory::eventGetActorSpawnCost)
        .def("eventOnSpawnActor", &UPopulationFactory::eventOnSpawnActor)
        .def("eventSetupMatineeForActor", &UPopulationFactory::eventSetupMatineeForActor)
        .def("GetSpawnFactory", &UPopulationFactory::GetSpawnFactory, return_value_policy< reference_existing_object >())
        .def("GetSpawnProbabilityAtThisGameStage", &UPopulationFactory::GetSpawnProbabilityAtThisGameStage)
        .def("IsFactoryWithin", &UPopulationFactory::IsFactoryWithin)
        .def("CanSpawn", &UPopulationFactory::CanSpawn)
        .staticmethod("StaticClass")
  ;
}