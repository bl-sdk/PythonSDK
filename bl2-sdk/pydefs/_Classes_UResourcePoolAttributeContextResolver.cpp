#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UResourcePoolAttributeContextResolver()
{
    class_< UResourcePoolAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UResourcePoolAttributeContextResolver", no_init)
        .def_readwrite("Resource", &UResourcePoolAttributeContextResolver::Resource)
        .def("StaticClass", &UResourcePoolAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}