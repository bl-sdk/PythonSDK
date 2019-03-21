#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcMissionStatusData()
{
    class_< FUnloadableDlcMissionStatusData >("FUnloadableDlcMissionStatusData", no_init)
        .def_readwrite("MissionDefName", &FUnloadableDlcMissionStatusData::MissionDefName)
        .def_readwrite("Status", &FUnloadableDlcMissionStatusData::Status)
        .def_readwrite("DlcPackageId", &FUnloadableDlcMissionStatusData::DlcPackageId)
        .def_readwrite("ObjectivesProgress", &FUnloadableDlcMissionStatusData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSetIndex", &FUnloadableDlcMissionStatusData::ActiveObjectiveSetIndex)
        .def_readwrite("SubObjectiveSetsIndices", &FUnloadableDlcMissionStatusData::SubObjectiveSetsIndices)
        .def_readwrite("GameStage", &FUnloadableDlcMissionStatusData::GameStage)
        .def_readwrite("NeedsRewards", &FUnloadableDlcMissionStatusData::NeedsRewards)
        .def_readwrite("HeardKickoff", &FUnloadableDlcMissionStatusData::HeardKickoff)
  ;
}