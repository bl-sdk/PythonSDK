#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeferredLeaderboardWrite()
{
    class_< FDeferredLeaderboardWrite >("FDeferredLeaderboardWrite", no_init)
        .def_readwrite("LeaderboardName", &FDeferredLeaderboardWrite::LeaderboardName)
        .def_readwrite("Score", &FDeferredLeaderboardWrite::Score)
  ;
}