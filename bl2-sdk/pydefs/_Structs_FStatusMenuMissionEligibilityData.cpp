#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FStatusMenuMissionEligibilityData()
{
    class_< FStatusMenuMissionEligibilityData >("FStatusMenuMissionEligibilityData", no_init)
        .def_readwrite("MissionDef", &FStatusMenuMissionEligibilityData::MissionDef)
        .def_readwrite("MissionStatus", &FStatusMenuMissionEligibilityData::MissionStatus)
  ;
}