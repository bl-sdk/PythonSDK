#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCombatMusicManager()
{
    class_< UCombatMusicManager, bases< UObject >  , boost::noncopyable>("UCombatMusicManager", no_init)
        .def_readwrite("TargetedPlayerStates", &UCombatMusicManager::TargetedPlayerStates)
        .def_readwrite("TimeSinceLastUpdate", &UCombatMusicManager::TimeSinceLastUpdate)
        .def_readwrite("TimeOfNewCombatAction", &UCombatMusicManager::TimeOfNewCombatAction)
        .def_readwrite("TimeCombatMusicStarted", &UCombatMusicManager::TimeCombatMusicStarted)
        .def_readwrite("TimeOfLastStateChange", &UCombatMusicManager::TimeOfLastStateChange)
        .def_readwrite("MaxDurationOfThisCombatMusic", &UCombatMusicManager::MaxDurationOfThisCombatMusic)
        .def_readwrite("LastTimeAddedShieldDownThreat", &UCombatMusicManager::LastTimeAddedShieldDownThreat)
        .def_readwrite("LastTimeMusicTimedOut", &UCombatMusicManager::LastTimeMusicTimedOut)
        .def_readwrite("MaxDurationOfThisMoratorium", &UCombatMusicManager::MaxDurationOfThisMoratorium)
        .def_readwrite("CombatMusicManagerState", &UCombatMusicManager::CombatMusicManagerState)
        .def_readwrite("CurrentThreatValue", &UCombatMusicManager::CurrentThreatValue)
        .def_readwrite("CombatMusicParams", &UCombatMusicManager::CombatMusicParams)
        .def_readwrite("UpdateThreatDelta", &UCombatMusicManager::UpdateThreatDelta)
        .def("StaticClass", &UCombatMusicManager::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetDebugTime", &UCombatMusicManager::GetDebugTime)
        .def("ForceSetThreatLevel", &UCombatMusicManager::ForceSetThreatLevel)
        .def("ForceFadeOutCombatMusic", &UCombatMusicManager::ForceFadeOutCombatMusic)
        .def("SetEnabled", &UCombatMusicManager::SetEnabled)
        .def("Update", &UCombatMusicManager::Update)
        .def("PlayerShieldDown", &UCombatMusicManager::PlayerShieldDown)
        .def("PlayerDamagedByEnemy", &UCombatMusicManager::PlayerDamagedByEnemy)
        .def("EnemyTargetChanged", &UCombatMusicManager::EnemyTargetChanged)
        .def("PlayerPetTargetedByEnemy", &UCombatMusicManager::PlayerPetTargetedByEnemy)
        .def("PlayerTargetedByEnemy", &UCombatMusicManager::PlayerTargetedByEnemy)
        .staticmethod("StaticClass")
  ;
}