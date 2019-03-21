#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerControllerAttributeContextResolver()
{
    class_< UPlayerControllerAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UPlayerControllerAttributeContextResolver", no_init)
        .def("StaticClass", &UPlayerControllerAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}