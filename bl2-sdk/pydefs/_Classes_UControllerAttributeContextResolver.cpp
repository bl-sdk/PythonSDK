#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UControllerAttributeContextResolver()
{
    class_< UControllerAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UControllerAttributeContextResolver", no_init)
        .def("StaticClass", &UControllerAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}