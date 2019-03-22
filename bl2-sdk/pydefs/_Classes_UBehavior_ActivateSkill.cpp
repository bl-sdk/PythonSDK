#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateSkill(py::module &m)
{
    py::class_< UBehavior_ActivateSkill,  UBehaviorBase   >(m, "UBehavior_ActivateSkill")
        .def_readwrite("SkillToActivate", &UBehavior_ActivateSkill::SkillToActivate)
        .def_readwrite("AdditionalTargetContext", &UBehavior_ActivateSkill::AdditionalTargetContext)
        .def("StaticClass", &UBehavior_ActivateSkill::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ActivateSkill::ApplyBehaviorToContext)
          ;
}