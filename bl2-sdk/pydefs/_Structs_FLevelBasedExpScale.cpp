#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelBasedExpScale()
{
    class_< FLevelBasedExpScale >("FLevelBasedExpScale", no_init)
        .def_readwrite("LevelDifference", &FLevelBasedExpScale::LevelDifference)
        .def_readwrite("HigherLevelEnemyExpScale", &FLevelBasedExpScale::HigherLevelEnemyExpScale)
        .def_readwrite("LowerLevelEnemyExpScale", &FLevelBasedExpScale::LowerLevelEnemyExpScale)
  ;
}