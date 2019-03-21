#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FMissionStateBalanceAdjustment()
{
    class_< FMissionStateBalanceAdjustment >("FMissionStateBalanceAdjustment", no_init)
        .def_readwrite("Mission", &FMissionStateBalanceAdjustment::Mission)
        .def_readwrite("MinGameStage", &FMissionStateBalanceAdjustment::MinGameStage)
        .def_readwrite("MaxGameStage", &FMissionStateBalanceAdjustment::MaxGameStage)
        .def_readwrite("AwesomeLevel", &FMissionStateBalanceAdjustment::AwesomeLevel)
  ;
}