#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHitRegionDamage()
{
    class_< FHitRegionDamage >("FHitRegionDamage", no_init)
        .def_readwrite("BodyHitRegion", &FHitRegionDamage::BodyHitRegion)
        .def_readwrite("Damage", &FHitRegionDamage::Damage)
        .def_readwrite("RecentDamage", &FHitRegionDamage::RecentDamage)
        .def_readwrite("LastPctHealthForRunDamageTriggeredBehaviors", &FHitRegionDamage::LastPctHealthForRunDamageTriggeredBehaviors)
        .def_readwrite("LastPctHealthForRunHealingTriggeredBehaviors", &FHitRegionDamage::LastPctHealthForRunHealingTriggeredBehaviors)
  ;
}