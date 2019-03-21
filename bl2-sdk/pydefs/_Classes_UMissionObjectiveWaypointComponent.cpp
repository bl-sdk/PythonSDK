#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveWaypointComponent()
{
    py::class_< UMissionObjectiveWaypointComponent,  UWaypointComponent   >("UMissionObjectiveWaypointComponent")
        .def_readwrite("WaypointInfo", &UMissionObjectiveWaypointComponent::WaypointInfo)
        .def_readwrite("WaypointRadius", &UMissionObjectiveWaypointComponent::WaypointRadius)
        .def("StaticClass", &UMissionObjectiveWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def("RemoveWaypoint", &UMissionObjectiveWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}