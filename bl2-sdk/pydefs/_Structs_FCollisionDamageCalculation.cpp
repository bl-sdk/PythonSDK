#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCollisionDamageCalculation(py::object m)
{
    py::class_< FCollisionDamageCalculation >(m, "FCollisionDamageCalculation")
        .def_readwrite("DamageType", &FCollisionDamageCalculation::DamageType)
        .def_readwrite("DamageTypes", &FCollisionDamageCalculation::DamageTypes)
        .def_readwrite("Formula", &FCollisionDamageCalculation::Formula)
        .def_readwrite("MomentumFactor", &FCollisionDamageCalculation::MomentumFactor)
        .def_readwrite("AddZMomentum", &FCollisionDamageCalculation::AddZMomentum)
  ;
}