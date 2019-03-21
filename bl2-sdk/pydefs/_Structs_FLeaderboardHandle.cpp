#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLeaderboardHandle()
{
    py::class_< FLeaderboardHandle >("FLeaderboardHandle")
        .def_readwrite("Dud", &FLeaderboardHandle::Dud)
  ;
}