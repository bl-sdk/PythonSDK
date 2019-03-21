#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelBasedDamageScale()
{
    class_< FLevelBasedDamageScale >("FLevelBasedDamageScale", no_init)
        .def_readwrite("LevelDifference", &FLevelBasedDamageScale::LevelDifference)
        .def_readwrite("HigherLevelAttackerDmgScale", &FLevelBasedDamageScale::HigherLevelAttackerDmgScale)
        .def_readwrite("LowerLevelAttackerDmgScale", &FLevelBasedDamageScale::LowerLevelAttackerDmgScale)
  ;
}