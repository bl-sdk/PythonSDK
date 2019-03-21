#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FUnloadableDlcPendingRewardData()
{
    class_< FUnloadableDlcPendingRewardData >("FUnloadableDlcPendingRewardData", no_init)
        .def_readwrite("MissionDefName", &FUnloadableDlcPendingRewardData::MissionDefName)
        .def_readonly("WeaponRewards", &FUnloadableDlcPendingRewardData::WeaponRewards)
        .def_readonly("ItemRewards", &FUnloadableDlcPendingRewardData::ItemRewards)
        .def_readwrite("DlcPackageId", &FUnloadableDlcPendingRewardData::DlcPackageId)
  ;
}