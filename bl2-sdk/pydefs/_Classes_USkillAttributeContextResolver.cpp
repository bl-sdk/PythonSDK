#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillAttributeContextResolver(py::module &m)
{
    py::class_< USkillAttributeContextResolver,  UAttributeContextResolver   >(m, "USkillAttributeContextResolver")
        .def_readwrite("AssociatedSkill", &USkillAttributeContextResolver::AssociatedSkill)
        .def_readwrite("AssociatedSkillPathName", &USkillAttributeContextResolver::AssociatedSkillPathName)
          ;
}