#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UActorAttributeContextResolver()
{
    class_< UActorAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UActorAttributeContextResolver", no_init)
        .def("StaticClass", &UActorAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UActorAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}