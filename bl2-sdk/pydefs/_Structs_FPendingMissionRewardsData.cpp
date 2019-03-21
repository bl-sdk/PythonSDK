#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingMissionRewardsData()
{
    class_< FPendingMissionRewardsData >("FPendingMissionRewardsData", no_init)
        .def_readwrite("PendingMissionRewards", &FPendingMissionRewardsData::PendingMissionRewards)
        .def_readwrite("PlaythroughIndex", &FPendingMissionRewardsData::PlaythroughIndex)
  ;
}