#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBodyRegionProtectionDefinition()
{
    py::class_< UBodyRegionProtectionDefinition,  UGBXDefinition   >("UBodyRegionProtectionDefinition")
        .def_readwrite("BodyHitRegion", &UBodyRegionProtectionDefinition::BodyHitRegion)
        .def_readwrite("DamageModifierPercent", &UBodyRegionProtectionDefinition::DamageModifierPercent)
        .def_readwrite("DamageImpactEffects", &UBodyRegionProtectionDefinition::DamageImpactEffects)
        .def_readwrite("PercentOfMaxHealthLimit", &UBodyRegionProtectionDefinition::PercentOfMaxHealthLimit)
        .def_readwrite("PhysicalMaterial", &UBodyRegionProtectionDefinition::PhysicalMaterial)
        .def("StaticClass", &UBodyRegionProtectionDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}