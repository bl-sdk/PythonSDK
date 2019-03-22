#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurvePointVector(py::module &m)
{
    py::class_< FInterpCurvePointVector >(m, "FInterpCurvePointVector")
        .def_readwrite("InVal", &FInterpCurvePointVector::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointVector::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointVector::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointVector::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointVector::InterpMode)
  ;
}