#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCounterBehaviorUserState()
{
    py::class_< FCounterBehaviorUserState >("FCounterBehaviorUserState")
        .def_readonly("Counters", &FCounterBehaviorUserState::Counters)
  ;
}