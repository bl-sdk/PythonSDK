#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverDebugScoringInfo()
{
    py::class_< FCoverDebugScoringInfo >("FCoverDebugScoringInfo")
        .def_readwrite("PriorityName", &FCoverDebugScoringInfo::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringInfo::Score)
  ;
}