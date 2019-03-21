#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHUDCoordValue(py::object m)
{
    py::class_< FHUDCoordValue >(m, "FHUDCoordValue")
        .def_readwrite("Type", &FHUDCoordValue::Type)
        .def_readwrite("Value", &FHUDCoordValue::Value)
        .def_readwrite("CurrentValue", &FHUDCoordValue::CurrentValue)
  ;
}