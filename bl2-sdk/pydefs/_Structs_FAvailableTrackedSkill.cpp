#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAvailableTrackedSkill()
{
    class_< FAvailableTrackedSkill >("FAvailableTrackedSkill", no_init)
        .def_readwrite("SkillDef", &FAvailableTrackedSkill::SkillDef)
        .def_readwrite("RemappedSlot", &FAvailableTrackedSkill::RemappedSlot)
  ;
}