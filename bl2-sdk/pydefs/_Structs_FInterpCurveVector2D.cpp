#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveVector2D()
{
    py::class_< FInterpCurveVector2D >("FInterpCurveVector2D")
        .def_readwrite("Points", &FInterpCurveVector2D::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector2D::InterpMethod)
  ;
}