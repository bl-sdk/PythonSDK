#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAchievementProgressStat(py::object m)
{
    py::class_< FAchievementProgressStat >(m, "FAchievementProgressStat")
        .def_readwrite("AchievementId", &FAchievementProgressStat::AchievementId)
        .def_readwrite("Progress", &FAchievementProgressStat::Progress)
        .def_readwrite("MaxProgress", &FAchievementProgressStat::MaxProgress)
  ;
}