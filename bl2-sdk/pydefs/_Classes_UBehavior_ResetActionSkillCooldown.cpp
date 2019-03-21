#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ResetActionSkillCooldown()
{
    py::class_< UBehavior_ResetActionSkillCooldown,  UBehaviorBase   >("UBehavior_ResetActionSkillCooldown")
        .def("StaticClass", &UBehavior_ResetActionSkillCooldown::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ResetActionSkillCooldown::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}