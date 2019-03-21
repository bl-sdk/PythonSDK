#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillTreeBranchStateData()
{
    py::class_< FSkillTreeBranchStateData >("FSkillTreeBranchStateData")
        .def_readwrite("BranchDefinition", &FSkillTreeBranchStateData::BranchDefinition)
        .def_readwrite("PointsSpentInBranch", &FSkillTreeBranchStateData::PointsSpentInBranch)
        .def_readwrite("MaxPointsForBranch", &FSkillTreeBranchStateData::MaxPointsForBranch)
  ;
}