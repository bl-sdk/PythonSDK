#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorTimerState()
{
    py::class_< FBehaviorTimerState >("FBehaviorTimerState")
        .def_readwrite("Delay", &FBehaviorTimerState::Delay)
        .def_readwrite("EventTime", &FBehaviorTimerState::EventTime)
  ;
}