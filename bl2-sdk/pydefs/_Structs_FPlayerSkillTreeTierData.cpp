#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPlayerSkillTreeTierData()
{
    py::class_< FPlayerSkillTreeTierData >("FPlayerSkillTreeTierData")
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