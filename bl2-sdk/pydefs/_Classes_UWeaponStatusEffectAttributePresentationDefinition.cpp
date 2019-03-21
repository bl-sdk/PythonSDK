#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWeaponStatusEffectAttributePresentationDefinition()
{
    class_< UWeaponStatusEffectAttributePresentationDefinition, bases< UAttributePresentationDefinition >  , boost::noncopyable>("UWeaponStatusEffectAttributePresentationDefinition", no_init)
        .def_readwrite("MappingData", &UWeaponStatusEffectAttributePresentationDefinition::MappingData)
        .def("StaticClass", &UWeaponStatusEffectAttributePresentationDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}