#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerSkillTreeBranchData()
{
    class_< FPlayerSkillTreeBranchData >("FPlayerSkillTreeBranchData", no_init)
        .def_readwrite("Definition", &FPlayerSkillTreeBranchData::Definition)
        .def_readwrite("BranchPointsToUnlockNextBranch", &FPlayerSkillTreeBranchData::BranchPointsToUnlockNextBranch)
        .def_readwrite("Index", &FPlayerSkillTreeBranchData::Index)
        .def_readwrite("ParentBranchIndex", &FPlayerSkillTreeBranchData::ParentBranchIndex)
        .def_readwrite("PrevBranchIndex", &FPlayerSkillTreeBranchData::PrevBranchIndex)
        .def_readwrite("NextBranchIndex", &FPlayerSkillTreeBranchData::NextBranchIndex)
        .def_readwrite("ChildBranchIndices", &FPlayerSkillTreeBranchData::ChildBranchIndices)
        .def_readwrite("TierIndices", &FPlayerSkillTreeBranchData::TierIndices)
        .def_readwrite("Owner", &FPlayerSkillTreeBranchData::Owner)
  ;
}