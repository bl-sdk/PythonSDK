#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDesignerAttributeDefinition()
{
    class_< UDesignerAttributeDefinition, bases< UAttributeDefinition >  , boost::noncopyable>("UDesignerAttributeDefinition", no_init)
        .def_readwrite("ValueName", &UDesignerAttributeDefinition::ValueName)
        .def_readwrite("BaseValue", &UDesignerAttributeDefinition::BaseValue)
        .def_readwrite("Scope", &UDesignerAttributeDefinition::Scope)
        .def_readwrite("GlobalScopeResolverClass", &UDesignerAttributeDefinition::GlobalScopeResolverClass)
        .def_readwrite("DesignerAttributeResolverClass", &UDesignerAttributeDefinition::DesignerAttributeResolverClass)
        .def("StaticClass", &UDesignerAttributeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}