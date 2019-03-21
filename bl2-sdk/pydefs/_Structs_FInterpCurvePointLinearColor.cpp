#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurvePointLinearColor()
{
    py::class_< FInterpCurvePointLinearColor >("FInterpCurvePointLinearColor")
        .def_readwrite("InVal", &FInterpCurvePointLinearColor::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointLinearColor::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointLinearColor::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointLinearColor::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointLinearColor::InterpMode)
  ;
}