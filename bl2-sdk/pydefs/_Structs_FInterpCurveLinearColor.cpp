#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveLinearColor()
{
    py::class_< FInterpCurveLinearColor >("FInterpCurveLinearColor")
        .def_readwrite("Points", &FInterpCurveLinearColor::Points)
        .def_readwrite("InterpMethod", &FInterpCurveLinearColor::InterpMethod)
  ;
}