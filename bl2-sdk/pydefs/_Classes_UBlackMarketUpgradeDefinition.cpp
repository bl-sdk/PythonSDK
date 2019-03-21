#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlackMarketUpgradeDefinition()
{
    py::class_< UBlackMarketUpgradeDefinition,  UGBXDefinition   >("UBlackMarketUpgradeDefinition")
        .def_readwrite("VfTable_IIBehaviorProvider", &UBlackMarketUpgradeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("UpgradeName", &UBlackMarketUpgradeDefinition::UpgradeName)
        .def_readwrite("BalanceDefinition", &UBlackMarketUpgradeDefinition::BalanceDefinition)
        .def_readwrite("CachedUpgradeIndex", &UBlackMarketUpgradeDefinition::CachedUpgradeIndex)
        .def_readwrite("BehaviorProvider", &UBlackMarketUpgradeDefinition::BehaviorProvider)
        .def_readwrite("ZippyFrameOverride", &UBlackMarketUpgradeDefinition::ZippyFrameOverride)
        .def("StaticClass", &UBlackMarketUpgradeDefinition::StaticClass, py::return_value_policy::reference)
        .def("UpdateCachedUpgradeIndex", &UBlackMarketUpgradeDefinition::UpdateCachedUpgradeIndex)
        .def("OnPurchased", &UBlackMarketUpgradeDefinition::OnPurchased)
        .def("SetBehaviorProviderDefinition", &UBlackMarketUpgradeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBlackMarketUpgradeDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}