#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UChallengeDefinition(py::module &m)
{
    py::class_< UChallengeDefinition,  UGBXDefinition   >(m, "UChallengeDefinition")
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
        .def("StaticClass", &UChallengeDefinition::StaticClass, py::return_value_policy::reference)
        .def("GetRewardText", &UChallengeDefinition::GetRewardText)
        .def("GetDownloadableContentDefinition", &UChallengeDefinition::GetDownloadableContentDefinition, py::return_value_policy::reference)
        .def("OnLevelCompleted", &UChallengeDefinition::OnLevelCompleted)
        .def("SetBehaviorProviderDefinition", &UChallengeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UChallengeDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}