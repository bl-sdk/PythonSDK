#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillTreeTierLayoutData(py::module &m)
{
    py::class_< FSkillTreeTierLayoutData >(m, "FSkillTreeTierLayoutData")
        .def_readwrite("ParentBranchDefinition", &FSkillTreeTierLayoutData::ParentBranchDefinition)
        .def_readwrite("TierNumber", &FSkillTreeTierLayoutData::TierNumber)
        .def_readwrite("DependencyBranchDefinition", &FSkillTreeTierLayoutData::DependencyBranchDefinition)
        .def_readwrite("DependencyTierNumber", &FSkillTreeTierLayoutData::DependencyTierNumber)
        .def_readwrite("Skills", &FSkillTreeTierLayoutData::Skills)
  ;
}