#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicle()
{
    class_< UActorFactoryVehicle, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryVehicle", no_init)
        .def_readwrite("VehicleClass", &UActorFactoryVehicle::VehicleClass)
        .def("StaticClass", &UActorFactoryVehicle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}