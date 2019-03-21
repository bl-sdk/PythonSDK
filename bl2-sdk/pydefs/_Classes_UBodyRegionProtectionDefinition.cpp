#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBodyRegionProtectionDefinition()
{
    class_< UBodyRegionProtectionDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBodyRegionProtectionDefinition", no_init)
        .def_readwrite("BodyHitRegion", &UBodyRegionProtectionDefinition::BodyHitRegion)
        .def_readwrite("DamageModifierPercent", &UBodyRegionProtectionDefinition::DamageModifierPercent)
        .def_readwrite("DamageImpactEffects", &UBodyRegionProtectionDefinition::DamageImpactEffects)
        .def_readwrite("PercentOfMaxHealthLimit", &UBodyRegionProtectionDefinition::PercentOfMaxHealthLimit)
        .def_readwrite("PhysicalMaterial", &UBodyRegionProtectionDefinition::PhysicalMaterial)
        .def("StaticClass", &UBodyRegionProtectionDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}