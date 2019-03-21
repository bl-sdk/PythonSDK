#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqEvent_TakeHitRegionDamage()
{
    class_< USeqEvent_TakeHitRegionDamage, bases< USequenceEvent >  , boost::noncopyable>("USeqEvent_TakeHitRegionDamage", no_init)
        .def_readwrite("MinDamageAmount", &USeqEvent_TakeHitRegionDamage::MinDamageAmount)
        .def_readwrite("DamageThreshold", &USeqEvent_TakeHitRegionDamage::DamageThreshold)
        .def_readwrite("DamageTypes", &USeqEvent_TakeHitRegionDamage::DamageTypes)
        .def_readwrite("DamageTypeDefinitions", &USeqEvent_TakeHitRegionDamage::DamageTypeDefinitions)
        .def_readwrite("IgnoreDamageTypes", &USeqEvent_TakeHitRegionDamage::IgnoreDamageTypes)
        .def_readwrite("IgnoreDamageTypeDefinitions", &USeqEvent_TakeHitRegionDamage::IgnoreDamageTypeDefinitions)
        .def_readwrite("DamageHitRegion", &USeqEvent_TakeHitRegionDamage::DamageHitRegion)
        .def_readwrite("CurrentDamage", &USeqEvent_TakeHitRegionDamage::CurrentDamage)
        .def("StaticClass", &USeqEvent_TakeHitRegionDamage::StaticClass, return_value_policy< reference_existing_object >())
        .def("Reset", &USeqEvent_TakeHitRegionDamage::Reset)
        .def("HandleDamage", &USeqEvent_TakeHitRegionDamage::HandleDamage)
        .def("IsValidDamageTypeDefinition", &USeqEvent_TakeHitRegionDamage::IsValidDamageTypeDefinition)
        .def("IsValidDamageType", &USeqEvent_TakeHitRegionDamage::IsValidDamageType)
        .staticmethod("StaticClass")
  ;
}