#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeferredLeaderboardRead()
{
    class_< FDeferredLeaderboardRead >("FDeferredLeaderboardRead", no_init)
        .def_readwrite("LeaderboardName", &FDeferredLeaderboardRead::LeaderboardName)
        .def_readwrite("RequestType", &FDeferredLeaderboardRead::RequestType)
        .def_readwrite("Start", &FDeferredLeaderboardRead::Start)
        .def_readwrite("End", &FDeferredLeaderboardRead::End)
  ;
}