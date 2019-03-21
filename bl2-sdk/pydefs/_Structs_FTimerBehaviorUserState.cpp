#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTimerBehaviorUserState()
{
    class_< FTimerBehaviorUserState >("FTimerBehaviorUserState", no_init)
        .def_readonly("Timers", &FTimerBehaviorUserState::Timers)
  ;
}