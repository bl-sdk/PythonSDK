#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowDamageArea()
{
    class_< AWillowDamageArea, bases< AActor >  , boost::noncopyable>("AWillowDamageArea", no_init)
        .def_readwrite("CollisionPrimitiveType", &AWillowDamageArea::CollisionPrimitiveType)
        .def_readwrite("DamagePerSecond", &AWillowDamageArea::DamagePerSecond)
        .def_readwrite("StatusEffectDamage", &AWillowDamageArea::StatusEffectDamage)
        .def_readwrite("StatusEffectChance", &AWillowDamageArea::StatusEffectChance)
        .def_readwrite("DamageSource", &AWillowDamageArea::DamageSource)
        .def_readwrite("DamageTypeDefinition", &AWillowDamageArea::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &AWillowDamageArea::ImpactDefinition)
        .def_readwrite("DamageTickFrequency", &AWillowDamageArea::DamageTickFrequency)
        .def_readwrite("DamageTickTime", &AWillowDamageArea::DamageTickTime)
        .def_readwrite("BeamSourceSocket", &AWillowDamageArea::BeamSourceSocket)
        .def_readwrite("BeamTargetSocket", &AWillowDamageArea::BeamTargetSocket)
        .def_readwrite("BeamFiringMode", &AWillowDamageArea::BeamFiringMode)
        .def_readwrite("BeamTargets", &AWillowDamageArea::BeamTargets)
        .def_readwrite("BarrelSourceTime", &AWillowDamageArea::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &AWillowDamageArea::PlantSourceTime)
        .def("StaticClass", &AWillowDamageArea::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventDestroyed", &AWillowDamageArea::eventDestroyed)
        .def("OnToggle", &AWillowDamageArea::OnToggle)
        .def("DisableArea", &AWillowDamageArea::DisableArea)
        .def("EnableArea", &AWillowDamageArea::EnableArea)
        .def("IsEnabled", &AWillowDamageArea::IsEnabled)
        .def("eventGetLightProjectileManager", &AWillowDamageArea::eventGetLightProjectileManager, return_value_policy< reference_existing_object >())
        .def("GetControllerResponsibleForDamage", &AWillowDamageArea::GetControllerResponsibleForDamage, return_value_policy< reference_existing_object >())
        .def("GetInstigator", &AWillowDamageArea::GetInstigator, return_value_policy< reference_existing_object >())
        .def("GetStatusEffectChanceModifier", &AWillowDamageArea::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &AWillowDamageArea::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectBaseDamage", &AWillowDamageArea::GetStatusEffectBaseDamage)
        .staticmethod("StaticClass")
  ;
}