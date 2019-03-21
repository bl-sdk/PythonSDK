#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FVStatusEffectResistance()
{
    class_< FVStatusEffectResistance >("FVStatusEffectResistance", no_init)
        .def_readwrite("ChanceResistance", &FVStatusEffectResistance::ChanceResistance)
        .def_readwrite("DurationResistance", &FVStatusEffectResistance::DurationResistance)
  ;
}