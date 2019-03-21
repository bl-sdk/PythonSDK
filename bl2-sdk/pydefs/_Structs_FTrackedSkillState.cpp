#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrackedSkillState(py::object m)
{
    py::class_< FTrackedSkillState >(m, "FTrackedSkillState")
        .def_readwrite("SkillDef", &FTrackedSkillState::SkillDef)
        .def_readwrite("PackedStackCountAndPercentComplete", &FTrackedSkillState::PackedStackCountAndPercentComplete)
  ;
}