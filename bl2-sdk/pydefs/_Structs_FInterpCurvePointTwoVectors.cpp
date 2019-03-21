#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurvePointTwoVectors(py::object m)
{
    py::class_< FInterpCurvePointTwoVectors >(m, "FInterpCurvePointTwoVectors")
        .def_readwrite("InVal", &FInterpCurvePointTwoVectors::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointTwoVectors::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointTwoVectors::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointTwoVectors::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointTwoVectors::InterpMode)
  ;
}