#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveLinearColor(py::object m)
{
    py::class_< FInterpCurveLinearColor >(m, "FInterpCurveLinearColor")
        .def_readwrite("Points", &FInterpCurveLinearColor::Points)
        .def_readwrite("InterpMethod", &FInterpCurveLinearColor::InterpMethod)
  ;
}