#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UIShop(py::module &m)
{
    py::class_< UIShop,  UInterface   >(m, "UIShop")
		.def_static("StaticClass", &UIShop::StaticClass, py::return_value_policy::reference)
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
          ;
}