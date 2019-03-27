#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FProductCustomizationInfo(py::module &m)
{
    py::class_< FProductCustomizationInfo >(m, "FProductCustomizationInfo")
        .def_readwrite("ProductID", &FProductCustomizationInfo::ProductID)
        .def_readwrite("NumUnlockableCustomizations", &FProductCustomizationInfo::NumUnlockableCustomizations)
        .def_readwrite("NumCustomizations", &FProductCustomizationInfo::NumCustomizations)
  ;
}