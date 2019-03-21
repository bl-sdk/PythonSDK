#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLeaderboardTemplate()
{
    class_< FLeaderboardTemplate >("FLeaderboardTemplate", no_init)
        .def_readwrite("LeaderboardName", &FLeaderboardTemplate::LeaderboardName)
        .def_readwrite("UpdateType", &FLeaderboardTemplate::UpdateType)
        .def_readwrite("LeaderboardSize", &FLeaderboardTemplate::LeaderboardSize)
        .def_readwrite("SortType", &FLeaderboardTemplate::SortType)
        .def_readwrite("DisplayFormat", &FLeaderboardTemplate::DisplayFormat)
        .def_readwrite("LeaderboardRef", &FLeaderboardTemplate::LeaderboardRef)
  ;
}