#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowMindAttributeContextResolver()
{
    class_< UWillowMindAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UWillowMindAttributeContextResolver", no_init)
        .def("StaticClass", &UWillowMindAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}