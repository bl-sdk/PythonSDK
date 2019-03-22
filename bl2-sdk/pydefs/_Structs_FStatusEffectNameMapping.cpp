#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStatusEffectNameMapping(py::module &m)
{
    py::class_< FStatusEffectNameMapping >(m, "FStatusEffectNameMapping")
        .def_readwrite("StatusEffectName", &FStatusEffectNameMapping::StatusEffectName)
        .def_readwrite("StatusEffectDefinitionName", &FStatusEffectNameMapping::StatusEffectDefinitionName)
  ;
}