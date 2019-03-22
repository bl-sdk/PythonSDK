#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleSpawnStationPooledVehicle(py::module &m)
{
    py::class_< FVehicleSpawnStationPooledVehicle >(m, "FVehicleSpawnStationPooledVehicle")
        .def_readwrite("SpawnedVehicle", &FVehicleSpawnStationPooledVehicle::SpawnedVehicle)
        .def_readwrite("SpawnVehicleDef", &FVehicleSpawnStationPooledVehicle::SpawnVehicleDef)
  ;
}