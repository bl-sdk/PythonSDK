#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FShopItemData()
{
    py::class_< FShopItemData >("FShopItemData")
        .def_readwrite("Item", &FShopItemData::Item)
        .def_readwrite("Price", &FShopItemData::Price)
        .def_readwrite("ItemStatus", &FShopItemData::ItemStatus)
  ;
}