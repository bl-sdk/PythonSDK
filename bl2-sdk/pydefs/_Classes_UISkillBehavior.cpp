#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UISkillBehavior(py::object m)
{
    py::class_< UISkillBehavior,  UInterface   >(m, "UISkillBehavior")
        .def("StaticClass", &UISkillBehavior::StaticClass, py::return_value_policy::reference)
        .def("Behavior_GetSkillInstigatorController", &UISkillBehavior::Behavior_GetSkillInstigatorController, py::return_value_policy::reference)
        .def("Behavior_UpgradeSkill", &UISkillBehavior::Behavior_UpgradeSkill)
        .def("Behavior_DeactivateSkill", &UISkillBehavior::Behavior_DeactivateSkill)
        .def("Behavior_ActivateSkill", &UISkillBehavior::Behavior_ActivateSkill)
          ;
}