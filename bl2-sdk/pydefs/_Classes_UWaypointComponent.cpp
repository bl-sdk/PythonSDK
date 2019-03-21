#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWaypointComponent()
{
    class_< UWaypointComponent, bases< UActorComponent >  , boost::noncopyable>("UWaypointComponent", no_init)
        .def("StaticClass", &UWaypointComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveWaypoint", &UWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}