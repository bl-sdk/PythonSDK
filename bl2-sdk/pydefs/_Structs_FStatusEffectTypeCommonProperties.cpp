#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStatusEffectTypeCommonProperties()
{
    class_< FStatusEffectTypeCommonProperties >("FStatusEffectTypeCommonProperties", no_init)
        .def_readwrite("StatusEffectType", &FStatusEffectTypeCommonProperties::StatusEffectType)
        .def_readwrite("EffectStartAkEvent", &FStatusEffectTypeCommonProperties::EffectStartAkEvent)
        .def_readwrite("EffectStopAkEvent", &FStatusEffectTypeCommonProperties::EffectStopAkEvent)
  ;
}