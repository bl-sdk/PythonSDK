#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationVehicleDefinition(py::module &m)
{
    py::class_< UVehicleSpawnStationVehicleDefinition,  UGBXDefinition   >(m, "UVehicleSpawnStationVehicleDefinition")
        .def_readwrite("VehicleFactory", &UVehicleSpawnStationVehicleDefinition::VehicleFactory)
        .def_readwrite("VehicleMesh", &UVehicleSpawnStationVehicleDefinition::VehicleMesh)
        .def_readwrite("HeightAbovePlatformToSpawn", &UVehicleSpawnStationVehicleDefinition::HeightAbovePlatformToSpawn)
        .def_readwrite("PostSpawnCoordinatedEffect", &UVehicleSpawnStationVehicleDefinition::PostSpawnCoordinatedEffect)
        .def_readwrite("MyUIDefinition", &UVehicleSpawnStationVehicleDefinition::MyUIDefinition)
        .def_readwrite("LinkedOnDemandPackage", &UVehicleSpawnStationVehicleDefinition::LinkedOnDemandPackage)
        .def("StaticClass", &UVehicleSpawnStationVehicleDefinition::StaticClass, py::return_value_policy::reference)
          ;
}