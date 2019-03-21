#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowVehicle()
{
    class_< UPopulationFactoryWillowVehicle, bases< UPopulationFactory >  , boost::noncopyable>("UPopulationFactoryWillowVehicle", no_init)
        .def_readwrite("VehicleBalanceDefinition", &UPopulationFactoryWillowVehicle::VehicleBalanceDefinition)
        .def_readwrite("VehicleArchetype", &UPopulationFactoryWillowVehicle::VehicleArchetype)
        .def_readwrite("SpawnAllegiance", &UPopulationFactoryWillowVehicle::SpawnAllegiance)
        .def_readwrite("TeamNum", &UPopulationFactoryWillowVehicle::TeamNum)
        .def_readwrite("ItemPoolList", &UPopulationFactoryWillowVehicle::ItemPoolList)
        .def_readwrite("ItemPoolIncludedLists", &UPopulationFactoryWillowVehicle::ItemPoolIncludedLists)
        .def_readwrite("DefaultCrew", &UPopulationFactoryWillowVehicle::DefaultCrew)
        .def_readwrite("InitialGunRotations", &UPopulationFactoryWillowVehicle::InitialGunRotations)
        .def_readwrite("BalanceVehicleFor", &UPopulationFactoryWillowVehicle::BalanceVehicleFor)
        .def("StaticClass", &UPopulationFactoryWillowVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowVehicle::eventDestroyPopulationActor)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryWillowVehicle::eventGetDescriptionOfFactoryOutput)
        .def("eventCreatePopulationActor", &UPopulationFactoryWillowVehicle::eventCreatePopulationActor, return_value_policy< reference_existing_object >())
        .def("InitializeClone", &UPopulationFactoryWillowVehicle::InitializeClone)
        .def("GetAContextSourceForThePopulationActor", &UPopulationFactoryWillowVehicle::GetAContextSourceForThePopulationActor, return_value_policy< reference_existing_object >())
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryWillowVehicle::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryWillowVehicle::GetActorAllegiance, return_value_policy< reference_existing_object >())
        .def("eventGetActorSpawnCost", &UPopulationFactoryWillowVehicle::eventGetActorSpawnCost)
        .def("GetVehicleArchetype", &UPopulationFactoryWillowVehicle::GetVehicleArchetype, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}