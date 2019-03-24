#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UCurrentProficiencySkillAttributeContextResolver(py::module &m)
{
    py::class_< UCurrentProficiencySkillAttributeContextResolver,  UAttributeContextResolver   >(m, "UCurrentProficiencySkillAttributeContextResolver")
		.def_static("StaticClass", &UCurrentProficiencySkillAttributeContextResolver::StaticClass, py::return_value_policy::reference)
        .def("GetAttributeContext", &UCurrentProficiencySkillAttributeContextResolver::GetAttributeContext, py::return_value_policy::reference)
          ;
}