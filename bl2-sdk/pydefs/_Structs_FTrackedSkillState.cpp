#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrackedSkillState()
{
    py::class_< FTrackedSkillState >("FTrackedSkillState")
        .def_readwrite("SkillDef", &FTrackedSkillState::SkillDef)
        .def_readwrite("PackedStackCountAndPercentComplete", &FTrackedSkillState::PackedStackCountAndPercentComplete)
  ;
}