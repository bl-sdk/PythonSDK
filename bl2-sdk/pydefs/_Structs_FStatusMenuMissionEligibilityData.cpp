#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FStatusMenuMissionEligibilityData()
{
    py::class_< FStatusMenuMissionEligibilityData >("FStatusMenuMissionEligibilityData")
        .def_readwrite("MissionDef", &FStatusMenuMissionEligibilityData::MissionDef)
        .def_readwrite("MissionStatus", &FStatusMenuMissionEligibilityData::MissionStatus)
  ;
}