#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FLensFlareElementCurvePair()
{
    py::class_< FLensFlareElementCurvePair >("FLensFlareElementCurvePair")
        .def_readwrite("CurveName", &FLensFlareElementCurvePair::CurveName)
        .def_readwrite("CurveObject", &FLensFlareElementCurvePair::CurveObject)
  ;
}