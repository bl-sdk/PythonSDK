#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAchievementUnlockData()
{
    class_< FAchievementUnlockData >("FAchievementUnlockData", no_init)
        .def_readwrite("UnlockType", &FAchievementUnlockData::UnlockType)
        .def_readwrite("Achievement", &FAchievementUnlockData::Achievement)
        .def_readwrite("StringData", &FAchievementUnlockData::StringData)
        .def_readwrite("IntData", &FAchievementUnlockData::IntData)
  ;
}