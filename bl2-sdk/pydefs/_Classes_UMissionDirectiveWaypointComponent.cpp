#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionDirectiveWaypointComponent(py::object m)
{
    py::class_< UMissionDirectiveWaypointComponent,  UWaypointComponent   >(m, "UMissionDirectiveWaypointComponent")
        .def_readwrite("LinkedMission", &UMissionDirectiveWaypointComponent::LinkedMission)
        .def_readwrite("BranchEnding", &UMissionDirectiveWaypointComponent::BranchEnding)
        .def("StaticClass", &UMissionDirectiveWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def("RemoveWaypoint", &UMissionDirectiveWaypointComponent::RemoveWaypoint)
          ;
}