#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionData()
{
    py::class_< FMissionData >("FMissionData")
        .def_readwrite("MissionDef", &FMissionData::MissionDef)
        .def_readwrite("Status", &FMissionData::Status)
        .def_readwrite("ObjectivesProgress", &FMissionData::ObjectivesProgress)
        .def_readwrite("ActiveObjectiveSet", &FMissionData::ActiveObjectiveSet)
        .def_readwrite("SubObjectiveSets", &FMissionData::SubObjectiveSets)
  ;
}