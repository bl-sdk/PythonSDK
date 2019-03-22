#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPopulationFactoryWillowVehicle(py::module &m)
{
    py::class_< UPopulationFactoryWillowVehicle,  UPopulationFactory   >(m, "UPopulationFactoryWillowVehicle")
        .def_readwrite("VehicleBalanceDefinition", &UPopulationFactoryWillowVehicle::VehicleBalanceDefinition)
        .def_readwrite("VehicleArchetype", &UPopulationFactoryWillowVehicle::VehicleArchetype)
        .def_readwrite("SpawnAllegiance", &UPopulationFactoryWillowVehicle::SpawnAllegiance)
        .def_readwrite("TeamNum", &UPopulationFactoryWillowVehicle::TeamNum)
        .def_readwrite("ItemPoolList", &UPopulationFactoryWillowVehicle::ItemPoolList)
        .def_readwrite("ItemPoolIncludedLists", &UPopulationFactoryWillowVehicle::ItemPoolIncludedLists)
        .def_readwrite("DefaultCrew", &UPopulationFactoryWillowVehicle::DefaultCrew)
        .def_readwrite("InitialGunRotations", &UPopulationFactoryWillowVehicle::InitialGunRotations)
        .def_readwrite("BalanceVehicleFor", &UPopulationFactoryWillowVehicle::BalanceVehicleFor)
        .def("StaticClass", &UPopulationFactoryWillowVehicle::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyPopulationActor", &UPopulationFactoryWillowVehicle::eventDestroyPopulationActor)
        .def("eventGetDescriptionOfFactoryOutput", &UPopulationFactoryWillowVehicle::eventGetDescriptionOfFactoryOutput)
        .def("eventCreatePopulationActor", &UPopulationFactoryWillowVehicle::eventCreatePopulationActor, py::return_value_policy::reference)
        .def("InitializeClone", &UPopulationFactoryWillowVehicle::InitializeClone)
        .def("GetAContextSourceForThePopulationActor", &UPopulationFactoryWillowVehicle::GetAContextSourceForThePopulationActor, py::return_value_policy::reference)
        .def("eventGetSpawnVisibilityBounds", &UPopulationFactoryWillowVehicle::eventGetSpawnVisibilityBounds)
        .def("GetActorAllegiance", &UPopulationFactoryWillowVehicle::GetActorAllegiance, py::return_value_policy::reference)
        .def("eventGetActorSpawnCost", &UPopulationFactoryWillowVehicle::eventGetActorSpawnCost)
        .def("GetVehicleArchetype", &UPopulationFactoryWillowVehicle::GetVehicleArchetype, py::return_value_policy::reference)
          ;
}