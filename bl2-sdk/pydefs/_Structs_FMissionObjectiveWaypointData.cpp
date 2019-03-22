#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionObjectiveWaypointData(py::module &m)
{
    py::class_< FMissionObjectiveWaypointData >(m, "FMissionObjectiveWaypointData")
        .def_readwrite("LinkedObjective", &FMissionObjectiveWaypointData::LinkedObjective)
        .def_readwrite("ObjectiveSetRestrictions", &FMissionObjectiveWaypointData::ObjectiveSetRestrictions)
  ;
}