#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBankSlot()
{
    py::class_< FBankSlot >("FBankSlot")
        .def_readwrite("InventorySerialNumber", &FBankSlot::InventorySerialNumber)
  ;
}