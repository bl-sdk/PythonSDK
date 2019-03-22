#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FSkillDamagedEventConstraintData(py::module &m)
{
    py::class_< FSkillDamagedEventConstraintData >(m, "FSkillDamagedEventConstraintData")
        .def_readwrite("DamageTypeConstraint", &FSkillDamagedEventConstraintData::DamageTypeConstraint)
        .def_readwrite("DamageSourceConstraint", &FSkillDamagedEventConstraintData::DamageSourceConstraint)
  ;
}