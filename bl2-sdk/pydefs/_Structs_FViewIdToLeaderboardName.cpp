#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FViewIdToLeaderboardName()
{
    py::class_< FViewIdToLeaderboardName >("FViewIdToLeaderboardName")
        .def_readwrite("ViewId", &FViewIdToLeaderboardName::ViewId)
        .def_readwrite("LeaderboardName", &FViewIdToLeaderboardName::LeaderboardName)
  ;
}