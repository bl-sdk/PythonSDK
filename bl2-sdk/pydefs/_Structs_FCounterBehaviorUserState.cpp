#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCounterBehaviorUserState(py::object m)
{
    py::class_< FCounterBehaviorUserState >(m, "FCounterBehaviorUserState")
        .def_readonly("Counters", &FCounterBehaviorUserState::Counters)
  ;
}