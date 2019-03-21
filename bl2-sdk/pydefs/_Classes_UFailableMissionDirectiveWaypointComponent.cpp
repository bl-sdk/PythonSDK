#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFailableMissionDirectiveWaypointComponent()
{
    class_< UFailableMissionDirectiveWaypointComponent, bases< UWaypointComponent >  , boost::noncopyable>("UFailableMissionDirectiveWaypointComponent", no_init)
        .def_readwrite("LinkedMission", &UMissionDirectiveWaypointComponent::LinkedMission)
        .def_readwrite("BranchEnding", &UMissionDirectiveWaypointComponent::BranchEnding)
        .def("StaticClass", &UFailableMissionDirectiveWaypointComponent::StaticClass, return_value_policy< reference_existing_object >())
        .def("RemoveWaypoint", &UMissionDirectiveWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}