#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCounterBehaviorUserState()
{
    class_< FCounterBehaviorUserState >("FCounterBehaviorUserState", no_init)
        .def_readonly("Counters", &FCounterBehaviorUserState::Counters)
  ;
}