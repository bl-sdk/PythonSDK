#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelBasedDamageScale()
{
    py::class_< FLevelBasedDamageScale >("FLevelBasedDamageScale")
        .def_readwrite("LevelDifference", &FLevelBasedDamageScale::LevelDifference)
        .def_readwrite("HigherLevelAttackerDmgScale", &FLevelBasedDamageScale::HigherLevelAttackerDmgScale)
        .def_readwrite("LowerLevelAttackerDmgScale", &FLevelBasedDamageScale::LowerLevelAttackerDmgScale)
  ;
}