#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxMindAttributeContextResolver()
{
    class_< UGearboxMindAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UGearboxMindAttributeContextResolver", no_init)
        .def("StaticClass", &UGearboxMindAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}