#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVendingMachineBlackMarket()
{
    class_< AWillowVendingMachineBlackMarket, bases< AWillowVendingMachineBase >  , boost::noncopyable>("AWillowVendingMachineBlackMarket", no_init)
        .def_readwrite("DefinitionData", &AWillowVendingMachineBlackMarket::DefinitionData)
        .def("StaticClass", &AWillowVendingMachineBlackMarket::StaticClass, return_value_policy< reference_existing_object >())
        .def("PlayerBuyItem", &AWillowVendingMachineBlackMarket::PlayerBuyItem)
        .def("GetRarityLevelForUpgradeLevel", &AWillowVendingMachineBlackMarket::GetRarityLevelForUpgradeLevel)
        .def("BuildUpgradeItemForPlayer", &AWillowVendingMachineBlackMarket::BuildUpgradeItemForPlayer, return_value_policy< reference_existing_object >())
        .def("GetFeaturedItem", &AWillowVendingMachineBlackMarket::GetFeaturedItem)
        .def("CreateNecessaryBlackMarketItems", &AWillowVendingMachineBlackMarket::CreateNecessaryBlackMarketItems)
        .def("GetInventoryList", &AWillowVendingMachineBlackMarket::GetInventoryList)
        .def("RemoveSoldInventory", &AWillowVendingMachineBlackMarket::RemoveSoldInventory)
        .def("GetWeaponList", &AWillowVendingMachineBlackMarket::GetWeaponList)
        .def("GetItemList", &AWillowVendingMachineBlackMarket::GetItemList)
        .def("StaticGetSellingPriceForBlackMarketInventory", &AWillowVendingMachineBlackMarket::StaticGetSellingPriceForBlackMarketInventory)
        .def("GetSellingPriceForInventory", &AWillowVendingMachineBlackMarket::GetSellingPriceForInventory)
        .staticmethod("StaticClass")
  ;
}