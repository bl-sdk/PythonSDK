#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillTreeTierLayoutData()
{
    class_< FSkillTreeTierLayoutData >("FSkillTreeTierLayoutData", no_init)
        .def_readwrite("ParentBranchDefinition", &FSkillTreeTierLayoutData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeTierLayoutData::TierNumber)
        .def_readwrite("DependencyBranchDefinition", &FSkillTreeTierLayoutData::DependencyBranchDefinition)
        .def_readwrite("DependencyTierNumber", &FSkillTreeTierLayoutData::DependencyTierNumber)
        .def_readwrite("Skills", &FSkillTreeTierLayoutData::Skills)
  ;
}