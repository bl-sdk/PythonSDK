#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_ActivateListenerSkill(py::module &m)
{
    py::class_< UBehavior_ActivateListenerSkill,  UBehaviorBase   >(m, "UBehavior_ActivateListenerSkill")
        .def_readwrite("SkillToActivate", &UBehavior_ActivateListenerSkill::SkillToActivate)
        .def("StaticClass", &UBehavior_ActivateListenerSkill::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_ActivateListenerSkill::ApplyBehaviorToContext)
          ;
}