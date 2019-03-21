#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionStatusPlayerData()
{
    class_< FMissionStatusPlayerData >("FMissionStatusPlayerData", no_init)
        .def_readwrite("MissionDef", &FMissionStatusPlayerData::MissionDef)
        .def_readwrite("Status", &FMissionStatusPlayerData::Status)
        .def_readwrite("ObjectivesProgress", &FMissionStatusPlayerData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSet", &FMissionStatusPlayerData::ActiveObjectiveSet)
        .def_readwrite("SubObjectiveSets", &FMissionStatusPlayerData::SubObjectiveSets)
        .def_readwrite("GameStage", &FMissionStatusPlayerData::GameStage)
  ;
}