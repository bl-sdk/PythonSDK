#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FOnlinePlayerScore()
{
    py::class_< FOnlinePlayerScore >("FOnlinePlayerScore")
        .def_readwrite("PlayerID", &FOnlinePlayerScore::PlayerID)
        .def_readwrite("TeamID", &FOnlinePlayerScore::TeamID)
        .def_readwrite("Score", &FOnlinePlayerScore::Score)
  ;
}