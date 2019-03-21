#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_FireCustomSkillEvent()
{
    class_< UBehavior_FireCustomSkillEvent, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_FireCustomSkillEvent", no_init)
        .def_readwrite("EventName", &UBehavior_FireCustomSkillEvent::EventName)
        .def_readwrite("Skill", &UBehavior_FireCustomSkillEvent::Skill)
        .def("StaticClass", &UBehavior_FireCustomSkillEvent::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_FireCustomSkillEvent::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}