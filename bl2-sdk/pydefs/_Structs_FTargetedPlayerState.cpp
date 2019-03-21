#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTargetedPlayerState(py::object m)
{
    py::class_< FTargetedPlayerState >(m, "FTargetedPlayerState")
        .def_readwrite("Enemy", &FTargetedPlayerState::Enemy)
        .def_readwrite("Player", &FTargetedPlayerState::Player)
        .def_readwrite("InitialThreat", &FTargetedPlayerState::InitialThreat)
        .def_readwrite("StoppedTargetingPlayerTime", &FTargetedPlayerState::StoppedTargetingPlayerTime)
  ;
}