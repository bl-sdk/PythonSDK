#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryAttributeDefinition()
{
    class_< UInventoryAttributeDefinition, bases< UAttributeDefinition >  , boost::noncopyable>("UInventoryAttributeDefinition", no_init)
        .def("StaticClass", &UInventoryAttributeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}