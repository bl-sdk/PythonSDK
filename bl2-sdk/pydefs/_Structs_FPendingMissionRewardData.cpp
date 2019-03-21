#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPendingMissionRewardData(py::object m)
{
    py::class_< FPendingMissionRewardData >(m, "FPendingMissionRewardData")
        .def_readwrite("Mission", &FPendingMissionRewardData::Mission)
        .def_readonly("WeaponRewards", &FPendingMissionRewardData::WeaponRewards)
        .def_readonly("ItemRewards", &FPendingMissionRewardData::ItemRewards)
  ;
}