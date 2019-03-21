#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFailableMissionDirectiveWaypointComponent()
{
    py::class_< UFailableMissionDirectiveWaypointComponent,  UWaypointComponent   >("UFailableMissionDirectiveWaypointComponent")
        .def_readwrite("LinkedMission", &UMissionDirectiveWaypointComponent::LinkedMission)
        .def_readwrite("BranchEnding", &UMissionDirectiveWaypointComponent::BranchEnding)
        .def("StaticClass", &UFailableMissionDirectiveWaypointComponent::StaticClass, py::return_value_policy::reference)
        .def("RemoveWaypoint", &UMissionDirectiveWaypointComponent::RemoveWaypoint)
        .staticmethod("StaticClass")
  ;
}