#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBehaviorEventUserData()
{
    class_< FBehaviorEventUserData >("FBehaviorEventUserData", no_init)
        .def_readwrite("EventName", &FBehaviorEventUserData::EventName)
        .def_readwrite("MaxTriggerCount", &FBehaviorEventUserData::MaxTriggerCount)
        .def_readwrite("ReTriggerDelay", &FBehaviorEventUserData::ReTriggerDelay)
        .def_readwrite("FilterObject", &FBehaviorEventUserData::FilterObject)
  ;
}