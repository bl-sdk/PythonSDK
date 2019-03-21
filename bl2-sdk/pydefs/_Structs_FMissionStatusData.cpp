#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionStatusData()
{
    class_< FMissionStatusData >("FMissionStatusData", no_init)
        .def_readwrite("MissionDefinition", &FMissionStatusData::MissionDefinition)
        .def_readwrite("MissionStatus", &FMissionStatusData::MissionStatus)
        .def_readwrite("MissionObjective", &FMissionStatusData::MissionObjective)
        .def_readwrite("ObjectiveStatus", &FMissionStatusData::ObjectiveStatus)
  ;
}