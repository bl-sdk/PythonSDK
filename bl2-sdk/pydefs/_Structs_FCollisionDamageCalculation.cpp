#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCollisionDamageCalculation()
{
    class_< FCollisionDamageCalculation >("FCollisionDamageCalculation", no_init)
        .def_readwrite("DamageType", &FCollisionDamageCalculation::DamageType)
        .def_readwrite("DamageTypes", &FCollisionDamageCalculation::DamageTypes)
        .def_readwrite("Formula", &FCollisionDamageCalculation::Formula)
        .def_readwrite("MomentumFactor", &FCollisionDamageCalculation::MomentumFactor)
        .def_readwrite("AddZMomentum", &FCollisionDamageCalculation::AddZMomentum)
  ;
}