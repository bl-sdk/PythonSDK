#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FASValue()
{
    py::class_< FASValue >("FASValue")
        .def_readwrite("Type", &FASValue::Type)
        .def_readwrite("N", &FASValue::N)
        .def_readwrite("S", &FASValue::S)
  ;
}