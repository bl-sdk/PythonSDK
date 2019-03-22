#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_AWillowVendingMachineBase(py::module &m)
{
    py::class_< AWillowVendingMachineBase,  AWillowInteractiveObject   >(m, "AWillowVendingMachineBase")
        .def_readwrite("VfTable_IIShop", &AWillowVendingMachineBase::VfTable_IIShop)
        .def_readwrite("ShopType", &AWillowVendingMachineBase::ShopType)
        .def_readwrite("FormOfCurrency", &AWillowVendingMachineBase::FormOfCurrency)
        .def_readwrite("FixedItemCost", &AWillowVendingMachineBase::FixedItemCost)
        .def_readwrite("FixedFeaturedItemCost", &AWillowVendingMachineBase::FixedFeaturedItemCost)
        .def("eventDestroyed", &AWillowVendingMachineBase::eventDestroyed)
        .def("GetResetCost", &AWillowVendingMachineBase::GetResetCost)
        .def("ClearInventory", &AWillowVendingMachineBase::ClearInventory)
        .def("eventResetInventory", &AWillowVendingMachineBase::eventResetInventory)
        .def("PlayerBuyBackItem", &AWillowVendingMachineBase::PlayerBuyBackItem)
        .def("PlayerBuyItem", &AWillowVendingMachineBase::PlayerBuyItem)
        .def("PlayerSellItem", &AWillowVendingMachineBase::PlayerSellItem)
        .def("GetFeaturedItem", &AWillowVendingMachineBase::GetFeaturedItem)
        .def("GetBuyBackList", &AWillowVendingMachineBase::GetBuyBackList)
        .def("GetInventoryList", &AWillowVendingMachineBase::GetInventoryList)
        .def("GetItemStatus", &AWillowVendingMachineBase::GetItemStatus)
        .def("NotifyBasedPickupRemoved", &AWillowVendingMachineBase::NotifyBasedPickupRemoved)
        .def("RemoveSoldInventory", &AWillowVendingMachineBase::RemoveSoldInventory)
        .def("GetWeaponList", &AWillowVendingMachineBase::GetWeaponList)
        .def("GetItemList", &AWillowVendingMachineBase::GetItemList)
        .def("GetSellingPriceForInventory", &AWillowVendingMachineBase::GetSellingPriceForInventory)
        .def("GetCurrencyTypeInventoryIsSoldIn", &AWillowVendingMachineBase::GetCurrencyTypeInventoryIsSoldIn)
        .def("GetShopType", &AWillowVendingMachineBase::GetShopType)
          ;
}