#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAttributeDefinitionDefault()
{
    class_< FAttributeDefinitionDefault >("FAttributeDefinitionDefault", no_init)
        .def_readwrite("Attribute", &FAttributeDefinitionDefault::Attribute)
        .def_readwrite("DefaultValue", &FAttributeDefinitionDefault::DefaultValue)
  ;
}