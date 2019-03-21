#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_AttemptStatusEffect()
{
    class_< UBehavior_AttemptStatusEffect, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_AttemptStatusEffect", no_init)
        .def_readwrite("VfTable_IIDamageCauser", &UBehavior_AttemptStatusEffect::VfTable_IIDamageCauser)
        .def_readwrite("StatusEffect", &UBehavior_AttemptStatusEffect::StatusEffect)
        .def_readwrite("TargetContext", &UBehavior_AttemptStatusEffect::TargetContext)
        .def_readwrite("InstigatorChanceModifier", &UBehavior_AttemptStatusEffect::InstigatorChanceModifier)
        .def_readwrite("StatusEffectDamage", &UBehavior_AttemptStatusEffect::StatusEffectDamage)
        .def_readwrite("StatusEffectChance", &UBehavior_AttemptStatusEffect::StatusEffectChance)
        .def("StaticClass", &UBehavior_AttemptStatusEffect::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetControllerResponsibleForDamage", &UBehavior_AttemptStatusEffect::GetControllerResponsibleForDamage, return_value_policy< reference_existing_object >())
        .def("GetInstigator", &UBehavior_AttemptStatusEffect::GetInstigator, return_value_policy< reference_existing_object >())
        .def("GetInstigatorSelfDamageScale", &UBehavior_AttemptStatusEffect::GetInstigatorSelfDamageScale)
        .def("GetFireIntervalChanceModifier", &UBehavior_AttemptStatusEffect::GetFireIntervalChanceModifier)
        .def("GetStatusEffectBaseChanceModifier", &UBehavior_AttemptStatusEffect::GetStatusEffectBaseChanceModifier)
        .def("GetStatusEffectChanceModifier", &UBehavior_AttemptStatusEffect::GetStatusEffectChanceModifier)
        .def("GetStatusEffectBaseDamage", &UBehavior_AttemptStatusEffect::GetStatusEffectBaseDamage)
        .def("AttempEffect", &UBehavior_AttemptStatusEffect::AttempEffect)
        .def("ApplyBehaviorToContext", &UBehavior_AttemptStatusEffect::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}