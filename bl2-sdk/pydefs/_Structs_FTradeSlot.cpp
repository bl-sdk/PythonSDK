#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTradeSlot(py::module &m)
{
    py::class_< FTradeSlot >(m, "FTradeSlot")
        .def_readwrite("Status", &FTradeSlot::Status)
        .def_readwrite("WeaponData", &FTradeSlot::WeaponData)
        .def_readwrite("ItemData", &FTradeSlot::ItemData)
        .def_readwrite("Quantity", &FTradeSlot::Quantity)
        .def_readwrite("WInv", &FTradeSlot::WInv)
  ;
}