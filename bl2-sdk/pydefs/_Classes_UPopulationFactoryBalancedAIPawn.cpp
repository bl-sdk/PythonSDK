#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryBalancedAIPawn()
{
    class_< UPopulationFactoryBalancedAIPawn, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryBalancedAIPawn", no_init)
        .def_readwrite("PawnBalanceDefinition", &UPopulationFactoryBalancedAIPawn::PawnBalanceDefinition)
        .def_readwrite("WillowAIPawnArchetype", &UPopulationFactoryWillowAIPawn::WillowAIPawnArchetype)
        .def_readwrite("PawnExpLevel", &UPopulationFactoryWillowAIPawn::PawnExpLevel)
        .def_readwrite("PawnWeaponLevel", &UPopulationFactoryWillowAIPawn::PawnWeaponLevel)
        .def_readwrite("FlagsToSet", &UPopulationFactoryWillowAIPawn::FlagsToSet)
        .def_readwrite("AttributeStartingValues", &UPopulationFactoryWillowAIPawn::AttributeStartingValues)
        .def_readwrite("ItemPoolList", &UPopulationFactoryWillowAIPawn::ItemPoolList)
        .def_readwrite("ItemPoolIncludedLists", &UPopulationFactoryWillowAIPawn::ItemPoolIncludedLists)
        .def("StaticClass", &UPopulationFactoryBalancedAIPawn::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSpawnProbabilityAtThisGameStage", &UPopulationFactoryBalancedAIPawn::GetSpawnProbabilityAtThisGameStage)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryBalancedAIPawn::eventGetDescriptionOfFactoryOutput)
        .def("SpawnAIPawn", &UPopulationFactoryBalancedAIPawn::SpawnAIPawn, return_value_policy< reference_existing_object >())
        .def("eventRestorePopulatedAIPawn", &UPopulationFactoryBalancedAIPawn::eventRestorePopulatedAIPawn, return_value_policy< reference_existing_object >())
        .def("eventCreatePopulationActor", &UPopulationFactoryBalancedAIPawn::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("ApplyAttributeStartingValues", &UPopulationFactoryBalancedAIPawn::ApplyAttributeStartingValues)
        .def("SetupBalancedPopulationActor", &UPopulationFactoryBalancedAIPawn::SetupBalancedPopulationActor)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryBalancedAIPawn::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryBalancedAIPawn::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .def("eventGetActorSpawnCost", &UPopulationFactoryBalancedAIPawn::eventGetActorSpawnCost)
        .def("CanSpawn", &UPopulationFactoryBalancedAIPawn::CanSpawn)
        .def("CreateSavedInventory", &UPopulationFactoryWillowAIPawn::CreateSavedInventory)
        .def("eventGetPopulatedAIPawnMemento", &UPopulationFactoryWillowAIPawn::eventGetPopulatedAIPawnMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryWillowAIPawn::eventShouldSavePopulationActor)
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowAIPawn::eventDestroyPopulationActor)
        .def("SetupPopulationActor", &UPopulationFactoryWillowAIPawn::SetupPopulationActor)
        .def("SetFlagDefinitions", &UPopulationFactoryWillowAIPawn::SetFlagDefinitions)
        .def("ApplyPopulationDefinition", &UPopulationFactoryWillowAIPawn::ApplyPopulationDefinition)
        .def("GetAContextSourceForThePopulationActor", &UPopulationFactoryWillowAIPawn::GetAContextSourceForThePopulationActor, return_value_policy< reference_existing_object >())
        .def("eventSetupMatineeForActor", &UPopulationFactoryWillowAIPawn::eventSetupMatineeForActor)
        .staticmethod("StaticClass")
  ;
}