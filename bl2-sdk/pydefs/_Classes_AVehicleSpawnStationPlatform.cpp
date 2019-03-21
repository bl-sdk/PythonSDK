#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AVehicleSpawnStationPlatform()
{
    py::class_< AVehicleSpawnStationPlatform,  AWillowInteractiveObject   >("AVehicleSpawnStationPlatform")
        .def_readwrite("StationSlot", &AVehicleSpawnStationPlatform::StationSlot)
        .def_readwrite("CachedVSSVehicleDefinition", &AVehicleSpawnStationPlatform::CachedVSSVehicleDefinition)
        .def_readwrite("SeatOccupiedFlags", &AVehicleSpawnStationPlatform::SeatOccupiedFlags)
        .def("StaticClass", &AVehicleSpawnStationPlatform::StaticClass, py::return_value_policy::reference)
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