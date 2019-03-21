#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCurrentProficiencySkillAttributeContextResolver()
{
    py::class_< UCurrentProficiencySkillAttributeContextResolver,  UAttributeContextResolver   >("UCurrentProficiencySkillAttributeContextResolver")
        .def("StaticClass", &UCurrentProficiencySkillAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UCurrentProficiencySkillAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}