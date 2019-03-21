#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorCounterState()
{
    py::class_< FBehaviorCounterState >("FBehaviorCounterState")
        .def_readwrite("CurrentValue", &FBehaviorCounterState::CurrentValue)
        .def_readwrite("Target", &FBehaviorCounterState::Target)
  ;
}