#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationPlatformDefinition()
{
    py::class_< UVehicleSpawnStationPlatformDefinition,  UInteractiveObjectDefinition   >("UVehicleSpawnStationPlatformDefinition")
        .def_readwrite("VehicleRefSocket", &UVehicleSpawnStationPlatformDefinition::VehicleRefSocket)
        .def_readwrite("SpawnVehicleSocket", &UVehicleSpawnStationPlatformDefinition::SpawnVehicleSocket)
        .def("StaticClass", &UVehicleSpawnStationPlatformDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}