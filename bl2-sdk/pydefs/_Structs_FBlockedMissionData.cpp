#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBlockedMissionData()
{
    class_< FBlockedMissionData >("FBlockedMissionData", no_init)
        .def_readwrite("BlockedMission", &FBlockedMissionData::BlockedMission)
        .def_readwrite("MissionBlockers", &FBlockedMissionData::MissionBlockers)
  ;
}