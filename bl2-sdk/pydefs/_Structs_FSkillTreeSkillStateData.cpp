#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillTreeSkillStateData()
{
    class_< FSkillTreeSkillStateData >("FSkillTreeSkillStateData", no_init)
        .def_readwrite("SkillDefinition", &FSkillTreeSkillStateData::SkillDefinition)
        .def_readwrite("ParentBranchDefinition", &FSkillTreeSkillStateData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeSkillStateData::TierNumber)
        .def_readwrite("SkillGrade", &FSkillTreeSkillStateData::SkillGrade)
  ;
}