#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationVehicleDefinition()
{
    class_< UVehicleSpawnStationVehicleDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UVehicleSpawnStationVehicleDefinition", no_init)
        .def_readwrite("VehicleFactory", &UVehicleSpawnStationVehicleDefinition::VehicleFactory)
        .def_readwrite("VehicleMesh", &UVehicleSpawnStationVehicleDefinition::VehicleMesh)
        .def_readwrite("HeightAbovePlatformToSpawn", &UVehicleSpawnStationVehicleDefinition::HeightAbovePlatformToSpawn)
        .def_readwrite("PostSpawnCoordinatedEffect", &UVehicleSpawnStationVehicleDefinition::PostSpawnCoordinatedEffect)
        .def_readwrite("MyUIDefinition", &UVehicleSpawnStationVehicleDefinition::MyUIDefinition)
        .def_readwrite("LinkedOnDemandPackage", &UVehicleSpawnStationVehicleDefinition::LinkedOnDemandPackage)
        .def("StaticClass", &UVehicleSpawnStationVehicleDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}