#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicleSpawnStationPlatform()
{
    class_< UActorFactoryVehicleSpawnStationPlatform, bases< UActorFactoryInteractiveObject >  , boost::noncopyable>("UActorFactoryVehicleSpawnStationPlatform", no_init)
        .def("StaticClass", &UActorFactoryVehicleSpawnStationPlatform::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}