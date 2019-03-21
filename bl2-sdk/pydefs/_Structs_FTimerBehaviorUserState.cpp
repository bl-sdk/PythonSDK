#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimerBehaviorUserState()
{
    py::class_< FTimerBehaviorUserState >("FTimerBehaviorUserState")
        .def_readonly("Timers", &FTimerBehaviorUserState::Timers)
  ;
}