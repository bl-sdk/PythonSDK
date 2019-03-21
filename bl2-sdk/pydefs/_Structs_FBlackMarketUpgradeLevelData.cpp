#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBlackMarketUpgradeLevelData()
{
    class_< FBlackMarketUpgradeLevelData >("FBlackMarketUpgradeLevelData", no_init)
        .def_readwrite("UpgradeDefinition", &FBlackMarketUpgradeLevelData::UpgradeDefinition)
        .def_readwrite("MaxUpgradeLevel", &FBlackMarketUpgradeLevelData::MaxUpgradeLevel)
  ;
}