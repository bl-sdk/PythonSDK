#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDuelTeamPair(py::module &m)
{
    py::class_< FDuelTeamPair >(m, "FDuelTeamPair")
        .def_readwrite("ChallengerTeam", &FDuelTeamPair::ChallengerTeam)
        .def_readwrite("CompetitorTeam", &FDuelTeamPair::CompetitorTeam)
  ;
}