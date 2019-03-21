#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillKillEventData()
{
    py::class_< FSkillKillEventData,  FSpecializedBehaviorEvent   >("FSkillKillEventData")
        .def_readwrite("EventType", &FSkillKillEventData::EventType)
        .def_readwrite("EventConstraints", &FSkillKillEventData::EventConstraints)
  ;
}