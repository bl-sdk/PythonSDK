#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_DeactivateSkill()
{
    py::class_< UBehavior_DeactivateSkill,  UBehaviorBase   >("UBehavior_DeactivateSkill")
        .def_readwrite("SkillToDeactivate", &UBehavior_DeactivateSkill::SkillToDeactivate)
        .def("StaticClass", &UBehavior_DeactivateSkill::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_DeactivateSkill::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}