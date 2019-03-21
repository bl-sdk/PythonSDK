#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FChestData()
{
    class_< FChestData >("FChestData", no_init)
        .def_readwrite("InventoryClass", &FChestData::InventoryClass)
        .def_readwrite("InventorySerialNumber", &FChestData::InventorySerialNumber)
        .def_readwrite("Inventory", &FChestData::Inventory)
  ;
}