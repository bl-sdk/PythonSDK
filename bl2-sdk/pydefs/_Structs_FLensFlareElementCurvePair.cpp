#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLensFlareElementCurvePair(py::object m)
{
    py::class_< FLensFlareElementCurvePair >(m, "FLensFlareElementCurvePair")
        .def_readwrite("CurveName", &FLensFlareElementCurvePair::CurveName)
        .def_readwrite("CurveObject", &FLensFlareElementCurvePair::CurveObject)
  ;
}