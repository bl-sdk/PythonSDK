#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHitRegionDamage(py::object m)
{
    py::class_< FHitRegionDamage >(m, "FHitRegionDamage")
        .def_readwrite("BodyHitRegion", &FHitRegionDamage::BodyHitRegion)
        .def_readwrite("Damage", &FHitRegionDamage::Damage)
        .def_readwrite("RecentDamage", &FHitRegionDamage::RecentDamage)
        .def_readwrite("LastPctHealthForRunDamageTriggeredBehaviors", &FHitRegionDamage::LastPctHealthForRunDamageTriggeredBehaviors)
        .def_readwrite("LastPctHealthForRunHealingTriggeredBehaviors", &FHitRegionDamage::LastPctHealthForRunHealingTriggeredBehaviors)
  ;
}