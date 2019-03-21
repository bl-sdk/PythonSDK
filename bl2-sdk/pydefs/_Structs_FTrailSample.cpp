#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrailSample()
{
    py::class_< FTrailSample >("FTrailSample")
        .def_readwrite("RelativeTime", &FTrailSample::RelativeTime)
        .def_readwrite("FirstEdgeSample", &FTrailSample::FirstEdgeSample)
        .def_readwrite("ControlPointSample", &FTrailSample::ControlPointSample)
        .def_readwrite("SecondEdgeSample", &FTrailSample::SecondEdgeSample)
  ;
}