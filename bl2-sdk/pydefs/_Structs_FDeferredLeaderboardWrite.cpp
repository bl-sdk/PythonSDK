#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeferredLeaderboardWrite()
{
    py::class_< FDeferredLeaderboardWrite >("FDeferredLeaderboardWrite")
        .def_readwrite("LeaderboardName", &FDeferredLeaderboardWrite::LeaderboardName)
        .def_readwrite("Score", &FDeferredLeaderboardWrite::Score)
  ;
}