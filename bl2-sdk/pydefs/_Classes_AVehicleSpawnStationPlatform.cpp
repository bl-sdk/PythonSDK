#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AVehicleSpawnStationPlatform()
{
    class_< AVehicleSpawnStationPlatform, bases< AWillowInteractiveObject >  , boost::noncopyable>("AVehicleSpawnStationPlatform", no_init)
        .def_readwrite("StationSlot", &AVehicleSpawnStationPlatform::StationSlot)
        .def_readwrite("CachedVSSVehicleDefinition", &AVehicleSpawnStationPlatform::CachedVSSVehicleDefinition)
        .def_readwrite("SeatOccupiedFlags", &AVehicleSpawnStationPlatform::SeatOccupiedFlags)
        .def("StaticClass", &AVehicleSpawnStationPlatform::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetInteractionIcon", &AVehicleSpawnStationPlatform::SetInteractionIcon)
        .def("TriggerKismetVehicleSpawnEvents", &AVehicleSpawnStationPlatform::TriggerKismetVehicleSpawnEvents)
        .def("SpawnVehicle", &AVehicleSpawnStationPlatform::SpawnVehicle)
        .def("Behavior_SpawnVehicle", &AVehicleSpawnStationPlatform::Behavior_SpawnVehicle)
        .def("StartSpawnProcess", &AVehicleSpawnStationPlatform::StartSpawnProcess)
        .def("UsedBy", &AVehicleSpawnStationPlatform::UsedBy)
        .def("TryToTeleportToVehicle", &AVehicleSpawnStationPlatform::TryToTeleportToVehicle)
        .def("IsActorSpawnedVehicle", &AVehicleSpawnStationPlatform::IsActorSpawnedVehicle)
        .def("SetSeatOccupied", &AVehicleSpawnStationPlatform::SetSeatOccupied)
        .staticmethod("StaticClass")
  ;
}