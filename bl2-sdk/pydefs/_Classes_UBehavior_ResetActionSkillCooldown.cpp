#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ResetActionSkillCooldown(py::module &m)
{
    py::class_< UBehavior_ResetActionSkillCooldown,  UBehaviorBase   >(m, "UBehavior_ResetActionSkillCooldown")
        .def("StaticClass", &UBehavior_ResetActionSkillCooldown::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ResetActionSkillCooldown::ApplyBehaviorToContext)
          ;
}