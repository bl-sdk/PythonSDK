#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBreathingLoopInfo()
{
    class_< FBreathingLoopInfo >("FBreathingLoopInfo", no_init)
        .def_readwrite("Condition", &FBreathingLoopInfo::Condition)
        .def_readwrite("StartAkEvent", &FBreathingLoopInfo::StartAkEvent)
        .def_readwrite("StopAkEvent", &FBreathingLoopInfo::StopAkEvent)
  ;
}