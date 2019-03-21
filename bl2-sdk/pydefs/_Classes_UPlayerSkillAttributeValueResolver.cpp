#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPlayerSkillAttributeValueResolver()
{
    py::class_< UPlayerSkillAttributeValueResolver,  UAttributeValueResolver   >("UPlayerSkillAttributeValueResolver")
        .def_readwrite("AssociatedSkill", &UPlayerSkillAttributeValueResolver::AssociatedSkill)
        .def("StaticClass", &UPlayerSkillAttributeValueResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}