#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverDebugScoringInfo(py::object m)
{
    py::class_< FCoverDebugScoringInfo >(m, "FCoverDebugScoringInfo")
        .def_readwrite("PriorityName", &FCoverDebugScoringInfo::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringInfo::Score)
  ;
}