#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorCounterState(py::module &m)
{
    py::class_< FBehaviorCounterState >(m, "FBehaviorCounterState")
        .def_readwrite("CurrentValue", &FBehaviorCounterState::CurrentValue)
        .def_readwrite("Target", &FBehaviorCounterState::Target)
  ;
}