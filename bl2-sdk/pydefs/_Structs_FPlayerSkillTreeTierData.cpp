#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerSkillTreeTierData()
{
    class_< FPlayerSkillTreeTierData >("FPlayerSkillTreeTierData", no_init)
        .def_readwrite("SkillIndices", &FPlayerSkillTreeTierData::SkillIndices)
        .def_readwrite("BranchPointsToUnlockTier", &FPlayerSkillTreeTierData::BranchPointsToUnlockTier)
        .def_readwrite("Index", &FPlayerSkillTreeTierData::Index)
        .def_readwrite("PrevTierIndex", &FPlayerSkillTreeTierData::PrevTierIndex)
        .def_readwrite("NextTierIndex", &FPlayerSkillTreeTierData::NextTierIndex)
        .def_readwrite("ParentBranchIndex", &FPlayerSkillTreeTierData::ParentBranchIndex)
        .def_readwrite("TierNumber", &FPlayerSkillTreeTierData::TierNumber)
        .def_readwrite("Owner", &FPlayerSkillTreeTierData::Owner)
  ;
}