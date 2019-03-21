#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeDefinitionMultiContext()
{
    class_< UAttributeDefinitionMultiContext, bases< UAttributeDefinitionBase >  , boost::noncopyable>("UAttributeDefinitionMultiContext", no_init)
        .def_readwrite("MultiContextResolver", &UAttributeDefinitionMultiContext::MultiContextResolver)
        .def("StaticClass", &UAttributeDefinitionMultiContext::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDescriptors", &UAttributeDefinitionMultiContext::GetDescriptors)
        .def("GetBaseValues", &UAttributeDefinitionMultiContext::GetBaseValues)
        .def("GetValues", &UAttributeDefinitionMultiContext::GetValues)
        .def("StaticGetAttributeValues", &UAttributeDefinitionMultiContext::StaticGetAttributeValues)
        .def("ResolveContexts", &UAttributeDefinitionMultiContext::ResolveContexts)
        .staticmethod("StaticClass")
  ;
}