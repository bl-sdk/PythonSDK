#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateListenerSkill()
{
    class_< UBehavior_ActivateListenerSkill, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ActivateListenerSkill", no_init)
        .def_readwrite("SkillToActivate", &UBehavior_ActivateListenerSkill::SkillToActivate)
        .def("StaticClass", &UBehavior_ActivateListenerSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ActivateListenerSkill::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}