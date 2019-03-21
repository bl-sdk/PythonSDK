#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVehicleSpawnStationSlot()
{
    class_< FVehicleSpawnStationSlot >("FVehicleSpawnStationSlot", no_init)
        .def_readwrite("PooledVehicles", &FVehicleSpawnStationSlot::PooledVehicles)
        .def_readwrite("PooledVehicleIndex", &FVehicleSpawnStationSlot::PooledVehicleIndex)
  ;
}