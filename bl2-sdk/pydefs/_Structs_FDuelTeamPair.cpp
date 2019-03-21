#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDuelTeamPair()
{
    class_< FDuelTeamPair >("FDuelTeamPair", no_init)
        .def_readwrite("ChallengerTeam", &FDuelTeamPair::ChallengerTeam)
        .def_readwrite("CompetitorTeam", &FDuelTeamPair::CompetitorTeam)
  ;
}