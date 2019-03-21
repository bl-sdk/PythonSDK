#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttributeMultiContextResolver()
{
    class_< UAttributeMultiContextResolver, bases< UObject >  , boost::noncopyable>("UAttributeMultiContextResolver", no_init)
        .def("StaticClass", &UAttributeMultiContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}