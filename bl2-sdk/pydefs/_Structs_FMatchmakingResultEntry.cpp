#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMatchmakingResultEntry()
{
    py::class_< FMatchmakingResultEntry >("FMatchmakingResultEntry")
        .def_readwrite("MatchTypeIconFrameName", &FMatchmakingResultEntry::MatchTypeIconFrameName)
        .def_readwrite("StatusIconFrameName", &FMatchmakingResultEntry::StatusIconFrameName)
        .def_readwrite("Message", &FMatchmakingResultEntry::Message)
  ;
}