#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponTypeAttributeValueResolver()
{
    class_< UWeaponTypeAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UWeaponTypeAttributeValueResolver", no_init)
        .def_readwrite("ValueIfNotMatched", &UWeaponTypeAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("WeaponTypes", &UWeaponTypeAttributeValueResolver::WeaponTypes)
        .def("StaticClass", &UWeaponTypeAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}