#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowAIPawn(py::module &m)
{
    py::class_< UPopulationFactoryWillowAIPawn,  UPopulationFactory   >(m, "UPopulationFactoryWillowAIPawn")
        .def_readwrite("WillowAIPawnArchetype", &UPopulationFactoryWillowAIPawn::WillowAIPawnArchetype)
        .def_readwrite("PawnExpLevel", &UPopulationFactoryWillowAIPawn::PawnExpLevel)
        .def_readwrite("PawnWeaponLevel", &UPopulationFactoryWillowAIPawn::PawnWeaponLevel)
        .def_readwrite("FlagsToSet", &UPopulationFactoryWillowAIPawn::FlagsToSet)
        .def_readwrite("AttributeStartingValues", &UPopulationFactoryWillowAIPawn::AttributeStartingValues)
        .def_readwrite("ItemPoolList", &UPopulationFactoryWillowAIPawn::ItemPoolList)
        .def_readwrite("ItemPoolIncludedLists", &UPopulationFactoryWillowAIPawn::ItemPoolIncludedLists)
        .def("StaticClass", &UPopulationFactoryWillowAIPawn::StaticClass, py::return_value_policy::reference)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryWillowAIPawn::eventGetDescriptionOfFactoryOutput)
        .def("eventRestorePopulatedAIPawn", &UPopulationFactoryWillowAIPawn::eventRestorePopulatedAIPawn, py::return_value_policy::reference)
        .def("CreateSavedInventory", &UPopulationFactoryWillowAIPawn::CreateSavedInventory)
        .def("eventGetPopulatedAIPawnMemento", &UPopulationFactoryWillowAIPawn::eventGetPopulatedAIPawnMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryWillowAIPawn::eventShouldSavePopulationActor)
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowAIPawn::eventDestroyPopulationActor)
        .def("eventCreatePopulationActor", &UPopulationFactoryWillowAIPawn::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("SetupPopulationActor", &UPopulationFactoryWillowAIPawn::SetupPopulationActor)
        .def("SetFlagDefinitions", &UPopulationFactoryWillowAIPawn::SetFlagDefinitions)
        .def("ApplyPopulationDefinition", &UPopulationFactoryWillowAIPawn::ApplyPopulationDefinition)
        .def("GetAContextSourceForThePopulationActor", &UPopulationFactoryWillowAIPawn::GetAContextSourceForThePopulationActor, py::return_value_policy::reference)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryWillowAIPawn::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryWillowAIPawn::GetActorAllegiance, py::return_value_policy::reference)
        .def("eventGetActorSpawnCost", &UPopulationFactoryWillowAIPawn::eventGetActorSpawnCost)
        .def("eventSetupMatineeForActor", &UPopulationFactoryWillowAIPawn::eventSetupMatineeForActor)
          ;
}