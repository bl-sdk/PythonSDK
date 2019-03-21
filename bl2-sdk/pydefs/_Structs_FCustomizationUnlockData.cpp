#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FCustomizationUnlockData()
{
    class_< FCustomizationUnlockData >("FCustomizationUnlockData", no_init)
        .def_readwrite("ProductID", &FCustomizationUnlockData::ProductID)
        .def_readwrite("NumUnlockedCustomizations", &FCustomizationUnlockData::NumUnlockedCustomizations)
        .def_readwrite("UnlockedMask", &FCustomizationUnlockData::UnlockedMask)
  ;
}