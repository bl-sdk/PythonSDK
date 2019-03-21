#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkillDefinitionForInjuredStrings()
{
    py::class_< UBehavior_SetSkillDefinitionForInjuredStrings,  UBehaviorBase   >("UBehavior_SetSkillDefinitionForInjuredStrings")
        .def_readwrite("SkillDef", &UBehavior_SetSkillDefinitionForInjuredStrings::SkillDef)
        .def("StaticClass", &UBehavior_SetSkillDefinitionForInjuredStrings::StaticClass, py::return_value_policy::reference)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkillDefinitionForInjuredStrings::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}