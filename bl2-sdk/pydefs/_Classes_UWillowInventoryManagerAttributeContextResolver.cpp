#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowInventoryManagerAttributeContextResolver()
{
    class_< UWillowInventoryManagerAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UWillowInventoryManagerAttributeContextResolver", no_init)
        .def("StaticClass", &UWillowInventoryManagerAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAttributeContext", &UWillowInventoryManagerAttributeContextResolver::GetAttributeContext, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}