#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingMissionRewardsData()
{
    py::class_< FPendingMissionRewardsData >("FPendingMissionRewardsData")
        .def_readwrite("PendingMissionRewards", &FPendingMissionRewardsData::PendingMissionRewards)
        .def_readwrite("PlaythroughIndex", &FPendingMissionRewardsData::PlaythroughIndex)
  ;
}