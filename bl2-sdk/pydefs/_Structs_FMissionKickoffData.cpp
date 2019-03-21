#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionKickoffData(py::object m)
{
    py::class_< FMissionKickoffData >(m, "FMissionKickoffData")
        .def_readwrite("Mission", &FMissionKickoffData::Mission)
        .def_readwrite("PlayerThatAcceptedMission", &FMissionKickoffData::PlayerThatAcceptedMission)
  ;
}