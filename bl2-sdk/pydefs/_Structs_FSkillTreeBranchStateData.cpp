#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillTreeBranchStateData()
{
    class_< FSkillTreeBranchStateData >("FSkillTreeBranchStateData", no_init)
        .def_readwrite("BranchDefinition", &FSkillTreeBranchStateData::BranchDefinition)
        .def_readwrite("PointsSpentInBranch", &FSkillTreeBranchStateData::PointsSpentInBranch)
        .def_readwrite("MaxPointsForBranch", &FSkillTreeBranchStateData::MaxPointsForBranch)
  ;
}