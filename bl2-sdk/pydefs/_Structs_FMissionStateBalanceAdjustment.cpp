#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FMissionStateBalanceAdjustment(py::module &m)
{
    py::class_< FMissionStateBalanceAdjustment >(m, "FMissionStateBalanceAdjustment")
        .def_readwrite("Mission", &FMissionStateBalanceAdjustment::Mission)
        .def_readwrite("MinGameStage", &FMissionStateBalanceAdjustment::MinGameStage)
        .def_readwrite("MaxGameStage", &FMissionStateBalanceAdjustment::MaxGameStage)
        .def_readwrite("AwesomeLevel", &FMissionStateBalanceAdjustment::AwesomeLevel)
  ;
}