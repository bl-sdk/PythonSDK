#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFailableMissionDirectiveWaypointComponent(py::module &m)
{
    py::class_< UFailableMissionDirectiveWaypointComponent,  UWaypointComponent   >(m, "UFailableMissionDirectiveWaypointComponent")
        .def_readwrite("LinkedMission", &UMissionDirectiveWaypointComponent::LinkedMission)
        .def_readwrite("BranchEnding", &UMissionDirectiveWaypointComponent::BranchEnding)
        .def("RemoveWaypoint", &UMissionDirectiveWaypointComponent::RemoveWaypoint)
          ;
}