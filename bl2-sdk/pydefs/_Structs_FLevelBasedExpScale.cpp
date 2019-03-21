#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelBasedExpScale()
{
    py::class_< FLevelBasedExpScale >("FLevelBasedExpScale")
        .def_readwrite("LevelDifference", &FLevelBasedExpScale::LevelDifference)
        .def_readwrite("HigherLevelEnemyExpScale", &FLevelBasedExpScale::HigherLevelEnemyExpScale)
        .def_readwrite("LowerLevelEnemyExpScale", &FLevelBasedExpScale::LowerLevelEnemyExpScale)
  ;
}