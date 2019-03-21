#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBreathingLoopInfo()
{
    py::class_< FBreathingLoopInfo >("FBreathingLoopInfo")
        .def_readwrite("Condition", &FBreathingLoopInfo::Condition)
        .def_readwrite("StartAkEvent", &FBreathingLoopInfo::StartAkEvent)
        .def_readwrite("StopAkEvent", &FBreathingLoopInfo::StopAkEvent)
  ;
}