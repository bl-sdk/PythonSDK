#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowVehicle()
{
    class_< UActorFactoryWillowVehicle, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryWillowVehicle", no_init)
        .def_readwrite("VehicleArchetype", &UActorFactoryWillowVehicle::VehicleArchetype)
        .def("StaticClass", &UActorFactoryWillowVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}