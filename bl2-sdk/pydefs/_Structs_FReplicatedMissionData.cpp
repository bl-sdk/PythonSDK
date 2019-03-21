#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FReplicatedMissionData(py::object m)
{
    py::class_< FReplicatedMissionData >(m, "FReplicatedMissionData")
        .def_readwrite("Mission", &FReplicatedMissionData::Mission)
        .def_readwrite("Status", &FReplicatedMissionData::Status)
        .def_readwrite("ActiveObjectiveSet", &FReplicatedMissionData::ActiveObjectiveSet)
        .def_readonly("SubObjectiveSets", &FReplicatedMissionData::SubObjectiveSets)
        .def_readwrite("SecondsLeft", &FReplicatedMissionData::SecondsLeft)
        .def_readonly("ObjectiveCounts", &FReplicatedMissionData::ObjectiveCounts)
        .def_readwrite("GameStage", &FReplicatedMissionData::GameStage)
  ;
}