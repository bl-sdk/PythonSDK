#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UResourcePoolAttributeDefinition()
{
    class_< UResourcePoolAttributeDefinition, bases< UAttributeDefinition >  , boost::noncopyable>("UResourcePoolAttributeDefinition", no_init)
        .def_readwrite("Resource", &UResourcePoolAttributeDefinition::Resource)
        .def("StaticClass", &UResourcePoolAttributeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}