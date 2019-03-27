#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBalanceModification(py::module &m)
{
    py::class_< FBalanceModification >(m, "FBalanceModification")
        .def_readwrite("MinEffectiveLevel", &FBalanceModification::MinEffectiveLevel)
        .def_readwrite("EnemyHealthMultiplier", &FBalanceModification::EnemyHealthMultiplier)
        .def_readwrite("BadassEnemyHealthMultiplier", &FBalanceModification::BadassEnemyHealthMultiplier)
        .def_readwrite("EnemyShieldStrengthMultiplier", &FBalanceModification::EnemyShieldStrengthMultiplier)
        .def_readwrite("BadassEnemyShieldStrengthMultiplier", &FBalanceModification::BadassEnemyShieldStrengthMultiplier)
        .def_readwrite("EnemyDamageMultiplier", &FBalanceModification::EnemyDamageMultiplier)
        .def_readwrite("BadassEnemyDamageMultiplier", &FBalanceModification::BadassEnemyDamageMultiplier)
        .def_readwrite("XPGainedFromCombatMultiplier", &FBalanceModification::XPGainedFromCombatMultiplier)
        .def_readwrite("XPGainedFromQuestsMultiplier", &FBalanceModification::XPGainedFromQuestsMultiplier)
        .def_readwrite("BadassRankGainMultiplier", &FBalanceModification::BadassRankGainMultiplier)
        .def_readwrite("AmplifiedDamageMultiplier", &FBalanceModification::AmplifiedDamageMultiplier)
        .def_readwrite("PlayerVehicleWeaponDamageMultiplier", &FBalanceModification::PlayerVehicleWeaponDamageMultiplier)
        .def_readwrite("AttributeEffectsForSpawnedEnemies", &FBalanceModification::AttributeEffectsForSpawnedEnemies)
        .def_readwrite("AttributeEffectsForPlayers", &FBalanceModification::AttributeEffectsForPlayers)
        .def_readwrite("AmmoDropsPerPlayerMultiplier", &FBalanceModification::AmmoDropsPerPlayerMultiplier)
        .def_readwrite("GearDrops_CommonWeightModifier_PT3_BaseValueOverride", &FBalanceModification::GearDrops_CommonWeightModifier_PT3_BaseValueOverride)
        .def_readwrite("ChestItemPool_Weight_2_Uncommon_PT3_Multiplier", &FBalanceModification::ChestItemPool_Weight_2_Uncommon_PT3_Multiplier)
        .def_readwrite("StatusEffectChanceScales", &FBalanceModification::StatusEffectChanceScales)
        .def_readwrite("AIDamageScaleByLevelDifference", &FBalanceModification::AIDamageScaleByLevelDifference)
  ;
}