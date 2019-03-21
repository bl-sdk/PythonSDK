#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLeaderboardEntry()
{
    py::class_< FLeaderboardEntry >("FLeaderboardEntry")
        .def_readwrite("PlayerUID", &FLeaderboardEntry::PlayerUID)
        .def_readwrite("Rank", &FLeaderboardEntry::Rank)
        .def_readwrite("Score", &FLeaderboardEntry::Score)
  ;
}