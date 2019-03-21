#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SkillCustomEvent()
{
    class_< UBehavior_SkillCustomEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SkillCustomEvent", no_init)
        .def_readwrite("EventName", &UBehavior_SkillCustomEvent::EventName)
        .def_readwrite("SkillDef", &UBehavior_SkillCustomEvent::SkillDef)
        .def("StaticClass", &UBehavior_SkillCustomEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SkillCustomEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}