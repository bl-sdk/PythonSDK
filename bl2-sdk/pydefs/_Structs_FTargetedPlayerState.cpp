#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTargetedPlayerState()
{
    class_< FTargetedPlayerState >("FTargetedPlayerState", no_init)
        .def_readwrite("Enemy", &FTargetedPlayerState::Enemy)
        .def_readwrite("Player", &FTargetedPlayerState::Player)
        .def_readwrite("InitialThreat", &FTargetedPlayerState::InitialThreat)
        .def_readwrite("StoppedTargetingPlayerTime", &FTargetedPlayerState::StoppedTargetingPlayerTime)
  ;
}