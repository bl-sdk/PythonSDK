#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionData()
{
    class_< FMissionData >("FMissionData", no_init)
        .def_readwrite("MissionDef", &FMissionData::MissionDef)
        .def_readwrite("Status", &FMissionData::Status)
        .def_readwrite("ObjectivesProgress", &FMissionData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSet", &FMissionData::ActiveObjectiveSet)
        .def_readwrite("SubObjectiveSets", &FMissionData::SubObjectiveSets)
  ;
}