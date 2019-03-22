#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FCurveTrack(py::module &m)
{
    py::class_< FCurveTrack >(m, "FCurveTrack")
        .def_readwrite("CurveName", &FCurveTrack::CurveName)
        .def_readwrite("CurveWeights", &FCurveTrack::CurveWeights)
  ;
}