#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVehicleFactory(py::module &m)
{
    py::class_< AWillowVehicleFactory,  ANavigationPoint   >(m, "AWillowVehicleFactory")
		.def_static("StaticClass", &AWillowVehicleFactory::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VehicleClass", &AWillowVehicleFactory::VehicleClass)
        .def_readwrite("VehicleArchetype", &AWillowVehicleFactory::VehicleArchetype)
        .def_readwrite("ChildVehicle", &AWillowVehicleFactory::ChildVehicle)
        .def_readwrite("RespawnProgress", &AWillowVehicleFactory::RespawnProgress)
        .def_readwrite("RespawnRateModifier", &AWillowVehicleFactory::RespawnRateModifier)
        .def_readwrite("TeamNum", &AWillowVehicleFactory::TeamNum)
        .def_readwrite("HUDLocation", &AWillowVehicleFactory::HUDLocation)
        .def_readwrite("HUDMaterialInstance", &AWillowVehicleFactory::HUDMaterialInstance)
        .def_readwrite("InitialGunRotations", &AWillowVehicleFactory::InitialGunRotations)
        .def("OnToggle", &AWillowVehicleFactory::OnToggle)
        .def("SpawnVehicle", &AWillowVehicleFactory::SpawnVehicle)
        .def("eventPreSpawn", &AWillowVehicleFactory::eventPreSpawn)
        .def("GetTeamNum", &AWillowVehicleFactory::GetTeamNum)
        .def("VehicleDestroyed", &AWillowVehicleFactory::VehicleDestroyed)
        .def("TarydiumBoost", &AWillowVehicleFactory::TarydiumBoost)
        .def("Deactivate", &AWillowVehicleFactory::Deactivate)
        .def("Activate", &AWillowVehicleFactory::Activate)
        .def("SetHUDLocation", &AWillowVehicleFactory::SetHUDLocation)
        .def("eventSetInitialState", &AWillowVehicleFactory::eventSetInitialState)
        .def("PostBeginPlay", &AWillowVehicleFactory::PostBeginPlay)
          ;
}