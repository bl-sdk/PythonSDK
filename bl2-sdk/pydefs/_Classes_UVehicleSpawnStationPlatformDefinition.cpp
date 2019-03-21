#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleSpawnStationPlatformDefinition()
{
    class_< UVehicleSpawnStationPlatformDefinition, bases< UInteractiveObjectDefinition >  , boost::noncopyable>("UVehicleSpawnStationPlatformDefinition", no_init)
        .def_readwrite("VehicleRefSocket", &UVehicleSpawnStationPlatformDefinition::VehicleRefSocket)
        .def_readwrite("SpawnVehicleSocket", &UVehicleSpawnStationPlatformDefinition::SpawnVehicleSocket)
        .def("StaticClass", &UVehicleSpawnStationPlatformDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}