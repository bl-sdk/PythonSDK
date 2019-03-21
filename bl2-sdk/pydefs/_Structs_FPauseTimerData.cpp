#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPauseTimerData()
{
    class_< FPauseTimerData >("FPauseTimerData", no_init)
        .def_readwrite("FuncName", &FPauseTimerData::FuncName)
        .def_readwrite("Rate", &FPauseTimerData::Rate)
        .def_readwrite("Count", &FPauseTimerData::Count)
        .def_readwrite("TimerObj", &FPauseTimerData::TimerObj)
  ;
}