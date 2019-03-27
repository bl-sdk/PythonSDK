#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicleLifetimeManager(py::module &m)
{
    py::class_< AVehicleLifetimeManager,  AInfo   >(m, "AVehicleLifetimeManager")
		.def_static("StaticClass", &AVehicleLifetimeManager::StaticClass, py::return_value_policy::reference)
        .def_readwrite("NextTickUpdateTime", &AVehicleLifetimeManager::NextTickUpdateTime)
        .def_readwrite("NextCheckUsersTime", &AVehicleLifetimeManager::NextCheckUsersTime)
        .def_readwrite("CurrentVehicleFamily", &AVehicleLifetimeManager::CurrentVehicleFamily)
        .def_readwrite("TerminalDetail", &AVehicleLifetimeManager::TerminalDetail)
        .def_readwrite("AllVehicles", &AVehicleLifetimeManager::AllVehicles)
        .def_readwrite("VehicleUnRegisterList", &AVehicleLifetimeManager::VehicleUnRegisterList)
        .def_readwrite("TickUpdateInterval", &AVehicleLifetimeManager::TickUpdateInterval)
        .def_readwrite("CheckUsersInterval", &AVehicleLifetimeManager::CheckUsersInterval)
        .def("eventReplicatedEvent", &AVehicleLifetimeManager::eventReplicatedEvent)
        .def("NotifySetCinematicMode", &AVehicleLifetimeManager::NotifySetCinematicMode)
        .def("CleanUpPlayerVehicles", &AVehicleLifetimeManager::CleanUpPlayerVehicles)
        .def("InternalAreAnyPlayersUsingVehicles", &AVehicleLifetimeManager::InternalAreAnyPlayersUsingVehicles)
        .def("AreAnyPlayersUsingVehicles", &AVehicleLifetimeManager::AreAnyPlayersUsingVehicles)
        .def("HasVehicleInRegistry", &AVehicleLifetimeManager::HasVehicleInRegistry)
        .def("UnRegisterVehicle", &AVehicleLifetimeManager::UnRegisterVehicle)
        .def("RegisterVehicle", &AVehicleLifetimeManager::RegisterVehicle)
        .def("GetCurrentVehicleFamily", &AVehicleLifetimeManager::GetCurrentVehicleFamily, py::return_value_policy::reference)
        .def("SetCurrentVehicleFamily", &AVehicleLifetimeManager::SetCurrentVehicleFamily)
        .def("IsSpawnStationInUseByOtherThan", &AVehicleLifetimeManager::IsSpawnStationInUseByOtherThan)
        .def("SetSpawnStationInUse", &AVehicleLifetimeManager::SetSpawnStationInUse)
        .def("initialize", &AVehicleLifetimeManager::initialize)
          ;
}