#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowVehicleFactory()
{
    class_< UActorFactoryWillowVehicleFactory, bases< UActorFactoryWillowVehicle >  , boost::noncopyable>("UActorFactoryWillowVehicleFactory", no_init)
        .def("StaticClass", &UActorFactoryWillowVehicleFactory::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}