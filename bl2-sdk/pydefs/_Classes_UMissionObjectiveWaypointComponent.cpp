#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionObjectiveWaypointComponent(py::module &m)
{
    py::class_< UMissionObjectiveWaypointComponent,  UWaypointComponent   >(m, "UMissionObjectiveWaypointComponent")
		.def_static("StaticClass", &UMissionObjectiveWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def_readwrite("WaypointInfo", &UMissionObjectiveWaypointComponent::WaypointInfo)
        .def_readwrite("WaypointRadius", &UMissionObjectiveWaypointComponent::WaypointRadius)
        .def("RemoveWaypoint", &UMissionObjectiveWaypointComponent::RemoveWaypoint)
          ;
}