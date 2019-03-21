#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPopulationMaster()
{
    class_< UWillowPopulationMaster, bases< UPopulationMaster >  , boost::noncopyable>("UWillowPopulationMaster", no_init)
        .def_readonly("VehicleSpawnStationSlots", &UWillowPopulationMaster::VehicleSpawnStationSlots)
        .def("StaticClass", &UWillowPopulationMaster::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateGRI", &UWillowPopulationMaster::UpdateGRI)
        .def("RemoveSpawnedActor", &UWillowPopulationMaster::RemoveSpawnedActor)
        .def("GetVehicleDefinitionFromVehicleSpawnStation", &UWillowPopulationMaster::GetVehicleDefinitionFromVehicleSpawnStation, return_value_policy< reference_existing_object >())
        .def("GetPooledVehicleIndexFromVehicleSpawnStation", &UWillowPopulationMaster::GetPooledVehicleIndexFromVehicleSpawnStation)
        .def("GetVehicleFromVehicleSpawnStation", &UWillowPopulationMaster::GetVehicleFromVehicleSpawnStation, return_value_policy< reference_existing_object >())
        .def("DespawnVehicleFromVehicleSpawnStation", &UWillowPopulationMaster::DespawnVehicleFromVehicleSpawnStation)
        .def("SpawnVehicleFromVehicleSpawnStation", &UWillowPopulationMaster::SpawnVehicleFromVehicleSpawnStation)
        .def("SpawnActorFromOpportunity", &UWillowPopulationMaster::SpawnActorFromOpportunity, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}