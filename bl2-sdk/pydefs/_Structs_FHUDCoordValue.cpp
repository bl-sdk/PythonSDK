#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHUDCoordValue()
{
    py::class_< FHUDCoordValue >("FHUDCoordValue")
        .def_readwrite("Type", &FHUDCoordValue::Type)
        .def_readwrite("Value", &FHUDCoordValue::Value)
        .def_readwrite("CurrentValue", &FHUDCoordValue::CurrentValue)
  ;
}