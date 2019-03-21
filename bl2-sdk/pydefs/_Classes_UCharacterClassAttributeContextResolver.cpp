#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCharacterClassAttributeContextResolver()
{
    class_< UCharacterClassAttributeContextResolver, bases< UAttributeContextResolver >  , boost::noncopyable>("UCharacterClassAttributeContextResolver", no_init)
        .def("StaticClass", &UCharacterClassAttributeContextResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}