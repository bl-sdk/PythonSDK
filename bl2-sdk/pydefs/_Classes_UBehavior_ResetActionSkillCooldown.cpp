#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_ResetActionSkillCooldown()
{
    class_< UBehavior_ResetActionSkillCooldown, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_ResetActionSkillCooldown", no_init)
        .def("StaticClass", &UBehavior_ResetActionSkillCooldown::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_ResetActionSkillCooldown::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}