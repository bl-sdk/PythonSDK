#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FRegionBalanceData()
{
    class_< FRegionBalanceData >("FRegionBalanceData", no_init)
        .def_readwrite("Region", &FRegionBalanceData::Region)
        .def_readwrite("MinDefaultGameStage", &FRegionBalanceData::MinDefaultGameStage)
        .def_readwrite("MaxDefaultGameStage", &FRegionBalanceData::MaxDefaultGameStage)
        .def_readwrite("DefaultAwesomeLevel", &FRegionBalanceData::DefaultAwesomeLevel)
        .def_readwrite("GameStageIncreaseAbovePlayer", &FRegionBalanceData::GameStageIncreaseAbovePlayer)
        .def_readwrite("MissionOverrides", &FRegionBalanceData::MissionOverrides)
  ;
}