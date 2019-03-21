#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTradeSlot()
{
    py::class_< FTradeSlot >("FTradeSlot")
        .def_readwrite("Status", &FTradeSlot::Status)
        .def_readwrite("WeaponData", &FTradeSlot::WeaponData)
        .def_readwrite("ItemData", &FTradeSlot::ItemData)
        .def_readwrite("Quantity", &FTradeSlot::Quantity)
        .def_readwrite("WInv", &FTradeSlot::WInv)
  ;
}