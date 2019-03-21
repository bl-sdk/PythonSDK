#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UISkillBehavior()
{
    class_< UISkillBehavior, bases< UInterface >  , boost::noncopyable>("UISkillBehavior", no_init)
        .def("StaticClass", &UISkillBehavior::StaticClass, return_value_policy< reference_existing_object >())
        .def("Behavior_GetSkillInstigatorController", &UISkillBehavior::Behavior_GetSkillInstigatorController, return_value_policy< reference_existing_object >())
        .def("Behavior_UpgradeSkill", &UISkillBehavior::Behavior_UpgradeSkill)
        .def("Behavior_DeactivateSkill", &UISkillBehavior::Behavior_DeactivateSkill)
        .def("Behavior_ActivateSkill", &UISkillBehavior::Behavior_ActivateSkill)
        .staticmethod("StaticClass")
  ;
}