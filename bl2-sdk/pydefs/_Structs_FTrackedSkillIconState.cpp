#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTrackedSkillIconState()
{
    class_< FTrackedSkillIconState >("FTrackedSkillIconState", no_init)
        .def_readwrite("Type", &FTrackedSkillIconState::Type)
        .def_readwrite("Icon", &FTrackedSkillIconState::Icon)
        .def_readwrite("PercentComplete", &FTrackedSkillIconState::PercentComplete)
        .def_readwrite("StackCount", &FTrackedSkillIconState::StackCount)
  ;
}