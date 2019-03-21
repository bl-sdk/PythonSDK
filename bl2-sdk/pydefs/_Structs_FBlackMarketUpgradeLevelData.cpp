#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBlackMarketUpgradeLevelData(py::object m)
{
    py::class_< FBlackMarketUpgradeLevelData >(m, "FBlackMarketUpgradeLevelData")
        .def_readwrite("UpgradeDefinition", &FBlackMarketUpgradeLevelData::UpgradeDefinition)
        .def_readwrite("MaxUpgradeLevel", &FBlackMarketUpgradeLevelData::MaxUpgradeLevel)
  ;
}