#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_AttemptStatusEffect(py::module &m)
{
    py::class_< UBehavior_AttemptStatusEffect,  UBehaviorBase   >(m, "UBehavior_AttemptStatusEffect")
        .def_readwrite("VfTable_IIDamageCauser", &UBehavior_AttemptStatusEffect::VfTable_IIDamageCauser)
        .def_readwrite("StatusEffect", &UBehavior_AttemptStatusEffect::StatusEffect)
        .def_readwrite("TargetContext", &UBehavior_AttemptStatusEffect::TargetContext)
        .def_readwrite("InstigatorChanceModifier", &UBehavior_AttemptStatusEffect::InstigatorChanceModifier)
        .def_readwrite("StatusEffectDamage", &UBehavior_AttemptStatusEffect::StatusEffectDamage)
        .def_readwrite("StatusEffectChance", &UBehavior_AttemptStatusEffect::StatusEffectChance)
        .def("StaticClass", &UBehavior_AttemptStatusEffect::StaticClass, py::return_value_policy::reference)
        .def("GetControllerResponsibleForDamage", &UBehavior_AttemptStatusEffect::GetControllerResponsibleForDamage, py::return_value_policy::reference)
        .def("GetInstigator", &UBehavior_AttemptStatusEffect::GetInstigator, py::return_value_policy::reference)
        .def("GetInstigatorSelfDamageScale", &UBehavior_AttemptStatusEffect::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &UBehavior_AttemptStatusEffect::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &UBehavior_AttemptStatusEffect::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &UBehavior_AttemptStatusEffect::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &UBehavior_AttemptStatusEffect::GetStatusEffectBaseDamage)
        .def("AttempEffect", &UBehavior_AttemptStatusEffect::AttempEffect)
        .def("ApplyBehaviorToContext", &UBehavior_AttemptStatusEffect::ApplyBehaviorToContext)
          ;
}