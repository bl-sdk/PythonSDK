#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FBankSlot(py::module &m)
{
    py::class_< FBankSlot >(m, "FBankSlot")
        .def_readwrite("InventorySerialNumber", &FBankSlot::InventorySerialNumber)
  ;
}