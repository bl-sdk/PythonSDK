#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeDefinitionBase()
{
    class_< UAttributeDefinitionBase, bases< UGBXDefinition >  , boost::noncopyable>("UAttributeDefinitionBase", no_init)
        .def_readwrite("AttributeDataType", &UAttributeDefinitionBase::AttributeDataType)
        .def_readwrite("ContextResolverChain", &UAttributeDefinitionBase::ContextResolverChain)
        .def_readwrite("ValueResolverChain", &UAttributeDefinitionBase::ValueResolverChain)
        .def("StaticClass", &UAttributeDefinitionBase::StaticClass, return_value_policy< reference_existing_object >())
        .def("SetAttributeBaseValue", &UAttributeDefinitionBase::SetAttributeBaseValue)
        .def("RemoveAttributeModifier", &UAttributeDefinitionBase::RemoveAttributeModifier)
        .def("AddAttributeModifier", &UAttributeDefinitionBase::AddAttributeModifier)
        .def("GetDescriptorFromContext", &UAttributeDefinitionBase::GetDescriptorFromContext)
        .def("GetBaseValueFromContext", &UAttributeDefinitionBase::GetBaseValueFromContext)
        .def("GetValueFromContext", &UAttributeDefinitionBase::GetValueFromContext)
        .def("ResolveContexts", &UAttributeDefinitionBase::ResolveContexts)
        .def("ResolveContext", &UAttributeDefinitionBase::ResolveContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}