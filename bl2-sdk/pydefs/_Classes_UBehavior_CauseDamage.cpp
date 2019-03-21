#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_CauseDamage(py::object m)
{
    py::class_< UBehavior_CauseDamage,  UBehaviorBase   >(m, "UBehavior_CauseDamage")
        .def_readwrite("VfTable_IIDamageCauser", &UBehavior_CauseDamage::VfTable_IIDamageCauser)
        .def_readwrite("DamageFormula", &UBehavior_CauseDamage::DamageFormula)
        .def_readwrite("RadiusFormula", &UBehavior_CauseDamage::RadiusFormula)
        .def_readwrite("MomentumFormula", &UBehavior_CauseDamage::MomentumFormula)
        .def_readwrite("OverrideContext", &UBehavior_CauseDamage::OverrideContext)
        .def_readwrite("OverrideName", &UBehavior_CauseDamage::OverrideName)
        .def_readwrite("DamageSource", &UBehavior_CauseDamage::DamageSource)
        .def_readwrite("DamageTypeDefinition", &UBehavior_CauseDamage::DamageTypeDefinition)
        .def_readwrite("ImpactDefinition", &UBehavior_CauseDamage::ImpactDefinition)
        .def_readwrite("StatusEffectDamage", &UBehavior_CauseDamage::StatusEffectDamage)
        .def_readwrite("StatusEffectChance", &UBehavior_CauseDamage::StatusEffectChance)
        .def_readwrite("DamageTarget", &UBehavior_CauseDamage::DamageTarget)
        .def_readwrite("CustomTargetName", &UBehavior_CauseDamage::CustomTargetName)
        .def_readwrite("TargetContext", &UBehavior_CauseDamage::TargetContext)
        .def_readwrite("BarrelSourceTime", &UBehavior_CauseDamage::BarrelSourceTime)
        .def_readwrite("PlantSourceTime", &UBehavior_CauseDamage::PlantSourceTime)
        .def_readwrite("InstigatorSelfDamageScale", &UBehavior_CauseDamage::InstigatorSelfDamageScale)
        .def_readwrite("SelfActor", &UBehavior_CauseDamage::SelfActor)
        .def("StaticClass", &UBehavior_CauseDamage::StaticClass, py::return_value_policy::reference)
        .def("GetControllerResponsibleForDamage", &UBehavior_CauseDamage::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &UBehavior_CauseDamage::GetInstigator, py::return_value_policy::reference)
        .def("GetInstigatorSelfDamageScale", &UBehavior_CauseDamage::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &UBehavior_CauseDamage::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &UBehavior_CauseDamage::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &UBehavior_CauseDamage::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &UBehavior_CauseDamage::GetStatusEffectBaseDamage)
        .def("ApplyBehaviorToContext", &UBehavior_CauseDamage::ApplyBehaviorToContext)
          ;
}