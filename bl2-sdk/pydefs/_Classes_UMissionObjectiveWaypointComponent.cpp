#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionObjectiveWaypointComponent()
{
    class_< UMissionObjectiveWaypointComponent, bases< UWaypointComponent >  , boost::noncopyable>("UMissionObjectiveWaypointComponent", no_init)
        .def_readwrite("WaypointInfo", &UMissionObjectiveWaypointComponent::WaypointInfo)
        .def_readwrite("WaypointRadius", &UMissionObjectiveWaypointComponent::WaypointRadius)
        .def("StaticClass", &UMissionObjectiveWaypointComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveWaypoint", &UMissionObjectiveWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}