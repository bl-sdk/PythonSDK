#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionStatusPlayerData(py::module &m)
{
    py::class_< FMissionStatusPlayerData >(m, "FMissionStatusPlayerData")
        .def_readwrite("MissionDef", &FMissionStatusPlayerData::MissionDef)
        .def_readwrite("Status", &FMissionStatusPlayerData::Status)
        .def_readwrite("ObjectivesProgress", &FMissionStatusPlayerData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSet", &FMissionStatusPlayerData::ActiveObjectiveSet)
        .def_readwrite("SubObjectiveSets", &FMissionStatusPlayerData::SubObjectiveSets)
        .def_readwrite("GameStage", &FMissionStatusPlayerData::GameStage)
  ;
}