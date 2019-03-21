#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_DeactivateSkill()
{
    class_< UBehavior_DeactivateSkill, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_DeactivateSkill", no_init)
        .def_readwrite("SkillToDeactivate", &UBehavior_DeactivateSkill::SkillToDeactivate)
        .def("StaticClass", &UBehavior_DeactivateSkill::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_DeactivateSkill::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}