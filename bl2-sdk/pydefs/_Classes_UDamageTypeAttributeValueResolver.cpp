#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDamageTypeAttributeValueResolver()
{
    class_< UDamageTypeAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UDamageTypeAttributeValueResolver", no_init)
        .def_readwrite("ValueIfNotMatched", &UDamageTypeAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("DamageTypes", &UDamageTypeAttributeValueResolver::DamageTypes)
        .def("StaticClass", &UDamageTypeAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}