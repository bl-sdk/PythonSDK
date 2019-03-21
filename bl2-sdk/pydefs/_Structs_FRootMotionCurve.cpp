#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FRootMotionCurve()
{
    py::class_< FRootMotionCurve >("FRootMotionCurve")
        .def_readwrite("AnimName", &FRootMotionCurve::AnimName)
        .def_readwrite("Curve", &FRootMotionCurve::Curve)
        .def_readwrite("MaxCurveTime", &FRootMotionCurve::MaxCurveTime)
  ;
}