#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillTreeTierStateData(py::object m)
{
    py::class_< FSkillTreeTierStateData >(m, "FSkillTreeTierStateData")
        .def_readwrite("ParentBranchDefinition", &FSkillTreeTierStateData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeTierStateData::TierNumber)
        .def_readwrite("PointsSpentInTier", &FSkillTreeTierStateData::PointsSpentInTier)
  ;
}