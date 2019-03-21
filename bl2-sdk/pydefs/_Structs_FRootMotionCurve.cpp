#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRootMotionCurve(py::object m)
{
    py::class_< FRootMotionCurve >(m, "FRootMotionCurve")
        .def_readwrite("AnimName", &FRootMotionCurve::AnimName)
        .def_readwrite("Curve", &FRootMotionCurve::Curve)
        .def_readwrite("MaxCurveTime", &FRootMotionCurve::MaxCurveTime)
  ;
}