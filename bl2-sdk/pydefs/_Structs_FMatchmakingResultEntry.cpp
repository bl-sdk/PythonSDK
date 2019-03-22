#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMatchmakingResultEntry(py::module &m)
{
    py::class_< FMatchmakingResultEntry >(m, "FMatchmakingResultEntry")
        .def_readwrite("MatchTypeIconFrameName", &FMatchmakingResultEntry::MatchTypeIconFrameName)
        .def_readwrite("StatusIconFrameName", &FMatchmakingResultEntry::StatusIconFrameName)
        .def_readwrite("Message", &FMatchmakingResultEntry::Message)
  ;
}