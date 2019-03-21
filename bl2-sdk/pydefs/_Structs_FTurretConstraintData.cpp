#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTurretConstraintData()
{
    class_< FTurretConstraintData >("FTurretConstraintData", no_init)
        .def_readwrite("PitchConstraint", &FTurretConstraintData::PitchConstraint)
        .def_readwrite("YawConstraint", &FTurretConstraintData::YawConstraint)
        .def_readwrite("RollConstraint", &FTurretConstraintData::RollConstraint)
  ;
}