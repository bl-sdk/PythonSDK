#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurveEdEntry(py::module &m)
{
    py::class_< FCurveEdEntry >(m, "FCurveEdEntry")
        .def_readwrite("CurveObject", &FCurveEdEntry::CurveObject)
        .def_readwrite("CurveColor", &FCurveEdEntry::CurveColor)
        .def_readwrite("CurveName", &FCurveEdEntry::CurveName)
        .def_readwrite("bHideCurve", &FCurveEdEntry::bHideCurve)
        .def_readwrite("bColorCurve", &FCurveEdEntry::bColorCurve)
        .def_readwrite("bFloatingPointColorCurve", &FCurveEdEntry::bFloatingPointColorCurve)
        .def_readwrite("bClamp", &FCurveEdEntry::bClamp)
        .def_readwrite("ClampLow", &FCurveEdEntry::ClampLow)
        .def_readwrite("ClampHigh", &FCurveEdEntry::ClampHigh)
  ;
}