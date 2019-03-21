#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMatchmakingResultEntry()
{
    class_< FMatchmakingResultEntry >("FMatchmakingResultEntry", no_init)
        .def_readwrite("MatchTypeIconFrameName", &FMatchmakingResultEntry::MatchTypeIconFrameName)
        .def_readwrite("StatusIconFrameName", &FMatchmakingResultEntry::StatusIconFrameName)
        .def_readwrite("Message", &FMatchmakingResultEntry::Message)
  ;
}