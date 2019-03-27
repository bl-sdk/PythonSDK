#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FAchievementMappingInfo(py::module &m)
{
    py::class_< FAchievementMappingInfo >(m, "FAchievementMappingInfo")
        .def_readwrite("AchievementId", &FAchievementMappingInfo::AchievementId)
        .def_readwrite("AchievementName", &FAchievementMappingInfo::AchievementName)
        .def_readwrite("ViewId", &FAchievementMappingInfo::ViewId)
        .def_readwrite("ProgressCount", &FAchievementMappingInfo::ProgressCount)
        .def_readwrite("MaxProgress", &FAchievementMappingInfo::MaxProgress)
  ;
}