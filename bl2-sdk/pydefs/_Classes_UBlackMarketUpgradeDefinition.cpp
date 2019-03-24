#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBlackMarketUpgradeDefinition(py::module &m)
{
    py::class_< UBlackMarketUpgradeDefinition,  UGBXDefinition   >(m, "UBlackMarketUpgradeDefinition")
		.def_static("StaticClass", &UBlackMarketUpgradeDefinition::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IIBehaviorProvider", &UBlackMarketUpgradeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("UpgradeName", &UBlackMarketUpgradeDefinition::UpgradeName)
        .def_readwrite("BalanceDefinition", &UBlackMarketUpgradeDefinition::BalanceDefinition)
        .def_readwrite("CachedUpgradeIndex", &UBlackMarketUpgradeDefinition::CachedUpgradeIndex)
        .def_readwrite("BehaviorProvider", &UBlackMarketUpgradeDefinition::BehaviorProvider)
        .def_readwrite("ZippyFrameOverride", &UBlackMarketUpgradeDefinition::ZippyFrameOverride)
        .def("UpdateCachedUpgradeIndex", &UBlackMarketUpgradeDefinition::UpdateCachedUpgradeIndex)
        .def("OnPurchased", &UBlackMarketUpgradeDefinition::OnPurchased)
        .def("SetBehaviorProviderDefinition", &UBlackMarketUpgradeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBlackMarketUpgradeDefinition::GetBehaviorProviderDefinition, py::return_value_policy::reference)
          ;
}