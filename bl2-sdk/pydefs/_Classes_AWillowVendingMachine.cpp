#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVendingMachine()
{
    py::class_< AWillowVendingMachine,  AWillowVendingMachineBase   >("AWillowVendingMachine")
        .def_readonly("ShopInventory", &AWillowVendingMachine::ShopInventory)
        .def_readwrite("FeaturedItem", &AWillowVendingMachine::FeaturedItem)
        .def_readwrite("FeaturedItemPickup", &AWillowVendingMachine::FeaturedItemPickup)
        .def_readwrite("FeaturedItemPickupAttachmentPoint", &AWillowVendingMachine::FeaturedItemPickupAttachmentPoint)
        .def_readwrite("LastInventoryResetTime", &AWillowVendingMachine::LastInventoryResetTime)
        .def_readwrite("CommerceMarkup", &AWillowVendingMachine::CommerceMarkup)
        .def_readwrite("InventoryConfigurationName", &AWillowVendingMachine::InventoryConfigurationName)
        .def_readwrite("FeaturedItemCommerceMarkup", &AWillowVendingMachine::FeaturedItemCommerceMarkup)
        .def_readwrite("FeaturedItemConfigurationName", &AWillowVendingMachine::FeaturedItemConfigurationName)
        .def_readwrite("FeaturedItemGameStage", &AWillowVendingMachine::FeaturedItemGameStage)
        .def_readwrite("FeaturedItemAwesomeLevel", &AWillowVendingMachine::FeaturedItemAwesomeLevel)
        .def("StaticClass", &AWillowVendingMachine::StaticClass, py::return_value_policy::reference)
        .def("PlayerBuyItem", &AWillowVendingMachine::PlayerBuyItem)
        .def("NotifyBasedPickupRemoved", &AWillowVendingMachine::NotifyBasedPickupRemoved)
        .def("eventGetInstanceData", &AWillowVendingMachine::eventGetInstanceData)
        .def("eventSetFeaturedItem", &AWillowVendingMachine::eventSetFeaturedItem)
        .def("ClearInventory", &AWillowVendingMachine::ClearInventory)
        .def("eventResetInventory", &AWillowVendingMachine::eventResetInventory)
        .def("GetFeaturedItem", &AWillowVendingMachine::GetFeaturedItem)
        .def("GetInventoryList", &AWillowVendingMachine::GetInventoryList)
        .def("RemoveSoldInventory", &AWillowVendingMachine::RemoveSoldInventory)
        .def("GetWeaponList", &AWillowVendingMachine::GetWeaponList)
        .def("GetItemList", &AWillowVendingMachine::GetItemList)
        .def("GetSellingPriceForInventory", &AWillowVendingMachine::GetSellingPriceForInventory)
        .def("GenerateInventory", &AWillowVendingMachine::GenerateInventory)
        .staticmethod("StaticClass")
  ;
}