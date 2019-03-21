#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorCounterState()
{
    class_< FBehaviorCounterState >("FBehaviorCounterState", no_init)
        .def_readwrite("CurrentValue", &FBehaviorCounterState::CurrentValue)
        .def_readwrite("Target", &FBehaviorCounterState::Target)
  ;
}