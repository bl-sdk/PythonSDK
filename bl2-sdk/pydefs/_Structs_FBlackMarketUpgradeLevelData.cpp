#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBlackMarketUpgradeLevelData()
{
    py::class_< FBlackMarketUpgradeLevelData >("FBlackMarketUpgradeLevelData")
        .def_readwrite("UpgradeDefinition", &FBlackMarketUpgradeLevelData::UpgradeDefinition)
        .def_readwrite("MaxUpgradeLevel", &FBlackMarketUpgradeLevelData::MaxUpgradeLevel)
  ;
}