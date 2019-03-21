#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTurretConstraintData()
{
    py::class_< FTurretConstraintData >("FTurretConstraintData")
        .def_readwrite("PitchConstraint", &FTurretConstraintData::PitchConstraint)
        .def_readwrite("YawConstraint", &FTurretConstraintData::YawConstraint)
        .def_readwrite("RollConstraint", &FTurretConstraintData::RollConstraint)
  ;
}