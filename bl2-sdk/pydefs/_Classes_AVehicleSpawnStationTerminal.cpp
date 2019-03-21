#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVehicleSpawnStationTerminal()
{
    class_< AVehicleSpawnStationTerminal, bases< AWillowInteractiveObject >  , boost::noncopyable>("AVehicleSpawnStationTerminal", no_init)
        .def_readonly("SpawnPlatforms", &AVehicleSpawnStationTerminal::SpawnPlatforms)
        .def("StaticClass", &AVehicleSpawnStationTerminal::StaticClass, return_value_policy< reference_existing_object >())
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