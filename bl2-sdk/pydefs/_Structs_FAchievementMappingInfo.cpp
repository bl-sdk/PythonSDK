#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FAchievementMappingInfo()
{
    class_< FAchievementMappingInfo >("FAchievementMappingInfo", no_init)
        .def_readwrite("AchievementId", &FAchievementMappingInfo::AchievementId)
        .def_readwrite("AchievementName", &FAchievementMappingInfo::AchievementName)
        .def_readwrite("ViewId", &FAchievementMappingInfo::ViewId)
        .def_readwrite("ProgressCount", &FAchievementMappingInfo::ProgressCount)
        .def_readwrite("MaxProgress", &FAchievementMappingInfo::MaxProgress)
  ;
}