#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULevelTransitionWaypointComponent()
{
    class_< ULevelTransitionWaypointComponent, bases< UWaypointComponent >  , boost::noncopyable>("ULevelTransitionWaypointComponent", no_init)
        .def_readwrite("Mission", &ULevelTransitionWaypointComponent::Mission)
        .def_readwrite("MissionLevel", &ULevelTransitionWaypointComponent::MissionLevel)
        .def("StaticClass", &ULevelTransitionWaypointComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveWaypoint", &ULevelTransitionWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}