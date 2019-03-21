#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowInteractiveObjectAttributeContextResolver()
{
    class_< UWillowInteractiveObjectAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UWillowInteractiveObjectAttributeContextResolver", no_init)
        .def("StaticClass", &UWillowInteractiveObjectAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UWillowInteractiveObjectAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}