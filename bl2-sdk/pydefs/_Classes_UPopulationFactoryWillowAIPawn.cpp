#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowAIPawn()
{
    class_< UPopulationFactoryWillowAIPawn, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryWillowAIPawn", no_init)
        .def_readwrite("WillowAIPawnArchetype", &UPopulationFactoryWillowAIPawn::WillowAIPawnArchetype)
        .def_readwrite("PawnExpLevel", &UPopulationFactoryWillowAIPawn::PawnExpLevel)
        .def_readwrite("PawnWeaponLevel", &UPopulationFactoryWillowAIPawn::PawnWeaponLevel)
        .def_readwrite("FlagsToSet", &UPopulationFactoryWillowAIPawn::FlagsToSet)
        .def_readwrite("AttributeStartingValues", &UPopulationFactoryWillowAIPawn::AttributeStartingValues)
        .def_readwrite("ItemPoolList", &UPopulationFactoryWillowAIPawn::ItemPoolList)
        .def_readwrite("ItemPoolIncludedLists", &UPopulationFactoryWillowAIPawn::ItemPoolIncludedLists)
        .def("StaticClass", &UPopulationFactoryWillowAIPawn::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryWillowAIPawn::eventGetDescriptionOfFactoryOutput)
        .def("eventRestorePopulatedAIPawn", &UPopulationFactoryWillowAIPawn::eventRestorePopulatedAIPawn, return_value_policy< reference_existing_object >())
        .def("CreateSavedInventory", &UPopulationFactoryWillowAIPawn::CreateSavedInventory)
        .def("eventGetPopulatedAIPawnMemento", &UPopulationFactoryWillowAIPawn::eventGetPopulatedAIPawnMemento)
        .def("eventShouldSavePopulationActor", &UPopulationFactoryWillowAIPawn::eventShouldSavePopulationActor)
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowAIPawn::eventDestroyPopulationActor)
        .def("eventCreatePopulationActor", &UPopulationFactoryWillowAIPawn::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("SetupPopulationActor", &UPopulationFactoryWillowAIPawn::SetupPopulationActor)
        .def("SetFlagDefinitions", &UPopulationFactoryWillowAIPawn::SetFlagDefinitions)
        .def("ApplyPopulationDefinition", &UPopulationFactoryWillowAIPawn::ApplyPopulationDefinition)
        .def("GetAContextSourceForThePopulationActor", &UPopulationFactoryWillowAIPawn::GetAContextSourceForThePopulationActor, return_value_policy< reference_existing_object >())
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryWillowAIPawn::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryWillowAIPawn::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .def("eventGetActorSpawnCost", &UPopulationFactoryWillowAIPawn::eventGetActorSpawnCost)
        .def("eventSetupMatineeForActor", &UPopulationFactoryWillowAIPawn::eventSetupMatineeForActor)
        .staticmethod("StaticClass")
  ;
}