#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveVector(py::module &m)
{
    py::class_< FInterpCurveVector >(m, "FInterpCurveVector")
        .def_readwrite("Points", &FInterpCurveVector::Points)
        .def_readwrite("InterpMethod", &FInterpCurveVector::InterpMethod)
  ;
}