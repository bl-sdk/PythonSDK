#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleSpawnStationPooledVehicle()
{
    class_< FVehicleSpawnStationPooledVehicle >("FVehicleSpawnStationPooledVehicle", no_init)
        .def_readwrite("SpawnedVehicle", &FVehicleSpawnStationPooledVehicle::SpawnedVehicle)
        .def_readwrite("SpawnVehicleDef", &FVehicleSpawnStationPooledVehicle::SpawnVehicleDef)
  ;
}