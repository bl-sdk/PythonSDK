#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStatusEffectNameMapping()
{
    class_< FStatusEffectNameMapping >("FStatusEffectNameMapping", no_init)
        .def_readwrite("StatusEffectName", &FStatusEffectNameMapping::StatusEffectName)
        .def_readwrite("StatusEffectDefinitionName", &FStatusEffectNameMapping::StatusEffectDefinitionName)
  ;
}