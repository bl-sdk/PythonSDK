#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCoverDebugScoringData()
{
    py::class_< FCoverDebugScoringData >("FCoverDebugScoringData")
        .def_readwrite("PriorityName", &FCoverDebugScoringData::PriorityName)
        .def_readwrite("Score", &FCoverDebugScoringData::Score)
  ;
}