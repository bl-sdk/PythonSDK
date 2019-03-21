#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTargetedPlayerState()
{
    py::class_< FTargetedPlayerState >("FTargetedPlayerState")
        .def_readwrite("Enemy", &FTargetedPlayerState::Enemy)
        .def_readwrite("Player", &FTargetedPlayerState::Player)
        .def_readwrite("InitialThreat", &FTargetedPlayerState::InitialThreat)
        .def_readwrite("StoppedTargetingPlayerTime", &FTargetedPlayerState::StoppedTargetingPlayerTime)
  ;
}