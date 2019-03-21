#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveVector()
{
    py::class_< FInterpCurveVector >("FInterpCurveVector")
        .def_readwrite("Points", &FInterpCurveVector::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector::InterpMethod)
  ;
}