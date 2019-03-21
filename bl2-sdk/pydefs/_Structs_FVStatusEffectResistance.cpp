#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FVStatusEffectResistance()
{
    py::class_< FVStatusEffectResistance >("FVStatusEffectResistance")
        .def_readwrite("ChanceResistance", &FVStatusEffectResistance::ChanceResistance)
        .def_readwrite("DurationResistance", &FVStatusEffectResistance::DurationResistance)
  ;
}