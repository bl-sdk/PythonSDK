#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillTreeBranchDefinition(py::object m)
{
    py::class_< USkillTreeBranchDefinition,  UGBXDefinition   >(m, "USkillTreeBranchDefinition")
        .def_readwrite("VfTable_IIConstructObject", &USkillTreeBranchDefinition::VfTable_IIConstructObject)
        .def_readwrite("Children", &USkillTreeBranchDefinition::Children)
        .def_readwrite("Tiers", &USkillTreeBranchDefinition::Tiers)
        .def_readwrite("Layout", &USkillTreeBranchDefinition::Layout)
        .def_readwrite("BranchName", &USkillTreeBranchDefinition::BranchName)
        .def("StaticClass", &USkillTreeBranchDefinition::StaticClass, py::return_value_policy::reference)
          ;
}