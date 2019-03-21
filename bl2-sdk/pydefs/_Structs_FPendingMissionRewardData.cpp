#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FPendingMissionRewardData()
{
    class_< FPendingMissionRewardData >("FPendingMissionRewardData", no_init)
        .def_readwrite("Mission", &FPendingMissionRewardData::Mission)
        .def_readonly("WeaponRewards", &FPendingMissionRewardData::WeaponRewards)
        .def_readonly("ItemRewards", &FPendingMissionRewardData::ItemRewards)
  ;
}