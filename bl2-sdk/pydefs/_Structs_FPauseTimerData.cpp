#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPauseTimerData(py::object m)
{
    py::class_< FPauseTimerData >(m, "FPauseTimerData")
        .def_readwrite("FuncName", &FPauseTimerData::FuncName)
        .def_readwrite("Rate", &FPauseTimerData::Rate)
        .def_readwrite("Count", &FPauseTimerData::Count)
        .def_readwrite("TimerObj", &FPauseTimerData::TimerObj)
  ;
}