#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionPlaythroughSaveGameData()
{
    class_< FMissionPlaythroughSaveGameData >("FMissionPlaythroughSaveGameData", no_init)
        .def_readwrite("PlayThroughNumber", &FMissionPlaythroughSaveGameData::PlayThroughNumber)
        .def_readwrite("MissionData", &FMissionPlaythroughSaveGameData::MissionData)
        .def_readwrite("UnloadableDlcMissionData", &FMissionPlaythroughSaveGameData::UnloadableDlcMissionData)
        .def_readwrite("PendingMissionRewards", &FMissionPlaythroughSaveGameData::PendingMissionRewards)
        .def_readwrite("UnloadableDlcPendingMissionRewards", &FMissionPlaythroughSaveGameData::UnloadableDlcPendingMissionRewards)
        .def_readwrite("ActiveMission", &FMissionPlaythroughSaveGameData::ActiveMission)
        .def_readwrite("FilteredMissions", &FMissionPlaythroughSaveGameData::FilteredMissions)
  ;
}