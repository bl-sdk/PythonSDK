#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillTreeBranchStateData(py::object m)
{
    py::class_< FSkillTreeBranchStateData >(m, "FSkillTreeBranchStateData")
        .def_readwrite("BranchDefinition", &FSkillTreeBranchStateData::BranchDefinition)
        .def_readwrite("PointsSpentInBranch", &FSkillTreeBranchStateData::PointsSpentInBranch)
        .def_readwrite("MaxPointsForBranch", &FSkillTreeBranchStateData::MaxPointsForBranch)
  ;
}