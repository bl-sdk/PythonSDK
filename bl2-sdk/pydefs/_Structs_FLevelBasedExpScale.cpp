#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLevelBasedExpScale(py::object m)
{
    py::class_< FLevelBasedExpScale >(m, "FLevelBasedExpScale")
        .def_readwrite("LevelDifference", &FLevelBasedExpScale::LevelDifference)
        .def_readwrite("HigherLevelEnemyExpScale", &FLevelBasedExpScale::HigherLevelEnemyExpScale)
        .def_readwrite("LowerLevelEnemyExpScale", &FLevelBasedExpScale::LowerLevelEnemyExpScale)
  ;
}