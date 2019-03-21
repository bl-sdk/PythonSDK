#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTeamState()
{
    py::class_< FTeamState >("FTeamState")
        .def_readwrite("TeamIndex", &FTeamState::TeamIndex)
        .def_readwrite("PlayerIndices", &FTeamState::PlayerIndices)
  ;
}