#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicleSpawnStationTerminal(py::module &m)
{
    py::class_< AVehicleSpawnStationTerminal,  AWillowInteractiveObject   >(m, "AVehicleSpawnStationTerminal")
        .def("eventDespawnVehicle", &AVehicleSpawnStationTerminal::eventDespawnVehicle)
        .def("SpawnVehicle", &AVehicleSpawnStationTerminal::SpawnVehicle)
        .def("StopUsing", &AVehicleSpawnStationTerminal::StopUsing)
        .def("UsedBy", &AVehicleSpawnStationTerminal::UsedBy)
        .def("ActivatedForPlayerUse", &AVehicleSpawnStationTerminal::ActivatedForPlayerUse)
        .def("UnlockForOtherUsers", &AVehicleSpawnStationTerminal::UnlockForOtherUsers)
        .def("LockOutOtherUsers", &AVehicleSpawnStationTerminal::LockOutOtherUsers)
        .def("eventPostBeginPlay", &AVehicleSpawnStationTerminal::eventPostBeginPlay)
          ;
}