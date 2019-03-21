#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionStateBalanceAdjustment()
{
    py::class_< FMissionStateBalanceAdjustment >("FMissionStateBalanceAdjustment")
        .def_readwrite("Mission", &FMissionStateBalanceAdjustment::Mission)
        .def_readwrite("MinGameStage", &FMissionStateBalanceAdjustment::MinGameStage)
        .def_readwrite("MaxGameStage", &FMissionStateBalanceAdjustment::MaxGameStage)
        .def_readwrite("AwesomeLevel", &FMissionStateBalanceAdjustment::AwesomeLevel)
  ;
}