#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrailSamplePoint()
{
    py::class_< FTrailSamplePoint >("FTrailSamplePoint")
        .def_readwrite("RelativeTime", &FTrailSamplePoint::RelativeTime)
        .def_readwrite("FirstEdgeSample", &FTrailSamplePoint::FirstEdgeSample)
        .def_readwrite("ControlPointSample", &FTrailSamplePoint::ControlPointSample)
        .def_readwrite("SecondEdgeSample", &FTrailSamplePoint::SecondEdgeSample)
  ;
}