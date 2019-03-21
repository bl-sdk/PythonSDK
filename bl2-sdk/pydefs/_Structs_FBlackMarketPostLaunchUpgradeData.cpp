#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBlackMarketPostLaunchUpgradeData()
{
    class_< FBlackMarketPostLaunchUpgradeData >("FBlackMarketPostLaunchUpgradeData", no_init)
        .def_readwrite("EridiumCostForUpgrade", &FBlackMarketPostLaunchUpgradeData::EridiumCostForUpgrade)
  ;
}