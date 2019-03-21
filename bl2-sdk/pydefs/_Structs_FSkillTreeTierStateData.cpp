#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillTreeTierStateData()
{
    class_< FSkillTreeTierStateData >("FSkillTreeTierStateData", no_init)
        .def_readwrite("ParentBranchDefinition", &FSkillTreeTierStateData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeTierStateData::TierNumber)
        .def_readwrite("PointsSpentInTier", &FSkillTreeTierStateData::PointsSpentInTier)
  ;
}