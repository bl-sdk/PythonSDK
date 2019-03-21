#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionPlaythroughData()
{
    class_< FMissionPlaythroughData >("FMissionPlaythroughData", no_init)
        .def_readwrite("MissionList", &FMissionPlaythroughData::MissionList)
        .def_readwrite("UnloadableDlcMissionList", &FMissionPlaythroughData::UnloadableDlcMissionList)
        .def_readwrite("UnloadableDlcPendingMissionRewards", &FMissionPlaythroughData::UnloadableDlcPendingMissionRewards)
        .def_readwrite("FilteredMissions", &FMissionPlaythroughData::FilteredMissions)
        .def_readwrite("ActiveMission", &FMissionPlaythroughData::ActiveMission)
        .def_readwrite("PlayThroughNumber", &FMissionPlaythroughData::PlayThroughNumber)
  ;
}