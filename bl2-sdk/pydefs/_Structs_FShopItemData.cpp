#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FShopItemData()
{
    class_< FShopItemData >("FShopItemData", no_init)
        .def_readwrite("Item", &FShopItemData::Item)
        .def_readwrite("Price", &FShopItemData::Price)
        .def_readwrite("ItemStatus", &FShopItemData::ItemStatus)
  ;
}