#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UOwnerAttributeContextResolver()
{
    class_< UOwnerAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UOwnerAttributeContextResolver", no_init)
        .def("StaticClass", &UOwnerAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UOwnerAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}