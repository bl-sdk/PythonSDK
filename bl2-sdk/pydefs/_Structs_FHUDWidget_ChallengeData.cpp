#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHUDWidget_ChallengeData()
{
    class_< FHUDWidget_ChallengeData >("FHUDWidget_ChallengeData", no_init)
        .def_readwrite("Challenge", &FHUDWidget_ChallengeData::Challenge)
        .def_readwrite("LevelIndex", &FHUDWidget_ChallengeData::LevelIndex)
        .def_readwrite("ConditionIndex", &FHUDWidget_ChallengeData::ConditionIndex)
        .def_readwrite("CurrStatVal", &FHUDWidget_ChallengeData::CurrStatVal)
        .def_readwrite("GoalStatVal", &FHUDWidget_ChallengeData::GoalStatVal)
  ;
}