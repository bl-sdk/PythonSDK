#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleSpawnStationPooledVehicle()
{
    py::class_< FVehicleSpawnStationPooledVehicle >("FVehicleSpawnStationPooledVehicle")
        .def_readwrite("SpawnedVehicle", &FVehicleSpawnStationPooledVehicle::SpawnedVehicle)
        .def_readwrite("SpawnVehicleDef", &FVehicleSpawnStationPooledVehicle::SpawnVehicleDef)
  ;
}