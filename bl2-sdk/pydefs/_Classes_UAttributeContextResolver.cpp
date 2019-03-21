#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeContextResolver()
{
    class_< UAttributeContextResolver, bases< UObject >  , boost::noncopyable>("UAttributeContextResolver", no_init)
        .def("StaticClass", &UAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetAttributeContext", &UAttributeContextResolver::eventGetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}