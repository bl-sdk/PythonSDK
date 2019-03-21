#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAttributeDefinitionBase()
{
    py::class_< UAttributeDefinitionBase,  UGBXDefinition   >("UAttributeDefinitionBase")
        .def_readwrite("AttributeDataType", &UAttributeDefinitionBase::AttributeDataType)
        .def_readwrite("ContextResolverChain", &UAttributeDefinitionBase::ContextResolverChain)
        .def_readwrite("ValueResolverChain", &UAttributeDefinitionBase::ValueResolverChain)
        .def("StaticClass", &UAttributeDefinitionBase::StaticClass, py::return_value_policy::reference)
        .def("SetAttributeBaseValue", &UAttributeDefinitionBase::SetAttributeBaseValue)
        .def("RemoveAttributeModifier", &UAttributeDefinitionBase::RemoveAttributeModifier)
        .def("AddAttributeModifier", &UAttributeDefinitionBase::AddAttributeModifier)
        .def("GetDescriptorFromContext", &UAttributeDefinitionBase::GetDescriptorFromContext)
        .def("GetBaseValueFromContext", &UAttributeDefinitionBase::GetBaseValueFromContext)
        .def("GetValueFromContext", &UAttributeDefinitionBase::GetValueFromContext)
        .def("ResolveContexts", &UAttributeDefinitionBase::ResolveContexts)
        .def("ResolveContext", &UAttributeDefinitionBase::ResolveContext, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}