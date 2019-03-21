#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAIComponentAttributeContextResolver()
{
    class_< UAIComponentAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UAIComponentAttributeContextResolver", no_init)
        .def("StaticClass", &UAIComponentAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UAIComponentAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}