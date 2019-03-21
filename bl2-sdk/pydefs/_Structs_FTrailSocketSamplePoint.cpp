#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FTrailSocketSamplePoint(py::object m)
{
    py::class_< FTrailSocketSamplePoint >(m, "FTrailSocketSamplePoint")
        .def_readwrite("Position", &FTrailSocketSamplePoint::Position)
        .def_readwrite("Velocity", &FTrailSocketSamplePoint::Velocity)
  ;
}