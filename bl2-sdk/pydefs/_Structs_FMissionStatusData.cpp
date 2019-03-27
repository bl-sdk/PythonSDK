#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionStatusData(py::module &m)
{
    py::class_< FMissionStatusData >(m, "FMissionStatusData")
        .def_readwrite("MissionDefinition", &FMissionStatusData::MissionDefinition)
        .def_readwrite("MissionStatus", &FMissionStatusData::MissionStatus)
        .def_readwrite("MissionObjective", &FMissionStatusData::MissionObjective)
        .def_readwrite("ObjectiveStatus", &FMissionStatusData::ObjectiveStatus)
  ;
}