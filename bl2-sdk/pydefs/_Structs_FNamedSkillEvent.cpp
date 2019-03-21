#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNamedSkillEvent()
{
    class_< FNamedSkillEvent >("FNamedSkillEvent", no_init)
        .def_readwrite("EventName", &FNamedSkillEvent::EventName)
        .def_readwrite("RequiredSkills", &FNamedSkillEvent::RequiredSkills)
        .def_readwrite("EventResponses", &FNamedSkillEvent::EventResponses)
        .def_readwrite("RequiredActionSkillState", &FNamedSkillEvent::RequiredActionSkillState)
  ;
}