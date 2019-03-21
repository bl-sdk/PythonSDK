#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerState()
{
    class_< FPlayerState >("FPlayerState", no_init)
        .def_readwrite("PlayerIndex", &FPlayerState::PlayerIndex)
        .def_readwrite("CurrentTeamIndex", &FPlayerState::CurrentTeamIndex)
        .def_readwrite("TimeSpawned", &FPlayerState::TimeSpawned)
        .def_readwrite("TimeAliveSinceLastDeath", &FPlayerState::TimeAliveSinceLastDeath)
  ;
}