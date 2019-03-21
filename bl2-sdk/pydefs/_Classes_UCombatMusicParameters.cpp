#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UCombatMusicParameters()
{
    class_< UCombatMusicParameters, bases< UGBXDefinition >  , boost::noncopyable>("UCombatMusicParameters", no_init)
        .def_readwrite("FullThreatThreshholdValue", &UCombatMusicParameters::FullThreatThreshholdValue)
        .def_readwrite("MediumThreatThreshholdValue", &UCombatMusicParameters::MediumThreatThreshholdValue)
        .def_readwrite("NoThreatThressholdValue", &UCombatMusicParameters::NoThreatThressholdValue)
        .def_readwrite("ThreatLevelSubtractedPerSecond", &UCombatMusicParameters::ThreatLevelSubtractedPerSecond)
        .def_readwrite("HighestThreatAllowed", &UCombatMusicParameters::HighestThreatAllowed)
        .def_readwrite("RequiredThreatValueIfTargeted", &UCombatMusicParameters::RequiredThreatValueIfTargeted)
        .def_readwrite("ThreatSurgeThreshold", &UCombatMusicParameters::ThreatSurgeThreshold)
        .def_readwrite("MediumThreatVolumeFadeTime", &UCombatMusicParameters::MediumThreatVolumeFadeTime)
        .def_readwrite("MediumThreatRtpc", &UCombatMusicParameters::MediumThreatRtpc)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsPlus1", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsPlus1)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsPlus2", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsPlus2)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsPlus3", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsPlus3)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsPlus4", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsPlus4)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsPlus5", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsPlus5)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsMinus1", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsMinus1)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsMinus2", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsMinus2)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsMinus3", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsMinus3)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsMinus4", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsMinus4)
        .def_readwrite("EnemyThreatMultiplierWhenLevelIsMinus5", &UCombatMusicParameters::EnemyThreatMultiplierWhenLevelIsMinus5)
        .def_readwrite("EnemyDamagesPlayerWeight", &UCombatMusicParameters::EnemyDamagesPlayerWeight)
        .def_readwrite("ThreatFromShieldDown", &UCombatMusicParameters::ThreatFromShieldDown)
        .def_readwrite("MinLongestTimeCombatMusicPlays", &UCombatMusicParameters::MinLongestTimeCombatMusicPlays)
        .def_readwrite("MaxLongestTimeCombatMusicPlays", &UCombatMusicParameters::MaxLongestTimeCombatMusicPlays)
        .def_readwrite("MinTimeBeforeCombatMusicStartsAgain", &UCombatMusicParameters::MinTimeBeforeCombatMusicStartsAgain)
        .def_readwrite("MaxTimeBeforeCombatMusicStartsAgain", &UCombatMusicParameters::MaxTimeBeforeCombatMusicStartsAgain)
        .def_readwrite("CombatMusicManagerUpdateFrequency", &UCombatMusicParameters::CombatMusicManagerUpdateFrequency)
        .def_readwrite("TimeAllowedToReachFullThreat", &UCombatMusicParameters::TimeAllowedToReachFullThreat)
        .def_readwrite("FadeBackToFullVolumeTime", &UCombatMusicParameters::FadeBackToFullVolumeTime)
        .def_readwrite("TimeBetweenShieldDownThreats", &UCombatMusicParameters::TimeBetweenShieldDownThreats)
        .def_readwrite("StateChangeDelay", &UCombatMusicParameters::StateChangeDelay)
        .def_readwrite("EnemyNotTargetingPlayerTimeout", &UCombatMusicParameters::EnemyNotTargetingPlayerTimeout)
        .def("StaticClass", &UCombatMusicParameters::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}