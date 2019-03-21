#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMissionDirectiveWaypointComponent()
{
    class_< UMissionDirectiveWaypointComponent, bases< UWaypointComponent >  , boost::noncopyable>("UMissionDirectiveWaypointComponent", no_init)
        .def_readwrite("LinkedMission", &UMissionDirectiveWaypointComponent::LinkedMission)
        .def_readwrite("BranchEnding", &UMissionDirectiveWaypointComponent::BranchEnding)
        .def("StaticClass", &UMissionDirectiveWaypointComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveWaypoint", &UMissionDirectiveWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}