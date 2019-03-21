#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurvePointFloat()
{
    py::class_< FInterpCurvePointFloat >("FInterpCurvePointFloat")
        .def_readwrite("InVal", &FInterpCurvePointFloat::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointFloat::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointFloat::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointFloat::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointFloat::InterpMode)
  ;
}