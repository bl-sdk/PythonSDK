#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAchievementProgressStat()
{
    class_< FAchievementProgressStat >("FAchievementProgressStat", no_init)
        .def_readwrite("AchievementId", &FAchievementProgressStat::AchievementId)
        .def_readwrite("Progress", &FAchievementProgressStat::Progress)
        .def_readwrite("MaxProgress", &FAchievementProgressStat::MaxProgress)
  ;
}