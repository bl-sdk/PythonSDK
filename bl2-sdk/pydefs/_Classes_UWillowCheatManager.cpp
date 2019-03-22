#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowCheatManager(py::module &m)
{
    py::class_< UWillowCheatManager,  UCheatManager   >(m, "UWillowCheatManager")
        .def_readwrite("ClassModPoolDefinitionName", &UWillowCheatManager::ClassModPoolDefinitionName)
        .def_readwrite("CurrencyBalanceFormulaMultiplier", &UWillowCheatManager::CurrencyBalanceFormulaMultiplier)
        .def_readwrite("CurrencyBalanceFormulaLevel", &UWillowCheatManager::CurrencyBalanceFormulaLevel)
        .def_readwrite("CurrencyBalanceFormulaOffset", &UWillowCheatManager::CurrencyBalanceFormulaOffset)
        .def_readwrite("AwesomeLevelBoostForAutoBalancedInventory", &UWillowCheatManager::AwesomeLevelBoostForAutoBalancedInventory)
        .def_readwrite("BalanceMeItemPoolListDefinitionName", &UWillowCheatManager::BalanceMeItemPoolListDefinitionName)
        .def_readwrite("BalanceMeAwesomeLevel", &UWillowCheatManager::BalanceMeAwesomeLevel)
        .def_readwrite("ResourceUpgrades", &UWillowCheatManager::ResourceUpgrades)
        .def_readwrite("StatusEffects", &UWillowCheatManager::StatusEffects)
        .def_readwrite("WatchedSkills", &UWillowCheatManager::WatchedSkills)
        .def_readwrite("SkillDebugPages", &UWillowCheatManager::SkillDebugPages)
        .def_readwrite("LastDebugPageIndex", &UWillowCheatManager::LastDebugPageIndex)
        .def_readwrite("LastSkillDebugPageUpdateTime", &UWillowCheatManager::LastSkillDebugPageUpdateTime)
        .def_readwrite("LastDamagedAmount", &UWillowCheatManager::LastDamagedAmount)
        .def_readwrite("SpawnItemPool_PoolToSpawnOutOf", &UWillowCheatManager::SpawnItemPool_PoolToSpawnOutOf)
        .def_readwrite("SpawnItemPool_GameStage", &UWillowCheatManager::SpawnItemPool_GameStage)
        .def_readwrite("SpawnItemPool_AwesomeLevel", &UWillowCheatManager::SpawnItemPool_AwesomeLevel)
        .def_readwrite("SpawnItemPool_NumTimesToSpawnFromPool", &UWillowCheatManager::SpawnItemPool_NumTimesToSpawnFromPool)
        .def_readwrite("SpawnItemPool_LastUpdateTime", &UWillowCheatManager::SpawnItemPool_LastUpdateTime)
        .def_readwrite("SpawnItemPool_AccruedTime", &UWillowCheatManager::SpawnItemPool_AccruedTime)
        .def_readwrite("SpawnItemPool_FuncName", &UWillowCheatManager::SpawnItemPool_FuncName)
          ;
}