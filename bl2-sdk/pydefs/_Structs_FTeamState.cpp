#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTeamState(py::module &m)
{
    py::class_< FTeamState >(m, "FTeamState")
        .def_readwrite("TeamIndex", &FTeamState::TeamIndex)
        .def_readwrite("PlayerIndices", &FTeamState::PlayerIndices)
  ;
}