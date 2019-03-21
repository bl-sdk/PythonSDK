#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FViewIdToLeaderboardName(py::object m)
{
    py::class_< FViewIdToLeaderboardName >(m, "FViewIdToLeaderboardName")
        .def_readwrite("ViewId", &FViewIdToLeaderboardName::ViewId)
        .def_readwrite("LeaderboardName", &FViewIdToLeaderboardName::LeaderboardName)
  ;
}