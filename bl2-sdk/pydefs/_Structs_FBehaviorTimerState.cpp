#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorTimerState(py::object m)
{
    py::class_< FBehaviorTimerState >(m, "FBehaviorTimerState")
        .def_readwrite("Delay", &FBehaviorTimerState::Delay)
        .def_readwrite("EventTime", &FBehaviorTimerState::EventTime)
  ;
}