#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStatusEffectTypeCommonProperties()
{
    py::class_< FStatusEffectTypeCommonProperties >("FStatusEffectTypeCommonProperties")
        .def_readwrite("StatusEffectType", &FStatusEffectTypeCommonProperties::StatusEffectType)
        .def_readwrite("EffectStartAkEvent", &FStatusEffectTypeCommonProperties::EffectStartAkEvent)
        .def_readwrite("EffectStopAkEvent", &FStatusEffectTypeCommonProperties::EffectStopAkEvent)
  ;
}