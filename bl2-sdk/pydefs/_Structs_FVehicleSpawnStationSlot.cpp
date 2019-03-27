#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVehicleSpawnStationSlot(py::module &m)
{
    py::class_< FVehicleSpawnStationSlot >(m, "FVehicleSpawnStationSlot")
        .def_readwrite("PooledVehicles", &FVehicleSpawnStationSlot::PooledVehicles)
        .def_readwrite("PooledVehicleIndex", &FVehicleSpawnStationSlot::PooledVehicleIndex)
  ;
}