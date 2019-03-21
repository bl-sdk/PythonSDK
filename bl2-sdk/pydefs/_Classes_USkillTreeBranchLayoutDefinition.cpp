#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USkillTreeBranchLayoutDefinition()
{
    class_< USkillTreeBranchLayoutDefinition, bases< UGBXDefinition >  , boost::noncopyable>("USkillTreeBranchLayoutDefinition", no_init)
        .def_readwrite("Tiers", &USkillTreeBranchLayoutDefinition::Tiers)
        .def("StaticClass", &USkillTreeBranchLayoutDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}