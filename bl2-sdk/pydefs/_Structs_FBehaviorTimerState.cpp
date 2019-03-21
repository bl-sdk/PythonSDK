#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorTimerState()
{
    class_< FBehaviorTimerState >("FBehaviorTimerState", no_init)
        .def_readwrite("Delay", &FBehaviorTimerState::Delay)
        .def_readwrite("EventTime", &FBehaviorTimerState::EventTime)
  ;
}