#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionKickoffData()
{
    class_< FMissionKickoffData >("FMissionKickoffData", no_init)
        .def_readwrite("Mission", &FMissionKickoffData::Mission)
        .def_readwrite("PlayerThatAcceptedMission", &FMissionKickoffData::PlayerThatAcceptedMission)
  ;
}