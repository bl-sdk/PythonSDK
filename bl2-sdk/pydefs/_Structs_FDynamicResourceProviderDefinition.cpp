#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDynamicResourceProviderDefinition()
{
    class_< FDynamicResourceProviderDefinition >("FDynamicResourceProviderDefinition", no_init)
        .def_readwrite("ProviderTag", &FDynamicResourceProviderDefinition::ProviderTag)
        .def_readwrite("ProviderClassName", &FDynamicResourceProviderDefinition::ProviderClassName)
        .def_readwrite("ProviderClass", &FDynamicResourceProviderDefinition::ProviderClass)
  ;
}