#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationPlatformDefinition(py::object m)
{
    py::class_< UVehicleSpawnStationPlatformDefinition,  UInteractiveObjectDefinition   >(m, "UVehicleSpawnStationPlatformDefinition")
        .def_readwrite("VehicleRefSocket", &UVehicleSpawnStationPlatformDefinition::VehicleRefSocket)
        .def_readwrite("SpawnVehicleSocket", &UVehicleSpawnStationPlatformDefinition::SpawnVehicleSocket)
        .def("StaticClass", &UVehicleSpawnStationPlatformDefinition::StaticClass, py::return_value_policy::reference)
          ;
}