#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FPolySegmentSpan(py::module &m)
{
    py::class_< FPolySegmentSpan >(m, "FPolySegmentSpan")
        .def_readwrite("Poly", &FPolySegmentSpan::Poly)
        .def_readwrite("P1", &FPolySegmentSpan::P1)
        .def_readwrite("P2", &FPolySegmentSpan::P2)
  ;
}