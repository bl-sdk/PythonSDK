#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDesignerAttributeDefinition()
{
    py::class_< UDesignerAttributeDefinition,  UAttributeDefinition   >("UDesignerAttributeDefinition")
        .def_readwrite("ValueName", &UDesignerAttributeDefinition::ValueName)
        .def_readwrite("BaseValue", &UDesignerAttributeDefinition::BaseValue)
        .def_readwrite("Scope", &UDesignerAttributeDefinition::Scope)
        .def_readwrite("GlobalScopeResolverClass", &UDesignerAttributeDefinition::GlobalScopeResolverClass)
        .def_readwrite("DesignerAttributeResolverClass", &UDesignerAttributeDefinition::DesignerAttributeResolverClass)
        .def("StaticClass", &UDesignerAttributeDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}