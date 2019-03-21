#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDuelTeamPair()
{
    py::class_< FDuelTeamPair >("FDuelTeamPair")
        .def_readwrite("ChallengerTeam", &FDuelTeamPair::ChallengerTeam)
        .def_readwrite("CompetitorTeam", &FDuelTeamPair::CompetitorTeam)
  ;
}