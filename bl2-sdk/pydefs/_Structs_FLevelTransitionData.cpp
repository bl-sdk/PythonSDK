#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelTransitionData(py::object m)
{
    py::class_< FLevelTransitionData >(m, "FLevelTransitionData")
        .def_readwrite("TargetLevel", &FLevelTransitionData::TargetLevel)
        .def_readwrite("LevelTransition", &FLevelTransitionData::LevelTransition)
  ;
}