#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDamageEventSummary()
{
    class_< FDamageEventSummary >("FDamageEventSummary", no_init)
        .def_readwrite("InitialDamage", &FDamageEventSummary::InitialDamage)
        .def_readwrite("AIDamageScaleReduction", &FDamageEventSummary::AIDamageScaleReduction)
        .def_readwrite("DamageSourceReduction", &FDamageEventSummary::DamageSourceReduction)
        .def_readwrite("InstigatorDamageTypeReduction", &FDamageEventSummary::InstigatorDamageTypeReduction)
        .def_readwrite("ExpLevelDifferenceReduction", &FDamageEventSummary::ExpLevelDifferenceReduction)
        .def_readwrite("RecipientDamageTypeReduction", &FDamageEventSummary::RecipientDamageTypeReduction)
        .def_readwrite("HitRegionReduction", &FDamageEventSummary::HitRegionReduction)
        .def_readwrite("ShieldReduction", &FDamageEventSummary::ShieldReduction)
        .def_readwrite("IntrinsicArmorReduction", &FDamageEventSummary::IntrinsicArmorReduction)
        .def_readwrite("DamageSurfaceReduction", &FDamageEventSummary::DamageSurfaceReduction)
        .def_readwrite("HitRegionCapReduction", &FDamageEventSummary::HitRegionCapReduction)
        .def_readwrite("ProtectionTimerReduction", &FDamageEventSummary::ProtectionTimerReduction)
        .def_readwrite("ProjectileReflectionReduction", &FDamageEventSummary::ProjectileReflectionReduction)
        .def_readwrite("DamageSeverityPercent", &FDamageEventSummary::DamageSeverityPercent)
        .def_readwrite("DamageDealtToShields", &FDamageEventSummary::DamageDealtToShields)
        .def_readwrite("ExtraDamageDealtDueToAmplify", &FDamageEventSummary::ExtraDamageDealtDueToAmplify)
        .def_readwrite("FinalDamage", &FDamageEventSummary::FinalDamage)
        .def_readwrite("PreviousHealth", &FDamageEventSummary::PreviousHealth)
        .def_readwrite("HitRegion", &FDamageEventSummary::HitRegion)
        .def_readwrite("ReflectionData", &FDamageEventSummary::ReflectionData)
        .def_readonly("DamageTakenSkillEventsTriggered", &FDamageEventSummary::DamageTakenSkillEventsTriggered)
        .def_readonly("DamageDealtSkillEventsTriggered", &FDamageEventSummary::DamageDealtSkillEventsTriggered)
  ;
}