#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIShop()
{
    class_< UIShop, bases< UInterface >  , boost::noncopyable>("UIShop", no_init)
        .def("StaticClass", &UIShop::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetSellingPriceForInventory", &UIShop::GetSellingPriceForInventory)
        .def("GetCurrencyTypeInventoryIsSoldIn", &UIShop::GetCurrencyTypeInventoryIsSoldIn)
        .def("PlayerBuyBackItem", &UIShop::PlayerBuyBackItem)
        .def("PlayerBuyItem", &UIShop::PlayerBuyItem)
        .def("PlayerSellItem", &UIShop::PlayerSellItem)
        .def("GetFeaturedItem", &UIShop::GetFeaturedItem)
        .def("GetBuyBackList", &UIShop::GetBuyBackList)
        .def("GetInventoryList", &UIShop::GetInventoryList)
        .def("GetShopType", &UIShop::GetShopType)
        .def("GetWeaponList", &UIShop::GetWeaponList)
        .def("GetItemList", &UIShop::GetItemList)
        .def("RemoveSoldInventory", &UIShop::RemoveSoldInventory)
        .def("GetResetCost", &UIShop::GetResetCost)
        .def("eventResetInventory", &UIShop::eventResetInventory)
        .staticmethod("StaticClass")
  ;
}