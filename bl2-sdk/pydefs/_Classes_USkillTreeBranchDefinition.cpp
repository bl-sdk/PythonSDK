#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillTreeBranchDefinition(py::module &m)
{
	py::class_< USkillTreeBranchDefinition, UGBXDefinition   >(m, "USkillTreeBranchDefinition")
		.def_static("StaticClass", &USkillTreeBranchDefinition::StaticClass, py::return_value_policy::reference)
		.def_readwrite("VfTable_IIConstructObject", &USkillTreeBranchDefinition::VfTable_IIConstructObject)
		.def_readwrite("Children", &USkillTreeBranchDefinition::Children)
		.def_readwrite("Tiers", &USkillTreeBranchDefinition::Tiers, py::return_value_policy::reference)
		.def_readwrite("Layout", &USkillTreeBranchDefinition::Layout)
		.def_readwrite("BranchName", &USkillTreeBranchDefinition::BranchName)
		;
}