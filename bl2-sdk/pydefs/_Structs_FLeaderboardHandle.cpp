#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLeaderboardHandle(py::object m)
{
    py::class_< FLeaderboardHandle >(m, "FLeaderboardHandle")
        .def_readwrite("Dud", &FLeaderboardHandle::Dud)
  ;
}