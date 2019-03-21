#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UProjectileAttributeContextResolver()
{
    class_< UProjectileAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UProjectileAttributeContextResolver", no_init)
        .def("StaticClass", &UProjectileAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UProjectileAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}