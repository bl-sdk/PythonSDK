#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveVector2D(py::object m)
{
    py::class_< FInterpCurveVector2D >(m, "FInterpCurveVector2D")
        .def_readwrite("Points", &FInterpCurveVector2D::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector2D::InterpMethod)
  ;
}