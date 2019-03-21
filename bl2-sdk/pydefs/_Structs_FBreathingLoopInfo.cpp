#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBreathingLoopInfo(py::object m)
{
    py::class_< FBreathingLoopInfo >(m, "FBreathingLoopInfo")
        .def_readwrite("Condition", &FBreathingLoopInfo::Condition)
        .def_readwrite("StartAkEvent", &FBreathingLoopInfo::StartAkEvent)
        .def_readwrite("StopAkEvent", &FBreathingLoopInfo::StopAkEvent)
  ;
}