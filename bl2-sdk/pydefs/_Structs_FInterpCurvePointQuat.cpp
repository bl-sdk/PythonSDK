#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FInterpCurvePointQuat(py::module &m)
{
    py::class_< FInterpCurvePointQuat >(m, "FInterpCurvePointQuat")
        .def_readwrite("InVal", &FInterpCurvePointQuat::InVal)
        .def_readwrite("OutVal", &FInterpCurvePointQuat::OutVal)
        .def_readwrite("ArriveTangent", &FInterpCurvePointQuat::ArriveTangent)
        .def_readwrite("LeaveTangent", &FInterpCurvePointQuat::LeaveTangent)
        .def_readwrite("InterpMode", &FInterpCurvePointQuat::InterpMode)
  ;
}