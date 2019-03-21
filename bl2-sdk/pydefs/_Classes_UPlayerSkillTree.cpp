#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPlayerSkillTree()
{
    class_< UPlayerSkillTree, bases< UObject >  , boost::noncopyable>("UPlayerSkillTree", no_init)
        .def_readwrite("SkillTreeRootIndex", &UPlayerSkillTree::SkillTreeRootIndex)
        .def_readwrite("Branches", &UPlayerSkillTree::Branches)
        .def_readwrite("Tiers", &UPlayerSkillTree::Tiers)
        .def_readwrite("Skills", &UPlayerSkillTree::Skills)
        .def_readonly("UnknownData00", &UPlayerSkillTree::UnknownData00)
        .def_readonly("FirstSkillTypeIndex", &UPlayerSkillTree::FirstSkillTypeIndex)
        .def_readwrite("SkillTreeListeners", &UPlayerSkillTree::SkillTreeListeners)
        .def("StaticClass", &UPlayerSkillTree::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSkillPointsSpentInTree", &UPlayerSkillTree::GetSkillPointsSpentInTree)
        .def("UnRegisterListener", &UPlayerSkillTree::UnRegisterListener)
        .def("RegisterListener", &UPlayerSkillTree::RegisterListener)
        .def("Initialize", &UPlayerSkillTree::Initialize)
        .def("UpdateBranchProgression", &UPlayerSkillTree::UpdateBranchProgression)
        .def("InitializeGFxHelper", &UPlayerSkillTree::InitializeGFxHelper)
        .def("InitializeGFxHelper_ActionAbility", &UPlayerSkillTree::InitializeGFxHelper_ActionAbility)
        .def("AllSkills", &UPlayerSkillTree::AllSkills)
        .def("AllSkillsOfType", &UPlayerSkillTree::AllSkillsOfType)
        .def("HasTrainedASkillOfType", &UPlayerSkillTree::HasTrainedASkillOfType)
        .def("GetActionSkill", &UPlayerSkillTree::GetActionSkill, return_value_policy< reference_existing_object >())
        .def("ApplySkillSaveGameData", &UPlayerSkillTree::ApplySkillSaveGameData)
        .def("SaveSkillSaveGameData", &UPlayerSkillTree::SaveSkillSaveGameData)
        .def("GetTierLayout", &UPlayerSkillTree::GetTierLayout)
        .def("GetTierState", &UPlayerSkillTree::GetTierState)
        .def("GetBranchState", &UPlayerSkillTree::GetBranchState)
        .def("GetSkillState", &UPlayerSkillTree::GetSkillState)
        .def("DumpTree", &UPlayerSkillTree::DumpTree)
        .def("SetSkillGrade", &UPlayerSkillTree::SetSkillGrade)
        .def("UpgradeSkill", &UPlayerSkillTree::UpgradeSkill)
        .staticmethod("StaticClass")
  ;
}