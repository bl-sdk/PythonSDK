#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillIndexLevelRequirementPair()
{
    class_< FSkillIndexLevelRequirementPair >("FSkillIndexLevelRequirementPair", no_init)
        .def_readwrite("SkillIndex", &FSkillIndexLevelRequirementPair::SkillIndex)
        .def_readwrite("PlayerLevelRequirement", &FSkillIndexLevelRequirementPair::PlayerLevelRequirement)
  ;
}