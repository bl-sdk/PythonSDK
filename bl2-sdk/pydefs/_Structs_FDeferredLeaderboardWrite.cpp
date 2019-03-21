#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeferredLeaderboardWrite(py::object m)
{
    py::class_< FDeferredLeaderboardWrite >(m, "FDeferredLeaderboardWrite")
        .def_readwrite("LeaderboardName", &FDeferredLeaderboardWrite::LeaderboardName)
        .def_readwrite("Score", &FDeferredLeaderboardWrite::Score)
  ;
}