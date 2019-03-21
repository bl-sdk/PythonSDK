#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTransitionWaypointComponent()
{
    py::class_< ULevelTransitionWaypointComponent,  UWaypointComponent   >("ULevelTransitionWaypointComponent")
        .def_readwrite("Mission", &ULevelTransitionWaypointComponent::Mission)
        .def_readwrite("MissionLevel", &ULevelTransitionWaypointComponent::MissionLevel)
        .def("StaticClass", &ULevelTransitionWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def("RemoveWaypoint", &ULevelTransitionWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}