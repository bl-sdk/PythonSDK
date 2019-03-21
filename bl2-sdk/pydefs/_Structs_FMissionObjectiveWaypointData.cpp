#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionObjectiveWaypointData()
{
    class_< FMissionObjectiveWaypointData >("FMissionObjectiveWaypointData", no_init)
        .def_readwrite("LinkedObjective", &FMissionObjectiveWaypointData::LinkedObjective)
        .def_readwrite("ObjectiveSetRestrictions", &FMissionObjectiveWaypointData::ObjectiveSetRestrictions)
  ;
}