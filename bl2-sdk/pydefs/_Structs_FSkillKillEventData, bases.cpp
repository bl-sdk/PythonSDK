#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillKillEventData()
{
    class_< FSkillKillEventData, bases< FSpecializedBehaviorEvent >  >("FSkillKillEventData", no_init)
        .def_readwrite("EventType", &FSkillKillEventData::EventType)
        .def_readwrite("EventConstraints", &FSkillKillEventData::EventConstraints)
  ;
}