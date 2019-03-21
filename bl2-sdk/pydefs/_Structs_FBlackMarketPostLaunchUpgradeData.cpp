#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBlackMarketPostLaunchUpgradeData()
{
    py::class_< FBlackMarketPostLaunchUpgradeData >("FBlackMarketPostLaunchUpgradeData")
        .def_readwrite("EridiumCostForUpgrade", &FBlackMarketPostLaunchUpgradeData::EridiumCostForUpgrade)
  ;
}