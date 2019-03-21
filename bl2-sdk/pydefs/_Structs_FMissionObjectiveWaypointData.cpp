#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionObjectiveWaypointData()
{
    py::class_< FMissionObjectiveWaypointData >("FMissionObjectiveWaypointData")
        .def_readwrite("LinkedObjective", &FMissionObjectiveWaypointData::LinkedObjective)
        .def_readwrite("ObjectiveSetRestrictions", &FMissionObjectiveWaypointData::ObjectiveSetRestrictions)
  ;
}