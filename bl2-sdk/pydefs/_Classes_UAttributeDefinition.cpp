#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeDefinition()
{
    class_< UAttributeDefinition, bases< UAttributeDefinitionBase >  , boost::noncopyable>("UAttributeDefinition", no_init)
        .def("StaticClass", &UAttributeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDescriptor", &UAttributeDefinition::GetDescriptor)
        .def("GetBaseValue", &UAttributeDefinition::GetBaseValue)
        .def("GetValue", &UAttributeDefinition::GetValue)
        .def("StaticGetAttributeValueOrDefault", &UAttributeDefinition::StaticGetAttributeValueOrDefault)
        .staticmethod("StaticClass")
  ;
}