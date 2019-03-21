#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FDeferredLeaderboardRead()
{
    py::class_< FDeferredLeaderboardRead >("FDeferredLeaderboardRead")
        .def_readwrite("LeaderboardName", &FDeferredLeaderboardRead::LeaderboardName)
        .def_readwrite("RequestType", &FDeferredLeaderboardRead::RequestType)
        .def_readwrite("Start", &FDeferredLeaderboardRead::Start)
        .def_readwrite("End", &FDeferredLeaderboardRead::End)
  ;
}