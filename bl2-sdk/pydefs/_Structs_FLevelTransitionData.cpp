#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FLevelTransitionData()
{
    class_< FLevelTransitionData >("FLevelTransitionData", no_init)
        .def_readwrite("TargetLevel", &FLevelTransitionData::TargetLevel)
        .def_readwrite("LevelTransition", &FLevelTransitionData::LevelTransition)
  ;
}