#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelBasedStatusEffectChanceScale(py::object m)
{
    py::class_< FLevelBasedStatusEffectChanceScale >(m, "FLevelBasedStatusEffectChanceScale")
        .def_readwrite("LevelDifference", &FLevelBasedStatusEffectChanceScale::LevelDifference)
        .def_readwrite("HigherLevelChanceScale", &FLevelBasedStatusEffectChanceScale::HigherLevelChanceScale)
        .def_readwrite("LowerLevelChanceScale", &FLevelBasedStatusEffectChanceScale::LowerLevelChanceScale)
  ;
}