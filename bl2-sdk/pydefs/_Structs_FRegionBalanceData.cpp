#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRegionBalanceData()
{
    py::class_< FRegionBalanceData >("FRegionBalanceData")
        .def_readwrite("Region", &FRegionBalanceData::Region)
        .def_readwrite("MinDefaultGameStage", &FRegionBalanceData::MinDefaultGameStage)
        .def_readwrite("MaxDefaultGameStage", &FRegionBalanceData::MaxDefaultGameStage)
        .def_readwrite("DefaultAwesomeLevel", &FRegionBalanceData::DefaultAwesomeLevel)
        .def_readwrite("GameStageIncreaseAbovePlayer", &FRegionBalanceData::GameStageIncreaseAbovePlayer)
        .def_readwrite("MissionOverrides", &FRegionBalanceData::MissionOverrides)
  ;
}