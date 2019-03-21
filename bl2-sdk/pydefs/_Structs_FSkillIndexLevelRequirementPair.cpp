#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillIndexLevelRequirementPair(py::object m)
{
    py::class_< FSkillIndexLevelRequirementPair >(m, "FSkillIndexLevelRequirementPair")
        .def_readwrite("SkillIndex", &FSkillIndexLevelRequirementPair::SkillIndex)
        .def_readwrite("PlayerLevelRequirement", &FSkillIndexLevelRequirementPair::PlayerLevelRequirement)
  ;
}