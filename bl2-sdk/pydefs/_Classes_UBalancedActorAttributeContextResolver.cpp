#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBalancedActorAttributeContextResolver()
{
    class_< UBalancedActorAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UBalancedActorAttributeContextResolver", no_init)
        .def("StaticClass", &UBalancedActorAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UBalancedActorAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}