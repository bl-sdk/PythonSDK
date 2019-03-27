#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurveQuat(py::module &m)
{
    py::class_< FInterpCurveQuat >(m, "FInterpCurveQuat")
        .def_readwrite("Points", &FInterpCurveQuat::Points)
        .def_readwrite("InterpMethod", &FInterpCurveQuat::InterpMethod)
  ;
}