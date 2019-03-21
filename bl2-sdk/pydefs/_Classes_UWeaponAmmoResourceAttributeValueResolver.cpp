#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponAmmoResourceAttributeValueResolver()
{
    class_< UWeaponAmmoResourceAttributeValueResolver, bases< UAttributeValueResolver >  , boost::noncopyable>("UWeaponAmmoResourceAttributeValueResolver", no_init)
        .def_readwrite("ValueIfNotMatched", &UWeaponAmmoResourceAttributeValueResolver::ValueIfNotMatched)
        .def_readwrite("AmmoResources", &UWeaponAmmoResourceAttributeValueResolver::AmmoResources)
        .def("StaticClass", &UWeaponAmmoResourceAttributeValueResolver::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}