#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPaintedVertex()
{
    py::class_< FPaintedVertex >("FPaintedVertex")
        .def_readwrite("Position", &FPaintedVertex::Position)
        .def_readwrite("Normal", &FPaintedVertex::Normal)
        .def_readwrite("Color", &FPaintedVertex::Color)
  ;
}