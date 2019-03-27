#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionPlaythroughSaveGameData(py::module &m)
{
    py::class_< FMissionPlaythroughSaveGameData >(m, "FMissionPlaythroughSaveGameData")
        .def_readwrite("PlayThroughNumber", &FMissionPlaythroughSaveGameData::PlayThroughNumber)
        .def_readwrite("MissionData", &FMissionPlaythroughSaveGameData::MissionData)
        .def_readwrite("UnloadableDlcMissionData", &FMissionPlaythroughSaveGameData::UnloadableDlcMissionData)
        .def_readwrite("PendingMissionRewards", &FMissionPlaythroughSaveGameData::PendingMissionRewards)
        .def_readwrite("UnloadableDlcPendingMissionRewards", &FMissionPlaythroughSaveGameData::UnloadableDlcPendingMissionRewards)
        .def_readwrite("ActiveMission", &FMissionPlaythroughSaveGameData::ActiveMission)
        .def_readwrite("FilteredMissions", &FMissionPlaythroughSaveGameData::FilteredMissions)
  ;
}