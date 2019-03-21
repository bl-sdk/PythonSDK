#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FViewIdToLeaderboardName()
{
    class_< FViewIdToLeaderboardName >("FViewIdToLeaderboardName", no_init)
        .def_readwrite("ViewId", &FViewIdToLeaderboardName::ViewId)
        .def_readwrite("LeaderboardName", &FViewIdToLeaderboardName::LeaderboardName)
  ;
}