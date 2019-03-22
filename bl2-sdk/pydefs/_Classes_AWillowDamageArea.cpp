#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowDamageArea(py::module &m)
{
    py::class_< AWillowDamageArea,  AActor   >(m, "AWillowDamageArea")
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
        .def("StaticClass", &AWillowDamageArea::StaticClass, py::return_value_policy::reference)
        .def("eventDestroyed", &AWillowDamageArea::eventDestroyed)
        .def("OnToggle", &AWillowDamageArea::OnToggle)
        .def("DisableArea", &AWillowDamageArea::DisableArea)
        .def("EnableArea", &AWillowDamageArea::EnableArea)
        .def("IsEnabled", &AWillowDamageArea::IsEnabled)
        .def("eventGetLightProjectileManager", &AWillowDamageArea::eventGetLightProjectileManager, py::return_value_policy::reference)
        .def("GetControllerResponsibleForDamage", &AWillowDamageArea::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &AWillowDamageArea::GetInstigator, py::return_value_policy::reference)
        .def("GetStatusEffectChanceModifier", &AWillowDamageArea::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &AWillowDamageArea::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectBaseDamage", &AWillowDamageArea::GetStatusEffectBaseDamage)
          ;
}