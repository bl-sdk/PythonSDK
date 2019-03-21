#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLeaderboardTemplate(py::object m)
{
    py::class_< FLeaderboardTemplate >(m, "FLeaderboardTemplate")
        .def_readwrite("LeaderboardName", &FLeaderboardTemplate::LeaderboardName)
        .def_readwrite("UpdateType", &FLeaderboardTemplate::UpdateType)
        .def_readwrite("LeaderboardSize", &FLeaderboardTemplate::LeaderboardSize)
        .def_readwrite("SortType", &FLeaderboardTemplate::SortType)
        .def_readwrite("DisplayFormat", &FLeaderboardTemplate::DisplayFormat)
        .def_readwrite("LeaderboardRef", &FLeaderboardTemplate::LeaderboardRef)
  ;
}