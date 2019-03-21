#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillDamageEventData()
{
    py::class_< FSkillDamageEventData,  FSpecializedBehaviorEvent   >("FSkillDamageEventData")
        .def_readwrite("EventType", &FSkillDamageEventData::EventType)
        .def_readwrite("EventConstraints", &FSkillDamageEventData::EventConstraints)
  ;
}