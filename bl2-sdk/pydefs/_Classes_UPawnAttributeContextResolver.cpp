#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPawnAttributeContextResolver()
{
    class_< UPawnAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UPawnAttributeContextResolver", no_init)
        .def("StaticClass", &UPawnAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}