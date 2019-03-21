#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USkillTreeBranchLayoutDefinition()
{
    py::class_< USkillTreeBranchLayoutDefinition,  UGBXDefinition   >("USkillTreeBranchLayoutDefinition")
        .def_readwrite("Tiers", &USkillTreeBranchLayoutDefinition::Tiers)
        .def("StaticClass", &USkillTreeBranchLayoutDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}