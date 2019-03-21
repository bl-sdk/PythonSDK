#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorFactoryWillowWaypoint()
{
    class_< UActorFactoryWillowWaypoint, bases< UActorFactory >  , boost::noncopyable>("UActorFactoryWillowWaypoint", no_init)
        .def("StaticClass", &UActorFactoryWillowWaypoint::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}