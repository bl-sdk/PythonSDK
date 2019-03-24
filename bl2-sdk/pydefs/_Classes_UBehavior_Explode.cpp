#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_Explode(py::module &m)
{
    py::class_< UBehavior_Explode,  UBehaviorBase   >(m, "UBehavior_Explode")
		.def_static("StaticClass", &UBehavior_Explode::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIDamageCauser", &UBehavior_Explode::VfTable_IIDamageCauser)
        .def_readwrite("DamageSource", &UBehavior_Explode::DamageSource)
        .def_readwrite("DamageRadiusFormula", &UBehavior_Explode::DamageRadiusFormula)
        .def_readwrite("DamageFormula", &UBehavior_Explode::DamageFormula)
        .def_readwrite("MomentumFormula", &UBehavior_Explode::MomentumFormula)
        .def_readwrite("Definition", &UBehavior_Explode::Definition)
        .def_readwrite("LocationOffset", &UBehavior_Explode::LocationOffset)
        .def_readwrite("SocketName", &UBehavior_Explode::SocketName)
        .def_readwrite("DamageContext", &UBehavior_Explode::DamageContext)
        .def_readwrite("HitNormal", &UBehavior_Explode::HitNormal)
        .def_readwrite("StatusEffectDamage", &UBehavior_Explode::StatusEffectDamage)
        .def_readwrite("StatusEffectChance", &UBehavior_Explode::StatusEffectChance)
        .def_readwrite("OverrideContext", &UBehavior_Explode::OverrideContext)
        .def_readwrite("OverrideName", &UBehavior_Explode::OverrideName)
        .def_readwrite("HitContext", &UBehavior_Explode::HitContext)
        .def_readwrite("BarrelSourceTime", &UBehavior_Explode::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &UBehavior_Explode::PlantSourceTime)
        .def_readwrite("InstigatorSelfDamageScale", &UBehavior_Explode::InstigatorSelfDamageScale)
        .def_readwrite("OverrideActor", &UBehavior_Explode::OverrideActor)
        .def_readwrite("SelfActor", &UBehavior_Explode::SelfActor)
        .def("SetInstigatorOverride", &UBehavior_Explode::SetInstigatorOverride)
        .def("GetControllerResponsibleForDamage", &UBehavior_Explode::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &UBehavior_Explode::GetInstigator, py::return_value_policy::reference)
        .def("GetInstigatorSelfDamageScale", &UBehavior_Explode::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &UBehavior_Explode::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &UBehavior_Explode::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &UBehavior_Explode::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &UBehavior_Explode::GetStatusEffectBaseDamage)
        .def("ApplyBehaviorToContext", &UBehavior_Explode::ApplyBehaviorToContext)
          ;
}