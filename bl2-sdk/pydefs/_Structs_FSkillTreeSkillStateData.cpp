#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillTreeSkillStateData(py::module &m)
{
    py::class_< FSkillTreeSkillStateData >(m, "FSkillTreeSkillStateData")
        .def_readwrite("SkillDefinition", &FSkillTreeSkillStateData::SkillDefinition)
        .def_readwrite("ParentBranchDefinition", &FSkillTreeSkillStateData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeSkillStateData::TierNumber)
        .def_readwrite("SkillGrade", &FSkillTreeSkillStateData::SkillGrade)
  ;
}