#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrackedSkillIconState()
{
    py::class_< FTrackedSkillIconState >("FTrackedSkillIconState")
        .def_readwrite("Type", &FTrackedSkillIconState::Type)
        .def_readwrite("Icon", &FTrackedSkillIconState::Icon)
        .def_readwrite("PercentComplete", &FTrackedSkillIconState::PercentComplete)
        .def_readwrite("StackCount", &FTrackedSkillIconState::StackCount)
  ;
}