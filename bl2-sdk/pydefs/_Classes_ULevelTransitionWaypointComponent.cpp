#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTransitionWaypointComponent(py::module &m)
{
    py::class_< ULevelTransitionWaypointComponent,  UWaypointComponent   >(m, "ULevelTransitionWaypointComponent")
        .def_readwrite("Mission", &ULevelTransitionWaypointComponent::Mission)
        .def_readwrite("MissionLevel", &ULevelTransitionWaypointComponent::MissionLevel)
        .def("RemoveWaypoint", &ULevelTransitionWaypointComponent::RemoveWaypoint)
          ;
}