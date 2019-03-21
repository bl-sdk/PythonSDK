#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponScopeGFxDefinition()
{
    class_< UWeaponScopeGFxDefinition, bases< UWillowGFxMovie3DDefinition >  , boost::noncopyable>("UWeaponScopeGFxDefinition", no_init)
        .def_readwrite("LinkageMappings_Manufacturers", &UWeaponScopeGFxDefinition::LinkageMappings_Manufacturers)
        .def_readwrite("LinkageMappings_WeaponTypes", &UWeaponScopeGFxDefinition::LinkageMappings_WeaponTypes)
        .def("StaticClass", &UWeaponScopeGFxDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}