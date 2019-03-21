#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurvePointVector2D(py::object m)
{
    py::class_< FInterpCurvePointVector2D >(m, "FInterpCurvePointVector2D")
        .def_readwrite("InVal", &FInterpCurvePointVector2D::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointVector2D::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointVector2D::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointVector2D::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointVector2D::InterpMode)
  ;
}