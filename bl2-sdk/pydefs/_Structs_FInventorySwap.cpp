#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInventorySwap(py::module &m)
{
    py::class_< FInventorySwap >(m, "FInventorySwap")
        .def_readwrite("Original", &FInventorySwap::Original)
        .def_readwrite("SwapTo", &FInventorySwap::SwapTo)
  ;
}