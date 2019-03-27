#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULevelTransitionWaypointComponent(py::module &m)
{
    py::class_< ULevelTransitionWaypointComponent,  UWaypointComponent   >(m, "ULevelTransitionWaypointComponent")
		.def_static("StaticClass", &ULevelTransitionWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Mission", &ULevelTransitionWaypointComponent::Mission)
        .def_readwrite("MissionLevel", &ULevelTransitionWaypointComponent::MissionLevel)
        .def("RemoveWaypoint", &ULevelTransitionWaypointComponent::RemoveWaypoint)
          ;
}