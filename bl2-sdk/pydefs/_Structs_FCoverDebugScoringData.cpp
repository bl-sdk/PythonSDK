#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverDebugScoringData(py::object m)
{
    py::class_< FCoverDebugScoringData >(m, "FCoverDebugScoringData")
        .def_readwrite("PriorityName", &FCoverDebugScoringData::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringData::Score)
  ;
}