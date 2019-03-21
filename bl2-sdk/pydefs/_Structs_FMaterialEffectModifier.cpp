#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMaterialEffectModifier()
{
    py::class_< FMaterialEffectModifier >("FMaterialEffectModifier")
        .def_readwrite("EffectName", &FMaterialEffectModifier::EffectName)
        .def_readwrite("ScalarParams", &FMaterialEffectModifier::ScalarParams)
        .def_readwrite("CachedValue", &FMaterialEffectModifier::CachedValue)
        .def_readwrite("MaterialInstance", &FMaterialEffectModifier::MaterialInstance)
  ;
}