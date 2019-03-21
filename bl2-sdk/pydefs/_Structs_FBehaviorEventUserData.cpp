#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBehaviorEventUserData()
{
    py::class_< FBehaviorEventUserData >("FBehaviorEventUserData")
        .def_readwrite("EventName", &FBehaviorEventUserData::EventName)
        .def_readwrite("MaxTriggerCount", &FBehaviorEventUserData::MaxTriggerCount)
        .def_readwrite("ReTriggerDelay", &FBehaviorEventUserData::ReTriggerDelay)
        .def_readwrite("FilterObject", &FBehaviorEventUserData::FilterObject)
  ;
}