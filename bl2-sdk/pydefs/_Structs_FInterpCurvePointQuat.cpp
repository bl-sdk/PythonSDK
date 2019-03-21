#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurvePointQuat()
{
    py::class_< FInterpCurvePointQuat >("FInterpCurvePointQuat")
        .def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
        .def_readonly("UnknownData00", &FInterpCurvePointQuat::UnknownData00)
        .def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode)
  ;
}