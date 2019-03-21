#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryAttributeContextResolver()
{
    class_< UInventoryAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UInventoryAttributeContextResolver", no_init)
        .def_readwrite("InventoryDefinition", &UInventoryAttributeContextResolver::InventoryDefinition)
        .def("StaticClass", &UInventoryAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UInventoryAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}