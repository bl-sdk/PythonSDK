#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorEventState()
{
    class_< FBehaviorEventState >("FBehaviorEventState", no_init)
        .def_readwrite("TriggerCount", &FBehaviorEventState::TriggerCount)
        .def_readwrite("LastTriggerTime", &FBehaviorEventState::LastTriggerTime)
        .def_readwrite("FilterObject", &FBehaviorEventState::FilterObject)
  ;
}