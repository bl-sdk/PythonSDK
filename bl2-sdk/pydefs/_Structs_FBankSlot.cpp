#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FBankSlot()
{
    class_< FBankSlot >("FBankSlot", no_init)
        .def_readwrite("InventorySerialNumber", &FBankSlot::InventorySerialNumber)
  ;
}