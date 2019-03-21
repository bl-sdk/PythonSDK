#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FSkillDamagedEventConstraintData()
{
    class_< FSkillDamagedEventConstraintData >("FSkillDamagedEventConstraintData", no_init)
        .def_readwrite("DamageTypeConstraint", &FSkillDamagedEventConstraintData::DamageTypeConstraint)
        .def_readwrite("DamageSourceConstraint", &FSkillDamagedEventConstraintData::DamageSourceConstraint)
  ;
}