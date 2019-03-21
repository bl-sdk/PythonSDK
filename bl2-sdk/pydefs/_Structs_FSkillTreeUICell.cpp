#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillTreeUICell()
{
    class_< FSkillTreeUICell >("FSkillTreeUICell", no_init)
        .def_readwrite("BranchNum", &FSkillTreeUICell::BranchNum)
        .def_readwrite("TierNum", &FSkillTreeUICell::TierNum)
        .def_readwrite("CellNum", &FSkillTreeUICell::CellNum)
        .def_readwrite("Clip_Cell", &FSkillTreeUICell::Clip_Cell)
        .def_readwrite("Clip_Highlight", &FSkillTreeUICell::Clip_Highlight)
        .def_readwrite("Clip_Outline", &FSkillTreeUICell::Clip_Outline)
        .def_readwrite("Clip_Overclocked", &FSkillTreeUICell::Clip_Overclocked)
  ;
}