#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlinePlayerScore(py::module &m)
{
    py::class_< FOnlinePlayerScore >(m, "FOnlinePlayerScore")
        .def_readwrite("PlayerID", &FOnlinePlayerScore::PlayerID)
        .def_readwrite("TeamID", &FOnlinePlayerScore::TeamID)
        .def_readwrite("Score", &FOnlinePlayerScore::Score)
  ;
}