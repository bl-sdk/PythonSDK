#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FUnloadableDlcPendingRewardData(py::object m)
{
    py::class_< FUnloadableDlcPendingRewardData >(m, "FUnloadableDlcPendingRewardData")
        .def_readwrite("MissionDefName", &FUnloadableDlcPendingRewardData::MissionDefName)
        .def_readonly("WeaponRewards", &FUnloadableDlcPendingRewardData::WeaponRewards)
        .def_readonly("ItemRewards", &FUnloadableDlcPendingRewardData::ItemRewards)
        .def_readwrite("DlcPackageId", &FUnloadableDlcPendingRewardData::DlcPackageId)
  ;
}