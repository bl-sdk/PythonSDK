#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillTreeBranchLayoutDefinition(py::module &m)
{
    py::class_< USkillTreeBranchLayoutDefinition,  UGBXDefinition   >(m, "USkillTreeBranchLayoutDefinition")
        .def_readwrite("Tiers", &USkillTreeBranchLayoutDefinition::Tiers)
          ;
}