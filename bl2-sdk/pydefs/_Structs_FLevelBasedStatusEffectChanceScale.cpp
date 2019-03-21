#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelBasedStatusEffectChanceScale()
{
    class_< FLevelBasedStatusEffectChanceScale >("FLevelBasedStatusEffectChanceScale", no_init)
        .def_readwrite("LevelDifference", &FLevelBasedStatusEffectChanceScale::LevelDifference)
        .def_readwrite("HigherLevelChanceScale", &FLevelBasedStatusEffectChanceScale::HigherLevelChanceScale)
        .def_readwrite("LowerLevelChanceScale", &FLevelBasedStatusEffectChanceScale::LowerLevelChanceScale)
  ;
}