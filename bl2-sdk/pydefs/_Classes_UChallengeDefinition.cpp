#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UChallengeDefinition()
{
    class_< UChallengeDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UChallengeDefinition", no_init)
        .def_readwrite("VfTable_IIBehaviorProvider", &UChallengeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("VfTable_IIDlcLicensableObject", &UChallengeDefinition::VfTable_IIDlcLicensableObject)
        .def_readwrite("ChallengeName", &UChallengeDefinition::ChallengeName)
        .def_readwrite("Description", &UChallengeDefinition::Description)
        .def_readwrite("AssociatedMap", &UChallengeDefinition::AssociatedMap)
        .def_readwrite("ChallengeType", &UChallengeDefinition::ChallengeType)
        .def_readwrite("LevelChallengeObjectGroupIdx", &UChallengeDefinition::LevelChallengeObjectGroupIdx)
        .def_readwrite("GoalValue", &UChallengeDefinition::GoalValue)
        .def_readwrite("ChallengeCategoryDef", &UChallengeDefinition::ChallengeCategoryDef)
        .def_readwrite("GiveChallengeWhenPlayerEntersMaps", &UChallengeDefinition::GiveChallengeWhenPlayerEntersMaps)
        .def_readwrite("CompletedAttributeEffects", &UChallengeDefinition::CompletedAttributeEffects)
        .def_readwrite("BPReward", &UChallengeDefinition::BPReward)
        .def_readwrite("RewardTextKey", &UChallengeDefinition::RewardTextKey)
        .def_readwrite("Levels", &UChallengeDefinition::Levels)
        .def_readwrite("DlcExpansion", &UChallengeDefinition::DlcExpansion)
        .def_readwrite("DlcBalanceMod", &UChallengeDefinition::DlcBalanceMod)
        .def_readwrite("BehaviorProvider", &UChallengeDefinition::BehaviorProvider)
        .def_readwrite("LevelChallengeOneOffIdx", &UChallengeDefinition::LevelChallengeOneOffIdx)
        .def("StaticClass", &UChallengeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetRewardText", &UChallengeDefinition::GetRewardText)
        .def("GetDownloadableContentDefinition", &UChallengeDefinition::GetDownloadableContentDefinition, return_value_policy< reference_existing_object >())
        .def("OnLevelCompleted", &UChallengeDefinition::OnLevelCompleted)
        .def("SetBehaviorProviderDefinition", &UChallengeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UChallengeDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}