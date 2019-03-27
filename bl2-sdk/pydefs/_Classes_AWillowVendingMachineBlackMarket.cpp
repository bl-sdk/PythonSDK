#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVendingMachineBlackMarket(py::module &m)
{
    py::class_< AWillowVendingMachineBlackMarket,  AWillowVendingMachineBase   >(m, "AWillowVendingMachineBlackMarket")
		.def_static("StaticClass", &AWillowVendingMachineBlackMarket::StaticClass, py::return_value_policy::reference)
        .def_readwrite("DefinitionData", &AWillowVendingMachineBlackMarket::DefinitionData)
        .def("PlayerBuyItem", &AWillowVendingMachineBlackMarket::PlayerBuyItem)
        .def("GetRarityLevelForUpgradeLevel", &AWillowVendingMachineBlackMarket::GetRarityLevelForUpgradeLevel)
        .def("BuildUpgradeItemForPlayer", &AWillowVendingMachineBlackMarket::BuildUpgradeItemForPlayer, py::return_value_policy::reference)
        .def("GetFeaturedItem", &AWillowVendingMachineBlackMarket::GetFeaturedItem)
        .def("CreateNecessaryBlackMarketItems", [](AWillowVendingMachineBlackMarket &self , class AWillowPlayerController* WPC) { class AWillowInventoryManager** pyInvManager = 0 ;   self.CreateNecessaryBlackMarketItems(WPC, pyInvManager); return py::make_tuple(*pyInvManager); })
        .def("GetInventoryList", &AWillowVendingMachineBlackMarket::GetInventoryList)
        .def("RemoveSoldInventory", &AWillowVendingMachineBlackMarket::RemoveSoldInventory)
        .def("GetWeaponList", &AWillowVendingMachineBlackMarket::GetWeaponList)
        .def("GetItemList", &AWillowVendingMachineBlackMarket::GetItemList)
        .def("StaticGetSellingPriceForBlackMarketInventory", &AWillowVendingMachineBlackMarket::StaticGetSellingPriceForBlackMarketInventory)
        .def("GetSellingPriceForInventory", &AWillowVendingMachineBlackMarket::GetSellingPriceForInventory)
          ;
}