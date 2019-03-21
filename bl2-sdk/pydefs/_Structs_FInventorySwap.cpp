#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventorySwap()
{
    py::class_< FInventorySwap >("FInventorySwap")
        .def_readwrite("Original", &FInventorySwap::Original)
        .def_readwrite("SwapTo", &FInventorySwap::SwapTo)
  ;
}