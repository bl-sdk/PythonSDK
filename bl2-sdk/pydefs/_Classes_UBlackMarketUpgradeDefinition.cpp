#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBlackMarketUpgradeDefinition()
{
    class_< UBlackMarketUpgradeDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UBlackMarketUpgradeDefinition", no_init)
        .def_readwrite("VfTable_IIBehaviorProvider", &UBlackMarketUpgradeDefinition::VfTable_IIBehaviorProvider)
        .def_readwrite("UpgradeName", &UBlackMarketUpgradeDefinition::UpgradeName)
        .def_readwrite("BalanceDefinition", &UBlackMarketUpgradeDefinition::BalanceDefinition)
        .def_readwrite("CachedUpgradeIndex", &UBlackMarketUpgradeDefinition::CachedUpgradeIndex)
        .def_readwrite("BehaviorProvider", &UBlackMarketUpgradeDefinition::BehaviorProvider)
        .def_readwrite("ZippyFrameOverride", &UBlackMarketUpgradeDefinition::ZippyFrameOverride)
        .def("StaticClass", &UBlackMarketUpgradeDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("UpdateCachedUpgradeIndex", &UBlackMarketUpgradeDefinition::UpdateCachedUpgradeIndex)
        .def("OnPurchased", &UBlackMarketUpgradeDefinition::OnPurchased)
        .def("SetBehaviorProviderDefinition", &UBlackMarketUpgradeDefinition::SetBehaviorProviderDefinition)
        .def("GetBehaviorProviderDefinition", &UBlackMarketUpgradeDefinition::GetBehaviorProviderDefinition, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}