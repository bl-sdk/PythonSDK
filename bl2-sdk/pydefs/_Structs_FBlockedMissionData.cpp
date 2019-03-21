#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBlockedMissionData()
{
    py::class_< FBlockedMissionData >("FBlockedMissionData")
        .def_readwrite("BlockedMission", &FBlockedMissionData::BlockedMission)
        .def_readwrite("MissionBlockers", &FBlockedMissionData::MissionBlockers)
  ;
}