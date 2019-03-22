#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerState(py::module &m)
{
    py::class_< FPlayerState >(m, "FPlayerState")
        .def_readwrite("PlayerIndex", &FPlayerState::PlayerIndex)
        .def_readwrite("CurrentTeamIndex", &FPlayerState::CurrentTeamIndex)
        .def_readwrite("TimeSpawned", &FPlayerState::TimeSpawned)
        .def_readwrite("TimeAliveSinceLastDeath", &FPlayerState::TimeAliveSinceLastDeath)
  ;
}