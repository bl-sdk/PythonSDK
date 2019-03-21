#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillDamageEventData()
{
    class_< FSkillDamageEventData, bases< FSpecializedBehaviorEvent >  >("FSkillDamageEventData", no_init)
        .def_readwrite("EventType", &FSkillDamageEventData::EventType)
        .def_readwrite("EventConstraints", &FSkillDamageEventData::EventConstraints)
  ;
}