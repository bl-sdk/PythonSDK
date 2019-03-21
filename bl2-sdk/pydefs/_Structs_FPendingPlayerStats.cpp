#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingPlayerStats()
{
    class_< FPendingPlayerStats >("FPendingPlayerStats", no_init)
        .def_readwrite("Player", &FPendingPlayerStats::Player)
        .def_readwrite("PlayerName", &FPendingPlayerStats::PlayerName)
        .def_readwrite("StatGuid", &FPendingPlayerStats::StatGuid)
        .def_readwrite("Stats", &FPendingPlayerStats::Stats)
        .def_readwrite("Score", &FPendingPlayerStats::Score)
        .def_readwrite("Place", &FPendingPlayerStats::Place)
  ;
}