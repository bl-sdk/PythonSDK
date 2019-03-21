#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTrackedSkillState()
{
    class_< FTrackedSkillState >("FTrackedSkillState", no_init)
        .def_readwrite("SkillDef", &FTrackedSkillState::SkillDef)
        .def_readwrite("PackedStackCountAndPercentComplete", &FTrackedSkillState::PackedStackCountAndPercentComplete)
  ;
}