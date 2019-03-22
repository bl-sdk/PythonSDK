#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FChestData(py::module &m)
{
    py::class_< FChestData >(m, "FChestData")
        .def_readwrite("InventoryClass", &FChestData::InventoryClass)
        .def_readwrite("InventorySerialNumber", &FChestData::InventorySerialNumber)
        .def_readwrite("Inventory", &FChestData::Inventory)
  ;
}