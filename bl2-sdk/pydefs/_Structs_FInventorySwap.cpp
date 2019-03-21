#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FInventorySwap()
{
    class_< FInventorySwap >("FInventorySwap", no_init)
        .def_readwrite("Original", &FInventorySwap::Original)
        .def_readwrite("SwapTo", &FInventorySwap::SwapTo)
  ;
}