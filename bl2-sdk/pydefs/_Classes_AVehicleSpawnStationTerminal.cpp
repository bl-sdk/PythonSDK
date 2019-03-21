#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicleSpawnStationTerminal()
{
    py::class_< AVehicleSpawnStationTerminal,  AWillowInteractiveObject   >("AVehicleSpawnStationTerminal")
        .def_readonly("SpawnPlatforms", &AVehicleSpawnStationTerminal::SpawnPlatforms)
        .def("StaticClass", &AVehicleSpawnStationTerminal::StaticClass, py::return_value_policy::reference)
        .def("eventDespawnVehicle", &AVehicleSpawnStationTerminal::eventDespawnVehicle)
        .def("SpawnVehicle", &AVehicleSpawnStationTerminal::SpawnVehicle)
        .def("StopUsing", &AVehicleSpawnStationTerminal::StopUsing)
        .def("UsedBy", &AVehicleSpawnStationTerminal::UsedBy)
        .def("ActivatedForPlayerUse", &AVehicleSpawnStationTerminal::ActivatedForPlayerUse)
        .def("UnlockForOtherUsers", &AVehicleSpawnStationTerminal::UnlockForOtherUsers)
        .def("LockOutOtherUsers", &AVehicleSpawnStationTerminal::LockOutOtherUsers)
        .def("eventPostBeginPlay", &AVehicleSpawnStationTerminal::eventPostBeginPlay)
        .staticmethod("StaticClass")
  ;
}