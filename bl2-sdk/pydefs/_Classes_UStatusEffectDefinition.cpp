#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UStatusEffectDefinition()
{
    class_< UStatusEffectDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UStatusEffectDefinition", no_init)
        .def_readwrite("BaseDuration", &UStatusEffectDefinition::BaseDuration)
        .def_readwrite("BaseSpreadTimeInterval", &UStatusEffectDefinition::BaseSpreadTimeInterval)
        .def_readwrite("BaseSpreadDistanceFromSource", &UStatusEffectDefinition::BaseSpreadDistanceFromSource)
        .def_readwrite("BaseSpreadCap", &UStatusEffectDefinition::BaseSpreadCap)
        .def_readwrite("TargetStatusEffectChanceModifier", &UStatusEffectDefinition::TargetStatusEffectChanceModifier)
        .def_readwrite("TargetStatusEffectDurationModifier", &UStatusEffectDefinition::TargetStatusEffectDurationModifier)
        .def_readwrite("TargetStatusEffectDamageModifier", &UStatusEffectDefinition::TargetStatusEffectDamageModifier)
        .def_readwrite("OnApplication", &UStatusEffectDefinition::OnApplication)
        .def_readwrite("OnDurationBegin", &UStatusEffectDefinition::OnDurationBegin)
        .def_readwrite("OnDurationEnd", &UStatusEffectDefinition::OnDurationEnd)
        .def_readwrite("OnSpreadToTarget", &UStatusEffectDefinition::OnSpreadToTarget)
        .def_readwrite("DamageSurfaceChanceModifiers", &UStatusEffectDefinition::DamageSurfaceChanceModifiers)
        .def_readwrite("StatusEffectType", &UStatusEffectDefinition::StatusEffectType)
        .def_readwrite("DamageTypeDefinition", &UStatusEffectDefinition::DamageTypeDefinition)
        .def_readwrite("AppliedEffectStatId", &UStatusEffectDefinition::AppliedEffectStatId)
        .def_readwrite("ScreenParticleInit", &UStatusEffectDefinition::ScreenParticleInit)
        .def("StaticClass", &UStatusEffectDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}