#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryDefinitionAttributeContextResolver()
{
    class_< UInventoryDefinitionAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UInventoryDefinitionAttributeContextResolver", no_init)
        .def("StaticClass", &UInventoryDefinitionAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UInventoryDefinitionAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}