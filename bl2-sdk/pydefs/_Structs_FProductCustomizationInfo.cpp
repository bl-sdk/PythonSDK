#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProductCustomizationInfo()
{
    py::class_< FProductCustomizationInfo >("FProductCustomizationInfo")
        .def_readwrite("ProductID", &FProductCustomizationInfo::ProductID)
        .def_readwrite("NumUnlockableCustomizations", &FProductCustomizationInfo::NumUnlockableCustomizations)
        .def_readwrite("NumCustomizations", &FProductCustomizationInfo::NumCustomizations)
  ;
}