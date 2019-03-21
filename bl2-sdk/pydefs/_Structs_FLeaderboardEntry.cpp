#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLeaderboardEntry()
{
    class_< FLeaderboardEntry >("FLeaderboardEntry", no_init)
        .def_readwrite("PlayerUID", &FLeaderboardEntry::PlayerUID)
        .def_readwrite("Rank", &FLeaderboardEntry::Rank)
        .def_readwrite("Score", &FLeaderboardEntry::Score)
  ;
}