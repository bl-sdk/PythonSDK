#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerSkillAttributeValueResolver(py::module &m)
{
    py::class_< UPlayerSkillAttributeValueResolver,  UAttributeValueResolver   >(m, "UPlayerSkillAttributeValueResolver")
		.def_static("StaticClass", &UPlayerSkillAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .def_readwrite("AssociatedSkill", &UPlayerSkillAttributeValueResolver::AssociatedSkill)
          ;
}