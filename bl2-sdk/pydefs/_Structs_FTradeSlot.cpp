#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FTradeSlot()
{
    class_< FTradeSlot >("FTradeSlot", no_init)
        .def_readwrite("Status", &FTradeSlot::Status)
        .def_readwrite("WeaponData", &FTradeSlot::WeaponData)
        .def_readwrite("ItemData", &FTradeSlot::ItemData)
        .def_readwrite("Quantity", &FTradeSlot::Quantity)
        .def_readwrite("WInv", &FTradeSlot::WInv)
  ;
}