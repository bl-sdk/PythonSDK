#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAvailableTrackedSkill()
{
    py::class_< FAvailableTrackedSkill >("FAvailableTrackedSkill")
        .def_readwrite("SkillDef", &FAvailableTrackedSkill::SkillDef)
        .def_readwrite("RemappedSlot", &FAvailableTrackedSkill::RemappedSlot)
  ;
}