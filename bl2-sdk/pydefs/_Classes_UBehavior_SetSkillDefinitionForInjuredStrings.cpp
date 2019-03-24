#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_SetSkillDefinitionForInjuredStrings(py::module &m)
{
    py::class_< UBehavior_SetSkillDefinitionForInjuredStrings,  UBehaviorBase   >(m, "UBehavior_SetSkillDefinitionForInjuredStrings")
		.def_static("StaticClass", &UBehavior_SetSkillDefinitionForInjuredStrings::StaticClass, py::return_value_policy::reference)
        .def_readwrite("SkillDef", &UBehavior_SetSkillDefinitionForInjuredStrings::SkillDef)
        .def("ApplyBehaviorToContext", &UBehavior_SetSkillDefinitionForInjuredStrings::ApplyBehaviorToContext)
          ;
}