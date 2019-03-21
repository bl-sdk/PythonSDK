#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowVendingMachineBase()
{
    class_< AWillowVendingMachineBase, bases< AWillowInteractiveObject >  , boost::noncopyable>("AWillowVendingMachineBase", no_init)
        .def_readwrite("VfTable_IIShop", &AWillowVendingMachineBase::VfTable_IIShop)
        .def_readwrite("ShopType", &AWillowVendingMachineBase::ShopType)
        .def_readwrite("FormOfCurrency", &AWillowVendingMachineBase::FormOfCurrency)
        .def_readwrite("FixedItemCost", &AWillowVendingMachineBase::FixedItemCost)
        .def_readwrite("FixedFeaturedItemCost", &AWillowVendingMachineBase::FixedFeaturedItemCost)
        .def("StaticClass", &AWillowVendingMachineBase::StaticClass, return_value_policy< reference_existing_object >())
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
        .staticmethod("StaticClass")
  ;
}