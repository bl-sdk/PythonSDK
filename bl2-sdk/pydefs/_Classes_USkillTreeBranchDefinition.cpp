#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkillTreeBranchDefinition()
{
    class_< USkillTreeBranchDefinition, bases< UGBXDefinition >  , boost::noncopyable>("USkillTreeBranchDefinition", no_init)
        .def_readwrite("VfTable_IIConstructObject", &USkillTreeBranchDefinition::VfTable_IIConstructObject)
        .def_readwrite("Children", &USkillTreeBranchDefinition::Children)
        .def_readwrite("Tiers", &USkillTreeBranchDefinition::Tiers)
        .def_readwrite("Layout", &USkillTreeBranchDefinition::Layout)
        .def_readwrite("BranchName", &USkillTreeBranchDefinition::BranchName)
        .def("StaticClass", &USkillTreeBranchDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}