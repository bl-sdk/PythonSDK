#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveFloat(py::object m)
{
    py::class_< FInterpCurveFloat >(m, "FInterpCurveFloat")
        .def_readwrite("Points", &FInterpCurveFloat::Points)
        .def_readwrite("InterpMethod", &FInterpCurveFloat::InterpMethod)
  ;
}