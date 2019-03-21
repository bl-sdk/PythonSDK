#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVehicleLifetimeManager()
{
    class_< AVehicleLifetimeManager, bases< AInfo >  , boost::noncopyable>("AVehicleLifetimeManager", no_init)
        .def_readwrite("NextTickUpdateTime", &AVehicleLifetimeManager::NextTickUpdateTime)
        .def_readwrite("NextCheckUsersTime", &AVehicleLifetimeManager::NextCheckUsersTime)
        .def_readwrite("CurrentVehicleFamily", &AVehicleLifetimeManager::CurrentVehicleFamily)
        .def_readwrite("TerminalDetail", &AVehicleLifetimeManager::TerminalDetail)
        .def_readwrite("AllVehicles", &AVehicleLifetimeManager::AllVehicles)
        .def_readwrite("VehicleUnRegisterList", &AVehicleLifetimeManager::VehicleUnRegisterList)
        .def_readwrite("TickUpdateInterval", &AVehicleLifetimeManager::TickUpdateInterval)
        .def_readwrite("CheckUsersInterval", &AVehicleLifetimeManager::CheckUsersInterval)
        .def("StaticClass", &AVehicleLifetimeManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventReplicatedEvent", &AVehicleLifetimeManager::eventReplicatedEvent)
        .def("NotifySetCinematicMode", &AVehicleLifetimeManager::NotifySetCinematicMode)
        .def("CleanUpPlayerVehicles", &AVehicleLifetimeManager::CleanUpPlayerVehicles)
        .def("InternalAreAnyPlayersUsingVehicles", &AVehicleLifetimeManager::InternalAreAnyPlayersUsingVehicles)
        .def("AreAnyPlayersUsingVehicles", &AVehicleLifetimeManager::AreAnyPlayersUsingVehicles)
        .def("HasVehicleInRegistry", &AVehicleLifetimeManager::HasVehicleInRegistry)
        .def("UnRegisterVehicle", &AVehicleLifetimeManager::UnRegisterVehicle)
        .def("RegisterVehicle", &AVehicleLifetimeManager::RegisterVehicle)
        .def("GetCurrentVehicleFamily", &AVehicleLifetimeManager::GetCurrentVehicleFamily, return_value_policy< reference_existing_object >())
        .def("SetCurrentVehicleFamily", &AVehicleLifetimeManager::SetCurrentVehicleFamily)
        .def("IsSpawnStationInUseByOtherThan", &AVehicleLifetimeManager::IsSpawnStationInUseByOtherThan)
        .def("SetSpawnStationInUse", &AVehicleLifetimeManager::SetSpawnStationInUse)
        .def("initialize", &AVehicleLifetimeManager::initialize)
        .staticmethod("StaticClass")
  ;
}