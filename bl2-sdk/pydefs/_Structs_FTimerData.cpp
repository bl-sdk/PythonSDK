#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTimerData()
{
    py::class_< FTimerData >("FTimerData")
        .def_readwrite("FuncName", &FTimerData::FuncName)
        .def_readwrite("Rate", &FTimerData::Rate)
        .def_readwrite("Count", &FTimerData::Count)
        .def_readwrite("TimerTimeDilation", &FTimerData::TimerTimeDilation)
        .def_readwrite("TimerObj", &FTimerData::TimerObj)
  ;
}