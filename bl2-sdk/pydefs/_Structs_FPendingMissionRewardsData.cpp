#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingMissionRewardsData(py::object m)
{
    py::class_< FPendingMissionRewardsData >(m, "FPendingMissionRewardsData")
        .def_readwrite("PendingMissionRewards", &FPendingMissionRewardsData::PendingMissionRewards)
        .def_readwrite("PlaythroughIndex", &FPendingMissionRewardsData::PlaythroughIndex)
  ;
}