#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryBalancedAIPawn(py::object m)
{
    py::class_< UPopulationFactoryBalancedAIPawn,  UPopulationFactory   >(m, "UPopulationFactoryBalancedAIPawn")
        .def_readwrite("PawnBalanceDefinition", &UPopulationFactoryBalancedAIPawn::PawnBalanceDefinition)
        .def_readwrite("WillowAIPawnArchetype", &UPopulationFactoryWillowAIPawn::WillowAIPawnArchetype)
        .def_readwrite("PawnExpLevel", &UPopulationFactoryWillowAIPawn::PawnExpLevel)
        .def_readwrite("PawnWeaponLevel", &UPopulationFactoryWillowAIPawn::PawnWeaponLevel)
        .def_readwrite("FlagsToSet", &UPopulationFactoryWillowAIPawn::FlagsToSet)
        .def_readwrite("AttributeStartingValues", &UPopulationFactoryWillowAIPawn::AttributeStartingValues)
        .def_readwrite("ItemPoolList", &UPopulationFactoryWillowAIPawn::ItemPoolList)
        .def_readwrite("ItemPoolIncludedLists", &UPopulationFactoryWillowAIPawn::ItemPoolIncludedLists)
        .def("StaticClass", &UPopulationFactoryBalancedAIPawn::StaticClass, py::return_value_policy::reference)
        .def("GetSpawnProbabilityAtThisGameStage", &UPopulationFactoryBalancedAIPawn::GetSpawnProbabilityAtThisGameStage)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryBalancedAIPawn::eventGetDescriptionOfFactoryOutput)
        .def("SpawnAIPawn", &UPopulationFactoryBalancedAIPawn::SpawnAIPawn, py::return_value_policy::reference)
        .def("eventRestorePopulatedAIPawn", &UPopulationFactoryBalancedAIPawn::eventRestorePopulatedAIPawn, py::return_value_policy::reference)
        .def("eventCreatePopulationActor", &UPopulationFactoryBalancedAIPawn::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("ApplyAttributeStartingValues", &UPopulationFactoryBalancedAIPawn::ApplyAttributeStartingValues)
        .def("SetupBalancedPopulationActor", &UPopulationFactoryBalancedAIPawn::SetupBalancedPopulationActor)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryBalancedAIPawn::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryBalancedAIPawn::GetActorAllegiance, py::return_value_policy::reference)
        .def("eventGetActorSpawnCost", &UPopulationFactoryBalancedAIPawn::eventGetActorSpawnCost)
        .def("CanSpawn", &UPopulationFactoryBalancedAIPawn::CanSpawn)
        .def("CreateSavedInventory", &UPopulationFactoryWillowAIPawn::CreateSavedInventory)
        .def("eventGetPopulatedAIPawnMemento", &UPopulationFactoryWillowAIPawn::eventGetPopulatedAIPawnMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryWillowAIPawn::eventShouldSavePopulationActor)
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowAIPawn::eventDestroyPopulationActor)
        .def("SetupPopulationActor", &UPopulationFactoryWillowAIPawn::SetupPopulationActor)
        .def("SetFlagDefinitions", &UPopulationFactoryWillowAIPawn::SetFlagDefinitions)
        .def("ApplyPopulationDefinition", &UPopulationFactoryWillowAIPawn::ApplyPopulationDefinition)
        .def("GetAContextSourceForThePopulationActor", &UPopulationFactoryWillowAIPawn::GetAContextSourceForThePopulationActor, py::return_value_policy::reference)
        .def("eventSetupMatineeForActor", &UPopulationFactoryWillowAIPawn::eventSetupMatineeForActor)
          ;
}