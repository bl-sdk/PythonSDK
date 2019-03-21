#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateSkill()
{
    class_< UBehavior_ActivateSkill, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ActivateSkill", no_init)
        .def_readwrite("SkillToActivate", &UBehavior_ActivateSkill::SkillToActivate)
        .def_readwrite("AdditionalTargetContext", &UBehavior_ActivateSkill::AdditionalTargetContext)
        .def("StaticClass", &UBehavior_ActivateSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ActivateSkill::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}