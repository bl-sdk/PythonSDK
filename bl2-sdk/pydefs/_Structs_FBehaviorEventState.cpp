#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorEventState()
{
    py::class_< FBehaviorEventState >("FBehaviorEventState")
        .def_readwrite("TriggerCount", &FBehaviorEventState::TriggerCount)
        .def_readwrite("LastTriggerTime", &FBehaviorEventState::LastTriggerTime)
        .def_readwrite("FilterObject", &FBehaviorEventState::FilterObject)
  ;
}