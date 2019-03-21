#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionKickoffData()
{
    py::class_< FMissionKickoffData >("FMissionKickoffData")
        .def_readwrite("Mission", &FMissionKickoffData::Mission)
        .def_readwrite("PlayerThatAcceptedMission", &FMissionKickoffData::PlayerThatAcceptedMission)
  ;
}