#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillDamagedEventConstraintData()
{
    py::class_< FSkillDamagedEventConstraintData >("FSkillDamagedEventConstraintData")
        .def_readwrite("DamageTypeConstraint", &FSkillDamagedEventConstraintData::DamageTypeConstraint)
        .def_readwrite("DamageSourceConstraint", &FSkillDamagedEventConstraintData::DamageSourceConstraint)
  ;
}