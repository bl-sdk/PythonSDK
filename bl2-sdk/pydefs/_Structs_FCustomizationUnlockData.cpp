#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCustomizationUnlockData(py::module &m)
{
    py::class_< FCustomizationUnlockData >(m, "FCustomizationUnlockData")
        .def_readwrite("ProductID", &FCustomizationUnlockData::ProductID)
        .def_readwrite("NumUnlockedCustomizations", &FCustomizationUnlockData::NumUnlockedCustomizations)
        .def_readwrite("UnlockedMask", &FCustomizationUnlockData::UnlockedMask)
  ;
}