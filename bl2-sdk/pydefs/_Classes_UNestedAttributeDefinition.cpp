#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UNestedAttributeDefinition()
{
    class_< UNestedAttributeDefinition, bases< UAttributeDefinition >  , boost::noncopyable>("UNestedAttributeDefinition", no_init)
        .def_readwrite("OuterContextAttributeDefinition", &UNestedAttributeDefinition::OuterContextAttributeDefinition)
        .def_readwrite("InnerContextAttributeDefinition", &UNestedAttributeDefinition::InnerContextAttributeDefinition)
        .def("StaticClass", &UNestedAttributeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}