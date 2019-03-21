#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMaterialEffectModifier()
{
    class_< FMaterialEffectModifier >("FMaterialEffectModifier", no_init)
        .def_readwrite("EffectName", &FMaterialEffectModifier::EffectName)
        .def_readwrite("ScalarParams", &FMaterialEffectModifier::ScalarParams)
        .def_readwrite("CachedValue", &FMaterialEffectModifier::CachedValue)
        .def_readwrite("MaterialInstance", &FMaterialEffectModifier::MaterialInstance)
  ;
}