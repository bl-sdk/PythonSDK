#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionPlaythroughData(py::object m)
{
    py::class_< FMissionPlaythroughData >(m, "FMissionPlaythroughData")
        .def_readwrite("MissionList", &FMissionPlaythroughData::MissionList)
        .def_readwrite("UnloadableDlcMissionList", &FMissionPlaythroughData::UnloadableDlcMissionList)
        .def_readwrite("UnloadableDlcPendingMissionRewards", &FMissionPlaythroughData::UnloadableDlcPendingMissionRewards)
        .def_readwrite("FilteredMissions", &FMissionPlaythroughData::FilteredMissions)
        .def_readwrite("ActiveMission", &FMissionPlaythroughData::ActiveMission)
        .def_readwrite("PlayThroughNumber", &FMissionPlaythroughData::PlayThroughNumber)
  ;
}