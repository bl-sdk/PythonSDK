#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomizationUnlockData()
{
    py::class_< FCustomizationUnlockData >("FCustomizationUnlockData")
        .def_readwrite("ProductID", &FCustomizationUnlockData::ProductID)
        .def_readwrite("NumUnlockedCustomizations", &FCustomizationUnlockData::NumUnlockedCustomizations)
        .def_readwrite("UnlockedMask", &FCustomizationUnlockData::UnlockedMask)
  ;
}