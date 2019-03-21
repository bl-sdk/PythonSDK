#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillAttributeContextResolver()
{
    py::class_< USkillAttributeContextResolver,  UAttributeContextResolver   >("USkillAttributeContextResolver")
        .def_readwrite("AssociatedSkill", &USkillAttributeContextResolver::AssociatedSkill)
        .def_readwrite("AssociatedSkillPathName", &USkillAttributeContextResolver::AssociatedSkillPathName)
        .def("StaticClass", &USkillAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}