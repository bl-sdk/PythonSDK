#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPlayerClassAchievementUnlockData()
{
    class_< FPlayerClassAchievementUnlockData >("FPlayerClassAchievementUnlockData", no_init)
        .def_readwrite("UnlockType", &FPlayerClassAchievementUnlockData::UnlockType)
        .def_readwrite("Achievement", &FPlayerClassAchievementUnlockData::Achievement)
        .def_readwrite("IntData", &FPlayerClassAchievementUnlockData::IntData)
  ;
}