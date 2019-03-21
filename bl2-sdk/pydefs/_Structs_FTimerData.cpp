#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimerData()
{
    class_< FTimerData >("FTimerData", no_init)
        .def_readwrite("FuncName", &FTimerData::FuncName)
        .def_readwrite("Rate", &FTimerData::Rate)
        .def_readwrite("Count", &FTimerData::Count)
        .def_readwrite("TimerTimeDilation", &FTimerData::TimerTimeDilation)
        .def_readwrite("TimerObj", &FTimerData::TimerObj)
  ;
}