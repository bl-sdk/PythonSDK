#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FIntPoint()
{
    py::class_< FIntPoint >("FIntPoint")
        .def_readwrite("X", &FIntPoint::X)
        .def_readwrite("Y", &FIntPoint::Y)
  ;
}